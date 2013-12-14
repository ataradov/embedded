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
name = 'SUPC'

#------------------------------------------------------------------------------
supc_debouncer_period = [
	('IMMEDIATE',	0),
	('3_SCLK',	1),
	('32_SCLK',	2),
	('512_SCLK',	3),
	('4096_SCLK',	4),
	('32768_SCLK',	5),
]

supc_wakeup_trans = [
	('HIGH_TO_LOW',	0),
	('LOW_TO_HIGH',	1),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CR', [
		('',		2),
		('vroff',	1),
		('xtalsel',	1),
		('',		20),
		('key',		8, [
			('KEY', 	0xa5),
		]),
	]),
	(0x04, 'SMMR', [
		('smth',	4, [
			('1_9V',	0x0),
			('2_0V',	0x1),
			('2_1V',	0x2),
			('2_2V',	0x3),
			('2_3V',	0x4),
			('2_4V',	0x5),
			('2_5V',	0x6),
			('2_6V',	0x7),
			('2_7V',	0x8),
			('2_8V',	0x9),
			('2_9V',	0xa),
			('3_0V',	0xb),
			('3_1V',	0xc),
			('3_2V',	0xd),
			('3_3V',	0xe),
			('3_4V',	0xf),
		]),
		('',		4),
		('smsmpl',	3, [
			('SMD',		0),
			('CSM',		1),
			('32SLCK',	2),
			('256SLCK',	3),
			('2048SLCK',	4),
		]),
		('',		1),
		('smrsten',	1),
		('smien',	1),
		('',		18),
	]),
	(0x08, 'MR', [
		('',		12),
		('bodrsten',	1),
		('boddis',	1),
		('vddiordyonreg', 1),
		('',		5),
		('oscbypass',	1),
		('',		3),
		('key',		8, [
			('KEY', 	0xa5),
		]),
	]),
	(0x0c, 'WUMR', [
		('fwupen',	1),
		('smen',	1),
		('rtten',	1),
		('rtcen',	1),
		('',		4),
		('fwupdbc',	3, supc_debouncer_period),
		('',		1),
		('wkupdbc',	3, supc_debouncer_period),
		('',		17),
	]),
	(0x10, 'WUIR', [
		('wkupen0',	1),
		('wkupen1',	1),
		('wkupen2',	1),
		('wkupen3',	1),
		('wkupen4',	1),
		('wkupen5',	1),
		('wkupen6',	1),
		('wkupen7',	1),
		('wkupen8',	1),
		('wkupen9',	1),
		('wkupen10',	1),
		('wkupen11',	1),
		('wkupen12',	1),
		('wkupen13',	1),
		('wkupen14',	1),
		('wkupen15',	1),
		('wkupt0',	1, supc_wakeup_trans),
		('wkupt1',	1, supc_wakeup_trans),
		('wkupt2',	1, supc_wakeup_trans),
		('wkupt3',	1, supc_wakeup_trans),
		('wkupt4',	1, supc_wakeup_trans),
		('wkupt5',	1, supc_wakeup_trans),
		('wkupt6',	1, supc_wakeup_trans),
		('wkupt7',	1, supc_wakeup_trans),
		('wkupt8',	1, supc_wakeup_trans),
		('wkupt9',	1, supc_wakeup_trans),
		('wkupt10',	1, supc_wakeup_trans),
		('wkupt11',	1, supc_wakeup_trans),
		('wkupt12',	1, supc_wakeup_trans),
		('wkupt13',	1, supc_wakeup_trans),
		('wkupt14',	1, supc_wakeup_trans),
		('wkupt15',	1, supc_wakeup_trans),
	]),
	(0x14, 'SR', [
		('fwups',	1),
		('wkups',	1),
		('smws',	1),
		('bodrsts',	1),
		('smrsts',	1),
		('sms',		1),
		('smos',	1, [
			('HIGH',	0),
			('LOW',		1),
		]),
		('oscsel',	1, [
			('RC',		0),
			('CRYST',	1),
		]),
		('',		4),
		('fwupis',	1, [
			('LOW',		0),
			('HIGH',	1),
		]),
		('',		3),
		('wkupis0',	1),
		('wkupis1',	1),
		('wkupis2',	1),
		('wkupis3',	1),
		('wkupis4',	1),
		('wkupis5',	1),
		('wkupis6',	1),
		('wkupis7',	1),
		('wkupis8',	1),
		('wkupis9',	1),
		('wkupis10',	1),
		('wkupis11',	1),
		('wkupis12',	1),
		('wkupis13',	1),
		('wkupis14',	1),
		('wkupis15',	1),
	]),
]

