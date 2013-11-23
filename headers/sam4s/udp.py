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
udp_ep_int = [('ep%dint' % i, 1) for i in range(8)]

udp_ep = [('ep%d' % i, 1) for i in range(8)] + [('', 24)]

udp_csr = [
  ('txcomp',      1),
  ('rx_data_bk0', 1),
  ('rxsetup',     1),
  ('stallsent',   1),
  ('txpktrdy',    1),
  ('forcestall',  1),
  ('rx_data_bk1', 1),
  ('dir',         1),
  ('eptype',      3),
  ('dtgle',       1),
  ('',            3),
  ('epeds',       1),
  ('rxbytecnt',  11),
  ('',            5),
]

udp_fdr = [
  ('fifo_data',   8),
  ('',           24),
]

regs = [
  (0x00, 'FRM_NUM', [
    ('frm_num',    11),
    ('',            5),
    ('frm_err',     1),
    ('frm_ok',      1),
    ('',           14),
  ]),
  (0x04, 'GLB_STAT', [
    ('fadden',      1),
    ('confg',       1),
    ('esr',         1),
    ('rsminpr',     1),
    ('rmwupe',      1),
    ('',           27),
  ]),
  (0x08, 'FADDR', [
    ('fadd',        7),
    ('',            1),
    ('fen',         1),
    ('',           23),
  ]),
  (0x10, 'IER',
    udp_ep_int + [
    ('rxsusp',      1),
    ('rxrsm',       1),
    ('extrsm',      1),
    ('sofint',      1),
    ('',            1),
    ('wakeup',      1),
    ('',           18),
  ]),
  (0x14, 'IDR',
    udp_ep_int + [
    ('rxsusp',      1),
    ('rxrsm',       1),
    ('extrsm',      1),
    ('sofint',      1),
    ('',            1),
    ('wakeup',      1),
    ('',           18),
  ]),
  (0x18, 'IMR',
    udp_ep_int + [
    ('rxsusp',      1),
    ('rxrsm',       1),
    ('extrsm',      1),
    ('sofint',      1),
    ('bit12',       1),
    ('wakeup',      1),
    ('',           18),
  ]),
  (0x1c, 'ISR',
    udp_ep_int + [
    ('rxsusp',      1),
    ('rxrsm',       1),
    ('extrsm',      1),
    ('sofint',      1),
    ('endbusres',   1),
    ('wakeup',      1),
    ('',           18),
  ]),
  (0x20, 'ICR', [
    ('',            8),
    ('rxsusp',      1),
    ('rxrsm',       1),
    ('extrsm',      1),
    ('sofint',      1),
    ('endbusres',   1),
    ('wakeup',      1),
    ('',           18),
  ]),
  (0x28, 'RST_EP', udp_ep),
  ((0x30, 0x4c), 'CSR', udp_csr),
  ((0x50, 0x6c), 'FDR', udp_fdr),
  (0x74, 'TXVC', [
    ('',            8),
    ('txvdis',      1),
    ('puon',        1),
    ('',           22),
  ]),
]

