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
name = 'SC_USART'

#------------------------------------------------------------------------------
sc_usart_ints = [
	('dre',		1),
	('txc',		1),
	('rxc',		1),
	('rxs',		1),
	('',		4),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRLA', [
		('swrst',	1),
		('enable',	1),
		('mode',	3, [
			('USART_EXT_CLK', 0),
			('USART_INT_CLK', 1),
		]),
		('',		2),
		('runstdby',	1),
		('',		8),
		('txpo',	1),
		('',		3),
		('rxpo',	2),
		('',		2),
		('form',	4, [
			('NO_PARITY',	0),
			('PARITY',	1),
		]),
		('cmode',	1, [
			('ASYNC',	0),
			('SYNC',	1),
		]),
		('cpol',	1),
		('dord',	1, [
			('MSB_FIRST',	0),
			('LSB_FIRST',	1),
		]),
		('',		1),
	]),
	(0x04, 'CTRLB', [
		('chsize',	3, [
			('8_BITS',	0),
			('9_BITS',	1),
			('5_BITS',	5),
			('6_BITS',	6),
			('7_BITS',	7),
		]),
		('',		3),
		('sbmode',	1, [
			('ONE_STOP_BIT',	0),
			('TWO_STOP_BITS',	1),
		]),
		('',		2),
		('sfde',	1),
		('',		3),
		('pmode',	1),
		('',		2),
		('txen',	1),
		('rxen',	1),
		('',		14),
	]),
	(0x08, 'DBGCTRL', [
		('dbgstop',	1),
		('',		7),
	]),
	(0x0a, 'BAUD', 16),
	(0x0c, 'INTENCLR', sc_usart_ints),
	(0x0d, 'INTENSET', sc_usart_ints),
	(0x0e, 'INTFLAG', sc_usart_ints),
	(0x10, 'STATUS', [
		('perr',	1),
		('ferr',	1),
		('bufovf',	1),
		('',		12),
		('syncbusy',	1),
	]),
	(0x18, 'DATA', [
		('data',	9),
		('',		7),
	]),
]

