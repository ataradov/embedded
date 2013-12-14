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
name = 'MATRIX'

#------------------------------------------------------------------------------
registers = [
	[ 5, 4,
		(0x0000, 'MCFG', [
			('ulbt',	3),
			('',		29),
		]),
	],
	[ 10, 4,
		(0x0040, 'SCFG', [
			('slot_cycle',	8),
			('',		8),
			('defmstr_type', 2),
			('fixed_defmstr', 3),
			('',		3),
			('arbt',	2),
			('',		6),
		]),
	],
	[ 10, 4,
		(0x0080, 'PRAS', [
			('m0pr',	2),
			('',		2),
			('m1pr',	2),
			('',		2),
			('m2pr',	2),
			('',		2),
			('m3pr',	2),
			('',		2),
			('m4pr',	2),
			('',		14),
		]),
	],
	(0x0100, 'MRCR', [
		('rcb0',	1),
		('rcb1',	1),
		('rcb2',	1),
		('rcb3',	1),
		('rcb4',	1),
		('',		27),
	]),
	(0x01e4, 'WPMR', common.wpmr(0x4d4154)),
	(0x01e8, 'WPSR', common.wpsr),
]

