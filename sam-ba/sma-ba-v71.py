#!/usr/bin/python

import os
import sys
import time
import serial
import optparse
import binascii

#------------------------------------------------------------------------------
EEFC_FMR    = 0x400e0c00
EEFC_FCR    = 0x400e0c04
EEFC_FSR    = 0x400e0c08
EEFC_FRR    = 0x400e0c0c
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

  if options.erase:
    debug(options.debug, 'Erasing Flash...')

    reg(port, EEFC_FCR, CMD_EA)
    while reg(port, EEFC_FSR) & FSR_FRDY == 0: pass

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
      reg(port, EEFC_FCR, CMD_EPA | ((page | 2) << 8))
      while reg(port, EEFC_FSR) & FSR_FRDY == 0: pass
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

      reg(port, EEFC_FCR, CMD_WP | (page << 8))
      while reg(port, EEFC_FSR) & FSR_FRDY == 0: pass

      sys.stdout.write('.')
      sys.stdout.flush()
      addr += FLASH_PAGE_SIZE

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

