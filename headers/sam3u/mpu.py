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
name = 'MPU'

#------------------------------------------------------------------------------
registers = [
	(0x00, 'TYPE', [
		('separate',	1),
		('',		7),
		('dregion',	8),
		('iregion',	8),
		('',		8),
	]),
	(0x04, 'CTRL', [
		('enable',	1),
		('hfnmiena',	1),
		('privdefena',	1),
		('',		29),
	]),
	(0x08, 'RNR', [
		('region',	8),
		('',		24),
	]),
	[ 4, 8,
		(0x0c, 'RBAR', [
			('region',	4),
			('valid',	1),
			('addr',	27),
		]),
		(0x10, 'RASR', [
			('enable',	1),
			('size',	5),
			('',		2),
			('srd',		8),
			('b',		1),
			('c',		1),
			('s',		1),
			('tex',		3),
			('',		2),
			('ap',		3),
			('',		1),
			('xn',		1),
			('',		3),
		]),
	],
]

