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
tc_int = [
  ('ovf',         1),
  ('err',         1),
  ('',            1),
  ('syncrdy',     1),
  ('mc0',         1),
  ('mc1',         1),
  ('',            2),
]

#------------------------------------------------------------------------------
tc_common = [
  (0x00, 'CTRLA', [
    ('swrst',       1),
    ('enable',      1),
    ('mode',        2),
    ('',            1),
    ('wavegen',     2),
    ('',            1),
    ('prescaler',   3),
    ('runstdby',    1),
    ('prescsync',   2),
    ('',            2),
  ]),
  (0x02, 'READREQ', [
    ('addr',        5),
    ('',            9),
    ('rcont',       1),
    ('rreq',        1),
  ]),
  (0x04, 'CTRLBCLR', [
    ('dir',         1),
    ('',            1),
    ('oneshot',     1),
    ('',            3),
    ('cmd',         2),
  ]),
  (0x05, 'CTRLBSET', [
    ('dir',         1),
    ('',            1),
    ('oneshot',     1),
    ('',            3),
    ('cmd',         2),
  ]),
  (0x06, 'CTRLC', [
    ('inven0',      1),
    ('inven1',      1),
    ('',            2),
    ('cpten0',      1),
    ('cpten1',      1),
    ('',            2),
  ]),
  (0x08, 'DBGCTRL', [
    ('dbgrun',      1),
    ('',            7),
  ]),
  (0x0a, 'EVCTRL', [
    ('evact',       3),
    ('',            1),
    ('tcinv',       1),
    ('tcei',        1),
    ('',            2),
    ('ovfeo',       1),
    ('',            3),
    ('mceo0',       1),
    ('mceo1',       1),
    ('',            2),
  ]),
  (0x0c, 'INTENCLR', tc_int),
  (0x0d, 'INTENSET', tc_int),
  (0x0e, 'INTFLAG', tc_int),
  (0x0f, 'STATUS', [
    ('',            3),
    ('stop',        1),
    ('slave',       1),
    ('',            2),
    ('syncbusy',    1),
  ]),
]

#------------------------------------------------------------------------------
regs_8 = tc_common + [
  (0x10, 'COUNT', [
    ('count',       8),
  ]),
  (0x14, 'PER', [
    ('per',         8),
  ]),
  (0x18, 'CC0', [
    ('cc',          8),
  ]),
  (0x19, 'CC1', [
    ('cc',          8),
  ]),
]

#------------------------------------------------------------------------------
regs_16 = tc_common + [
  (0x10, 'COUNT', [
    ('count',      16),
  ]),
  (0x18, 'CC0', [
    ('cc',         16),
  ]),
  (0x1a, 'CC1', [
    ('cc',         16),
  ]),
]

#------------------------------------------------------------------------------
regs_32 = tc_common + [
  (0x10, 'COUNT', [
    ('count',      32),
  ]),
  (0x18, 'CC0', [
    ('cc',         32),
  ]),
  (0x1c, 'CC1', [
    ('cc',         32),
  ]),
]

