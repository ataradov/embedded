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
pio_bits = [('p%d' % i, 1) for i in range(32)]

regs = [
  (0x0000, 'PER', pio_bits),
  (0x0004, 'PDR', pio_bits),
  (0x0008, 'PSR', pio_bits),
  (0x0010, 'OER', pio_bits),
  (0x0014, 'ODR', pio_bits),
  (0x0018, 'OSR', pio_bits),
  (0x0020, 'IFER', pio_bits),
  (0x0024, 'IFDR', pio_bits),
  (0x0028, 'IFSR', pio_bits),
  (0x0030, 'SODR', pio_bits),
  (0x0034, 'CODR', pio_bits),
  (0x0038, 'ODSR', pio_bits),
  (0x003c, 'PDSR', pio_bits),
  (0x0040, 'IER', pio_bits),
  (0x0044, 'IDR', pio_bits),
  (0x0048, 'IMR', pio_bits),
  (0x004c, 'ISR', pio_bits),
  (0x0050, 'MDER', pio_bits),
  (0x0054, 'MDDR', pio_bits),
  (0x0058, 'MDSR', pio_bits),
  (0x0060, 'PUDR', pio_bits),
  (0x0064, 'PUER', pio_bits),
  (0x0068, 'PUSR', pio_bits),
  (0x0070, 'ABCDSR1', pio_bits),
  (0x0074, 'ABCDSR2', pio_bits),
  (0x0080, 'IFSCDR', pio_bits),
  (0x0084, 'IFSCER', pio_bits),
  (0x0088, 'IFSCSR', pio_bits),
  (0x008c, 'SCDR',[
    ('div',        14),
    ('',           18),
  ]),
  (0x0090, 'PPDDR', pio_bits),
  (0x0094, 'PPDER', pio_bits),
  (0x0098, 'PPDSR', pio_bits),
  (0x00A0, 'OWER', pio_bits),
  (0x00A4, 'OWDR', pio_bits),
  (0x00A8, 'OWSR', pio_bits),
  (0x00B0, 'AIMER', pio_bits),
  (0x00B4, 'AIMDR', pio_bits),
  (0x00B8, 'AIMMR', pio_bits),
  (0x00c0, 'ESR', pio_bits),
  (0x00c4, 'LSR', pio_bits),
  (0x00c8, 'ELSR', pio_bits),
  (0x00D0, 'FELLSR', pio_bits),
  (0x00D4, 'REHLSR', pio_bits),
  (0x00D8, 'FRLHSR', pio_bits),
  (0x00E0, 'LOCKSR', pio_bits),
  (0x00E4, 'WPMR', common.wpmr),
  (0x00E8, 'WPSR', common.wpsr),
  (0x0100, 'SCHMITT', pio_bits),
  (0x0150, 'PCMR', [
    ('pcen',        1),
    ('',            3),
    ('dsize',       2),
    ('',            3),
    ('alwys',       1),
    ('halfs',       1),
    ('frsts',       1),
    ('',           20),
  ]),
  (0x0154, 'PCIER', [
    ('drdy',        1),
    ('ovre',        1),
    ('endrx',       1),
    ('rxbuff',      1),
    ('',           28),
  ]),
  (0x0158, 'PCIDR', [
    ('drdy',        1),
    ('ovre',        1),
    ('endrx',       1),
    ('rxbuff',      1),
    ('',           28),
  ]),
  (0x015c, 'PCIMR', [
    ('drdy',        1),
    ('ovre',        1),
    ('endrx',       1),
    ('rxbuff',      1),
    ('',           28),
  ]),
  (0x0160, 'PCISR', [
    ('drdy',        1),
    ('ovre',        1),
    ('endrx',       1),
    ('rxbuff',      1),
    ('',           28),
  ]),
  (0x0164, 'PCRHR'),
]

