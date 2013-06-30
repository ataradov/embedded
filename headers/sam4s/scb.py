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
  (0x0008, 'ACTLR', [
    ('dismcycint',  1),
    ('disdefwbuf',  1),
    ('disfold',     1),
    ('',            5),
    ('disfpca',     1),
    ('disoofp',     1),
    ('',           22),
  ]),
  (0x0d00, 'CPUID', [
    ('revision',    4),
    ('partno',     12),
    ('constant',    4),
    ('variant',     4),
    ('implementer', 8),
  ]),
  (0x0d04, 'ICSR', [
    ('vectactive',  9),
    ('',            2),
    ('rettobase',   1),
    ('vectpending', 10),
    ('isrpending',  1),
    ('',            2),
    ('pendstclr',   1),
    ('pendstset',   1),
    ('pendsvclr',   1),
    ('pendsvset',   1),
    ('',            2),
    ('nmipendset',  1),
  ]),
  (0x0d08, 'VTOR', [
    ('',            7),
    ('tbloff',     25),
  ]),
  (0x0d0c, 'AIRCR', [
    ('vectreset',   1),
    ('vectclractive', 1),
    ('sysresetreq', 1),
    ('',            5),
    ('prigroup',    3),
    ('',            4),
    ('endianness',  1),
    ('vectkey',    16),
  ]),
  (0x0d10, 'SCR', [
    ('',            1),
    ('sleeponexit', 1),
    ('sleepdeep',   1),
    ('',            1),
    ('sevonpend',   1),
    ('',           27),
  ]),
  (0x0d14, 'CCR', [
    ('nonebasethrdena', 1),
    ('usersetmpend', 1),
    ('',            1),
    ('unalign_trp', 1),
    ('div_0_trp',   1),
    ('',            3),
    ('bfhfnmign',   1),
    ('stkalign',    1),
    ('',           22),
  ]),
  (0x0d18, 'SHPR1', [
    ('pri_4',       8),
    ('pri_5',       8),
    ('pri_6',       8),
    ('',            8),
  ]),
  (0x0d1c, 'SHPR2', [
    ('',           24),
    ('pri_11',      8),
  ]),
  (0x0d20, 'SHPR3', [
    ('',           16),
    ('pri_14',      8),
    ('pri_15',      8),
  ]),
  (0x0d24, 'SHCSR', [
    ('memfaultact', 1),
    ('busfaultact', 1),
    ('',            1),
    ('usgfaultact', 1),
    ('',            3),
    ('svcallavct',  1),
    ('monitoract',  1),
    ('',            1),
    ('pendsvact',   1),
    ('systickact',  1),
    ('usgfaultpended', 1),
    ('memfaultpended', 1),
    ('busfaultpended', 1),
    ('svcallpended', 1),
    ('memfaultena', 1),
    ('busfaultena', 1),
    ('usgfaultena', 1),
    ('',           13),
  ]),
  (0x0d28, 'CFSR', [
    ('iaccviol',    1),
    ('daccviol',    1),
    ('',            1),
    ('munstkerr',   1),
    ('mstkerr',     1),
    ('mlsperr',     1),
    ('',            1),
    ('mmarvalid',   1),
    ('ibuserr',     1),
    ('preciserr',   1),
    ('impreciserr', 1),
    ('unstkerr',    1),
    ('stkerr',      1),
    ('',            2),
    ('bfrvalid',    1),
    ('undefinstr',  1),
    ('invstate',    1),
    ('invpc',       1),
    ('nocp',        1),
    ('',            4),
    ('unaligned',   1),
    ('divbyzero',   1),
    ('',            6),
  ]),
  (0x0d2c, 'HFSR', [
    ('',            1),
    ('VECTTBL',     1),
    ('',           28),
    ('FORCED',      1),
    ('DEBUGEVT',    1),
  ]),
  (0x0d34, 'MMFAR'),
  (0x0d38, 'BFAR'),
  (0x0d3c, 'AFSR'),
]

