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
name = 'EIC'

#------------------------------------------------------------------------------
eic_ints = [
	('extint',	16),
	('',		16),
]

eic_sense = [
	('NONE',	0),
	('RISE',	1),
	('FALL',	2),
	('BOTH',	3),
	('HIGH',	4),
	('LOW',		5),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRL', [
		('swrst',	1),
		('enable',	1),
		('',		6),
	]),
	(0x01, 'STATUS', [
		('',		7),
		('syncbusy',	1),
	]),
	(0x02, 'NMICTRL', [
		('nmisense',	3, eic_sense),
		('nmifilten',	1),
		('',		4),
	]),
	(0x03, 'NMIFLAG', [
		('nmi',		1),
		('',		7),
	]),
	(0x04, 'EVCTRL', [
		('extinteo',	16),
		('',		16),
	]),
	(0x08, 'INTENCLR', eic_ints),
	(0x0c, 'INTENSET', eic_ints),
	(0x10, 'INTFLAG', eic_ints),
	(0x14, 'WAKEUP', [
		('wakeupen',	16),
		('',		16),
	]),
	[ 2, 4, 
		(0x18, 'CONFIG', [
			('sense0',	3, ),
			('filten0',	1),
			('sense1',	3, eic_sense),
			('filten1',	1),
			('sense2',	3, eic_sense),
			('filten2',	1),
			('sense3',	3, eic_sense),
			('filten3',	1),
			('sense4',	3, eic_sense),
			('filten4',	1),
			('sense5',	3, eic_sense),
			('filten5',	1),
			('sense6',	3, eic_sense),
			('filten6',	1),
			('sense7',	3, eic_sense),
			('filten7',	1),
		]),
	],
]

