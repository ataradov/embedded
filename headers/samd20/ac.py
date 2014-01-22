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
name = 'AC'

#------------------------------------------------------------------------------
ac_ints = [
	('comp0',	1),
	('comp1',	1),
	('',		2),
	('win0',	1),
	('',		3),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRLA', [
		('swrst',	1),
		('enable',	1),
		('runstdby',	1),
		('',		5),
	]),
	(0x01, 'CTRLB', [
		('start0',	1),
		('start1',	1),
		('',		6),
	]),
	(0x02, 'EVCTRL', [
		('compeo0',	1),
		('compeo1',	1),
		('',		2),
		('wineo0',	1),
		('',		3),
		('compei0',	1),
		('compei1',	1),
		('',		6),
	]),
	(0x04, 'INTENCLR', ac_ints),
	(0x05, 'INTENSET', ac_ints),
	(0x06, 'INTFLAG', ac_ints),
	(0x08, 'STATUSA', [
		('state0',	1),
		('state1',	1),
		('',		2),
		('wstate0',	2, [
			('ABOVE',	0),
			('INSIDE',	1),
			('BELOW',	2),
		]),
		('',		2),
	]),
	(0x09, 'STATUSB', [
		('ready0',	1),
		('ready1',	1),
		('',		5),
		('syncbusy',	1),
	]),
	(0x0a, 'STATUSC', [
		('state0',	1),
		('state1',	1),
		('',		2),
		('wstate0',	2, [
			('ABOVE',	0),
			('INSIDE',	1),
			('BELOW',	2),
		]),
		('',		2),
	]),
	(0x0c, 'WINCTRL', [
		('wen0',	1),
		('wintsel0',	2, [
			('ABOVE',	0),
			('INSIDE',	1),
			('BELOW',	2),
			('OUTSIDE',	3),
		]),
		('',		5),
	]),
	[2, 4,
		(0x10, 'COMPCTRL', [
			('enable',	1),
			('single',	1),
			('speed',	2, [
				('LOW',		0),
				('HIGH',	1),
			]),
			('',		1),
			('intsel',	2, [
				('TOGGLE',	0),
				('RISING',	1),
				('FALLING',	2),
				('EOC',		3),
			]),
			('',		1),
			('muxneg',	3, [
				('PIN0',	0),
				('PIN1',	1),
				('PIN2',	2),
				('PIN3',	3),
				('GND',		4),
				('VSCALE',	5),
				('BANDGAP',	6),
				('DAC',		7),
			]),
			('',		1),
			('muxpos',	2, [
				('PIN0',	0),
				('PIN1',	1),
				('PIN2',	2),
				('PIN3',	3),
			]),
			('',		1),
			('swap',	1),
			('out',		2, [
				('OFF',		0),
				('ASYNC',	1),
				('SYNC',	2),
			]),
			('',		1),
			('hyst',	1),
			('',		4),
			('flen',	3, [
				('OFF',		0),
				('MAJ3',	1),
				('MAJ5',	2),
			]),
			('',		5),
		]),
	],
	[2, 1,
		(0x20, 'SCALER', [
			('value',	6),
			('',		2),
		]),
	],
]

