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
    ('',            2),
    ('vroff',       1),
    ('xtalsel',     1),
    ('',           20),
    ('key',         8),
  ]),
  (0x04, 'SMMR', [
    ('smth',        4),
    ('',            4),
    ('smsmpl',      3),
    ('',            1),
    ('smrsten',     1),
    ('smien',       1),
    ('',           18),
  ]),
  (0x08, 'MR', [
    ('',           12),
    ('bodrsten',    1),
    ('boddis',      1),
    ('onreg',       1),
    ('',            5),
    ('oscbypass',   1),
    ('',            3),
    ('key',         8),
  ]),
  (0x0c, 'WUMR', [
    ('',            1),
    ('smen',        1),
    ('rtten',       1),
    ('rtcen',       1),
    ('',            1),
    ('lpdbcen0',    1),
    ('lpdbcen1',    1),
    ('lpdbcclr',    1),
    ('',            4),
    ('wkupdbc',     3),
    ('',            1),
    ('lpdbc',       3),
    ('',           13),
  ]),
  (0x10, 'WUIR',
    [('wkupen%d' % i, 1) for i in range(16)] +
    [('wkupt%d' % i, 1) for i in range(16)]
  ),
    (0x14, 'SR', [
    ('',            1),
    ('wkups',       1),
    ('smws',        1),
    ('bodrsts',     1),
    ('smrsts',      1),
    ('sms',         1),
    ('smos',        1),
    ('oscsel',      1),
    ('',            5),
    ('lpdbcs0',     1),
    ('lpdbcs1',     1),
    ('',            1)] +
    [('wkupis%d' % i, 1) for i in range(16)]
  ),
]

