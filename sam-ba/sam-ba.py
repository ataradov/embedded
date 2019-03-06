#!/usr/bin/python
#
# Copyright (c) 2014-2019, Alex Taradov <taradov@gmail.com>
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.

import os
import sys
import time
import serial
import optparse
import binascii

#------------------------------------------------------------------------------
N_PLANES    = 2 # NOTE: change according to your device, no auto detect for this

EEFC_FMR    = [0x400e0a00, 0x400e0c00]
EEFC_FCR    = [0x400e0a04, 0x400e0c04]
EEFC_FSR    = [0x400e0a08, 0x400e0c08]
EEFC_FRR    = [0x400e0a0c, 0x400e0c0c]
FSR_FRDY    = 1

CMD_GETD    = 0x5a000000
CMD_WP      = 0x5a000001
CMD_EPA     = 0x5a000007
CMD_EA      = 0x5a000005
CMD_SGPB    = 0x5a00000b

FLASH_START          = 0x00400000
FLASH_PAGE_SIZE      = 512
PAGES_IN_ERASE_BLOCK = 16

#------------------------------------------------------------------------------
def error(text):
  sys.stderr.write('Error: %s\n' % text)
  sys.exit(-1)

#------------------------------------------------------------------------------
def debug(cond, text):
  if cond:
    sys.stdout.write(text)
    sys.stdout.flush()

#------------------------------------------------------------------------------
def command(port, cmd):
  try:
    res = ''
    port.write(cmd)
    while True:
      d = port.read(1)
      if len(d):
        res += d
      else:
        return None
      if res[-1] == '\r':
        break
    return res
  except serial.serialutil.SerialException, inst:
    error(str(inst))

#------------------------------------------------------------------------------
def reg(port, addr, value = None):
  if value is not None:
    port.write('W%08x,%08x#' % (addr, value))
  else:
    port.write('w%08x,#' % addr)
    d = map(ord, port.read(4))
    assert len(d) == 4
    return (d[3] << 24) | (d[2] << 16) | (d[1] << 8) | d[0]

#------------------------------------------------------------------------------
def main():
  parser = optparse.OptionParser(usage = 'usage: %prog [options] file')
  parser.add_option('-d', '--debug', dest = 'debug', help = 'enable debug output', default = False, action = 'store_true')
  parser.add_option('-i', '--interface', dest = 'port', help = 'communication interface [default /dev/ttyUSB0]', default = '/dev/ttyUSB0', metavar = 'PATH')
  parser.add_option('-e', '--erase', dest = 'erase', help = 'erase entire chip', default = False, action = 'store_true')
  parser.add_option('-p', '--program', dest = 'image', help = 'file to program', metavar = 'FILE')
  (options, args) = parser.parse_args()

  try:
    port = serial.Serial(options.port, 115200, timeout = 1)
  except serial.serialutil.SerialException, inst:
    error(inst)

  command(port, 'N#')

  res = command(port, 'V#')
  if res is not None:
    res = res.strip()
  else:
    error('SAM-BA not found\n')

  if res.startswith('v'):
    debug(options.debug, 'SAM-BA %s found\n' % res)
  else:
    error('SAM-BA not found\n')

  # We assume that both planes are the same and take parameters from the last one
  for plane in range(N_PLANES):
    reg(port, EEFC_FCR[plane], CMD_GETD)
    while reg(port, EEFC_FSR[plane]) & FSR_FRDY == 0: pass

    fl_id = reg(port, EEFC_FRR[plane])
    fl_size = reg(port, EEFC_FRR[plane])
    fl_page_size = reg(port, EEFC_FRR[plane])
    fl_nb_palne = reg(port, EEFC_FRR[plane])
    fl_plane = [reg(port, EEFC_FRR[plane]) for i in range(fl_nb_palne)]
    fl_nb_lock = reg(port, EEFC_FRR[plane])
    fl_lock = [reg(port, EEFC_FRR[plane]) for i in range(fl_nb_lock)]

    #debug(options.debug, 'Plane %d:\n' % plane)
    #debug(options.debug, '  Flash Interface Description [FL_ID] : %08x\n' % fl_id)
    #debug(options.debug, '  Flash size in bytes [FL_SIZE]       : %d\n' % fl_size)
    #debug(options.debug, '  Page size in bytes [FL_PAGE_SIZE]   : %d\n' % fl_page_size)
    #debug(options.debug, '  Number of planes [FL_NB_PLANE]      : %d\n' % fl_nb_palne)
    #for i, size in enumerate(fl_plane):
    #  debug(options.debug, '  Plane %d size in bytes [FL_PLANE]    : %d\n' % (i, size))
    #debug(options.debug, '  Number of lock bits [FL_NB_LOCK]    : %d\n' % fl_nb_lock)

  if FLASH_PAGE_SIZE == 0:
    error('Reported Flash page size is 0. Check Erase pin state.\n')

  if options.erase:
    debug(options.debug, 'Erasing Flash...')

    for plane in range(N_PLANES):
      reg(port, EEFC_FCR[plane], CMD_EA)

    for plane in range(N_PLANES):
      while reg(port, EEFC_FSR[plane]) & FSR_FRDY == 0: pass

    debug(options.debug, ' done\n')

  if options.image:
    try:
      f = open(options.image, 'rb')
      data = f.read()
      f.close()
    except OSError, inst:
      error(inst)

    while (len(data) % FLASH_PAGE_SIZE) > 0:
      data += chr(0xff)

    number_of_pages = len(data) / FLASH_PAGE_SIZE

    debug(options.debug, 'Prepared %d bytes spanning %d pages\n' % (len(data), number_of_pages))

    debug(options.debug, 'Programming... ')

    for page in range(0, number_of_pages, PAGES_IN_ERASE_BLOCK):
      plane = page / (fl_size / FLASH_PAGE_SIZE)
      reg(port, EEFC_FCR[plane], CMD_EPA | ((page | 2) << 8))
      while reg(port, EEFC_FSR[plane]) & FSR_FRDY == 0: pass
      sys.stdout.write('.')
      sys.stdout.flush()

    sys.stdout.write(',')
    sys.stdout.flush()

    addr = FLASH_START

    for page in range(number_of_pages):
      page_data = map(ord, data[page * FLASH_PAGE_SIZE:(page+1) * FLASH_PAGE_SIZE])
      for i in range(0, FLASH_PAGE_SIZE, 4):
        value = (page_data[i+3] << 24) | (page_data[i+2] << 16) | (page_data[i+1] << 8) | page_data[i]
        reg(port, addr + i, value)

      plane = page / (fl_size / FLASH_PAGE_SIZE)
      reg(port, EEFC_FCR[plane], CMD_WP | (page << 8))
      while reg(port, EEFC_FSR[plane]) & FSR_FRDY == 0: pass

      sys.stdout.write('.')
      sys.stdout.flush()
      addr += FLASH_PAGE_SIZE

    debug(options.debug, ' done\n')

    # Set GPNVM1 bit
    debug(options.debug, 'Setting GPNVM1 bit...')

    reg(port, EEFC_FCR[0], CMD_SGPB | (1 << 8))
    while reg(port, EEFC_FSR[0]) & FSR_FRDY == 0: pass

    debug(options.debug, ' done')
    debug(True, '\n')

  port.close()

#------------------------------------------------------------------------------
main()

