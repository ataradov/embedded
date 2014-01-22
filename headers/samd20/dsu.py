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
name = 'DSU'

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRL', [
		('swrst',	1),
		('',		1),
		('crc',		1),
		('mbist',	1),
		('ce',		1),
		('',		3),
	]),
	(0x01, 'STATUSA', [
		('done',	1),
		('crstext',	1),
		('berr',	1),
		('fail',	1),
		('perr',	1),
		('',		3),
	]),
	(0x02, 'STATUSB', [
		('prot',	1),
		('dbgpres',	1),
		('dccd0',	1),
		('dccd1',	1),
		('hpe',		1),
		('',		3),
	]),
	(0x04, 'ADDR', [
		('',		2),
		('addr',	30),
	]),
	(0x08, 'LENGTH', [
		('',		2),
		('length',	30),
	]),
	(0x0c, 'DATA'),
	[ 2, 4,
		(0x10, 'DCC'),
	],
	(0x18, 'DID', [
		('devsel',	8, [
			('SAMD20J18A',	0x0),
			('SAMD20J17A',	0x1),
			('SAMD20J16A',	0x2),
			('SAMD20J15A',	0x3),
			('SAMD20J14A',	0x4),
			('SAMD20G18A',	0x5),
			('SAMD20G17A',	0x6),
			('SAMD20G16A',	0x7),
			('SAMD20G15A',	0x8),
			('SAMD20G14A',	0x9),
			('SAMD20E18A',	0xa),
			('SAMD20E17A',	0xb),
			('SAMD20E16A',	0xc),
			('SAMD20E15A',	0xd),
			('SAMD20E14A',	0xe),
		]),
		('revision',	4),
		('die',		4),
		('series',	6),
		('',		1),
		('family',	5),
		('processor',	4),
	]),
	[ 2, 4,
		(0x1000, 'ENTRY', [
			('epres',	1),
			('fmt',		1),
			('',		10),
			('addoff',	20),
		]),
	],
	(0x1008, 'END'),
	(0x1fcc, 'MEMTYPE', [
		('smemp',	1),
		('',		31),
	]),
	(0x1fd0, 'PID4', [
		('jepcc',	4),
		('fkbc',	4),
		('',		24),
	]),
	(0x1fe0, 'PID0', [
		('partnbl',	8),
		('',		24),
	]),
	(0x1fe4, 'PID1', [
		('partnbh',	4),
		('jepidcl',	4),
		('',		24),
	]),
	(0x1fe8, 'PID2', [
		('jepidch',	3),
		('jepu',	1),
		('revision',	4),
		('',		24),
	]),
	(0x1fec, 'PID3', [
		('cusmod',	4),
		('revand',	4),
		('',		24),
	]),
	(0x1ff0, 'CID0', [
		('preambleb0',	8),
		('',		24),
	]),
	(0x1ff4, 'CID1', [
		('preamble',	4),
		('cclass',	4),
		('',		24),
	]),
	(0x1ff8, 'CID2', [
		('preambleb2',	8),
		('',		24),
	]),
	(0x1ffc, 'CID3', [
		('preambleb3',	8),
		('',		24),
	]),
]

