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
name = 'SPI'

#------------------------------------------------------------------------------
spi_irqs = [
	('rdrf',	1),
	('tdre',	1),
	('modf',	1),
	('ovres',	1),
	('',		4),
	('nssr',	1),
	('txempty',	1),
	('undes',	1),
	('',		21),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CR', [
		('spien',	1),
		('spidis',	1),
		('',		5),
		('swrst',	1),
		('',		16),
		('lastxfer',	1),
		('',		7),
	]),
	(0x04, 'MR', [
		('mstr',	1),
		('ps',		1),
		('pcsdec',	1),
		('',		1),
		('modfdis',	1),
		('wdrbt',	1),
		('',		1),
		('llb',		1),
		('',		8),
		('pcs',		4),
		('',		4),
		('dlybcs',	8),
	]),
	(0x08, 'RDR', [
		('rd',		16),
		('pcs',		4),
		('',		12),
	]),
	(0x0c, 'TDR', [
		('td',		16),
		('pcs',		4),
		('',		4),
		('lastxfer',	1),
		('',		7),
	]),
	(0x10, 'SR', [
		('rdrf',	1),
		('tdre',	1),
		('modf',	1),
		('ovres',	1),
		('',		4),
		('nssr',	1),
		('txempty',	1),
		('undes',	1),
		('',		5),
		('spiens',	1),
		('',		15),
	]),
	(0x14, 'IER', spi_irqs),
	(0x18, 'IDR', spi_irqs),
	(0x1c, 'IMR', spi_irqs),
	[ 4, 4,
		(0x30, 'CSR', [
			('cpol',	1),
			('ncpha',	1),
			('csnaat',	1),
			('csaat',	1),
			('bits',	4, [
				('8_BIT',	0),
				('9_BIT',	1),
				('10_BIT',	2),
				('11_BIT',	3),
				('12_BIT',	4),
				('13_BIT',	5),
				('14_BIT',	6),
				('15_BIT',	7),
				('16_BIT',	8),
			]),
			('scbr',	8),
			('dlybs',	8),
			('dlybct',	8),
		]),
	],
	(0xe4, 'WPMR', common.wpmr(0x535049)),
	(0xe8, 'WPSR', common.wpsr),
]

