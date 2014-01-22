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
name = 'EVSYS'

#------------------------------------------------------------------------------
evsys_ints = \
  [('ovr%d' % i, 1) for i in range(8)] + \
  [('evd%d' % i, 1) for i in range(8)] + \
  [('', 16)]

#------------------------------------------------------------------------------
registers = [
	(0x00, 'CTRL', [
		('swrst',	1),
		('',		3),
		('gclkreq',	1),
		('',		3),
	]),
	(0x04, 'CHANNEL', [
		('channel',	8),
		('swevt',	1),
		('',		7),
		('evgen',	8, [
			('NONE',	0x00),
			('RTC_CMP0',	0x01),
			('RTC_CMP1',	0x02),
			('RTC_OVF',	0x03),
			('RTC_PER0',	0x04),
			('RTC_PER1',	0x05),
			('RTC_PER2',	0x06),
			('RTC_PER3',	0x07),
			('RTC_PER4',	0x08),
			('RTC_PER5',	0x09),
			('RTC_PER6',	0x0a),
			('RTC_PER7',	0x0b),
			('EIC_EXTINT0',	0x0c),
			('EIC_EXTINT1',	0x0d),
			('EIC_EXTINT2',	0x0e),
			('EIC_EXTINT3',	0x0f),
			('EIC_EXTINT4',	0x10),
			('EIC_EXTINT5',	0x11),
			('EIC_EXTINT6',	0x12),
			('EIC_EXTINT7',	0x13),
			('EIC_EXTINT8',	0x14),
			('EIC_EXTINT9',	0x15),
			('EIC_EXTINT10', 0x16),
			('EIC_EXTINT11', 0x17),
			('EIC_EXTINT12', 0x18),
			('EIC_EXTINT13', 0x19),
			('EIC_EXTINT14', 0x1a),
			('EIC_EXTINT15', 0x1b),
			('TC0_OVF',	0x1c),
			('TC0_MC0',	0x1d),
			('TC0_MC1',	0x1e),
			('TC1_OVF',	0x1f),
			('TC1_MC0',	0x20),
			('TC1_MC1',	0x21),
			('TC2_OVF',	0x22),
			('TC2_MC0',	0x23),
			('TC2_MC1',	0x24),
			('TC3_OVF',	0x25),
			('TC3_MC0',	0x26),
			('TC3_MC1',	0x27),
			('TC4_OVF',	0x28),
			('TC4_MC0',	0x29),
			('TC4_MC1',	0x2a),
			('TC5_OVF',	0x2b),
			('TC5_MC0',	0x2c),
			('TC5_MC1',	0x2d),
			('TC6_OVF',	0x2e),
			('TC6_MC0',	0x2f),
			('TC6_MC1',	0x30),
			('TC7_OVF',	0x31),
			('TC7_MC0',	0x32),
			('TC7_MC1',	0x33),
			('ADC_RESRDY',	0x34),
			('ADC_WINMON',	0x35),
			('AC_COMP0',	0x36),
			('AC_COMP1',	0x37),
			('AC_WIN',	0x38),
			('DAC_EMPTY',	0x39),
			('PTC_EOC',	0x3a),
			('PTC_WCOMP',	0x3b),
		]),
		('path',	2, [
			('SYNC',	0),
			('RESYNC',	1),
			('ASYNC',	2),
		]),
		('edgsel',	2, [
			('NO_EVT',	0),
			('RISING',	1),
			('FALLING',	2),
			('BOTH',	3),
		]),
		('',		4),
	]),
	(0x08, 'USER', [
		('user',	8, [
			('TC0',		0x00),
			('TC1',		0x01),
			('TC2',		0x02),
			('TC3',		0x03),
			('TC4',		0x04),
			('TC5',		0x05),
			('TC6',		0x06),
			('TC7',		0x07),
			('ADC_START',	0x08),
			('ADC_SYNC',	0x09),
			('AC_COMP0',	0x0a),
			('AC_COMP1',	0x0b),
			('DAC_START',	0x0c),
			('PTC_STCONV',	0x0d),
		]),
		('channel',	8),
	]),
	(0x0c, 'CHSTATUS',
		[('usrrdy%d' % i, 1) for i in range(8)] +
		[('chbusy%d' % i, 1) for i in range(8)] + [
		('',           16),
	]),
	(0x10, 'INTENCLR', evsys_ints),
	(0x14, 'INTENSET', evsys_ints),
	(0x18, 'INTFLAG', evsys_ints),
]

