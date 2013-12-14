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
name = 'TC'

#------------------------------------------------------------------------------
tc_edge = [
	('NONE',	0),
	('RISING',	1),
	('FALLING',	2),
	('EDGE',	3),
]

tc_irqs = [
	('covfs',	1),
	('lovrs',	1),
	('cpas',	1),
	('cpbs',	1),
	('cpcs',	1),
	('ldras',	1),
	('ldrbs',	1),
	('etrgs',	1),
	('',		24),
]

tc_qirqs = [
	('idx',		1),
	('dirchg',	1),
	('qerr',	1),
	('',		29),
]

#------------------------------------------------------------------------------
registers = [
	[ 3, 0x40,
		(0x00, 'CCR', [
			('clken',	1),
			('clkdis',	1),
			('swtrg',	1),
			('',		29),
		]),
		(0x04, 'CMR', [
			('tcclks',	3, [
				('TIMER_CLOCK1', 0),
				('TIMER_CLOCK2', 1),
				('TIMER_CLOCK3', 2),
				('TIMER_CLOCK4', 3),
				('TIMER_CLOCK5', 4),
				('XC0',		5),
				('XC1',		6),
				('XC2',		7),
			]),
			('clki',	1),
			('burst',	2, [
				('NONE',	0),
				('XC0',		1),
				('XC1',		2),
				('XC2',		3),
			]),
			('ldbstop',	1),
			('ldbdis',	1),
			('etrgedg',	2, tc_edge),
			('abetrg',	1),
			('',		3),
			('cpctrg',	1),
			('wave',	1),
			('ldra',	2, tc_edge),
			('ldrb',	2, tc_edge),
			('',		12),
		]),
		(0x10, 'CV'),
		(0x14, 'RA'),
		(0x18, 'RB'),
		(0x1c, 'RC'),
		(0x20, 'SR', [
			('covfs',	1),
			('lovrs',	1),
			('cpas',	1),
			('cpbs',	1),
			('cpcs',	1),
			('ldras',	1),
			('ldrbs',	1),
			('etrgs',	1),
			('',		8),
			('clksta',	1),
			('mtioa',	1),
			('mtiob',	1),
			('',		13),
		]),
		(0x24, 'IER', tc_irqs),
		(0x28, 'IDR', tc_irqs),
		(0x2c, 'IMR', tc_irqs),
	],
	(0xc0, 'BCR', [
		('sync',	1),
		('',		31),
	]),
	(0xc4, 'BMR', [
		('tc0xc0s',	2, [
			('TCLK0',	0),
			('TIOA1',	2),
			('TIOA2',	3),
		]),
		('tc1xc1s',	2, [
			('TCLK1',	0),
			('TIOA0',	2),
			('TIOA2',	3),
		]),
		('tc2xc2s',	2, [
			('TCLK2',	0),
			('TIOA1',	2),
			('TIOA2',	3),
		]),
		('',		2),
		('qden',	1),
		('posen',	1),
		('speeden',	1),
		('qdtrans',	1),
		('edgpha',	1),
		('inva',	1),
		('invb',	1),
		('invidx',	1),
		('swap',	1),
		('idxphb',	1),
		('',		1),
		('filter',	1),
		('maxfilt',	6),
		('',		6),
	]),
	(0xc8, 'QIER', tc_qirqs),
	(0xcc, 'QIDR', tc_qirqs),
	(0xd0, 'QIMR', tc_qirqs),
	(0xd4, 'QISR', [
		('idx',		1),
		('dirchg',	1),
		('qerr',	1),
		('',		5),
		('dir',		1),
		('',		23),
	]),
]

