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
name = 'HSMCI'

#------------------------------------------------------------------------------
hsmci_irqs = [
	('cmdrdy',	1),
	('rxrdy',	1),
	('txrdy',	1),
	('blke',	1),
	('dtip',	1),
	('notbusy',	1),
	('',		2),
	('mci_sdioirqa', 1),
	('',		3),
	('sdiowait',	1),
	('csrcv',	1),
	('',		2),
	('rinde',	1),
	('rdire',	1),
	('rcrce',	1),
	('rende',	1),
	('rtoe',	1),
	('dcrce',	1),
	('dtoe',	1),
	('cstoe',	1),
	('blkovre',	1),
	('dmadone',	1),
	('fifoempty',	1),
	('xfrdone',	1),
	('ackrcv',	1),
	('ackrcve',	1),
	('ovre',	1),
	('unre',	1),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CR', [
		('mcien',	1),
		('mcidis',	1),
		('pwsen',	1),
		('pwsdis',	1),
		('',		3),
		('swrst',	1),
		('',		24),
	]),
	(0x04, 'MR', [
		('clkdiv',	8),
		('pwsdiv',	3),
		('rdproof',	1),
		('wrproof',	1),
		('fbyte',	1),
		('padv',	1),
		('',		17),
	]),
	(0x08, 'DTOR', [
		('dtocyc',	4),
		('dtomul',	3, [
			('1',		0),
			('16',		1),
			('128',		2),
			('256',		3),
			('1024',	4),
			('4096',	5),
			('65536',	6),
			('1048576',	7),
		]),
		('',		25),
	]),
	(0x0c, 'SDCR', [
		('sdcsel',	2, [
			('SLOTA',	0),
			('SLOTB',	1),
			('SLOTC',	2),
			('SLOTD',	3),
		]),
		('',		4),
		('sdcbus',	2, [
			('1',		0),
			('4',		2),
			('8',		3),
		]),
		('',		24),
	]),
	(0x10, 'ARGR'),
	(0x14, 'CMDR', [
		('cmdnb',	6),
		('rsptyp',	2, [
			('NORESP',	0),
			('48_BIT',	1),
			('136_BIT',	2),
			('R1B',		3),
		]),
		('spcmd',	3, [
			('STD',		0),
			('INIT',	1),
			('SYNC',	2),
			('CE_ATA',	3),
			('IT_CMD',	4),
			('IT_RESP',	5),
			('BOR',		6),
			('EBO',		7),
		]),
		('opdcmd',	1, [
			('PUSHPULL',	0),
			('OPENDRAIN',	1),
		]),
		('maxlat',	1, [
			('5',		0),
			('64',		1),
		]),
		('',		3),
		('trcmd',	2, [
			('NO_DATA',	0),
			('START_DATA',	1),
			('STOP_DATA',	2),
		]),
		('trdir',	1, [
			('WRITE',	0),
			('READ',	1),
		]),
		('trtyp',	3, [
			('SINGLE',	0),
			('MULTIPLE',	1),
			('STREAM',	2),
			('BYTE',	4),
			('BLOCK',	5),
		]),
		('',		2),
		('iospcmd',	2, [
			('STD',		0),
			('SUSPEND',	1),
			('RESUME',	2),
		]),
		('atacs',	1, [
			('NORMAL',	0),
			('COMPLETION',	1),
		]),
		('boot_ack',	1),
		('',		4),
	]),
	(0x18, 'BLKR', [
		('bcnt',	16, [
			('MULTIPLE',	0),
			('BYTE',	4),
			('BLOCK',	5),
		]),
		('blklen',	16),
	]),
	(0x1c, 'CSTOR', [
		('cstocyc',	4),
		('cstomul',	3, [
			('1',		0),
			('16',		1),
			('128',		2),
			('256',		3),
			('1024',	4),
			('4096',	5),
			('65536',	6),
			('1048576',	7),
		]),
		('',		25),
	]),
	[ 4, 4,
		(0x20, 'RSPR'),
	],
	(0x30, 'RDR'),
	(0x34, 'TDR'),
	(0x40, 'SR', hsmci_irqs),
	(0x44, 'IER', hsmci_irqs),
	(0x48, 'IDR', hsmci_irqs),
	(0x4c, 'IMR', hsmci_irqs),
	(0x50, 'DMA', [
		('offset',	2),
		('',		2),
		('chksize',	1, [
			('1',		0),
			('4',		1),
		]),
		('',		3),
		('dmaen',	1),
		('',		3),
		('ropt',	1),
		('',		19),
	]),
	(0x54, 'CFG', [
		('fifomode',	1),
		('',		3),
		('ferrctrl',	1),
		('',		3),
		('hsmode',	1),
		('',		3),
		('lsync',	1),
		('',		19),
	]),
	(0xe4, 'WPMR', common.wpmr(0x4d4349)),
	(0xe8, 'WPSR', [
		('wp_vs',	4, [
			('NONE',	0),
			('WRITE',	1),
			('RESET',	2),
			('BOTH',	3),
		]),
		('',		4),
		('wp_vsrc',	16),
		('',		8),
	]),
	[ 256, 4,
		(0x0200, 'FIFO0'),
	],
]

