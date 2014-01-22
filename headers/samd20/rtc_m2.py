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
name = 'RTC_M2'

#------------------------------------------------------------------------------
rtc_m2_ints = [
	('alarm0',	1),
	('',		5),
	('syncrdy',	1),
	('ovf',		1),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRL', [
		('swrst',	1),
		('enable',	1),
		('mode',	2, [
			('COUNT32',	0),
			('COUNT16',	1),
			('CLOCK',	2),
		]),
		('',		2),
		('clkrep',	1),
		('matchclr',	1),
		('prescaler',	4, [
			('1',		0x0),
			('2',		0x1),
			('4',		0x2),
			('8',		0x3),
			('16',		0x4),
			('32',		0x5),
			('64',		0x6),
			('128',		0x7),
			('256',		0x8),
			('512',		0x9),
			('1024',	0xa),
		]),
		('',		4),
	]),
	(0x02, 'READREQ', [
		('addr',	6),
		('',		8),
		('rcont',	1),
		('rreq',	1),
	]),
	(0x04, 'EVCTRL', [
		('pereo0',	1),
		('pereo1',	1),
		('pereo2',	1),
		('pereo3',	1),
		('pereo4',	1),
		('pereo5',	1),
		('pereo6',	1),
		('pereo7',	1),
		('alarmeo0',	1),
		('',		6),
		('ovfeo',	1),
	]),
	(0x06, 'INTENCLR', rtc_m2_ints),
	(0x07, 'INTENSET', rtc_m2_ints),
	(0x08, 'INTFLAG', rtc_m2_ints),
	(0x0a, 'STATUS', [
		('',		7),
		('syncbusy',	1),
	]),
	(0x0b, 'DBGCTRL', [
		('dbgrun',	1),
		('',		7),
	]),
	(0x0c, 'FREQCORR', [
		('value',	7),
		('sign',	1),
	]),
	(0x10, 'CLOCK', [
		('second',	6),
		('minute',	6),
		('hour',	5),
		('day',		5),
		('month',	4),
		('year',	6),
	]),
	[ 4, 8,
		(0x18, 'ALARM', [
			('second',	6),
			('minute',	6),
			('hour',	5),
			('day',		5),
			('month',	4),
			('year',	6),
		]),
		(0x1c, 'MASK', [
			('sel',		3, [
				('OFF',		0),
				('SS',		1),
				('MMSS',	2),
				('HHMMSS',	3),
				('DDHHMMSS',	4),
				('MMDDHHMMSS',	5),
				('YYMMDDHHMMSS', 6),
			]),
			('',		5),
		]),
	],
]

