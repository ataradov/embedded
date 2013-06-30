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
dac_int = [
  ('underrun',    1),
  ('empty',       1),
  ('syncrdy',     1),
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
    ('eoen',        1),
    ('ioen',        1),
    ('leftadj',     1),
    ('vpd',         1),
    ('',            2),
    ('refsel',      2),
  ]),
  (0x02, 'EVCTRL', [
    ('startei',     1),
    ('emptyeo',     1),
    ('',            6),
  ]),
  (0x03, 'TEST', [
    ('testen',      1),
    ('',            7),
  ]),
  (0x04, 'INTENCLR', dac_int),
  (0x05, 'INTENSET', dac_int),
  (0x06, 'INTFLAG', dac_int),
  (0x07, 'STATUS', [
    ('',            7),
    ('syncbusy',    1),
  ]),
  (0x08, 'DATA', [
    ('data',       10),
    ('',            6),
  ]),
  (0x0c, 'DATABUF', [
    ('databuf',    10),
    ('',            6),
  ]),
]
