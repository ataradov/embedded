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
scs_nvic_int = [
  ('pm',          1),
  ('sysctrl',     1),
  ('wdt',         1),
  ('rtc',         1),
  ('eic',         1),
  ('nvmctrl',     1),
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
  ('',            7),
]

def scs_nvic_ipr(ipr0, ipr1, ipr2, ipr3):
  return [('', 6), (ipr0, 2), ('', 6), (ipr1, 2), ('', 6), (ipr2, 2), ('', 6), (ipr3, 2)]

#------------------------------------------------------------------------------
regs_nvic = [
  (0x0000, 'ISER', scs_nvic_int),
  (0x0080, 'ICER', scs_nvic_int),
  (0x0100, 'ISPR', scs_nvic_int),
  (0x0180, 'ICPR', scs_nvic_int),
  (0x0300, 'IPR0', scs_nvic_ipr('pm', 'sysctrl', 'wdt', 'rtc')),
  (0x0304, 'IPR1', scs_nvic_ipr('eic', 'nvmctrl', 'evsys', 'sercom0')),
  (0x0308, 'IPR2', scs_nvic_ipr('sercom1', 'sercom2', 'sercom3', 'sercom4')),
  (0x030c, 'IPR3', scs_nvic_ipr('sercom5', 'tc0', 'tc1', 'tc2')),
  (0x0310, 'IPR4', scs_nvic_ipr('tc3', 'tc4', 'tc5', 'tc6')),
  (0x0314, 'IPR5', scs_nvic_ipr('tc7', 'adc', 'ac', 'dac')),
  (0x0318, 'IPR6', scs_nvic_ipr('ptc', '', '', '')),
]

#------------------------------------------------------------------------------
regs_systick = [
  (0x00, 'CSR', [
    ('enable',      1),
    ('tickint',     1),
    ('clksource',   1),
    ('',           13),
    ('countflag',   1),
    ('',           15),
  ]),
  (0x04, 'RVR', [
    ('reload',     24),
    ('',            8),
  ]),
  (0x08, 'CVR', [
    ('current',    24),
    ('',            8),
  ]),
  (0x0c, 'CALIB', [
    ('tenms',      24),
    ('',            6),
    ('scew',        1),
    ('noref',       1),
  ]),
]

#------------------------------------------------------------------------------
regs_scb = [
  (0x00, 'CPUID', [
    ('revision',    4),
    ('partno',     12),
    ('_1100',       4),
    ('variant',     4),
    ('implementer', 8),
  ]),
  (0x04, 'ICSR', [
    ('vectactive',  9),
    ('',            3),
    ('vectpending', 9),
    ('',            1),
    ('isrpending',  1),
    ('isrpreempt',  1),
    ('',            1),
    ('pendstclr',   1),
    ('pendstset',   1),
    ('pendsvclr',   1),
    ('pendsvset',   1),
    ('',            2),
    ('nmipendset',  1),
  ]),
  (0x08, 'VTOR', [
    ('',            7),
    ('tbloff',     25),
  ]),
  (0x0c, 'AIRCR', [
    ('',            1),
    ('vectclractive', 1),
    ('sysresetreq', 1),
    ('',           12),
    ('endianess',   1),
    ('vectkey',    16),
  ]),
  (0x10, 'SCR', [
    ('',            1),
    ('sleeponexit', 1),
    ('sleepdeep',   1),
    ('',            1),
    ('sevonpend',   1),
    ('',           27),
  ]),
  (0x14, 'CCR', [
    ('',            3),
    ('unalign_trp', 1),
    ('',            5),
    ('stkalign',    1),
    ('',           22),
  ]),
  (0x1c, 'SHPR2', [
    ('',           30),
    ('pri_11',      2),
  ]),
  (0x20, 'SHPR3', [
    ('',           22),
    ('pri_14',      2),
    ('',            6),
    ('pri_15',      2),
  ]),
  (0x24, 'SHCSR', [
    ('',           15),
    ('svcallpended', 1),
    ('',           16),
  ]),
  (0x30, 'DFSR', [
    ('halted',      1),
    ('bkpt',        1),
    ('dwttrap',     1),
    ('vcatch',      1),
    ('external',    1),
    ('',           27),
  ]),
]


