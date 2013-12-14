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
name = 'UDPHS'

#------------------------------------------------------------------------------
udphs_ept_ctrl = [
	('ept_enabl',	1),
	('auto_valid',	1),
	('',		1),
	('intdis_dma',	1),
	('nyet_dis',	1),
	('',		1),
	('datax_rx',	1),
	('mdata_rx',	1),
	('err_ovflw',	1),
	('rx_bk_rdy',	1),
	('tx_complt',	1),
	('tx_pk_rdy/err_trans',	1),
	('rx_setup/err_fl_iso',	1),
	('stall_snt/err_criso/err_nbtra', 1),
	('nak_in/err_flush',	1),
	('nak_out',	1),
	('',		2),
	('busy_bank',	1),
	('',		12),
	('shrt_pckt',	1),
]

#------------------------------------------------------------------------------
registers = [
	(0x0000, 'CTRL', [
		('dev_addr',	7),
		('faddr_en',	1),
		('en_udphs',	1),
		('detach',	1),
		('rewakeup',	1),
		('pulld_dis',	1),
		('',		20),
	]),
	(0x0004, 'FNUM', [
		('micro_frame_num',	3),
		('frame_number',	11),
		('',		17),
		('fnum_err',	1),
	]),
	(0x0010, 'IEN', [
		('',		1),
		('det_suspd',	1),
		('micro_sof',	1),
		('int_sof',	1),
		('endreset',	1),
		('wake_up',	1),
		('endofrsm',	1),
		('upstr_res',	1),
		('ept_0',	1),
		('ept_1',	1),
		('ept_2',	1),
		('ept_3',	1),
		('ept_4',	1),
		('ept_5',	1),
		('ept_6',	1),
		('',		10),
		('dma_1',	1),
		('dma_2',	1),
		('dma_3',	1),
		('dma_4',	1),
		('dma_5',	1),
		('dma_6',	1),
		('',		1),
	]),
	(0x0014, 'INTSTA', [
		('speed',	1),
		('det_suspd',	1),
		('micro_sof',	1),
		('int_sof',	1),
		('endreset',	1),
		('wake_up',	1),
		('endofrsm',	1),
		('upstr_res',	1),
		('ept_0',	1),
		('ept_1',	1),
		('ept_2',	1),
		('ept_3',	1),
		('ept_4',	1),
		('ept_5',	1),
		('ept_6',	1),
		('',		10),
		('dma_1',	1),
		('dma_2',	1),
		('dma_3',	1),
		('dma_4',	1),
		('dma_5',	1),
		('dma_6',	1),
		('',		1),
	]),
	(0x0018, 'CLRINT', [
		('',		1),
		('det_suspd',	1),
		('micro_sof',	1),
		('int_sof',	1),
		('endreset',	1),
		('wake_up',	1),
		('endofrsm',	1),
		('upstr_res',	1),
		('',		24),
	]),
	(0x001c, 'EPTRST', [
		('ept_0',	1),
		('ept_1',	1),
		('ept_2',	1),
		('ept_3',	1),
		('ept_4',	1),
		('ept_5',	1),
		('ept_6',	1),
		('',		25),
	]),
	(0x00e0, 'TST', [
		('speed_cfg',	2, [
			('NORMAL',	0),
			('HIGH_SPEED',	2),
			('FULL_SPEED',	3),
		]),
		('tst_j',	1),
		('tst_k',	1),
		('tst_pkt',	1),
		('opmode2',	1),
		('',		26),
	]),
	(0x00f0, 'IPNAME1'),	# 0x48555342 == HUSB
	(0x00f4, 'IPNAME2'),	# 0x32444556 == 2DEV
	(0x00f8, 'IPFEATURES', [
		('ept_nbr_max',	4),
		('dma_channel_nbr',	3),
		('dma_b_siz',	1),
		('dma_fifo_word_depth',	4),
		('fifo_max_size',	3),
		('bw_dpram',	1),
		('datab16_8',	1),
		('iso_ept_1',	1),
		('iso_ept_2',	1),
		('iso_ept_3',	1),
		('iso_ept_4',	1),
		('iso_ept_5',	1),
		('iso_ept_6',	1),
		('iso_ept_7',	1),
		('iso_ept_8',	1),
		('iso_ept_9',	1),
		('iso_ept_10',	1),
		('iso_ept_11',	1),
		('iso_ept_12',	1),
		('iso_ept_13',	1),
		('iso_ept_14',	1),
		('iso_ept_15',	1),
	]),
	[ 7, 0x20,
		(0x0100, 'EPTCFG', [
			('ept_size',	3, [
				('8',		0),
				('16',		1),
				('32',		2),
				('64',		3),
				('128',		4),
				('256',		5),
				('512',		6),
				('1024',	7),
			]),
			('ept_dir',	1, [
				('OUT',		0),
				('IN',		1),
			]),
			('ept_type',	2, [
				('CTRL',	0),
				('ISO',		1),
				('BULK',	2),
				('INT',		3),
			]),
			('bk_number',	2, [
				('0',		0),
				('1',		1),
				('2',		2),
				('3',		3),
			]),
			('nb_trans',	2),
			('',		21),
			('ept_mapd',	1),
		]),
		(0x0104, 'EPTCTLENB', udphs_ept_ctrl),
		(0x0108, 'EPTCTLDIS', udphs_ept_ctrl),
		(0x010c, 'EPTCTL', udphs_ept_ctrl),
		(0x0114, 'EPTSETSTA', [
			('',		5),
			('frcestall',	1),
			('',		3),
			('kill_bank',	1),
			('',		1),
			('tx_pk_rdy',	1),
			('',		20),
		]),
		(0x0118, 'EPTCLRSTA', [
			('',		5),
			('frcestall',	1),
			('togglesq',	1),
			('',		2),
			('rx_bk_rdy',	1),
			('tx_complt',	1),
			('',		1),
			('rx_setup/err_fl_iso',	1),
			('stall_snt/err_nbtra',	1),
			('nak_in/err_flush',	1),
			('nak_out',	1),
			('',		16),
		]),
		(0x011c, 'EPTSTA', [
			('',		5),
			('frcestall',	1),
			('togglesq_sta',	2, [
				('DATA0',	0),
				('DATA1',	1),
				('DATA2',	2),
				('MDATA',	3),
			]),
			('err_ovflw',		1),
			('rx_bk_rdy/kill_bank',	1),
			('tx_complt',		1),
			('tx_pk_rdy/err_trans',	1),
			('rx_setup/err_fl_iso',	1),
			('stall_snt/err_criso/err_nbtra', 1),
			('nak_in/err_flush',	1),
			('nak_out',		1),
			('current_bank/control_dir', 2),
			('busy_bank_sta',	2, [
				('1',		0),
				('2',		1),
				('3',		2),
			]),
			('byte_count',	11),
			('shrt_pckt',	1),
		]),
	],
	[ 6, 0x10,
		(0x0300, 'DMANXTDSC', [
			('nxt_dsc_add',	32),
		]),
		(0x0304, 'DMAADDRESS', [
			('buff_add',	32),
		]),
		(0x0308, 'DMACONTROL', [
			('chann_enb',	1),
			('ldnxt_dsc',	1),
			('end_tr_en',	1),
			('end_b_en',	1),
			('end_tr_it',	1),
			('end_buffit',	1),
			('desc_ld_it',	1),
			('burst_lck',	1),
			('',		8),
			('buff_length',	16),
		]),
		(0x030c, 'DMASTATUS', [
			('chann_enb',	1),
			('chann_act',	1),
			('',		2),
			('end_tr_st',	1),
			('end_bf_st',	1),
			('desc_ldst',	1),
			('',		9),
			('buff_count',	16),
		]),
	],
]

