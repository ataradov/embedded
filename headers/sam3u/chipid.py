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
name = 'EEFC'

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CIDR', [
		('version',	5),
		('eproc',	3, [
			('ARM946ES',	1),
			('ARM7TDMI',	2),
			('CM3',		3),
			('ARM920T',	4),
			('ARM926EJS',	5),
			('CA5',		6),
			('CM4',		7),
		]),
		('nvpsiz',	4, [
			('NONE',	0),
			('8K',		1),
			('16K',		2),
			('32K',		3),
			('64K',		5),
			('128K',	7),
			('256K',	9),
			('512K',	10),
			('1024K',	12),
			('2048K',	14),
		]),
		('nvpsiz2',	4, [
			('NONE',	0),
			('8K',		1),
			('16K',		2),
			('32K',		3),
			('64K',		5),
			('128K',	7),
			('256K',	9),
			('512K',	10),
			('1024K',	12),
			('2048K',	14),
		]),
		('sramsiz',	4, [
			('48K',		0),
			('1K',		1),
			('2K',		2),
			('6K',		3),
			('24K',		4),
			('4K',		5),
			('80K',		6),
			('160K',	7),
			('8K',		8),
			('16K',		9),
			('32K',		10),
			('64K',		11),
			('128K',	12),
			('256K',	13),
			('96K',		14),
			('512K',	15),
		]),
		('arch',	8, [
			('AT91SAM9xx',	0x19),
			('AT91SAM9XExx', 0x29),
			('AT91x34',	0x34),
			('CAP7',	0x37),
			('CAP9',	0x39),
			('CAP11',	0x3b),
			('AT91x40',	0x40),
			('AT91x42',	0x42),
			('AT91x55',	0x55),
			('AT91SAM7Axx',	0x60),
			('AT91SAM7AQxx', 0x61),
			('AT91x63',	0x63),
			('AT91SAM7Sxx',	0x70),
			('AT91SAM7XCxx', 0x71),
			('AT91SAM7SExx', 0x72),
			('AT91SAM7Lxx',	0x73),
			('AT91SAM7Xxx',	0x75),
			('AT91SAM7SLxx', 0x76),
			('SAM3UxC',	0x80),
			('SAM3UxE',	0x81),
			('SAM3AxC',	0x83),
			('SAM4AxC',	0x83),
			('SAM3XxC',	0x84),
			('SAM4XxC',	0x84),
			('SAM3XxE',	0x85),
			('SAM4XxE',	0x85),
			('SAM3XxG',	0x86),
			('SAM4XxG',	0x86),
			('SAM3SxA',	0x88),
			('SAM4SxA',	0x88),
			('SAM3SxB',	0x89),
			('SAM4SxB',	0x89),
			('SAM3SxC',	0x8a),
			('SAM4SxC',	0x8a),
			('AT91x92',	0x92),
			('SAM3NxA',	0x93),
			('SAM3NxB',	0x94),
			('SAM3NxC',	0x95),
			('SAM3SDxB',	0x99),
			('SAM3SDxC',	0x9a),
			('SAM5A',	0xa5),
			('AT75Cxx',	0xf0),
		]),
		('nvptyp',	3, [
			('ROM',		0),
			('ROMLESS',	1),
			('FLASH',	2),
			('ROM_FLASH',	3),
			('SRAM',	4),
		]),
		('ext',		1),
	]),
	(0x04, 'EXID'),
]

