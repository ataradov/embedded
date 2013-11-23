#!/usr/bin/python
#
# Copyright (c) 2013, Alex Taradov <taradov@gmail.com>
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
#

#------------------------------------------------------------------------------
import common
import pdc
import nvic
import scb
import syst
import mpu
import hsmci
import ssc
import spi
import tc
import twi
import pwm
import usart
import udp
import adc
import dacc
import acc
import crccu
import smc
import matrix
import pmc
import uart
import chipid
import eefc
import pio
import rstc
import supc
import rtt
import wdt
import rtc
import gpbr

#------------------------------------------------------------------------------
db = [
  ('NVIC',       0xe000e100, nvic.regs),
  ('SCB',        0xe000e000, scb.regs),
  ('SYST',       0xe000e010, syst.regs),
  ('MPU',        0xe000ed90, mpu.regs),
  ('HSMCI',      0x40000000, hsmci.regs),
  ('HSMCI_PDC',  0x40000100, pdc.regs),
  ('SSC',        0x40004000, ssc.regs),
  ('SSC_PDC',    0x40004100, pdc.regs),
  ('SPI',        0x40008000, spi.regs),
  ('SPI_PDC',    0x40008100, pdc.regs),
  ('TC0',        0x40010000, tc.regs),
  ('TC1',        0x40014000, tc.regs),
  ('TWI0',       0x40018000, twi.regs),
  ('TWI0_PDC',   0x40018100, pdc.regs),
  ('TWI1',       0x4001c000, twi.regs),
  ('TWI1_PDC',   0x4001c100, pdc.regs),
  ('PWM',        0x40020000, pwm.regs),
  ('PWM_PDC',    0x40020100, pdc.regs),
  ('USART0',     0x40024000, usart.regs),
  ('USART0_PDC', 0x40024100, pdc.regs),
  ('USART1',     0x40028000, usart.regs),
  ('USART1_PDC', 0x40028100, pdc.regs),
  ('UDP',        0x40034000, udp.regs),
  ('ADC',        0x40038000, adc.regs),
  ('ADC_PDC',    0x40038100, pdc.regs),
  ('DACC',       0x4003c000, dacc.regs),
  ('DACC_PDC',   0x4003c100, pdc.regs),
  ('ACC',        0x40040000, acc.regs),
  ('CRCCU',      0x40044000, crccu.regs),
  ('SMC',        0x400e0000, smc.regs),
  ('MATRIX',     0x400e0200, matrix.regs),
  ('PMC',        0x400e0400, pmc.regs),
  ('UART0',      0x400e0600, uart.regs),
  ('UART0_PDC',  0x400e0700, pdc.regs),
  ('CHIPID',     0x400e0740, chipid.regs),
  ('UART1',      0x400e0800, uart.regs),
  ('UART1_PDC',  0x400e0900, pdc.regs),
  ('EEFC',       0x400e0a00, eefc.regs),
  ('PIOA',       0x400e0e00, pio.regs),
  ('PIOA_PDC',   0x400e0f68, pdc.regs),
  ('PIOB',       0x400e1000, pio.regs),
  ('PIOC',       0x400e1200, pio.regs),
  ('RSTC',       0x400e1400, rstc.regs),
  ('SUPC',       0x400e1410, supc.regs),
  ('RTT',        0x400e1430, rtt.regs),
  ('WDT',        0x400e1450, wdt.regs),
  ('RTC',        0x400e1460, rtc.regs),
  ('GPBR',       0x400e1490, gpbr.regs),
]

#------------------------------------------------------------------------------
def main():
  print '// This file was generated automatically. Visit https://github.com/ataradov/embedded to get the source.'
  print '#ifndef _SAM4S_H_'
  print '#define _SAM4S_H_'
  print '#include <stdint.h>'
  print '#define MMIO_REG(mem_addr, type) (*(volatile type *)(mem_addr))'

  for name, base, regs in db:
    print ''
    print '// 0x%08x %s' % (base, name)
    for reg in regs:
      print ''
      if len(reg) == 2:
        reg_offs, reg_name = reg

        if isinstance(reg_offs, tuple):
          print '#define %s_%s(n)\tMMIO_REG(0x%08x + n*4, uint32_t)' % (name, reg_name, base + reg_offs[0])
        else:
          print '#define %s_%s\tMMIO_REG(0x%08x, uint32_t)' % (name, reg_name, base + reg_offs)

      else:
        reg_offs, reg_name, reg_fields = reg

        if isinstance(reg_offs, tuple):
          print '#define %s_%s(n)\tMMIO_REG(0x%08x + n*4, uint32_t)' % (name, reg_name, base + reg_offs[0])
        else:
          print '#define %s_%s\tMMIO_REG(0x%08x, uint32_t)' % (name, reg_name, base + reg_offs)

        field_offset = 0
        for field_name, field_size in reg_fields:
          if field_name:
            full_field_name = '_'.join([name, reg_name, field_name.upper()])

            if field_size == 1:
              print '#define %s\t(1 << %d)' % (full_field_name, field_offset)
            else:
              field_mask = (1 << field_size)-1
              print '#define %s(x)\t((x) << %d)' % (full_field_name, field_offset)
              print '#define %s_MSK\t0x%08x' % (full_field_name, field_mask << field_offset)
              print '#define %s_VAL(x)\t(((x) >> %d) & 0x%x)' % (full_field_name, field_offset, field_mask)

          field_offset += field_size

        print ''
        if isinstance(reg_offs, tuple):
          print '#define %s_%s_s(n)\tMMIO_REG(0x%08x + n*4, struct __struct_%s_%s)' % (name, reg_name, base + reg_offs[0], name, reg_name)
        else:
          print '#define %s_%s_s\tMMIO_REG(0x%08x, struct __struct_%s_%s)' % (name, reg_name, base + reg_offs, name, reg_name)
        print 'struct __struct_%s_%s' % (name, reg_name)
        print '{'
        for field_name, field_size in reg_fields:
          print '  uint32_t %s : %d;' % (field_name, field_size)
        print '};'

        if sum([field_size for field_name, field_size in reg_fields]) != 32:
          raise Exception('sum of filed sizes is not 32')

  print ''
  print '#endif // _SAM4S_H_'

#------------------------------------------------------------------------------
main()

