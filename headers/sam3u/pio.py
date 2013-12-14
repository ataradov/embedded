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
name = 'PIO'

#------------------------------------------------------------------------------
pio_bits = [('p%d' % i, 1) for i in range(32)]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'PER', pio_bits),
	(0x04, 'PDR', pio_bits),
	(0x08, 'PSR', pio_bits),
	(0x10, 'OER', pio_bits),
	(0x14, 'ODR', pio_bits),
	(0x18, 'OSR', pio_bits),
	(0x20, 'IFER', pio_bits),
	(0x24, 'IFDR', pio_bits),
	(0x28, 'IFSR', pio_bits),
	(0x30, 'SODR', pio_bits),
	(0x34, 'CODR', pio_bits),
	(0x38, 'ODSR', pio_bits),
	(0x3c, 'PDSR', pio_bits),
	(0x40, 'IER', pio_bits),
	(0x44, 'IDR', pio_bits),
	(0x48, 'IMR', pio_bits),
	(0x4c, 'ISR', pio_bits),
	(0x50, 'MDER', pio_bits),
	(0x54, 'MDDR', pio_bits),
	(0x58, 'MDSR', pio_bits),
	(0x60, 'PUDR', pio_bits),
	(0x64, 'PUER', pio_bits),
	(0x68, 'PUSR', pio_bits),
	(0x70, 'ABSR', pio_bits),
	(0x80, 'SCIFSR', pio_bits),
	(0x84, 'DIFSR', pio_bits),
	(0x88, 'IFDGSR', pio_bits),
	(0x8c, 'SCDR', [
		('div',		14),
		('',		18),
	]),
	(0xa0, 'OWER', pio_bits),
	(0xa4, 'OWDR', pio_bits),
	(0xa8, 'OWSR', pio_bits),
	(0xb0, 'AIMER', pio_bits),
	(0xb4, 'AIMDR', pio_bits),
	(0xb8, 'AIMMR', pio_bits),
	(0xc0, 'ESR', pio_bits),
	(0xc4, 'LSR', pio_bits),
	(0xc8, 'ELSR', pio_bits),
	(0xd0, 'FELLSR', pio_bits),
	(0xd4, 'REHLSR', pio_bits),
	(0xd8, 'FRLHSR', pio_bits),
	(0xe0, 'LOCKSR', pio_bits),
	(0xe4, 'WPMR', common.wpmr(0x50494f)),
	(0xe8, 'WPSR', common.wpsr),
]

