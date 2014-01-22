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
name = 'SCB'

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CPUID', [
		('revision',	4),
		('partno',	12),
		('_1100',	4),
		('variant',	4),
		('implementer',	8),
	]),
	(0x04, 'ICSR', [
		('vectactive',	9),
		('',		3),
		('vectpending',	9),
		('',		1),
		('isrpending',	1),
		('isrpreempt',	1),
		('',		1),
		('pendstclr',	1),
		('pendstset',	1),
		('pendsvclr',	1),
		('pendsvset',	1),
		('',		2),
		('nmipendset',	1),
	]),
	(0x08, 'VTOR', [
		('',		7),
		('tbloff',	25),
	]),
	(0x0c, 'AIRCR', [
		('',		1),
		('vectclractive', 1),
		('sysresetreq',	1),
		('',		12),
		('endianness',	1),
		('vectkey',	16),
	]),
	(0x10, 'SCR', [
		('',		1),
		('sleeponexit',	1),
		('sleepdeep',	1),
		('',		1),
		('sevonpend',	1),
		('',		27),
	]),
	(0x14, 'CCR', [
		('',		3),
		('unalign_trp',	1),
		('',		5),
		('stkalign',	1),
		('',		22),
	]),
	(0x1c, 'SHPR2', [
		('',		30),
		('pri_11',	2),
	]),
	(0x20, 'SHPR3', [
		('',		22),
		('pri_14',	2),
		('',		6),
		('pri_15',	2),
	]),
	(0x24, 'SHCSR', [
		('',		15),
		('svcallpended', 1),
		('',		16),
	]),
	(0x30, 'DFSR', [
		('halted',	1),
		('bkpt',	1),
		('dwttrap',	1),
		('vcatch',	1),
		('external',   	1),
		('',		27),
	]),
]

