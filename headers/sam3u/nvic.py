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
name = 'NVIC'

#------------------------------------------------------------------------------
def nvic_ipr(ipr0, ipr1, ipr2, ipr3):
  return [('', 4), (ipr0, 4), ('', 4), (ipr1, 4), ('', 4), (ipr2, 4), ('', 4), (ipr3, 4)]

#------------------------------------------------------------------------------
registers = [
	(0x0000, 'ISER0', common.pid),
	(0x0080, 'ICER0', common.pid),
	(0x0100, 'ISPR0', common.pid),
	(0x0180, 'ICPR0', common.pid),
	(0x0200, 'IABR0', common.pid),
	(0x0300, 'IPR0', nvic_ipr('supc', 'rstc', 'rtc', 'rtt')),
	(0x0304, 'IPR1', nvic_ipr('wdt', 'pmc', 'eefc0', 'eefc1')),
	(0x0308, 'IPR2', nvic_ipr('uart', 'smc', 'pioa', 'piob')),
	(0x030c, 'IPR3', nvic_ipr('pioc', 'usart0', 'usart1', 'usart2')),
	(0x0310, 'IPR4', nvic_ipr('usart3', 'hsmci', 'twi0', 'twi1')),
	(0x0314, 'IPR5', nvic_ipr('spi', 'ssc', 'tc0', 'tc1')),
	(0x0318, 'IPR6', nvic_ipr('tc2', 'pwm', 'adc12b', 'adc')),
	(0x031c, 'IPR7', nvic_ipr('dmac', 'udphs', '', '')),
	(0x0e00, 'STIR', [
		('intid',	9),
		('',		23),
	]),
]

