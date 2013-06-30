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
tc_ccr = [
  ('clken',       1),
  ('clkdis',      1),
  ('swtrg',       1),
  ('',           29),
]

tc_cmr = [
  ('tcclks',      3),
  ('clki',        1),
  ('burst',       2),
  ('cpcstop',     1),
  ('cpcdis',      1),
  ('eevtedg',     2),
  ('eevt',        2),
  ('enetrg',      1),
  ('wavsel',      2),
  ('wave',        1),
  ('acpa',        2),
  ('acpc',        2),
  ('aeevt',       2),
  ('aswtrg',      2),
  ('bcpb',        2),
  ('bcpc',        2),
  ('beevt',       2),
  ('bswtrg',      2),
]

tc_cmr_wave = [
  ('tcclks',      3),
  ('clki',        1),
  ('burst',       2),
  ('ldbstop',     1),
  ('ldbdis',      1),
  ('etrgedg',     2),
  ('abetrg',      1),
  ('',            3),
  ('cpctrg',      1),
  ('wave',        1),
  ('ldra',        2),
  ('ldrb',        2),
  ('',           12),
]

tc_smmr = [
  ('gcen',        1),
  ('down',        1),
  ('',           30),
]

tc_sr = [
  ('covfs',       1),
  ('lovrs',       1),
  ('cpas',        1),
  ('cpbs',        1),
  ('cpcs',        1),
  ('ldras',       1),
  ('ldrbs',       1),
  ('etrgs',       1),
  ('',            8),
  ('clksta',      1),
  ('mtioa',       1),
  ('mtiob',       1),
  ('',           13),
]

tc_cirqs = [
  ('covfs',       1),
  ('lovrs',       1),
  ('cpas',        1),
  ('cpbs',        1),
  ('cpcs',        1),
  ('ldras',       1),
  ('ldrbs',       1),
  ('etrgs',       1),
  ('',           24),
]

tc_irqs = [
  ('idx',         1),
  ('dirchg',      1),
  ('qerr',        1),
  ('',           29),
]

regs = [
  (0x00, 'CCR0', tc_ccr),
  (0x04, 'CMR0', tc_cmr),
  (0x04, 'CMR0W', tc_cmr_wave),
  (0x08, 'SMMR0', tc_smmr),
  (0x10, 'CV0'),
  (0x14, 'RA0'),
  (0x18, 'RB0'),
  (0x1c, 'RC0'),
  (0x20, 'SR0', tc_sr),
  (0x24, 'IER0', tc_cirqs),
  (0x28, 'IDR0', tc_cirqs),
  (0x2c, 'IMR0', tc_cirqs),

  (0x40, 'CCR1', tc_ccr),
  (0x44, 'CMR1', tc_cmr),
  (0x44, 'CMR1W', tc_cmr_wave),
  (0x48, 'SMMR1', tc_smmr),
  (0x50, 'CV1'),
  (0x54, 'RA1'),
  (0x58, 'RB1'),
  (0x5c, 'RC1'),
  (0x60, 'SR1', tc_sr),
  (0x64, 'IER1', tc_cirqs),
  (0x68, 'IDR1', tc_cirqs),
  (0x6c, 'IMR1', tc_cirqs),

  (0x80, 'CCR2', tc_ccr),
  (0x84, 'CMR2', tc_cmr),
  (0x84, 'CMR2W', tc_cmr_wave),
  (0x88, 'SMMR2', tc_smmr),
  (0x90, 'CV2'),
  (0x94, 'RA2'),
  (0x98, 'RB2'),
  (0x9c, 'RC2'),
  (0xa0, 'SR2', tc_sr),
  (0xa4, 'IER2', tc_cirqs),
  (0xa8, 'IDR2', tc_cirqs),
  (0xac, 'IMR2', tc_cirqs),

  (0xc0, 'BCR', [
    ('sync',        1),
    ('',           31),
  ]),
  (0xc4, 'BMR', [
    ('tc0xc0s',     2),
    ('tc1xc1s',     2),
    ('tc2xc2s',     2),
    ('',            2),
    ('qden',        1),
    ('posen',       1),
    ('speeden',     1),
    ('qdtrans',     1),
    ('edgpha',      1),
    ('inva',        1),
    ('invb',        1),
    ('invidx',      1),
    ('swap',        1),
    ('idxphb',      1),
    ('',            1),
    ('filter',      1),
    ('maxfilt',     6),
    ('',            6),
  ]),
  (0xc8, 'QIER', tc_irqs),
  (0xcc, 'QIDR', tc_irqs),
  (0xd0, 'QIMR', tc_irqs),
  (0xd4, 'QISR', [
    ('idx',         1),
    ('dirchg',      1),
    ('qerr',        1),
    ('',            5),
    ('dir',         1),
    ('',           23),
  ]),
  (0xd8, 'FMR', [
    ('encf0',       1),
    ('encf1',       1),
    ('',           30),
  ]),
  (0xe4, 'WPMR', common.wpmr),
]

