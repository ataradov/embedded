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
name = 'NVMCTRL'


#------------------------------------------------------------------------------
nvmctrl_ints = [
	('ready',	1),
	('error',	1),
	('',		6),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRLA', [
		('cmd',		7, [
			('ER',		0x2),
			('WP',		0x4),
			('EAR',		0x5),
			('WAP',		0x6),
			('LR',		0x40),
			('UR',		0x41),
			('SPRM',	0x42),
			('CPRM',	0x43),
			('PBC',		0x44),
			('SSB',		0x45),
			('INVALL',	0x46),
		]),
		('',		1),
		('cmdex',	8, [
			('KEY',		0xa5),
		]),
	]),
	(0x04, 'CTRLB', [
		('',		1),
		('rws',		4, [
			('SINGLE',	0),
			('HALF',	1),
			('DUAL',	2),
		]),
		('',		2),
		('manw',	1),
		('sleepprm',	2, [
			('WAKEONACCESS',	0),
			('WAKEUPINSTANT',	1),
			('DISABLED',	3),
		]),
		('',		6),
		('readmode',	2, [
			('NO_MISS_PENALTY', 	0),
			('LOW_POWER',	 	1),
			('DETERMINISTIC',	2),
		]),
		('cachedis',	1),
		('',		13),
	]),
	(0x08, 'PARAM', [
		('nvmp',	16),
		('psz',		3, [
			('8',		0),
			('16',		1),
			('32',		2),
			('64',		3),
			('128',		4),
			('256',		5),
			('512',		6),
			('1024',	7),
		]),
		('',		13),
	]),
	(0x0c, 'INTENCLR', nvmctrl_ints),
	(0x10, 'INTENSET', nvmctrl_ints),
	(0x14, 'INTFLAG', nvmctrl_ints),
	(0x18, 'STATUS', [
		('prm',		1),
		('load',	1),
		('proge',	1),
		('locke',	1),
		('nvme',	1),
		('',		3),
		('sb',		1),
		('',		7),
	]),
	(0x1c, 'ADDR', [
		('addr',	22),
		('',		10),
	]),
	(0x20, 'LOCK',	16),
]

