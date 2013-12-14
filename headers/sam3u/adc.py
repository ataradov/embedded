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
name = 'ADC'

#------------------------------------------------------------------------------
adc_channels = [
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

adc_ints = [
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

adc_cdr = [
	('data',	10),
	('',		22),
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
			('TC_0',	0),
			('TC_1',	1),
			('TC_2',	2),
			('PWM_0',	3),
			('PWM_1',	4),
			('EXT',		6),
		]),
		('lowres',	1),
		('sleep',	1),
		('',		2),
		('prescal',	8),
		('startup',	7),
		('',		1),
		('shtim',	4),
		('',		4),
	]),
	(0x10, 'CHER', adc_channels),
	(0x14, 'CHDR', adc_channels),
	(0x18, 'CHSR', adc_channels),
	(0x1c, 'SR', adc_ints),
	(0x20, 'LCDR', [
		('ldata',	10),
		('',		22),
	]),
	(0x24, 'IER', adc_ints),
	(0x28, 'IDR', adc_ints),
	(0x2c, 'IMR', adc_ints),
	[ 8, 4,
		(0x0030, 'CDR', adc_cdr),
	],
]

