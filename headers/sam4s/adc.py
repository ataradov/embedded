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
adc_channels = [('ch%d' % i, 1) for i in range(16)] + [('', 16)]

adc_ints = [('eoc%d' % i, 1) for i in range(16)] + [
  ('',            7),
  ('eocal',       1),
  ('drdy',        1),
  ('govre',       1),
  ('compe',       1),
  ('endrx',       1),
  ('rxbuff',      1),
  ('',            3),
]

adc_cdr = [
  ('data',       12),
  ('',           20),
]

regs = [
  (0x00, 'CR', [
    ('swrst',       1),
    ('start',       1),
    ('',            1),
    ('autocal',     1),
    ('',           28),
  ]),
  (0x04, 'MR', [
    ('trgen',       1),
    ('trgsel',      3),
    ('lowres',      1),
    ('sleep',       1),
    ('fwup',        1),
    ('freerun',     1),
    ('prescal',     8),
    ('startup',     4),
    ('settling',    2),
    ('',            1),
    ('anach',       1),
    ('tracktim',    4),
    ('transfer',    2),
    ('',            1),
    ('useq',        1),
  ]),
  (0x08, 'SEQR1', [
    ('usch1',       3),
    ('',            1),
    ('usch2',       3),
    ('',            1),
    ('usch3',       3),
    ('',            1),
    ('usch4',       3),
    ('',            1),
    ('usch5',       3),
    ('',            1),
    ('usch6',       3),
    ('',            1),
    ('usch7',       3),
    ('',            1),
    ('usch8',       3),
    ('',            1),
  ]),
  (0x0c, 'SEQR2', [
    ('usch9',       3),
    ('',            1),
    ('usch10',      3),
    ('',            1),
    ('usch11',      3),
    ('',            1),
    ('usch12',      3),
    ('',            1),
    ('usch13',      3),
    ('',            1),
    ('usch14',      3),
    ('',            1),
    ('usch15',      3),
    ('',            1),
    ('usch16',      3),
    ('',            1),
  ]),
  (0x10, 'CHER', adc_channels),
  (0x14, 'CHDR', adc_channels),
  (0x18, 'CHSR', adc_channels),
  (0x20, 'LCDR', [
    ('ldata',      12),
    ('chnb',        4),
    ('',           16),
  ]),
  (0x24, 'IER', adc_ints),
  (0x28, 'IDR', adc_ints),
  (0x2c, 'IMR', adc_ints),
  (0x30, 'ISR', adc_ints),
  (0x3c, 'OVER',
    [('ovre%d' % i, 1) for i in range(16)] +
    [('', 16)]
  ),
  (0x40, 'EMR', [
    ('cmpmode',     2),
    ('',            2),
    ('cmpsel',      4),
    ('',            1),
    ('cmpall',      1),
    ('',           14),
    ('tag',         1),
    ('',            7),
  ]),
  (0x44, 'CWR', [
    ('lowthres',   12),
    ('',            4),
    ('highthres',  12),
    ('',            4),
  ]),
  (0x48, 'CGR', [('gain%d' % i, 2) for i in range(16)]),
  (0x4c, 'COR',
     [('off%d' % i, 1) for i in range(16)] + 
     [('diff%d' % i, 1) for i in range(16)]
  ),
  (0x50, 'CDR0', adc_cdr),
  (0x54, 'CDR1', adc_cdr),
  (0x58, 'CDR2', adc_cdr),
  (0x5c, 'CDR3', adc_cdr),
  (0x60, 'CDR4', adc_cdr),
  (0x64, 'CDR5', adc_cdr),
  (0x68, 'CDR6', adc_cdr),
  (0x6c, 'CDR7', adc_cdr),
  (0x70, 'CDR8', adc_cdr),
  (0x74, 'CDR9', adc_cdr),
  (0x78, 'CDR10', adc_cdr),
  (0x7c, 'CDR11', adc_cdr),
  (0x80, 'CDR12', adc_cdr),
  (0x84, 'CDR13', adc_cdr),
  (0x88, 'CDR14', adc_cdr),
  (0x8c, 'CDR15', adc_cdr),
  (0x94, 'ACR', [
    ('',            4),
    ('tson',        1),
    ('',            3),
    ('ibctl',       2),
    ('',           22),
  ]),
  (0xe4, 'WPMR', common.wpmr),
  (0xe8, 'WPSR', common.wpsr),
]

