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
  (0x00, 'WPCLR', [
    ('',            1),
    ('evsys',       1),
    ('sercom0',     1),
    ('sercom1',     1),
    ('sercom2',     1),
    ('sercom3',     1),
    ('sercom4',     1),
    ('sercom5',     1),
    ('tc0',         1),
    ('tc1',         1),
    ('tc2',         1),
    ('tc3',         1),
    ('tc4',         1),
    ('tc5',         1),
    ('tc6',         1),
    ('tc7',         1),
    ('adc',         1),
    ('ac',          1),
    ('dac',         1),
    ('ptc',         1),
    ('',           12),
  ]),
  (0x04, 'WPSET', [
    ('',            1),
    ('evsys',       1),
    ('sercom0',     1),
    ('sercom1',     1),
    ('sercom2',     1),
    ('sercom3',     1),
    ('sercom4',     1),
    ('sercom5',     1),
    ('tc0',         1),
    ('tc1',         1),
    ('tc2',         1),
    ('tc3',         1),
    ('tc4',         1),
    ('tc5',         1),
    ('tc6',         1),
    ('tc7',         1),
    ('adc',         1),
    ('ac',          1),
    ('dac',         1),
    ('ptc',         1),
    ('',           12),
  ]),
]
