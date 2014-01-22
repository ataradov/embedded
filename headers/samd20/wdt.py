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
name = 'WDT'

#------------------------------------------------------------------------------
wdt_timing = [
	('8', 		0x0),
	('16',		0x1),
	('32',		0x2),
	('64',		0x3),
	('128',		0x4),
	('256',		0x5),
	('512',		0x6),
	('1024',	0x7),
	('2048',	0x8),
	('4096',	0x9),
	('8192',	0xa),
	('16384',	0xb),
]

wdt_ints = [
	('ew',		1),
	('',		7),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRL', [
		('',		1),
		('enable',	1),
		('wen',		1),
		('',		4),
		('alwayson',	1),
	]),
	(0x01, 'CONFIG', [
		('per',		4, wdt_timing),
		('window',	4, wdt_timing),
	]),
	(0x02, 'EWCTRL', [
		('ewoffset',	4, wdt_timing),
		('',		4),
	]),
	(0x04, 'INTENCLR', wdt_ints),
	(0x05, 'INTENSET', wdt_ints),
	(0x06, 'INTFLAG', wdt_ints),
	(0x07, 'STATUS', [
		('',		7),
		('syncbusy',	1),
	]),
	(0x08, 'CLEAR', [
		('clear',	8, [
			('KEY',		0xa5),
		]),
	]),
]

