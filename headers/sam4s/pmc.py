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
  (0x0000, 'SCER', [
    ('',            7),
    ('udp',         1),
    ('pck0',        1),
    ('pck1',        1),
    ('pck2',        1),
    ('',           21),
  ]),
  (0x0004, 'SCDR', [
    ('',            7),
    ('udp',         1),
    ('pck0',        1),
    ('pck1',        1),
    ('pck2',        1),
    ('',           21),
  ]),
  (0x0008, 'SCSR', [
    ('',            7),
    ('udp',         1),
    ('pck0',        1),
    ('pck1',        1),
    ('pck2',        1),
    ('',           21),
  ]),
  (0x0010, 'PCER0', common.pid0),
  (0x0014, 'PCDR0', common.pid0),
  (0x0018, 'PCSR0', common.pid0),
  (0x0020, 'CKGR_MOR', [
    ('moscxten',    1),
    ('moscxtby',    1),
    ('waitmode',    1),
    ('moscrcen',    1),
    ('moscrcf',     3),
    ('',            1),
    ('moscxtst',    8),
    ('key',         8),
    ('moscsel',     1),
    ('cfden',       1),
    ('',            6),
  ]),
  (0x0024, 'CKGR_MCFR', [
    ('mainf',      16),
    ('mainfrdy',    1),
    ('',            3),
    ('rcmeas',      1),
    ('',           11),
  ]),
  (0x0028, 'CKGR_PLLAR', [
    ('diva',        8),
    ('pllacount',   6),
    ('',            2),
    ('mula',       11),
    ('',            2),
    ('one',         1),
    ('',            2),
  ]),
  (0x002c, 'CKGR_PLLBR', [
    ('divb',        8),
    ('pllbcount',   6),
    ('',            2),
    ('mulb',       11),
    ('',            5),
  ]),
  (0x0030, 'MCKR', [
    ('css',         2),
    ('',            2),
    ('pres',        3),
    ('',            5),
    ('plladiv2',    1),
    ('pllbdiv2',    1),
    ('',           18),
  ]),
  (0x0038, 'USB', [
    ('usbs',        1),
    ('',            7),
    ('usbdiv',      4),
    ('',           20),
  ]),
  (0x0040, 'PCK0', [
    ('css',         3),
    ('',            1),
    ('pres',        3),
    ('',           25),
  ]),
  (0x0044, 'PCK1', [
    ('css',         3),
    ('',            1),
    ('pres',        3),
    ('',           25),
  ]),
  (0x0048, 'PCK2', [
    ('css',         3),
    ('',            1),
    ('pres',        3),
    ('',           25),
  ]),
  (0x0060, 'IER', [
    ('moscxts',     1),
    ('locka',       1),
    ('lockb',       1),
    ('mckrdy',      1),
    ('',            4),
    ('pckrdy0',     1),
    ('pckrdy1',     1),
    ('pckrdy2',     1),
    ('',            5),
    ('moscsels',    1),
    ('moscrcs',     1),
    ('cfdev',       1),
    ('',           13),
  ]),
  (0x0064, 'IDR', [
    ('moscxts',     1),
    ('locka',       1),
    ('lockb',       1),
    ('mckrdy',      1),
    ('',            4),
    ('pckrdy0',     1),
    ('pckrdy1',     1),
    ('pckrdy2',     1),
    ('',            5),
    ('moscsels',    1),
    ('moscrcs',     1),
    ('cfdev',       1),
    ('',           13),
  ]),
  (0x0068, 'SR', [
    ('moscxts',     1),
    ('locka',       1),
    ('lockb',       1),
    ('mckrdy',      1),
    ('',            3),
    ('oscsels',     1),
    ('pckrdy0',     1),
    ('pckrdy1',     1),
    ('pckrdy2',     1),
    ('',            5),
    ('moscsels',    1),
    ('moscrcs',     1),
    ('cfdev',       1),
    ('cfds',        1),
    ('fos',         1),
    ('',           11),
  ]),
  (0x006c, 'IMR', [
    ('moscxts',     1),
    ('locka',       1),
    ('lockb',       1),
    ('mckrdy',      1),
    ('',            4),
    ('pckrdy0',     1),
    ('pckrdy1',     1),
    ('pckrdy2',     1),
    ('',            5),
    ('moscsels',    1),
    ('moscrcs',     1),
    ('cfdev',       1),
    ('',           13),
  ]),
  (0x0070, 'FSMR',
    [('fstt%d' % i, 1) for i in range(16)] + [
    ('rttal',       1),
    ('rtcal',       1),
    ('usbal',       1),
    ('',            2),
    ('flpm',        2),
    ('',            9),
  ]),
  (0x0074, 'FSPR',
    [('fstp%d' % i, 1) for i in range(16)] + [
    ('',           16)
  ]),
  (0x0078, 'FOCR', common.one_bit('foclr')),
  (0x00e4, 'WPMR', common.wpmr),
  (0x00e8, 'WPSR', common.wpsr),
  (0x0100, 'PCER1', common.pid1),
  (0x0104, 'PCDR1', common.pid1),
  (0x0108, 'PCSR1', common.pid1),
  (0x0110, 'OCR', [
    ('cal4',        7),
    ('sel4',        1),
    ('cal8',        7),
    ('sel8',        1),
    ('cal12',       7),
    ('sel12',       1),
    ('',            8),
  ]),
]

