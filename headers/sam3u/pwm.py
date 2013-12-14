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
name = 'PWM'

#------------------------------------------------------------------------------
pwm_irqs1 = [
	('chid0',	1),
	('chid1',	1),
	('chid2',	1),
	('chid3',	1),
	('',		12),
	('fchid0',	1),
	('fchid1',	1),
	('fchid2',	1),
	('fchid3',	1),
	('',		12),
]

pwm_irqs2 = [
	('wrdy',	1),
	('endtx',	1),
	('txbufe',	1),
	('unre',	1),
	('',		4),
	('cmpm0',	1),
	('cmpm1',	1),
	('cmpm2',	1),
	('cmpm3',	1),
	('cmpm4',	1),
	('cmpm5',	1),
	('cmpm6',	1),
	('cmpm7',	1),
	('cmpu0',	1),
	('cmpu1',	1),
	('cmpu2',	1),
	('cmpu3',	1),
	('cmpu4',	1),
	('cmpu5',	1),
	('cmpu6',	1),
	('cmpu7',	1),
	('',		8),
]

#------------------------------------------------------------------------------
registers = [
	(0x0000, 'CLK', [
		('diva',	8),
		('prea',	4),
		('',		4),
		('divb',	8),
		('preb',	4),
		('',		4),
	]),
	(0x0004, 'ENA', [
		('chid0',	1),
		('chid1',	1),
		('chid2',	1),
		('chid3',	1),
		('',		28),
	]),
	(0x0008, 'DIS', [
		('chid0',	1),
		('chid1',	1),
		('chid2',	1),
		('chid3',	1),
		('',		28),
	]),
	(0x000c, 'SR', [
		('chid0',	1),
		('chid1',	1),
		('chid2',	1),
		('chid3',	1),
		('',		28),
	]),
	(0x0010, 'IER1', pwm_irqs1),
	(0x0014, 'IDR1', pwm_irqs1),
	(0x0018, 'IMR1', pwm_irqs1),
	(0x001c, 'ISR1', pwm_irqs1),
	(0x0020, 'SCM', [
		('sync0',	1),
		('sync1',	1),
		('sync2',	1),
		('sync3',	1),
		('',		12),
		('updm',	2, [
			('MODE0',	0),
			('MODE1',	1),
			('MODE2',	2),
		]),
		('',		2),
		('ptrm',	1),
		('ptrcs',	3),
		('',		8),
	]),
	(0x0028, 'SCUC', [
		('updulock',	1),
		('',		31),
	]),
	(0x002c, 'SCUP', [
		('upr',		4),
		('uprcnt',	4),
		('',		24),
	]),
	(0x0030, 'SCUPUPD', [
		('uprupd',	4),
		('',		28),
	]),
	(0x0034, 'IER2', pwm_irqs2),
	(0x0038, 'IDR2', pwm_irqs2),
	(0x003c, 'IMR2', pwm_irqs2),
	(0x0040, 'ISR2', pwm_irqs2),
	(0x0044, 'OOV', [
		('oovh0',	1),
		('oovh1',	1),
		('oovh2',	1),
		('oovh3',	1),
		('',		12),
		('oovl0',	1),
		('oovl1',	1),
		('oovl2',	1),
		('oovl3',	1),
		('',		12),
	]),
	(0x0048, 'OS', [
		('osh0',	1),
		('osh1',	1),
		('osh2',	1),
		('osh3',	1),
		('',		12),
		('osl0',	1),
		('osl1',	1),
		('osl2',	1),
		('osl3',	1),
		('',		12),
	]),
	(0x004c, 'OSS', [
		('ossh0',	1),
		('ossh1',	1),
		('ossh2',	1),
		('ossh3',	1),
		('',		12),
		('ossl0',	1),
		('ossl1',	1),
		('ossl2',	1),
		('ossl3',	1),
		('',		12),
	]),
	(0x0050, 'OSC', [
		('osch0',	1),
		('osch1',	1),
		('osch2',	1),
		('osch3',	1),
		('',		12),
		('oscl0',	1),
		('oscl1',	1),
		('oscl2',	1),
		('oscl3',	1),
		('',		12),
	]),
	(0x0054, 'OSSUPD', [
		('ossuph0',	1),
		('ossuph1',	1),
		('ossuph2',	1),
		('ossuph3',	1),
		('',		12),
		('ossupl0',	1),
		('ossupl1',	1),
		('ossupl2',	1),
		('ossupl3',	1),
		('',		12),
	]),
	(0x0058, 'OSCUPD', [
		('oscuph0',	1),
		('oscuph1',	1),
		('oscuph2',	1),
		('oscuph3',	1),
		('',		12),
		('oscupl0',	1),
		('oscupl1',	1),
		('oscupl2',	1),
		('oscupl3',	1),
		('',		12),
	]),
	(0x005c, 'FMR', [
		('fpol',	8),
		('fmod',	8),
		('ffil',	8),
		('',		8),
	]),
	(0x0060, 'FSR', [
		('fiv',		8),
		('fs',		8),
		('',		16),
	]),
	(0x0064, 'FCR', [
		('fclr',	8),
		('',		24),
	]),
	(0x0068, 'FPV', [
		('fpvh0',	1),
		('fpvh1',	1),
		('fpvh2',	1),
		('fpvh3',	1),
		('',		12),
		('fpvl0',	1),
		('fpvl1',	1),
		('fpvl2',	1),
		('fpvl3',	1),
		('',		12),
	]),
	(0x006c, 'FPE', [
		('fpe0',	8),
		('fpe1',	8),
		('fpe2',	8),
		('fpe3',	8),
	]),
	[ 2, 4,
		(0x007c, 'ELMR', [
			('csel0',	1),
			('csel1',	1),
			('csel2',	1),
			('csel3',	1),
			('csel4',	1),
			('csel5',	1),
			('csel6',	1),
			('csel7',	1),
			('',		24),
		]),
	],
	(0x00e4, 'WPCR', [
		('wpcmd',	2),
		('wprg0',	1),
		('wprg1',	1),
		('wprg2',	1),
		('wprg3',	1),
		('wprg4',	1),
		('wprg5',	1),
		('wpkey',	24, [
			('KEY',		0x50574d),
		]),
	]),
	(0x00e8, 'WPSR', [
		('wpsws0',	1),
		('wpsws1',	1),
		('wpsws2',	1),
		('wpsws3',	1),
		('wpsws4',	1),
		('wpsws5',	1),
		('',		1),
		('wpvs',	1),
		('wphws0',	1),
		('wphws1',	1),
		('wphws2',	1),
		('wphws3',	1),
		('wphws4',	1),
		('wphws5',	1),
		('',		2),
		('wpvsrc',	16),
	]),
	[ 8, 12,
		(0x0130, 'CMPV', [
			('cv',		24),
			('cvm',		1),
			('',		7),
		]),
		(0x0134, 'CMPVUPD', [
			('cvupd',	24),
			('cvmupd',	1),
			('',		7),
		]),
		(0x0138, 'CMPM', [
			('cen',		1),
			('',		3),
			('ctr',		4),
			('cpr',		4),
			('cprcnt',	4),
			('cupr',	4),
			('cuprcnt',	4),
			('',		8),
		]),
		(0x013c, 'CMPMUPD', [
			('cenupd',	1),
			('',		3),
			('ctrupd',	4),
			('cprupd',	4),
			('',		4),
			('cuprupd',	4),
			('',		12),
		]),
	],
	[ 4, 0x20,
		(0x0200, 'CMR', [
			('cpre',	4, [
				('MCK',		0x0),
				('MCK_DIV_2',	0x1),
				('MCK_DIV_4',	0x2),
				('MCK_DIV_8',	0x3),
				('MCK_DIV_16',	0x4),
				('MCK_DIV_32',	0x5),
				('MCK_DIV_64',	0x6),
				('MCK_DIV_128',	0x7),
				('MCK_DIV_256',	0x8),
				('MCK_DIV_512',	0x9),
				('MCK_DIV_1024', 0xa),
				('CLKA',	0xb),
				('CLKB',	0xc),
			]),
			('',		4),
			('calg',	1),
			('cpol',	1),
			('ces',		1),
			('',		5),
			('dte',		1),
			('dthi',	1),
			('dtli',	1),
			('',		13),
		]),
		(0x0204, 'CDTY'),
		(0x0208, 'CDTYUPD'),
		(0x020c, 'CPRD'),
		(0x0210, 'CPRDUPD'),
		(0x0214, 'CCNT'),
		(0x0218, 'DT', [
			('dth',		16),
			('dtl',		16),
		]),
		(0x021c, 'DTUPD', [
			('dthupd',	16),
			('dtlupd',	16),
		]),
	],
]

