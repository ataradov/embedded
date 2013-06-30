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
regs = [
  (0x00, 'CR', [
    ('updtim',      1),
    ('updcal',      1),
    ('',            6),
    ('timevsel',    2),
    ('',            6),
    ('calevsel',    2),
    ('',           14),
  ]),
  (0x04, 'MR', [
    ('hrmod',       1),
    ('persian',     1),
    ('',            2),
    ('negppm',      1),
    ('',            3),
    ('correction',  7),
    ('highppm',     1),
    ('out0',        3),
    ('',            1),
    ('out1',        3),
    ('',            1),
    ('thigh',       3),
    ('',            1),
    ('tperiod',     2),
    ('',            2),
  ]),
  (0x08, 'TIMR', [
    ('sec',         7),
    ('',            1),
    ('min',         7),
    ('',            1),
    ('hour',        6),
    ('ampm',        1),
    ('',            9),
  ]),
  (0x0c, 'CALR', [
    ('cent',        7),
    ('',            1),
    ('year',        8),
    ('month',       5),
    ('day',         3),
    ('date',        6),
    ('',            2),
  ]),
  (0x10, 'TIMALR', [
    ('sec',         7),
    ('secen',       1),
    ('min',         7),
    ('minen',       1),
    ('hour',        6),
    ('ampm',        1),
    ('houren',      1),
    ('',            8),
  ]),
  (0x14, 'CALALR', [
    ('',           16),
    ('month',       5),
    ('',            2),
    ('mthen',       1),
    ('date',        6),
    ('',            1),
    ('dateen',      1),
  ]),
  (0x18, 'SR', [
    ('ackupd',      1),
    ('alarm',       1),
    ('sec',         1),
    ('timev',       1),
    ('calev',       1),
    ('tderr',       1),
    ('',           26),
  ]),
  (0x1c, 'SCCR', [
    ('ackclr',      1),
    ('alrclr',      1),
    ('secclr',      1),
    ('timclr',      1),
    ('calclr',      1),
    ('tderrclr',    1),
    ('',           26),
  ]),
  (0x20, 'IER', [
    ('acken',       1),
    ('alren',       1),
    ('secen',       1),
    ('timen',       1),
    ('calen',       1),
    ('tderren',     1),
    ('',           26),
  ]),
  (0x24, 'IDR', [
    ('ackdis',      1),
    ('alrdis',      1),
    ('secdis',      1),
    ('timdis',      1),
    ('caldis',      1),
    ('tderrdis',    1),
    ('',           26),
  ]),
  (0x28, 'IMR', [
    ('ack',         1),
    ('alr',         1),
    ('sec',         1),
    ('tim',         1),
    ('cal',         1),
    ('',           27),
  ]),
  (0x2c, 'VER', [
    ('nvtim',       1),
    ('nvcal',       1),
    ('nvtimalr',    1),
    ('nvcalalr',    1),
    ('',           28),
  ]),
]

