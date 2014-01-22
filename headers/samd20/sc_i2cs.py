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
name = 'SC_I2CS'

#------------------------------------------------------------------------------
sc_i2cs_ints = [
	('prec',	1),
	('amatch',	1),
	('drdy',	1),
	('',		5),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRLA', [
		('swrst',	1),
		('enable',	1),
		('mode',	3, [
			('I2C_SLAVE',	4),
		]),
		('',		2),
		('runstdby',	1),
		('',		8),
		('pinout',	1),
		('',		3),
		('sdahold',	2, [
			('DIS',		0),
			('75_NS',	1),
			('450_NS',	2),
			('600_NS',	3),
		]),
		('',		8),
		('lowtout',	1),
		('',		1),
	]),
	(0x04, 'CTRLB', [
		('',		8),
		('smen',	1),
		('',		5),
		('amode',	2, [
			('MASK',	0),
			('2_ADDRS',	1),
			('RANGE',	2),
		]),
		('cmd',		2),
		('ackact',	1),
		('',		13),
	]),
	(0x0c, 'INTENCLR', sc_i2cs_ints),
	(0x0d, 'INTENSET', sc_i2cs_ints),
	(0x0e, 'INTFLAG', sc_i2cs_ints),
	(0x10, 'STATUS', [
		('buserr',	1),
		('coll',	1),
		('rxnack',	1),
		('dir',		1),
		('sr',		1),
		('',		1),
		('lowtout',	1),
		('clkhold',	1),
		('',		7),
		('syncbusy',	1),
	]),
	(0x14, 'ADDR', [
		('gencen',	1),
		('addr',	7),
		('',		9),
		('addrmask',	7),
		('',		8),
	]),
	(0x18, 'DATA', 8),
]

