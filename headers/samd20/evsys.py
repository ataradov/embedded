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
evsys_int = \
  [('ovr%d' % i, 1) for i in range(8)] + \
  [('evd%d' % i, 1) for i in range(8)] + \
  [('', 16)]

#------------------------------------------------------------------------------
regs = [
  (0x00, 'CTRL', [
    ('swrst',       1),
    ('',            3),
    ('gclkreq',     1),
    ('',            3),
  ]),
  (0x04, 'CHANNEL', [
    ('channel',     8),
    ('swevt',       1),
    ('',            7),
    ('evgen',       8),
    ('path',        2),
    ('edgsel',      2),
    ('',            4),
  ]),
  (0x08, 'USER', [
    ('user',        8),
    ('channel',     8),
  ]),
  (0x0c, 'CHSTATUS', 
    [('usrrdy%d' % i, 1) for i in range(8)] +
    [('chbusy%d' % i, 1) for i in range(8)] + [
    ('',           16),
  ]),
  (0x10, 'INTENCLR', evsys_int),
  (0x14, 'INTENSET', evsys_int),
  (0x18, 'INTFLAG', evsys_int),
]
