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
eic_int = [
  ('extint',     16),
  ('',           16),
]

#------------------------------------------------------------------------------
regs = [
  (0x00, 'CTRL', [
    ('swrst',       1),
    ('enable',      1),
    ('',            6),
  ]),
  (0x01, 'STATUS', [
    ('',            7),
    ('syncbusy',    1),
  ]),
  (0x02, 'NMICTRL', [
    ('nmisense',    3),
    ('nmiflten',    1),
    ('',            4),
  ]),
  (0x03, 'NMIFLAG', [
    ('nmi',         1),
    ('',            7),
  ]),
  (0x04, 'EVCTRL', [
    ('extinteo',   16),
    ('',           16),
  ]),
  (0x08, 'INTENCLR', eic_int),
  (0x0c, 'INTENSET', eic_int),
  (0x10, 'INTFLAG', eic_int),
  (0x14, 'WAKEUP', [
    ('wakeupen',   16),
    ('',           16),
  ]),
  (0x18, 'CONFIG0', [
    ('sense0',      3),
    ('filten0',     1),
    ('sense1',      3),
    ('filten1',     1),
    ('sense2',      3),
    ('filten2',     1),
    ('sense3',      3),
    ('filten3',     1),
    ('sense4',      3),
    ('filten4',     1),
    ('sense5',      3),
    ('filten5',     1),
    ('sense6',      3),
    ('filten6',     1),
    ('sense7',      3),
    ('filten7',     1),
  ]),
  (0x1c, 'CONFIG1', [
    ('sense8',      3),
    ('filten8',     1),
    ('sense9',      3),
    ('filten9',     1),
    ('sense10',     3),
    ('filten10',    1),
    ('sense11',     3),
    ('filten11',    1),
    ('sense12',     3),
    ('filten12',    1),
    ('sense13',     3),
    ('filten13',    1),
    ('sense14',     3),
    ('filten14',    1),
    ('sense15',     3),
    ('filten15',    1),
  ]),
]
