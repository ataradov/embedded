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
port_pmux = [
  ('pmuxe',       4),
  ('pmuxo',       4),
]

port_pincfg = [
  ('pmuxen',      1),
  ('inen',        1),
  ('pullen',      1),
  ('',            5),
]

port_bits = [('p%d' % i, 1) for i in range(32)]

#------------------------------------------------------------------------------
regs = [
  (0x00, 'DIR', port_bits),
  (0x04, 'DIRCLR', port_bits),
  (0x08, 'DIRSET', port_bits),
  (0x0c, 'DIRTGL', port_bits),
  (0x10, 'OUT', port_bits),
  (0x14, 'OUTCLR', port_bits),
  (0x18, 'OUTSET', port_bits),
  (0x1c, 'OUTTGL', port_bits),
  (0x20, 'IN', port_bits),
  (0x24, 'CTRL'),
  (0x28, 'WRCONFIG', [
    ('pinmask',    16),
    ('pmuxen',      1),
    ('inen',        1),
    ('pullen',      1),
    ('',            5),
    ('pmux',        4),
    ('wrpmux',      1),
    ('',            1),
    ('wrpincfg',    1),
    ('hwsel',       1),
  ]),
  (0x30, 'PMUX0', port_pmux),
  (0x31, 'PMUX1', port_pmux),
  (0x32, 'PMUX2', port_pmux),
  (0x33, 'PMUX3', port_pmux),
  (0x34, 'PMUX4', port_pmux),
  (0x35, 'PMUX5', port_pmux),
  (0x36, 'PMUX6', port_pmux),
  (0x37, 'PMUX7', port_pmux),
  (0x38, 'PMUX8', port_pmux),
  (0x39, 'PMUX9', port_pmux),
  (0x3a, 'PMUX10', port_pmux),
  (0x3b, 'PMUX11', port_pmux),
  (0x3c, 'PMUX12', port_pmux),
  (0x3d, 'PMUX13', port_pmux),
  (0x3e, 'PMUX14', port_pmux),
  (0x3f, 'PMUX15', port_pmux),
  (0x40, 'PINCFG0', port_pincfg),
  (0x41, 'PINCFG1', port_pincfg),
  (0x42, 'PINCFG2', port_pincfg),
  (0x43, 'PINCFG3', port_pincfg),
  (0x44, 'PINCFG4', port_pincfg),
  (0x45, 'PINCFG5', port_pincfg),
  (0x46, 'PINCFG6', port_pincfg),
  (0x47, 'PINCFG7', port_pincfg),
  (0x48, 'PINCFG8', port_pincfg),
  (0x49, 'PINCFG9', port_pincfg),
  (0x4a, 'PINCFG10', port_pincfg),
  (0x4b, 'PINCFG11', port_pincfg),
  (0x4c, 'PINCFG12', port_pincfg),
  (0x4d, 'PINCFG13', port_pincfg),
  (0x4e, 'PINCFG14', port_pincfg),
  (0x4f, 'PINCFG15', port_pincfg),
  (0x50, 'PINCFG16', port_pincfg),
  (0x51, 'PINCFG17', port_pincfg),
  (0x52, 'PINCFG18', port_pincfg),
  (0x53, 'PINCFG19', port_pincfg),
  (0x54, 'PINCFG20', port_pincfg),
  (0x55, 'PINCFG21', port_pincfg),
  (0x56, 'PINCFG22', port_pincfg),
  (0x57, 'PINCFG23', port_pincfg),
  (0x58, 'PINCFG24', port_pincfg),
  (0x59, 'PINCFG25', port_pincfg),
  (0x5a, 'PINCFG26', port_pincfg),
  (0x5b, 'PINCFG27', port_pincfg),
  (0x5c, 'PINCFG28', port_pincfg),
  (0x5d, 'PINCFG29', port_pincfg),
  (0x5e, 'PINCFG30', port_pincfg),
  (0x5f, 'PINCFG31', port_pincfg),
]
