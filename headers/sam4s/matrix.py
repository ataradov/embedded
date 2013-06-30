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
matrix_mcfg = [
  ('ulbt',        3),
  ('',           29),
]

matrix_scfg = [
  ('slot_cycle',   8),
  ('',             8),
  ('defmstr_type', 2),
  ('fixed_defmstr', 3),
  ('',             3),
  ('arbt',         2),
  ('',             6),
]

matrix_pras = [
  ('m0pr',        2),
  ('',            2),
  ('m1pr',        2),
  ('',            2),
  ('m2pr',        2),
  ('',            2),
  ('m3pr',        2),
  ('',            2),
  ('m4pr',        2),
  ('',           14),
]

regs = [
  (0x0000, 'MCFG0', matrix_mcfg),
  (0x0004, 'MCFG1', matrix_mcfg),
  (0x0008, 'MCFG2', matrix_mcfg),
  (0x000c, 'MCFG3', matrix_mcfg),
  (0x0040, 'SCFG0', matrix_scfg),
  (0x0044, 'SCFG1', matrix_scfg),
  (0x0048, 'SCFG2', matrix_scfg),
  (0x004c, 'SCFG3', matrix_scfg),
  (0x0050, 'SCFG4', matrix_scfg),
  (0x0080, 'PRAS0', matrix_pras),
  (0x0088, 'PRAS1', matrix_pras),
  (0x0090, 'PRAS2', matrix_pras),
  (0x0098, 'PRAS3', matrix_pras),
  (0x00a0, 'PRAS4', matrix_pras),
  (0x0114, 'CCFG_SYSIO', [
    ('',            4),
    ('sysio4',      1),
    ('sysio5',      1),
    ('sysio6',      1),
    ('sysio7',      1),
    ('',            2),
    ('sysio10',     1),
    ('sysio11',     1),
    ('sysio12',     1),
    ('',           19),
  ]),
  (0x011c, 'CCFG_SMCNFCS', [
    ('smc_nfcs0',   1),
    ('smc_nfcs1',   1),
    ('smc_nfcs2',   1),
    ('smc_nfcs3',   1),
    ('',           28),
  ]),
  (0x01e4, 'WPMR', common.wpmr),
  (0x01e8, 'WPSR', common.wpsr),
]

