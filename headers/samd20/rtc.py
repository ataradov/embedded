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
rtc_m0_int = [
  ('cmp0',        1),
  ('',            5),
  ('syncrdy',     1),
  ('ovf',         1),
]

rtc_m1_int = [
  ('cmp0',        1),
  ('cmp1',        1),
  ('',            4),
  ('syncrdy',     1),
  ('ovf',         1),
]

rtc_m2_int = [
  ('alarm0',      1),
  ('',            5),
  ('syncrdy',     1),
  ('ovf',         1),
]

#------------------------------------------------------------------------------
regs_m0 = [
  (0x00, 'CTRL', [
    ('swrst',       1),
    ('enable',      1),
    ('mode',        2),
    ('',            2),
    ('clkrep',      1),
    ('matchclr',    1),
    ('prescaler',   4),
    ('',            4),
  ]),
  (0x02, 'READREQ', [
    ('addr',        6),
    ('',            8),
    ('rcont',       1),
    ('rreq',        1),
  ]),
  (0x04, 'EVCTRL', [
    ('pereo0',      1),
    ('pereo1',      1),
    ('pereo2',      1),
    ('pereo3',      1),
    ('pereo4',      1),
    ('pereo5',      1),
    ('pereo6',      1),
    ('pereo7',      1),
    ('cmpeo0',      1),
    ('',            6),
    ('ovfeo',       1),
  ]),
  (0x06, 'INTENCLR', rtc_m0_int),
  (0x07, 'INTENSET', rtc_m0_int),
  (0x08, 'INTFLAG', rtc_m0_int),
  (0x0a, 'STATUS', [
    ('',            7),
    ('syncbusy',    1),
  ]),
  (0x0b, 'DBGCTRL', [
    ('dbgrun',      1),
    ('',            7),
  ]),
  (0x0c, 'FREQCORR', [
    ('value',       7),
    ('sign',        1),
  ]),
  (0x10, 'COUNT', [
    ('count',      32),
  ]),
  (0x18, 'COMP0', [
    ('comp',       32),
  ]),
]

#------------------------------------------------------------------------------
regs_m1 = [
  (0x00, 'CTRL', [
    ('swrst',       1),
    ('enable',      1),
    ('mode',        2),
    ('',            2),
    ('clkrep',      1),
    ('matchclr',    1),
    ('prescaler',   4),
    ('',            4),
  ]),
  (0x02, 'READREQ', [
    ('addr',        6),
    ('',            8),
    ('rcont',       1),
    ('rreq',        1),
  ]),
  (0x04, 'EVCTRL', [
    ('pereo0',      1),
    ('pereo1',      1),
    ('pereo2',      1),
    ('pereo3',      1),
    ('pereo4',      1),
    ('pereo5',      1),
    ('pereo6',      1),
    ('pereo7',      1),
    ('cmpeo0',      1),
    ('cmpeo1',      1),
    ('',            5),
    ('ovfeo',       1),
  ]),
  (0x06, 'INTENCLR', rtc_m1_int),
  (0x07, 'INTENSET', rtc_m1_int),
  (0x08, 'INTFLAG', rtc_m1_int),
  (0x0a, 'STATUS', [
    ('',            7),
    ('syncbusy',    1),
  ]),
  (0x0b, 'DBGCTRL', [
    ('dbgrun',      1),
    ('',            7),
  ]),
  (0x0c, 'FREQCORR', [
    ('value',       7),
    ('sign',        1),
  ]),
  (0x10, 'COUNT', [
    ('count',      16),
  ]),
  (0x14, 'PER', [
    ('per',        16),
  ]),
  (0x18, 'COMP0', [
    ('comp',       16),
  ]),
  (0x1a, 'COMP1', [
    ('comp',       16),
  ]),
]

#------------------------------------------------------------------------------
regs_m2 = [
  (0x00, 'CTRL', [
    ('swrst',       1),
    ('enable',      1),
    ('mode',        2),
    ('',            2),
    ('clkrep',      1),
    ('matchclr',    1),
    ('prescaler',   4),
    ('',            4),
  ]),
  (0x02, 'READREQ', [
    ('addr',        6),
    ('',            8),
    ('rcont',       1),
    ('rreq',        1),
  ]),
  (0x04, 'EVCTRL', [
    ('pereo0',      1),
    ('pereo1',      1),
    ('pereo2',      1),
    ('pereo3',      1),
    ('pereo4',      1),
    ('pereo5',      1),
    ('pereo6',      1),
    ('pereo7',      1),
    ('alarmeo0',    1),
    ('',            6),
    ('ovfeo',       1),
  ]),
  (0x06, 'INTENCLR', rtc_m2_int),
  (0x07, 'INTENSET', rtc_m2_int),
  (0x08, 'INTFLAG', rtc_m2_int),
  (0x0a, 'STATUS', [
    ('',            7),
    ('syncbusy',    1),
  ]),
  (0x0b, 'DBGCTRL', [
    ('dbgrun',      1),
    ('',            7),
  ]),
  (0x0c, 'FREQCORR', [
    ('value',       7),
    ('sign',        1),
  ]),
  (0x10, 'CLOCK', [
    ('second',      6),
    ('minute',      6),
    ('hour',        5),
    ('day',         5),
    ('month',       4),
    ('year',        6),
  ]),
  (0x18, 'ALARM0', [
    ('second',      6),
    ('minute',      6),
    ('hour',        5),
    ('day',         5),
    ('month',       4),
    ('year',        6),
  ]),
  (0x1c, 'MASK0', [
    ('sel',         3),
    ('',            5),
  ]),
]

