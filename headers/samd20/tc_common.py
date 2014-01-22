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
tc_ints = [
	('ovf',		1),
	('err',		1),
	('',		1),
	('syncrdy',	1),
	('mc',		2),
	('',		2),
]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRLA', [
		('swrst',	1),
		('enable',	1),
		('mode',	2, [
			('COUNT16',	0),
			('COUNT8',	1),
			('COUNT32',	2),
		]),
		('',		1),
		('wavegen',	2, [
			('NFRQ',	0),
			('MFRQ',	1),
			('NPWM',	2),
			('MPWM',	3),
		]),
		('',		1),
		('prescaler',	3, [
			('1',		0),
			('2',		1),
			('4',		2),
			('8',		3),
			('16',		4),
			('64',		5),
			('256',		6),
			('1024 ',	7),
		]),
		('runstdby',	1),
		('prescsync',	2, [
			('GCLK',	0),
			('PRESC',	1),
			('RESYNC',	2),
		]),
		('',		2),
	]),
	(0x02, 'READREQ', [
		('addr',	5),
		('',		9),
		('rcont',	1),
		('rreq',	1),
	]),
	(0x04, 'CTRLBCLR', [
		('dir',		1),
		('',		1),
		('oneshot',	1),
		('',		3),
		('cmd',		2, [
			('NONE',	0),
			('RETRIGGER',	1),
			('STOP',	2),
		]),
	]),
	(0x05, 'CTRLBSET', [
		('dir',		1),
		('',		1),
		('oneshot',	1),
		('',		3),
		('cmd',		2, [
			('NONE',	0),
			('RETRIGGER',	1),
			('STOP',	2),
		]),
	]),
	(0x06, 'CTRLC', [
		('inven0',	1),
		('inven1',	1),
		('',		2),
		('cpten0',	1),
		('cpten1',	1),
		('',		2),
	]),
	(0x08, 'DBGCTRL', [
		('dbgrun',	1),
		('',		7),
	]),
	(0x0a, 'EVCTRL', [
		('evact',	3, [
			('OFF',		0),
			('RETRIGGER',	1),
			('COUNT',	2),
			('START',	3),
			('PPW',		5),
			('PWP',		6),
		]),
		('',		1),
		('tcinv',	1),
		('tcei',	1),
		('',		2),
		('ovfeo',	1),
		('',		3),
		('mceo0',	1),
		('mceo1',	1),
		('',		2),
	]),
	(0x0c, 'INTENCLR', tc_ints),
	(0x0d, 'INTENSET', tc_ints),
	(0x0e, 'INTFLAG', tc_ints),
	(0x0f, 'STATUS', [
		('',		3),
		('stop',	1),
		('slave',	1),
		('',		2),
		('syncbusy',	1),
	]),
]

