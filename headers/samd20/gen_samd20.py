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
import pac0
import pac1
import pac2
import pm
import sysctrl
import gclk
import wdt
import rtc
import eic
import dsu
import nvmctrl
import port
import evsys
import sercom
import tc
import adc
import ac
import dac
import ptc
import cm0_scs

#------------------------------------------------------------------------------
db = [
  # Peripheral Bridge A
  ('PAC0',       0x40000000, pac0.regs),
  ('PM',         0x40000400, pm.regs),
  ('SYSCTRL',    0x40000800, sysctrl.regs),
  ('GCLK',       0x40000c00, gclk.regs),
  ('WDT',        0x40001000, wdt.regs),
  ('RTC_M0',     0x40001400, rtc.regs_m0),
  ('RTC_M1',     0x40001400, rtc.regs_m1),
  ('RTC_M2',     0x40001400, rtc.regs_m2),
  ('EIC',        0x40001800, eic.regs),

  # Peripheral Bridge B
  ('PAC1',       0x41000000, pac1.regs),
  ('DSU',        0x41002000, dsu.regs),
  ('NVMCTRL',    0x41004000, nvmctrl.regs),
  ('PORTA',      0x41004400, port.regs),
  ('PORTB',      0x41004480, port.regs),

  # Peripheral Bridge C
  ('PAC2',       0x42000000, pac2.regs),
  ('EVSYS',      0x42000400, evsys.regs),
  ('SC0_USART',  0x42000800, sercom.regs_usart),
  ('SC0_SPI',    0x42000800, sercom.regs_spi),
  ('SC0_I2C_S',  0x42000800, sercom.regs_i2c_slave),
  ('SC0_I2C_M',  0x42000800, sercom.regs_i2c_master),
  ('SC1_USART',  0x42000c00, sercom.regs_usart),
  ('SC1_SPI',    0x42000c00, sercom.regs_spi),
  ('SC1_I2C_S',  0x42000c00, sercom.regs_i2c_slave),
  ('SC1_I2C_M',  0x42000c00, sercom.regs_i2c_master),
  ('SC2_USART',  0x42001000, sercom.regs_usart),
  ('SC2_SPI',    0x42001000, sercom.regs_spi),
  ('SC2_I2C_S',  0x42001000, sercom.regs_i2c_slave),
  ('SC2_I2C_M',  0x42001000, sercom.regs_i2c_master),
  ('SC3_USART',  0x42001400, sercom.regs_usart),
  ('SC3_SPI',    0x42001400, sercom.regs_spi),
  ('SC3_I2C_S',  0x42001400, sercom.regs_i2c_slave),
  ('SC3_I2C_M',  0x42001400, sercom.regs_i2c_master),
  ('SC4_USART',  0x42001800, sercom.regs_usart),
  ('SC4_SPI',    0x42001800, sercom.regs_spi),
  ('SC4_I2C_S',  0x42001800, sercom.regs_i2c_slave),
  ('SC4_I2C_M',  0x42001800, sercom.regs_i2c_master),
  ('SC5_USART',  0x42001c00, sercom.regs_usart),
  ('SC5_SPI',    0x42001c00, sercom.regs_spi),
  ('SC5_I2C_S',  0x42001c00, sercom.regs_i2c_slave),
  ('SC5_I2C_M',  0x42001c00, sercom.regs_i2c_master),
  ('TC0_8',      0x42002000, tc.regs_8),
  ('TC0_16',     0x42002000, tc.regs_16),
  ('TC0_32',     0x42002000, tc.regs_32),
  ('TC1_8',      0x42002400, tc.regs_8),
  ('TC1_16',     0x42002400, tc.regs_16),
  ('TC1_32',     0x42002400, tc.regs_32),
  ('TC2_8',      0x42002800, tc.regs_8),
  ('TC2_16',     0x42002800, tc.regs_16),
  ('TC2_32',     0x42002800, tc.regs_32),
  ('TC3_8',      0x42002c00, tc.regs_8),
  ('TC3_16',     0x42002c00, tc.regs_16),
  ('TC3_32',     0x42002c00, tc.regs_32),
  ('TC4_8',      0x42003000, tc.regs_8),
  ('TC4_16',     0x42003000, tc.regs_16),
  ('TC4_32',     0x42003000, tc.regs_32),
  ('TC5_8',      0x42003400, tc.regs_8),
  ('TC5_16',     0x42003400, tc.regs_16),
  ('TC5_32',     0x42003400, tc.regs_32),
  ('TC6_8',      0x42003800, tc.regs_8),
  ('TC6_16',     0x42003800, tc.regs_16),
  ('TC6_32',     0x42003800, tc.regs_32),
  ('TC7_8',      0x42003c00, tc.regs_8),
  ('TC7_16',     0x42003c00, tc.regs_16),
  ('TC7_32',     0x42003c00, tc.regs_32),
  ('ADC',        0x42004000, adc.regs),
  ('AC',         0x42004400, ac.regs),
  ('DAC',        0x42004800, dac.regs),
  ('PTC',        0x42004c00, ptc.regs),

  # Cortex-M0+ System Control Space
  ('SYSTICK',    0xe000e010, cm0_scs.regs_systick),
  ('NVIC',       0xe000e100, cm0_scs.regs_nvic),
  ('SCB',        0xe000ed00, cm0_scs.regs_scb),
]

#------------------------------------------------------------------------------
def main():
  print '// This file was generated automatically. Visit https://github.com/ataradov/embedded to get the source.'
  print '#ifndef _SAMD20_H_'
  print '#define _SAMD20_H_'
  print '#include <stdint.h>'
  print '#define MMIO_REG(mem_addr, type) (*(volatile type *)(mem_addr))'

  for name, base, regs in db:
    print ''
    print '// 0x%08x %s' % (base, name)
    for reg in regs:
      if len(reg) == 2:
        reg_offs, reg_name = reg
        print ''
        print '#define %s_%s\tMMIO_REG(0x%08x, uint32_t)' % (name, reg_name, base + reg_offs)

      else:
        reg_offs, reg_name, reg_fields = reg
        reg_size = sum([field_size for field_name, field_size in reg_fields])

        if reg_size not in [8, 16, 32]:
          raise Exception('%s: register size must be 8, 16 or 32 bits' % reg_name)

        print ''
        print '#define %s_%s\tMMIO_REG(0x%08x, uint%d_t)' % (name, reg_name, base + reg_offs, reg_size)

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
        print '#define %s_%s_s    MMIO_REG(0x%08x, struct __struct_%s_%s)' % (name, reg_name, base + reg_offs, name, reg_name)
        print 'struct __struct_%s_%s' % (name, reg_name)
        print '{'
        for field_name, field_size in reg_fields:
          print '  uint%d_t %s : %d;' % (reg_size, field_name, field_size)
        print '};'

  print ''
  print '#endif // _SAMD20_H_'

#------------------------------------------------------------------------------
main()

