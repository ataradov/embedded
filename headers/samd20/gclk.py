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
name = 'GCLK'

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRL', [
		('swrst',	1),
		('',		7),
	]),
	(0x01, 'STATUS', [
		('',		7),
		('syncbusy',	1),
	]),
	(0x02, 'CLKCTRL', [
		('id',		6, [
			('DFLL48M',	0x00),
			('WDT',		0x01),
			('RTC',		0x02),
			('EIC',		0x03),
			('EVSYS_0',	0x04),
			('EVSYS_1',	0x05),
			('EVSYS_2',	0x06),
			('EVSYS_3',	0x07),
			('EVSYS_4',	0x08),
			('EVSYS_5',	0x09),
			('EVSYS_6',	0x0a),
			('EVSYS_7',	0x0b),
			('SERCOMX_SLOW', 0x0c),
			('SERCOM0_CORE', 0x0d),
			('SERCOM1_CORE', 0x0e),
			('SERCOM2_CORE', 0x0f),
			('SERCOM3_CORE', 0x10),
			('SERCOM4_CORE', 0x11),
			('SERCOM5_CORE', 0x12),
			('TC0_TC1',	0x13),
			('TC2_TC3',	0x14),
			('TC4_TC5',	0x15),
			('TC6_TC7',	0x16),
			('ADC',		0x17),
			('AC_DIG',	0x18),
			('AC_ANA',	0x19),
			('DAC',		0x1a),
			('PTC',		0x1b),
		]),
		('',		2),
		('gen',		4),
		('',		2),
		('clken',	1),
		('wrtlock',	1),
	]),
	(0x04, 'GENCTRL', [
		('id',		4),
		('',		4),
		('src',		5, [
			('XOSC',	0),
			('GCLKIN',	1),
			('GCLKGEN1',	2),
			('OSCULP32K',	3),
			('OSC32K',	4),
			('XOSC32K',	5),
			('OSC8M',	6),
			('DFLL48M',	7),
		]),
		('',		3),
		('genen',	1),
		('idc',		1),
		('oov',		1),
		('oe',		1),
		('divsel',	1),
		('runstdby',	1),
		('',		10),
	]),
	(0x08, 'GENDIV', [
		('id',		4),
		('',		4),
		('div',		16),
		('',		8),
	]),
]

