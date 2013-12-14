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
name = 'UART'

#------------------------------------------------------------------------------
uart_irqs = [
	('rxrdy',	1),
	('txrdy',	1),
	('',		1),
	('endrx',	1),
	('endtx',	1),
	('ovre',	1),
	('frame',	1),
	('pare',	1),
	('',		1),
	('txempty',	1),
	('',		1),
	('txbufe',	1),
	('rxbuff',	1),
	('',		19),
]

#------------------------------------------------------------------------------
registers = [
	(0x0000, 'CR', [
		('',		2),
		('rstrx',	1),
		('rsttx',	1),
		('rxen',	1),
		('rxdis',	1),
		('txen',	1),
		('txdis',	1),
		('rststa',	1),
		('',		23),
	]),
	(0x0004, 'MR', [
		('',		9),
		('par',		3, [
			('EVEN',	0),
			('ODD',		1),
			('SPACE',	2),
			('MARK',	3),
			('NO',		4),
		]),
		('',		2),
		('chmode',	2, [
			('NORMAL',	0),
			('AUTOMATIC',	1),
			('LOCAL_LOOPBACK', 2),
			('REMOTE_LOOPBACK', 3),
		]),
		('',		16),
	]),
	(0x0008, 'IER', uart_irqs),
	(0x000c, 'IDR', uart_irqs),
	(0x0010, 'IMR', uart_irqs),
	(0x0014, 'SR', uart_irqs),
	(0x0018, 'RHR', [
		('rxchr',	8),
		('',		24),
	]),
	(0x001c, 'THR', [
		('txchr',	8),
		('',		24),
	]),
	(0x0020, 'BRGR', [
		('cd',		16),
		('',		16),
	]),
]

