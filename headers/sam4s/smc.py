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
smc_setup = [
  ('nwe_setup',    6),
  ('',             2),
  ('ncs_wr_setup', 6),
  ('',             2),
  ('nrd_setup',    6),
  ('',             2),
  ('ncs_rd_setup', 6),
  ('',             2),
]

smc_pulse = [
  ('nwe_pulse',    7),
  ('',             1),
  ('ncs_wr_pulse', 7),
  ('',             1),
  ('nrd_pulse',    7),
  ('',             1),
  ('ncs_rd_pulse', 7),
  ('',             1),
]

smc_cycle = [
  ('nwe_cycle',   9),
  ('',            7),
  ('nrd_cycle',   9),
  ('',            7),
]

smc_mode = [
  ('read_mode',   1),
  ('write_mode',  1),
  ('',            2),
  ('exnw_mode',   2),
  ('',            9),
  ('tdf_cycles',  4),
  ('tdf_mode',    1),
  ('',            3),
  ('pmen',        1),
  ('',            3),
  ('ps',          2),
  ('',            3),
]

regs = [
  (0x00, 'SETUP0', smc_setup),
  (0x04, 'PULSE0', smc_pulse),
  (0x08, 'CYCLE0', smc_cycle),
  (0x0c, 'MODE0', smc_mode),
  (0x10, 'SETUP1', smc_setup),
  (0x14, 'PULSE1', smc_pulse),
  (0x18, 'CYCLE1', smc_cycle),
  (0x1c, 'MODE1', smc_mode),
  (0x20, 'SETUP2', smc_setup),
  (0x24, 'PULSE2', smc_pulse),
  (0x28, 'CYCLE2', smc_cycle),
  (0x2c, 'MODE2', smc_mode),
  (0x30, 'SETUP3', smc_setup),
  (0x34, 'PULSE3', smc_pulse),
  (0x38, 'CYCLE3', smc_cycle),
  (0x3c, 'MODE3', smc_mode),
  (0x80, 'OCMS', [
    ('smse',        1),
    ('',           15),
    ('cs0se',       1),
    ('cs1se',       1),
    ('cs2se',       1),
    ('cs3se',       1),
    ('',           12),
  ]),
  (0x84, 'KEY1'),
  (0x88, 'KEY2'),
  (0xe4, 'WPMR', common.wpmr),
  (0xe8, 'WPSR', common.wpsr),
]

