#!/usr/bin/python

import os
import sys
import time
import serial

#------------------------------------------------------------------------------
START_ADDRESS     = 0x2000

FLASH_ROW_SIZE    = 256
FLASH_PAGE_SIZE   = 64

DSU_DID           = 0x41002118

NVMCTRL_CTRLA     = 0x41004000
NVMCTRL_INTFLAG   = 0x41004014
NVMCTRL_ADDR      = 0x4100401c

NVMCTRL_READY     = (1 << 0)

NVMCTRL_CMD_ER    = 0xa502
NVMCTRL_CMD_WP    = 0xa504
NVMCTRL_CMD_UR    = 0xa541

#------------------------------------------------------------------------------
def error(text):
  sys.stderr.write('Error: %s\n' % text)
  sys.exit(-1)

#------------------------------------------------------------------------------
def debug(text):
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
def program_page(port, addr, data):
  for i in range(0, FLASH_PAGE_SIZE, 4):
    value = (data[i+3] << 24) | (data[i+2] << 16) | (data[i+1] << 8) | data[i]
    reg(port, addr + i, value)

  reg(port, NVMCTRL_CTRLA, NVMCTRL_CMD_WP); # Write Page
  time.sleep(0.05)
  #while (0 == (reg(port, NVMCTRL_INTFLAG) & NVMCTRL_READY)):
  #  pass

  debug('.')

#------------------------------------------------------------------------------
def program(port, data):
  addr = START_ADDRESS
  size = len(data)
  offs = 0

  number_of_rows = (size + FLASH_ROW_SIZE - 1) / FLASH_ROW_SIZE
  pages_in_row   = FLASH_ROW_SIZE / FLASH_PAGE_SIZE

  for row in range(number_of_rows):
    reg(port, NVMCTRL_ADDR, addr >> 1)

    reg(port, NVMCTRL_CTRLA, NVMCTRL_CMD_UR); # Unlock Region
    while (0 == (reg(port, NVMCTRL_INTFLAG) & NVMCTRL_READY)):
      pass

    reg(port, NVMCTRL_CTRLA, NVMCTRL_CMD_ER); # Erase Row
    while (0 == (reg(port, NVMCTRL_INTFLAG) & NVMCTRL_READY)):
      pass

    for page in range(pages_in_row):
      program_page(port, addr, data[offs:offs+FLASH_PAGE_SIZE])
      offs += FLASH_PAGE_SIZE
      addr += FLASH_PAGE_SIZE

  debug('\r\n')

#------------------------------------------------------------------------------
def verify(port, data):
  addr = START_ADDRESS
  size = len(data)
  offs = 0

  for i in range(0, size, 4):
    exp_value = (data[i+3] << 24) | (data[i+2] << 16) | (data[i+1] << 8) | data[i]
    got_value = reg(port, addr + i)

    if i % 64 == 0:
      debug('.')

    if exp_value != got_value:
      debug('Verification error at 0x%04x. Expected 0x%08x, got 0x%08x\r\n' % (addr + i, exp_value, got_value))
      return

  debug('\r\n')

#------------------------------------------------------------------------------
def main():
  try:
    port = serial.Serial('COM3', 115200, timeout=1)
  except serial.serialutil.SerialException, inst:
    error(inst)

  command(port, 'N#')

  res = command(port, 'V#')
  if res is not None:
    res = res.strip()
  else:
    error('SAM-BA not found\n')

  if res.startswith('v'):
    debug('SAM-BA %s found\n' % res)
  else:
    error('SAM-BA not found\n')

  did = reg(port, DSU_DID)
  debug('DSU.DID = 0x%08x\n' % did)

  try:
    data = map(ord, open('firmware.bin', 'rb').read())
  except OSError, inst:
    error(inst)

  while (len(data) % FLASH_ROW_SIZE) > 0:
    data += [0xff]

  debug('Program\n')
  program(port, data)

  debug('Verify\n')
  verify(port, data)

  debug('Done!\n')

  port.close()

#------------------------------------------------------------------------------
main()

