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
adc_int = [
  ('resrdy',      1),
  ('overrun',     1),
  ('winmon',      1),
  ('syncrdy',     1),
  ('',            4),
]

#------------------------------------------------------------------------------
regs = [
  (0x00, 'CTRLA', [
    ('swrst',       1),
    ('enable',      1),
    ('runstdby',    1),
    ('',            5),
  ]),
  (0x01, 'REFCTRL', [
    ('refsel',      4),
    ('',            3),
    ('refcomp',     1),
  ]),
  (0x02, 'AVGCTRL', [
    ('samplenum',   4),
    ('adjres',      3),
    ('',            1),
  ]),
  (0x03, 'SAMPCTRL', [
    ('samplen',     6),
    ('',            2),
  ]),
  (0x04, 'CTRLB', [
    ('diffmode',    1),
    ('leftadj',     1),
    ('freerun',     1),
    ('corren',      1),
    ('ressel',      2),
    ('',            2),
  ]),
  (0x08, 'WINCTRL', [
    ('winmode',     3),
    ('',            5),
  ]),
  (0x0c, 'SWTRIG', [
    ('flush',       1),
    ('start',       1),
    ('',            6),
  ]),
  (0x10, 'INPUTCTRL', [
    ('muxpos',      5),
    ('',            3),
    ('muxneg',      5),
    ('',            3),
    ('inputscan',   4),
    ('inputoffset', 4),
    ('gain',        4),
    ('',            4),
  ]),
  (0x14, 'EVCTRL', [
    ('startei',     1),
    ('syncei',      1),
    ('',            2),
    ('resdryeo',    1),
    ('winmoneo',    1),
    ('',            2),
  ]),
  (0x16, 'INTENCLR', adc_int),
  (0x17, 'INTENSET', adc_int),
  (0x18, 'INTFLAG', adc_int),
  (0x19, 'STATUS', [
    ('',            7),
    ('syncbusy',    1),
  ]),
  (0x1a, 'RESULT', [
    ('result',     16),
  ]),
  (0x1c, 'WINLT', [
    ('winlt',      16),
  ]),
  (0x20, 'WINUT', [
    ('winut',      16),
  ]),
  (0x24, 'GAINCORR', [
    ('gaincorr',   12),
    ('',            4),
  ]),
  (0x26, 'OFFSETCORR', [
    ('offsetcorr', 12),
    ('',            4),
  ]),
  (0x28, 'CALIB', [
    ('linearity_cal', 8),
    ('bias_cal',    3),
    ('',            5),
  ]),
  (0x2a, 'DBGCTRL', [
    ('dbgrun',      1),
    ('',            7),
  ]),
]
