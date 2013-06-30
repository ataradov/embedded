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
pwm_chids = \
  [('chid%d' % i, 1) for i in range(4)] + \
  [('', 28)]

pwm_ints1 = \
  [('chid%d' % i, 1) for i in range(4)] + \
  [('', 12)] + \
  [('fchid%d' % i, 1) for i in range(4)] + \
  [('', 12)]

pwm_ints2 = [
    ('wrdy',        1),
    ('endtx',       1),
    ('txbufe',      1),
    ('unre',        1),
    ('',            4),
  ] + \
  [('cmpm%d' % i, 1) for i in range(8)] + \
  [('cmpu%d' % i, 1) for i in range(8)] + \
  [('', 8)]

pwm_elmr = \
  [('csel%d' % i, 1) for i in range(8)] + \
  [('', 24)]

pwm_cmpv = [
  ('cv',         24),
  ('cvm',         1),
  ('',            7),
]

pwm_cmpvupd = [
  ('cvupd',      24),
  ('cvmupd',      1),
  ('',            7),
]

pwm_cmpm = [
  ('cen',         1),
  ('',            3),
  ('ctr',         4),
  ('cpr',         4),
  ('cprcnt',      4),
  ('cupr',        4),
  ('cuprcnt',     4),
  ('',            8),
]

pwm_cmpmupd = [
  ('cenupd',      1),
  ('',            3),
  ('ctrupd',      4),
  ('cprupd',      4),
  ('',            4),
  ('cuprupd',     4),
  ('',           12),
]

pwm_cmr = [
  ('cpre',        4),
  ('',            4),
  ('calg',        1),
  ('cpol',        1),
  ('ces',         1),
  ('',            5),
  ('dte',         1),
  ('dthi',        1),
  ('dtli',        1),
  ('',           13),
]

pwm_cdty = [
  ('cdty',       24),
  ('',            8),
]

pwm_cdtyupd = [
  ('cdtyupd',    24),
  ('',            8),
]

pwm_cprd = [
  ('cprd',       24),
  ('',            8),
]

pwm_cprdupd = [
  ('cprdupd',    24),
  ('',            8),
]

pwm_ccnt = [
  ('cnt',        24),
  ('',            8),
]

pwm_dt = [
  ('dth',        16),
  ('dtl',        16),
]

pwm_dtupd = [
  ('dthupd',     16),
  ('dtlupd',     16),
]

regs = [
  (0x0000, 'CLK', [
    ('diva',        8),
    ('prea',        4),
    ('',            4),
    ('divb',        8),
    ('preb',        4),
    ('',            4),
  ]),
  (0x0004, 'ENA', pwm_chids),
  (0x0008, 'DIS', pwm_chids),
  (0x000c, 'SR', pwm_chids),
  (0x0010, 'IER1', pwm_ints1),
  (0x0014, 'IDR1', pwm_ints1),
  (0x0018, 'IMR1', pwm_ints1),
  (0x001c, 'ISR1', pwm_ints1),
  (0x0020, 'SCM', [
    ('sync0',       1),
    ('sync1',       1),
    ('sync2',       1),
    ('sync3',       1),
    ('',           12),
    ('updm',        2),
    ('',            2),
    ('ptrm',        1),
    ('ptrcs',       3),
    ('',            8),
  ]),
  (0x0028, 'SCUC', common.one_bit('updulock')),
  (0x002c, 'SCUP', [
    ('upr',         4),
    ('uprcnt',      4),
    ('',           24),
  ]),
  (0x0030, 'SCUPUPD', [
    ('uprupd',      4),
    ('',           28),
  ]),
  (0x0034, 'IER2', pwm_ints2),
  (0x0038, 'IDR2', pwm_ints2),
  (0x003c, 'IMR2', pwm_ints2),
  (0x0040, 'ISR2', pwm_ints2),
  (0x0044, 'OOV', [
    ('oovh0',       1),
    ('oovh1',       1),
    ('oovh2',       1),
    ('oovh3',       1),
    ('',           12),
    ('oovl0',       1),
    ('oovl1',       1),
    ('oovl2',       1),
    ('oovl3',       1),
    ('',           12),
  ]),
  (0x0048, 'OS', [
    ('osh0',        1),
    ('osh1',        1),
    ('osh2',        1),
    ('osh3',        1),
    ('',           12),
    ('osl0',        1),
    ('osl1',        1),
    ('osl2',        1),
    ('osl3',        1),
    ('',           12),
  ]),
  (0x004c, 'OSS', [
    ('ossh0',       1),
    ('ossh1',       1),
    ('ossh2',       1),
    ('ossh3',       1),
    ('',           12),
    ('ossl0',       1),
    ('ossl1',       1),
    ('ossl2',       1),
    ('ossl3',       1),
    ('',           12),
  ]),
  (0x0050, 'OSC', [
    ('osch0',       1),
    ('osch1',       1),
    ('osch2',       1),
    ('osch3',       1),
    ('',           12),
    ('oscl0',       1),
    ('oscl1',       1),
    ('oscl2',       1),
    ('oscl3',       1),
    ('',           12),
  ]),
  (0x0054, 'OSSUPD', [
    ('ossuph0',     1),
    ('ossuph1',     1),
    ('ossuph2',     1),
    ('ossuph3',     1),
    ('',           12),
    ('ossupl0',     1),
    ('ossupl1',     1),
    ('ossupl2',     1),
    ('ossupl3',     1),
    ('',           12),
  ]),
  (0x0058, 'OSCUPD', [
    ('oscuph0',     1),
    ('oscuph1',     1),
    ('oscuph2',     1),
    ('oscuph3',     1),
    ('',           12),
    ('oscupl0',     1),
    ('oscupl1',     1),
    ('oscupl2',     1),
    ('oscupl3',     1),
    ('',           12),
  ]),
  (0x005c, 'FMR', [
    ('fpol',        8),
    ('fmod',        8),
    ('ffil',        8),
    ('',            8),
  ]),
  (0x0060, 'FSR', [
    ('fiv',         8),
    ('fs',          8),
    ('',           16),
  ]),
  (0x0064, 'FCR', [
    ('fclr',        8),
    ('',           24),
  ]),
  (0x0068, 'FPV', [
    ('fpvh0',       1),
    ('fpvh1',       1),
    ('fpvh2',       1),
    ('fpvh3',       1),
    ('',           12),
    ('fpvl0',       1),
    ('fpvl1',       1),
    ('fpvl2',       1),
    ('fpvl3',       1),
    ('',           12),
  ]),
  (0x006c, 'FPE', [
    ('fpe0',        8),
    ('fpe1',        8),
    ('fpe2',        8),
    ('fpe3',        8),
  ]),
  (0x007c, 'ELMR0', pwm_elmr),
  (0x0080, 'ELMR1', pwm_elmr),
  (0x00b0, 'SMMR', [
    ('gcen0',       1),
    ('gcen1',       1),
    ('',           14),
    ('down0',       1),
    ('down1',       1),
    ('',           14),
  ]),
  (0x00e4, 'WPCR', [
    ('wpcmd',       2),
    ('wprg0',       1),
    ('wprg1',       1),
    ('wprg2',       1),
    ('wprg3',       1),
    ('wprg4',       1),
    ('wprg5',       1),
    ('wpkey',      24),
  ]),
  (0x00e8, 'WPSR', [
    ('wpsws0',      1),
    ('wpsws1',      1),
    ('wpsws2',      1),
    ('wpsws3',      1),
    ('wpsws4',      1),
    ('wpsws5',      1),
    ('',            1),
    ('wpvs',        1),
    ('wphws0',      1),
    ('wphws1',      1),
    ('wphws2',      1),
    ('wphws3',      1),
    ('wphws4',      1),
    ('wphws5',      1),
    ('',            2),
    ('wpvsrc',     16),
  ]),

  (0x0130, 'CMPV0', pwm_cmpv),
  (0x0134, 'CMPVUPD0', pwm_cmpvupd),
  (0x0138, 'CMPM0', pwm_cmpm),
  (0x013c, 'CMPMUPD0', pwm_cmpmupd),

  (0x0140, 'CMPV1', pwm_cmpv),
  (0x0144, 'CMPVUPD1', pwm_cmpvupd),
  (0x0148, 'CMPM1', pwm_cmpm),
  (0x014c, 'CMPMUPD1', pwm_cmpmupd),

  (0x0150, 'CMPV2', pwm_cmpv),
  (0x0154, 'CMPVUPD2', pwm_cmpvupd),
  (0x0158, 'CMPM2', pwm_cmpm),
  (0x015c, 'CMPMUPD2', pwm_cmpmupd),

  (0x0160, 'CMPV3', pwm_cmpv),
  (0x0164, 'CMPVUPD3', pwm_cmpvupd),
  (0x0168, 'CMPM3', pwm_cmpm),
  (0x016c, 'CMPMUPD3', pwm_cmpmupd),

  (0x0170, 'CMPV4', pwm_cmpv),
  (0x0174, 'CMPVUPD4', pwm_cmpvupd),
  (0x0178, 'CMPM4', pwm_cmpm),
  (0x017c, 'CMPMUPD4', pwm_cmpmupd),

  (0x0180, 'CMPV5', pwm_cmpv),
  (0x0184, 'CMPVUPD5', pwm_cmpvupd),
  (0x0188, 'CMPM5', pwm_cmpm),
  (0x018c, 'CMPMUPD5', pwm_cmpmupd),

  (0x0190, 'CMPV6', pwm_cmpv),
  (0x0194, 'CMPVUPD6', pwm_cmpvupd),
  (0x0198, 'CMPM6', pwm_cmpm),
  (0x019c, 'CMPMUPD6', pwm_cmpmupd),

  (0x01a0, 'CMPV7', pwm_cmpv),
  (0x01a4, 'CMPVUPD7', pwm_cmpvupd),
  (0x01a8, 'CMPM7', pwm_cmpm),
  (0x01ac, 'CMPMUPD7', pwm_cmpmupd),

  (0x0200, 'CMR0', pwm_cmr),
  (0x0204, 'CDTY0', pwm_cdty),
  (0x0208, 'CDTYUPD0', pwm_cdtyupd),
  (0x020c, 'CPRD0', pwm_cprd),
  (0x0210, 'CPRDUPD0', pwm_cprdupd),
  (0x0214, 'CCNT0', pwm_ccnt),
  (0x0218, 'DT0', pwm_dt),
  (0x021c, 'DTUPD0', pwm_dtupd),

  (0x0220, 'CMR1', pwm_cmr),
  (0x0224, 'CDTY1', pwm_cdty),
  (0x0228, 'CDTYUPD1', pwm_cdtyupd),
  (0x022c, 'CPRD1', pwm_cprd),
  (0x0230, 'CPRDUPD1', pwm_cprdupd),
  (0x0234, 'CCNT1', pwm_ccnt),
  (0x0238, 'DT1', pwm_dt),
  (0x023c, 'DTUPD1', pwm_dtupd),

  (0x0240, 'CMR2', pwm_cmr),
  (0x0244, 'CDTY2', pwm_cdty),
  (0x0248, 'CDTYUPD2', pwm_cdtyupd),
  (0x024c, 'CPRD2', pwm_cprd),
  (0x0250, 'CPRDUPD2', pwm_cprdupd),
  (0x0254, 'CCNT2', pwm_ccnt),
  (0x0258, 'DT2', pwm_dt),
  (0x025c, 'DTUPD2', pwm_dtupd),

  (0x0260, 'CMR3', pwm_cmr),
  (0x0264, 'CDTY3', pwm_cdty),
  (0x0268, 'CDTYUPD3', pwm_cdtyupd),
  (0x026c, 'CPRD3', pwm_cprd),
  (0x0270, 'CPRDUPD3', pwm_cprdupd),
  (0x0274, 'CCNT3', pwm_ccnt),
  (0x0278, 'DT3', pwm_dt),
  (0x027c, 'DTUPD3', pwm_dtupd),
]

