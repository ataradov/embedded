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
name = 'ADC12B'

#------------------------------------------------------------------------------
adc12b_channels = [
	('ch0',		1),
	('ch1',		1),
	('ch2',		1),
	('ch3',		1),
	('ch4',		1),
	('ch5',		1),
	('ch6',		1),
	('ch7',		1),
	('',		24),
]

adc12b_ints = [
	('eoc0',	1),
	('eoc1',	1),
	('eoc2',	1),
	('eoc3',	1),
	('eoc4',	1),
	('eoc5',	1),
	('eoc6',	1),
	('eoc7',	1),
	('ovre0',	1),
	('ovre1',	1),
	('ovre2',	1),
	('ovre3',	1),
	('ovre4',	1),
	('ovre5',	1),
	('ovre6',	1),
	('ovre7',	1),
	('drdy',	1),
	('govre',	1),
	('endrx',	1),
	('rxbuff',	1),
	('',		12),
]

adc12b_cdr = [
	('data',	12),
	('',		20),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CR', [
		('swrst',	1),
		('start',	1),
		('',		30),
	]),
	(0x04, 'MR', [
		('trgen',	1),
		('trgsel',	3, [
			('EXT',		0),
			('TC_0',	1),
			('TC_1',	2),
			('TC_2',	3),
			('PWM_0',	4),
			('PWM_1',	5),
		]),
		('lowres',	1),
		('sleep',	1),
		('',		2),
		('prescal',	8),
		('startup',	8),
		('shtim',	4),
		('',		4),
	]),
	(0x10, 'CHER', adc12b_channels),
	(0x14, 'CHDR', adc12b_channels),
	(0x18, 'CHSR', adc12b_channels),
	(0x1c, 'SR', adc12b_ints),
	(0x20, 'LCDR', [
		('ldata',	12),
		('',		20),
	]),
	(0x24, 'IER', adc12b_ints),
	(0x28, 'IDR', adc12b_ints),
	(0x2c, 'IMR', adc12b_ints),
	[ 8, 4,
		(0x0030, 'CDR', adc12b_cdr),
	],
	(0x64, 'ACR', [
		('gain',	2),
		('',		6),
		('ibctl',	2, [
			('TYP_M20',	0),
			('TYP',		1),
			('TYP_P20',	2),
			('TYP_P40',	3),
		]),
		('',		6),
		('diff',	1),
		('offset',	1),
		('',		14),
	]),
	(0x68, 'EMR', [
		('offmodes',	1),
		('',		15),
		('off_mode_startup_time',	8),
		('',		8),
	]),
]

