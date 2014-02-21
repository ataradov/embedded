#!/usr/bin/python
#
# Copyright (c) 2014, Alex Taradov <taradov@gmail.com>
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
EEFC_FMR    = 0x400E0A00
EEFC_FCR    = 0x400E0A04
EEFC_FSR    = 0x400E0A08
EEFC_FRR    = 0x400E0A0C
FSR_FRDY    = 1

CMD_GETD    = 0x5A000000
CMD_EWP     = 0x5A000003
CMD_EA      = 0x5A000005
CMD_SGPB    = 0x5A00000B

FLASH_START = 0x00400000

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
  parser.add_option('-p', '--program', dest = 'image', help = 'file to program', metavar = 'FILE')
  parser.add_option('-e', '--erase', dest = 'erase', help = 'erase entire chip', default = False, action = 'store_true')
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

  reg(port, EEFC_FCR, CMD_GETD)
  while reg(port, EEFC_FSR) & FSR_FRDY == 0: pass

  fl_id = reg(port, EEFC_FRR)
  fl_size = reg(port, EEFC_FRR)
  fl_page_size = reg(port, EEFC_FRR)
  fl_nb_palne = reg(port, EEFC_FRR)
  fl_plane = [reg(port, EEFC_FRR) for i in range(fl_nb_palne)]
  fl_nb_lock = reg(port, EEFC_FRR)
  fl_lock = [reg(port, EEFC_FRR) for i in range(fl_nb_lock)]

#  debug(options.debug, 'Flash Interface Description [FL_ID] : %08x\n' % fl_id)
#  debug(options.debug, 'Flash size in bytes [FL_SIZE]       : %d\n' % fl_size)
#  debug(options.debug, 'Page size in bytes [FL_PAGE_SIZE]   : %d\n' % fl_page_size)
#  debug(options.debug, 'Number of planes [FL_NB_PLANE]      : %d\n' % fl_nb_palne)
#  for i, size in enumerate(fl_plane):
#    debug(options.debug, 'Plane %d size in bytes [FL_PLANE]    : %d\n' % (i, size))
#  debug(options.debug, 'Number of lock bits [FL_NB_LOCK]    : %d\n' % fl_nb_lock)

  if fl_page_size == 0:
    error('Reported Flash page size is 0. Check Erase pin state.\n')

  if options.erase:
    debug(options.debug, 'Erasing Flash...')

    reg(port, EEFC_FCR, CMD_EA)
    while reg(port, EEFC_FSR) & FSR_FRDY == 0: pass

    debug(options.debug, ' done\n')

  if options.image:
    debug(options.debug, 'Programming Flash... ')
    try:
      f = open(options.image, 'rb')
      data = f.read()
      f.close()
    except OSError, inst:
      error(inst)

    while (len(data) % fl_page_size) > 0:
      data += chr(0xff)

    number_of_pages = len(data) / fl_page_size

    for page_index in range(number_of_pages):
      page = map(ord, data[page_index * fl_page_size:(page_index+1) * fl_page_size])
      for i in range(0, fl_page_size, 4):
        value = (page[i+3] << 24) | (page[i+2] << 16) | (page[i+1] << 8) | page[i]
        reg(port, FLASH_START + i, value)

      reg(port, EEFC_FCR, CMD_EWP | (page_index << 8))
      while reg(port, EEFC_FSR) & FSR_FRDY == 0: pass
      sys.stdout.write('.')
      sys.stdout.flush()

    debug(options.debug, ' done\n')

    # Set GPNVM1 bit
    debug(options.debug, 'Setting GPNVM1 bit...')

    reg(port, EEFC_FCR, CMD_SGPB | (1 << 8))
    while reg(port, EEFC_FSR) & FSR_FRDY == 0: pass

    debug(options.debug, ' done')
    debug(True, '\n')

  port.close()

#------------------------------------------------------------------------------
main()

