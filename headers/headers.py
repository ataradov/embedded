#!/usr/bin/python
#
# Copyright (c) 2014, Alex Taradov <taradov@gmail.com>
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
import sys
import optparse
import sam3u
import samd20

#------------------------------------------------------------------------------
db_all = [
  ('sam3u',	sam3u.db),
  ('samd20',	samd20.db),
]

#------------------------------------------------------------------------------
def error(text):
  sys.stderr.write('Error: %s\n' % text)
  sys.exit(1)

#------------------------------------------------------------------------------
def get_field_names(name):
  return name.split('/')

#------------------------------------------------------------------------------
def get_reg_parameters(options, reg):
  if len(reg) == 2:
    r_offs, r_name = reg
    r_fields, r_size = [], 32
  else:
    if isinstance(reg[2], int):
      r_offs, r_name, r_size = reg
      r_fields = []
    else:
      r_offs, r_name, r_fields = reg
      r_size = sum([field[1] for field in r_fields])

  if r_size not in [8, 16, 32]:
    error('invalid size %d for register %s' % (r_size, r_name))

  return r_name, r_offs, r_size, r_fields

#------------------------------------------------------------------------------
def gen_peripheral_register(options, name, reg):
  s = ''

  if isinstance(reg, tuple):
    r_name, r_offs, r_size, r_fields = get_reg_parameters(options, reg)

    f_offset = 0
    for field in r_fields:
      if len(field) == 3:
        f_name, f_size, f_values = field
      else:
        f_name, f_size = field
        f_values = []

      if f_name:
        f_names = get_field_names(f_name)

        for f_name_i in f_names:
          f_name_full = '_'.join([name, r_name, f_name_i.upper()])

          if f_size == 1 and len(f_values) == 0:
            s += '#define %s%s     \t(1 << %d)\n' % (options.prefix, f_name_full, f_offset)
          else:
            f_mask = (1 << f_size)-1
            s += '#define %s%s(x)  \t((x) << %d)\n' % (options.prefix, f_name_full, f_offset)
            s += '#define %s%s_m   \t0x%08x\n' % (options.prefix, f_name_full, f_mask << f_offset)
            s += '#define %s%s_v(x)\t(((x) >> %d) & 0x%x)\n' % (options.prefix, f_name_full, f_offset, f_mask)

          for v_name, v_value in f_values:
            s += '#define %s%s_%s\t0x%x\n' % (options.prefix, f_name_full, v_name, v_value)

      f_offset += f_size

    if len(r_fields) > 0 and options.bitfields:
      s += '\n'
      s += 'struct __struct_%s%s\n' % (options.prefix, '_'.join([name, r_name]))
      s += '{\n'
      for field in r_fields:
        f_name, f_size = field[0:2]
        f_names = get_field_names(f_name)
        s += '  uint%d_t\t%s\t: %d;\n' % (r_size, f_names[0], f_size)
      s += '};\n\n'

  else: # isinstance(reg, tuple)
    assert(len(reg) > 2)
    s += gen_peripheral_registers(options, name, reg[2:])

  return s

#------------------------------------------------------------------------------
def gen_peripheral_layout(options, name, registers): # TODO: Fix
  s = ''
  s += 'typedef struct %s%s_t\n' % (options.prefix.lower(), name.lower())
  s += '{\n'

  print '--- %s' % (name)

  offs = -1
  pregs = []
  for reg in registers:
    if isinstance(reg, tuple):
      r_name, r_offs, r_size, r_fields = get_reg_parameters(options, reg)
      assert r_offs < offs, '%s: register offsets are not monotonic' % name
      pregs += [(r_name, r_offs, r_size, len(r_fields) > 0)]
      offs = r_offs

    else:
      assert(len(reg) > 2)
      a_size, a_step, a_regs = reg[0], reg[1], reg[2:]

      if len(a_regs) > 1:
        for i in range(a_size):
          for i_reg in a_regs:
            i_name, i_offs, i_size, i_fields = get_reg_parameters(options, i_reg)
            n_offs = i_offs + a_step * i
            assert n_offs < offs, '%s: register offsets are not monotonic' % name
            pregs += [(i_name+str(i), n_offs, i_size, len(i_fields) > 0)]
            offs = n_offs
      else:
        print 'array!!!!'

  for p_name, p_offs, p_size, p_fields in pregs:
    print p_name, p_offs, p_size, p_fields

  s += '} %s%s_t;\n\n' % (options.prefix.lower(), name.lower())

  return s

#------------------------------------------------------------------------------
def gen_peripheral_registers(options, name, registers):
  s = ''
  for reg in registers:
    s += gen_peripheral_register(options, name, reg)
  return s

#------------------------------------------------------------------------------
def gen_register(options, per, base, reg, per_name):
  s = ''

  if isinstance(reg, tuple):
    r_name, r_offs, r_size, r_fields = get_reg_parameters(options, reg)
    r_name_full = '_'.join([per, r_name])
    r_name_generic = '_'.join([per_name, r_name])

    s += '#define %s%s  \tMMIO_REG(0x%08x, uint%d_t)\n' % \
         (options.prefix, r_name_full, base + r_offs, r_size)

    if len(r_fields) > 0 and options.bitfields:
      s += '#define %s%s_s\tMMIO_REG(0x%08x, struct __struct_%s%s)\n' % \
           (options.prefix, r_name_full, base + r_offs, options.prefix, r_name_generic)

    s += '\n'

  else:
    assert(len(reg) > 2)
    a_size, a_step, a_regs = reg[0], reg[1], reg[2:]

    for a_reg in a_regs:
      r_name, r_offs, r_size, r_fields = get_reg_parameters(options, a_reg)
      r_name_full = '_'.join([per, r_name])
      r_name_generic = '_'.join([per_name, r_name])

      s += '#define %s%s(i)  \tMMIO_REG(0x%08x + (i)*%d, uint%d_t)\n' % \
           (options.prefix, r_name_full, base + r_offs, a_step, r_size)

      if len(r_fields) > 0 and options.bitfields:
        s += '#define %s%s_s(i)\tMMIO_REG(0x%08x + (i)*%d, struct __struct_%s%s)\n' % \
             (options.prefix, r_name_full, base + r_offs, a_step, options.prefix, r_name_generic)

      s += '\n'

  return s

#------------------------------------------------------------------------------
def gen_peripherals(options, peripherals):
  s = '// Peripherals definitions\n'

  for per in peripherals:
    s += '\n'
    s += '// %s\n' % per.name
    s += gen_peripheral_registers(options, per.name, per.registers)
    if options.io:
      s += gen_peripheral_layout(options, per.name, per.registers)

  return s

#------------------------------------------------------------------------------
def gen_registers(options, registers):
  s = '// Registers definitions\n'

  for name, base, per in registers:
    s += '\n'
    s += '// %s\n\n' % name
    s += '#define %s%s_BASE_ADDR\t0x%08x\n\n' % (options.prefix, name, base)
    if options.io:
      s += '#define %s%s\t\t((volatile struct %s%s_t *)0x%08x)\n\n' % \
           (options.prefix, name, options.prefix.lower(), name.lower(), base)

    for reg in per.registers:
      s += gen_register(options, name, base, reg, per.name)

  return s

#------------------------------------------------------------------------------
def gen_header(options, db):
  series, name, peripherals, registers = db

  options.prefix = series+'_' if options.prefix else ''

  s  = '// This file was generated automatically. Visit https://github.com/ataradov/embedded to get the source.\n'
  s += '#ifndef _%s%s_H_\n' % (options.prefix, name)
  s += '#define _%s%s_H_\n' % (options.prefix, name)
  s += '#include <stdint.h>\n'
  s += '#define MMIO_REG(addr, type) (*(volatile type *)(addr))\n\n'
  s += gen_peripherals(options, peripherals)
  s += gen_registers(options, registers)
  s += '\n'
  s += '#endif // _%s%s_H_\n\n' % (options.prefix, name)

  return s

#------------------------------------------------------------------------------
def main():
  parser = optparse.OptionParser(usage='usage: %prog [options]')
  parser.add_option('-t', '--target', dest='target', help='target MCU', default=None, metavar='TARGET')
  parser.add_option('-p', '--enable-prefix', dest='prefix', help='prefix all definitions with a series name', default=False, action='store_true')
  parser.add_option('-b', '--disable-bitfields', dest='bitfields', help='disable bitfield structures', default=True, action='store_false')
  parser.add_option('-i', '--disable-io', dest='io', help='disable memory mapped IO structures', default=False, action='store_false') # TODO: always disabled for now
  parser.add_option('-l', '--list', dest='list', help='list all supported MCUs', default=False, action='store_true')
  parser.add_option('-o', '--output', dest='output', help='output file', default=None, metavar='OUTPUT')
  (options, args) = parser.parse_args()

  if options.list:
    print 'Supported MCUs:'
    for name, db in db_all:
      print '  %s' % name
    return

  if options.target is None:
    error('no target MCU specified')

  for name, db in db_all:
    if name == options.target.lower():
      target_db = db
      break
  else:
    error('unknown target MCU - %s' % options.target)

  res = gen_header(options, target_db)

  if options.output is not None:
    try:
      f = open(options.output, 'w')
      f.write(res)
      f.close()
    except IOError, inst:
      error(str(inst))
  else:
    print res

#------------------------------------------------------------------------------
main()
