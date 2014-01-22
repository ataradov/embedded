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
name = 'ADC'

#------------------------------------------------------------------------------
adc_ints = [
	('resrdy',	1),
	('overrun',	1),
	('winmon',	1),
	('syncrdy',	1),
	('',		4),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRLA', [
		('swrst',	1),
		('enable',	1),
		('runstdby',	1),
		('',		5),
	]),
	(0x01, 'REFCTRL', [
		('refsel',	4, [
			('INT1V',	0),
			('INTVCC0',	1),
			('INTVCC1',	2),
			('AREFA',	3),
			('AREFB',	4),
		]),
		('',		3),
		('refcomp',	1),
	]),
	(0x02, 'AVGCTRL', [
		('samplenum',	4, [
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
		('adjres',	3),
		('',		1),
	]),
	(0x03, 'SAMPCTRL', [
		('samplen',	6),
		('',		2),
	]),
	(0x04, 'CTRLB', [
		('diffmode',	1),
		('leftadj',	1),
		('freerun',	1),
		('corren',	1),
		('ressel',	2, [
			('12BIT',	0),
			('16BIT',	1),
			('10BIT',	2),
			('8BIT',	3),
		]),
		('',		2),
		('prescaler',	3, [
			('4',		0),
			('8',		1),
			('16',		2),
			('32',		3),
			('64',		4),
			('128',		5),
			('256',		6),
			('512',		7),
		]),
		('',		5),
	]),
	(0x08, 'WINCTRL', [
		('winmode',	3, [
			('DISABLE',	0),
			('MODE1',	1),
			('MODE2',	2),
			('MODE3',	3),
			('MODE4',	4),
		]),
		('',		5),
	]),
	(0x0c, 'SWTRIG', [
		('flush',	1),
		('start',	1),
		('',		6),
	]),
	(0x10, 'INPUTCTRL', [
		('muxpos',	5, [
			('PIN0',	0x0),
			('PIN1',	0x1),
			('PIN2',	0x2),
			('PIN3',	0x3),
			('PIN4',	0x4),
			('PIN5',	0x5),
			('PIN6',	0x6),
			('PIN7',	0x7),
			('PIN8',	0x8),
			('PIN9',	0x9),
			('PIN10',	0xa),
			('PIN11',	0xb),
			('PIN12',	0xc),
			('PIN13',	0xd),
			('PIN14',	0xe),
			('PIN15',	0xf),
			('PIN16',	0x10),
			('PIN17',	0x11),
			('PIN18',	0x12),
			('PIN19',	0x13),
			('PIN20',	0x14),
			('PIN21',	0x15),
			('PIN22',	0x16),
			('PIN23',	0x17),
			('TEMP',	0x18),
			('BANDGAP',	0x19),
			('SCALEDCOREVCC', 0x1a),
			('SCALEDIOVCC',	0x1b),
			('DAC',		0x1c),
		]),
		('',		3),
		('muxneg',	5, [
			('PIN0',	0x0),
			('PIN1',	0x1),
			('PIN2',	0x2),
			('PIN3',	0x3),
			('PIN4',	0x4),
			('PIN5',	0x5),
			('PIN6',	0x6),
			('PIN7',	0x7),
			('PIN8',	0x8),
			('PIN9',	0x9),
			('PIN10',	0xa),
			('PIN11',	0xb),
			('PIN12',	0xc),
			('PIN13',	0xd),
			('PIN14',	0xe),
			('PIN15',	0xf),
			('PIN16',	0x10),
			('PIN17',	0x11),
			('PIN18',	0x12),
			('PIN19',	0x13),
			('PIN20',	0x14),
			('PIN21',	0x15),
			('PIN22',	0x16),
			('PIN23',	0x17),
			('GND',		0x18),
			('IOGND',	0x19),
		]),
		('',		3),
		('inputscan',	4),
		('inputoffset',	4),
		('gain',	4, [
			('1X',		0x0),
			('2X',		0x1),
			('4X',		0x2),
			('8X',		0x3),
			('16X',		0x4),
			('DIV2',	0xf),
		]),
		('',		4),
	]),
	(0x14, 'EVCTRL', [
		('startei',	1),
		('syncei',	1),
		('',		2),
		('resrdyeo',	1),
		('winmoneo',	1),
		('',		2),
	]),
	(0x16, 'INTENCLR', adc_ints),
	(0x17, 'INTENSET', adc_ints),
	(0x18, 'INTFLAG', adc_ints),
	(0x19, 'STATUS', [
		('',		7),
		('syncbusy',	1),
	]),
	(0x1a, 'RESULT',	16),
	(0x1c, 'WINLT',		16),
	(0x20, 'WINUT', 	16),
	(0x24, 'GAINCORR', [
		('gaincorr',	12),
		('',		4),
	]),
	(0x26, 'OFFSETCORR', [
		('offsetcorr',	12),
		('',		4),
	]),
	(0x28, 'CALIB', [
		('linearity_cal', 8),
		('bias_cal',	3),
		('',		5),
	]),
	(0x2a, 'DBGCTRL', [
		('dbgrun',	1),
		('',		7),
	]),
]

