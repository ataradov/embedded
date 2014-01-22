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
import pdc
import hsmci
import ssc
import spi
import tc
import twi
import pwm
import usart
import udphs
import adc12b
import adc
import dmac
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
import systick
import scb
import nvic
import mpu

#------------------------------------------------------------------------------
series = 'SAM'
name = 'SAM3U'

peripherals = [
  pdc, hsmci, ssc, spi, tc, twi, pwm, usart, udphs, adc12b, adc, dmac,
  smc, matrix, pmc, uart, chipid, eefc, pio, rstc, supc, rtt, wdt, rtc,
  gpbr, systick, scb, nvic, mpu,
]

registers = [
  ('HSMCI',		0x40000000, hsmci	),
  ('SSC',		0x40004000, ssc		),
  ('SPI',		0x40008000, spi		),
  ('TC0',		0x40080000, tc		),
  ('TC1',		0x40080040, tc		),
  ('TC2',		0x40080080, tc		),
  ('TWI0',		0x40084000, twi		),
  ('TWI0_PDC',		0x40084100, pdc		),
  ('TWI1',		0x40088000, twi		),
  ('TWI1_PDC',		0x40088100, pdc		),
  ('PWM',		0x4008c000, pwm		),
  ('PWM_PDC',		0x4008c100, pdc		),
  ('USART0',		0x40090000, usart	),
  ('USART0_PDC',	0x40090100, pdc		),
  ('USART1',		0x40094000, usart	),
  ('USART1_PDC',	0x40094100, pdc		),
  ('USART2',		0x40098000, usart	),
  ('USART2_PDC',	0x40098100, pdc		),
  ('USART3',		0x4009c000, usart	),
  ('USART3_PDC',	0x4009c100, pdc		),
  ('UDPHS',		0x400a4000, udphs	),
  ('ADC12B',		0x400a8000, adc12b	),
  ('ADC12B_PDC',	0x400a8100, pdc		),
  ('ADC',		0x400ac000, adc		),
  ('ADC_PDC',		0x400ac100, pdc		),
  ('DMAC',		0x400b0000, dmac	),
  ('SMC',		0x400e0000, smc		),
  ('MATRIX',		0x400e0200, matrix	),
  ('PMC',		0x400e0400, pmc		),
  ('UART',		0x400e0600, uart	),
  ('UART_PDC',		0x400e0700, pdc		),
  ('CHIPID',		0x400e0740, chipid	),
  ('EEFC0',		0x400e0800, eefc	),
  ('EEFC1',		0x400e0a00, eefc	),
  ('PIOA',		0x400e0c00, pio		),
  ('PIOB',		0x400e0e00, pio		),
  ('PIOC',		0x400e1000, pio		),
  ('RSTC',		0x400e1200, rstc	),
  ('SUPC',		0x400e1210, supc	),
  ('RTT',		0x400e1230, rtt		),
  ('WDT',		0x400e1250, wdt		),
  ('RTC',		0x400e1260, rtc		),
  ('GPBR',		0x400e1290, gpbr	),

  # System Control Space
  ('SYSTICK',		0xe000e010, systick	),
  ('SCB',		0xe000e000, scb		),
  ('NVIC',		0xe000e100, nvic	),
  ('MPU',		0xe000ed90, mpu		),
]

db = (series, name, peripherals, registers)

