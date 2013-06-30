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
import common

#------------------------------------------------------------------------------
regs = [
  (0x00, 'DSCR', [
    ('',            9),
    ('dscr',       23),
  ]),
  (0x08, 'DMA_EN', common.one_bit('dmaen')),
  (0x0c, 'DMA_DIS', common.one_bit('dmadis')),
  (0x10, 'DMA_SR', common.one_bit('dmasr')),
  (0x14, 'DMA_IER', common.one_bit('dmaier')),
  (0x18, 'DMA_IDR', common.one_bit('dmaidr')),
  (0x1c, 'DMA_IMR', common.one_bit('dmaimr')),
  (0x20, 'DMA_ISR', common.one_bit('dmaisr')),
  (0x34, 'CR', common.one_bit('reset')),
  (0x38, 'MR', [
    ('enable',      1),
    ('compare',     1),
    ('ptype',       2),
    ('divider',     4),
    ('',           24),
  ]),
  (0x3c, 'SR'),
  (0x40, 'IER', common.one_bit('errier')),
  (0x44, 'IDR', common.one_bit('erridr')),
  (0x48, 'IMR', common.one_bit('errimr')),
  (0x4c, 'ISR', common.one_bit('errisr')),
]

