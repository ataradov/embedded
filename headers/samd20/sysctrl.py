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
name = 'SYSCTRL'

#------------------------------------------------------------------------------
sysctrl_ints = [
	('xoscrdy',	1),
	('xosc32krdy',	1),
	('osc32krdy',	1),
	('osc8mrdy',	1),
	('dfllrdy',	1),
	('dflloob',	1),
	('dflllckf',	1),
	('dflllckc',	1),
	('dfllrcs',	1),
	('bod33rdy',	1),
	('bod33det',	1),
	('b33srdy',	1),
	('',		20),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'INTENCLR', sysctrl_ints),
	(0x04, 'INTENSET', sysctrl_ints),
	(0x08, 'INTFLAG', sysctrl_ints),
	(0x0c, 'PCLKSR', sysctrl_ints),
	(0x10, 'XOSC', [
		('',		1),
		('enable',	1),
		('xtalen',	1),
		('',		3),
		('runstdby',	1),
		('ondemand',	1),
		('gain',	3),
		('ampgc',	1),
		('startup',	4, [
			('1',		0x0),
			('2',		0x1),
			('4',		0x2),
			('8',		0x3),
			('16',		0x4),
			('32',		0x5),
			('64',		0x6),
			('128',		0x7),
			('256',		0x8),
			('512',		0x9),
			('1024',	0xa),
			('2048',	0xb),
			('4096',	0xc),
			('8192',	0xd),
			('16384',	0xe),
			('32768',	0xf),
		]),
	]),
	(0x14, 'XOSC32K', [
		('',		1),
		('enable',	1),
		('xtalen',	1),
		('en32k',	1),
		('en1k',	1),
		('aampen',	1),
		('runstdby',	1),
		('ondemand',	1),
		('startup',	3, [
			('1',	 	0),
			('32', 		1),
			('2048', 	2),
			('4096', 	3),
			('16384', 	4),
			('32768', 	5),
			('65536', 	6),
			('131072', 	7),
		]),
		('',		1),
		('wrtlock',	1),
		('',		3),
	]),
	(0x18, 'OSC32K', [
		('',		1),
		('enable',	1),
		('en32k',	1),
		('en1k',	1),
		('',		2),
		('runstdby',	1),
		('ondemand',	1),
		('startup',	3, [
			('1',		0),
			('2',		1),
			('4',		2),
			('8',		3),
			('16',		4),
			('32',		5),
			('64',		6),
			('128',		7),
		]),
		('',		1),
		('wrtlock',	1),
		('',		3),
		('calib',	7),
		('',		9),
	]),
	(0x1c, 'OSCULP32K', [
		('calib',	5),
		('',		2),
		('wrtlock',	1),
	]),
	(0x20, 'OSC8M', [
		('',		1),
		('enable',	1),
		('',		4),
		('runstdby',	1),
		('ondemand',	1),
		('presc',	2, [
			('1',		0),
			('2',		1),
			('4',		2),
			('8',		3),
		]),
		('',		6),
		('calib',	12),
		('',		2),
		('frange',	2),
	]),
	(0x24, 'DFLLCTRL', [
		('',		1),
		('enable',	1),
		('mode',	1),
		('stable',	1),
		('llaw',	1),
		('usbcrm',	1),
		('runstdby',	1),
		('ondemand',	1),
		('ccdis',	1),
		('qldis',	1),
		('',		6),
	]),
	(0x28, 'DFLLVAL', [
		('fine',	10),
		('coarse',	6),
		('diff',	16),
	]),
	(0x2c, 'DFLLMUL', [
		('mul',		16),
		('fstep',	10),
		('cstep',	6),
	]),
	(0x30, 'DFLLSYNC', [
		('',		7),
		('readreq',	1),
	]),
	(0x34, 'BOD33', [
		('',		1),
		('enable',	1),
		('hyst',	1),
		('action',	2, [
			('NONE',	0),
			('RESET',	1),
			('INTERRUPT',	2),
		]),
		('',		1),
		('runstdby',	1),
		('',		1),
		('mode',	1),
		('cen',		1),
		('',		2),
		('psel',	4, [
			('2',		0x0),
			('4',		0x1),
			('8',		0x2),
			('16',		0x3),
			('32',		0x4),
			('64',		0x5),
			('128',		0x6),
			('256',		0x7),
			('512',		0x8),
			('1K',		0x9),
			('2K',		0xa),
			('4K',		0xb),
			('8K',		0xc),
			('16K',		0xd),
			('32K',		0xe),
			('64K',		0xf),
		]),
		('level',	6),
		('',		10),
	]),
	(0x40, 'VREF', [
		('',		1),
		('tsen',	1),
		('bgouten',	1),
		('',		13),
		('calib',	11),
		('',		5),
	]),
]

