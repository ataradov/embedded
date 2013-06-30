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
regs = [
  (0x00, 'CR', common.one_bit('swrst')),
  (0x04, 'MR', [
    ('trgen',       1),
    ('trgsel',      3),
    ('word',        1),
    ('sleep',       1),
    ('fastwkup',    1),
    ('',            1),
    ('refresh',     8),
    ('user_sel',    2),
    ('',            2),
    ('tag',         1),
    ('maxs',        1),
    ('',            2),
    ('startup',     6),
    ('',            2),
  ]),
  (0x10, 'CHER', [
    ('ch0',         1),
    ('ch1',         1),
    ('',           30),
  ]),
  (0x14, 'CHDR', [
    ('ch0',         1),
    ('ch1',         1),
    ('',           30),
  ]),
  (0x18, 'CHSR', [
    ('ch0',         1),
    ('ch1',         1),
    ('',           30),
  ]),
  (0x20, 'CDR'),
  (0x24, 'IER', [
    ('txrdy',       1),
    ('eoc',         1),
    ('endtx',       1),
    ('txbufe',      1),
    ('',           28),
  ]),
  (0x28, 'IDR', [
    ('txrdy',       1),
    ('eoc',         1),
    ('endtx',       1),
    ('txbufe',      1),
    ('',           28),
  ]),
  (0x2c, 'IMR', [
    ('txrdy',       1),
    ('eoc',         1),
    ('endtx',       1),
    ('txbufe',      1),
    ('',           28),
  ]),
  (0x30, 'ISR', [
    ('txrdy',       1),
    ('eoc',         1),
    ('endtx',       1),
    ('txbufe',      1),
    ('',           28),
  ]),
  (0x94, 'ACR', [
    ('ibctlch0',      2),
    ('ibctlch1',      2),
    ('',              4),
    ('ibctldaccore',  2),
    ('',             22),
  ]),
  (0xe4, 'WPMR', common.wpmr),
  (0xe8, 'WPSR', common.wpsr),
]
