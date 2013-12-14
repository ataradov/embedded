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
name = 'RSTC'

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CR', [
		('procrst',	1),
		('',		1),
		('perrst',	1),
		('extrst',	1),
		('',		20),
		('key',		8, [
			('KEY', 	0xa5),
		]),
	]),
	(0x04, 'SR', [
		('ursts',	1),
		('',		7),
		('rsttyp',	3, [
			('GENERAL', 	0),
			('BACKUP', 	1),
			('WATCHDOG',	2),
			('SOFTWARE',	3),
			('USER', 	4),
		]),
		('',		5),
		('nrstl',	1),
		('srcmp',	1),
		('',		14),
	]),
	(0x08, 'MR', [
		('ursten',	1),
		('',		3),
		('urstien',	1),
		('',		3),
		('erstl',	4),
		('',		12),
		('key',		8, [
			('KEY', 	0xa5),
		]),
	]),
]

