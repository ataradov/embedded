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
name = 'PORT'

#------------------------------------------------------------------------------
port_bits = [('p%d' % i, 1) for i in range(32)]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'DIR', port_bits),
	(0x04, 'DIRCLR', port_bits),
	(0x08, 'DIRSET', port_bits),
	(0x0c, 'DIRTGL', port_bits),
	(0x10, 'OUT', port_bits),
	(0x14, 'OUTCLR', port_bits),
	(0x18, 'OUTSET', port_bits),
	(0x1c, 'OUTTGL', port_bits),
	(0x20, 'IN', port_bits),
	(0x24, 'CTRL', port_bits),
	(0x28, 'WRCONFIG', [
		('pinmask',	16),
		('pmuxen',	1),
		('inen',	1),
		('pullen',	1),
		('',		3),
		('drvstr',	1),
		('',		1),
		('pmux',	4),
		('wrpmux',	1),
		('',		1),
		('wrpincfg',	1),
		('hwsel',	1),
	]),
	[ 16, 1,
		(0x30, 'PMUX', [
			('pmuxe',	4),
			('pmuxo',	4),
		]),
	],
	[ 32, 1,
		(0x40, 'PINCFG', [
			('pmuxen',	1),
			('inen',	1),
			('pullen',	1),
			('',		3),
			('drvstr',	1),
			('',		1),
		]),
	],
]

