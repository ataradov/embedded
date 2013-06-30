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
sercom_usart_int = [
  ('dre',         1),
  ('txc',         1),
  ('rxc',         1),
  ('',            5),
]

sercom_spi_int = [
  ('dre',         1),
  ('txc',         1),
  ('rxc',         1),
  ('',            5),
]

sercom_i2c_slave_int = [
  ('prec',        1),
  ('amatch',      1),
  ('drdy',        1),
  ('',            5),
]

sercom_i2c_master_int = [
  ('mb',          1),
  ('sb',          1),
  ('',            6),
]

#------------------------------------------------------------------------------
regs_usart = [
  (0x00, 'CTRLA', [
    ('swrst',       1),
    ('enable',      1),
    ('mode',        3),
    ('',            2),
    ('runstdby',    1),
    ('',            8),
    ('txpo',        1),
    ('',            3),
    ('rxpo',        2),
    ('',            2),
    ('form',        4),
    ('cmode',       1),
    ('cpol',        1),
    ('dord',        1),
    ('',            1),
  ]),
  (0x04, 'CTRLB', [
    ('chsize',      3),
    ('',            3),
    ('sbmode',      1),
    ('',            6),
    ('pmode',       1),
    ('',            2),
    ('txen',        1),
    ('rxen',        1),
    ('',           14),
  ]),
  (0x08, 'DBGCTRL', [
    ('dbgstop',     1),
    ('',            7),
  ]),
  (0x0a, 'BAUD', [
    ('baud',       16),
  ]),
  (0x0c, 'INTENCLR', sercom_usart_int),
  (0x0d, 'INTENSET', sercom_usart_int),
  (0x0e, 'INTFLAG', sercom_usart_int),
  (0x10, 'STATUS', [
    ('perr',        1),
    ('ferr',        1),
    ('bufovf',      1),
    ('',           12),
    ('syncbusy',    1),
  ]),
  (0x18, 'DATA', [
    ('data',        9),
    ('',            7),
  ]),
]

#------------------------------------------------------------------------------
regs_spi = [
  (0x00, 'CTRLA', [
    ('swrst',       1),
    ('enable',      1),
    ('mode',        3),
    ('',            2),
    ('runstdby',    1),
    ('',            8),
    ('dopo',        1),
    ('',            3),
    ('dipo',        2),
    ('',            2),
    ('form',        4),
    ('cpha',        1),
    ('cpol',        1),
    ('dord',        1),
    ('',            1),
  ]),
  (0x04, 'CTRLB', [
    ('chsize',      3),
    ('',            3),
    ('ploaden',     1),
    ('',            7),
    ('amode',       2),
    ('',            1),
    ('rxen',        1),
    ('',           14),
  ]),
  (0x08, 'DBGCTRL', [
    ('dbgstop',     1),
    ('',            7),
  ]),
  (0x0a, 'BAUD', [
    ('baud',        8),
  ]),
  (0x0c, 'INTENCLR', sercom_spi_int),
  (0x0d, 'INTENSET', sercom_spi_int),
  (0x0e, 'INTFLAG', sercom_spi_int),
  (0x10, 'STATUS', [
    ('',            2),
    ('bufovf',      1),
    ('',           12),
    ('syncbusy',    1),
  ]),
  (0x14, 'ADDR', [
    ('addr',        8),
    ('',            8),
    ('addrmask',    8),
    ('',            8),
  ]),
  (0x18, 'DATA', [
    ('data',        9),
    ('',            7),
  ]),
]

#------------------------------------------------------------------------------
regs_i2c_slave = [
  (0x00, 'CTRLA', [
    ('swrst',       1),
    ('enable',      1),
    ('mode',        3),
    ('',            2),
    ('runstdby',    1),
    ('',            8),
    ('pinout',      1),
    ('',            3),
    ('sdahold',     2),
    ('',            8),
    ('lowtout',     1),
    ('',            1),
  ]),
  (0x04, 'CTRLB', [
    ('',            8),
    ('smen',        1),
    ('',            5),
    ('amode',       2),
    ('cmd',         2),
    ('ackact',      1),
    ('',           13),
  ]),
  (0x0c, 'INTENCLR', sercom_i2c_slave_int),
  (0x0d, 'INTENSET', sercom_i2c_slave_int),
  (0x0e, 'INTFLAG', sercom_i2c_slave_int),
  (0x10, 'STATUS', [
    ('buserr',      1),
    ('coll',        1),
    ('rxnack',      1),
    ('dir',         1),
    ('sr',          1),
    ('',            1),
    ('lowtout',     1),
    ('clkhold',     1),
    ('',            7),
    ('syncbusy',    1),
  ]),
  (0x14, 'ADDR', [
    ('gencen',      1),
    ('addr',        7),
    ('',            9),
    ('addrmask',    7),
    ('',            8),
  ]),
  (0x18, 'DATA', [
    ('data',        8),
    ('',            8),
  ]),
]

#------------------------------------------------------------------------------
regs_i2c_master = [
  (0x00, 'CTRLA', [
    ('swrst',       1),
    ('enable',      1),
    ('mode',        3),
    ('',            2),
    ('runstdby',    1),
    ('',            8),
    ('pinout',      1),
    ('',            3),
    ('sdahold',     2),
    ('',            6),
    ('inactout',    2),
    ('lowtout',     1),
    ('',            1),
  ]),
  (0x04, 'CTRLB', [
    ('',            8),
    ('smen',        1),
    ('qcen',        1),
    ('',            6),
    ('cmd',         2),
    ('ackact',      1),
    ('',           13),
  ]),
  (0x08, 'DBGCTRL', [
    ('dbgstop',     1),
    ('',            7),
  ]),
  (0x0a, 'BAUD', [
    ('baud',        8),
    ('baudlow',     8),
  ]),
  (0x0c, 'INTENCLR', sercom_i2c_master_int),
  (0x0d, 'INTENSET', sercom_i2c_master_int),
  (0x0e, 'INTFLAG', sercom_i2c_master_int),

  (0x10, 'STATUS', [
    ('buserr',      1),
    ('arblost',     1),
    ('rxnack',      1),
    ('',            1),
    ('busstate',    2),
    ('lowtout',     1),
    ('clkhold',     1),
    ('',            7),
    ('syncbusy',    1),
  ]),
  (0x14, 'ADDR', [
    ('addr',        8),
    ('',            8),
  ]),
  (0x18, 'DATA', [
    ('data',        8),
    ('',            8),
  ]),
]

