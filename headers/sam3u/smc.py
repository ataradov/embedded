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
name = 'SMC'

#------------------------------------------------------------------------------
smc_irqs = [
	('',		4),
	('rb_rise',	1),
	('rb_fall',	1),
	('',		10),
	('xfrdone',	1),
	('cmddone',	1),
	('',		2),
	('dtoe',	1),
	('undef',	1),
	('awb',		1),
	('nfcase',	1),
	('rb_edge0',	1),
	('',		7),
]

#------------------------------------------------------------------------------
registers = [
	(0x0000, 'CFG', [
		('pagesize',	2, [
			('PS512_16',	0),
			('PS1024_32',	1),
			('PS2048_64',	2),
			('PS4096_128',	3),
		]),
		('',		6),
		('wspare',	1),
		('rspare',	1),
		('',		2),
		('edgectrl',	1),
		('rbedge',	1),
		('',		2),
		('dtocyc',	4),
		('dtomul',	3, [
			('X1',		0),
			('X16',		1),
			('X128',	2),
			('X256',	3),
			('X1024',	4),
			('X4096',	5),
			('X65536',	6),
			('X1048576',	7),
		]),
		('',		9),
	]),
	(0x0004, 'CTRL', [
		('nfcen',	1),
		('nfcdis',	1),
		('',		30),
	]),
	(0x0008, 'SR', [
		('smcsts',	1),
		('',		3),
		('rb_rise',	1),
		('rb_fall',	1),
		('',		2),
		('nfcbusy',	1),
		('',		2),
		('nfcwr',	1),
		('nfcsid',	3),
		('',		1),
		('xfrdone',	1),
		('cmddone',	1),
		('',		2),
		('dtoe',	1),
		('undef',	1),
		('awb',		1),
		('nfcase',	1),
		('rb_edge0',	1),
		('',		7),
	]),
	(0x000c, 'IER', smc_irqs),
	(0x0010, 'IDR', smc_irqs),
	(0x0014, 'IMR', smc_irqs),
	(0x0018, 'ADDR', [
		('addr_cycle0',	8),
		('',		24),
	]),
	(0x001c, 'BANK', [
		('bank',	3),
		('',		29),
	]),
	(0x0020, 'ECC_CTRL', [
		('rst',		1),
		('swrst',	1),
		('',		30),
	]),
	(0x0024, 'ECC_MD', [
		('ecc_pagesize',	2, [
			('PS512_16',	0),
			('PS1024_32',	1),
			('PS2048_64',	2),
			('PS4096_128',	3),
		]),
		('',		2),
		('typcorrec',	2, [
			('CPAGE',	0),
			('C256B',	1),
			('C512B',	2),
		]),
		('',		26),
	]),
	(0x0028, 'ECC_SR1', [
		('recerr0',	1),
		('eccerr0',	2),
		('',		1),
		('recerr1',	1),
		('eccerr1',	1),
		('mulerr1',	1),
		('',		1),
		('recerr2',	1),
		('eccerr2',	1),
		('mulerr2',	1),
		('',		1),
		('recerr3',	1),
		('eccerr3',	1),
		('mulerr3',	1),
		('',		1),
		('recerr4',	1),
		('eccerr4',	2),
		('',		1),
		('recerr5',	1),
		('eccerr5',	2),
		('',		1),
		('recerr6',	1),
		('eccerr6',	2),
		('',		1),
		('recerr7',	1),
		('eccerr7',	2),
		('',		1),
	]),
	(0x002c, 'ECC_PR0', [
		('bitaddr',	4),
		('wordaddr',	12),
		('',		16),
	]),
	(0x0030, 'ECC_PR1', [
		('nparity',	16),
		('',		16),
	]),
	(0x0034, 'ECC_SR2', [
		('recerr8',	1),
		('eccerr8',	2),
		('',		1),
		('recerr9',	1),
		('eccerr9',	1),
		('mulerr9',	1),
		('',		1),
		('recerr10',	1),
		('eccerr10',	1),
		('mulerr10',	1),
		('',		1),
		('recerr11',	1),
		('eccerr11',	1),
		('mulerr11',	1),
		('',		1),
		('recerr12',	1),
		('eccerr12',	2),
		('',		1),
		('recerr13',	1),
		('eccerr13',	2),
		('',		1),
		('recerr14',	1),
		('eccerr14',	2),
		('',		1),
		('recerr15',	1),
		('eccerr15',	2),
		('',		1),
	]),
	[ 14, 4,
		(0x0038, 'ECC_PR2_15', [
			('bitaddr',	3),
			('wordaddr',	9),
			('nparity',	12),
			('',		8),
		]),
	],
	[ 4, 0x14,



		(0x0070, 'SETUP', [
			('nwe_setup',	6),
			('',		2),
			('ncs_wr_setup', 6),
			('',		2),
			('nrd_setup',	6),
			('',		2),
			('ncs_rd_setup', 6),
			('',		2),
		]),
		(0x0074, 'PULSE', [
			('nwe_pulse',	6),
			('',		2),
			('ncs_wr_pulse', 6),
			('',		2),
			('nrd_pulse',	6),
			('',		2),
			('ncs_rd_pulse', 6),
			('',		2),
		]),
		(0x0078, 'CYCLE', [
			('nwe_cycle',	9),
			('',		7),
			('nrd_cycle',	9),
			('',		7),
		]),
		(0x007c, 'TIMINGS', [
			('tclr',	4),
			('tadl',	4),
			('tar',		4),
			('ocms',	1),
			('',		3),
			('trr',		4),
			('',		4),
			('twb',		4),
			('rbnsel',	3),
			('nfsel',	1),
		]),
		(0x0080, 'MODE', [
			('read_mode',	1, [
				('NCS_CTRL',	0),
				('NRD_CTRL',	1),
			]),
			('write_mode',	1, [
				('NCS_CTRL',	0),
				('NWE_CTRL',	1),
			]),
			('',		2),
			('exnw_mode',	2, [
				('DISABLED',	0),
				('FROZEN',	2),
				('READY',	3),
			]),
			('',		2),
			('bat',		1),
			('',		3),
			('dbw',		1, [
				('BIT_8',	0),
				('BIT_16',	1),
			]),
			('',		3),
			('tdf_cycles',	4),
			('tdf_mode',	1),
			('',		11),
		]),
	],
	(0x0110, 'OCMS', [
		('smse',	1),
		('srse',	1),
		('',		30),
	]),
	[ 2, 4,
		(0x0114, 'KEY'),
	],
	(0x01e4, 'WPCR', [
		('wp_en',	1),
		('',		7),
		('wp_key',	24, [
			('KEY',		0x534d43),
		]),
	]),
	(0x01e8, 'WPSR', [
		('wp_vs',	4),
		('',		4),
		('wp_vsrc',	16),
		('',		8),
	]),
]

