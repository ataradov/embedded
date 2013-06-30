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
  (0x00, 'CTRL', [
    ('swrst',       1),
    ('',            1),
    ('crc',         1),
    ('mbist',       1),
    ('ce',          1),
    ('',            3),
  ]),
  (0x01, 'STATUSA', [
    ('done',        1),
    ('crstext',     1),
    ('berr',        1),
    ('fail',        1),
    ('perr',        1),
    ('',            3),
  ]),
  (0x02, 'STATUSB', [
    ('prot',        1),
    ('dbgpres',     1),
    ('dccd0',       1),
    ('dccd1',       1),
    ('hpe',         1),
    ('',            3),
  ]),
  (0x04, 'ADDR', [
    ('',            2),
    ('addr',       30),
  ]),
  (0x08, 'LENGTH', [
    ('',            2),
    ('length',     30),
  ]),
  (0x0c, 'DATA'),
  (0x10, 'DCC0'),
  (0x14, 'DCC1'),
  (0x18, 'DID', [
    ('dvsel',       8),
    ('revision',    4),
    ('die',         4),
    ('subfamily',   8),
    ('family',      4),
    ('processor',   4),
  ]),
]
