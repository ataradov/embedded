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
name = 'SSC'

#------------------------------------------------------------------------------
ssc_cks = [
	('MCK',		0),
	('TK',		1),
	('RK',		2),
]

ssc_cko_ckg = [
	('NONE',	0),
	('CONTINUOUS',	1),
	('TRANSFER',	2),
]

ssc_start = [
	('CONTINUOUS',	0),
	('TRANSMIT',	1),
	('RF_LOW',	2),
	('RF_HIGH',	3),
	('RF_FALLING',	4),
	('RF_RISING',	5),
	('RF_LEVEL',	6),
	('RF_EDGE',	7),
	('CMP_0',	8),
]

ssc_fsos = [
	('NONE',	0),
	('NEGATIVE',	1),
	('POSITIVE',	2),
	('LOW',		3),
	('HIGH',	4),
	('TOGGLING',	5),
]

ssc_fsedge = [
	('POSITIVE',	0),
	('NEGATIVE',	1),
]

ssc_irqs = [
	('txrdy',	1),
	('txempty',	1),
	('',		2),
	('rxrdy',	1),
	('ovrun',	1),
	('',		2),
	('cp0',		1),
	('cp1',		1),
	('txsyn',	1),
	('rxsyn',	1),
	('',		20),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CR', [
		('rxen',	1),
		('rxdis',	1),
		('',		6),
		('txen',	1),
		('txdis',	1),
		('',		5),
		('swrst',	1),
		('',		16),
	]),
	(0x04, 'CMR', [
		('div',		12),
		('',		20),
	]),
	(0x10, 'RCMR', [
		('cks',		2, ssc_cks),
		('cko',		3, ssc_cko_ckg),
		('cki',		1),
		('ckg',		2, ssc_cko_ckg),
		('start',	4, ssc_start),
		('stop',	1),
		('',		3),
		('sttdly',	8),
		('period',	8),
	]),
	(0x14, 'RFMR', [
		('datlen',	5),
		('loop',	1),
		('',		1),
		('msbf',	1),
		('datnb',	4),
		('',		4),
		('fslen',	4),
		('fsos',	3, ssc_fsos),
		('',		1),
		('fsedge',	1, ssc_fsedge),
		('',		3),
		('fslen_ext',	4),
	]),
	(0x18, 'TCMR', [
		('cks',		2, ssc_cks),
		('cko',		3, ssc_cko_ckg),
		('cki',		1),
		('ckg',		2, ssc_cko_ckg),
		('start',	4, ssc_start),
		('',		4),
		('sttdly',	8),
		('period',	8),
	]),
	(0x1c, 'TFMR', [
		('datlen',	5),
		('datdef',	1),
		('',		1),
		('msbf',	1),
		('datnb',	4),
		('',		4),
		('fslen',	4),
		('fsos',	3, ssc_fsos),
		('fsden',	1),
		('fsedge',	1, ssc_fsedge),
		('',		3),
		('fslen_ext',	4),
	]),
	(0x20, 'RHR'),
	(0x24, 'THR'),
	(0x30, 'RSHR', [
		('rsdat',	16),
		('',		16),
	]),
	(0x34, 'TSHR', [
		('tsdat',	16),
		('',		16),
	]),
	(0x38, 'RC0R', [
		('cp0',		16),
		('',		16),
	]),
	(0x3c, 'RC1R', [
		('cp1',		16),
		('',		16),
	]),
	(0x40, 'SR', [
		('txrdy',	1),
		('txempty',	1),
		('',		2),
		('rxrdy',	1),
		('ovrun',	1),
		('',		2),
		('cp0',		1),
		('cp1',		1),
		('txsyn',	1),
		('rxsyn',	1),
		('',		4),
		('txen',	1),
		('rxen',	1),
		('',		14),
	]),
	(0x44, 'IER', ssc_irqs),
	(0x48, 'IDR', ssc_irqs),
	(0x4c, 'IMR', ssc_irqs),
	(0xe4, 'WPMR', common.wpmr(0x535343)),
	(0xe8, 'WPSR', common.wpsr),
]

