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
ac_int = [
  ('comp0',       1),
  ('comp1',       1),
  ('',            2),
  ('win',         1),
  ('',            3),
]

ac_compctrl = [
  ('enable',      1),
  ('single',      1),
  ('speed',       2),
  ('',            1),
  ('intsel',      2),
  ('',            1),
  ('muxneg',      3),
  ('',            1),
  ('muxpos',      2),
  ('',            1),
  ('swap',        1),
  ('out',         2),
  ('',            1),
  ('hyst',        1),
  ('',            4),
  ('flen',        3),
  ('',            5),
]

#------------------------------------------------------------------------------
regs = [
  (0x00, 'CTRLA', [
    ('swrst',       1),
    ('enable',      1),
    ('runstdby',    1),
    ('',            5),
  ]),
  (0x01, 'CTRLB', [
    ('start0',      1),
    ('start1',      1),
    ('',            6),
  ]),
  (0x02, 'EVCTRL', [
    ('compeo0',     1),
    ('compeo1',     1),
    ('',            2),
    ('wineo0',      1),
    ('',            3),
    ('compei0',     1),
    ('compei1',     1),
    ('',            6),
  ]),
  (0x04, 'INTENCLR', ac_int),
  (0x05, 'INTENSET', ac_int),
  (0x06, 'INTFLAG', ac_int),
  (0x08, 'STATUSA', [
    ('state0',      1),
    ('state1',      1),
    ('',            2),
    ('wstate0',     2),
    ('',            2),
  ]),
  (0x09, 'STATUSB', [
    ('ready0',      1),
    ('ready1',      1),
    ('',            5),
    ('syncbusy',    1),
  ]),
  (0x0a, 'STATUSC', [
    ('state0',      1),
    ('state1',      1),
    ('',            2),
    ('wstate0',     2),
    ('',            2),
  ]),
  (0x0c, 'WINCTRL', [
    ('wen0',        1),
    ('wintsel0',    2),
    ('',            5),
  ]),
  (0x10, 'COMPCTRL0', ac_compctrl),
  (0x14, 'COMPCTRL1', ac_compctrl),
  (0x20, 'SCALER0', [
    ('value',       5),
    ('',            3),
  ]),
  (0x21, 'SCALER1', [
    ('value',       5),
    ('',            3),
  ]),
]
