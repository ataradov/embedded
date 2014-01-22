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
name = 'PM'

#------------------------------------------------------------------------------
pm_div = [
	('1',		0),
	('2',		1),
	('4',		2),
	('8',		3),
	('16',		4),
	('32',		5),
	('64',		6),
	('128',		7),
]

pm_ints = [
	('ckrdy',	1),
	('cfd',		1),
	('',		6),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRL', [
		('',		2),
		('cfden',	1),
		('',		1),
		('bkupclk',	1),
		('',		3),
	]),
	(0x01, 'SLEEP', [
		('idle',	2),
		('',		6),
	]),
	(0x08, 'CPUSEL', [
		('cpudiv',	3, pm_div),
		('',		5),
	]),
	(0x09, 'APBASEL', [
		('apbadiv',	3, pm_div),
		('',		5),
	]),
	(0x0a, 'APBBSEL', [
		('apbbdiv',	3, pm_div),
		('',		5),
	]),
	(0x0b, 'APBCSEL', [
		('apbcdiv',	3, pm_div),
		('',		5),
	]),
	(0x14, 'AHBMASK', [
		('hpb0',	1),
		('hpb1',	1),
		('hpb2',	1),
		('dsu',		1),
		('nvmctrl',	1),
		('',		27),
	]),
	(0x18, 'APBAMASK', [
		('pac0',	1),
		('pm',		1),
		('sysctrl',	1),
		('gclk',	1),
		('wdt',		1),
		('rtc',		1),
		('eic',		1),
		('',		25),
	]),
	(0x1c, 'APBBMASK', [
		('pac1',	1),
		('dsu',		1),
		('nvmctrl',	1),
		('port',	1),
		('',		28),
	]),
	(0x20, 'APBCMASK', [
		('pac2',	1),
		('evsys',	1),
		('sercom0',	1),
		('sercom1',	1),
		('sercom2',	1),
		('sercom3',	1),
		('sercom4',	1),
		('sercom5',	1),
		('tc0',		1),
		('tc1',		1),
		('tc2',		1),
		('tc3',		1),
		('tc4',		1),
		('tc5',		1),
		('tc6',		1),
		('tc7',		1),
		('adc',		1),
		('ac',		1),
		('dac',		1),
		('ptc',		1),
		('',		12),
	]),
	(0x34, 'INTENCLR', pm_ints),
	(0x35, 'INTENSET', pm_ints),
	(0x36, 'INTFLAG', pm_ints),
	(0x38, 'RCAUSE', [
		('por',		1),
		('bod12',	1),
		('bod33',	1),
		('',		1),
		('ext',		1),
		('wdt',		1),
		('syst',	1),
		('',		1),
	]),
]

