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
def wpmr(key):
  return [
	('wpen',	1),
	('',		7),
	('wpkey',	24, [
		('KEY',		key)
	]),
  ]

wpsr = [
	('wpvs',	1),
	('',		7),
	('wpvsrc',	16),
	('',		8),
]

pid = [
	('supc',	1),
	('rstc',	1),
	('rtc',		1),
	('rtt',		1),
	('wdt',		1),
	('pmc',		1),
	('eefc0',	1),
	('eefc1',	1),
	('uart',	1),
	('smc',		1),
	('pioa',	1),
	('piob',	1),
	('pioc',	1),
	('usart0',	1),
	('usart1',	1),
	('usart2',	1),
	('usart3',	1),
	('hsmci',	1),
	('twi0',	1),
	('twi1',	1),
	('spi',		1),
	('ssc',		1),
	('tc0',		1),
	('tc1',		1),
	('tc2',		1),
	('pwm',		1),
	('adc12b',	1),
	('adc',		1),
	('dmac',	1),
	('udphs',	1),
	('',		2),
]

