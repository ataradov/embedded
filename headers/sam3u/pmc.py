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
name = 'PMC'

#------------------------------------------------------------------------------
pmc_mckr_css = [
	('SLOW_CLK',	0),
	('MAIN_CLK',	1),
	('PLLA_CLK',	2),
	('UPLL_CLK',	3),
]

pmc_mckr_pres = [
	('CLK_1',	0),
	('CLK_2',	1),
	('CLK_4',	2),
	('CLK_8',	3),
	('CLK_16',	4),
	('CLK_32',	5),
	('CLK_64',	6),
	('CLK_3',	7),
]

pmc_pck_css = [
	('SLOW_CLK',	0),
	('MAIN_CLK',	1),
	('PLLA_CLK',	2),
	('UPLL_CLK',	3),
	('MCK',		4),
]

pmc_pck_pres = [
	('CLK_1',	0),
	('CLK_2',	1),
	('CLK_4',	2),
	('CLK_8',	3),
	('CLK_16',	4),
	('CLK_32',	5),
	('CLK_64',	6),
]

pmc_pck = [
	('',		8),
	('pck0',	1),
	('pck1',	1),
	('pck2',	1),
	('',		21),
]

pmc_irqs = [
	('moscxts',	1),
	('locka',	1),
	('',		1),
	('mckrdy',	1),
	('',		2),
	('locku',	1),
	('',		1),
	('pckrdy0',	1),
	('pckrdy1',	1),
	('pckrdy2',	1),
	('',		5),
	('moscsels',	1),
	('moscrcs',	1),
	('cfdev',	1),
	('',		13),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'SCER', pmc_pck),
	(0x04, 'SCDR', pmc_pck),
	(0x08, 'SCSR', pmc_pck),
	(0x10, 'PCER0', common.pid),
	(0x14, 'PCDR0', common.pid),
	(0x18, 'PCSR0', common.pid),
	(0x1c, 'CKGR_UCKR', [
		('',		16),
		('upllen',	1),
		('',		3),
		('upllcount',	4),
		('',		8),
	]),
	(0x20, 'CKGR_MOR', [
		('moscxten',	1),
		('moscxtby',	1),
		('',		1),
		('moscrcen',	1),
		('moscrcf',	3, [
			('4_MHz',	0),
			('8_MHz',	1),
			('12_MHz',	2),
		]),
		('',		1),
		('moscxtst',	8),
		('key',		8, [
			('KEY', 	0x37),
		]),
		('moscsel',	1),
		('cfden',	1),
		('',		6),
	]),
	(0x24, 'CKGR_MCFR', [
		('mainf',	16),
		('mainfrdy',	1),
		('',		15),
	]),
	(0x28, 'CKGR_PLLAR', [
		('diva',	8),
		('pllacount',	6),
		('',		2),
		('mula',	11),
		('',		2),
		('one',		1),
		('',		2),
	]),
	(0x30, 'MCKR', [
		('css',		2, pmc_mckr_css),
		('',		2),
		('pres',	3, pmc_mckr_pres),
		('',		5),
		('plladiv2',	1),
		('uplldiv2',	1),
		('',		18),
	]),
	[ 3, 4,
		(0x40, 'PCK', [
			('css',		3, pmc_pck_css),
			('',		1),
			('pres',	3, pmc_pck_pres),
			('',		25),
		]),
	],
	(0x60, 'IER', pmc_irqs),
	(0x64, 'IDR', pmc_irqs),
	(0x68, 'SR', [
		('moscxts',	1),
		('locka',	1),
		('',		1),
		('mckrdy',	1),
		('',		2),
		('locku',	1),
		('oscsels',	1),
		('pckrdy0',	1),
		('pckrdy1',	1),
		('pckrdy2',	1),
		('',		5),
		('moscsels',	1),
		('moscrcs',	1),
		('cfdev',	1),
		('cfds',	1),
		('fos',		1),
		('',		11),
	]),
	(0x6c, 'IMR', pmc_irqs),
	(0x70, 'FSMR', [
		('fstt0',	1),
		('fstt1',	1),
		('fstt2',	1),
		('fstt3',	1),
		('fstt4',	1),
		('fstt5',	1),
		('fstt6',	1),
		('fstt7',	1),
		('fstt8',	1),
		('fstt9',	1),
		('fstt10',	1),
		('fstt11',	1),
		('fstt12',	1),
		('fstt13',	1),
		('fstt14',	1),
		('fstt15',	1),
		('rttal',	1),
		('rtcal',	1),
		('usbal',	1),
		('',		1),
		('lpm',		1),
		('',		11),
	]),
	(0x74, 'FSPR', [
		('fstp0',	1),
		('fstp1',	1),
		('fstp2',	1),
		('fstp3',	1),
		('fstp4',	1),
		('fstp5',	1),
		('fstp6',	1),
		('fstp7',	1),
		('fstp8',	1),
		('fstp9',	1),
		('fstp10',	1),
		('fstp11',	1),
		('fstp12',	1),
		('fstp13',	1),
		('fstp14',	1),
		('fstp15',	1),
		('',		16),
	]),
	(0x78, 'FOCR', [
		('foclr',	1),
		('',		31),
	]),
	(0xe4, 'WPMR', common.wpmr(0x504d43)),
	(0xe8, 'WPSR', common.wpsr),
]

