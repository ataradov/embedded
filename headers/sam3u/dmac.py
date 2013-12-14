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
name = 'DMAC'

#------------------------------------------------------------------------------
dmac_irqs = [
	('btc0',	1),
	('btc1',	1),
	('btc2',	1),
	('btc3',	1),
	('',		4),
	('cbtc0',	1),
	('cbtc1',	1),
	('cbtc2',	1),
	('cbtc3',	1),
	('',		4),
	('err0',	1),
	('err1',	1),
	('err2',	1),
	('err3',	1),
	('',		12),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'GCFG', [
		('',		4),
		('arb_cfg',	1, [
			('FIXED',	0),
			('ROUND_ROBIN',	1),
		]),
		('',		27),
	]),
	(0x04, 'EN', [
		('enable',	1),
		('',		31),
	]),
	(0x08, 'SREQ', [
		('ssreq0',	1),
		('dsreq0',	1),
		('ssreq1',	1),
		('dsreq1',	1),
		('ssreq2',	1),
		('dsreq2',	1),
		('ssreq3',	1),
		('dsreq3',	1),
		('',		24),
	]),
	(0x0c, 'CREQ', [
		('screq0',	1),
		('dcreq0',	1),
		('screq1',	1),
		('dcreq1',	1),
		('screq2',	1),
		('dcreq2',	1),
		('screq3',	1),
		('dcreq3',	1),
		('',		24),
	]),
	(0x10, 'LAST', [
		('slast0',	1),
		('dlast0',	1),
		('slast1',	1),
		('dlast1',	1),
		('slast2',	1),
		('dlast2',	1),
		('slast3',	1),
		('dlast3',	1),
		('',		24),
	]),
	(0x18, 'EBCIER', dmac_irqs),
	(0x1c, 'EBCIDR', dmac_irqs),
	(0x20, 'EBCIMR', dmac_irqs),
	(0x24, 'EBCISR', dmac_irqs),
	(0x28, 'CHER', [
		('ena0',	1),
		('ena1',	1),
		('ena2',	1),
		('ena3',	1),
		('',		4),
		('susp0',	1),
		('susp1',	1),
		('susp2',	1),
		('susp3',	1),
		('',		12),
		('keep0',	1),
		('keep1',	1),
		('keep2',	1),
		('keep3',	1),
		('',		4),
	]),
	(0x2c, 'CHDR', [
		('dis0',	1),
		('dis1',	1),
		('dis2',	1),
		('dis3',	1),
		('',		4),
		('res0',	1),
		('res1',	1),
		('res2',	1),
		('res3',	1),
		('',		20),
	]),
	(0x30, 'CHSR', [
		('ena0',	1),
		('ena1',	1),
		('ena2',	1),
		('ena3',	1),
		('',		4),
		('susp0',	1),
		('susp1',	1),
		('susp2',	1),
		('susp3',	1),
		('',		4),
		('empt0',	1),
		('empt1',	1),
		('empt2',	1),
		('empt3',	1),
		('',		4),
		('stal0',	1),
		('stal1',	1),
		('stal2',	1),
		('stal3',	1),
		('',		4),
	]),
	[ 4, 0x28,
		(0x3c, 'SADDR'),
		(0x40, 'DADDR'),
		(0x44, 'DSCR', [
			('',		2),
			('dscr',	30),
		]),
		(0x48, 'CTRLA', [
			('btsize',	12),
			('',		4),
			('scsize',	1, [
				('1',	0),
				('4',	1),
			]),
			('',		3),
			('dcsize',	1, [
				('1',	0),
				('4',	1),
			]),
			('',		3),
			('src_width',	2, [
				('BYTE',	0),
				('HALF_WORD',	1),
				('WORD',	2),
			]),
			('',		2),
			('dst_width',	2, [
				('BYTE',	0),
				('HALF_WORD',	1),
				('WORD',	2),
			]),
			('',		1),
			('done',	1),
		]),
		(0x4c, 'CTRLB', [
			('',		16),
			('src_dscr',	1),
			('',		3),
			('dst_dscr',	1),
			('fc',		3, [
				('MEM_TO_MEM',	0),
				('MEM_TO_PER',	1),
				('PER_TO_MEM',	2),
				('PER_TO_PER',	3),
			]),
			('src_incr',	2, [
				('INCREMENTING', 0),
				('FIXED',	2),
			]),
			('',		2),
			('dst_incr',	2, [
				('INCREMENTING', 0),
				('FIXED',	2),
			]),
			('ien',		1),
			('',		1),
		]),
		(0x50, 'CFG', [
			('src_per',	4),
			('dst_per',	4),
			('',		1),
			('src_h2sel',	1),
			('',		3),
			('dst_h2sel',	1),
			('',		2),
			('sod',		1),
			('',		3),
			('lock_if',	1),
			('lock_b',	1),
			('lock_if_l',	1),
			('',		1),
			('ahb_prot',	3),
			('',		1),
			('fifocfg',	2),
			('',		2),
		]),
	],
]

