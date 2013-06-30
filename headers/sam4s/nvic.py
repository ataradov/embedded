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

#------------------------------------------------------------------------------
regs = [
  (0x0000, 'ISER0', common.pid0),
  (0x0004, 'ISER1', common.pid1),
#  (0x0008, 'ISER2'),
#  (0x000c, 'ISER3'),
#  (0x0010, 'ISER4'),
#  (0x0014, 'ISER5'),
#  (0x0018, 'ISER6'),
#  (0x001c, 'ISER7'),

  (0x0080, 'ICER0', common.pid0),
  (0x0084, 'ICER1', common.pid1),
#  (0x0088, 'ICER2'),
#  (0x008c, 'ICER3'),
#  (0x0090, 'ICER4'),
#  (0x0094, 'ICER5'),
#  (0x0098, 'ICER6'),
#  (0x009c, 'ICER7'),

  (0x0100, 'ISPR0', common.pid0),
  (0x0104, 'ISPR1', common.pid1),
#  (0x0108, 'ISPR2'),
#  (0x010c, 'ISPR3'),
#  (0x0110, 'ISPR4'),
#  (0x0114, 'ISPR5'),
#  (0x0118, 'ISPR6'),
#  (0x011c, 'ISPR7'),

  (0x0180, 'ICPR0', common.pid0),
  (0x0184, 'ICPR1', common.pid1),
#  (0x0188, 'ICPR2'),
#  (0x018c, 'ICPR3'),
#  (0x0190, 'ICPR4'),
#  (0x0194, 'ICPR5'),
#  (0x0198, 'ICPR6'),
#  (0x019c, 'ICPR7'),

  (0x0200, 'IABR0', common.pid0),
  (0x0204, 'IABR1', common.pid1),
#  (0x0208, 'IABR2'),
#  (0x020c, 'IABR3'),
#  (0x0210, 'IABR4'),
#  (0x0214, 'IABR5'),
#  (0x0218, 'IABR6'),
#  (0x021c, 'IABR7'),

  (0x0300, 'IPR0', [
    ('supc',        8),
    ('rstc',        8),
    ('rtc',         8),
    ('rtt',         8),
  ]),
  (0x0304, 'IPR1', [
    ('wdt',         8),
    ('pmc',         8),
    ('eefc0',       8),
    ('eefc1',       8),
  ]),
  (0x0308, 'IPR2', [
    ('uart0',       8),
    ('uart1',       8),
    ('smc',         8),
    ('pioa',        8),
  ]),
  (0x030c, 'IPR3', [
    ('piob',        8),
    ('pioc',        8),
    ('usart0',      8),
    ('usart1',      8),
  ]),
  (0x0310, 'IPR4', [
    ('',            8),
    ('',            8),
    ('hsmci',       8),
    ('twi0',        8),
  ]),
  (0x0314, 'IPR5', [
    ('twi1',        8),
    ('spi',         8),
    ('ssc',         8),
    ('tc0',         8),
  ]),
  (0x0318, 'IPR6', [
    ('tc1',         8),
    ('tc2',         8),
    ('tc3',         8),
    ('tc4',         8),
  ]),
  (0x031c, 'IPR7', [
    ('tc5',         8),
    ('adc',         8),
    ('dacc',        8),
    ('pwm',         8),
  ]),
  (0x0320, 'IPR8', [
    ('crccu',       8),
    ('acc',         8),
    ('udp',         8),
    ('',            8),
  ]),

  (0x0e00, 'STIR', [
    ('intid',       9),
    ('',           23),
  ]),
]

