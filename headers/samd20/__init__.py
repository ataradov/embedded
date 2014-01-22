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
#

#------------------------------------------------------------------------------
import pac0
import pac1
import pac2
import pm
import sysctrl
import gclk
import wdt
import rtc_m0
import rtc_m1
import rtc_m2
import eic
import dsu
import nvmctrl
import port
import evsys
import sc_usart
import sc_spi
import sc_i2cs
import sc_i2cm
import tc_8
import tc_16
import tc_32
import adc
import ac
import dac
import ptc
import cm0_systick
import cm0_nvic
import cm0_scb

#------------------------------------------------------------------------------
series = 'SAM'
name = 'SAMD20'
doc = '42129J-SAM-12/2013'

peripherals = [
  pac0, pac1, pac2, pm, sysctrl, gclk, wdt, rtc_m0, rtc_m1, rtc_m2, eic,
  dsu, nvmctrl, port, evsys, sc_usart, sc_spi, sc_i2cs, sc_i2cm, tc_8, tc_16,
  tc_32, adc, ac, dac, ptc, cm0_systick, cm0_nvic, cm0_scb,
]

registers = [
  # Peripheral Bridge A
  ('PAC0',		0x40000000, pac0	),
  ('PM',		0x40000400, pm		),
  ('SYSCTRL',		0x40000800, sysctrl	),
  ('GCLK',		0x40000c00, gclk	),
  ('WDT',		0x40001000, wdt		),
  ('RTC_M0',		0x40001400, rtc_m0	),
  ('RTC_M1',		0x40001400, rtc_m1	),
  ('RTC_M2',		0x40001400, rtc_m2	),
  ('EIC',		0x40001800, eic		),

  # Peripheral Bridge B
  ('PAC1',		0x41000000, pac1	),
  ('DSU',		0x41002000, dsu		),
  ('NVMCTRL',		0x41004000, nvmctrl	),
  ('PORTA',		0x41004400, port	),
  ('PORTB',		0x41004480, port	),

  # Peripheral Bridge C
  ('PAC2',		0x42000000, pac2	),
  ('EVSYS',		0x42000400, evsys	),
  ('SC0_USART',		0x42000800, sc_usart	),
  ('SC0_SPI',		0x42000800, sc_spi	),
  ('SC0_I2CS',		0x42000800, sc_i2cs	),
  ('SC0_I2CM',		0x42000800, sc_i2cm	),
  ('SC1_USART',		0x42000c00, sc_usart	),
  ('SC1_SPI',		0x42000c00, sc_spi	),
  ('SC1_I2CS',		0x42000c00, sc_i2cs	),
  ('SC1_I2CM',		0x42000c00, sc_i2cm	),
  ('SC2_USART',		0x42001000, sc_usart	),
  ('SC2_SPI',		0x42001000, sc_spi	),
  ('SC2_I2CS',		0x42001000, sc_i2cs	),
  ('SC2_I2CM',		0x42001000, sc_i2cm	),
  ('SC3_USART',		0x42001400, sc_usart	),
  ('SC3_SPI',		0x42001400, sc_spi	),
  ('SC3_I2CS',		0x42001400, sc_i2cs	),
  ('SC3_I2CM',		0x42001400, sc_i2cm	),
  ('SC4_USART',		0x42001800, sc_usart	),
  ('SC4_SPI',		0x42001800, sc_spi	),
  ('SC4_I2CS',		0x42001800, sc_i2cs	),
  ('SC4_I2CM',		0x42001800, sc_i2cm	),
  ('SC5_USART',		0x42001c00, sc_usart	),
  ('SC5_SPI',		0x42001c00, sc_spi	),
  ('SC5_I2CS',		0x42001c00, sc_i2cs	),
  ('SC5_I2CM',		0x42001c00, sc_i2cm	),
  ('TC0_8',		0x42002000, tc_8	),
  ('TC0_16',		0x42002000, tc_16	),
  ('TC0_32',		0x42002000, tc_32	),
  ('TC1_8',		0x42002400, tc_8	),
  ('TC1_16',		0x42002400, tc_16	),
  ('TC1_32',		0x42002400, tc_32	),
  ('TC2_8',		0x42002800, tc_8	),
  ('TC2_16',		0x42002800, tc_16	),
  ('TC2_32',		0x42002800, tc_32	),
  ('TC3_8',		0x42002c00, tc_8	),
  ('TC3_16',		0x42002c00, tc_16	),
  ('TC3_32',		0x42002c00, tc_32	),
  ('TC4_8',		0x42003000, tc_8	),
  ('TC4_16',		0x42003000, tc_16	),
  ('TC4_32',		0x42003000, tc_32	),
  ('TC5_8',		0x42003400, tc_8	),
  ('TC5_16',		0x42003400, tc_16	),
  ('TC5_32',		0x42003400, tc_32	),
  ('TC6_8',		0x42003800, tc_8	),
  ('TC6_16',		0x42003800, tc_16	),
  ('TC6_32',		0x42003800, tc_32	),
  ('TC7_8',		0x42003c00, tc_8	),
  ('TC7_16',		0x42003c00, tc_16	),
  ('TC7_32',		0x42003c00, tc_32	),
  ('ADC',		0x42004000, adc		),
  ('AC',		0x42004400, ac		),
  ('DAC',		0x42004800, dac		),
  ('PTC',		0x42004c00, ptc		),

  # Cortex-M0+ System Control Space
  ('SYSTICK',		0xe000e010, cm0_systick	),
  ('NVIC',		0xe000e100, cm0_nvic	),
  ('SCB',		0xe000ed00, cm0_scb	),
]

db = (series, name, peripherals, registers)

