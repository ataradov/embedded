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
name = 'USART'

#------------------------------------------------------------------------------
usart_irqs = [
	('rxrdy',	1),
	('txrdy',	1),
	('rxbrk',	1),
	('endrx',	1),
	('endtx',	1),
	('ovre',	1),
	('frame',	1),
	('pare',	1),
	('timeout',	1),
	('txempty',	1),
	('iter/unre',	1),
	('txbufe',	1),
	('rxbuff',	1),
	('nack',	1),
	('',		2),
	('riic',	1),
	('dsric',	1),
	('dcdic',	1),
	('ctsic',	1),
	('',		4),
	('mane',	1),
	('',		7),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CR', [
		('',		2),
		('rstrx',	1),
		('rsttx',	1),
		('rxen',	1),
		('rxdis',	1),
		('txen',	1),
		('txdis',	1),
		('rststa',	1),
		('sttbrk',	1),
		('stpbrk',	1),
		('sttto',	1),
		('senda',	1),
		('rstit',	1),
		('rstnack',	1),
		('retto',	1),
		('dtren',	1),
		('dtrdis',	1),
		('rtsen/fcs',	1),
		('rtsdis/rcs',	1),
		('',		12),
	]),
	(0x04, 'MR', [
		('usart_mode',	4, [
			('NORMAL',	0x0),
			('RS485',	0x1),
			('HW_HANDSHAKING', 0x2),
			('MODEM',	0x3),
			('IS07816_T_0',	0x4),
			('IS07816_T_1',	0x6),
			('IRDA',	0x8),
			('SPI_MASTER',	0xe),
			('SPI_SLAVE',	0xf),
		]),
		('usclks',	2, [
			('MCK',		0),
			('DIV',		1),
			('SCK',		3),
		]),
		('chrl',	2, [
			('5_BIT',	0),
			('6_BIT',	1),
			('7_BIT',	2),
			('8_BIT',	3),
		]),
		('sync/cpha',	1),
		('par',		3, [
			('EVEN',	0),
			('ODD',		1),
			('SPACE',	2),
			('MARK',	3),
			('NO',		4),
			('MULTIDROP',	6),
		]),
		('nbstop',	2, [
			('1_BIT',	0),
			('1_5_BIT',	1),
			('2_BIT',	2),
		]),
		('chmode',	2, [
			('NORMAL',	0),
			('AUTOMATIC',	1),
			('LOCAL_LOOPBACK', 2),
			('REMOTE_LOOPBACK', 3),
		]),
		('msbf/cpol',	1),
		('mode9',	1),
		('clko',	1),
		('over',	1),
		('inack',	1),
		('dsnack',	1),
		('var_sync',	1),
		('invdata',	1),
		('max_iteration', 3),
		('',		1),
		('filter',	1),
		('man',		1),
		('modsync',	1),
		('onebit',	1),
	]),
	(0x08, 'IER', usart_irqs),
	(0x0c, 'IDR', usart_irqs),
	(0x10, 'IMR', usart_irqs),
	(0x14, 'CSR', [
		('rxrdy',	1),
		('txrdy',	1),
		('rxbrk',	1),
		('endrx',	1),
		('endtx',	1),
		('ovre',	1),
		('frame',	1),
		('pare',	1),
		('timeout',	1),
		('txempty',	1),
		('iter/unre',	1),
		('txbufe',	1),
		('rxbuff',	1),
		('nack',	1),
		('',		2),
		('riic',	1),
		('dsric',	1),
		('dcdic',	1),
		('ctsic',	1),
		('ri',		1),
		('dsr',		1),
		('dcd',		1),
		('cts',		1),
		('manerr',	1),
		('',		7),
	]),
	(0x18, 'RHR', [
		('rxchr',	9),
		('',		6),
		('rxsynh',	1),
		('',		16),
	]),
	(0x1c, 'THR', [
		('txchr',	9),
		('',		6),
		('txsynh',	1),
		('',		16),
	]),
	(0x20, 'BRGR', [
		('cd',		16),
		('fp',		3),
		('',		13),
	]),
	(0x24, 'RTOR', [
		('to',		16),
		('',		16),
	]),
	(0x28, 'TTGR', [
		('tg',		8),
		('',		24),
	]),
	(0x40, 'FIDI', [
		('fi_di_ratio',	11),
		('',		21),
	]),
	(0x44, 'NER', [
		('nb_errors',	8),
		('',		24),
	]),
	(0x4c, 'IF', [
		('irda_filter',	8),
		('',		24),
	]),
	(0x50, 'MAN', [
		('tx_pl',	4),
		('',		4),
		('tx_pp',	2, [
			('ALL_ONE',	0),
			('ALL_ZERO',	1),
			('ZERO_ONE',	2),
			('ONE_ZERO',	3),
		]),
		('',		2),
		('tx_mpol',	1),
		('',		3),
		('rx_pl',	4),
		('',		4),
		('rx_pp',	2, [
			('ALL_ONE',	0),
			('ALL_ZERO',	1),
			('ZERO_ONE',	2),
			('ONE_ZERO',	3),
		]),
		('',		2),
		('rx_mpol',	1),
		('stuckto1',	1),
		('drift',	1),
		('',		1),
	]),
	(0xe4, 'WPMR', common.wpmr(0x555341)),
	(0xe8, 'WPSR', common.wpsr),
]

