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
name = 'TWI'

#------------------------------------------------------------------------------
twi_irqs = [
	('txcomp',	1),
	('rxrdy',	1),
	('txrdy',	1),
	('',		1),
	('svacc',	1),
	('gacc',	1),
	('ovre',	1),
	('',		1),
	('nack',	1),
	('arblst',	1),
	('scl_ws',	1),
	('eosacc',	1),
	('endrx',	1),
	('endtx',	1),
	('rxbuff',	1),
	('txbufe',	1),
	('',		16),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CR', [
		('start',	1),
		('stop',	1),
		('msen',	1),
		('msdis',	1),
		('sven',	1),
		('svdis',	1),
		('quick',	1),
		('swrst',	1),
		('',		24),
	]),
	(0x04, 'MMR', [
		('',		8),
		('iadrsz',	2, [
			('NONE',	0),
			('1_BYTE',	1),
			('2_BYTE',	2),
			('3_BYTE',	3),
		]),
		('',		2),
		('mread',	1),
		('',		3),
		('dadr',	7),
		('',		9),
	]),
	(0x08, 'SMR', [
		('',		16),
		('sadr',	7),
		('',		9),
	]),
	(0x0c, 'IADR', [
		('iadr',	24),
		('',		8),
	]),
	(0x10, 'CWGR', [
		('cldiv',	8),
		('chdiv',	8),
		('ckdiv',	3),
		('',		13),
	]),
	(0x20, 'SR', [
		('txcomp',	1),
		('rxrdy',	1),
		('txrdy',	1),
		('svread',	1),
		('svacc',	1),
		('gacc',	1),
		('ovre',	1),
		('',		1),
		('nack',	1),
		('arblst',	1),
		('sclws',	1),
		('eosacc',	1),
		('endrx',	1),
		('endtx',	1),
		('rxbuff',	1),
		('txbufe',	1),
		('',		16),
	]),
	(0x24, 'IER', twi_irqs),
	(0x28, 'IDR', twi_irqs),
	(0x2c, 'IMR', twi_irqs),
	(0x30, 'RHR', [
		('rxdata',	8),
		('',		24),
	]),
	(0x34, 'THR', [
		('txdata',	8),
		('',		24),
	]),
]

