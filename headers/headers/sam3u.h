// This file was generated automatically. Visit https://github.com/ataradov/embedded to get the source.
#ifndef _SAM3U_H_
#define _SAM3U_H_
#include <stdint.h>
#define MMIO_REG(addr, type) (*(volatile type *)(addr))

// Peripherals definitions

// PDC
#define PDC_PTCR_RXTEN     	(1 << 0)
#define PDC_PTCR_RXTDIS     	(1 << 1)
#define PDC_PTCR_TXTEN     	(1 << 8)
#define PDC_PTCR_TXTDIS     	(1 << 9)

struct __struct_PDC_PTCR
{
  uint32_t	rxten	: 1;
  uint32_t	rxtdis	: 1;
  uint32_t		: 6;
  uint32_t	txten	: 1;
  uint32_t	txtdis	: 1;
  uint32_t		: 22;
};

#define PDC_PTSR_RXTEN     	(1 << 0)
#define PDC_PTSR_TXTEN     	(1 << 8)

struct __struct_PDC_PTSR
{
  uint32_t	rxten	: 1;
  uint32_t		: 7;
  uint32_t	txten	: 1;
  uint32_t		: 23;
};


// HSMCI
#define HSMCI_CR_MCIEN     	(1 << 0)
#define HSMCI_CR_MCIDIS     	(1 << 1)
#define HSMCI_CR_PWSEN     	(1 << 2)
#define HSMCI_CR_PWSDIS     	(1 << 3)
#define HSMCI_CR_SWRST     	(1 << 7)

struct __struct_HSMCI_CR
{
  uint32_t	mcien	: 1;
  uint32_t	mcidis	: 1;
  uint32_t	pwsen	: 1;
  uint32_t	pwsdis	: 1;
  uint32_t		: 3;
  uint32_t	swrst	: 1;
  uint32_t		: 24;
};

#define HSMCI_MR_CLKDIV(x)  	((x) << 0)
#define HSMCI_MR_CLKDIV_m   	0x000000ff
#define HSMCI_MR_CLKDIV_v(x)	(((x) >> 0) & 0xff)
#define HSMCI_MR_PWSDIV(x)  	((x) << 8)
#define HSMCI_MR_PWSDIV_m   	0x00000700
#define HSMCI_MR_PWSDIV_v(x)	(((x) >> 8) & 0x7)
#define HSMCI_MR_RDPROOF     	(1 << 11)
#define HSMCI_MR_WRPROOF     	(1 << 12)
#define HSMCI_MR_FBYTE     	(1 << 13)
#define HSMCI_MR_PADV     	(1 << 14)

struct __struct_HSMCI_MR
{
  uint32_t	clkdiv	: 8;
  uint32_t	pwsdiv	: 3;
  uint32_t	rdproof	: 1;
  uint32_t	wrproof	: 1;
  uint32_t	fbyte	: 1;
  uint32_t	padv	: 1;
  uint32_t		: 17;
};

#define HSMCI_DTOR_DTOCYC(x)  	((x) << 0)
#define HSMCI_DTOR_DTOCYC_m   	0x0000000f
#define HSMCI_DTOR_DTOCYC_v(x)	(((x) >> 0) & 0xf)
#define HSMCI_DTOR_DTOMUL(x)  	((x) << 4)
#define HSMCI_DTOR_DTOMUL_m   	0x00000070
#define HSMCI_DTOR_DTOMUL_v(x)	(((x) >> 4) & 0x7)
#define HSMCI_DTOR_DTOMUL_1	0x0
#define HSMCI_DTOR_DTOMUL_16	0x1
#define HSMCI_DTOR_DTOMUL_128	0x2
#define HSMCI_DTOR_DTOMUL_256	0x3
#define HSMCI_DTOR_DTOMUL_1024	0x4
#define HSMCI_DTOR_DTOMUL_4096	0x5
#define HSMCI_DTOR_DTOMUL_65536	0x6
#define HSMCI_DTOR_DTOMUL_1048576	0x7

struct __struct_HSMCI_DTOR
{
  uint32_t	dtocyc	: 4;
  uint32_t	dtomul	: 3;
  uint32_t		: 25;
};

#define HSMCI_SDCR_SDCSEL(x)  	((x) << 0)
#define HSMCI_SDCR_SDCSEL_m   	0x00000003
#define HSMCI_SDCR_SDCSEL_v(x)	(((x) >> 0) & 0x3)
#define HSMCI_SDCR_SDCSEL_SLOTA	0x0
#define HSMCI_SDCR_SDCSEL_SLOTB	0x1
#define HSMCI_SDCR_SDCSEL_SLOTC	0x2
#define HSMCI_SDCR_SDCSEL_SLOTD	0x3
#define HSMCI_SDCR_SDCBUS(x)  	((x) << 6)
#define HSMCI_SDCR_SDCBUS_m   	0x000000c0
#define HSMCI_SDCR_SDCBUS_v(x)	(((x) >> 6) & 0x3)
#define HSMCI_SDCR_SDCBUS_1	0x0
#define HSMCI_SDCR_SDCBUS_4	0x2
#define HSMCI_SDCR_SDCBUS_8	0x3

struct __struct_HSMCI_SDCR
{
  uint32_t	sdcsel	: 2;
  uint32_t		: 4;
  uint32_t	sdcbus	: 2;
  uint32_t		: 24;
};

#define HSMCI_CMDR_CMDNB(x)  	((x) << 0)
#define HSMCI_CMDR_CMDNB_m   	0x0000003f
#define HSMCI_CMDR_CMDNB_v(x)	(((x) >> 0) & 0x3f)
#define HSMCI_CMDR_RSPTYP(x)  	((x) << 6)
#define HSMCI_CMDR_RSPTYP_m   	0x000000c0
#define HSMCI_CMDR_RSPTYP_v(x)	(((x) >> 6) & 0x3)
#define HSMCI_CMDR_RSPTYP_NORESP	0x0
#define HSMCI_CMDR_RSPTYP_48_BIT	0x1
#define HSMCI_CMDR_RSPTYP_136_BIT	0x2
#define HSMCI_CMDR_RSPTYP_R1B	0x3
#define HSMCI_CMDR_SPCMD(x)  	((x) << 8)
#define HSMCI_CMDR_SPCMD_m   	0x00000700
#define HSMCI_CMDR_SPCMD_v(x)	(((x) >> 8) & 0x7)
#define HSMCI_CMDR_SPCMD_STD	0x0
#define HSMCI_CMDR_SPCMD_INIT	0x1
#define HSMCI_CMDR_SPCMD_SYNC	0x2
#define HSMCI_CMDR_SPCMD_CE_ATA	0x3
#define HSMCI_CMDR_SPCMD_IT_CMD	0x4
#define HSMCI_CMDR_SPCMD_IT_RESP	0x5
#define HSMCI_CMDR_SPCMD_BOR	0x6
#define HSMCI_CMDR_SPCMD_EBO	0x7
#define HSMCI_CMDR_OPDCMD     	(1 << 11)
#define HSMCI_CMDR_OPDCMD_PUSHPULL	0x0
#define HSMCI_CMDR_OPDCMD_OPENDRAIN	0x1
#define HSMCI_CMDR_MAXLAT     	(1 << 12)
#define HSMCI_CMDR_MAXLAT_5	0x0
#define HSMCI_CMDR_MAXLAT_64	0x1
#define HSMCI_CMDR_TRCMD(x)  	((x) << 16)
#define HSMCI_CMDR_TRCMD_m   	0x00030000
#define HSMCI_CMDR_TRCMD_v(x)	(((x) >> 16) & 0x3)
#define HSMCI_CMDR_TRCMD_NO_DATA	0x0
#define HSMCI_CMDR_TRCMD_START_DATA	0x1
#define HSMCI_CMDR_TRCMD_STOP_DATA	0x2
#define HSMCI_CMDR_TRDIR     	(1 << 18)
#define HSMCI_CMDR_TRDIR_WRITE	0x0
#define HSMCI_CMDR_TRDIR_READ	0x1
#define HSMCI_CMDR_TRTYP(x)  	((x) << 19)
#define HSMCI_CMDR_TRTYP_m   	0x00380000
#define HSMCI_CMDR_TRTYP_v(x)	(((x) >> 19) & 0x7)
#define HSMCI_CMDR_TRTYP_SINGLE	0x0
#define HSMCI_CMDR_TRTYP_MULTIPLE	0x1
#define HSMCI_CMDR_TRTYP_STREAM	0x2
#define HSMCI_CMDR_TRTYP_BYTE	0x4
#define HSMCI_CMDR_TRTYP_BLOCK	0x5
#define HSMCI_CMDR_IOSPCMD(x)  	((x) << 24)
#define HSMCI_CMDR_IOSPCMD_m   	0x03000000
#define HSMCI_CMDR_IOSPCMD_v(x)	(((x) >> 24) & 0x3)
#define HSMCI_CMDR_IOSPCMD_STD	0x0
#define HSMCI_CMDR_IOSPCMD_SUSPEND	0x1
#define HSMCI_CMDR_IOSPCMD_RESUME	0x2
#define HSMCI_CMDR_ATACS     	(1 << 26)
#define HSMCI_CMDR_ATACS_NORMAL	0x0
#define HSMCI_CMDR_ATACS_COMPLETION	0x1
#define HSMCI_CMDR_BOOT_ACK     	(1 << 27)

struct __struct_HSMCI_CMDR
{
  uint32_t	cmdnb	: 6;
  uint32_t	rsptyp	: 2;
  uint32_t	spcmd	: 3;
  uint32_t	opdcmd	: 1;
  uint32_t	maxlat	: 1;
  uint32_t		: 3;
  uint32_t	trcmd	: 2;
  uint32_t	trdir	: 1;
  uint32_t	trtyp	: 3;
  uint32_t		: 2;
  uint32_t	iospcmd	: 2;
  uint32_t	atacs	: 1;
  uint32_t	boot_ack	: 1;
  uint32_t		: 4;
};

#define HSMCI_BLKR_BCNT(x)  	((x) << 0)
#define HSMCI_BLKR_BCNT_m   	0x0000ffff
#define HSMCI_BLKR_BCNT_v(x)	(((x) >> 0) & 0xffff)
#define HSMCI_BLKR_BCNT_MULTIPLE	0x0
#define HSMCI_BLKR_BCNT_BYTE	0x4
#define HSMCI_BLKR_BCNT_BLOCK	0x5
#define HSMCI_BLKR_BLKLEN(x)  	((x) << 16)
#define HSMCI_BLKR_BLKLEN_m   	0xffff0000
#define HSMCI_BLKR_BLKLEN_v(x)	(((x) >> 16) & 0xffff)

struct __struct_HSMCI_BLKR
{
  uint32_t	bcnt	: 16;
  uint32_t	blklen	: 16;
};

#define HSMCI_CSTOR_CSTOCYC(x)  	((x) << 0)
#define HSMCI_CSTOR_CSTOCYC_m   	0x0000000f
#define HSMCI_CSTOR_CSTOCYC_v(x)	(((x) >> 0) & 0xf)
#define HSMCI_CSTOR_CSTOMUL(x)  	((x) << 4)
#define HSMCI_CSTOR_CSTOMUL_m   	0x00000070
#define HSMCI_CSTOR_CSTOMUL_v(x)	(((x) >> 4) & 0x7)
#define HSMCI_CSTOR_CSTOMUL_1	0x0
#define HSMCI_CSTOR_CSTOMUL_16	0x1
#define HSMCI_CSTOR_CSTOMUL_128	0x2
#define HSMCI_CSTOR_CSTOMUL_256	0x3
#define HSMCI_CSTOR_CSTOMUL_1024	0x4
#define HSMCI_CSTOR_CSTOMUL_4096	0x5
#define HSMCI_CSTOR_CSTOMUL_65536	0x6
#define HSMCI_CSTOR_CSTOMUL_1048576	0x7

struct __struct_HSMCI_CSTOR
{
  uint32_t	cstocyc	: 4;
  uint32_t	cstomul	: 3;
  uint32_t		: 25;
};

#define HSMCI_SR_CMDRDY     	(1 << 0)
#define HSMCI_SR_RXRDY     	(1 << 1)
#define HSMCI_SR_TXRDY     	(1 << 2)
#define HSMCI_SR_BLKE     	(1 << 3)
#define HSMCI_SR_DTIP     	(1 << 4)
#define HSMCI_SR_NOTBUSY     	(1 << 5)
#define HSMCI_SR_MCI_SDIOIRQA     	(1 << 8)
#define HSMCI_SR_SDIOWAIT     	(1 << 12)
#define HSMCI_SR_CSRCV     	(1 << 13)
#define HSMCI_SR_RINDE     	(1 << 16)
#define HSMCI_SR_RDIRE     	(1 << 17)
#define HSMCI_SR_RCRCE     	(1 << 18)
#define HSMCI_SR_RENDE     	(1 << 19)
#define HSMCI_SR_RTOE     	(1 << 20)
#define HSMCI_SR_DCRCE     	(1 << 21)
#define HSMCI_SR_DTOE     	(1 << 22)
#define HSMCI_SR_CSTOE     	(1 << 23)
#define HSMCI_SR_BLKOVRE     	(1 << 24)
#define HSMCI_SR_DMADONE     	(1 << 25)
#define HSMCI_SR_FIFOEMPTY     	(1 << 26)
#define HSMCI_SR_XFRDONE     	(1 << 27)
#define HSMCI_SR_ACKRCV     	(1 << 28)
#define HSMCI_SR_ACKRCVE     	(1 << 29)
#define HSMCI_SR_OVRE     	(1 << 30)
#define HSMCI_SR_UNRE     	(1 << 31)

struct __struct_HSMCI_SR
{
  uint32_t	cmdrdy	: 1;
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	blke	: 1;
  uint32_t	dtip	: 1;
  uint32_t	notbusy	: 1;
  uint32_t		: 2;
  uint32_t	mci_sdioirqa	: 1;
  uint32_t		: 3;
  uint32_t	sdiowait	: 1;
  uint32_t	csrcv	: 1;
  uint32_t		: 2;
  uint32_t	rinde	: 1;
  uint32_t	rdire	: 1;
  uint32_t	rcrce	: 1;
  uint32_t	rende	: 1;
  uint32_t	rtoe	: 1;
  uint32_t	dcrce	: 1;
  uint32_t	dtoe	: 1;
  uint32_t	cstoe	: 1;
  uint32_t	blkovre	: 1;
  uint32_t	dmadone	: 1;
  uint32_t	fifoempty	: 1;
  uint32_t	xfrdone	: 1;
  uint32_t	ackrcv	: 1;
  uint32_t	ackrcve	: 1;
  uint32_t	ovre	: 1;
  uint32_t	unre	: 1;
};

#define HSMCI_IER_CMDRDY     	(1 << 0)
#define HSMCI_IER_RXRDY     	(1 << 1)
#define HSMCI_IER_TXRDY     	(1 << 2)
#define HSMCI_IER_BLKE     	(1 << 3)
#define HSMCI_IER_DTIP     	(1 << 4)
#define HSMCI_IER_NOTBUSY     	(1 << 5)
#define HSMCI_IER_MCI_SDIOIRQA     	(1 << 8)
#define HSMCI_IER_SDIOWAIT     	(1 << 12)
#define HSMCI_IER_CSRCV     	(1 << 13)
#define HSMCI_IER_RINDE     	(1 << 16)
#define HSMCI_IER_RDIRE     	(1 << 17)
#define HSMCI_IER_RCRCE     	(1 << 18)
#define HSMCI_IER_RENDE     	(1 << 19)
#define HSMCI_IER_RTOE     	(1 << 20)
#define HSMCI_IER_DCRCE     	(1 << 21)
#define HSMCI_IER_DTOE     	(1 << 22)
#define HSMCI_IER_CSTOE     	(1 << 23)
#define HSMCI_IER_BLKOVRE     	(1 << 24)
#define HSMCI_IER_DMADONE     	(1 << 25)
#define HSMCI_IER_FIFOEMPTY     	(1 << 26)
#define HSMCI_IER_XFRDONE     	(1 << 27)
#define HSMCI_IER_ACKRCV     	(1 << 28)
#define HSMCI_IER_ACKRCVE     	(1 << 29)
#define HSMCI_IER_OVRE     	(1 << 30)
#define HSMCI_IER_UNRE     	(1 << 31)

struct __struct_HSMCI_IER
{
  uint32_t	cmdrdy	: 1;
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	blke	: 1;
  uint32_t	dtip	: 1;
  uint32_t	notbusy	: 1;
  uint32_t		: 2;
  uint32_t	mci_sdioirqa	: 1;
  uint32_t		: 3;
  uint32_t	sdiowait	: 1;
  uint32_t	csrcv	: 1;
  uint32_t		: 2;
  uint32_t	rinde	: 1;
  uint32_t	rdire	: 1;
  uint32_t	rcrce	: 1;
  uint32_t	rende	: 1;
  uint32_t	rtoe	: 1;
  uint32_t	dcrce	: 1;
  uint32_t	dtoe	: 1;
  uint32_t	cstoe	: 1;
  uint32_t	blkovre	: 1;
  uint32_t	dmadone	: 1;
  uint32_t	fifoempty	: 1;
  uint32_t	xfrdone	: 1;
  uint32_t	ackrcv	: 1;
  uint32_t	ackrcve	: 1;
  uint32_t	ovre	: 1;
  uint32_t	unre	: 1;
};

#define HSMCI_IDR_CMDRDY     	(1 << 0)
#define HSMCI_IDR_RXRDY     	(1 << 1)
#define HSMCI_IDR_TXRDY     	(1 << 2)
#define HSMCI_IDR_BLKE     	(1 << 3)
#define HSMCI_IDR_DTIP     	(1 << 4)
#define HSMCI_IDR_NOTBUSY     	(1 << 5)
#define HSMCI_IDR_MCI_SDIOIRQA     	(1 << 8)
#define HSMCI_IDR_SDIOWAIT     	(1 << 12)
#define HSMCI_IDR_CSRCV     	(1 << 13)
#define HSMCI_IDR_RINDE     	(1 << 16)
#define HSMCI_IDR_RDIRE     	(1 << 17)
#define HSMCI_IDR_RCRCE     	(1 << 18)
#define HSMCI_IDR_RENDE     	(1 << 19)
#define HSMCI_IDR_RTOE     	(1 << 20)
#define HSMCI_IDR_DCRCE     	(1 << 21)
#define HSMCI_IDR_DTOE     	(1 << 22)
#define HSMCI_IDR_CSTOE     	(1 << 23)
#define HSMCI_IDR_BLKOVRE     	(1 << 24)
#define HSMCI_IDR_DMADONE     	(1 << 25)
#define HSMCI_IDR_FIFOEMPTY     	(1 << 26)
#define HSMCI_IDR_XFRDONE     	(1 << 27)
#define HSMCI_IDR_ACKRCV     	(1 << 28)
#define HSMCI_IDR_ACKRCVE     	(1 << 29)
#define HSMCI_IDR_OVRE     	(1 << 30)
#define HSMCI_IDR_UNRE     	(1 << 31)

struct __struct_HSMCI_IDR
{
  uint32_t	cmdrdy	: 1;
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	blke	: 1;
  uint32_t	dtip	: 1;
  uint32_t	notbusy	: 1;
  uint32_t		: 2;
  uint32_t	mci_sdioirqa	: 1;
  uint32_t		: 3;
  uint32_t	sdiowait	: 1;
  uint32_t	csrcv	: 1;
  uint32_t		: 2;
  uint32_t	rinde	: 1;
  uint32_t	rdire	: 1;
  uint32_t	rcrce	: 1;
  uint32_t	rende	: 1;
  uint32_t	rtoe	: 1;
  uint32_t	dcrce	: 1;
  uint32_t	dtoe	: 1;
  uint32_t	cstoe	: 1;
  uint32_t	blkovre	: 1;
  uint32_t	dmadone	: 1;
  uint32_t	fifoempty	: 1;
  uint32_t	xfrdone	: 1;
  uint32_t	ackrcv	: 1;
  uint32_t	ackrcve	: 1;
  uint32_t	ovre	: 1;
  uint32_t	unre	: 1;
};

#define HSMCI_IMR_CMDRDY     	(1 << 0)
#define HSMCI_IMR_RXRDY     	(1 << 1)
#define HSMCI_IMR_TXRDY     	(1 << 2)
#define HSMCI_IMR_BLKE     	(1 << 3)
#define HSMCI_IMR_DTIP     	(1 << 4)
#define HSMCI_IMR_NOTBUSY     	(1 << 5)
#define HSMCI_IMR_MCI_SDIOIRQA     	(1 << 8)
#define HSMCI_IMR_SDIOWAIT     	(1 << 12)
#define HSMCI_IMR_CSRCV     	(1 << 13)
#define HSMCI_IMR_RINDE     	(1 << 16)
#define HSMCI_IMR_RDIRE     	(1 << 17)
#define HSMCI_IMR_RCRCE     	(1 << 18)
#define HSMCI_IMR_RENDE     	(1 << 19)
#define HSMCI_IMR_RTOE     	(1 << 20)
#define HSMCI_IMR_DCRCE     	(1 << 21)
#define HSMCI_IMR_DTOE     	(1 << 22)
#define HSMCI_IMR_CSTOE     	(1 << 23)
#define HSMCI_IMR_BLKOVRE     	(1 << 24)
#define HSMCI_IMR_DMADONE     	(1 << 25)
#define HSMCI_IMR_FIFOEMPTY     	(1 << 26)
#define HSMCI_IMR_XFRDONE     	(1 << 27)
#define HSMCI_IMR_ACKRCV     	(1 << 28)
#define HSMCI_IMR_ACKRCVE     	(1 << 29)
#define HSMCI_IMR_OVRE     	(1 << 30)
#define HSMCI_IMR_UNRE     	(1 << 31)

struct __struct_HSMCI_IMR
{
  uint32_t	cmdrdy	: 1;
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	blke	: 1;
  uint32_t	dtip	: 1;
  uint32_t	notbusy	: 1;
  uint32_t		: 2;
  uint32_t	mci_sdioirqa	: 1;
  uint32_t		: 3;
  uint32_t	sdiowait	: 1;
  uint32_t	csrcv	: 1;
  uint32_t		: 2;
  uint32_t	rinde	: 1;
  uint32_t	rdire	: 1;
  uint32_t	rcrce	: 1;
  uint32_t	rende	: 1;
  uint32_t	rtoe	: 1;
  uint32_t	dcrce	: 1;
  uint32_t	dtoe	: 1;
  uint32_t	cstoe	: 1;
  uint32_t	blkovre	: 1;
  uint32_t	dmadone	: 1;
  uint32_t	fifoempty	: 1;
  uint32_t	xfrdone	: 1;
  uint32_t	ackrcv	: 1;
  uint32_t	ackrcve	: 1;
  uint32_t	ovre	: 1;
  uint32_t	unre	: 1;
};

#define HSMCI_DMA_OFFSET(x)  	((x) << 0)
#define HSMCI_DMA_OFFSET_m   	0x00000003
#define HSMCI_DMA_OFFSET_v(x)	(((x) >> 0) & 0x3)
#define HSMCI_DMA_CHKSIZE     	(1 << 4)
#define HSMCI_DMA_CHKSIZE_1	0x0
#define HSMCI_DMA_CHKSIZE_4	0x1
#define HSMCI_DMA_DMAEN     	(1 << 8)
#define HSMCI_DMA_ROPT     	(1 << 12)

struct __struct_HSMCI_DMA
{
  uint32_t	offset	: 2;
  uint32_t		: 2;
  uint32_t	chksize	: 1;
  uint32_t		: 3;
  uint32_t	dmaen	: 1;
  uint32_t		: 3;
  uint32_t	ropt	: 1;
  uint32_t		: 19;
};

#define HSMCI_CFG_FIFOMODE     	(1 << 0)
#define HSMCI_CFG_FERRCTRL     	(1 << 4)
#define HSMCI_CFG_HSMODE     	(1 << 8)
#define HSMCI_CFG_LSYNC     	(1 << 12)

struct __struct_HSMCI_CFG
{
  uint32_t	fifomode	: 1;
  uint32_t		: 3;
  uint32_t	ferrctrl	: 1;
  uint32_t		: 3;
  uint32_t	hsmode	: 1;
  uint32_t		: 3;
  uint32_t	lsync	: 1;
  uint32_t		: 19;
};

#define HSMCI_WPMR_WPEN     	(1 << 0)
#define HSMCI_WPMR_WPKEY(x)  	((x) << 8)
#define HSMCI_WPMR_WPKEY_m   	0xffffff00
#define HSMCI_WPMR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define HSMCI_WPMR_WPKEY_KEY	0x4d4349

struct __struct_HSMCI_WPMR
{
  uint32_t	wpen	: 1;
  uint32_t		: 7;
  uint32_t	wpkey	: 24;
};

#define HSMCI_WPSR_WP_VS(x)  	((x) << 0)
#define HSMCI_WPSR_WP_VS_m   	0x0000000f
#define HSMCI_WPSR_WP_VS_v(x)	(((x) >> 0) & 0xf)
#define HSMCI_WPSR_WP_VS_NONE	0x0
#define HSMCI_WPSR_WP_VS_WRITE	0x1
#define HSMCI_WPSR_WP_VS_RESET	0x2
#define HSMCI_WPSR_WP_VS_BOTH	0x3
#define HSMCI_WPSR_WP_VSRC(x)  	((x) << 8)
#define HSMCI_WPSR_WP_VSRC_m   	0x00ffff00
#define HSMCI_WPSR_WP_VSRC_v(x)	(((x) >> 8) & 0xffff)

struct __struct_HSMCI_WPSR
{
  uint32_t	wp_vs	: 4;
  uint32_t		: 4;
  uint32_t	wp_vsrc	: 16;
  uint32_t		: 8;
};


// SSC
#define SSC_CR_RXEN     	(1 << 0)
#define SSC_CR_RXDIS     	(1 << 1)
#define SSC_CR_TXEN     	(1 << 8)
#define SSC_CR_TXDIS     	(1 << 9)
#define SSC_CR_SWRST     	(1 << 15)

struct __struct_SSC_CR
{
  uint32_t	rxen	: 1;
  uint32_t	rxdis	: 1;
  uint32_t		: 6;
  uint32_t	txen	: 1;
  uint32_t	txdis	: 1;
  uint32_t		: 5;
  uint32_t	swrst	: 1;
  uint32_t		: 16;
};

#define SSC_CMR_DIV(x)  	((x) << 0)
#define SSC_CMR_DIV_m   	0x00000fff
#define SSC_CMR_DIV_v(x)	(((x) >> 0) & 0xfff)

struct __struct_SSC_CMR
{
  uint32_t	div	: 12;
  uint32_t		: 20;
};

#define SSC_RCMR_CKS(x)  	((x) << 0)
#define SSC_RCMR_CKS_m   	0x00000003
#define SSC_RCMR_CKS_v(x)	(((x) >> 0) & 0x3)
#define SSC_RCMR_CKS_MCK	0x0
#define SSC_RCMR_CKS_TK	0x1
#define SSC_RCMR_CKS_RK	0x2
#define SSC_RCMR_CKO(x)  	((x) << 2)
#define SSC_RCMR_CKO_m   	0x0000001c
#define SSC_RCMR_CKO_v(x)	(((x) >> 2) & 0x7)
#define SSC_RCMR_CKO_NONE	0x0
#define SSC_RCMR_CKO_CONTINUOUS	0x1
#define SSC_RCMR_CKO_TRANSFER	0x2
#define SSC_RCMR_CKI     	(1 << 5)
#define SSC_RCMR_CKG(x)  	((x) << 6)
#define SSC_RCMR_CKG_m   	0x000000c0
#define SSC_RCMR_CKG_v(x)	(((x) >> 6) & 0x3)
#define SSC_RCMR_CKG_NONE	0x0
#define SSC_RCMR_CKG_CONTINUOUS	0x1
#define SSC_RCMR_CKG_TRANSFER	0x2
#define SSC_RCMR_START(x)  	((x) << 8)
#define SSC_RCMR_START_m   	0x00000f00
#define SSC_RCMR_START_v(x)	(((x) >> 8) & 0xf)
#define SSC_RCMR_START_CONTINUOUS	0x0
#define SSC_RCMR_START_TRANSMIT	0x1
#define SSC_RCMR_START_RF_LOW	0x2
#define SSC_RCMR_START_RF_HIGH	0x3
#define SSC_RCMR_START_RF_FALLING	0x4
#define SSC_RCMR_START_RF_RISING	0x5
#define SSC_RCMR_START_RF_LEVEL	0x6
#define SSC_RCMR_START_RF_EDGE	0x7
#define SSC_RCMR_START_CMP_0	0x8
#define SSC_RCMR_STOP     	(1 << 12)
#define SSC_RCMR_STTDLY(x)  	((x) << 16)
#define SSC_RCMR_STTDLY_m   	0x00ff0000
#define SSC_RCMR_STTDLY_v(x)	(((x) >> 16) & 0xff)
#define SSC_RCMR_PERIOD(x)  	((x) << 24)
#define SSC_RCMR_PERIOD_m   	0xff000000
#define SSC_RCMR_PERIOD_v(x)	(((x) >> 24) & 0xff)

struct __struct_SSC_RCMR
{
  uint32_t	cks	: 2;
  uint32_t	cko	: 3;
  uint32_t	cki	: 1;
  uint32_t	ckg	: 2;
  uint32_t	start	: 4;
  uint32_t	stop	: 1;
  uint32_t		: 3;
  uint32_t	sttdly	: 8;
  uint32_t	period	: 8;
};

#define SSC_RFMR_DATLEN(x)  	((x) << 0)
#define SSC_RFMR_DATLEN_m   	0x0000001f
#define SSC_RFMR_DATLEN_v(x)	(((x) >> 0) & 0x1f)
#define SSC_RFMR_LOOP     	(1 << 5)
#define SSC_RFMR_MSBF     	(1 << 7)
#define SSC_RFMR_DATNB(x)  	((x) << 8)
#define SSC_RFMR_DATNB_m   	0x00000f00
#define SSC_RFMR_DATNB_v(x)	(((x) >> 8) & 0xf)
#define SSC_RFMR_FSLEN(x)  	((x) << 16)
#define SSC_RFMR_FSLEN_m   	0x000f0000
#define SSC_RFMR_FSLEN_v(x)	(((x) >> 16) & 0xf)
#define SSC_RFMR_FSOS(x)  	((x) << 20)
#define SSC_RFMR_FSOS_m   	0x00700000
#define SSC_RFMR_FSOS_v(x)	(((x) >> 20) & 0x7)
#define SSC_RFMR_FSOS_NONE	0x0
#define SSC_RFMR_FSOS_NEGATIVE	0x1
#define SSC_RFMR_FSOS_POSITIVE	0x2
#define SSC_RFMR_FSOS_LOW	0x3
#define SSC_RFMR_FSOS_HIGH	0x4
#define SSC_RFMR_FSOS_TOGGLING	0x5
#define SSC_RFMR_FSEDGE     	(1 << 24)
#define SSC_RFMR_FSEDGE_POSITIVE	0x0
#define SSC_RFMR_FSEDGE_NEGATIVE	0x1
#define SSC_RFMR_FSLEN_EXT(x)  	((x) << 28)
#define SSC_RFMR_FSLEN_EXT_m   	0xf0000000
#define SSC_RFMR_FSLEN_EXT_v(x)	(((x) >> 28) & 0xf)

struct __struct_SSC_RFMR
{
  uint32_t	datlen	: 5;
  uint32_t	loop	: 1;
  uint32_t		: 1;
  uint32_t	msbf	: 1;
  uint32_t	datnb	: 4;
  uint32_t		: 4;
  uint32_t	fslen	: 4;
  uint32_t	fsos	: 3;
  uint32_t		: 1;
  uint32_t	fsedge	: 1;
  uint32_t		: 3;
  uint32_t	fslen_ext	: 4;
};

#define SSC_TCMR_CKS(x)  	((x) << 0)
#define SSC_TCMR_CKS_m   	0x00000003
#define SSC_TCMR_CKS_v(x)	(((x) >> 0) & 0x3)
#define SSC_TCMR_CKS_MCK	0x0
#define SSC_TCMR_CKS_TK	0x1
#define SSC_TCMR_CKS_RK	0x2
#define SSC_TCMR_CKO(x)  	((x) << 2)
#define SSC_TCMR_CKO_m   	0x0000001c
#define SSC_TCMR_CKO_v(x)	(((x) >> 2) & 0x7)
#define SSC_TCMR_CKO_NONE	0x0
#define SSC_TCMR_CKO_CONTINUOUS	0x1
#define SSC_TCMR_CKO_TRANSFER	0x2
#define SSC_TCMR_CKI     	(1 << 5)
#define SSC_TCMR_CKG(x)  	((x) << 6)
#define SSC_TCMR_CKG_m   	0x000000c0
#define SSC_TCMR_CKG_v(x)	(((x) >> 6) & 0x3)
#define SSC_TCMR_CKG_NONE	0x0
#define SSC_TCMR_CKG_CONTINUOUS	0x1
#define SSC_TCMR_CKG_TRANSFER	0x2
#define SSC_TCMR_START(x)  	((x) << 8)
#define SSC_TCMR_START_m   	0x00000f00
#define SSC_TCMR_START_v(x)	(((x) >> 8) & 0xf)
#define SSC_TCMR_START_CONTINUOUS	0x0
#define SSC_TCMR_START_TRANSMIT	0x1
#define SSC_TCMR_START_RF_LOW	0x2
#define SSC_TCMR_START_RF_HIGH	0x3
#define SSC_TCMR_START_RF_FALLING	0x4
#define SSC_TCMR_START_RF_RISING	0x5
#define SSC_TCMR_START_RF_LEVEL	0x6
#define SSC_TCMR_START_RF_EDGE	0x7
#define SSC_TCMR_START_CMP_0	0x8
#define SSC_TCMR_STTDLY(x)  	((x) << 16)
#define SSC_TCMR_STTDLY_m   	0x00ff0000
#define SSC_TCMR_STTDLY_v(x)	(((x) >> 16) & 0xff)
#define SSC_TCMR_PERIOD(x)  	((x) << 24)
#define SSC_TCMR_PERIOD_m   	0xff000000
#define SSC_TCMR_PERIOD_v(x)	(((x) >> 24) & 0xff)

struct __struct_SSC_TCMR
{
  uint32_t	cks	: 2;
  uint32_t	cko	: 3;
  uint32_t	cki	: 1;
  uint32_t	ckg	: 2;
  uint32_t	start	: 4;
  uint32_t		: 4;
  uint32_t	sttdly	: 8;
  uint32_t	period	: 8;
};

#define SSC_TFMR_DATLEN(x)  	((x) << 0)
#define SSC_TFMR_DATLEN_m   	0x0000001f
#define SSC_TFMR_DATLEN_v(x)	(((x) >> 0) & 0x1f)
#define SSC_TFMR_DATDEF     	(1 << 5)
#define SSC_TFMR_MSBF     	(1 << 7)
#define SSC_TFMR_DATNB(x)  	((x) << 8)
#define SSC_TFMR_DATNB_m   	0x00000f00
#define SSC_TFMR_DATNB_v(x)	(((x) >> 8) & 0xf)
#define SSC_TFMR_FSLEN(x)  	((x) << 16)
#define SSC_TFMR_FSLEN_m   	0x000f0000
#define SSC_TFMR_FSLEN_v(x)	(((x) >> 16) & 0xf)
#define SSC_TFMR_FSOS(x)  	((x) << 20)
#define SSC_TFMR_FSOS_m   	0x00700000
#define SSC_TFMR_FSOS_v(x)	(((x) >> 20) & 0x7)
#define SSC_TFMR_FSOS_NONE	0x0
#define SSC_TFMR_FSOS_NEGATIVE	0x1
#define SSC_TFMR_FSOS_POSITIVE	0x2
#define SSC_TFMR_FSOS_LOW	0x3
#define SSC_TFMR_FSOS_HIGH	0x4
#define SSC_TFMR_FSOS_TOGGLING	0x5
#define SSC_TFMR_FSDEN     	(1 << 23)
#define SSC_TFMR_FSEDGE     	(1 << 24)
#define SSC_TFMR_FSEDGE_POSITIVE	0x0
#define SSC_TFMR_FSEDGE_NEGATIVE	0x1
#define SSC_TFMR_FSLEN_EXT(x)  	((x) << 28)
#define SSC_TFMR_FSLEN_EXT_m   	0xf0000000
#define SSC_TFMR_FSLEN_EXT_v(x)	(((x) >> 28) & 0xf)

struct __struct_SSC_TFMR
{
  uint32_t	datlen	: 5;
  uint32_t	datdef	: 1;
  uint32_t		: 1;
  uint32_t	msbf	: 1;
  uint32_t	datnb	: 4;
  uint32_t		: 4;
  uint32_t	fslen	: 4;
  uint32_t	fsos	: 3;
  uint32_t	fsden	: 1;
  uint32_t	fsedge	: 1;
  uint32_t		: 3;
  uint32_t	fslen_ext	: 4;
};

#define SSC_RSHR_RSDAT(x)  	((x) << 0)
#define SSC_RSHR_RSDAT_m   	0x0000ffff
#define SSC_RSHR_RSDAT_v(x)	(((x) >> 0) & 0xffff)

struct __struct_SSC_RSHR
{
  uint32_t	rsdat	: 16;
  uint32_t		: 16;
};

#define SSC_TSHR_TSDAT(x)  	((x) << 0)
#define SSC_TSHR_TSDAT_m   	0x0000ffff
#define SSC_TSHR_TSDAT_v(x)	(((x) >> 0) & 0xffff)

struct __struct_SSC_TSHR
{
  uint32_t	tsdat	: 16;
  uint32_t		: 16;
};

#define SSC_RC0R_CP0(x)  	((x) << 0)
#define SSC_RC0R_CP0_m   	0x0000ffff
#define SSC_RC0R_CP0_v(x)	(((x) >> 0) & 0xffff)

struct __struct_SSC_RC0R
{
  uint32_t	cp0	: 16;
  uint32_t		: 16;
};

#define SSC_RC1R_CP1(x)  	((x) << 0)
#define SSC_RC1R_CP1_m   	0x0000ffff
#define SSC_RC1R_CP1_v(x)	(((x) >> 0) & 0xffff)

struct __struct_SSC_RC1R
{
  uint32_t	cp1	: 16;
  uint32_t		: 16;
};

#define SSC_SR_TXRDY     	(1 << 0)
#define SSC_SR_TXEMPTY     	(1 << 1)
#define SSC_SR_RXRDY     	(1 << 4)
#define SSC_SR_OVRUN     	(1 << 5)
#define SSC_SR_CP0     	(1 << 8)
#define SSC_SR_CP1     	(1 << 9)
#define SSC_SR_TXSYN     	(1 << 10)
#define SSC_SR_RXSYN     	(1 << 11)
#define SSC_SR_TXEN     	(1 << 16)
#define SSC_SR_RXEN     	(1 << 17)

struct __struct_SSC_SR
{
  uint32_t	txrdy	: 1;
  uint32_t	txempty	: 1;
  uint32_t		: 2;
  uint32_t	rxrdy	: 1;
  uint32_t	ovrun	: 1;
  uint32_t		: 2;
  uint32_t	cp0	: 1;
  uint32_t	cp1	: 1;
  uint32_t	txsyn	: 1;
  uint32_t	rxsyn	: 1;
  uint32_t		: 4;
  uint32_t	txen	: 1;
  uint32_t	rxen	: 1;
  uint32_t		: 14;
};

#define SSC_IER_TXRDY     	(1 << 0)
#define SSC_IER_TXEMPTY     	(1 << 1)
#define SSC_IER_RXRDY     	(1 << 4)
#define SSC_IER_OVRUN     	(1 << 5)
#define SSC_IER_CP0     	(1 << 8)
#define SSC_IER_CP1     	(1 << 9)
#define SSC_IER_TXSYN     	(1 << 10)
#define SSC_IER_RXSYN     	(1 << 11)

struct __struct_SSC_IER
{
  uint32_t	txrdy	: 1;
  uint32_t	txempty	: 1;
  uint32_t		: 2;
  uint32_t	rxrdy	: 1;
  uint32_t	ovrun	: 1;
  uint32_t		: 2;
  uint32_t	cp0	: 1;
  uint32_t	cp1	: 1;
  uint32_t	txsyn	: 1;
  uint32_t	rxsyn	: 1;
  uint32_t		: 20;
};

#define SSC_IDR_TXRDY     	(1 << 0)
#define SSC_IDR_TXEMPTY     	(1 << 1)
#define SSC_IDR_RXRDY     	(1 << 4)
#define SSC_IDR_OVRUN     	(1 << 5)
#define SSC_IDR_CP0     	(1 << 8)
#define SSC_IDR_CP1     	(1 << 9)
#define SSC_IDR_TXSYN     	(1 << 10)
#define SSC_IDR_RXSYN     	(1 << 11)

struct __struct_SSC_IDR
{
  uint32_t	txrdy	: 1;
  uint32_t	txempty	: 1;
  uint32_t		: 2;
  uint32_t	rxrdy	: 1;
  uint32_t	ovrun	: 1;
  uint32_t		: 2;
  uint32_t	cp0	: 1;
  uint32_t	cp1	: 1;
  uint32_t	txsyn	: 1;
  uint32_t	rxsyn	: 1;
  uint32_t		: 20;
};

#define SSC_IMR_TXRDY     	(1 << 0)
#define SSC_IMR_TXEMPTY     	(1 << 1)
#define SSC_IMR_RXRDY     	(1 << 4)
#define SSC_IMR_OVRUN     	(1 << 5)
#define SSC_IMR_CP0     	(1 << 8)
#define SSC_IMR_CP1     	(1 << 9)
#define SSC_IMR_TXSYN     	(1 << 10)
#define SSC_IMR_RXSYN     	(1 << 11)

struct __struct_SSC_IMR
{
  uint32_t	txrdy	: 1;
  uint32_t	txempty	: 1;
  uint32_t		: 2;
  uint32_t	rxrdy	: 1;
  uint32_t	ovrun	: 1;
  uint32_t		: 2;
  uint32_t	cp0	: 1;
  uint32_t	cp1	: 1;
  uint32_t	txsyn	: 1;
  uint32_t	rxsyn	: 1;
  uint32_t		: 20;
};

#define SSC_WPMR_WPEN     	(1 << 0)
#define SSC_WPMR_WPKEY(x)  	((x) << 8)
#define SSC_WPMR_WPKEY_m   	0xffffff00
#define SSC_WPMR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define SSC_WPMR_WPKEY_KEY	0x535343

struct __struct_SSC_WPMR
{
  uint32_t	wpen	: 1;
  uint32_t		: 7;
  uint32_t	wpkey	: 24;
};

#define SSC_WPSR_WPVS     	(1 << 0)
#define SSC_WPSR_WPVSRC(x)  	((x) << 8)
#define SSC_WPSR_WPVSRC_m   	0x00ffff00
#define SSC_WPSR_WPVSRC_v(x)	(((x) >> 8) & 0xffff)

struct __struct_SSC_WPSR
{
  uint32_t	wpvs	: 1;
  uint32_t		: 7;
  uint32_t	wpvsrc	: 16;
  uint32_t		: 8;
};


// SPI
#define SPI_CR_SPIEN     	(1 << 0)
#define SPI_CR_SPIDIS     	(1 << 1)
#define SPI_CR_SWRST     	(1 << 7)
#define SPI_CR_LASTXFER     	(1 << 24)

struct __struct_SPI_CR
{
  uint32_t	spien	: 1;
  uint32_t	spidis	: 1;
  uint32_t		: 5;
  uint32_t	swrst	: 1;
  uint32_t		: 16;
  uint32_t	lastxfer	: 1;
  uint32_t		: 7;
};

#define SPI_MR_MSTR     	(1 << 0)
#define SPI_MR_PS     	(1 << 1)
#define SPI_MR_PCSDEC     	(1 << 2)
#define SPI_MR_MODFDIS     	(1 << 4)
#define SPI_MR_WDRBT     	(1 << 5)
#define SPI_MR_LLB     	(1 << 7)
#define SPI_MR_PCS(x)  	((x) << 16)
#define SPI_MR_PCS_m   	0x000f0000
#define SPI_MR_PCS_v(x)	(((x) >> 16) & 0xf)
#define SPI_MR_DLYBCS(x)  	((x) << 24)
#define SPI_MR_DLYBCS_m   	0xff000000
#define SPI_MR_DLYBCS_v(x)	(((x) >> 24) & 0xff)

struct __struct_SPI_MR
{
  uint32_t	mstr	: 1;
  uint32_t	ps	: 1;
  uint32_t	pcsdec	: 1;
  uint32_t		: 1;
  uint32_t	modfdis	: 1;
  uint32_t	wdrbt	: 1;
  uint32_t		: 1;
  uint32_t	llb	: 1;
  uint32_t		: 8;
  uint32_t	pcs	: 4;
  uint32_t		: 4;
  uint32_t	dlybcs	: 8;
};

#define SPI_RDR_RD(x)  	((x) << 0)
#define SPI_RDR_RD_m   	0x0000ffff
#define SPI_RDR_RD_v(x)	(((x) >> 0) & 0xffff)
#define SPI_RDR_PCS(x)  	((x) << 16)
#define SPI_RDR_PCS_m   	0x000f0000
#define SPI_RDR_PCS_v(x)	(((x) >> 16) & 0xf)

struct __struct_SPI_RDR
{
  uint32_t	rd	: 16;
  uint32_t	pcs	: 4;
  uint32_t		: 12;
};

#define SPI_TDR_TD(x)  	((x) << 0)
#define SPI_TDR_TD_m   	0x0000ffff
#define SPI_TDR_TD_v(x)	(((x) >> 0) & 0xffff)
#define SPI_TDR_PCS(x)  	((x) << 16)
#define SPI_TDR_PCS_m   	0x000f0000
#define SPI_TDR_PCS_v(x)	(((x) >> 16) & 0xf)
#define SPI_TDR_LASTXFER     	(1 << 24)

struct __struct_SPI_TDR
{
  uint32_t	td	: 16;
  uint32_t	pcs	: 4;
  uint32_t		: 4;
  uint32_t	lastxfer	: 1;
  uint32_t		: 7;
};

#define SPI_SR_RDRF     	(1 << 0)
#define SPI_SR_TDRE     	(1 << 1)
#define SPI_SR_MODF     	(1 << 2)
#define SPI_SR_OVRES     	(1 << 3)
#define SPI_SR_NSSR     	(1 << 8)
#define SPI_SR_TXEMPTY     	(1 << 9)
#define SPI_SR_UNDES     	(1 << 10)
#define SPI_SR_SPIENS     	(1 << 16)

struct __struct_SPI_SR
{
  uint32_t	rdrf	: 1;
  uint32_t	tdre	: 1;
  uint32_t	modf	: 1;
  uint32_t	ovres	: 1;
  uint32_t		: 4;
  uint32_t	nssr	: 1;
  uint32_t	txempty	: 1;
  uint32_t	undes	: 1;
  uint32_t		: 5;
  uint32_t	spiens	: 1;
  uint32_t		: 15;
};

#define SPI_IER_RDRF     	(1 << 0)
#define SPI_IER_TDRE     	(1 << 1)
#define SPI_IER_MODF     	(1 << 2)
#define SPI_IER_OVRES     	(1 << 3)
#define SPI_IER_NSSR     	(1 << 8)
#define SPI_IER_TXEMPTY     	(1 << 9)
#define SPI_IER_UNDES     	(1 << 10)

struct __struct_SPI_IER
{
  uint32_t	rdrf	: 1;
  uint32_t	tdre	: 1;
  uint32_t	modf	: 1;
  uint32_t	ovres	: 1;
  uint32_t		: 4;
  uint32_t	nssr	: 1;
  uint32_t	txempty	: 1;
  uint32_t	undes	: 1;
  uint32_t		: 21;
};

#define SPI_IDR_RDRF     	(1 << 0)
#define SPI_IDR_TDRE     	(1 << 1)
#define SPI_IDR_MODF     	(1 << 2)
#define SPI_IDR_OVRES     	(1 << 3)
#define SPI_IDR_NSSR     	(1 << 8)
#define SPI_IDR_TXEMPTY     	(1 << 9)
#define SPI_IDR_UNDES     	(1 << 10)

struct __struct_SPI_IDR
{
  uint32_t	rdrf	: 1;
  uint32_t	tdre	: 1;
  uint32_t	modf	: 1;
  uint32_t	ovres	: 1;
  uint32_t		: 4;
  uint32_t	nssr	: 1;
  uint32_t	txempty	: 1;
  uint32_t	undes	: 1;
  uint32_t		: 21;
};

#define SPI_IMR_RDRF     	(1 << 0)
#define SPI_IMR_TDRE     	(1 << 1)
#define SPI_IMR_MODF     	(1 << 2)
#define SPI_IMR_OVRES     	(1 << 3)
#define SPI_IMR_NSSR     	(1 << 8)
#define SPI_IMR_TXEMPTY     	(1 << 9)
#define SPI_IMR_UNDES     	(1 << 10)

struct __struct_SPI_IMR
{
  uint32_t	rdrf	: 1;
  uint32_t	tdre	: 1;
  uint32_t	modf	: 1;
  uint32_t	ovres	: 1;
  uint32_t		: 4;
  uint32_t	nssr	: 1;
  uint32_t	txempty	: 1;
  uint32_t	undes	: 1;
  uint32_t		: 21;
};

#define SPI_CSR_CPOL     	(1 << 0)
#define SPI_CSR_NCPHA     	(1 << 1)
#define SPI_CSR_CSNAAT     	(1 << 2)
#define SPI_CSR_CSAAT     	(1 << 3)
#define SPI_CSR_BITS(x)  	((x) << 4)
#define SPI_CSR_BITS_m   	0x000000f0
#define SPI_CSR_BITS_v(x)	(((x) >> 4) & 0xf)
#define SPI_CSR_BITS_8_BIT	0x0
#define SPI_CSR_BITS_9_BIT	0x1
#define SPI_CSR_BITS_10_BIT	0x2
#define SPI_CSR_BITS_11_BIT	0x3
#define SPI_CSR_BITS_12_BIT	0x4
#define SPI_CSR_BITS_13_BIT	0x5
#define SPI_CSR_BITS_14_BIT	0x6
#define SPI_CSR_BITS_15_BIT	0x7
#define SPI_CSR_BITS_16_BIT	0x8
#define SPI_CSR_SCBR(x)  	((x) << 8)
#define SPI_CSR_SCBR_m   	0x0000ff00
#define SPI_CSR_SCBR_v(x)	(((x) >> 8) & 0xff)
#define SPI_CSR_DLYBS(x)  	((x) << 16)
#define SPI_CSR_DLYBS_m   	0x00ff0000
#define SPI_CSR_DLYBS_v(x)	(((x) >> 16) & 0xff)
#define SPI_CSR_DLYBCT(x)  	((x) << 24)
#define SPI_CSR_DLYBCT_m   	0xff000000
#define SPI_CSR_DLYBCT_v(x)	(((x) >> 24) & 0xff)

struct __struct_SPI_CSR
{
  uint32_t	cpol	: 1;
  uint32_t	ncpha	: 1;
  uint32_t	csnaat	: 1;
  uint32_t	csaat	: 1;
  uint32_t	bits	: 4;
  uint32_t	scbr	: 8;
  uint32_t	dlybs	: 8;
  uint32_t	dlybct	: 8;
};

#define SPI_WPMR_WPEN     	(1 << 0)
#define SPI_WPMR_WPKEY(x)  	((x) << 8)
#define SPI_WPMR_WPKEY_m   	0xffffff00
#define SPI_WPMR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define SPI_WPMR_WPKEY_KEY	0x535049

struct __struct_SPI_WPMR
{
  uint32_t	wpen	: 1;
  uint32_t		: 7;
  uint32_t	wpkey	: 24;
};

#define SPI_WPSR_WPVS     	(1 << 0)
#define SPI_WPSR_WPVSRC(x)  	((x) << 8)
#define SPI_WPSR_WPVSRC_m   	0x00ffff00
#define SPI_WPSR_WPVSRC_v(x)	(((x) >> 8) & 0xffff)

struct __struct_SPI_WPSR
{
  uint32_t	wpvs	: 1;
  uint32_t		: 7;
  uint32_t	wpvsrc	: 16;
  uint32_t		: 8;
};


// TC
#define TC_CCR_CLKEN     	(1 << 0)
#define TC_CCR_CLKDIS     	(1 << 1)
#define TC_CCR_SWTRG     	(1 << 2)

struct __struct_TC_CCR
{
  uint32_t	clken	: 1;
  uint32_t	clkdis	: 1;
  uint32_t	swtrg	: 1;
  uint32_t		: 29;
};

#define TC_CMR_TCCLKS(x)  	((x) << 0)
#define TC_CMR_TCCLKS_m   	0x00000007
#define TC_CMR_TCCLKS_v(x)	(((x) >> 0) & 0x7)
#define TC_CMR_TCCLKS_TIMER_CLOCK1	0x0
#define TC_CMR_TCCLKS_TIMER_CLOCK2	0x1
#define TC_CMR_TCCLKS_TIMER_CLOCK3	0x2
#define TC_CMR_TCCLKS_TIMER_CLOCK4	0x3
#define TC_CMR_TCCLKS_TIMER_CLOCK5	0x4
#define TC_CMR_TCCLKS_XC0	0x5
#define TC_CMR_TCCLKS_XC1	0x6
#define TC_CMR_TCCLKS_XC2	0x7
#define TC_CMR_CLKI     	(1 << 3)
#define TC_CMR_BURST(x)  	((x) << 4)
#define TC_CMR_BURST_m   	0x00000030
#define TC_CMR_BURST_v(x)	(((x) >> 4) & 0x3)
#define TC_CMR_BURST_NONE	0x0
#define TC_CMR_BURST_XC0	0x1
#define TC_CMR_BURST_XC1	0x2
#define TC_CMR_BURST_XC2	0x3
#define TC_CMR_LDBSTOP     	(1 << 6)
#define TC_CMR_LDBDIS     	(1 << 7)
#define TC_CMR_ETRGEDG(x)  	((x) << 8)
#define TC_CMR_ETRGEDG_m   	0x00000300
#define TC_CMR_ETRGEDG_v(x)	(((x) >> 8) & 0x3)
#define TC_CMR_ETRGEDG_NONE	0x0
#define TC_CMR_ETRGEDG_RISING	0x1
#define TC_CMR_ETRGEDG_FALLING	0x2
#define TC_CMR_ETRGEDG_EDGE	0x3
#define TC_CMR_ABETRG     	(1 << 10)
#define TC_CMR_CPCTRG     	(1 << 14)
#define TC_CMR_WAVE     	(1 << 15)
#define TC_CMR_LDRA(x)  	((x) << 16)
#define TC_CMR_LDRA_m   	0x00030000
#define TC_CMR_LDRA_v(x)	(((x) >> 16) & 0x3)
#define TC_CMR_LDRA_NONE	0x0
#define TC_CMR_LDRA_RISING	0x1
#define TC_CMR_LDRA_FALLING	0x2
#define TC_CMR_LDRA_EDGE	0x3
#define TC_CMR_LDRB(x)  	((x) << 18)
#define TC_CMR_LDRB_m   	0x000c0000
#define TC_CMR_LDRB_v(x)	(((x) >> 18) & 0x3)
#define TC_CMR_LDRB_NONE	0x0
#define TC_CMR_LDRB_RISING	0x1
#define TC_CMR_LDRB_FALLING	0x2
#define TC_CMR_LDRB_EDGE	0x3

struct __struct_TC_CMR
{
  uint32_t	tcclks	: 3;
  uint32_t	clki	: 1;
  uint32_t	burst	: 2;
  uint32_t	ldbstop	: 1;
  uint32_t	ldbdis	: 1;
  uint32_t	etrgedg	: 2;
  uint32_t	abetrg	: 1;
  uint32_t		: 3;
  uint32_t	cpctrg	: 1;
  uint32_t	wave	: 1;
  uint32_t	ldra	: 2;
  uint32_t	ldrb	: 2;
  uint32_t		: 12;
};

#define TC_SR_COVFS     	(1 << 0)
#define TC_SR_LOVRS     	(1 << 1)
#define TC_SR_CPAS     	(1 << 2)
#define TC_SR_CPBS     	(1 << 3)
#define TC_SR_CPCS     	(1 << 4)
#define TC_SR_LDRAS     	(1 << 5)
#define TC_SR_LDRBS     	(1 << 6)
#define TC_SR_ETRGS     	(1 << 7)
#define TC_SR_CLKSTA     	(1 << 16)
#define TC_SR_MTIOA     	(1 << 17)
#define TC_SR_MTIOB     	(1 << 18)

struct __struct_TC_SR
{
  uint32_t	covfs	: 1;
  uint32_t	lovrs	: 1;
  uint32_t	cpas	: 1;
  uint32_t	cpbs	: 1;
  uint32_t	cpcs	: 1;
  uint32_t	ldras	: 1;
  uint32_t	ldrbs	: 1;
  uint32_t	etrgs	: 1;
  uint32_t		: 8;
  uint32_t	clksta	: 1;
  uint32_t	mtioa	: 1;
  uint32_t	mtiob	: 1;
  uint32_t		: 13;
};

#define TC_IER_COVFS     	(1 << 0)
#define TC_IER_LOVRS     	(1 << 1)
#define TC_IER_CPAS     	(1 << 2)
#define TC_IER_CPBS     	(1 << 3)
#define TC_IER_CPCS     	(1 << 4)
#define TC_IER_LDRAS     	(1 << 5)
#define TC_IER_LDRBS     	(1 << 6)
#define TC_IER_ETRGS     	(1 << 7)

struct __struct_TC_IER
{
  uint32_t	covfs	: 1;
  uint32_t	lovrs	: 1;
  uint32_t	cpas	: 1;
  uint32_t	cpbs	: 1;
  uint32_t	cpcs	: 1;
  uint32_t	ldras	: 1;
  uint32_t	ldrbs	: 1;
  uint32_t	etrgs	: 1;
  uint32_t		: 24;
};

#define TC_IDR_COVFS     	(1 << 0)
#define TC_IDR_LOVRS     	(1 << 1)
#define TC_IDR_CPAS     	(1 << 2)
#define TC_IDR_CPBS     	(1 << 3)
#define TC_IDR_CPCS     	(1 << 4)
#define TC_IDR_LDRAS     	(1 << 5)
#define TC_IDR_LDRBS     	(1 << 6)
#define TC_IDR_ETRGS     	(1 << 7)

struct __struct_TC_IDR
{
  uint32_t	covfs	: 1;
  uint32_t	lovrs	: 1;
  uint32_t	cpas	: 1;
  uint32_t	cpbs	: 1;
  uint32_t	cpcs	: 1;
  uint32_t	ldras	: 1;
  uint32_t	ldrbs	: 1;
  uint32_t	etrgs	: 1;
  uint32_t		: 24;
};

#define TC_IMR_COVFS     	(1 << 0)
#define TC_IMR_LOVRS     	(1 << 1)
#define TC_IMR_CPAS     	(1 << 2)
#define TC_IMR_CPBS     	(1 << 3)
#define TC_IMR_CPCS     	(1 << 4)
#define TC_IMR_LDRAS     	(1 << 5)
#define TC_IMR_LDRBS     	(1 << 6)
#define TC_IMR_ETRGS     	(1 << 7)

struct __struct_TC_IMR
{
  uint32_t	covfs	: 1;
  uint32_t	lovrs	: 1;
  uint32_t	cpas	: 1;
  uint32_t	cpbs	: 1;
  uint32_t	cpcs	: 1;
  uint32_t	ldras	: 1;
  uint32_t	ldrbs	: 1;
  uint32_t	etrgs	: 1;
  uint32_t		: 24;
};

#define TC_BCR_SYNC     	(1 << 0)

struct __struct_TC_BCR
{
  uint32_t	sync	: 1;
  uint32_t		: 31;
};

#define TC_BMR_TC0XC0S(x)  	((x) << 0)
#define TC_BMR_TC0XC0S_m   	0x00000003
#define TC_BMR_TC0XC0S_v(x)	(((x) >> 0) & 0x3)
#define TC_BMR_TC0XC0S_TCLK0	0x0
#define TC_BMR_TC0XC0S_TIOA1	0x2
#define TC_BMR_TC0XC0S_TIOA2	0x3
#define TC_BMR_TC1XC1S(x)  	((x) << 2)
#define TC_BMR_TC1XC1S_m   	0x0000000c
#define TC_BMR_TC1XC1S_v(x)	(((x) >> 2) & 0x3)
#define TC_BMR_TC1XC1S_TCLK1	0x0
#define TC_BMR_TC1XC1S_TIOA0	0x2
#define TC_BMR_TC1XC1S_TIOA2	0x3
#define TC_BMR_TC2XC2S(x)  	((x) << 4)
#define TC_BMR_TC2XC2S_m   	0x00000030
#define TC_BMR_TC2XC2S_v(x)	(((x) >> 4) & 0x3)
#define TC_BMR_TC2XC2S_TCLK2	0x0
#define TC_BMR_TC2XC2S_TIOA1	0x2
#define TC_BMR_TC2XC2S_TIOA2	0x3
#define TC_BMR_QDEN     	(1 << 8)
#define TC_BMR_POSEN     	(1 << 9)
#define TC_BMR_SPEEDEN     	(1 << 10)
#define TC_BMR_QDTRANS     	(1 << 11)
#define TC_BMR_EDGPHA     	(1 << 12)
#define TC_BMR_INVA     	(1 << 13)
#define TC_BMR_INVB     	(1 << 14)
#define TC_BMR_INVIDX     	(1 << 15)
#define TC_BMR_SWAP     	(1 << 16)
#define TC_BMR_IDXPHB     	(1 << 17)
#define TC_BMR_FILTER     	(1 << 19)
#define TC_BMR_MAXFILT(x)  	((x) << 20)
#define TC_BMR_MAXFILT_m   	0x03f00000
#define TC_BMR_MAXFILT_v(x)	(((x) >> 20) & 0x3f)

struct __struct_TC_BMR
{
  uint32_t	tc0xc0s	: 2;
  uint32_t	tc1xc1s	: 2;
  uint32_t	tc2xc2s	: 2;
  uint32_t		: 2;
  uint32_t	qden	: 1;
  uint32_t	posen	: 1;
  uint32_t	speeden	: 1;
  uint32_t	qdtrans	: 1;
  uint32_t	edgpha	: 1;
  uint32_t	inva	: 1;
  uint32_t	invb	: 1;
  uint32_t	invidx	: 1;
  uint32_t	swap	: 1;
  uint32_t	idxphb	: 1;
  uint32_t		: 1;
  uint32_t	filter	: 1;
  uint32_t	maxfilt	: 6;
  uint32_t		: 6;
};

#define TC_QIER_IDX     	(1 << 0)
#define TC_QIER_DIRCHG     	(1 << 1)
#define TC_QIER_QERR     	(1 << 2)

struct __struct_TC_QIER
{
  uint32_t	idx	: 1;
  uint32_t	dirchg	: 1;
  uint32_t	qerr	: 1;
  uint32_t		: 29;
};

#define TC_QIDR_IDX     	(1 << 0)
#define TC_QIDR_DIRCHG     	(1 << 1)
#define TC_QIDR_QERR     	(1 << 2)

struct __struct_TC_QIDR
{
  uint32_t	idx	: 1;
  uint32_t	dirchg	: 1;
  uint32_t	qerr	: 1;
  uint32_t		: 29;
};

#define TC_QIMR_IDX     	(1 << 0)
#define TC_QIMR_DIRCHG     	(1 << 1)
#define TC_QIMR_QERR     	(1 << 2)

struct __struct_TC_QIMR
{
  uint32_t	idx	: 1;
  uint32_t	dirchg	: 1;
  uint32_t	qerr	: 1;
  uint32_t		: 29;
};

#define TC_QISR_IDX     	(1 << 0)
#define TC_QISR_DIRCHG     	(1 << 1)
#define TC_QISR_QERR     	(1 << 2)
#define TC_QISR_DIR     	(1 << 8)

struct __struct_TC_QISR
{
  uint32_t	idx	: 1;
  uint32_t	dirchg	: 1;
  uint32_t	qerr	: 1;
  uint32_t		: 5;
  uint32_t	dir	: 1;
  uint32_t		: 23;
};


// TWI
#define TWI_CR_START     	(1 << 0)
#define TWI_CR_STOP     	(1 << 1)
#define TWI_CR_MSEN     	(1 << 2)
#define TWI_CR_MSDIS     	(1 << 3)
#define TWI_CR_SVEN     	(1 << 4)
#define TWI_CR_SVDIS     	(1 << 5)
#define TWI_CR_QUICK     	(1 << 6)
#define TWI_CR_SWRST     	(1 << 7)

struct __struct_TWI_CR
{
  uint32_t	start	: 1;
  uint32_t	stop	: 1;
  uint32_t	msen	: 1;
  uint32_t	msdis	: 1;
  uint32_t	sven	: 1;
  uint32_t	svdis	: 1;
  uint32_t	quick	: 1;
  uint32_t	swrst	: 1;
  uint32_t		: 24;
};

#define TWI_MMR_IADRSZ(x)  	((x) << 8)
#define TWI_MMR_IADRSZ_m   	0x00000300
#define TWI_MMR_IADRSZ_v(x)	(((x) >> 8) & 0x3)
#define TWI_MMR_IADRSZ_NONE	0x0
#define TWI_MMR_IADRSZ_1_BYTE	0x1
#define TWI_MMR_IADRSZ_2_BYTE	0x2
#define TWI_MMR_IADRSZ_3_BYTE	0x3
#define TWI_MMR_MREAD     	(1 << 12)
#define TWI_MMR_DADR(x)  	((x) << 16)
#define TWI_MMR_DADR_m   	0x007f0000
#define TWI_MMR_DADR_v(x)	(((x) >> 16) & 0x7f)

struct __struct_TWI_MMR
{
  uint32_t		: 8;
  uint32_t	iadrsz	: 2;
  uint32_t		: 2;
  uint32_t	mread	: 1;
  uint32_t		: 3;
  uint32_t	dadr	: 7;
  uint32_t		: 9;
};

#define TWI_SMR_SADR(x)  	((x) << 16)
#define TWI_SMR_SADR_m   	0x007f0000
#define TWI_SMR_SADR_v(x)	(((x) >> 16) & 0x7f)

struct __struct_TWI_SMR
{
  uint32_t		: 16;
  uint32_t	sadr	: 7;
  uint32_t		: 9;
};

#define TWI_IADR_IADR(x)  	((x) << 0)
#define TWI_IADR_IADR_m   	0x00ffffff
#define TWI_IADR_IADR_v(x)	(((x) >> 0) & 0xffffff)

struct __struct_TWI_IADR
{
  uint32_t	iadr	: 24;
  uint32_t		: 8;
};

#define TWI_CWGR_CLDIV(x)  	((x) << 0)
#define TWI_CWGR_CLDIV_m   	0x000000ff
#define TWI_CWGR_CLDIV_v(x)	(((x) >> 0) & 0xff)
#define TWI_CWGR_CHDIV(x)  	((x) << 8)
#define TWI_CWGR_CHDIV_m   	0x0000ff00
#define TWI_CWGR_CHDIV_v(x)	(((x) >> 8) & 0xff)
#define TWI_CWGR_CKDIV(x)  	((x) << 16)
#define TWI_CWGR_CKDIV_m   	0x00070000
#define TWI_CWGR_CKDIV_v(x)	(((x) >> 16) & 0x7)

struct __struct_TWI_CWGR
{
  uint32_t	cldiv	: 8;
  uint32_t	chdiv	: 8;
  uint32_t	ckdiv	: 3;
  uint32_t		: 13;
};

#define TWI_SR_TXCOMP     	(1 << 0)
#define TWI_SR_RXRDY     	(1 << 1)
#define TWI_SR_TXRDY     	(1 << 2)
#define TWI_SR_SVREAD     	(1 << 3)
#define TWI_SR_SVACC     	(1 << 4)
#define TWI_SR_GACC     	(1 << 5)
#define TWI_SR_OVRE     	(1 << 6)
#define TWI_SR_NACK     	(1 << 8)
#define TWI_SR_ARBLST     	(1 << 9)
#define TWI_SR_SCLWS     	(1 << 10)
#define TWI_SR_EOSACC     	(1 << 11)
#define TWI_SR_ENDRX     	(1 << 12)
#define TWI_SR_ENDTX     	(1 << 13)
#define TWI_SR_RXBUFF     	(1 << 14)
#define TWI_SR_TXBUFE     	(1 << 15)

struct __struct_TWI_SR
{
  uint32_t	txcomp	: 1;
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	svread	: 1;
  uint32_t	svacc	: 1;
  uint32_t	gacc	: 1;
  uint32_t	ovre	: 1;
  uint32_t		: 1;
  uint32_t	nack	: 1;
  uint32_t	arblst	: 1;
  uint32_t	sclws	: 1;
  uint32_t	eosacc	: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t	txbufe	: 1;
  uint32_t		: 16;
};

#define TWI_IER_TXCOMP     	(1 << 0)
#define TWI_IER_RXRDY     	(1 << 1)
#define TWI_IER_TXRDY     	(1 << 2)
#define TWI_IER_SVACC     	(1 << 4)
#define TWI_IER_GACC     	(1 << 5)
#define TWI_IER_OVRE     	(1 << 6)
#define TWI_IER_NACK     	(1 << 8)
#define TWI_IER_ARBLST     	(1 << 9)
#define TWI_IER_SCL_WS     	(1 << 10)
#define TWI_IER_EOSACC     	(1 << 11)
#define TWI_IER_ENDRX     	(1 << 12)
#define TWI_IER_ENDTX     	(1 << 13)
#define TWI_IER_RXBUFF     	(1 << 14)
#define TWI_IER_TXBUFE     	(1 << 15)

struct __struct_TWI_IER
{
  uint32_t	txcomp	: 1;
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t		: 1;
  uint32_t	svacc	: 1;
  uint32_t	gacc	: 1;
  uint32_t	ovre	: 1;
  uint32_t		: 1;
  uint32_t	nack	: 1;
  uint32_t	arblst	: 1;
  uint32_t	scl_ws	: 1;
  uint32_t	eosacc	: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t	txbufe	: 1;
  uint32_t		: 16;
};

#define TWI_IDR_TXCOMP     	(1 << 0)
#define TWI_IDR_RXRDY     	(1 << 1)
#define TWI_IDR_TXRDY     	(1 << 2)
#define TWI_IDR_SVACC     	(1 << 4)
#define TWI_IDR_GACC     	(1 << 5)
#define TWI_IDR_OVRE     	(1 << 6)
#define TWI_IDR_NACK     	(1 << 8)
#define TWI_IDR_ARBLST     	(1 << 9)
#define TWI_IDR_SCL_WS     	(1 << 10)
#define TWI_IDR_EOSACC     	(1 << 11)
#define TWI_IDR_ENDRX     	(1 << 12)
#define TWI_IDR_ENDTX     	(1 << 13)
#define TWI_IDR_RXBUFF     	(1 << 14)
#define TWI_IDR_TXBUFE     	(1 << 15)

struct __struct_TWI_IDR
{
  uint32_t	txcomp	: 1;
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t		: 1;
  uint32_t	svacc	: 1;
  uint32_t	gacc	: 1;
  uint32_t	ovre	: 1;
  uint32_t		: 1;
  uint32_t	nack	: 1;
  uint32_t	arblst	: 1;
  uint32_t	scl_ws	: 1;
  uint32_t	eosacc	: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t	txbufe	: 1;
  uint32_t		: 16;
};

#define TWI_IMR_TXCOMP     	(1 << 0)
#define TWI_IMR_RXRDY     	(1 << 1)
#define TWI_IMR_TXRDY     	(1 << 2)
#define TWI_IMR_SVACC     	(1 << 4)
#define TWI_IMR_GACC     	(1 << 5)
#define TWI_IMR_OVRE     	(1 << 6)
#define TWI_IMR_NACK     	(1 << 8)
#define TWI_IMR_ARBLST     	(1 << 9)
#define TWI_IMR_SCL_WS     	(1 << 10)
#define TWI_IMR_EOSACC     	(1 << 11)
#define TWI_IMR_ENDRX     	(1 << 12)
#define TWI_IMR_ENDTX     	(1 << 13)
#define TWI_IMR_RXBUFF     	(1 << 14)
#define TWI_IMR_TXBUFE     	(1 << 15)

struct __struct_TWI_IMR
{
  uint32_t	txcomp	: 1;
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t		: 1;
  uint32_t	svacc	: 1;
  uint32_t	gacc	: 1;
  uint32_t	ovre	: 1;
  uint32_t		: 1;
  uint32_t	nack	: 1;
  uint32_t	arblst	: 1;
  uint32_t	scl_ws	: 1;
  uint32_t	eosacc	: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t	txbufe	: 1;
  uint32_t		: 16;
};

#define TWI_RHR_RXDATA(x)  	((x) << 0)
#define TWI_RHR_RXDATA_m   	0x000000ff
#define TWI_RHR_RXDATA_v(x)	(((x) >> 0) & 0xff)

struct __struct_TWI_RHR
{
  uint32_t	rxdata	: 8;
  uint32_t		: 24;
};

#define TWI_THR_TXDATA(x)  	((x) << 0)
#define TWI_THR_TXDATA_m   	0x000000ff
#define TWI_THR_TXDATA_v(x)	(((x) >> 0) & 0xff)

struct __struct_TWI_THR
{
  uint32_t	txdata	: 8;
  uint32_t		: 24;
};


// PWM
#define PWM_CLK_DIVA(x)  	((x) << 0)
#define PWM_CLK_DIVA_m   	0x000000ff
#define PWM_CLK_DIVA_v(x)	(((x) >> 0) & 0xff)
#define PWM_CLK_PREA(x)  	((x) << 8)
#define PWM_CLK_PREA_m   	0x00000f00
#define PWM_CLK_PREA_v(x)	(((x) >> 8) & 0xf)
#define PWM_CLK_DIVB(x)  	((x) << 16)
#define PWM_CLK_DIVB_m   	0x00ff0000
#define PWM_CLK_DIVB_v(x)	(((x) >> 16) & 0xff)
#define PWM_CLK_PREB(x)  	((x) << 24)
#define PWM_CLK_PREB_m   	0x0f000000
#define PWM_CLK_PREB_v(x)	(((x) >> 24) & 0xf)

struct __struct_PWM_CLK
{
  uint32_t	diva	: 8;
  uint32_t	prea	: 4;
  uint32_t		: 4;
  uint32_t	divb	: 8;
  uint32_t	preb	: 4;
  uint32_t		: 4;
};

#define PWM_ENA_CHID0     	(1 << 0)
#define PWM_ENA_CHID1     	(1 << 1)
#define PWM_ENA_CHID2     	(1 << 2)
#define PWM_ENA_CHID3     	(1 << 3)

struct __struct_PWM_ENA
{
  uint32_t	chid0	: 1;
  uint32_t	chid1	: 1;
  uint32_t	chid2	: 1;
  uint32_t	chid3	: 1;
  uint32_t		: 28;
};

#define PWM_DIS_CHID0     	(1 << 0)
#define PWM_DIS_CHID1     	(1 << 1)
#define PWM_DIS_CHID2     	(1 << 2)
#define PWM_DIS_CHID3     	(1 << 3)

struct __struct_PWM_DIS
{
  uint32_t	chid0	: 1;
  uint32_t	chid1	: 1;
  uint32_t	chid2	: 1;
  uint32_t	chid3	: 1;
  uint32_t		: 28;
};

#define PWM_SR_CHID0     	(1 << 0)
#define PWM_SR_CHID1     	(1 << 1)
#define PWM_SR_CHID2     	(1 << 2)
#define PWM_SR_CHID3     	(1 << 3)

struct __struct_PWM_SR
{
  uint32_t	chid0	: 1;
  uint32_t	chid1	: 1;
  uint32_t	chid2	: 1;
  uint32_t	chid3	: 1;
  uint32_t		: 28;
};

#define PWM_IER1_CHID0     	(1 << 0)
#define PWM_IER1_CHID1     	(1 << 1)
#define PWM_IER1_CHID2     	(1 << 2)
#define PWM_IER1_CHID3     	(1 << 3)
#define PWM_IER1_FCHID0     	(1 << 16)
#define PWM_IER1_FCHID1     	(1 << 17)
#define PWM_IER1_FCHID2     	(1 << 18)
#define PWM_IER1_FCHID3     	(1 << 19)

struct __struct_PWM_IER1
{
  uint32_t	chid0	: 1;
  uint32_t	chid1	: 1;
  uint32_t	chid2	: 1;
  uint32_t	chid3	: 1;
  uint32_t		: 12;
  uint32_t	fchid0	: 1;
  uint32_t	fchid1	: 1;
  uint32_t	fchid2	: 1;
  uint32_t	fchid3	: 1;
  uint32_t		: 12;
};

#define PWM_IDR1_CHID0     	(1 << 0)
#define PWM_IDR1_CHID1     	(1 << 1)
#define PWM_IDR1_CHID2     	(1 << 2)
#define PWM_IDR1_CHID3     	(1 << 3)
#define PWM_IDR1_FCHID0     	(1 << 16)
#define PWM_IDR1_FCHID1     	(1 << 17)
#define PWM_IDR1_FCHID2     	(1 << 18)
#define PWM_IDR1_FCHID3     	(1 << 19)

struct __struct_PWM_IDR1
{
  uint32_t	chid0	: 1;
  uint32_t	chid1	: 1;
  uint32_t	chid2	: 1;
  uint32_t	chid3	: 1;
  uint32_t		: 12;
  uint32_t	fchid0	: 1;
  uint32_t	fchid1	: 1;
  uint32_t	fchid2	: 1;
  uint32_t	fchid3	: 1;
  uint32_t		: 12;
};

#define PWM_IMR1_CHID0     	(1 << 0)
#define PWM_IMR1_CHID1     	(1 << 1)
#define PWM_IMR1_CHID2     	(1 << 2)
#define PWM_IMR1_CHID3     	(1 << 3)
#define PWM_IMR1_FCHID0     	(1 << 16)
#define PWM_IMR1_FCHID1     	(1 << 17)
#define PWM_IMR1_FCHID2     	(1 << 18)
#define PWM_IMR1_FCHID3     	(1 << 19)

struct __struct_PWM_IMR1
{
  uint32_t	chid0	: 1;
  uint32_t	chid1	: 1;
  uint32_t	chid2	: 1;
  uint32_t	chid3	: 1;
  uint32_t		: 12;
  uint32_t	fchid0	: 1;
  uint32_t	fchid1	: 1;
  uint32_t	fchid2	: 1;
  uint32_t	fchid3	: 1;
  uint32_t		: 12;
};

#define PWM_ISR1_CHID0     	(1 << 0)
#define PWM_ISR1_CHID1     	(1 << 1)
#define PWM_ISR1_CHID2     	(1 << 2)
#define PWM_ISR1_CHID3     	(1 << 3)
#define PWM_ISR1_FCHID0     	(1 << 16)
#define PWM_ISR1_FCHID1     	(1 << 17)
#define PWM_ISR1_FCHID2     	(1 << 18)
#define PWM_ISR1_FCHID3     	(1 << 19)

struct __struct_PWM_ISR1
{
  uint32_t	chid0	: 1;
  uint32_t	chid1	: 1;
  uint32_t	chid2	: 1;
  uint32_t	chid3	: 1;
  uint32_t		: 12;
  uint32_t	fchid0	: 1;
  uint32_t	fchid1	: 1;
  uint32_t	fchid2	: 1;
  uint32_t	fchid3	: 1;
  uint32_t		: 12;
};

#define PWM_SCM_SYNC0     	(1 << 0)
#define PWM_SCM_SYNC1     	(1 << 1)
#define PWM_SCM_SYNC2     	(1 << 2)
#define PWM_SCM_SYNC3     	(1 << 3)
#define PWM_SCM_UPDM(x)  	((x) << 16)
#define PWM_SCM_UPDM_m   	0x00030000
#define PWM_SCM_UPDM_v(x)	(((x) >> 16) & 0x3)
#define PWM_SCM_UPDM_MODE0	0x0
#define PWM_SCM_UPDM_MODE1	0x1
#define PWM_SCM_UPDM_MODE2	0x2
#define PWM_SCM_PTRM     	(1 << 20)
#define PWM_SCM_PTRCS(x)  	((x) << 21)
#define PWM_SCM_PTRCS_m   	0x00e00000
#define PWM_SCM_PTRCS_v(x)	(((x) >> 21) & 0x7)

struct __struct_PWM_SCM
{
  uint32_t	sync0	: 1;
  uint32_t	sync1	: 1;
  uint32_t	sync2	: 1;
  uint32_t	sync3	: 1;
  uint32_t		: 12;
  uint32_t	updm	: 2;
  uint32_t		: 2;
  uint32_t	ptrm	: 1;
  uint32_t	ptrcs	: 3;
  uint32_t		: 8;
};

#define PWM_SCUC_UPDULOCK     	(1 << 0)

struct __struct_PWM_SCUC
{
  uint32_t	updulock	: 1;
  uint32_t		: 31;
};

#define PWM_SCUP_UPR(x)  	((x) << 0)
#define PWM_SCUP_UPR_m   	0x0000000f
#define PWM_SCUP_UPR_v(x)	(((x) >> 0) & 0xf)
#define PWM_SCUP_UPRCNT(x)  	((x) << 4)
#define PWM_SCUP_UPRCNT_m   	0x000000f0
#define PWM_SCUP_UPRCNT_v(x)	(((x) >> 4) & 0xf)

struct __struct_PWM_SCUP
{
  uint32_t	upr	: 4;
  uint32_t	uprcnt	: 4;
  uint32_t		: 24;
};

#define PWM_SCUPUPD_UPRUPD(x)  	((x) << 0)
#define PWM_SCUPUPD_UPRUPD_m   	0x0000000f
#define PWM_SCUPUPD_UPRUPD_v(x)	(((x) >> 0) & 0xf)

struct __struct_PWM_SCUPUPD
{
  uint32_t	uprupd	: 4;
  uint32_t		: 28;
};

#define PWM_IER2_WRDY     	(1 << 0)
#define PWM_IER2_ENDTX     	(1 << 1)
#define PWM_IER2_TXBUFE     	(1 << 2)
#define PWM_IER2_UNRE     	(1 << 3)
#define PWM_IER2_CMPM0     	(1 << 8)
#define PWM_IER2_CMPM1     	(1 << 9)
#define PWM_IER2_CMPM2     	(1 << 10)
#define PWM_IER2_CMPM3     	(1 << 11)
#define PWM_IER2_CMPM4     	(1 << 12)
#define PWM_IER2_CMPM5     	(1 << 13)
#define PWM_IER2_CMPM6     	(1 << 14)
#define PWM_IER2_CMPM7     	(1 << 15)
#define PWM_IER2_CMPU0     	(1 << 16)
#define PWM_IER2_CMPU1     	(1 << 17)
#define PWM_IER2_CMPU2     	(1 << 18)
#define PWM_IER2_CMPU3     	(1 << 19)
#define PWM_IER2_CMPU4     	(1 << 20)
#define PWM_IER2_CMPU5     	(1 << 21)
#define PWM_IER2_CMPU6     	(1 << 22)
#define PWM_IER2_CMPU7     	(1 << 23)

struct __struct_PWM_IER2
{
  uint32_t	wrdy	: 1;
  uint32_t	endtx	: 1;
  uint32_t	txbufe	: 1;
  uint32_t	unre	: 1;
  uint32_t		: 4;
  uint32_t	cmpm0	: 1;
  uint32_t	cmpm1	: 1;
  uint32_t	cmpm2	: 1;
  uint32_t	cmpm3	: 1;
  uint32_t	cmpm4	: 1;
  uint32_t	cmpm5	: 1;
  uint32_t	cmpm6	: 1;
  uint32_t	cmpm7	: 1;
  uint32_t	cmpu0	: 1;
  uint32_t	cmpu1	: 1;
  uint32_t	cmpu2	: 1;
  uint32_t	cmpu3	: 1;
  uint32_t	cmpu4	: 1;
  uint32_t	cmpu5	: 1;
  uint32_t	cmpu6	: 1;
  uint32_t	cmpu7	: 1;
  uint32_t		: 8;
};

#define PWM_IDR2_WRDY     	(1 << 0)
#define PWM_IDR2_ENDTX     	(1 << 1)
#define PWM_IDR2_TXBUFE     	(1 << 2)
#define PWM_IDR2_UNRE     	(1 << 3)
#define PWM_IDR2_CMPM0     	(1 << 8)
#define PWM_IDR2_CMPM1     	(1 << 9)
#define PWM_IDR2_CMPM2     	(1 << 10)
#define PWM_IDR2_CMPM3     	(1 << 11)
#define PWM_IDR2_CMPM4     	(1 << 12)
#define PWM_IDR2_CMPM5     	(1 << 13)
#define PWM_IDR2_CMPM6     	(1 << 14)
#define PWM_IDR2_CMPM7     	(1 << 15)
#define PWM_IDR2_CMPU0     	(1 << 16)
#define PWM_IDR2_CMPU1     	(1 << 17)
#define PWM_IDR2_CMPU2     	(1 << 18)
#define PWM_IDR2_CMPU3     	(1 << 19)
#define PWM_IDR2_CMPU4     	(1 << 20)
#define PWM_IDR2_CMPU5     	(1 << 21)
#define PWM_IDR2_CMPU6     	(1 << 22)
#define PWM_IDR2_CMPU7     	(1 << 23)

struct __struct_PWM_IDR2
{
  uint32_t	wrdy	: 1;
  uint32_t	endtx	: 1;
  uint32_t	txbufe	: 1;
  uint32_t	unre	: 1;
  uint32_t		: 4;
  uint32_t	cmpm0	: 1;
  uint32_t	cmpm1	: 1;
  uint32_t	cmpm2	: 1;
  uint32_t	cmpm3	: 1;
  uint32_t	cmpm4	: 1;
  uint32_t	cmpm5	: 1;
  uint32_t	cmpm6	: 1;
  uint32_t	cmpm7	: 1;
  uint32_t	cmpu0	: 1;
  uint32_t	cmpu1	: 1;
  uint32_t	cmpu2	: 1;
  uint32_t	cmpu3	: 1;
  uint32_t	cmpu4	: 1;
  uint32_t	cmpu5	: 1;
  uint32_t	cmpu6	: 1;
  uint32_t	cmpu7	: 1;
  uint32_t		: 8;
};

#define PWM_IMR2_WRDY     	(1 << 0)
#define PWM_IMR2_ENDTX     	(1 << 1)
#define PWM_IMR2_TXBUFE     	(1 << 2)
#define PWM_IMR2_UNRE     	(1 << 3)
#define PWM_IMR2_CMPM0     	(1 << 8)
#define PWM_IMR2_CMPM1     	(1 << 9)
#define PWM_IMR2_CMPM2     	(1 << 10)
#define PWM_IMR2_CMPM3     	(1 << 11)
#define PWM_IMR2_CMPM4     	(1 << 12)
#define PWM_IMR2_CMPM5     	(1 << 13)
#define PWM_IMR2_CMPM6     	(1 << 14)
#define PWM_IMR2_CMPM7     	(1 << 15)
#define PWM_IMR2_CMPU0     	(1 << 16)
#define PWM_IMR2_CMPU1     	(1 << 17)
#define PWM_IMR2_CMPU2     	(1 << 18)
#define PWM_IMR2_CMPU3     	(1 << 19)
#define PWM_IMR2_CMPU4     	(1 << 20)
#define PWM_IMR2_CMPU5     	(1 << 21)
#define PWM_IMR2_CMPU6     	(1 << 22)
#define PWM_IMR2_CMPU7     	(1 << 23)

struct __struct_PWM_IMR2
{
  uint32_t	wrdy	: 1;
  uint32_t	endtx	: 1;
  uint32_t	txbufe	: 1;
  uint32_t	unre	: 1;
  uint32_t		: 4;
  uint32_t	cmpm0	: 1;
  uint32_t	cmpm1	: 1;
  uint32_t	cmpm2	: 1;
  uint32_t	cmpm3	: 1;
  uint32_t	cmpm4	: 1;
  uint32_t	cmpm5	: 1;
  uint32_t	cmpm6	: 1;
  uint32_t	cmpm7	: 1;
  uint32_t	cmpu0	: 1;
  uint32_t	cmpu1	: 1;
  uint32_t	cmpu2	: 1;
  uint32_t	cmpu3	: 1;
  uint32_t	cmpu4	: 1;
  uint32_t	cmpu5	: 1;
  uint32_t	cmpu6	: 1;
  uint32_t	cmpu7	: 1;
  uint32_t		: 8;
};

#define PWM_ISR2_WRDY     	(1 << 0)
#define PWM_ISR2_ENDTX     	(1 << 1)
#define PWM_ISR2_TXBUFE     	(1 << 2)
#define PWM_ISR2_UNRE     	(1 << 3)
#define PWM_ISR2_CMPM0     	(1 << 8)
#define PWM_ISR2_CMPM1     	(1 << 9)
#define PWM_ISR2_CMPM2     	(1 << 10)
#define PWM_ISR2_CMPM3     	(1 << 11)
#define PWM_ISR2_CMPM4     	(1 << 12)
#define PWM_ISR2_CMPM5     	(1 << 13)
#define PWM_ISR2_CMPM6     	(1 << 14)
#define PWM_ISR2_CMPM7     	(1 << 15)
#define PWM_ISR2_CMPU0     	(1 << 16)
#define PWM_ISR2_CMPU1     	(1 << 17)
#define PWM_ISR2_CMPU2     	(1 << 18)
#define PWM_ISR2_CMPU3     	(1 << 19)
#define PWM_ISR2_CMPU4     	(1 << 20)
#define PWM_ISR2_CMPU5     	(1 << 21)
#define PWM_ISR2_CMPU6     	(1 << 22)
#define PWM_ISR2_CMPU7     	(1 << 23)

struct __struct_PWM_ISR2
{
  uint32_t	wrdy	: 1;
  uint32_t	endtx	: 1;
  uint32_t	txbufe	: 1;
  uint32_t	unre	: 1;
  uint32_t		: 4;
  uint32_t	cmpm0	: 1;
  uint32_t	cmpm1	: 1;
  uint32_t	cmpm2	: 1;
  uint32_t	cmpm3	: 1;
  uint32_t	cmpm4	: 1;
  uint32_t	cmpm5	: 1;
  uint32_t	cmpm6	: 1;
  uint32_t	cmpm7	: 1;
  uint32_t	cmpu0	: 1;
  uint32_t	cmpu1	: 1;
  uint32_t	cmpu2	: 1;
  uint32_t	cmpu3	: 1;
  uint32_t	cmpu4	: 1;
  uint32_t	cmpu5	: 1;
  uint32_t	cmpu6	: 1;
  uint32_t	cmpu7	: 1;
  uint32_t		: 8;
};

#define PWM_OOV_OOVH0     	(1 << 0)
#define PWM_OOV_OOVH1     	(1 << 1)
#define PWM_OOV_OOVH2     	(1 << 2)
#define PWM_OOV_OOVH3     	(1 << 3)
#define PWM_OOV_OOVL0     	(1 << 16)
#define PWM_OOV_OOVL1     	(1 << 17)
#define PWM_OOV_OOVL2     	(1 << 18)
#define PWM_OOV_OOVL3     	(1 << 19)

struct __struct_PWM_OOV
{
  uint32_t	oovh0	: 1;
  uint32_t	oovh1	: 1;
  uint32_t	oovh2	: 1;
  uint32_t	oovh3	: 1;
  uint32_t		: 12;
  uint32_t	oovl0	: 1;
  uint32_t	oovl1	: 1;
  uint32_t	oovl2	: 1;
  uint32_t	oovl3	: 1;
  uint32_t		: 12;
};

#define PWM_OS_OSH0     	(1 << 0)
#define PWM_OS_OSH1     	(1 << 1)
#define PWM_OS_OSH2     	(1 << 2)
#define PWM_OS_OSH3     	(1 << 3)
#define PWM_OS_OSL0     	(1 << 16)
#define PWM_OS_OSL1     	(1 << 17)
#define PWM_OS_OSL2     	(1 << 18)
#define PWM_OS_OSL3     	(1 << 19)

struct __struct_PWM_OS
{
  uint32_t	osh0	: 1;
  uint32_t	osh1	: 1;
  uint32_t	osh2	: 1;
  uint32_t	osh3	: 1;
  uint32_t		: 12;
  uint32_t	osl0	: 1;
  uint32_t	osl1	: 1;
  uint32_t	osl2	: 1;
  uint32_t	osl3	: 1;
  uint32_t		: 12;
};

#define PWM_OSS_OSSH0     	(1 << 0)
#define PWM_OSS_OSSH1     	(1 << 1)
#define PWM_OSS_OSSH2     	(1 << 2)
#define PWM_OSS_OSSH3     	(1 << 3)
#define PWM_OSS_OSSL0     	(1 << 16)
#define PWM_OSS_OSSL1     	(1 << 17)
#define PWM_OSS_OSSL2     	(1 << 18)
#define PWM_OSS_OSSL3     	(1 << 19)

struct __struct_PWM_OSS
{
  uint32_t	ossh0	: 1;
  uint32_t	ossh1	: 1;
  uint32_t	ossh2	: 1;
  uint32_t	ossh3	: 1;
  uint32_t		: 12;
  uint32_t	ossl0	: 1;
  uint32_t	ossl1	: 1;
  uint32_t	ossl2	: 1;
  uint32_t	ossl3	: 1;
  uint32_t		: 12;
};

#define PWM_OSC_OSCH0     	(1 << 0)
#define PWM_OSC_OSCH1     	(1 << 1)
#define PWM_OSC_OSCH2     	(1 << 2)
#define PWM_OSC_OSCH3     	(1 << 3)
#define PWM_OSC_OSCL0     	(1 << 16)
#define PWM_OSC_OSCL1     	(1 << 17)
#define PWM_OSC_OSCL2     	(1 << 18)
#define PWM_OSC_OSCL3     	(1 << 19)

struct __struct_PWM_OSC
{
  uint32_t	osch0	: 1;
  uint32_t	osch1	: 1;
  uint32_t	osch2	: 1;
  uint32_t	osch3	: 1;
  uint32_t		: 12;
  uint32_t	oscl0	: 1;
  uint32_t	oscl1	: 1;
  uint32_t	oscl2	: 1;
  uint32_t	oscl3	: 1;
  uint32_t		: 12;
};

#define PWM_OSSUPD_OSSUPH0     	(1 << 0)
#define PWM_OSSUPD_OSSUPH1     	(1 << 1)
#define PWM_OSSUPD_OSSUPH2     	(1 << 2)
#define PWM_OSSUPD_OSSUPH3     	(1 << 3)
#define PWM_OSSUPD_OSSUPL0     	(1 << 16)
#define PWM_OSSUPD_OSSUPL1     	(1 << 17)
#define PWM_OSSUPD_OSSUPL2     	(1 << 18)
#define PWM_OSSUPD_OSSUPL3     	(1 << 19)

struct __struct_PWM_OSSUPD
{
  uint32_t	ossuph0	: 1;
  uint32_t	ossuph1	: 1;
  uint32_t	ossuph2	: 1;
  uint32_t	ossuph3	: 1;
  uint32_t		: 12;
  uint32_t	ossupl0	: 1;
  uint32_t	ossupl1	: 1;
  uint32_t	ossupl2	: 1;
  uint32_t	ossupl3	: 1;
  uint32_t		: 12;
};

#define PWM_OSCUPD_OSCUPH0     	(1 << 0)
#define PWM_OSCUPD_OSCUPH1     	(1 << 1)
#define PWM_OSCUPD_OSCUPH2     	(1 << 2)
#define PWM_OSCUPD_OSCUPH3     	(1 << 3)
#define PWM_OSCUPD_OSCUPL0     	(1 << 16)
#define PWM_OSCUPD_OSCUPL1     	(1 << 17)
#define PWM_OSCUPD_OSCUPL2     	(1 << 18)
#define PWM_OSCUPD_OSCUPL3     	(1 << 19)

struct __struct_PWM_OSCUPD
{
  uint32_t	oscuph0	: 1;
  uint32_t	oscuph1	: 1;
  uint32_t	oscuph2	: 1;
  uint32_t	oscuph3	: 1;
  uint32_t		: 12;
  uint32_t	oscupl0	: 1;
  uint32_t	oscupl1	: 1;
  uint32_t	oscupl2	: 1;
  uint32_t	oscupl3	: 1;
  uint32_t		: 12;
};

#define PWM_FMR_FPOL(x)  	((x) << 0)
#define PWM_FMR_FPOL_m   	0x000000ff
#define PWM_FMR_FPOL_v(x)	(((x) >> 0) & 0xff)
#define PWM_FMR_FMOD(x)  	((x) << 8)
#define PWM_FMR_FMOD_m   	0x0000ff00
#define PWM_FMR_FMOD_v(x)	(((x) >> 8) & 0xff)
#define PWM_FMR_FFIL(x)  	((x) << 16)
#define PWM_FMR_FFIL_m   	0x00ff0000
#define PWM_FMR_FFIL_v(x)	(((x) >> 16) & 0xff)

struct __struct_PWM_FMR
{
  uint32_t	fpol	: 8;
  uint32_t	fmod	: 8;
  uint32_t	ffil	: 8;
  uint32_t		: 8;
};

#define PWM_FSR_FIV(x)  	((x) << 0)
#define PWM_FSR_FIV_m   	0x000000ff
#define PWM_FSR_FIV_v(x)	(((x) >> 0) & 0xff)
#define PWM_FSR_FS(x)  	((x) << 8)
#define PWM_FSR_FS_m   	0x0000ff00
#define PWM_FSR_FS_v(x)	(((x) >> 8) & 0xff)

struct __struct_PWM_FSR
{
  uint32_t	fiv	: 8;
  uint32_t	fs	: 8;
  uint32_t		: 16;
};

#define PWM_FCR_FCLR(x)  	((x) << 0)
#define PWM_FCR_FCLR_m   	0x000000ff
#define PWM_FCR_FCLR_v(x)	(((x) >> 0) & 0xff)

struct __struct_PWM_FCR
{
  uint32_t	fclr	: 8;
  uint32_t		: 24;
};

#define PWM_FPV_FPVH0     	(1 << 0)
#define PWM_FPV_FPVH1     	(1 << 1)
#define PWM_FPV_FPVH2     	(1 << 2)
#define PWM_FPV_FPVH3     	(1 << 3)
#define PWM_FPV_FPVL0     	(1 << 16)
#define PWM_FPV_FPVL1     	(1 << 17)
#define PWM_FPV_FPVL2     	(1 << 18)
#define PWM_FPV_FPVL3     	(1 << 19)

struct __struct_PWM_FPV
{
  uint32_t	fpvh0	: 1;
  uint32_t	fpvh1	: 1;
  uint32_t	fpvh2	: 1;
  uint32_t	fpvh3	: 1;
  uint32_t		: 12;
  uint32_t	fpvl0	: 1;
  uint32_t	fpvl1	: 1;
  uint32_t	fpvl2	: 1;
  uint32_t	fpvl3	: 1;
  uint32_t		: 12;
};

#define PWM_FPE_FPE0(x)  	((x) << 0)
#define PWM_FPE_FPE0_m   	0x000000ff
#define PWM_FPE_FPE0_v(x)	(((x) >> 0) & 0xff)
#define PWM_FPE_FPE1(x)  	((x) << 8)
#define PWM_FPE_FPE1_m   	0x0000ff00
#define PWM_FPE_FPE1_v(x)	(((x) >> 8) & 0xff)
#define PWM_FPE_FPE2(x)  	((x) << 16)
#define PWM_FPE_FPE2_m   	0x00ff0000
#define PWM_FPE_FPE2_v(x)	(((x) >> 16) & 0xff)
#define PWM_FPE_FPE3(x)  	((x) << 24)
#define PWM_FPE_FPE3_m   	0xff000000
#define PWM_FPE_FPE3_v(x)	(((x) >> 24) & 0xff)

struct __struct_PWM_FPE
{
  uint32_t	fpe0	: 8;
  uint32_t	fpe1	: 8;
  uint32_t	fpe2	: 8;
  uint32_t	fpe3	: 8;
};

#define PWM_ELMR_CSEL0     	(1 << 0)
#define PWM_ELMR_CSEL1     	(1 << 1)
#define PWM_ELMR_CSEL2     	(1 << 2)
#define PWM_ELMR_CSEL3     	(1 << 3)
#define PWM_ELMR_CSEL4     	(1 << 4)
#define PWM_ELMR_CSEL5     	(1 << 5)
#define PWM_ELMR_CSEL6     	(1 << 6)
#define PWM_ELMR_CSEL7     	(1 << 7)

struct __struct_PWM_ELMR
{
  uint32_t	csel0	: 1;
  uint32_t	csel1	: 1;
  uint32_t	csel2	: 1;
  uint32_t	csel3	: 1;
  uint32_t	csel4	: 1;
  uint32_t	csel5	: 1;
  uint32_t	csel6	: 1;
  uint32_t	csel7	: 1;
  uint32_t		: 24;
};

#define PWM_WPCR_WPCMD(x)  	((x) << 0)
#define PWM_WPCR_WPCMD_m   	0x00000003
#define PWM_WPCR_WPCMD_v(x)	(((x) >> 0) & 0x3)
#define PWM_WPCR_WPRG0     	(1 << 2)
#define PWM_WPCR_WPRG1     	(1 << 3)
#define PWM_WPCR_WPRG2     	(1 << 4)
#define PWM_WPCR_WPRG3     	(1 << 5)
#define PWM_WPCR_WPRG4     	(1 << 6)
#define PWM_WPCR_WPRG5     	(1 << 7)
#define PWM_WPCR_WPKEY(x)  	((x) << 8)
#define PWM_WPCR_WPKEY_m   	0xffffff00
#define PWM_WPCR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define PWM_WPCR_WPKEY_KEY	0x50574d

struct __struct_PWM_WPCR
{
  uint32_t	wpcmd	: 2;
  uint32_t	wprg0	: 1;
  uint32_t	wprg1	: 1;
  uint32_t	wprg2	: 1;
  uint32_t	wprg3	: 1;
  uint32_t	wprg4	: 1;
  uint32_t	wprg5	: 1;
  uint32_t	wpkey	: 24;
};

#define PWM_WPSR_WPSWS0     	(1 << 0)
#define PWM_WPSR_WPSWS1     	(1 << 1)
#define PWM_WPSR_WPSWS2     	(1 << 2)
#define PWM_WPSR_WPSWS3     	(1 << 3)
#define PWM_WPSR_WPSWS4     	(1 << 4)
#define PWM_WPSR_WPSWS5     	(1 << 5)
#define PWM_WPSR_WPVS     	(1 << 7)
#define PWM_WPSR_WPHWS0     	(1 << 8)
#define PWM_WPSR_WPHWS1     	(1 << 9)
#define PWM_WPSR_WPHWS2     	(1 << 10)
#define PWM_WPSR_WPHWS3     	(1 << 11)
#define PWM_WPSR_WPHWS4     	(1 << 12)
#define PWM_WPSR_WPHWS5     	(1 << 13)
#define PWM_WPSR_WPVSRC(x)  	((x) << 16)
#define PWM_WPSR_WPVSRC_m   	0xffff0000
#define PWM_WPSR_WPVSRC_v(x)	(((x) >> 16) & 0xffff)

struct __struct_PWM_WPSR
{
  uint32_t	wpsws0	: 1;
  uint32_t	wpsws1	: 1;
  uint32_t	wpsws2	: 1;
  uint32_t	wpsws3	: 1;
  uint32_t	wpsws4	: 1;
  uint32_t	wpsws5	: 1;
  uint32_t		: 1;
  uint32_t	wpvs	: 1;
  uint32_t	wphws0	: 1;
  uint32_t	wphws1	: 1;
  uint32_t	wphws2	: 1;
  uint32_t	wphws3	: 1;
  uint32_t	wphws4	: 1;
  uint32_t	wphws5	: 1;
  uint32_t		: 2;
  uint32_t	wpvsrc	: 16;
};

#define PWM_CMPV_CV(x)  	((x) << 0)
#define PWM_CMPV_CV_m   	0x00ffffff
#define PWM_CMPV_CV_v(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV_CVM     	(1 << 24)

struct __struct_PWM_CMPV
{
  uint32_t	cv	: 24;
  uint32_t	cvm	: 1;
  uint32_t		: 7;
};

#define PWM_CMPVUPD_CVUPD(x)  	((x) << 0)
#define PWM_CMPVUPD_CVUPD_m   	0x00ffffff
#define PWM_CMPVUPD_CVUPD_v(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD_CVMUPD     	(1 << 24)

struct __struct_PWM_CMPVUPD
{
  uint32_t	cvupd	: 24;
  uint32_t	cvmupd	: 1;
  uint32_t		: 7;
};

#define PWM_CMPM_CEN     	(1 << 0)
#define PWM_CMPM_CTR(x)  	((x) << 4)
#define PWM_CMPM_CTR_m   	0x000000f0
#define PWM_CMPM_CTR_v(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM_CPR(x)  	((x) << 8)
#define PWM_CMPM_CPR_m   	0x00000f00
#define PWM_CMPM_CPR_v(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM_CPRCNT(x)  	((x) << 12)
#define PWM_CMPM_CPRCNT_m   	0x0000f000
#define PWM_CMPM_CPRCNT_v(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM_CUPR(x)  	((x) << 16)
#define PWM_CMPM_CUPR_m   	0x000f0000
#define PWM_CMPM_CUPR_v(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM_CUPRCNT(x)  	((x) << 20)
#define PWM_CMPM_CUPRCNT_m   	0x00f00000
#define PWM_CMPM_CUPRCNT_v(x)	(((x) >> 20) & 0xf)

struct __struct_PWM_CMPM
{
  uint32_t	cen	: 1;
  uint32_t		: 3;
  uint32_t	ctr	: 4;
  uint32_t	cpr	: 4;
  uint32_t	cprcnt	: 4;
  uint32_t	cupr	: 4;
  uint32_t	cuprcnt	: 4;
  uint32_t		: 8;
};

#define PWM_CMPMUPD_CENUPD     	(1 << 0)
#define PWM_CMPMUPD_CTRUPD(x)  	((x) << 4)
#define PWM_CMPMUPD_CTRUPD_m   	0x000000f0
#define PWM_CMPMUPD_CTRUPD_v(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD_CPRUPD(x)  	((x) << 8)
#define PWM_CMPMUPD_CPRUPD_m   	0x00000f00
#define PWM_CMPMUPD_CPRUPD_v(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD_CUPRUPD(x)  	((x) << 16)
#define PWM_CMPMUPD_CUPRUPD_m   	0x000f0000
#define PWM_CMPMUPD_CUPRUPD_v(x)	(((x) >> 16) & 0xf)

struct __struct_PWM_CMPMUPD
{
  uint32_t	cenupd	: 1;
  uint32_t		: 3;
  uint32_t	ctrupd	: 4;
  uint32_t	cprupd	: 4;
  uint32_t		: 4;
  uint32_t	cuprupd	: 4;
  uint32_t		: 12;
};

#define PWM_CMR_CPRE(x)  	((x) << 0)
#define PWM_CMR_CPRE_m   	0x0000000f
#define PWM_CMR_CPRE_v(x)	(((x) >> 0) & 0xf)
#define PWM_CMR_CPRE_MCK	0x0
#define PWM_CMR_CPRE_MCK_DIV_2	0x1
#define PWM_CMR_CPRE_MCK_DIV_4	0x2
#define PWM_CMR_CPRE_MCK_DIV_8	0x3
#define PWM_CMR_CPRE_MCK_DIV_16	0x4
#define PWM_CMR_CPRE_MCK_DIV_32	0x5
#define PWM_CMR_CPRE_MCK_DIV_64	0x6
#define PWM_CMR_CPRE_MCK_DIV_128	0x7
#define PWM_CMR_CPRE_MCK_DIV_256	0x8
#define PWM_CMR_CPRE_MCK_DIV_512	0x9
#define PWM_CMR_CPRE_MCK_DIV_1024	0xa
#define PWM_CMR_CPRE_CLKA	0xb
#define PWM_CMR_CPRE_CLKB	0xc
#define PWM_CMR_CALG     	(1 << 8)
#define PWM_CMR_CPOL     	(1 << 9)
#define PWM_CMR_CES     	(1 << 10)
#define PWM_CMR_DTE     	(1 << 16)
#define PWM_CMR_DTHI     	(1 << 17)
#define PWM_CMR_DTLI     	(1 << 18)

struct __struct_PWM_CMR
{
  uint32_t	cpre	: 4;
  uint32_t		: 4;
  uint32_t	calg	: 1;
  uint32_t	cpol	: 1;
  uint32_t	ces	: 1;
  uint32_t		: 5;
  uint32_t	dte	: 1;
  uint32_t	dthi	: 1;
  uint32_t	dtli	: 1;
  uint32_t		: 13;
};

#define PWM_DT_DTH(x)  	((x) << 0)
#define PWM_DT_DTH_m   	0x0000ffff
#define PWM_DT_DTH_v(x)	(((x) >> 0) & 0xffff)
#define PWM_DT_DTL(x)  	((x) << 16)
#define PWM_DT_DTL_m   	0xffff0000
#define PWM_DT_DTL_v(x)	(((x) >> 16) & 0xffff)

struct __struct_PWM_DT
{
  uint32_t	dth	: 16;
  uint32_t	dtl	: 16;
};

#define PWM_DTUPD_DTHUPD(x)  	((x) << 0)
#define PWM_DTUPD_DTHUPD_m   	0x0000ffff
#define PWM_DTUPD_DTHUPD_v(x)	(((x) >> 0) & 0xffff)
#define PWM_DTUPD_DTLUPD(x)  	((x) << 16)
#define PWM_DTUPD_DTLUPD_m   	0xffff0000
#define PWM_DTUPD_DTLUPD_v(x)	(((x) >> 16) & 0xffff)

struct __struct_PWM_DTUPD
{
  uint32_t	dthupd	: 16;
  uint32_t	dtlupd	: 16;
};


// USART
#define USART_CR_RSTRX     	(1 << 2)
#define USART_CR_RSTTX     	(1 << 3)
#define USART_CR_RXEN     	(1 << 4)
#define USART_CR_RXDIS     	(1 << 5)
#define USART_CR_TXEN     	(1 << 6)
#define USART_CR_TXDIS     	(1 << 7)
#define USART_CR_RSTSTA     	(1 << 8)
#define USART_CR_STTBRK     	(1 << 9)
#define USART_CR_STPBRK     	(1 << 10)
#define USART_CR_STTTO     	(1 << 11)
#define USART_CR_SENDA     	(1 << 12)
#define USART_CR_RSTIT     	(1 << 13)
#define USART_CR_RSTNACK     	(1 << 14)
#define USART_CR_RETTO     	(1 << 15)
#define USART_CR_DTREN     	(1 << 16)
#define USART_CR_DTRDIS     	(1 << 17)
#define USART_CR_RTSEN     	(1 << 18)
#define USART_CR_FCS     	(1 << 18)
#define USART_CR_RTSDIS     	(1 << 19)
#define USART_CR_RCS     	(1 << 19)

struct __struct_USART_CR
{
  uint32_t		: 2;
  uint32_t	rstrx	: 1;
  uint32_t	rsttx	: 1;
  uint32_t	rxen	: 1;
  uint32_t	rxdis	: 1;
  uint32_t	txen	: 1;
  uint32_t	txdis	: 1;
  uint32_t	rststa	: 1;
  uint32_t	sttbrk	: 1;
  uint32_t	stpbrk	: 1;
  uint32_t	sttto	: 1;
  uint32_t	senda	: 1;
  uint32_t	rstit	: 1;
  uint32_t	rstnack	: 1;
  uint32_t	retto	: 1;
  uint32_t	dtren	: 1;
  uint32_t	dtrdis	: 1;
  uint32_t	rtsen	: 1;
  uint32_t	rtsdis	: 1;
  uint32_t		: 12;
};

#define USART_MR_USART_MODE(x)  	((x) << 0)
#define USART_MR_USART_MODE_m   	0x0000000f
#define USART_MR_USART_MODE_v(x)	(((x) >> 0) & 0xf)
#define USART_MR_USART_MODE_NORMAL	0x0
#define USART_MR_USART_MODE_RS485	0x1
#define USART_MR_USART_MODE_HW_HANDSHAKING	0x2
#define USART_MR_USART_MODE_MODEM	0x3
#define USART_MR_USART_MODE_IS07816_T_0	0x4
#define USART_MR_USART_MODE_IS07816_T_1	0x6
#define USART_MR_USART_MODE_IRDA	0x8
#define USART_MR_USART_MODE_SPI_MASTER	0xe
#define USART_MR_USART_MODE_SPI_SLAVE	0xf
#define USART_MR_USCLKS(x)  	((x) << 4)
#define USART_MR_USCLKS_m   	0x00000030
#define USART_MR_USCLKS_v(x)	(((x) >> 4) & 0x3)
#define USART_MR_USCLKS_MCK	0x0
#define USART_MR_USCLKS_DIV	0x1
#define USART_MR_USCLKS_SCK	0x3
#define USART_MR_CHRL(x)  	((x) << 6)
#define USART_MR_CHRL_m   	0x000000c0
#define USART_MR_CHRL_v(x)	(((x) >> 6) & 0x3)
#define USART_MR_CHRL_5_BIT	0x0
#define USART_MR_CHRL_6_BIT	0x1
#define USART_MR_CHRL_7_BIT	0x2
#define USART_MR_CHRL_8_BIT	0x3
#define USART_MR_SYNC     	(1 << 8)
#define USART_MR_CPHA     	(1 << 8)
#define USART_MR_PAR(x)  	((x) << 9)
#define USART_MR_PAR_m   	0x00000e00
#define USART_MR_PAR_v(x)	(((x) >> 9) & 0x7)
#define USART_MR_PAR_EVEN	0x0
#define USART_MR_PAR_ODD	0x1
#define USART_MR_PAR_SPACE	0x2
#define USART_MR_PAR_MARK	0x3
#define USART_MR_PAR_NO	0x4
#define USART_MR_PAR_MULTIDROP	0x6
#define USART_MR_NBSTOP(x)  	((x) << 12)
#define USART_MR_NBSTOP_m   	0x00003000
#define USART_MR_NBSTOP_v(x)	(((x) >> 12) & 0x3)
#define USART_MR_NBSTOP_1_BIT	0x0
#define USART_MR_NBSTOP_1_5_BIT	0x1
#define USART_MR_NBSTOP_2_BIT	0x2
#define USART_MR_CHMODE(x)  	((x) << 14)
#define USART_MR_CHMODE_m   	0x0000c000
#define USART_MR_CHMODE_v(x)	(((x) >> 14) & 0x3)
#define USART_MR_CHMODE_NORMAL	0x0
#define USART_MR_CHMODE_AUTOMATIC	0x1
#define USART_MR_CHMODE_LOCAL_LOOPBACK	0x2
#define USART_MR_CHMODE_REMOTE_LOOPBACK	0x3
#define USART_MR_MSBF     	(1 << 16)
#define USART_MR_CPOL     	(1 << 16)
#define USART_MR_MODE9     	(1 << 17)
#define USART_MR_CLKO     	(1 << 18)
#define USART_MR_OVER     	(1 << 19)
#define USART_MR_INACK     	(1 << 20)
#define USART_MR_DSNACK     	(1 << 21)
#define USART_MR_VAR_SYNC     	(1 << 22)
#define USART_MR_INVDATA     	(1 << 23)
#define USART_MR_MAX_ITERATION(x)  	((x) << 24)
#define USART_MR_MAX_ITERATION_m   	0x07000000
#define USART_MR_MAX_ITERATION_v(x)	(((x) >> 24) & 0x7)
#define USART_MR_FILTER     	(1 << 28)
#define USART_MR_MAN     	(1 << 29)
#define USART_MR_MODSYNC     	(1 << 30)
#define USART_MR_ONEBIT     	(1 << 31)

struct __struct_USART_MR
{
  uint32_t	usart_mode	: 4;
  uint32_t	usclks	: 2;
  uint32_t	chrl	: 2;
  uint32_t	sync	: 1;
  uint32_t	par	: 3;
  uint32_t	nbstop	: 2;
  uint32_t	chmode	: 2;
  uint32_t	msbf	: 1;
  uint32_t	mode9	: 1;
  uint32_t	clko	: 1;
  uint32_t	over	: 1;
  uint32_t	inack	: 1;
  uint32_t	dsnack	: 1;
  uint32_t	var_sync	: 1;
  uint32_t	invdata	: 1;
  uint32_t	max_iteration	: 3;
  uint32_t		: 1;
  uint32_t	filter	: 1;
  uint32_t	man	: 1;
  uint32_t	modsync	: 1;
  uint32_t	onebit	: 1;
};

#define USART_IER_RXRDY     	(1 << 0)
#define USART_IER_TXRDY     	(1 << 1)
#define USART_IER_RXBRK     	(1 << 2)
#define USART_IER_ENDRX     	(1 << 3)
#define USART_IER_ENDTX     	(1 << 4)
#define USART_IER_OVRE     	(1 << 5)
#define USART_IER_FRAME     	(1 << 6)
#define USART_IER_PARE     	(1 << 7)
#define USART_IER_TIMEOUT     	(1 << 8)
#define USART_IER_TXEMPTY     	(1 << 9)
#define USART_IER_ITER     	(1 << 10)
#define USART_IER_UNRE     	(1 << 10)
#define USART_IER_TXBUFE     	(1 << 11)
#define USART_IER_RXBUFF     	(1 << 12)
#define USART_IER_NACK     	(1 << 13)
#define USART_IER_RIIC     	(1 << 16)
#define USART_IER_DSRIC     	(1 << 17)
#define USART_IER_DCDIC     	(1 << 18)
#define USART_IER_CTSIC     	(1 << 19)
#define USART_IER_MANE     	(1 << 24)

struct __struct_USART_IER
{
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	rxbrk	: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	ovre	: 1;
  uint32_t	frame	: 1;
  uint32_t	pare	: 1;
  uint32_t	timeout	: 1;
  uint32_t	txempty	: 1;
  uint32_t	iter	: 1;
  uint32_t	txbufe	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t	nack	: 1;
  uint32_t		: 2;
  uint32_t	riic	: 1;
  uint32_t	dsric	: 1;
  uint32_t	dcdic	: 1;
  uint32_t	ctsic	: 1;
  uint32_t		: 4;
  uint32_t	mane	: 1;
  uint32_t		: 7;
};

#define USART_IDR_RXRDY     	(1 << 0)
#define USART_IDR_TXRDY     	(1 << 1)
#define USART_IDR_RXBRK     	(1 << 2)
#define USART_IDR_ENDRX     	(1 << 3)
#define USART_IDR_ENDTX     	(1 << 4)
#define USART_IDR_OVRE     	(1 << 5)
#define USART_IDR_FRAME     	(1 << 6)
#define USART_IDR_PARE     	(1 << 7)
#define USART_IDR_TIMEOUT     	(1 << 8)
#define USART_IDR_TXEMPTY     	(1 << 9)
#define USART_IDR_ITER     	(1 << 10)
#define USART_IDR_UNRE     	(1 << 10)
#define USART_IDR_TXBUFE     	(1 << 11)
#define USART_IDR_RXBUFF     	(1 << 12)
#define USART_IDR_NACK     	(1 << 13)
#define USART_IDR_RIIC     	(1 << 16)
#define USART_IDR_DSRIC     	(1 << 17)
#define USART_IDR_DCDIC     	(1 << 18)
#define USART_IDR_CTSIC     	(1 << 19)
#define USART_IDR_MANE     	(1 << 24)

struct __struct_USART_IDR
{
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	rxbrk	: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	ovre	: 1;
  uint32_t	frame	: 1;
  uint32_t	pare	: 1;
  uint32_t	timeout	: 1;
  uint32_t	txempty	: 1;
  uint32_t	iter	: 1;
  uint32_t	txbufe	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t	nack	: 1;
  uint32_t		: 2;
  uint32_t	riic	: 1;
  uint32_t	dsric	: 1;
  uint32_t	dcdic	: 1;
  uint32_t	ctsic	: 1;
  uint32_t		: 4;
  uint32_t	mane	: 1;
  uint32_t		: 7;
};

#define USART_IMR_RXRDY     	(1 << 0)
#define USART_IMR_TXRDY     	(1 << 1)
#define USART_IMR_RXBRK     	(1 << 2)
#define USART_IMR_ENDRX     	(1 << 3)
#define USART_IMR_ENDTX     	(1 << 4)
#define USART_IMR_OVRE     	(1 << 5)
#define USART_IMR_FRAME     	(1 << 6)
#define USART_IMR_PARE     	(1 << 7)
#define USART_IMR_TIMEOUT     	(1 << 8)
#define USART_IMR_TXEMPTY     	(1 << 9)
#define USART_IMR_ITER     	(1 << 10)
#define USART_IMR_UNRE     	(1 << 10)
#define USART_IMR_TXBUFE     	(1 << 11)
#define USART_IMR_RXBUFF     	(1 << 12)
#define USART_IMR_NACK     	(1 << 13)
#define USART_IMR_RIIC     	(1 << 16)
#define USART_IMR_DSRIC     	(1 << 17)
#define USART_IMR_DCDIC     	(1 << 18)
#define USART_IMR_CTSIC     	(1 << 19)
#define USART_IMR_MANE     	(1 << 24)

struct __struct_USART_IMR
{
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	rxbrk	: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	ovre	: 1;
  uint32_t	frame	: 1;
  uint32_t	pare	: 1;
  uint32_t	timeout	: 1;
  uint32_t	txempty	: 1;
  uint32_t	iter	: 1;
  uint32_t	txbufe	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t	nack	: 1;
  uint32_t		: 2;
  uint32_t	riic	: 1;
  uint32_t	dsric	: 1;
  uint32_t	dcdic	: 1;
  uint32_t	ctsic	: 1;
  uint32_t		: 4;
  uint32_t	mane	: 1;
  uint32_t		: 7;
};

#define USART_CSR_RXRDY     	(1 << 0)
#define USART_CSR_TXRDY     	(1 << 1)
#define USART_CSR_RXBRK     	(1 << 2)
#define USART_CSR_ENDRX     	(1 << 3)
#define USART_CSR_ENDTX     	(1 << 4)
#define USART_CSR_OVRE     	(1 << 5)
#define USART_CSR_FRAME     	(1 << 6)
#define USART_CSR_PARE     	(1 << 7)
#define USART_CSR_TIMEOUT     	(1 << 8)
#define USART_CSR_TXEMPTY     	(1 << 9)
#define USART_CSR_ITER     	(1 << 10)
#define USART_CSR_UNRE     	(1 << 10)
#define USART_CSR_TXBUFE     	(1 << 11)
#define USART_CSR_RXBUFF     	(1 << 12)
#define USART_CSR_NACK     	(1 << 13)
#define USART_CSR_RIIC     	(1 << 16)
#define USART_CSR_DSRIC     	(1 << 17)
#define USART_CSR_DCDIC     	(1 << 18)
#define USART_CSR_CTSIC     	(1 << 19)
#define USART_CSR_RI     	(1 << 20)
#define USART_CSR_DSR     	(1 << 21)
#define USART_CSR_DCD     	(1 << 22)
#define USART_CSR_CTS     	(1 << 23)
#define USART_CSR_MANERR     	(1 << 24)

struct __struct_USART_CSR
{
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t	rxbrk	: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	ovre	: 1;
  uint32_t	frame	: 1;
  uint32_t	pare	: 1;
  uint32_t	timeout	: 1;
  uint32_t	txempty	: 1;
  uint32_t	iter	: 1;
  uint32_t	txbufe	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t	nack	: 1;
  uint32_t		: 2;
  uint32_t	riic	: 1;
  uint32_t	dsric	: 1;
  uint32_t	dcdic	: 1;
  uint32_t	ctsic	: 1;
  uint32_t	ri	: 1;
  uint32_t	dsr	: 1;
  uint32_t	dcd	: 1;
  uint32_t	cts	: 1;
  uint32_t	manerr	: 1;
  uint32_t		: 7;
};

#define USART_RHR_RXCHR(x)  	((x) << 0)
#define USART_RHR_RXCHR_m   	0x000001ff
#define USART_RHR_RXCHR_v(x)	(((x) >> 0) & 0x1ff)
#define USART_RHR_RXSYNH     	(1 << 15)

struct __struct_USART_RHR
{
  uint32_t	rxchr	: 9;
  uint32_t		: 6;
  uint32_t	rxsynh	: 1;
  uint32_t		: 16;
};

#define USART_THR_TXCHR(x)  	((x) << 0)
#define USART_THR_TXCHR_m   	0x000001ff
#define USART_THR_TXCHR_v(x)	(((x) >> 0) & 0x1ff)
#define USART_THR_TXSYNH     	(1 << 15)

struct __struct_USART_THR
{
  uint32_t	txchr	: 9;
  uint32_t		: 6;
  uint32_t	txsynh	: 1;
  uint32_t		: 16;
};

#define USART_BRGR_CD(x)  	((x) << 0)
#define USART_BRGR_CD_m   	0x0000ffff
#define USART_BRGR_CD_v(x)	(((x) >> 0) & 0xffff)
#define USART_BRGR_FP(x)  	((x) << 16)
#define USART_BRGR_FP_m   	0x00070000
#define USART_BRGR_FP_v(x)	(((x) >> 16) & 0x7)

struct __struct_USART_BRGR
{
  uint32_t	cd	: 16;
  uint32_t	fp	: 3;
  uint32_t		: 13;
};

#define USART_RTOR_TO(x)  	((x) << 0)
#define USART_RTOR_TO_m   	0x0000ffff
#define USART_RTOR_TO_v(x)	(((x) >> 0) & 0xffff)

struct __struct_USART_RTOR
{
  uint32_t	to	: 16;
  uint32_t		: 16;
};

#define USART_TTGR_TG(x)  	((x) << 0)
#define USART_TTGR_TG_m   	0x000000ff
#define USART_TTGR_TG_v(x)	(((x) >> 0) & 0xff)

struct __struct_USART_TTGR
{
  uint32_t	tg	: 8;
  uint32_t		: 24;
};

#define USART_FIDI_FI_DI_RATIO(x)  	((x) << 0)
#define USART_FIDI_FI_DI_RATIO_m   	0x000007ff
#define USART_FIDI_FI_DI_RATIO_v(x)	(((x) >> 0) & 0x7ff)

struct __struct_USART_FIDI
{
  uint32_t	fi_di_ratio	: 11;
  uint32_t		: 21;
};

#define USART_NER_NB_ERRORS(x)  	((x) << 0)
#define USART_NER_NB_ERRORS_m   	0x000000ff
#define USART_NER_NB_ERRORS_v(x)	(((x) >> 0) & 0xff)

struct __struct_USART_NER
{
  uint32_t	nb_errors	: 8;
  uint32_t		: 24;
};

#define USART_IF_IRDA_FILTER(x)  	((x) << 0)
#define USART_IF_IRDA_FILTER_m   	0x000000ff
#define USART_IF_IRDA_FILTER_v(x)	(((x) >> 0) & 0xff)

struct __struct_USART_IF
{
  uint32_t	irda_filter	: 8;
  uint32_t		: 24;
};

#define USART_MAN_TX_PL(x)  	((x) << 0)
#define USART_MAN_TX_PL_m   	0x0000000f
#define USART_MAN_TX_PL_v(x)	(((x) >> 0) & 0xf)
#define USART_MAN_TX_PP(x)  	((x) << 8)
#define USART_MAN_TX_PP_m   	0x00000300
#define USART_MAN_TX_PP_v(x)	(((x) >> 8) & 0x3)
#define USART_MAN_TX_PP_ALL_ONE	0x0
#define USART_MAN_TX_PP_ALL_ZERO	0x1
#define USART_MAN_TX_PP_ZERO_ONE	0x2
#define USART_MAN_TX_PP_ONE_ZERO	0x3
#define USART_MAN_TX_MPOL     	(1 << 12)
#define USART_MAN_RX_PL(x)  	((x) << 16)
#define USART_MAN_RX_PL_m   	0x000f0000
#define USART_MAN_RX_PL_v(x)	(((x) >> 16) & 0xf)
#define USART_MAN_RX_PP(x)  	((x) << 24)
#define USART_MAN_RX_PP_m   	0x03000000
#define USART_MAN_RX_PP_v(x)	(((x) >> 24) & 0x3)
#define USART_MAN_RX_PP_ALL_ONE	0x0
#define USART_MAN_RX_PP_ALL_ZERO	0x1
#define USART_MAN_RX_PP_ZERO_ONE	0x2
#define USART_MAN_RX_PP_ONE_ZERO	0x3
#define USART_MAN_RX_MPOL     	(1 << 28)
#define USART_MAN_STUCKTO1     	(1 << 29)
#define USART_MAN_DRIFT     	(1 << 30)

struct __struct_USART_MAN
{
  uint32_t	tx_pl	: 4;
  uint32_t		: 4;
  uint32_t	tx_pp	: 2;
  uint32_t		: 2;
  uint32_t	tx_mpol	: 1;
  uint32_t		: 3;
  uint32_t	rx_pl	: 4;
  uint32_t		: 4;
  uint32_t	rx_pp	: 2;
  uint32_t		: 2;
  uint32_t	rx_mpol	: 1;
  uint32_t	stuckto1	: 1;
  uint32_t	drift	: 1;
  uint32_t		: 1;
};

#define USART_WPMR_WPEN     	(1 << 0)
#define USART_WPMR_WPKEY(x)  	((x) << 8)
#define USART_WPMR_WPKEY_m   	0xffffff00
#define USART_WPMR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define USART_WPMR_WPKEY_KEY	0x555341

struct __struct_USART_WPMR
{
  uint32_t	wpen	: 1;
  uint32_t		: 7;
  uint32_t	wpkey	: 24;
};

#define USART_WPSR_WPVS     	(1 << 0)
#define USART_WPSR_WPVSRC(x)  	((x) << 8)
#define USART_WPSR_WPVSRC_m   	0x00ffff00
#define USART_WPSR_WPVSRC_v(x)	(((x) >> 8) & 0xffff)

struct __struct_USART_WPSR
{
  uint32_t	wpvs	: 1;
  uint32_t		: 7;
  uint32_t	wpvsrc	: 16;
  uint32_t		: 8;
};


// UDPHS
#define UDPHS_CTRL_DEV_ADDR(x)  	((x) << 0)
#define UDPHS_CTRL_DEV_ADDR_m   	0x0000007f
#define UDPHS_CTRL_DEV_ADDR_v(x)	(((x) >> 0) & 0x7f)
#define UDPHS_CTRL_FADDR_EN     	(1 << 7)
#define UDPHS_CTRL_EN_UDPHS     	(1 << 8)
#define UDPHS_CTRL_DETACH     	(1 << 9)
#define UDPHS_CTRL_REWAKEUP     	(1 << 10)
#define UDPHS_CTRL_PULLD_DIS     	(1 << 11)

struct __struct_UDPHS_CTRL
{
  uint32_t	dev_addr	: 7;
  uint32_t	faddr_en	: 1;
  uint32_t	en_udphs	: 1;
  uint32_t	detach	: 1;
  uint32_t	rewakeup	: 1;
  uint32_t	pulld_dis	: 1;
  uint32_t		: 20;
};

#define UDPHS_FNUM_MICRO_FRAME_NUM(x)  	((x) << 0)
#define UDPHS_FNUM_MICRO_FRAME_NUM_m   	0x00000007
#define UDPHS_FNUM_MICRO_FRAME_NUM_v(x)	(((x) >> 0) & 0x7)
#define UDPHS_FNUM_FRAME_NUMBER(x)  	((x) << 3)
#define UDPHS_FNUM_FRAME_NUMBER_m   	0x00003ff8
#define UDPHS_FNUM_FRAME_NUMBER_v(x)	(((x) >> 3) & 0x7ff)
#define UDPHS_FNUM_FNUM_ERR     	(1 << 31)

struct __struct_UDPHS_FNUM
{
  uint32_t	micro_frame_num	: 3;
  uint32_t	frame_number	: 11;
  uint32_t		: 17;
  uint32_t	fnum_err	: 1;
};

#define UDPHS_IEN_DET_SUSPD     	(1 << 1)
#define UDPHS_IEN_MICRO_SOF     	(1 << 2)
#define UDPHS_IEN_INT_SOF     	(1 << 3)
#define UDPHS_IEN_ENDRESET     	(1 << 4)
#define UDPHS_IEN_WAKE_UP     	(1 << 5)
#define UDPHS_IEN_ENDOFRSM     	(1 << 6)
#define UDPHS_IEN_UPSTR_RES     	(1 << 7)
#define UDPHS_IEN_EPT_0     	(1 << 8)
#define UDPHS_IEN_EPT_1     	(1 << 9)
#define UDPHS_IEN_EPT_2     	(1 << 10)
#define UDPHS_IEN_EPT_3     	(1 << 11)
#define UDPHS_IEN_EPT_4     	(1 << 12)
#define UDPHS_IEN_EPT_5     	(1 << 13)
#define UDPHS_IEN_EPT_6     	(1 << 14)
#define UDPHS_IEN_DMA_1     	(1 << 25)
#define UDPHS_IEN_DMA_2     	(1 << 26)
#define UDPHS_IEN_DMA_3     	(1 << 27)
#define UDPHS_IEN_DMA_4     	(1 << 28)
#define UDPHS_IEN_DMA_5     	(1 << 29)
#define UDPHS_IEN_DMA_6     	(1 << 30)

struct __struct_UDPHS_IEN
{
  uint32_t		: 1;
  uint32_t	det_suspd	: 1;
  uint32_t	micro_sof	: 1;
  uint32_t	int_sof	: 1;
  uint32_t	endreset	: 1;
  uint32_t	wake_up	: 1;
  uint32_t	endofrsm	: 1;
  uint32_t	upstr_res	: 1;
  uint32_t	ept_0	: 1;
  uint32_t	ept_1	: 1;
  uint32_t	ept_2	: 1;
  uint32_t	ept_3	: 1;
  uint32_t	ept_4	: 1;
  uint32_t	ept_5	: 1;
  uint32_t	ept_6	: 1;
  uint32_t		: 10;
  uint32_t	dma_1	: 1;
  uint32_t	dma_2	: 1;
  uint32_t	dma_3	: 1;
  uint32_t	dma_4	: 1;
  uint32_t	dma_5	: 1;
  uint32_t	dma_6	: 1;
  uint32_t		: 1;
};

#define UDPHS_INTSTA_SPEED     	(1 << 0)
#define UDPHS_INTSTA_DET_SUSPD     	(1 << 1)
#define UDPHS_INTSTA_MICRO_SOF     	(1 << 2)
#define UDPHS_INTSTA_INT_SOF     	(1 << 3)
#define UDPHS_INTSTA_ENDRESET     	(1 << 4)
#define UDPHS_INTSTA_WAKE_UP     	(1 << 5)
#define UDPHS_INTSTA_ENDOFRSM     	(1 << 6)
#define UDPHS_INTSTA_UPSTR_RES     	(1 << 7)
#define UDPHS_INTSTA_EPT_0     	(1 << 8)
#define UDPHS_INTSTA_EPT_1     	(1 << 9)
#define UDPHS_INTSTA_EPT_2     	(1 << 10)
#define UDPHS_INTSTA_EPT_3     	(1 << 11)
#define UDPHS_INTSTA_EPT_4     	(1 << 12)
#define UDPHS_INTSTA_EPT_5     	(1 << 13)
#define UDPHS_INTSTA_EPT_6     	(1 << 14)
#define UDPHS_INTSTA_DMA_1     	(1 << 25)
#define UDPHS_INTSTA_DMA_2     	(1 << 26)
#define UDPHS_INTSTA_DMA_3     	(1 << 27)
#define UDPHS_INTSTA_DMA_4     	(1 << 28)
#define UDPHS_INTSTA_DMA_5     	(1 << 29)
#define UDPHS_INTSTA_DMA_6     	(1 << 30)

struct __struct_UDPHS_INTSTA
{
  uint32_t	speed	: 1;
  uint32_t	det_suspd	: 1;
  uint32_t	micro_sof	: 1;
  uint32_t	int_sof	: 1;
  uint32_t	endreset	: 1;
  uint32_t	wake_up	: 1;
  uint32_t	endofrsm	: 1;
  uint32_t	upstr_res	: 1;
  uint32_t	ept_0	: 1;
  uint32_t	ept_1	: 1;
  uint32_t	ept_2	: 1;
  uint32_t	ept_3	: 1;
  uint32_t	ept_4	: 1;
  uint32_t	ept_5	: 1;
  uint32_t	ept_6	: 1;
  uint32_t		: 10;
  uint32_t	dma_1	: 1;
  uint32_t	dma_2	: 1;
  uint32_t	dma_3	: 1;
  uint32_t	dma_4	: 1;
  uint32_t	dma_5	: 1;
  uint32_t	dma_6	: 1;
  uint32_t		: 1;
};

#define UDPHS_CLRINT_DET_SUSPD     	(1 << 1)
#define UDPHS_CLRINT_MICRO_SOF     	(1 << 2)
#define UDPHS_CLRINT_INT_SOF     	(1 << 3)
#define UDPHS_CLRINT_ENDRESET     	(1 << 4)
#define UDPHS_CLRINT_WAKE_UP     	(1 << 5)
#define UDPHS_CLRINT_ENDOFRSM     	(1 << 6)
#define UDPHS_CLRINT_UPSTR_RES     	(1 << 7)

struct __struct_UDPHS_CLRINT
{
  uint32_t		: 1;
  uint32_t	det_suspd	: 1;
  uint32_t	micro_sof	: 1;
  uint32_t	int_sof	: 1;
  uint32_t	endreset	: 1;
  uint32_t	wake_up	: 1;
  uint32_t	endofrsm	: 1;
  uint32_t	upstr_res	: 1;
  uint32_t		: 24;
};

#define UDPHS_EPTRST_EPT_0     	(1 << 0)
#define UDPHS_EPTRST_EPT_1     	(1 << 1)
#define UDPHS_EPTRST_EPT_2     	(1 << 2)
#define UDPHS_EPTRST_EPT_3     	(1 << 3)
#define UDPHS_EPTRST_EPT_4     	(1 << 4)
#define UDPHS_EPTRST_EPT_5     	(1 << 5)
#define UDPHS_EPTRST_EPT_6     	(1 << 6)

struct __struct_UDPHS_EPTRST
{
  uint32_t	ept_0	: 1;
  uint32_t	ept_1	: 1;
  uint32_t	ept_2	: 1;
  uint32_t	ept_3	: 1;
  uint32_t	ept_4	: 1;
  uint32_t	ept_5	: 1;
  uint32_t	ept_6	: 1;
  uint32_t		: 25;
};

#define UDPHS_TST_SPEED_CFG(x)  	((x) << 0)
#define UDPHS_TST_SPEED_CFG_m   	0x00000003
#define UDPHS_TST_SPEED_CFG_v(x)	(((x) >> 0) & 0x3)
#define UDPHS_TST_SPEED_CFG_NORMAL	0x0
#define UDPHS_TST_SPEED_CFG_HIGH_SPEED	0x2
#define UDPHS_TST_SPEED_CFG_FULL_SPEED	0x3
#define UDPHS_TST_TST_J     	(1 << 2)
#define UDPHS_TST_TST_K     	(1 << 3)
#define UDPHS_TST_TST_PKT     	(1 << 4)
#define UDPHS_TST_OPMODE2     	(1 << 5)

struct __struct_UDPHS_TST
{
  uint32_t	speed_cfg	: 2;
  uint32_t	tst_j	: 1;
  uint32_t	tst_k	: 1;
  uint32_t	tst_pkt	: 1;
  uint32_t	opmode2	: 1;
  uint32_t		: 26;
};

#define UDPHS_IPFEATURES_EPT_NBR_MAX(x)  	((x) << 0)
#define UDPHS_IPFEATURES_EPT_NBR_MAX_m   	0x0000000f
#define UDPHS_IPFEATURES_EPT_NBR_MAX_v(x)	(((x) >> 0) & 0xf)
#define UDPHS_IPFEATURES_DMA_CHANNEL_NBR(x)  	((x) << 4)
#define UDPHS_IPFEATURES_DMA_CHANNEL_NBR_m   	0x00000070
#define UDPHS_IPFEATURES_DMA_CHANNEL_NBR_v(x)	(((x) >> 4) & 0x7)
#define UDPHS_IPFEATURES_DMA_B_SIZ     	(1 << 7)
#define UDPHS_IPFEATURES_DMA_FIFO_WORD_DEPTH(x)  	((x) << 8)
#define UDPHS_IPFEATURES_DMA_FIFO_WORD_DEPTH_m   	0x00000f00
#define UDPHS_IPFEATURES_DMA_FIFO_WORD_DEPTH_v(x)	(((x) >> 8) & 0xf)
#define UDPHS_IPFEATURES_FIFO_MAX_SIZE(x)  	((x) << 12)
#define UDPHS_IPFEATURES_FIFO_MAX_SIZE_m   	0x00007000
#define UDPHS_IPFEATURES_FIFO_MAX_SIZE_v(x)	(((x) >> 12) & 0x7)
#define UDPHS_IPFEATURES_BW_DPRAM     	(1 << 15)
#define UDPHS_IPFEATURES_DATAB16_8     	(1 << 16)
#define UDPHS_IPFEATURES_ISO_EPT_1     	(1 << 17)
#define UDPHS_IPFEATURES_ISO_EPT_2     	(1 << 18)
#define UDPHS_IPFEATURES_ISO_EPT_3     	(1 << 19)
#define UDPHS_IPFEATURES_ISO_EPT_4     	(1 << 20)
#define UDPHS_IPFEATURES_ISO_EPT_5     	(1 << 21)
#define UDPHS_IPFEATURES_ISO_EPT_6     	(1 << 22)
#define UDPHS_IPFEATURES_ISO_EPT_7     	(1 << 23)
#define UDPHS_IPFEATURES_ISO_EPT_8     	(1 << 24)
#define UDPHS_IPFEATURES_ISO_EPT_9     	(1 << 25)
#define UDPHS_IPFEATURES_ISO_EPT_10     	(1 << 26)
#define UDPHS_IPFEATURES_ISO_EPT_11     	(1 << 27)
#define UDPHS_IPFEATURES_ISO_EPT_12     	(1 << 28)
#define UDPHS_IPFEATURES_ISO_EPT_13     	(1 << 29)
#define UDPHS_IPFEATURES_ISO_EPT_14     	(1 << 30)
#define UDPHS_IPFEATURES_ISO_EPT_15     	(1 << 31)

struct __struct_UDPHS_IPFEATURES
{
  uint32_t	ept_nbr_max	: 4;
  uint32_t	dma_channel_nbr	: 3;
  uint32_t	dma_b_siz	: 1;
  uint32_t	dma_fifo_word_depth	: 4;
  uint32_t	fifo_max_size	: 3;
  uint32_t	bw_dpram	: 1;
  uint32_t	datab16_8	: 1;
  uint32_t	iso_ept_1	: 1;
  uint32_t	iso_ept_2	: 1;
  uint32_t	iso_ept_3	: 1;
  uint32_t	iso_ept_4	: 1;
  uint32_t	iso_ept_5	: 1;
  uint32_t	iso_ept_6	: 1;
  uint32_t	iso_ept_7	: 1;
  uint32_t	iso_ept_8	: 1;
  uint32_t	iso_ept_9	: 1;
  uint32_t	iso_ept_10	: 1;
  uint32_t	iso_ept_11	: 1;
  uint32_t	iso_ept_12	: 1;
  uint32_t	iso_ept_13	: 1;
  uint32_t	iso_ept_14	: 1;
  uint32_t	iso_ept_15	: 1;
};

#define UDPHS_EPTCFG_EPT_SIZE(x)  	((x) << 0)
#define UDPHS_EPTCFG_EPT_SIZE_m   	0x00000007
#define UDPHS_EPTCFG_EPT_SIZE_v(x)	(((x) >> 0) & 0x7)
#define UDPHS_EPTCFG_EPT_SIZE_8	0x0
#define UDPHS_EPTCFG_EPT_SIZE_16	0x1
#define UDPHS_EPTCFG_EPT_SIZE_32	0x2
#define UDPHS_EPTCFG_EPT_SIZE_64	0x3
#define UDPHS_EPTCFG_EPT_SIZE_128	0x4
#define UDPHS_EPTCFG_EPT_SIZE_256	0x5
#define UDPHS_EPTCFG_EPT_SIZE_512	0x6
#define UDPHS_EPTCFG_EPT_SIZE_1024	0x7
#define UDPHS_EPTCFG_EPT_DIR     	(1 << 3)
#define UDPHS_EPTCFG_EPT_DIR_OUT	0x0
#define UDPHS_EPTCFG_EPT_DIR_IN	0x1
#define UDPHS_EPTCFG_EPT_TYPE(x)  	((x) << 4)
#define UDPHS_EPTCFG_EPT_TYPE_m   	0x00000030
#define UDPHS_EPTCFG_EPT_TYPE_v(x)	(((x) >> 4) & 0x3)
#define UDPHS_EPTCFG_EPT_TYPE_CTRL	0x0
#define UDPHS_EPTCFG_EPT_TYPE_ISO	0x1
#define UDPHS_EPTCFG_EPT_TYPE_BULK	0x2
#define UDPHS_EPTCFG_EPT_TYPE_INT	0x3
#define UDPHS_EPTCFG_BK_NUMBER(x)  	((x) << 6)
#define UDPHS_EPTCFG_BK_NUMBER_m   	0x000000c0
#define UDPHS_EPTCFG_BK_NUMBER_v(x)	(((x) >> 6) & 0x3)
#define UDPHS_EPTCFG_BK_NUMBER_0	0x0
#define UDPHS_EPTCFG_BK_NUMBER_1	0x1
#define UDPHS_EPTCFG_BK_NUMBER_2	0x2
#define UDPHS_EPTCFG_BK_NUMBER_3	0x3
#define UDPHS_EPTCFG_NB_TRANS(x)  	((x) << 8)
#define UDPHS_EPTCFG_NB_TRANS_m   	0x00000300
#define UDPHS_EPTCFG_NB_TRANS_v(x)	(((x) >> 8) & 0x3)
#define UDPHS_EPTCFG_EPT_MAPD     	(1 << 31)

struct __struct_UDPHS_EPTCFG
{
  uint32_t	ept_size	: 3;
  uint32_t	ept_dir	: 1;
  uint32_t	ept_type	: 2;
  uint32_t	bk_number	: 2;
  uint32_t	nb_trans	: 2;
  uint32_t		: 21;
  uint32_t	ept_mapd	: 1;
};

#define UDPHS_EPTCTLENB_EPT_ENABL     	(1 << 0)
#define UDPHS_EPTCTLENB_AUTO_VALID     	(1 << 1)
#define UDPHS_EPTCTLENB_INTDIS_DMA     	(1 << 3)
#define UDPHS_EPTCTLENB_NYET_DIS     	(1 << 4)
#define UDPHS_EPTCTLENB_DATAX_RX     	(1 << 6)
#define UDPHS_EPTCTLENB_MDATA_RX     	(1 << 7)
#define UDPHS_EPTCTLENB_ERR_OVFLW     	(1 << 8)
#define UDPHS_EPTCTLENB_RX_BK_RDY     	(1 << 9)
#define UDPHS_EPTCTLENB_TX_COMPLT     	(1 << 10)
#define UDPHS_EPTCTLENB_TX_PK_RDY     	(1 << 11)
#define UDPHS_EPTCTLENB_ERR_TRANS     	(1 << 11)
#define UDPHS_EPTCTLENB_RX_SETUP     	(1 << 12)
#define UDPHS_EPTCTLENB_ERR_FL_ISO     	(1 << 12)
#define UDPHS_EPTCTLENB_STALL_SNT     	(1 << 13)
#define UDPHS_EPTCTLENB_ERR_CRISO     	(1 << 13)
#define UDPHS_EPTCTLENB_ERR_NBTRA     	(1 << 13)
#define UDPHS_EPTCTLENB_NAK_IN     	(1 << 14)
#define UDPHS_EPTCTLENB_ERR_FLUSH     	(1 << 14)
#define UDPHS_EPTCTLENB_NAK_OUT     	(1 << 15)
#define UDPHS_EPTCTLENB_BUSY_BANK     	(1 << 18)
#define UDPHS_EPTCTLENB_SHRT_PCKT     	(1 << 31)

struct __struct_UDPHS_EPTCTLENB
{
  uint32_t	ept_enabl	: 1;
  uint32_t	auto_valid	: 1;
  uint32_t		: 1;
  uint32_t	intdis_dma	: 1;
  uint32_t	nyet_dis	: 1;
  uint32_t		: 1;
  uint32_t	datax_rx	: 1;
  uint32_t	mdata_rx	: 1;
  uint32_t	err_ovflw	: 1;
  uint32_t	rx_bk_rdy	: 1;
  uint32_t	tx_complt	: 1;
  uint32_t	tx_pk_rdy	: 1;
  uint32_t	rx_setup	: 1;
  uint32_t	stall_snt	: 1;
  uint32_t	nak_in	: 1;
  uint32_t	nak_out	: 1;
  uint32_t		: 2;
  uint32_t	busy_bank	: 1;
  uint32_t		: 12;
  uint32_t	shrt_pckt	: 1;
};

#define UDPHS_EPTCTLDIS_EPT_ENABL     	(1 << 0)
#define UDPHS_EPTCTLDIS_AUTO_VALID     	(1 << 1)
#define UDPHS_EPTCTLDIS_INTDIS_DMA     	(1 << 3)
#define UDPHS_EPTCTLDIS_NYET_DIS     	(1 << 4)
#define UDPHS_EPTCTLDIS_DATAX_RX     	(1 << 6)
#define UDPHS_EPTCTLDIS_MDATA_RX     	(1 << 7)
#define UDPHS_EPTCTLDIS_ERR_OVFLW     	(1 << 8)
#define UDPHS_EPTCTLDIS_RX_BK_RDY     	(1 << 9)
#define UDPHS_EPTCTLDIS_TX_COMPLT     	(1 << 10)
#define UDPHS_EPTCTLDIS_TX_PK_RDY     	(1 << 11)
#define UDPHS_EPTCTLDIS_ERR_TRANS     	(1 << 11)
#define UDPHS_EPTCTLDIS_RX_SETUP     	(1 << 12)
#define UDPHS_EPTCTLDIS_ERR_FL_ISO     	(1 << 12)
#define UDPHS_EPTCTLDIS_STALL_SNT     	(1 << 13)
#define UDPHS_EPTCTLDIS_ERR_CRISO     	(1 << 13)
#define UDPHS_EPTCTLDIS_ERR_NBTRA     	(1 << 13)
#define UDPHS_EPTCTLDIS_NAK_IN     	(1 << 14)
#define UDPHS_EPTCTLDIS_ERR_FLUSH     	(1 << 14)
#define UDPHS_EPTCTLDIS_NAK_OUT     	(1 << 15)
#define UDPHS_EPTCTLDIS_BUSY_BANK     	(1 << 18)
#define UDPHS_EPTCTLDIS_SHRT_PCKT     	(1 << 31)

struct __struct_UDPHS_EPTCTLDIS
{
  uint32_t	ept_enabl	: 1;
  uint32_t	auto_valid	: 1;
  uint32_t		: 1;
  uint32_t	intdis_dma	: 1;
  uint32_t	nyet_dis	: 1;
  uint32_t		: 1;
  uint32_t	datax_rx	: 1;
  uint32_t	mdata_rx	: 1;
  uint32_t	err_ovflw	: 1;
  uint32_t	rx_bk_rdy	: 1;
  uint32_t	tx_complt	: 1;
  uint32_t	tx_pk_rdy	: 1;
  uint32_t	rx_setup	: 1;
  uint32_t	stall_snt	: 1;
  uint32_t	nak_in	: 1;
  uint32_t	nak_out	: 1;
  uint32_t		: 2;
  uint32_t	busy_bank	: 1;
  uint32_t		: 12;
  uint32_t	shrt_pckt	: 1;
};

#define UDPHS_EPTCTL_EPT_ENABL     	(1 << 0)
#define UDPHS_EPTCTL_AUTO_VALID     	(1 << 1)
#define UDPHS_EPTCTL_INTDIS_DMA     	(1 << 3)
#define UDPHS_EPTCTL_NYET_DIS     	(1 << 4)
#define UDPHS_EPTCTL_DATAX_RX     	(1 << 6)
#define UDPHS_EPTCTL_MDATA_RX     	(1 << 7)
#define UDPHS_EPTCTL_ERR_OVFLW     	(1 << 8)
#define UDPHS_EPTCTL_RX_BK_RDY     	(1 << 9)
#define UDPHS_EPTCTL_TX_COMPLT     	(1 << 10)
#define UDPHS_EPTCTL_TX_PK_RDY     	(1 << 11)
#define UDPHS_EPTCTL_ERR_TRANS     	(1 << 11)
#define UDPHS_EPTCTL_RX_SETUP     	(1 << 12)
#define UDPHS_EPTCTL_ERR_FL_ISO     	(1 << 12)
#define UDPHS_EPTCTL_STALL_SNT     	(1 << 13)
#define UDPHS_EPTCTL_ERR_CRISO     	(1 << 13)
#define UDPHS_EPTCTL_ERR_NBTRA     	(1 << 13)
#define UDPHS_EPTCTL_NAK_IN     	(1 << 14)
#define UDPHS_EPTCTL_ERR_FLUSH     	(1 << 14)
#define UDPHS_EPTCTL_NAK_OUT     	(1 << 15)
#define UDPHS_EPTCTL_BUSY_BANK     	(1 << 18)
#define UDPHS_EPTCTL_SHRT_PCKT     	(1 << 31)

struct __struct_UDPHS_EPTCTL
{
  uint32_t	ept_enabl	: 1;
  uint32_t	auto_valid	: 1;
  uint32_t		: 1;
  uint32_t	intdis_dma	: 1;
  uint32_t	nyet_dis	: 1;
  uint32_t		: 1;
  uint32_t	datax_rx	: 1;
  uint32_t	mdata_rx	: 1;
  uint32_t	err_ovflw	: 1;
  uint32_t	rx_bk_rdy	: 1;
  uint32_t	tx_complt	: 1;
  uint32_t	tx_pk_rdy	: 1;
  uint32_t	rx_setup	: 1;
  uint32_t	stall_snt	: 1;
  uint32_t	nak_in	: 1;
  uint32_t	nak_out	: 1;
  uint32_t		: 2;
  uint32_t	busy_bank	: 1;
  uint32_t		: 12;
  uint32_t	shrt_pckt	: 1;
};

#define UDPHS_EPTSETSTA_FRCESTALL     	(1 << 5)
#define UDPHS_EPTSETSTA_KILL_BANK     	(1 << 9)
#define UDPHS_EPTSETSTA_TX_PK_RDY     	(1 << 11)

struct __struct_UDPHS_EPTSETSTA
{
  uint32_t		: 5;
  uint32_t	frcestall	: 1;
  uint32_t		: 3;
  uint32_t	kill_bank	: 1;
  uint32_t		: 1;
  uint32_t	tx_pk_rdy	: 1;
  uint32_t		: 20;
};

#define UDPHS_EPTCLRSTA_FRCESTALL     	(1 << 5)
#define UDPHS_EPTCLRSTA_TOGGLESQ     	(1 << 6)
#define UDPHS_EPTCLRSTA_RX_BK_RDY     	(1 << 9)
#define UDPHS_EPTCLRSTA_TX_COMPLT     	(1 << 10)
#define UDPHS_EPTCLRSTA_RX_SETUP     	(1 << 12)
#define UDPHS_EPTCLRSTA_ERR_FL_ISO     	(1 << 12)
#define UDPHS_EPTCLRSTA_STALL_SNT     	(1 << 13)
#define UDPHS_EPTCLRSTA_ERR_NBTRA     	(1 << 13)
#define UDPHS_EPTCLRSTA_NAK_IN     	(1 << 14)
#define UDPHS_EPTCLRSTA_ERR_FLUSH     	(1 << 14)
#define UDPHS_EPTCLRSTA_NAK_OUT     	(1 << 15)

struct __struct_UDPHS_EPTCLRSTA
{
  uint32_t		: 5;
  uint32_t	frcestall	: 1;
  uint32_t	togglesq	: 1;
  uint32_t		: 2;
  uint32_t	rx_bk_rdy	: 1;
  uint32_t	tx_complt	: 1;
  uint32_t		: 1;
  uint32_t	rx_setup	: 1;
  uint32_t	stall_snt	: 1;
  uint32_t	nak_in	: 1;
  uint32_t	nak_out	: 1;
  uint32_t		: 16;
};

#define UDPHS_EPTSTA_FRCESTALL     	(1 << 5)
#define UDPHS_EPTSTA_TOGGLESQ_STA(x)  	((x) << 6)
#define UDPHS_EPTSTA_TOGGLESQ_STA_m   	0x000000c0
#define UDPHS_EPTSTA_TOGGLESQ_STA_v(x)	(((x) >> 6) & 0x3)
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA0	0x0
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA1	0x1
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA2	0x2
#define UDPHS_EPTSTA_TOGGLESQ_STA_MDATA	0x3
#define UDPHS_EPTSTA_ERR_OVFLW     	(1 << 8)
#define UDPHS_EPTSTA_RX_BK_RDY     	(1 << 9)
#define UDPHS_EPTSTA_KILL_BANK     	(1 << 9)
#define UDPHS_EPTSTA_TX_COMPLT     	(1 << 10)
#define UDPHS_EPTSTA_TX_PK_RDY     	(1 << 11)
#define UDPHS_EPTSTA_ERR_TRANS     	(1 << 11)
#define UDPHS_EPTSTA_RX_SETUP     	(1 << 12)
#define UDPHS_EPTSTA_ERR_FL_ISO     	(1 << 12)
#define UDPHS_EPTSTA_STALL_SNT     	(1 << 13)
#define UDPHS_EPTSTA_ERR_CRISO     	(1 << 13)
#define UDPHS_EPTSTA_ERR_NBTRA     	(1 << 13)
#define UDPHS_EPTSTA_NAK_IN     	(1 << 14)
#define UDPHS_EPTSTA_ERR_FLUSH     	(1 << 14)
#define UDPHS_EPTSTA_NAK_OUT     	(1 << 15)
#define UDPHS_EPTSTA_CURRENT_BANK(x)  	((x) << 16)
#define UDPHS_EPTSTA_CURRENT_BANK_m   	0x00030000
#define UDPHS_EPTSTA_CURRENT_BANK_v(x)	(((x) >> 16) & 0x3)
#define UDPHS_EPTSTA_CONTROL_DIR(x)  	((x) << 16)
#define UDPHS_EPTSTA_CONTROL_DIR_m   	0x00030000
#define UDPHS_EPTSTA_CONTROL_DIR_v(x)	(((x) >> 16) & 0x3)
#define UDPHS_EPTSTA_BUSY_BANK_STA(x)  	((x) << 18)
#define UDPHS_EPTSTA_BUSY_BANK_STA_m   	0x000c0000
#define UDPHS_EPTSTA_BUSY_BANK_STA_v(x)	(((x) >> 18) & 0x3)
#define UDPHS_EPTSTA_BUSY_BANK_STA_1	0x0
#define UDPHS_EPTSTA_BUSY_BANK_STA_2	0x1
#define UDPHS_EPTSTA_BUSY_BANK_STA_3	0x2
#define UDPHS_EPTSTA_BYTE_COUNT(x)  	((x) << 20)
#define UDPHS_EPTSTA_BYTE_COUNT_m   	0x7ff00000
#define UDPHS_EPTSTA_BYTE_COUNT_v(x)	(((x) >> 20) & 0x7ff)
#define UDPHS_EPTSTA_SHRT_PCKT     	(1 << 31)

struct __struct_UDPHS_EPTSTA
{
  uint32_t		: 5;
  uint32_t	frcestall	: 1;
  uint32_t	togglesq_sta	: 2;
  uint32_t	err_ovflw	: 1;
  uint32_t	rx_bk_rdy	: 1;
  uint32_t	tx_complt	: 1;
  uint32_t	tx_pk_rdy	: 1;
  uint32_t	rx_setup	: 1;
  uint32_t	stall_snt	: 1;
  uint32_t	nak_in	: 1;
  uint32_t	nak_out	: 1;
  uint32_t	current_bank	: 2;
  uint32_t	busy_bank_sta	: 2;
  uint32_t	byte_count	: 11;
  uint32_t	shrt_pckt	: 1;
};

#define UDPHS_DMANXTDSC_NXT_DSC_ADD(x)  	((x) << 0)
#define UDPHS_DMANXTDSC_NXT_DSC_ADD_m   	0xffffffff
#define UDPHS_DMANXTDSC_NXT_DSC_ADD_v(x)	(((x) >> 0) & 0xffffffff)

struct __struct_UDPHS_DMANXTDSC
{
  uint32_t	nxt_dsc_add	: 32;
};

#define UDPHS_DMAADDRESS_BUFF_ADD(x)  	((x) << 0)
#define UDPHS_DMAADDRESS_BUFF_ADD_m   	0xffffffff
#define UDPHS_DMAADDRESS_BUFF_ADD_v(x)	(((x) >> 0) & 0xffffffff)

struct __struct_UDPHS_DMAADDRESS
{
  uint32_t	buff_add	: 32;
};

#define UDPHS_DMACONTROL_CHANN_ENB     	(1 << 0)
#define UDPHS_DMACONTROL_LDNXT_DSC     	(1 << 1)
#define UDPHS_DMACONTROL_END_TR_EN     	(1 << 2)
#define UDPHS_DMACONTROL_END_B_EN     	(1 << 3)
#define UDPHS_DMACONTROL_END_TR_IT     	(1 << 4)
#define UDPHS_DMACONTROL_END_BUFFIT     	(1 << 5)
#define UDPHS_DMACONTROL_DESC_LD_IT     	(1 << 6)
#define UDPHS_DMACONTROL_BURST_LCK     	(1 << 7)
#define UDPHS_DMACONTROL_BUFF_LENGTH(x)  	((x) << 16)
#define UDPHS_DMACONTROL_BUFF_LENGTH_m   	0xffff0000
#define UDPHS_DMACONTROL_BUFF_LENGTH_v(x)	(((x) >> 16) & 0xffff)

struct __struct_UDPHS_DMACONTROL
{
  uint32_t	chann_enb	: 1;
  uint32_t	ldnxt_dsc	: 1;
  uint32_t	end_tr_en	: 1;
  uint32_t	end_b_en	: 1;
  uint32_t	end_tr_it	: 1;
  uint32_t	end_buffit	: 1;
  uint32_t	desc_ld_it	: 1;
  uint32_t	burst_lck	: 1;
  uint32_t		: 8;
  uint32_t	buff_length	: 16;
};

#define UDPHS_DMASTATUS_CHANN_ENB     	(1 << 0)
#define UDPHS_DMASTATUS_CHANN_ACT     	(1 << 1)
#define UDPHS_DMASTATUS_END_TR_ST     	(1 << 4)
#define UDPHS_DMASTATUS_END_BF_ST     	(1 << 5)
#define UDPHS_DMASTATUS_DESC_LDST     	(1 << 6)
#define UDPHS_DMASTATUS_BUFF_COUNT(x)  	((x) << 16)
#define UDPHS_DMASTATUS_BUFF_COUNT_m   	0xffff0000
#define UDPHS_DMASTATUS_BUFF_COUNT_v(x)	(((x) >> 16) & 0xffff)

struct __struct_UDPHS_DMASTATUS
{
  uint32_t	chann_enb	: 1;
  uint32_t	chann_act	: 1;
  uint32_t		: 2;
  uint32_t	end_tr_st	: 1;
  uint32_t	end_bf_st	: 1;
  uint32_t	desc_ldst	: 1;
  uint32_t		: 9;
  uint32_t	buff_count	: 16;
};


// ADC12B
#define ADC12B_CR_SWRST     	(1 << 0)
#define ADC12B_CR_START     	(1 << 1)

struct __struct_ADC12B_CR
{
  uint32_t	swrst	: 1;
  uint32_t	start	: 1;
  uint32_t		: 30;
};

#define ADC12B_MR_TRGEN     	(1 << 0)
#define ADC12B_MR_TRGSEL(x)  	((x) << 1)
#define ADC12B_MR_TRGSEL_m   	0x0000000e
#define ADC12B_MR_TRGSEL_v(x)	(((x) >> 1) & 0x7)
#define ADC12B_MR_TRGSEL_EXT	0x0
#define ADC12B_MR_TRGSEL_TC_0	0x1
#define ADC12B_MR_TRGSEL_TC_1	0x2
#define ADC12B_MR_TRGSEL_TC_2	0x3
#define ADC12B_MR_TRGSEL_PWM_0	0x4
#define ADC12B_MR_TRGSEL_PWM_1	0x5
#define ADC12B_MR_LOWRES     	(1 << 4)
#define ADC12B_MR_SLEEP     	(1 << 5)
#define ADC12B_MR_PRESCAL(x)  	((x) << 8)
#define ADC12B_MR_PRESCAL_m   	0x0000ff00
#define ADC12B_MR_PRESCAL_v(x)	(((x) >> 8) & 0xff)
#define ADC12B_MR_STARTUP(x)  	((x) << 16)
#define ADC12B_MR_STARTUP_m   	0x00ff0000
#define ADC12B_MR_STARTUP_v(x)	(((x) >> 16) & 0xff)
#define ADC12B_MR_SHTIM(x)  	((x) << 24)
#define ADC12B_MR_SHTIM_m   	0x0f000000
#define ADC12B_MR_SHTIM_v(x)	(((x) >> 24) & 0xf)

struct __struct_ADC12B_MR
{
  uint32_t	trgen	: 1;
  uint32_t	trgsel	: 3;
  uint32_t	lowres	: 1;
  uint32_t	sleep	: 1;
  uint32_t		: 2;
  uint32_t	prescal	: 8;
  uint32_t	startup	: 8;
  uint32_t	shtim	: 4;
  uint32_t		: 4;
};

#define ADC12B_CHER_CH0     	(1 << 0)
#define ADC12B_CHER_CH1     	(1 << 1)
#define ADC12B_CHER_CH2     	(1 << 2)
#define ADC12B_CHER_CH3     	(1 << 3)
#define ADC12B_CHER_CH4     	(1 << 4)
#define ADC12B_CHER_CH5     	(1 << 5)
#define ADC12B_CHER_CH6     	(1 << 6)
#define ADC12B_CHER_CH7     	(1 << 7)

struct __struct_ADC12B_CHER
{
  uint32_t	ch0	: 1;
  uint32_t	ch1	: 1;
  uint32_t	ch2	: 1;
  uint32_t	ch3	: 1;
  uint32_t	ch4	: 1;
  uint32_t	ch5	: 1;
  uint32_t	ch6	: 1;
  uint32_t	ch7	: 1;
  uint32_t		: 24;
};

#define ADC12B_CHDR_CH0     	(1 << 0)
#define ADC12B_CHDR_CH1     	(1 << 1)
#define ADC12B_CHDR_CH2     	(1 << 2)
#define ADC12B_CHDR_CH3     	(1 << 3)
#define ADC12B_CHDR_CH4     	(1 << 4)
#define ADC12B_CHDR_CH5     	(1 << 5)
#define ADC12B_CHDR_CH6     	(1 << 6)
#define ADC12B_CHDR_CH7     	(1 << 7)

struct __struct_ADC12B_CHDR
{
  uint32_t	ch0	: 1;
  uint32_t	ch1	: 1;
  uint32_t	ch2	: 1;
  uint32_t	ch3	: 1;
  uint32_t	ch4	: 1;
  uint32_t	ch5	: 1;
  uint32_t	ch6	: 1;
  uint32_t	ch7	: 1;
  uint32_t		: 24;
};

#define ADC12B_CHSR_CH0     	(1 << 0)
#define ADC12B_CHSR_CH1     	(1 << 1)
#define ADC12B_CHSR_CH2     	(1 << 2)
#define ADC12B_CHSR_CH3     	(1 << 3)
#define ADC12B_CHSR_CH4     	(1 << 4)
#define ADC12B_CHSR_CH5     	(1 << 5)
#define ADC12B_CHSR_CH6     	(1 << 6)
#define ADC12B_CHSR_CH7     	(1 << 7)

struct __struct_ADC12B_CHSR
{
  uint32_t	ch0	: 1;
  uint32_t	ch1	: 1;
  uint32_t	ch2	: 1;
  uint32_t	ch3	: 1;
  uint32_t	ch4	: 1;
  uint32_t	ch5	: 1;
  uint32_t	ch6	: 1;
  uint32_t	ch7	: 1;
  uint32_t		: 24;
};

#define ADC12B_SR_EOC0     	(1 << 0)
#define ADC12B_SR_EOC1     	(1 << 1)
#define ADC12B_SR_EOC2     	(1 << 2)
#define ADC12B_SR_EOC3     	(1 << 3)
#define ADC12B_SR_EOC4     	(1 << 4)
#define ADC12B_SR_EOC5     	(1 << 5)
#define ADC12B_SR_EOC6     	(1 << 6)
#define ADC12B_SR_EOC7     	(1 << 7)
#define ADC12B_SR_OVRE0     	(1 << 8)
#define ADC12B_SR_OVRE1     	(1 << 9)
#define ADC12B_SR_OVRE2     	(1 << 10)
#define ADC12B_SR_OVRE3     	(1 << 11)
#define ADC12B_SR_OVRE4     	(1 << 12)
#define ADC12B_SR_OVRE5     	(1 << 13)
#define ADC12B_SR_OVRE6     	(1 << 14)
#define ADC12B_SR_OVRE7     	(1 << 15)
#define ADC12B_SR_DRDY     	(1 << 16)
#define ADC12B_SR_GOVRE     	(1 << 17)
#define ADC12B_SR_ENDRX     	(1 << 18)
#define ADC12B_SR_RXBUFF     	(1 << 19)

struct __struct_ADC12B_SR
{
  uint32_t	eoc0	: 1;
  uint32_t	eoc1	: 1;
  uint32_t	eoc2	: 1;
  uint32_t	eoc3	: 1;
  uint32_t	eoc4	: 1;
  uint32_t	eoc5	: 1;
  uint32_t	eoc6	: 1;
  uint32_t	eoc7	: 1;
  uint32_t	ovre0	: 1;
  uint32_t	ovre1	: 1;
  uint32_t	ovre2	: 1;
  uint32_t	ovre3	: 1;
  uint32_t	ovre4	: 1;
  uint32_t	ovre5	: 1;
  uint32_t	ovre6	: 1;
  uint32_t	ovre7	: 1;
  uint32_t	drdy	: 1;
  uint32_t	govre	: 1;
  uint32_t	endrx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 12;
};

#define ADC12B_LCDR_LDATA(x)  	((x) << 0)
#define ADC12B_LCDR_LDATA_m   	0x00000fff
#define ADC12B_LCDR_LDATA_v(x)	(((x) >> 0) & 0xfff)

struct __struct_ADC12B_LCDR
{
  uint32_t	ldata	: 12;
  uint32_t		: 20;
};

#define ADC12B_IER_EOC0     	(1 << 0)
#define ADC12B_IER_EOC1     	(1 << 1)
#define ADC12B_IER_EOC2     	(1 << 2)
#define ADC12B_IER_EOC3     	(1 << 3)
#define ADC12B_IER_EOC4     	(1 << 4)
#define ADC12B_IER_EOC5     	(1 << 5)
#define ADC12B_IER_EOC6     	(1 << 6)
#define ADC12B_IER_EOC7     	(1 << 7)
#define ADC12B_IER_OVRE0     	(1 << 8)
#define ADC12B_IER_OVRE1     	(1 << 9)
#define ADC12B_IER_OVRE2     	(1 << 10)
#define ADC12B_IER_OVRE3     	(1 << 11)
#define ADC12B_IER_OVRE4     	(1 << 12)
#define ADC12B_IER_OVRE5     	(1 << 13)
#define ADC12B_IER_OVRE6     	(1 << 14)
#define ADC12B_IER_OVRE7     	(1 << 15)
#define ADC12B_IER_DRDY     	(1 << 16)
#define ADC12B_IER_GOVRE     	(1 << 17)
#define ADC12B_IER_ENDRX     	(1 << 18)
#define ADC12B_IER_RXBUFF     	(1 << 19)

struct __struct_ADC12B_IER
{
  uint32_t	eoc0	: 1;
  uint32_t	eoc1	: 1;
  uint32_t	eoc2	: 1;
  uint32_t	eoc3	: 1;
  uint32_t	eoc4	: 1;
  uint32_t	eoc5	: 1;
  uint32_t	eoc6	: 1;
  uint32_t	eoc7	: 1;
  uint32_t	ovre0	: 1;
  uint32_t	ovre1	: 1;
  uint32_t	ovre2	: 1;
  uint32_t	ovre3	: 1;
  uint32_t	ovre4	: 1;
  uint32_t	ovre5	: 1;
  uint32_t	ovre6	: 1;
  uint32_t	ovre7	: 1;
  uint32_t	drdy	: 1;
  uint32_t	govre	: 1;
  uint32_t	endrx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 12;
};

#define ADC12B_IDR_EOC0     	(1 << 0)
#define ADC12B_IDR_EOC1     	(1 << 1)
#define ADC12B_IDR_EOC2     	(1 << 2)
#define ADC12B_IDR_EOC3     	(1 << 3)
#define ADC12B_IDR_EOC4     	(1 << 4)
#define ADC12B_IDR_EOC5     	(1 << 5)
#define ADC12B_IDR_EOC6     	(1 << 6)
#define ADC12B_IDR_EOC7     	(1 << 7)
#define ADC12B_IDR_OVRE0     	(1 << 8)
#define ADC12B_IDR_OVRE1     	(1 << 9)
#define ADC12B_IDR_OVRE2     	(1 << 10)
#define ADC12B_IDR_OVRE3     	(1 << 11)
#define ADC12B_IDR_OVRE4     	(1 << 12)
#define ADC12B_IDR_OVRE5     	(1 << 13)
#define ADC12B_IDR_OVRE6     	(1 << 14)
#define ADC12B_IDR_OVRE7     	(1 << 15)
#define ADC12B_IDR_DRDY     	(1 << 16)
#define ADC12B_IDR_GOVRE     	(1 << 17)
#define ADC12B_IDR_ENDRX     	(1 << 18)
#define ADC12B_IDR_RXBUFF     	(1 << 19)

struct __struct_ADC12B_IDR
{
  uint32_t	eoc0	: 1;
  uint32_t	eoc1	: 1;
  uint32_t	eoc2	: 1;
  uint32_t	eoc3	: 1;
  uint32_t	eoc4	: 1;
  uint32_t	eoc5	: 1;
  uint32_t	eoc6	: 1;
  uint32_t	eoc7	: 1;
  uint32_t	ovre0	: 1;
  uint32_t	ovre1	: 1;
  uint32_t	ovre2	: 1;
  uint32_t	ovre3	: 1;
  uint32_t	ovre4	: 1;
  uint32_t	ovre5	: 1;
  uint32_t	ovre6	: 1;
  uint32_t	ovre7	: 1;
  uint32_t	drdy	: 1;
  uint32_t	govre	: 1;
  uint32_t	endrx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 12;
};

#define ADC12B_IMR_EOC0     	(1 << 0)
#define ADC12B_IMR_EOC1     	(1 << 1)
#define ADC12B_IMR_EOC2     	(1 << 2)
#define ADC12B_IMR_EOC3     	(1 << 3)
#define ADC12B_IMR_EOC4     	(1 << 4)
#define ADC12B_IMR_EOC5     	(1 << 5)
#define ADC12B_IMR_EOC6     	(1 << 6)
#define ADC12B_IMR_EOC7     	(1 << 7)
#define ADC12B_IMR_OVRE0     	(1 << 8)
#define ADC12B_IMR_OVRE1     	(1 << 9)
#define ADC12B_IMR_OVRE2     	(1 << 10)
#define ADC12B_IMR_OVRE3     	(1 << 11)
#define ADC12B_IMR_OVRE4     	(1 << 12)
#define ADC12B_IMR_OVRE5     	(1 << 13)
#define ADC12B_IMR_OVRE6     	(1 << 14)
#define ADC12B_IMR_OVRE7     	(1 << 15)
#define ADC12B_IMR_DRDY     	(1 << 16)
#define ADC12B_IMR_GOVRE     	(1 << 17)
#define ADC12B_IMR_ENDRX     	(1 << 18)
#define ADC12B_IMR_RXBUFF     	(1 << 19)

struct __struct_ADC12B_IMR
{
  uint32_t	eoc0	: 1;
  uint32_t	eoc1	: 1;
  uint32_t	eoc2	: 1;
  uint32_t	eoc3	: 1;
  uint32_t	eoc4	: 1;
  uint32_t	eoc5	: 1;
  uint32_t	eoc6	: 1;
  uint32_t	eoc7	: 1;
  uint32_t	ovre0	: 1;
  uint32_t	ovre1	: 1;
  uint32_t	ovre2	: 1;
  uint32_t	ovre3	: 1;
  uint32_t	ovre4	: 1;
  uint32_t	ovre5	: 1;
  uint32_t	ovre6	: 1;
  uint32_t	ovre7	: 1;
  uint32_t	drdy	: 1;
  uint32_t	govre	: 1;
  uint32_t	endrx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 12;
};

#define ADC12B_CDR_DATA(x)  	((x) << 0)
#define ADC12B_CDR_DATA_m   	0x00000fff
#define ADC12B_CDR_DATA_v(x)	(((x) >> 0) & 0xfff)

struct __struct_ADC12B_CDR
{
  uint32_t	data	: 12;
  uint32_t		: 20;
};

#define ADC12B_ACR_GAIN(x)  	((x) << 0)
#define ADC12B_ACR_GAIN_m   	0x00000003
#define ADC12B_ACR_GAIN_v(x)	(((x) >> 0) & 0x3)
#define ADC12B_ACR_IBCTL(x)  	((x) << 8)
#define ADC12B_ACR_IBCTL_m   	0x00000300
#define ADC12B_ACR_IBCTL_v(x)	(((x) >> 8) & 0x3)
#define ADC12B_ACR_IBCTL_TYP_M20	0x0
#define ADC12B_ACR_IBCTL_TYP	0x1
#define ADC12B_ACR_IBCTL_TYP_P20	0x2
#define ADC12B_ACR_IBCTL_TYP_P40	0x3
#define ADC12B_ACR_DIFF     	(1 << 16)
#define ADC12B_ACR_OFFSET     	(1 << 17)

struct __struct_ADC12B_ACR
{
  uint32_t	gain	: 2;
  uint32_t		: 6;
  uint32_t	ibctl	: 2;
  uint32_t		: 6;
  uint32_t	diff	: 1;
  uint32_t	offset	: 1;
  uint32_t		: 14;
};

#define ADC12B_EMR_OFFMODES     	(1 << 0)
#define ADC12B_EMR_OFF_MODE_STARTUP_TIME(x)  	((x) << 16)
#define ADC12B_EMR_OFF_MODE_STARTUP_TIME_m   	0x00ff0000
#define ADC12B_EMR_OFF_MODE_STARTUP_TIME_v(x)	(((x) >> 16) & 0xff)

struct __struct_ADC12B_EMR
{
  uint32_t	offmodes	: 1;
  uint32_t		: 15;
  uint32_t	off_mode_startup_time	: 8;
  uint32_t		: 8;
};


// ADC
#define ADC_CR_SWRST     	(1 << 0)
#define ADC_CR_START     	(1 << 1)

struct __struct_ADC_CR
{
  uint32_t	swrst	: 1;
  uint32_t	start	: 1;
  uint32_t		: 30;
};

#define ADC_MR_TRGEN     	(1 << 0)
#define ADC_MR_TRGSEL(x)  	((x) << 1)
#define ADC_MR_TRGSEL_m   	0x0000000e
#define ADC_MR_TRGSEL_v(x)	(((x) >> 1) & 0x7)
#define ADC_MR_TRGSEL_TC_0	0x0
#define ADC_MR_TRGSEL_TC_1	0x1
#define ADC_MR_TRGSEL_TC_2	0x2
#define ADC_MR_TRGSEL_PWM_0	0x3
#define ADC_MR_TRGSEL_PWM_1	0x4
#define ADC_MR_TRGSEL_EXT	0x6
#define ADC_MR_LOWRES     	(1 << 4)
#define ADC_MR_SLEEP     	(1 << 5)
#define ADC_MR_PRESCAL(x)  	((x) << 8)
#define ADC_MR_PRESCAL_m   	0x0000ff00
#define ADC_MR_PRESCAL_v(x)	(((x) >> 8) & 0xff)
#define ADC_MR_STARTUP(x)  	((x) << 16)
#define ADC_MR_STARTUP_m   	0x007f0000
#define ADC_MR_STARTUP_v(x)	(((x) >> 16) & 0x7f)
#define ADC_MR_SHTIM(x)  	((x) << 24)
#define ADC_MR_SHTIM_m   	0x0f000000
#define ADC_MR_SHTIM_v(x)	(((x) >> 24) & 0xf)

struct __struct_ADC_MR
{
  uint32_t	trgen	: 1;
  uint32_t	trgsel	: 3;
  uint32_t	lowres	: 1;
  uint32_t	sleep	: 1;
  uint32_t		: 2;
  uint32_t	prescal	: 8;
  uint32_t	startup	: 7;
  uint32_t		: 1;
  uint32_t	shtim	: 4;
  uint32_t		: 4;
};

#define ADC_CHER_CH0     	(1 << 0)
#define ADC_CHER_CH1     	(1 << 1)
#define ADC_CHER_CH2     	(1 << 2)
#define ADC_CHER_CH3     	(1 << 3)
#define ADC_CHER_CH4     	(1 << 4)
#define ADC_CHER_CH5     	(1 << 5)
#define ADC_CHER_CH6     	(1 << 6)
#define ADC_CHER_CH7     	(1 << 7)

struct __struct_ADC_CHER
{
  uint32_t	ch0	: 1;
  uint32_t	ch1	: 1;
  uint32_t	ch2	: 1;
  uint32_t	ch3	: 1;
  uint32_t	ch4	: 1;
  uint32_t	ch5	: 1;
  uint32_t	ch6	: 1;
  uint32_t	ch7	: 1;
  uint32_t		: 24;
};

#define ADC_CHDR_CH0     	(1 << 0)
#define ADC_CHDR_CH1     	(1 << 1)
#define ADC_CHDR_CH2     	(1 << 2)
#define ADC_CHDR_CH3     	(1 << 3)
#define ADC_CHDR_CH4     	(1 << 4)
#define ADC_CHDR_CH5     	(1 << 5)
#define ADC_CHDR_CH6     	(1 << 6)
#define ADC_CHDR_CH7     	(1 << 7)

struct __struct_ADC_CHDR
{
  uint32_t	ch0	: 1;
  uint32_t	ch1	: 1;
  uint32_t	ch2	: 1;
  uint32_t	ch3	: 1;
  uint32_t	ch4	: 1;
  uint32_t	ch5	: 1;
  uint32_t	ch6	: 1;
  uint32_t	ch7	: 1;
  uint32_t		: 24;
};

#define ADC_CHSR_CH0     	(1 << 0)
#define ADC_CHSR_CH1     	(1 << 1)
#define ADC_CHSR_CH2     	(1 << 2)
#define ADC_CHSR_CH3     	(1 << 3)
#define ADC_CHSR_CH4     	(1 << 4)
#define ADC_CHSR_CH5     	(1 << 5)
#define ADC_CHSR_CH6     	(1 << 6)
#define ADC_CHSR_CH7     	(1 << 7)

struct __struct_ADC_CHSR
{
  uint32_t	ch0	: 1;
  uint32_t	ch1	: 1;
  uint32_t	ch2	: 1;
  uint32_t	ch3	: 1;
  uint32_t	ch4	: 1;
  uint32_t	ch5	: 1;
  uint32_t	ch6	: 1;
  uint32_t	ch7	: 1;
  uint32_t		: 24;
};

#define ADC_SR_EOC0     	(1 << 0)
#define ADC_SR_EOC1     	(1 << 1)
#define ADC_SR_EOC2     	(1 << 2)
#define ADC_SR_EOC3     	(1 << 3)
#define ADC_SR_EOC4     	(1 << 4)
#define ADC_SR_EOC5     	(1 << 5)
#define ADC_SR_EOC6     	(1 << 6)
#define ADC_SR_EOC7     	(1 << 7)
#define ADC_SR_OVRE0     	(1 << 8)
#define ADC_SR_OVRE1     	(1 << 9)
#define ADC_SR_OVRE2     	(1 << 10)
#define ADC_SR_OVRE3     	(1 << 11)
#define ADC_SR_OVRE4     	(1 << 12)
#define ADC_SR_OVRE5     	(1 << 13)
#define ADC_SR_OVRE6     	(1 << 14)
#define ADC_SR_OVRE7     	(1 << 15)
#define ADC_SR_DRDY     	(1 << 16)
#define ADC_SR_GOVRE     	(1 << 17)
#define ADC_SR_ENDRX     	(1 << 18)
#define ADC_SR_RXBUFF     	(1 << 19)

struct __struct_ADC_SR
{
  uint32_t	eoc0	: 1;
  uint32_t	eoc1	: 1;
  uint32_t	eoc2	: 1;
  uint32_t	eoc3	: 1;
  uint32_t	eoc4	: 1;
  uint32_t	eoc5	: 1;
  uint32_t	eoc6	: 1;
  uint32_t	eoc7	: 1;
  uint32_t	ovre0	: 1;
  uint32_t	ovre1	: 1;
  uint32_t	ovre2	: 1;
  uint32_t	ovre3	: 1;
  uint32_t	ovre4	: 1;
  uint32_t	ovre5	: 1;
  uint32_t	ovre6	: 1;
  uint32_t	ovre7	: 1;
  uint32_t	drdy	: 1;
  uint32_t	govre	: 1;
  uint32_t	endrx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 12;
};

#define ADC_LCDR_LDATA(x)  	((x) << 0)
#define ADC_LCDR_LDATA_m   	0x000003ff
#define ADC_LCDR_LDATA_v(x)	(((x) >> 0) & 0x3ff)

struct __struct_ADC_LCDR
{
  uint32_t	ldata	: 10;
  uint32_t		: 22;
};

#define ADC_IER_EOC0     	(1 << 0)
#define ADC_IER_EOC1     	(1 << 1)
#define ADC_IER_EOC2     	(1 << 2)
#define ADC_IER_EOC3     	(1 << 3)
#define ADC_IER_EOC4     	(1 << 4)
#define ADC_IER_EOC5     	(1 << 5)
#define ADC_IER_EOC6     	(1 << 6)
#define ADC_IER_EOC7     	(1 << 7)
#define ADC_IER_OVRE0     	(1 << 8)
#define ADC_IER_OVRE1     	(1 << 9)
#define ADC_IER_OVRE2     	(1 << 10)
#define ADC_IER_OVRE3     	(1 << 11)
#define ADC_IER_OVRE4     	(1 << 12)
#define ADC_IER_OVRE5     	(1 << 13)
#define ADC_IER_OVRE6     	(1 << 14)
#define ADC_IER_OVRE7     	(1 << 15)
#define ADC_IER_DRDY     	(1 << 16)
#define ADC_IER_GOVRE     	(1 << 17)
#define ADC_IER_ENDRX     	(1 << 18)
#define ADC_IER_RXBUFF     	(1 << 19)

struct __struct_ADC_IER
{
  uint32_t	eoc0	: 1;
  uint32_t	eoc1	: 1;
  uint32_t	eoc2	: 1;
  uint32_t	eoc3	: 1;
  uint32_t	eoc4	: 1;
  uint32_t	eoc5	: 1;
  uint32_t	eoc6	: 1;
  uint32_t	eoc7	: 1;
  uint32_t	ovre0	: 1;
  uint32_t	ovre1	: 1;
  uint32_t	ovre2	: 1;
  uint32_t	ovre3	: 1;
  uint32_t	ovre4	: 1;
  uint32_t	ovre5	: 1;
  uint32_t	ovre6	: 1;
  uint32_t	ovre7	: 1;
  uint32_t	drdy	: 1;
  uint32_t	govre	: 1;
  uint32_t	endrx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 12;
};

#define ADC_IDR_EOC0     	(1 << 0)
#define ADC_IDR_EOC1     	(1 << 1)
#define ADC_IDR_EOC2     	(1 << 2)
#define ADC_IDR_EOC3     	(1 << 3)
#define ADC_IDR_EOC4     	(1 << 4)
#define ADC_IDR_EOC5     	(1 << 5)
#define ADC_IDR_EOC6     	(1 << 6)
#define ADC_IDR_EOC7     	(1 << 7)
#define ADC_IDR_OVRE0     	(1 << 8)
#define ADC_IDR_OVRE1     	(1 << 9)
#define ADC_IDR_OVRE2     	(1 << 10)
#define ADC_IDR_OVRE3     	(1 << 11)
#define ADC_IDR_OVRE4     	(1 << 12)
#define ADC_IDR_OVRE5     	(1 << 13)
#define ADC_IDR_OVRE6     	(1 << 14)
#define ADC_IDR_OVRE7     	(1 << 15)
#define ADC_IDR_DRDY     	(1 << 16)
#define ADC_IDR_GOVRE     	(1 << 17)
#define ADC_IDR_ENDRX     	(1 << 18)
#define ADC_IDR_RXBUFF     	(1 << 19)

struct __struct_ADC_IDR
{
  uint32_t	eoc0	: 1;
  uint32_t	eoc1	: 1;
  uint32_t	eoc2	: 1;
  uint32_t	eoc3	: 1;
  uint32_t	eoc4	: 1;
  uint32_t	eoc5	: 1;
  uint32_t	eoc6	: 1;
  uint32_t	eoc7	: 1;
  uint32_t	ovre0	: 1;
  uint32_t	ovre1	: 1;
  uint32_t	ovre2	: 1;
  uint32_t	ovre3	: 1;
  uint32_t	ovre4	: 1;
  uint32_t	ovre5	: 1;
  uint32_t	ovre6	: 1;
  uint32_t	ovre7	: 1;
  uint32_t	drdy	: 1;
  uint32_t	govre	: 1;
  uint32_t	endrx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 12;
};

#define ADC_IMR_EOC0     	(1 << 0)
#define ADC_IMR_EOC1     	(1 << 1)
#define ADC_IMR_EOC2     	(1 << 2)
#define ADC_IMR_EOC3     	(1 << 3)
#define ADC_IMR_EOC4     	(1 << 4)
#define ADC_IMR_EOC5     	(1 << 5)
#define ADC_IMR_EOC6     	(1 << 6)
#define ADC_IMR_EOC7     	(1 << 7)
#define ADC_IMR_OVRE0     	(1 << 8)
#define ADC_IMR_OVRE1     	(1 << 9)
#define ADC_IMR_OVRE2     	(1 << 10)
#define ADC_IMR_OVRE3     	(1 << 11)
#define ADC_IMR_OVRE4     	(1 << 12)
#define ADC_IMR_OVRE5     	(1 << 13)
#define ADC_IMR_OVRE6     	(1 << 14)
#define ADC_IMR_OVRE7     	(1 << 15)
#define ADC_IMR_DRDY     	(1 << 16)
#define ADC_IMR_GOVRE     	(1 << 17)
#define ADC_IMR_ENDRX     	(1 << 18)
#define ADC_IMR_RXBUFF     	(1 << 19)

struct __struct_ADC_IMR
{
  uint32_t	eoc0	: 1;
  uint32_t	eoc1	: 1;
  uint32_t	eoc2	: 1;
  uint32_t	eoc3	: 1;
  uint32_t	eoc4	: 1;
  uint32_t	eoc5	: 1;
  uint32_t	eoc6	: 1;
  uint32_t	eoc7	: 1;
  uint32_t	ovre0	: 1;
  uint32_t	ovre1	: 1;
  uint32_t	ovre2	: 1;
  uint32_t	ovre3	: 1;
  uint32_t	ovre4	: 1;
  uint32_t	ovre5	: 1;
  uint32_t	ovre6	: 1;
  uint32_t	ovre7	: 1;
  uint32_t	drdy	: 1;
  uint32_t	govre	: 1;
  uint32_t	endrx	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 12;
};

#define ADC_CDR_DATA(x)  	((x) << 0)
#define ADC_CDR_DATA_m   	0x000003ff
#define ADC_CDR_DATA_v(x)	(((x) >> 0) & 0x3ff)

struct __struct_ADC_CDR
{
  uint32_t	data	: 10;
  uint32_t		: 22;
};


// DMAC
#define DMAC_GCFG_ARB_CFG     	(1 << 4)
#define DMAC_GCFG_ARB_CFG_FIXED	0x0
#define DMAC_GCFG_ARB_CFG_ROUND_ROBIN	0x1

struct __struct_DMAC_GCFG
{
  uint32_t		: 4;
  uint32_t	arb_cfg	: 1;
  uint32_t		: 27;
};

#define DMAC_EN_ENABLE     	(1 << 0)

struct __struct_DMAC_EN
{
  uint32_t	enable	: 1;
  uint32_t		: 31;
};

#define DMAC_SREQ_SSREQ0     	(1 << 0)
#define DMAC_SREQ_DSREQ0     	(1 << 1)
#define DMAC_SREQ_SSREQ1     	(1 << 2)
#define DMAC_SREQ_DSREQ1     	(1 << 3)
#define DMAC_SREQ_SSREQ2     	(1 << 4)
#define DMAC_SREQ_DSREQ2     	(1 << 5)
#define DMAC_SREQ_SSREQ3     	(1 << 6)
#define DMAC_SREQ_DSREQ3     	(1 << 7)

struct __struct_DMAC_SREQ
{
  uint32_t	ssreq0	: 1;
  uint32_t	dsreq0	: 1;
  uint32_t	ssreq1	: 1;
  uint32_t	dsreq1	: 1;
  uint32_t	ssreq2	: 1;
  uint32_t	dsreq2	: 1;
  uint32_t	ssreq3	: 1;
  uint32_t	dsreq3	: 1;
  uint32_t		: 24;
};

#define DMAC_CREQ_SCREQ0     	(1 << 0)
#define DMAC_CREQ_DCREQ0     	(1 << 1)
#define DMAC_CREQ_SCREQ1     	(1 << 2)
#define DMAC_CREQ_DCREQ1     	(1 << 3)
#define DMAC_CREQ_SCREQ2     	(1 << 4)
#define DMAC_CREQ_DCREQ2     	(1 << 5)
#define DMAC_CREQ_SCREQ3     	(1 << 6)
#define DMAC_CREQ_DCREQ3     	(1 << 7)

struct __struct_DMAC_CREQ
{
  uint32_t	screq0	: 1;
  uint32_t	dcreq0	: 1;
  uint32_t	screq1	: 1;
  uint32_t	dcreq1	: 1;
  uint32_t	screq2	: 1;
  uint32_t	dcreq2	: 1;
  uint32_t	screq3	: 1;
  uint32_t	dcreq3	: 1;
  uint32_t		: 24;
};

#define DMAC_LAST_SLAST0     	(1 << 0)
#define DMAC_LAST_DLAST0     	(1 << 1)
#define DMAC_LAST_SLAST1     	(1 << 2)
#define DMAC_LAST_DLAST1     	(1 << 3)
#define DMAC_LAST_SLAST2     	(1 << 4)
#define DMAC_LAST_DLAST2     	(1 << 5)
#define DMAC_LAST_SLAST3     	(1 << 6)
#define DMAC_LAST_DLAST3     	(1 << 7)

struct __struct_DMAC_LAST
{
  uint32_t	slast0	: 1;
  uint32_t	dlast0	: 1;
  uint32_t	slast1	: 1;
  uint32_t	dlast1	: 1;
  uint32_t	slast2	: 1;
  uint32_t	dlast2	: 1;
  uint32_t	slast3	: 1;
  uint32_t	dlast3	: 1;
  uint32_t		: 24;
};

#define DMAC_EBCIER_BTC0     	(1 << 0)
#define DMAC_EBCIER_BTC1     	(1 << 1)
#define DMAC_EBCIER_BTC2     	(1 << 2)
#define DMAC_EBCIER_BTC3     	(1 << 3)
#define DMAC_EBCIER_CBTC0     	(1 << 8)
#define DMAC_EBCIER_CBTC1     	(1 << 9)
#define DMAC_EBCIER_CBTC2     	(1 << 10)
#define DMAC_EBCIER_CBTC3     	(1 << 11)
#define DMAC_EBCIER_ERR0     	(1 << 16)
#define DMAC_EBCIER_ERR1     	(1 << 17)
#define DMAC_EBCIER_ERR2     	(1 << 18)
#define DMAC_EBCIER_ERR3     	(1 << 19)

struct __struct_DMAC_EBCIER
{
  uint32_t	btc0	: 1;
  uint32_t	btc1	: 1;
  uint32_t	btc2	: 1;
  uint32_t	btc3	: 1;
  uint32_t		: 4;
  uint32_t	cbtc0	: 1;
  uint32_t	cbtc1	: 1;
  uint32_t	cbtc2	: 1;
  uint32_t	cbtc3	: 1;
  uint32_t		: 4;
  uint32_t	err0	: 1;
  uint32_t	err1	: 1;
  uint32_t	err2	: 1;
  uint32_t	err3	: 1;
  uint32_t		: 12;
};

#define DMAC_EBCIDR_BTC0     	(1 << 0)
#define DMAC_EBCIDR_BTC1     	(1 << 1)
#define DMAC_EBCIDR_BTC2     	(1 << 2)
#define DMAC_EBCIDR_BTC3     	(1 << 3)
#define DMAC_EBCIDR_CBTC0     	(1 << 8)
#define DMAC_EBCIDR_CBTC1     	(1 << 9)
#define DMAC_EBCIDR_CBTC2     	(1 << 10)
#define DMAC_EBCIDR_CBTC3     	(1 << 11)
#define DMAC_EBCIDR_ERR0     	(1 << 16)
#define DMAC_EBCIDR_ERR1     	(1 << 17)
#define DMAC_EBCIDR_ERR2     	(1 << 18)
#define DMAC_EBCIDR_ERR3     	(1 << 19)

struct __struct_DMAC_EBCIDR
{
  uint32_t	btc0	: 1;
  uint32_t	btc1	: 1;
  uint32_t	btc2	: 1;
  uint32_t	btc3	: 1;
  uint32_t		: 4;
  uint32_t	cbtc0	: 1;
  uint32_t	cbtc1	: 1;
  uint32_t	cbtc2	: 1;
  uint32_t	cbtc3	: 1;
  uint32_t		: 4;
  uint32_t	err0	: 1;
  uint32_t	err1	: 1;
  uint32_t	err2	: 1;
  uint32_t	err3	: 1;
  uint32_t		: 12;
};

#define DMAC_EBCIMR_BTC0     	(1 << 0)
#define DMAC_EBCIMR_BTC1     	(1 << 1)
#define DMAC_EBCIMR_BTC2     	(1 << 2)
#define DMAC_EBCIMR_BTC3     	(1 << 3)
#define DMAC_EBCIMR_CBTC0     	(1 << 8)
#define DMAC_EBCIMR_CBTC1     	(1 << 9)
#define DMAC_EBCIMR_CBTC2     	(1 << 10)
#define DMAC_EBCIMR_CBTC3     	(1 << 11)
#define DMAC_EBCIMR_ERR0     	(1 << 16)
#define DMAC_EBCIMR_ERR1     	(1 << 17)
#define DMAC_EBCIMR_ERR2     	(1 << 18)
#define DMAC_EBCIMR_ERR3     	(1 << 19)

struct __struct_DMAC_EBCIMR
{
  uint32_t	btc0	: 1;
  uint32_t	btc1	: 1;
  uint32_t	btc2	: 1;
  uint32_t	btc3	: 1;
  uint32_t		: 4;
  uint32_t	cbtc0	: 1;
  uint32_t	cbtc1	: 1;
  uint32_t	cbtc2	: 1;
  uint32_t	cbtc3	: 1;
  uint32_t		: 4;
  uint32_t	err0	: 1;
  uint32_t	err1	: 1;
  uint32_t	err2	: 1;
  uint32_t	err3	: 1;
  uint32_t		: 12;
};

#define DMAC_EBCISR_BTC0     	(1 << 0)
#define DMAC_EBCISR_BTC1     	(1 << 1)
#define DMAC_EBCISR_BTC2     	(1 << 2)
#define DMAC_EBCISR_BTC3     	(1 << 3)
#define DMAC_EBCISR_CBTC0     	(1 << 8)
#define DMAC_EBCISR_CBTC1     	(1 << 9)
#define DMAC_EBCISR_CBTC2     	(1 << 10)
#define DMAC_EBCISR_CBTC3     	(1 << 11)
#define DMAC_EBCISR_ERR0     	(1 << 16)
#define DMAC_EBCISR_ERR1     	(1 << 17)
#define DMAC_EBCISR_ERR2     	(1 << 18)
#define DMAC_EBCISR_ERR3     	(1 << 19)

struct __struct_DMAC_EBCISR
{
  uint32_t	btc0	: 1;
  uint32_t	btc1	: 1;
  uint32_t	btc2	: 1;
  uint32_t	btc3	: 1;
  uint32_t		: 4;
  uint32_t	cbtc0	: 1;
  uint32_t	cbtc1	: 1;
  uint32_t	cbtc2	: 1;
  uint32_t	cbtc3	: 1;
  uint32_t		: 4;
  uint32_t	err0	: 1;
  uint32_t	err1	: 1;
  uint32_t	err2	: 1;
  uint32_t	err3	: 1;
  uint32_t		: 12;
};

#define DMAC_CHER_ENA0     	(1 << 0)
#define DMAC_CHER_ENA1     	(1 << 1)
#define DMAC_CHER_ENA2     	(1 << 2)
#define DMAC_CHER_ENA3     	(1 << 3)
#define DMAC_CHER_SUSP0     	(1 << 8)
#define DMAC_CHER_SUSP1     	(1 << 9)
#define DMAC_CHER_SUSP2     	(1 << 10)
#define DMAC_CHER_SUSP3     	(1 << 11)
#define DMAC_CHER_KEEP0     	(1 << 24)
#define DMAC_CHER_KEEP1     	(1 << 25)
#define DMAC_CHER_KEEP2     	(1 << 26)
#define DMAC_CHER_KEEP3     	(1 << 27)

struct __struct_DMAC_CHER
{
  uint32_t	ena0	: 1;
  uint32_t	ena1	: 1;
  uint32_t	ena2	: 1;
  uint32_t	ena3	: 1;
  uint32_t		: 4;
  uint32_t	susp0	: 1;
  uint32_t	susp1	: 1;
  uint32_t	susp2	: 1;
  uint32_t	susp3	: 1;
  uint32_t		: 12;
  uint32_t	keep0	: 1;
  uint32_t	keep1	: 1;
  uint32_t	keep2	: 1;
  uint32_t	keep3	: 1;
  uint32_t		: 4;
};

#define DMAC_CHDR_DIS0     	(1 << 0)
#define DMAC_CHDR_DIS1     	(1 << 1)
#define DMAC_CHDR_DIS2     	(1 << 2)
#define DMAC_CHDR_DIS3     	(1 << 3)
#define DMAC_CHDR_RES0     	(1 << 8)
#define DMAC_CHDR_RES1     	(1 << 9)
#define DMAC_CHDR_RES2     	(1 << 10)
#define DMAC_CHDR_RES3     	(1 << 11)

struct __struct_DMAC_CHDR
{
  uint32_t	dis0	: 1;
  uint32_t	dis1	: 1;
  uint32_t	dis2	: 1;
  uint32_t	dis3	: 1;
  uint32_t		: 4;
  uint32_t	res0	: 1;
  uint32_t	res1	: 1;
  uint32_t	res2	: 1;
  uint32_t	res3	: 1;
  uint32_t		: 20;
};

#define DMAC_CHSR_ENA0     	(1 << 0)
#define DMAC_CHSR_ENA1     	(1 << 1)
#define DMAC_CHSR_ENA2     	(1 << 2)
#define DMAC_CHSR_ENA3     	(1 << 3)
#define DMAC_CHSR_SUSP0     	(1 << 8)
#define DMAC_CHSR_SUSP1     	(1 << 9)
#define DMAC_CHSR_SUSP2     	(1 << 10)
#define DMAC_CHSR_SUSP3     	(1 << 11)
#define DMAC_CHSR_EMPT0     	(1 << 16)
#define DMAC_CHSR_EMPT1     	(1 << 17)
#define DMAC_CHSR_EMPT2     	(1 << 18)
#define DMAC_CHSR_EMPT3     	(1 << 19)
#define DMAC_CHSR_STAL0     	(1 << 24)
#define DMAC_CHSR_STAL1     	(1 << 25)
#define DMAC_CHSR_STAL2     	(1 << 26)
#define DMAC_CHSR_STAL3     	(1 << 27)

struct __struct_DMAC_CHSR
{
  uint32_t	ena0	: 1;
  uint32_t	ena1	: 1;
  uint32_t	ena2	: 1;
  uint32_t	ena3	: 1;
  uint32_t		: 4;
  uint32_t	susp0	: 1;
  uint32_t	susp1	: 1;
  uint32_t	susp2	: 1;
  uint32_t	susp3	: 1;
  uint32_t		: 4;
  uint32_t	empt0	: 1;
  uint32_t	empt1	: 1;
  uint32_t	empt2	: 1;
  uint32_t	empt3	: 1;
  uint32_t		: 4;
  uint32_t	stal0	: 1;
  uint32_t	stal1	: 1;
  uint32_t	stal2	: 1;
  uint32_t	stal3	: 1;
  uint32_t		: 4;
};

#define DMAC_DSCR_DSCR(x)  	((x) << 2)
#define DMAC_DSCR_DSCR_m   	0xfffffffc
#define DMAC_DSCR_DSCR_v(x)	(((x) >> 2) & 0x3fffffff)

struct __struct_DMAC_DSCR
{
  uint32_t		: 2;
  uint32_t	dscr	: 30;
};

#define DMAC_CTRLA_BTSIZE(x)  	((x) << 0)
#define DMAC_CTRLA_BTSIZE_m   	0x00000fff
#define DMAC_CTRLA_BTSIZE_v(x)	(((x) >> 0) & 0xfff)
#define DMAC_CTRLA_SCSIZE     	(1 << 16)
#define DMAC_CTRLA_SCSIZE_1	0x0
#define DMAC_CTRLA_SCSIZE_4	0x1
#define DMAC_CTRLA_DCSIZE     	(1 << 20)
#define DMAC_CTRLA_DCSIZE_1	0x0
#define DMAC_CTRLA_DCSIZE_4	0x1
#define DMAC_CTRLA_SRC_WIDTH(x)  	((x) << 24)
#define DMAC_CTRLA_SRC_WIDTH_m   	0x03000000
#define DMAC_CTRLA_SRC_WIDTH_v(x)	(((x) >> 24) & 0x3)
#define DMAC_CTRLA_SRC_WIDTH_BYTE	0x0
#define DMAC_CTRLA_SRC_WIDTH_HALF_WORD	0x1
#define DMAC_CTRLA_SRC_WIDTH_WORD	0x2
#define DMAC_CTRLA_DST_WIDTH(x)  	((x) << 28)
#define DMAC_CTRLA_DST_WIDTH_m   	0x30000000
#define DMAC_CTRLA_DST_WIDTH_v(x)	(((x) >> 28) & 0x3)
#define DMAC_CTRLA_DST_WIDTH_BYTE	0x0
#define DMAC_CTRLA_DST_WIDTH_HALF_WORD	0x1
#define DMAC_CTRLA_DST_WIDTH_WORD	0x2
#define DMAC_CTRLA_DONE     	(1 << 31)

struct __struct_DMAC_CTRLA
{
  uint32_t	btsize	: 12;
  uint32_t		: 4;
  uint32_t	scsize	: 1;
  uint32_t		: 3;
  uint32_t	dcsize	: 1;
  uint32_t		: 3;
  uint32_t	src_width	: 2;
  uint32_t		: 2;
  uint32_t	dst_width	: 2;
  uint32_t		: 1;
  uint32_t	done	: 1;
};

#define DMAC_CTRLB_SRC_DSCR     	(1 << 16)
#define DMAC_CTRLB_DST_DSCR     	(1 << 20)
#define DMAC_CTRLB_FC(x)  	((x) << 21)
#define DMAC_CTRLB_FC_m   	0x00e00000
#define DMAC_CTRLB_FC_v(x)	(((x) >> 21) & 0x7)
#define DMAC_CTRLB_FC_MEM_TO_MEM	0x0
#define DMAC_CTRLB_FC_MEM_TO_PER	0x1
#define DMAC_CTRLB_FC_PER_TO_MEM	0x2
#define DMAC_CTRLB_FC_PER_TO_PER	0x3
#define DMAC_CTRLB_SRC_INCR(x)  	((x) << 24)
#define DMAC_CTRLB_SRC_INCR_m   	0x03000000
#define DMAC_CTRLB_SRC_INCR_v(x)	(((x) >> 24) & 0x3)
#define DMAC_CTRLB_SRC_INCR_INCREMENTING	0x0
#define DMAC_CTRLB_SRC_INCR_FIXED	0x2
#define DMAC_CTRLB_DST_INCR(x)  	((x) << 28)
#define DMAC_CTRLB_DST_INCR_m   	0x30000000
#define DMAC_CTRLB_DST_INCR_v(x)	(((x) >> 28) & 0x3)
#define DMAC_CTRLB_DST_INCR_INCREMENTING	0x0
#define DMAC_CTRLB_DST_INCR_FIXED	0x2
#define DMAC_CTRLB_IEN     	(1 << 30)

struct __struct_DMAC_CTRLB
{
  uint32_t		: 16;
  uint32_t	src_dscr	: 1;
  uint32_t		: 3;
  uint32_t	dst_dscr	: 1;
  uint32_t	fc	: 3;
  uint32_t	src_incr	: 2;
  uint32_t		: 2;
  uint32_t	dst_incr	: 2;
  uint32_t	ien	: 1;
  uint32_t		: 1;
};

#define DMAC_CFG_SRC_PER(x)  	((x) << 0)
#define DMAC_CFG_SRC_PER_m   	0x0000000f
#define DMAC_CFG_SRC_PER_v(x)	(((x) >> 0) & 0xf)
#define DMAC_CFG_DST_PER(x)  	((x) << 4)
#define DMAC_CFG_DST_PER_m   	0x000000f0
#define DMAC_CFG_DST_PER_v(x)	(((x) >> 4) & 0xf)
#define DMAC_CFG_SRC_H2SEL     	(1 << 9)
#define DMAC_CFG_DST_H2SEL     	(1 << 13)
#define DMAC_CFG_SOD     	(1 << 16)
#define DMAC_CFG_LOCK_IF     	(1 << 20)
#define DMAC_CFG_LOCK_B     	(1 << 21)
#define DMAC_CFG_LOCK_IF_L     	(1 << 22)
#define DMAC_CFG_AHB_PROT(x)  	((x) << 24)
#define DMAC_CFG_AHB_PROT_m   	0x07000000
#define DMAC_CFG_AHB_PROT_v(x)	(((x) >> 24) & 0x7)
#define DMAC_CFG_FIFOCFG(x)  	((x) << 28)
#define DMAC_CFG_FIFOCFG_m   	0x30000000
#define DMAC_CFG_FIFOCFG_v(x)	(((x) >> 28) & 0x3)

struct __struct_DMAC_CFG
{
  uint32_t	src_per	: 4;
  uint32_t	dst_per	: 4;
  uint32_t		: 1;
  uint32_t	src_h2sel	: 1;
  uint32_t		: 3;
  uint32_t	dst_h2sel	: 1;
  uint32_t		: 2;
  uint32_t	sod	: 1;
  uint32_t		: 3;
  uint32_t	lock_if	: 1;
  uint32_t	lock_b	: 1;
  uint32_t	lock_if_l	: 1;
  uint32_t		: 1;
  uint32_t	ahb_prot	: 3;
  uint32_t		: 1;
  uint32_t	fifocfg	: 2;
  uint32_t		: 2;
};


// SMC
#define SMC_CFG_PAGESIZE(x)  	((x) << 0)
#define SMC_CFG_PAGESIZE_m   	0x00000003
#define SMC_CFG_PAGESIZE_v(x)	(((x) >> 0) & 0x3)
#define SMC_CFG_PAGESIZE_PS512_16	0x0
#define SMC_CFG_PAGESIZE_PS1024_32	0x1
#define SMC_CFG_PAGESIZE_PS2048_64	0x2
#define SMC_CFG_PAGESIZE_PS4096_128	0x3
#define SMC_CFG_WSPARE     	(1 << 8)
#define SMC_CFG_RSPARE     	(1 << 9)
#define SMC_CFG_EDGECTRL     	(1 << 12)
#define SMC_CFG_RBEDGE     	(1 << 13)
#define SMC_CFG_DTOCYC(x)  	((x) << 16)
#define SMC_CFG_DTOCYC_m   	0x000f0000
#define SMC_CFG_DTOCYC_v(x)	(((x) >> 16) & 0xf)
#define SMC_CFG_DTOMUL(x)  	((x) << 20)
#define SMC_CFG_DTOMUL_m   	0x00700000
#define SMC_CFG_DTOMUL_v(x)	(((x) >> 20) & 0x7)
#define SMC_CFG_DTOMUL_X1	0x0
#define SMC_CFG_DTOMUL_X16	0x1
#define SMC_CFG_DTOMUL_X128	0x2
#define SMC_CFG_DTOMUL_X256	0x3
#define SMC_CFG_DTOMUL_X1024	0x4
#define SMC_CFG_DTOMUL_X4096	0x5
#define SMC_CFG_DTOMUL_X65536	0x6
#define SMC_CFG_DTOMUL_X1048576	0x7

struct __struct_SMC_CFG
{
  uint32_t	pagesize	: 2;
  uint32_t		: 6;
  uint32_t	wspare	: 1;
  uint32_t	rspare	: 1;
  uint32_t		: 2;
  uint32_t	edgectrl	: 1;
  uint32_t	rbedge	: 1;
  uint32_t		: 2;
  uint32_t	dtocyc	: 4;
  uint32_t	dtomul	: 3;
  uint32_t		: 9;
};

#define SMC_CTRL_NFCEN     	(1 << 0)
#define SMC_CTRL_NFCDIS     	(1 << 1)

struct __struct_SMC_CTRL
{
  uint32_t	nfcen	: 1;
  uint32_t	nfcdis	: 1;
  uint32_t		: 30;
};

#define SMC_SR_SMCSTS     	(1 << 0)
#define SMC_SR_RB_RISE     	(1 << 4)
#define SMC_SR_RB_FALL     	(1 << 5)
#define SMC_SR_NFCBUSY     	(1 << 8)
#define SMC_SR_NFCWR     	(1 << 11)
#define SMC_SR_NFCSID(x)  	((x) << 12)
#define SMC_SR_NFCSID_m   	0x00007000
#define SMC_SR_NFCSID_v(x)	(((x) >> 12) & 0x7)
#define SMC_SR_XFRDONE     	(1 << 16)
#define SMC_SR_CMDDONE     	(1 << 17)
#define SMC_SR_DTOE     	(1 << 20)
#define SMC_SR_UNDEF     	(1 << 21)
#define SMC_SR_AWB     	(1 << 22)
#define SMC_SR_NFCASE     	(1 << 23)
#define SMC_SR_RB_EDGE0     	(1 << 24)

struct __struct_SMC_SR
{
  uint32_t	smcsts	: 1;
  uint32_t		: 3;
  uint32_t	rb_rise	: 1;
  uint32_t	rb_fall	: 1;
  uint32_t		: 2;
  uint32_t	nfcbusy	: 1;
  uint32_t		: 2;
  uint32_t	nfcwr	: 1;
  uint32_t	nfcsid	: 3;
  uint32_t		: 1;
  uint32_t	xfrdone	: 1;
  uint32_t	cmddone	: 1;
  uint32_t		: 2;
  uint32_t	dtoe	: 1;
  uint32_t	undef	: 1;
  uint32_t	awb	: 1;
  uint32_t	nfcase	: 1;
  uint32_t	rb_edge0	: 1;
  uint32_t		: 7;
};

#define SMC_IER_RB_RISE     	(1 << 4)
#define SMC_IER_RB_FALL     	(1 << 5)
#define SMC_IER_XFRDONE     	(1 << 16)
#define SMC_IER_CMDDONE     	(1 << 17)
#define SMC_IER_DTOE     	(1 << 20)
#define SMC_IER_UNDEF     	(1 << 21)
#define SMC_IER_AWB     	(1 << 22)
#define SMC_IER_NFCASE     	(1 << 23)
#define SMC_IER_RB_EDGE0     	(1 << 24)

struct __struct_SMC_IER
{
  uint32_t		: 4;
  uint32_t	rb_rise	: 1;
  uint32_t	rb_fall	: 1;
  uint32_t		: 10;
  uint32_t	xfrdone	: 1;
  uint32_t	cmddone	: 1;
  uint32_t		: 2;
  uint32_t	dtoe	: 1;
  uint32_t	undef	: 1;
  uint32_t	awb	: 1;
  uint32_t	nfcase	: 1;
  uint32_t	rb_edge0	: 1;
  uint32_t		: 7;
};

#define SMC_IDR_RB_RISE     	(1 << 4)
#define SMC_IDR_RB_FALL     	(1 << 5)
#define SMC_IDR_XFRDONE     	(1 << 16)
#define SMC_IDR_CMDDONE     	(1 << 17)
#define SMC_IDR_DTOE     	(1 << 20)
#define SMC_IDR_UNDEF     	(1 << 21)
#define SMC_IDR_AWB     	(1 << 22)
#define SMC_IDR_NFCASE     	(1 << 23)
#define SMC_IDR_RB_EDGE0     	(1 << 24)

struct __struct_SMC_IDR
{
  uint32_t		: 4;
  uint32_t	rb_rise	: 1;
  uint32_t	rb_fall	: 1;
  uint32_t		: 10;
  uint32_t	xfrdone	: 1;
  uint32_t	cmddone	: 1;
  uint32_t		: 2;
  uint32_t	dtoe	: 1;
  uint32_t	undef	: 1;
  uint32_t	awb	: 1;
  uint32_t	nfcase	: 1;
  uint32_t	rb_edge0	: 1;
  uint32_t		: 7;
};

#define SMC_IMR_RB_RISE     	(1 << 4)
#define SMC_IMR_RB_FALL     	(1 << 5)
#define SMC_IMR_XFRDONE     	(1 << 16)
#define SMC_IMR_CMDDONE     	(1 << 17)
#define SMC_IMR_DTOE     	(1 << 20)
#define SMC_IMR_UNDEF     	(1 << 21)
#define SMC_IMR_AWB     	(1 << 22)
#define SMC_IMR_NFCASE     	(1 << 23)
#define SMC_IMR_RB_EDGE0     	(1 << 24)

struct __struct_SMC_IMR
{
  uint32_t		: 4;
  uint32_t	rb_rise	: 1;
  uint32_t	rb_fall	: 1;
  uint32_t		: 10;
  uint32_t	xfrdone	: 1;
  uint32_t	cmddone	: 1;
  uint32_t		: 2;
  uint32_t	dtoe	: 1;
  uint32_t	undef	: 1;
  uint32_t	awb	: 1;
  uint32_t	nfcase	: 1;
  uint32_t	rb_edge0	: 1;
  uint32_t		: 7;
};

#define SMC_ADDR_ADDR_CYCLE0(x)  	((x) << 0)
#define SMC_ADDR_ADDR_CYCLE0_m   	0x000000ff
#define SMC_ADDR_ADDR_CYCLE0_v(x)	(((x) >> 0) & 0xff)

struct __struct_SMC_ADDR
{
  uint32_t	addr_cycle0	: 8;
  uint32_t		: 24;
};

#define SMC_BANK_BANK(x)  	((x) << 0)
#define SMC_BANK_BANK_m   	0x00000007
#define SMC_BANK_BANK_v(x)	(((x) >> 0) & 0x7)

struct __struct_SMC_BANK
{
  uint32_t	bank	: 3;
  uint32_t		: 29;
};

#define SMC_ECC_CTRL_RST     	(1 << 0)
#define SMC_ECC_CTRL_SWRST     	(1 << 1)

struct __struct_SMC_ECC_CTRL
{
  uint32_t	rst	: 1;
  uint32_t	swrst	: 1;
  uint32_t		: 30;
};

#define SMC_ECC_MD_ECC_PAGESIZE(x)  	((x) << 0)
#define SMC_ECC_MD_ECC_PAGESIZE_m   	0x00000003
#define SMC_ECC_MD_ECC_PAGESIZE_v(x)	(((x) >> 0) & 0x3)
#define SMC_ECC_MD_ECC_PAGESIZE_PS512_16	0x0
#define SMC_ECC_MD_ECC_PAGESIZE_PS1024_32	0x1
#define SMC_ECC_MD_ECC_PAGESIZE_PS2048_64	0x2
#define SMC_ECC_MD_ECC_PAGESIZE_PS4096_128	0x3
#define SMC_ECC_MD_TYPCORREC(x)  	((x) << 4)
#define SMC_ECC_MD_TYPCORREC_m   	0x00000030
#define SMC_ECC_MD_TYPCORREC_v(x)	(((x) >> 4) & 0x3)
#define SMC_ECC_MD_TYPCORREC_CPAGE	0x0
#define SMC_ECC_MD_TYPCORREC_C256B	0x1
#define SMC_ECC_MD_TYPCORREC_C512B	0x2

struct __struct_SMC_ECC_MD
{
  uint32_t	ecc_pagesize	: 2;
  uint32_t		: 2;
  uint32_t	typcorrec	: 2;
  uint32_t		: 26;
};

#define SMC_ECC_SR1_RECERR0     	(1 << 0)
#define SMC_ECC_SR1_ECCERR0(x)  	((x) << 1)
#define SMC_ECC_SR1_ECCERR0_m   	0x00000006
#define SMC_ECC_SR1_ECCERR0_v(x)	(((x) >> 1) & 0x3)
#define SMC_ECC_SR1_RECERR1     	(1 << 4)
#define SMC_ECC_SR1_ECCERR1     	(1 << 5)
#define SMC_ECC_SR1_MULERR1     	(1 << 6)
#define SMC_ECC_SR1_RECERR2     	(1 << 8)
#define SMC_ECC_SR1_ECCERR2     	(1 << 9)
#define SMC_ECC_SR1_MULERR2     	(1 << 10)
#define SMC_ECC_SR1_RECERR3     	(1 << 12)
#define SMC_ECC_SR1_ECCERR3     	(1 << 13)
#define SMC_ECC_SR1_MULERR3     	(1 << 14)
#define SMC_ECC_SR1_RECERR4     	(1 << 16)
#define SMC_ECC_SR1_ECCERR4(x)  	((x) << 17)
#define SMC_ECC_SR1_ECCERR4_m   	0x00060000
#define SMC_ECC_SR1_ECCERR4_v(x)	(((x) >> 17) & 0x3)
#define SMC_ECC_SR1_RECERR5     	(1 << 20)
#define SMC_ECC_SR1_ECCERR5(x)  	((x) << 21)
#define SMC_ECC_SR1_ECCERR5_m   	0x00600000
#define SMC_ECC_SR1_ECCERR5_v(x)	(((x) >> 21) & 0x3)
#define SMC_ECC_SR1_RECERR6     	(1 << 24)
#define SMC_ECC_SR1_ECCERR6(x)  	((x) << 25)
#define SMC_ECC_SR1_ECCERR6_m   	0x06000000
#define SMC_ECC_SR1_ECCERR6_v(x)	(((x) >> 25) & 0x3)
#define SMC_ECC_SR1_RECERR7     	(1 << 28)
#define SMC_ECC_SR1_ECCERR7(x)  	((x) << 29)
#define SMC_ECC_SR1_ECCERR7_m   	0x60000000
#define SMC_ECC_SR1_ECCERR7_v(x)	(((x) >> 29) & 0x3)

struct __struct_SMC_ECC_SR1
{
  uint32_t	recerr0	: 1;
  uint32_t	eccerr0	: 2;
  uint32_t		: 1;
  uint32_t	recerr1	: 1;
  uint32_t	eccerr1	: 1;
  uint32_t	mulerr1	: 1;
  uint32_t		: 1;
  uint32_t	recerr2	: 1;
  uint32_t	eccerr2	: 1;
  uint32_t	mulerr2	: 1;
  uint32_t		: 1;
  uint32_t	recerr3	: 1;
  uint32_t	eccerr3	: 1;
  uint32_t	mulerr3	: 1;
  uint32_t		: 1;
  uint32_t	recerr4	: 1;
  uint32_t	eccerr4	: 2;
  uint32_t		: 1;
  uint32_t	recerr5	: 1;
  uint32_t	eccerr5	: 2;
  uint32_t		: 1;
  uint32_t	recerr6	: 1;
  uint32_t	eccerr6	: 2;
  uint32_t		: 1;
  uint32_t	recerr7	: 1;
  uint32_t	eccerr7	: 2;
  uint32_t		: 1;
};

#define SMC_ECC_PR0_BITADDR(x)  	((x) << 0)
#define SMC_ECC_PR0_BITADDR_m   	0x0000000f
#define SMC_ECC_PR0_BITADDR_v(x)	(((x) >> 0) & 0xf)
#define SMC_ECC_PR0_WORDADDR(x)  	((x) << 4)
#define SMC_ECC_PR0_WORDADDR_m   	0x0000fff0
#define SMC_ECC_PR0_WORDADDR_v(x)	(((x) >> 4) & 0xfff)

struct __struct_SMC_ECC_PR0
{
  uint32_t	bitaddr	: 4;
  uint32_t	wordaddr	: 12;
  uint32_t		: 16;
};

#define SMC_ECC_PR1_NPARITY(x)  	((x) << 0)
#define SMC_ECC_PR1_NPARITY_m   	0x0000ffff
#define SMC_ECC_PR1_NPARITY_v(x)	(((x) >> 0) & 0xffff)

struct __struct_SMC_ECC_PR1
{
  uint32_t	nparity	: 16;
  uint32_t		: 16;
};

#define SMC_ECC_SR2_RECERR8     	(1 << 0)
#define SMC_ECC_SR2_ECCERR8(x)  	((x) << 1)
#define SMC_ECC_SR2_ECCERR8_m   	0x00000006
#define SMC_ECC_SR2_ECCERR8_v(x)	(((x) >> 1) & 0x3)
#define SMC_ECC_SR2_RECERR9     	(1 << 4)
#define SMC_ECC_SR2_ECCERR9     	(1 << 5)
#define SMC_ECC_SR2_MULERR9     	(1 << 6)
#define SMC_ECC_SR2_RECERR10     	(1 << 8)
#define SMC_ECC_SR2_ECCERR10     	(1 << 9)
#define SMC_ECC_SR2_MULERR10     	(1 << 10)
#define SMC_ECC_SR2_RECERR11     	(1 << 12)
#define SMC_ECC_SR2_ECCERR11     	(1 << 13)
#define SMC_ECC_SR2_MULERR11     	(1 << 14)
#define SMC_ECC_SR2_RECERR12     	(1 << 16)
#define SMC_ECC_SR2_ECCERR12(x)  	((x) << 17)
#define SMC_ECC_SR2_ECCERR12_m   	0x00060000
#define SMC_ECC_SR2_ECCERR12_v(x)	(((x) >> 17) & 0x3)
#define SMC_ECC_SR2_RECERR13     	(1 << 20)
#define SMC_ECC_SR2_ECCERR13(x)  	((x) << 21)
#define SMC_ECC_SR2_ECCERR13_m   	0x00600000
#define SMC_ECC_SR2_ECCERR13_v(x)	(((x) >> 21) & 0x3)
#define SMC_ECC_SR2_RECERR14     	(1 << 24)
#define SMC_ECC_SR2_ECCERR14(x)  	((x) << 25)
#define SMC_ECC_SR2_ECCERR14_m   	0x06000000
#define SMC_ECC_SR2_ECCERR14_v(x)	(((x) >> 25) & 0x3)
#define SMC_ECC_SR2_RECERR15     	(1 << 28)
#define SMC_ECC_SR2_ECCERR15(x)  	((x) << 29)
#define SMC_ECC_SR2_ECCERR15_m   	0x60000000
#define SMC_ECC_SR2_ECCERR15_v(x)	(((x) >> 29) & 0x3)

struct __struct_SMC_ECC_SR2
{
  uint32_t	recerr8	: 1;
  uint32_t	eccerr8	: 2;
  uint32_t		: 1;
  uint32_t	recerr9	: 1;
  uint32_t	eccerr9	: 1;
  uint32_t	mulerr9	: 1;
  uint32_t		: 1;
  uint32_t	recerr10	: 1;
  uint32_t	eccerr10	: 1;
  uint32_t	mulerr10	: 1;
  uint32_t		: 1;
  uint32_t	recerr11	: 1;
  uint32_t	eccerr11	: 1;
  uint32_t	mulerr11	: 1;
  uint32_t		: 1;
  uint32_t	recerr12	: 1;
  uint32_t	eccerr12	: 2;
  uint32_t		: 1;
  uint32_t	recerr13	: 1;
  uint32_t	eccerr13	: 2;
  uint32_t		: 1;
  uint32_t	recerr14	: 1;
  uint32_t	eccerr14	: 2;
  uint32_t		: 1;
  uint32_t	recerr15	: 1;
  uint32_t	eccerr15	: 2;
  uint32_t		: 1;
};

#define SMC_ECC_PR2_15_BITADDR(x)  	((x) << 0)
#define SMC_ECC_PR2_15_BITADDR_m   	0x00000007
#define SMC_ECC_PR2_15_BITADDR_v(x)	(((x) >> 0) & 0x7)
#define SMC_ECC_PR2_15_WORDADDR(x)  	((x) << 3)
#define SMC_ECC_PR2_15_WORDADDR_m   	0x00000ff8
#define SMC_ECC_PR2_15_WORDADDR_v(x)	(((x) >> 3) & 0x1ff)
#define SMC_ECC_PR2_15_NPARITY(x)  	((x) << 12)
#define SMC_ECC_PR2_15_NPARITY_m   	0x00fff000
#define SMC_ECC_PR2_15_NPARITY_v(x)	(((x) >> 12) & 0xfff)

struct __struct_SMC_ECC_PR2_15
{
  uint32_t	bitaddr	: 3;
  uint32_t	wordaddr	: 9;
  uint32_t	nparity	: 12;
  uint32_t		: 8;
};

#define SMC_SETUP_NWE_SETUP(x)  	((x) << 0)
#define SMC_SETUP_NWE_SETUP_m   	0x0000003f
#define SMC_SETUP_NWE_SETUP_v(x)	(((x) >> 0) & 0x3f)
#define SMC_SETUP_NCS_WR_SETUP(x)  	((x) << 8)
#define SMC_SETUP_NCS_WR_SETUP_m   	0x00003f00
#define SMC_SETUP_NCS_WR_SETUP_v(x)	(((x) >> 8) & 0x3f)
#define SMC_SETUP_NRD_SETUP(x)  	((x) << 16)
#define SMC_SETUP_NRD_SETUP_m   	0x003f0000
#define SMC_SETUP_NRD_SETUP_v(x)	(((x) >> 16) & 0x3f)
#define SMC_SETUP_NCS_RD_SETUP(x)  	((x) << 24)
#define SMC_SETUP_NCS_RD_SETUP_m   	0x3f000000
#define SMC_SETUP_NCS_RD_SETUP_v(x)	(((x) >> 24) & 0x3f)

struct __struct_SMC_SETUP
{
  uint32_t	nwe_setup	: 6;
  uint32_t		: 2;
  uint32_t	ncs_wr_setup	: 6;
  uint32_t		: 2;
  uint32_t	nrd_setup	: 6;
  uint32_t		: 2;
  uint32_t	ncs_rd_setup	: 6;
  uint32_t		: 2;
};

#define SMC_PULSE_NWE_PULSE(x)  	((x) << 0)
#define SMC_PULSE_NWE_PULSE_m   	0x0000003f
#define SMC_PULSE_NWE_PULSE_v(x)	(((x) >> 0) & 0x3f)
#define SMC_PULSE_NCS_WR_PULSE(x)  	((x) << 8)
#define SMC_PULSE_NCS_WR_PULSE_m   	0x00003f00
#define SMC_PULSE_NCS_WR_PULSE_v(x)	(((x) >> 8) & 0x3f)
#define SMC_PULSE_NRD_PULSE(x)  	((x) << 16)
#define SMC_PULSE_NRD_PULSE_m   	0x003f0000
#define SMC_PULSE_NRD_PULSE_v(x)	(((x) >> 16) & 0x3f)
#define SMC_PULSE_NCS_RD_PULSE(x)  	((x) << 24)
#define SMC_PULSE_NCS_RD_PULSE_m   	0x3f000000
#define SMC_PULSE_NCS_RD_PULSE_v(x)	(((x) >> 24) & 0x3f)

struct __struct_SMC_PULSE
{
  uint32_t	nwe_pulse	: 6;
  uint32_t		: 2;
  uint32_t	ncs_wr_pulse	: 6;
  uint32_t		: 2;
  uint32_t	nrd_pulse	: 6;
  uint32_t		: 2;
  uint32_t	ncs_rd_pulse	: 6;
  uint32_t		: 2;
};

#define SMC_CYCLE_NWE_CYCLE(x)  	((x) << 0)
#define SMC_CYCLE_NWE_CYCLE_m   	0x000001ff
#define SMC_CYCLE_NWE_CYCLE_v(x)	(((x) >> 0) & 0x1ff)
#define SMC_CYCLE_NRD_CYCLE(x)  	((x) << 16)
#define SMC_CYCLE_NRD_CYCLE_m   	0x01ff0000
#define SMC_CYCLE_NRD_CYCLE_v(x)	(((x) >> 16) & 0x1ff)

struct __struct_SMC_CYCLE
{
  uint32_t	nwe_cycle	: 9;
  uint32_t		: 7;
  uint32_t	nrd_cycle	: 9;
  uint32_t		: 7;
};

#define SMC_TIMINGS_TCLR(x)  	((x) << 0)
#define SMC_TIMINGS_TCLR_m   	0x0000000f
#define SMC_TIMINGS_TCLR_v(x)	(((x) >> 0) & 0xf)
#define SMC_TIMINGS_TADL(x)  	((x) << 4)
#define SMC_TIMINGS_TADL_m   	0x000000f0
#define SMC_TIMINGS_TADL_v(x)	(((x) >> 4) & 0xf)
#define SMC_TIMINGS_TAR(x)  	((x) << 8)
#define SMC_TIMINGS_TAR_m   	0x00000f00
#define SMC_TIMINGS_TAR_v(x)	(((x) >> 8) & 0xf)
#define SMC_TIMINGS_OCMS     	(1 << 12)
#define SMC_TIMINGS_TRR(x)  	((x) << 16)
#define SMC_TIMINGS_TRR_m   	0x000f0000
#define SMC_TIMINGS_TRR_v(x)	(((x) >> 16) & 0xf)
#define SMC_TIMINGS_TWB(x)  	((x) << 24)
#define SMC_TIMINGS_TWB_m   	0x0f000000
#define SMC_TIMINGS_TWB_v(x)	(((x) >> 24) & 0xf)
#define SMC_TIMINGS_RBNSEL(x)  	((x) << 28)
#define SMC_TIMINGS_RBNSEL_m   	0x70000000
#define SMC_TIMINGS_RBNSEL_v(x)	(((x) >> 28) & 0x7)
#define SMC_TIMINGS_NFSEL     	(1 << 31)

struct __struct_SMC_TIMINGS
{
  uint32_t	tclr	: 4;
  uint32_t	tadl	: 4;
  uint32_t	tar	: 4;
  uint32_t	ocms	: 1;
  uint32_t		: 3;
  uint32_t	trr	: 4;
  uint32_t		: 4;
  uint32_t	twb	: 4;
  uint32_t	rbnsel	: 3;
  uint32_t	nfsel	: 1;
};

#define SMC_MODE_READ_MODE     	(1 << 0)
#define SMC_MODE_READ_MODE_NCS_CTRL	0x0
#define SMC_MODE_READ_MODE_NRD_CTRL	0x1
#define SMC_MODE_WRITE_MODE     	(1 << 1)
#define SMC_MODE_WRITE_MODE_NCS_CTRL	0x0
#define SMC_MODE_WRITE_MODE_NWE_CTRL	0x1
#define SMC_MODE_EXNW_MODE(x)  	((x) << 4)
#define SMC_MODE_EXNW_MODE_m   	0x00000030
#define SMC_MODE_EXNW_MODE_v(x)	(((x) >> 4) & 0x3)
#define SMC_MODE_EXNW_MODE_DISABLED	0x0
#define SMC_MODE_EXNW_MODE_FROZEN	0x2
#define SMC_MODE_EXNW_MODE_READY	0x3
#define SMC_MODE_BAT     	(1 << 8)
#define SMC_MODE_DBW     	(1 << 12)
#define SMC_MODE_DBW_BIT_8	0x0
#define SMC_MODE_DBW_BIT_16	0x1
#define SMC_MODE_TDF_CYCLES(x)  	((x) << 16)
#define SMC_MODE_TDF_CYCLES_m   	0x000f0000
#define SMC_MODE_TDF_CYCLES_v(x)	(((x) >> 16) & 0xf)
#define SMC_MODE_TDF_MODE     	(1 << 20)

struct __struct_SMC_MODE
{
  uint32_t	read_mode	: 1;
  uint32_t	write_mode	: 1;
  uint32_t		: 2;
  uint32_t	exnw_mode	: 2;
  uint32_t		: 2;
  uint32_t	bat	: 1;
  uint32_t		: 3;
  uint32_t	dbw	: 1;
  uint32_t		: 3;
  uint32_t	tdf_cycles	: 4;
  uint32_t	tdf_mode	: 1;
  uint32_t		: 11;
};

#define SMC_OCMS_SMSE     	(1 << 0)
#define SMC_OCMS_SRSE     	(1 << 1)

struct __struct_SMC_OCMS
{
  uint32_t	smse	: 1;
  uint32_t	srse	: 1;
  uint32_t		: 30;
};

#define SMC_WPCR_WP_EN     	(1 << 0)
#define SMC_WPCR_WP_KEY(x)  	((x) << 8)
#define SMC_WPCR_WP_KEY_m   	0xffffff00
#define SMC_WPCR_WP_KEY_v(x)	(((x) >> 8) & 0xffffff)
#define SMC_WPCR_WP_KEY_KEY	0x534d43

struct __struct_SMC_WPCR
{
  uint32_t	wp_en	: 1;
  uint32_t		: 7;
  uint32_t	wp_key	: 24;
};

#define SMC_WPSR_WP_VS(x)  	((x) << 0)
#define SMC_WPSR_WP_VS_m   	0x0000000f
#define SMC_WPSR_WP_VS_v(x)	(((x) >> 0) & 0xf)
#define SMC_WPSR_WP_VSRC(x)  	((x) << 8)
#define SMC_WPSR_WP_VSRC_m   	0x00ffff00
#define SMC_WPSR_WP_VSRC_v(x)	(((x) >> 8) & 0xffff)

struct __struct_SMC_WPSR
{
  uint32_t	wp_vs	: 4;
  uint32_t		: 4;
  uint32_t	wp_vsrc	: 16;
  uint32_t		: 8;
};


// MATRIX
#define MATRIX_MCFG_ULBT(x)  	((x) << 0)
#define MATRIX_MCFG_ULBT_m   	0x00000007
#define MATRIX_MCFG_ULBT_v(x)	(((x) >> 0) & 0x7)

struct __struct_MATRIX_MCFG
{
  uint32_t	ulbt	: 3;
  uint32_t		: 29;
};

#define MATRIX_SCFG_SLOT_CYCLE(x)  	((x) << 0)
#define MATRIX_SCFG_SLOT_CYCLE_m   	0x000000ff
#define MATRIX_SCFG_SLOT_CYCLE_v(x)	(((x) >> 0) & 0xff)
#define MATRIX_SCFG_DEFMSTR_TYPE(x)  	((x) << 16)
#define MATRIX_SCFG_DEFMSTR_TYPE_m   	0x00030000
#define MATRIX_SCFG_DEFMSTR_TYPE_v(x)	(((x) >> 16) & 0x3)
#define MATRIX_SCFG_FIXED_DEFMSTR(x)  	((x) << 18)
#define MATRIX_SCFG_FIXED_DEFMSTR_m   	0x001c0000
#define MATRIX_SCFG_FIXED_DEFMSTR_v(x)	(((x) >> 18) & 0x7)
#define MATRIX_SCFG_ARBT(x)  	((x) << 24)
#define MATRIX_SCFG_ARBT_m   	0x03000000
#define MATRIX_SCFG_ARBT_v(x)	(((x) >> 24) & 0x3)

struct __struct_MATRIX_SCFG
{
  uint32_t	slot_cycle	: 8;
  uint32_t		: 8;
  uint32_t	defmstr_type	: 2;
  uint32_t	fixed_defmstr	: 3;
  uint32_t		: 3;
  uint32_t	arbt	: 2;
  uint32_t		: 6;
};

#define MATRIX_PRAS_M0PR(x)  	((x) << 0)
#define MATRIX_PRAS_M0PR_m   	0x00000003
#define MATRIX_PRAS_M0PR_v(x)	(((x) >> 0) & 0x3)
#define MATRIX_PRAS_M1PR(x)  	((x) << 4)
#define MATRIX_PRAS_M1PR_m   	0x00000030
#define MATRIX_PRAS_M1PR_v(x)	(((x) >> 4) & 0x3)
#define MATRIX_PRAS_M2PR(x)  	((x) << 8)
#define MATRIX_PRAS_M2PR_m   	0x00000300
#define MATRIX_PRAS_M2PR_v(x)	(((x) >> 8) & 0x3)
#define MATRIX_PRAS_M3PR(x)  	((x) << 12)
#define MATRIX_PRAS_M3PR_m   	0x00003000
#define MATRIX_PRAS_M3PR_v(x)	(((x) >> 12) & 0x3)
#define MATRIX_PRAS_M4PR(x)  	((x) << 16)
#define MATRIX_PRAS_M4PR_m   	0x00030000
#define MATRIX_PRAS_M4PR_v(x)	(((x) >> 16) & 0x3)

struct __struct_MATRIX_PRAS
{
  uint32_t	m0pr	: 2;
  uint32_t		: 2;
  uint32_t	m1pr	: 2;
  uint32_t		: 2;
  uint32_t	m2pr	: 2;
  uint32_t		: 2;
  uint32_t	m3pr	: 2;
  uint32_t		: 2;
  uint32_t	m4pr	: 2;
  uint32_t		: 14;
};

#define MATRIX_MRCR_RCB0     	(1 << 0)
#define MATRIX_MRCR_RCB1     	(1 << 1)
#define MATRIX_MRCR_RCB2     	(1 << 2)
#define MATRIX_MRCR_RCB3     	(1 << 3)
#define MATRIX_MRCR_RCB4     	(1 << 4)

struct __struct_MATRIX_MRCR
{
  uint32_t	rcb0	: 1;
  uint32_t	rcb1	: 1;
  uint32_t	rcb2	: 1;
  uint32_t	rcb3	: 1;
  uint32_t	rcb4	: 1;
  uint32_t		: 27;
};

#define MATRIX_WPMR_WPEN     	(1 << 0)
#define MATRIX_WPMR_WPKEY(x)  	((x) << 8)
#define MATRIX_WPMR_WPKEY_m   	0xffffff00
#define MATRIX_WPMR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define MATRIX_WPMR_WPKEY_KEY	0x4d4154

struct __struct_MATRIX_WPMR
{
  uint32_t	wpen	: 1;
  uint32_t		: 7;
  uint32_t	wpkey	: 24;
};

#define MATRIX_WPSR_WPVS     	(1 << 0)
#define MATRIX_WPSR_WPVSRC(x)  	((x) << 8)
#define MATRIX_WPSR_WPVSRC_m   	0x00ffff00
#define MATRIX_WPSR_WPVSRC_v(x)	(((x) >> 8) & 0xffff)

struct __struct_MATRIX_WPSR
{
  uint32_t	wpvs	: 1;
  uint32_t		: 7;
  uint32_t	wpvsrc	: 16;
  uint32_t		: 8;
};


// PMC
#define PMC_SCER_PCK0     	(1 << 8)
#define PMC_SCER_PCK1     	(1 << 9)
#define PMC_SCER_PCK2     	(1 << 10)

struct __struct_PMC_SCER
{
  uint32_t		: 8;
  uint32_t	pck0	: 1;
  uint32_t	pck1	: 1;
  uint32_t	pck2	: 1;
  uint32_t		: 21;
};

#define PMC_SCDR_PCK0     	(1 << 8)
#define PMC_SCDR_PCK1     	(1 << 9)
#define PMC_SCDR_PCK2     	(1 << 10)

struct __struct_PMC_SCDR
{
  uint32_t		: 8;
  uint32_t	pck0	: 1;
  uint32_t	pck1	: 1;
  uint32_t	pck2	: 1;
  uint32_t		: 21;
};

#define PMC_SCSR_PCK0     	(1 << 8)
#define PMC_SCSR_PCK1     	(1 << 9)
#define PMC_SCSR_PCK2     	(1 << 10)

struct __struct_PMC_SCSR
{
  uint32_t		: 8;
  uint32_t	pck0	: 1;
  uint32_t	pck1	: 1;
  uint32_t	pck2	: 1;
  uint32_t		: 21;
};

#define PMC_PCER0_SUPC     	(1 << 0)
#define PMC_PCER0_RSTC     	(1 << 1)
#define PMC_PCER0_RTC     	(1 << 2)
#define PMC_PCER0_RTT     	(1 << 3)
#define PMC_PCER0_WDT     	(1 << 4)
#define PMC_PCER0_PMC     	(1 << 5)
#define PMC_PCER0_EEFC0     	(1 << 6)
#define PMC_PCER0_EEFC1     	(1 << 7)
#define PMC_PCER0_UART     	(1 << 8)
#define PMC_PCER0_SMC     	(1 << 9)
#define PMC_PCER0_PIOA     	(1 << 10)
#define PMC_PCER0_PIOB     	(1 << 11)
#define PMC_PCER0_PIOC     	(1 << 12)
#define PMC_PCER0_USART0     	(1 << 13)
#define PMC_PCER0_USART1     	(1 << 14)
#define PMC_PCER0_USART2     	(1 << 15)
#define PMC_PCER0_USART3     	(1 << 16)
#define PMC_PCER0_HSMCI     	(1 << 17)
#define PMC_PCER0_TWI0     	(1 << 18)
#define PMC_PCER0_TWI1     	(1 << 19)
#define PMC_PCER0_SPI     	(1 << 20)
#define PMC_PCER0_SSC     	(1 << 21)
#define PMC_PCER0_TC0     	(1 << 22)
#define PMC_PCER0_TC1     	(1 << 23)
#define PMC_PCER0_TC2     	(1 << 24)
#define PMC_PCER0_PWM     	(1 << 25)
#define PMC_PCER0_ADC12B     	(1 << 26)
#define PMC_PCER0_ADC     	(1 << 27)
#define PMC_PCER0_DMAC     	(1 << 28)
#define PMC_PCER0_UDPHS     	(1 << 29)

struct __struct_PMC_PCER0
{
  uint32_t	supc	: 1;
  uint32_t	rstc	: 1;
  uint32_t	rtc	: 1;
  uint32_t	rtt	: 1;
  uint32_t	wdt	: 1;
  uint32_t	pmc	: 1;
  uint32_t	eefc0	: 1;
  uint32_t	eefc1	: 1;
  uint32_t	uart	: 1;
  uint32_t	smc	: 1;
  uint32_t	pioa	: 1;
  uint32_t	piob	: 1;
  uint32_t	pioc	: 1;
  uint32_t	usart0	: 1;
  uint32_t	usart1	: 1;
  uint32_t	usart2	: 1;
  uint32_t	usart3	: 1;
  uint32_t	hsmci	: 1;
  uint32_t	twi0	: 1;
  uint32_t	twi1	: 1;
  uint32_t	spi	: 1;
  uint32_t	ssc	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	pwm	: 1;
  uint32_t	adc12b	: 1;
  uint32_t	adc	: 1;
  uint32_t	dmac	: 1;
  uint32_t	udphs	: 1;
  uint32_t		: 2;
};

#define PMC_PCDR0_SUPC     	(1 << 0)
#define PMC_PCDR0_RSTC     	(1 << 1)
#define PMC_PCDR0_RTC     	(1 << 2)
#define PMC_PCDR0_RTT     	(1 << 3)
#define PMC_PCDR0_WDT     	(1 << 4)
#define PMC_PCDR0_PMC     	(1 << 5)
#define PMC_PCDR0_EEFC0     	(1 << 6)
#define PMC_PCDR0_EEFC1     	(1 << 7)
#define PMC_PCDR0_UART     	(1 << 8)
#define PMC_PCDR0_SMC     	(1 << 9)
#define PMC_PCDR0_PIOA     	(1 << 10)
#define PMC_PCDR0_PIOB     	(1 << 11)
#define PMC_PCDR0_PIOC     	(1 << 12)
#define PMC_PCDR0_USART0     	(1 << 13)
#define PMC_PCDR0_USART1     	(1 << 14)
#define PMC_PCDR0_USART2     	(1 << 15)
#define PMC_PCDR0_USART3     	(1 << 16)
#define PMC_PCDR0_HSMCI     	(1 << 17)
#define PMC_PCDR0_TWI0     	(1 << 18)
#define PMC_PCDR0_TWI1     	(1 << 19)
#define PMC_PCDR0_SPI     	(1 << 20)
#define PMC_PCDR0_SSC     	(1 << 21)
#define PMC_PCDR0_TC0     	(1 << 22)
#define PMC_PCDR0_TC1     	(1 << 23)
#define PMC_PCDR0_TC2     	(1 << 24)
#define PMC_PCDR0_PWM     	(1 << 25)
#define PMC_PCDR0_ADC12B     	(1 << 26)
#define PMC_PCDR0_ADC     	(1 << 27)
#define PMC_PCDR0_DMAC     	(1 << 28)
#define PMC_PCDR0_UDPHS     	(1 << 29)

struct __struct_PMC_PCDR0
{
  uint32_t	supc	: 1;
  uint32_t	rstc	: 1;
  uint32_t	rtc	: 1;
  uint32_t	rtt	: 1;
  uint32_t	wdt	: 1;
  uint32_t	pmc	: 1;
  uint32_t	eefc0	: 1;
  uint32_t	eefc1	: 1;
  uint32_t	uart	: 1;
  uint32_t	smc	: 1;
  uint32_t	pioa	: 1;
  uint32_t	piob	: 1;
  uint32_t	pioc	: 1;
  uint32_t	usart0	: 1;
  uint32_t	usart1	: 1;
  uint32_t	usart2	: 1;
  uint32_t	usart3	: 1;
  uint32_t	hsmci	: 1;
  uint32_t	twi0	: 1;
  uint32_t	twi1	: 1;
  uint32_t	spi	: 1;
  uint32_t	ssc	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	pwm	: 1;
  uint32_t	adc12b	: 1;
  uint32_t	adc	: 1;
  uint32_t	dmac	: 1;
  uint32_t	udphs	: 1;
  uint32_t		: 2;
};

#define PMC_PCSR0_SUPC     	(1 << 0)
#define PMC_PCSR0_RSTC     	(1 << 1)
#define PMC_PCSR0_RTC     	(1 << 2)
#define PMC_PCSR0_RTT     	(1 << 3)
#define PMC_PCSR0_WDT     	(1 << 4)
#define PMC_PCSR0_PMC     	(1 << 5)
#define PMC_PCSR0_EEFC0     	(1 << 6)
#define PMC_PCSR0_EEFC1     	(1 << 7)
#define PMC_PCSR0_UART     	(1 << 8)
#define PMC_PCSR0_SMC     	(1 << 9)
#define PMC_PCSR0_PIOA     	(1 << 10)
#define PMC_PCSR0_PIOB     	(1 << 11)
#define PMC_PCSR0_PIOC     	(1 << 12)
#define PMC_PCSR0_USART0     	(1 << 13)
#define PMC_PCSR0_USART1     	(1 << 14)
#define PMC_PCSR0_USART2     	(1 << 15)
#define PMC_PCSR0_USART3     	(1 << 16)
#define PMC_PCSR0_HSMCI     	(1 << 17)
#define PMC_PCSR0_TWI0     	(1 << 18)
#define PMC_PCSR0_TWI1     	(1 << 19)
#define PMC_PCSR0_SPI     	(1 << 20)
#define PMC_PCSR0_SSC     	(1 << 21)
#define PMC_PCSR0_TC0     	(1 << 22)
#define PMC_PCSR0_TC1     	(1 << 23)
#define PMC_PCSR0_TC2     	(1 << 24)
#define PMC_PCSR0_PWM     	(1 << 25)
#define PMC_PCSR0_ADC12B     	(1 << 26)
#define PMC_PCSR0_ADC     	(1 << 27)
#define PMC_PCSR0_DMAC     	(1 << 28)
#define PMC_PCSR0_UDPHS     	(1 << 29)

struct __struct_PMC_PCSR0
{
  uint32_t	supc	: 1;
  uint32_t	rstc	: 1;
  uint32_t	rtc	: 1;
  uint32_t	rtt	: 1;
  uint32_t	wdt	: 1;
  uint32_t	pmc	: 1;
  uint32_t	eefc0	: 1;
  uint32_t	eefc1	: 1;
  uint32_t	uart	: 1;
  uint32_t	smc	: 1;
  uint32_t	pioa	: 1;
  uint32_t	piob	: 1;
  uint32_t	pioc	: 1;
  uint32_t	usart0	: 1;
  uint32_t	usart1	: 1;
  uint32_t	usart2	: 1;
  uint32_t	usart3	: 1;
  uint32_t	hsmci	: 1;
  uint32_t	twi0	: 1;
  uint32_t	twi1	: 1;
  uint32_t	spi	: 1;
  uint32_t	ssc	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	pwm	: 1;
  uint32_t	adc12b	: 1;
  uint32_t	adc	: 1;
  uint32_t	dmac	: 1;
  uint32_t	udphs	: 1;
  uint32_t		: 2;
};

#define PMC_CKGR_UCKR_UPLLEN     	(1 << 16)
#define PMC_CKGR_UCKR_UPLLCOUNT(x)  	((x) << 20)
#define PMC_CKGR_UCKR_UPLLCOUNT_m   	0x00f00000
#define PMC_CKGR_UCKR_UPLLCOUNT_v(x)	(((x) >> 20) & 0xf)

struct __struct_PMC_CKGR_UCKR
{
  uint32_t		: 16;
  uint32_t	upllen	: 1;
  uint32_t		: 3;
  uint32_t	upllcount	: 4;
  uint32_t		: 8;
};

#define PMC_CKGR_MOR_MOSCXTEN     	(1 << 0)
#define PMC_CKGR_MOR_MOSCXTBY     	(1 << 1)
#define PMC_CKGR_MOR_MOSCRCEN     	(1 << 3)
#define PMC_CKGR_MOR_MOSCRCF(x)  	((x) << 4)
#define PMC_CKGR_MOR_MOSCRCF_m   	0x00000070
#define PMC_CKGR_MOR_MOSCRCF_v(x)	(((x) >> 4) & 0x7)
#define PMC_CKGR_MOR_MOSCRCF_4_MHz	0x0
#define PMC_CKGR_MOR_MOSCRCF_8_MHz	0x1
#define PMC_CKGR_MOR_MOSCRCF_12_MHz	0x2
#define PMC_CKGR_MOR_MOSCXTST(x)  	((x) << 8)
#define PMC_CKGR_MOR_MOSCXTST_m   	0x0000ff00
#define PMC_CKGR_MOR_MOSCXTST_v(x)	(((x) >> 8) & 0xff)
#define PMC_CKGR_MOR_KEY(x)  	((x) << 16)
#define PMC_CKGR_MOR_KEY_m   	0x00ff0000
#define PMC_CKGR_MOR_KEY_v(x)	(((x) >> 16) & 0xff)
#define PMC_CKGR_MOR_KEY_KEY	0x37
#define PMC_CKGR_MOR_MOSCSEL     	(1 << 24)
#define PMC_CKGR_MOR_CFDEN     	(1 << 25)

struct __struct_PMC_CKGR_MOR
{
  uint32_t	moscxten	: 1;
  uint32_t	moscxtby	: 1;
  uint32_t		: 1;
  uint32_t	moscrcen	: 1;
  uint32_t	moscrcf	: 3;
  uint32_t		: 1;
  uint32_t	moscxtst	: 8;
  uint32_t	key	: 8;
  uint32_t	moscsel	: 1;
  uint32_t	cfden	: 1;
  uint32_t		: 6;
};

#define PMC_CKGR_MCFR_MAINF(x)  	((x) << 0)
#define PMC_CKGR_MCFR_MAINF_m   	0x0000ffff
#define PMC_CKGR_MCFR_MAINF_v(x)	(((x) >> 0) & 0xffff)
#define PMC_CKGR_MCFR_MAINFRDY     	(1 << 16)

struct __struct_PMC_CKGR_MCFR
{
  uint32_t	mainf	: 16;
  uint32_t	mainfrdy	: 1;
  uint32_t		: 15;
};

#define PMC_CKGR_PLLAR_DIVA(x)  	((x) << 0)
#define PMC_CKGR_PLLAR_DIVA_m   	0x000000ff
#define PMC_CKGR_PLLAR_DIVA_v(x)	(((x) >> 0) & 0xff)
#define PMC_CKGR_PLLAR_PLLACOUNT(x)  	((x) << 8)
#define PMC_CKGR_PLLAR_PLLACOUNT_m   	0x00003f00
#define PMC_CKGR_PLLAR_PLLACOUNT_v(x)	(((x) >> 8) & 0x3f)
#define PMC_CKGR_PLLAR_MULA(x)  	((x) << 16)
#define PMC_CKGR_PLLAR_MULA_m   	0x07ff0000
#define PMC_CKGR_PLLAR_MULA_v(x)	(((x) >> 16) & 0x7ff)
#define PMC_CKGR_PLLAR_ONE     	(1 << 29)

struct __struct_PMC_CKGR_PLLAR
{
  uint32_t	diva	: 8;
  uint32_t	pllacount	: 6;
  uint32_t		: 2;
  uint32_t	mula	: 11;
  uint32_t		: 2;
  uint32_t	one	: 1;
  uint32_t		: 2;
};

#define PMC_MCKR_CSS(x)  	((x) << 0)
#define PMC_MCKR_CSS_m   	0x00000003
#define PMC_MCKR_CSS_v(x)	(((x) >> 0) & 0x3)
#define PMC_MCKR_CSS_SLOW_CLK	0x0
#define PMC_MCKR_CSS_MAIN_CLK	0x1
#define PMC_MCKR_CSS_PLLA_CLK	0x2
#define PMC_MCKR_CSS_UPLL_CLK	0x3
#define PMC_MCKR_PRES(x)  	((x) << 4)
#define PMC_MCKR_PRES_m   	0x00000070
#define PMC_MCKR_PRES_v(x)	(((x) >> 4) & 0x7)
#define PMC_MCKR_PRES_CLK_1	0x0
#define PMC_MCKR_PRES_CLK_2	0x1
#define PMC_MCKR_PRES_CLK_4	0x2
#define PMC_MCKR_PRES_CLK_8	0x3
#define PMC_MCKR_PRES_CLK_16	0x4
#define PMC_MCKR_PRES_CLK_32	0x5
#define PMC_MCKR_PRES_CLK_64	0x6
#define PMC_MCKR_PRES_CLK_3	0x7
#define PMC_MCKR_PLLADIV2     	(1 << 12)
#define PMC_MCKR_UPLLDIV2     	(1 << 13)

struct __struct_PMC_MCKR
{
  uint32_t	css	: 2;
  uint32_t		: 2;
  uint32_t	pres	: 3;
  uint32_t		: 5;
  uint32_t	plladiv2	: 1;
  uint32_t	uplldiv2	: 1;
  uint32_t		: 18;
};

#define PMC_PCK_CSS(x)  	((x) << 0)
#define PMC_PCK_CSS_m   	0x00000007
#define PMC_PCK_CSS_v(x)	(((x) >> 0) & 0x7)
#define PMC_PCK_CSS_SLOW_CLK	0x0
#define PMC_PCK_CSS_MAIN_CLK	0x1
#define PMC_PCK_CSS_PLLA_CLK	0x2
#define PMC_PCK_CSS_UPLL_CLK	0x3
#define PMC_PCK_CSS_MCK	0x4
#define PMC_PCK_PRES(x)  	((x) << 4)
#define PMC_PCK_PRES_m   	0x00000070
#define PMC_PCK_PRES_v(x)	(((x) >> 4) & 0x7)
#define PMC_PCK_PRES_CLK_1	0x0
#define PMC_PCK_PRES_CLK_2	0x1
#define PMC_PCK_PRES_CLK_4	0x2
#define PMC_PCK_PRES_CLK_8	0x3
#define PMC_PCK_PRES_CLK_16	0x4
#define PMC_PCK_PRES_CLK_32	0x5
#define PMC_PCK_PRES_CLK_64	0x6

struct __struct_PMC_PCK
{
  uint32_t	css	: 3;
  uint32_t		: 1;
  uint32_t	pres	: 3;
  uint32_t		: 25;
};

#define PMC_IER_MOSCXTS     	(1 << 0)
#define PMC_IER_LOCKA     	(1 << 1)
#define PMC_IER_MCKRDY     	(1 << 3)
#define PMC_IER_LOCKU     	(1 << 6)
#define PMC_IER_PCKRDY0     	(1 << 8)
#define PMC_IER_PCKRDY1     	(1 << 9)
#define PMC_IER_PCKRDY2     	(1 << 10)
#define PMC_IER_MOSCSELS     	(1 << 16)
#define PMC_IER_MOSCRCS     	(1 << 17)
#define PMC_IER_CFDEV     	(1 << 18)

struct __struct_PMC_IER
{
  uint32_t	moscxts	: 1;
  uint32_t	locka	: 1;
  uint32_t		: 1;
  uint32_t	mckrdy	: 1;
  uint32_t		: 2;
  uint32_t	locku	: 1;
  uint32_t		: 1;
  uint32_t	pckrdy0	: 1;
  uint32_t	pckrdy1	: 1;
  uint32_t	pckrdy2	: 1;
  uint32_t		: 5;
  uint32_t	moscsels	: 1;
  uint32_t	moscrcs	: 1;
  uint32_t	cfdev	: 1;
  uint32_t		: 13;
};

#define PMC_IDR_MOSCXTS     	(1 << 0)
#define PMC_IDR_LOCKA     	(1 << 1)
#define PMC_IDR_MCKRDY     	(1 << 3)
#define PMC_IDR_LOCKU     	(1 << 6)
#define PMC_IDR_PCKRDY0     	(1 << 8)
#define PMC_IDR_PCKRDY1     	(1 << 9)
#define PMC_IDR_PCKRDY2     	(1 << 10)
#define PMC_IDR_MOSCSELS     	(1 << 16)
#define PMC_IDR_MOSCRCS     	(1 << 17)
#define PMC_IDR_CFDEV     	(1 << 18)

struct __struct_PMC_IDR
{
  uint32_t	moscxts	: 1;
  uint32_t	locka	: 1;
  uint32_t		: 1;
  uint32_t	mckrdy	: 1;
  uint32_t		: 2;
  uint32_t	locku	: 1;
  uint32_t		: 1;
  uint32_t	pckrdy0	: 1;
  uint32_t	pckrdy1	: 1;
  uint32_t	pckrdy2	: 1;
  uint32_t		: 5;
  uint32_t	moscsels	: 1;
  uint32_t	moscrcs	: 1;
  uint32_t	cfdev	: 1;
  uint32_t		: 13;
};

#define PMC_SR_MOSCXTS     	(1 << 0)
#define PMC_SR_LOCKA     	(1 << 1)
#define PMC_SR_MCKRDY     	(1 << 3)
#define PMC_SR_LOCKU     	(1 << 6)
#define PMC_SR_OSCSELS     	(1 << 7)
#define PMC_SR_PCKRDY0     	(1 << 8)
#define PMC_SR_PCKRDY1     	(1 << 9)
#define PMC_SR_PCKRDY2     	(1 << 10)
#define PMC_SR_MOSCSELS     	(1 << 16)
#define PMC_SR_MOSCRCS     	(1 << 17)
#define PMC_SR_CFDEV     	(1 << 18)
#define PMC_SR_CFDS     	(1 << 19)
#define PMC_SR_FOS     	(1 << 20)

struct __struct_PMC_SR
{
  uint32_t	moscxts	: 1;
  uint32_t	locka	: 1;
  uint32_t		: 1;
  uint32_t	mckrdy	: 1;
  uint32_t		: 2;
  uint32_t	locku	: 1;
  uint32_t	oscsels	: 1;
  uint32_t	pckrdy0	: 1;
  uint32_t	pckrdy1	: 1;
  uint32_t	pckrdy2	: 1;
  uint32_t		: 5;
  uint32_t	moscsels	: 1;
  uint32_t	moscrcs	: 1;
  uint32_t	cfdev	: 1;
  uint32_t	cfds	: 1;
  uint32_t	fos	: 1;
  uint32_t		: 11;
};

#define PMC_IMR_MOSCXTS     	(1 << 0)
#define PMC_IMR_LOCKA     	(1 << 1)
#define PMC_IMR_MCKRDY     	(1 << 3)
#define PMC_IMR_LOCKU     	(1 << 6)
#define PMC_IMR_PCKRDY0     	(1 << 8)
#define PMC_IMR_PCKRDY1     	(1 << 9)
#define PMC_IMR_PCKRDY2     	(1 << 10)
#define PMC_IMR_MOSCSELS     	(1 << 16)
#define PMC_IMR_MOSCRCS     	(1 << 17)
#define PMC_IMR_CFDEV     	(1 << 18)

struct __struct_PMC_IMR
{
  uint32_t	moscxts	: 1;
  uint32_t	locka	: 1;
  uint32_t		: 1;
  uint32_t	mckrdy	: 1;
  uint32_t		: 2;
  uint32_t	locku	: 1;
  uint32_t		: 1;
  uint32_t	pckrdy0	: 1;
  uint32_t	pckrdy1	: 1;
  uint32_t	pckrdy2	: 1;
  uint32_t		: 5;
  uint32_t	moscsels	: 1;
  uint32_t	moscrcs	: 1;
  uint32_t	cfdev	: 1;
  uint32_t		: 13;
};

#define PMC_FSMR_FSTT0     	(1 << 0)
#define PMC_FSMR_FSTT1     	(1 << 1)
#define PMC_FSMR_FSTT2     	(1 << 2)
#define PMC_FSMR_FSTT3     	(1 << 3)
#define PMC_FSMR_FSTT4     	(1 << 4)
#define PMC_FSMR_FSTT5     	(1 << 5)
#define PMC_FSMR_FSTT6     	(1 << 6)
#define PMC_FSMR_FSTT7     	(1 << 7)
#define PMC_FSMR_FSTT8     	(1 << 8)
#define PMC_FSMR_FSTT9     	(1 << 9)
#define PMC_FSMR_FSTT10     	(1 << 10)
#define PMC_FSMR_FSTT11     	(1 << 11)
#define PMC_FSMR_FSTT12     	(1 << 12)
#define PMC_FSMR_FSTT13     	(1 << 13)
#define PMC_FSMR_FSTT14     	(1 << 14)
#define PMC_FSMR_FSTT15     	(1 << 15)
#define PMC_FSMR_RTTAL     	(1 << 16)
#define PMC_FSMR_RTCAL     	(1 << 17)
#define PMC_FSMR_USBAL     	(1 << 18)
#define PMC_FSMR_LPM     	(1 << 20)

struct __struct_PMC_FSMR
{
  uint32_t	fstt0	: 1;
  uint32_t	fstt1	: 1;
  uint32_t	fstt2	: 1;
  uint32_t	fstt3	: 1;
  uint32_t	fstt4	: 1;
  uint32_t	fstt5	: 1;
  uint32_t	fstt6	: 1;
  uint32_t	fstt7	: 1;
  uint32_t	fstt8	: 1;
  uint32_t	fstt9	: 1;
  uint32_t	fstt10	: 1;
  uint32_t	fstt11	: 1;
  uint32_t	fstt12	: 1;
  uint32_t	fstt13	: 1;
  uint32_t	fstt14	: 1;
  uint32_t	fstt15	: 1;
  uint32_t	rttal	: 1;
  uint32_t	rtcal	: 1;
  uint32_t	usbal	: 1;
  uint32_t		: 1;
  uint32_t	lpm	: 1;
  uint32_t		: 11;
};

#define PMC_FSPR_FSTP0     	(1 << 0)
#define PMC_FSPR_FSTP1     	(1 << 1)
#define PMC_FSPR_FSTP2     	(1 << 2)
#define PMC_FSPR_FSTP3     	(1 << 3)
#define PMC_FSPR_FSTP4     	(1 << 4)
#define PMC_FSPR_FSTP5     	(1 << 5)
#define PMC_FSPR_FSTP6     	(1 << 6)
#define PMC_FSPR_FSTP7     	(1 << 7)
#define PMC_FSPR_FSTP8     	(1 << 8)
#define PMC_FSPR_FSTP9     	(1 << 9)
#define PMC_FSPR_FSTP10     	(1 << 10)
#define PMC_FSPR_FSTP11     	(1 << 11)
#define PMC_FSPR_FSTP12     	(1 << 12)
#define PMC_FSPR_FSTP13     	(1 << 13)
#define PMC_FSPR_FSTP14     	(1 << 14)
#define PMC_FSPR_FSTP15     	(1 << 15)

struct __struct_PMC_FSPR
{
  uint32_t	fstp0	: 1;
  uint32_t	fstp1	: 1;
  uint32_t	fstp2	: 1;
  uint32_t	fstp3	: 1;
  uint32_t	fstp4	: 1;
  uint32_t	fstp5	: 1;
  uint32_t	fstp6	: 1;
  uint32_t	fstp7	: 1;
  uint32_t	fstp8	: 1;
  uint32_t	fstp9	: 1;
  uint32_t	fstp10	: 1;
  uint32_t	fstp11	: 1;
  uint32_t	fstp12	: 1;
  uint32_t	fstp13	: 1;
  uint32_t	fstp14	: 1;
  uint32_t	fstp15	: 1;
  uint32_t		: 16;
};

#define PMC_FOCR_FOCLR     	(1 << 0)

struct __struct_PMC_FOCR
{
  uint32_t	foclr	: 1;
  uint32_t		: 31;
};

#define PMC_WPMR_WPEN     	(1 << 0)
#define PMC_WPMR_WPKEY(x)  	((x) << 8)
#define PMC_WPMR_WPKEY_m   	0xffffff00
#define PMC_WPMR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define PMC_WPMR_WPKEY_KEY	0x504d43

struct __struct_PMC_WPMR
{
  uint32_t	wpen	: 1;
  uint32_t		: 7;
  uint32_t	wpkey	: 24;
};

#define PMC_WPSR_WPVS     	(1 << 0)
#define PMC_WPSR_WPVSRC(x)  	((x) << 8)
#define PMC_WPSR_WPVSRC_m   	0x00ffff00
#define PMC_WPSR_WPVSRC_v(x)	(((x) >> 8) & 0xffff)

struct __struct_PMC_WPSR
{
  uint32_t	wpvs	: 1;
  uint32_t		: 7;
  uint32_t	wpvsrc	: 16;
  uint32_t		: 8;
};


// UART
#define UART_CR_RSTRX     	(1 << 2)
#define UART_CR_RSTTX     	(1 << 3)
#define UART_CR_RXEN     	(1 << 4)
#define UART_CR_RXDIS     	(1 << 5)
#define UART_CR_TXEN     	(1 << 6)
#define UART_CR_TXDIS     	(1 << 7)
#define UART_CR_RSTSTA     	(1 << 8)

struct __struct_UART_CR
{
  uint32_t		: 2;
  uint32_t	rstrx	: 1;
  uint32_t	rsttx	: 1;
  uint32_t	rxen	: 1;
  uint32_t	rxdis	: 1;
  uint32_t	txen	: 1;
  uint32_t	txdis	: 1;
  uint32_t	rststa	: 1;
  uint32_t		: 23;
};

#define UART_MR_PAR(x)  	((x) << 9)
#define UART_MR_PAR_m   	0x00000e00
#define UART_MR_PAR_v(x)	(((x) >> 9) & 0x7)
#define UART_MR_PAR_EVEN	0x0
#define UART_MR_PAR_ODD	0x1
#define UART_MR_PAR_SPACE	0x2
#define UART_MR_PAR_MARK	0x3
#define UART_MR_PAR_NO	0x4
#define UART_MR_CHMODE(x)  	((x) << 14)
#define UART_MR_CHMODE_m   	0x0000c000
#define UART_MR_CHMODE_v(x)	(((x) >> 14) & 0x3)
#define UART_MR_CHMODE_NORMAL	0x0
#define UART_MR_CHMODE_AUTOMATIC	0x1
#define UART_MR_CHMODE_LOCAL_LOOPBACK	0x2
#define UART_MR_CHMODE_REMOTE_LOOPBACK	0x3

struct __struct_UART_MR
{
  uint32_t		: 9;
  uint32_t	par	: 3;
  uint32_t		: 2;
  uint32_t	chmode	: 2;
  uint32_t		: 16;
};

#define UART_IER_RXRDY     	(1 << 0)
#define UART_IER_TXRDY     	(1 << 1)
#define UART_IER_ENDRX     	(1 << 3)
#define UART_IER_ENDTX     	(1 << 4)
#define UART_IER_OVRE     	(1 << 5)
#define UART_IER_FRAME     	(1 << 6)
#define UART_IER_PARE     	(1 << 7)
#define UART_IER_TXEMPTY     	(1 << 9)
#define UART_IER_TXBUFE     	(1 << 11)
#define UART_IER_RXBUFF     	(1 << 12)

struct __struct_UART_IER
{
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t		: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	ovre	: 1;
  uint32_t	frame	: 1;
  uint32_t	pare	: 1;
  uint32_t		: 1;
  uint32_t	txempty	: 1;
  uint32_t		: 1;
  uint32_t	txbufe	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 19;
};

#define UART_IDR_RXRDY     	(1 << 0)
#define UART_IDR_TXRDY     	(1 << 1)
#define UART_IDR_ENDRX     	(1 << 3)
#define UART_IDR_ENDTX     	(1 << 4)
#define UART_IDR_OVRE     	(1 << 5)
#define UART_IDR_FRAME     	(1 << 6)
#define UART_IDR_PARE     	(1 << 7)
#define UART_IDR_TXEMPTY     	(1 << 9)
#define UART_IDR_TXBUFE     	(1 << 11)
#define UART_IDR_RXBUFF     	(1 << 12)

struct __struct_UART_IDR
{
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t		: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	ovre	: 1;
  uint32_t	frame	: 1;
  uint32_t	pare	: 1;
  uint32_t		: 1;
  uint32_t	txempty	: 1;
  uint32_t		: 1;
  uint32_t	txbufe	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 19;
};

#define UART_IMR_RXRDY     	(1 << 0)
#define UART_IMR_TXRDY     	(1 << 1)
#define UART_IMR_ENDRX     	(1 << 3)
#define UART_IMR_ENDTX     	(1 << 4)
#define UART_IMR_OVRE     	(1 << 5)
#define UART_IMR_FRAME     	(1 << 6)
#define UART_IMR_PARE     	(1 << 7)
#define UART_IMR_TXEMPTY     	(1 << 9)
#define UART_IMR_TXBUFE     	(1 << 11)
#define UART_IMR_RXBUFF     	(1 << 12)

struct __struct_UART_IMR
{
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t		: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	ovre	: 1;
  uint32_t	frame	: 1;
  uint32_t	pare	: 1;
  uint32_t		: 1;
  uint32_t	txempty	: 1;
  uint32_t		: 1;
  uint32_t	txbufe	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 19;
};

#define UART_SR_RXRDY     	(1 << 0)
#define UART_SR_TXRDY     	(1 << 1)
#define UART_SR_ENDRX     	(1 << 3)
#define UART_SR_ENDTX     	(1 << 4)
#define UART_SR_OVRE     	(1 << 5)
#define UART_SR_FRAME     	(1 << 6)
#define UART_SR_PARE     	(1 << 7)
#define UART_SR_TXEMPTY     	(1 << 9)
#define UART_SR_TXBUFE     	(1 << 11)
#define UART_SR_RXBUFF     	(1 << 12)

struct __struct_UART_SR
{
  uint32_t	rxrdy	: 1;
  uint32_t	txrdy	: 1;
  uint32_t		: 1;
  uint32_t	endrx	: 1;
  uint32_t	endtx	: 1;
  uint32_t	ovre	: 1;
  uint32_t	frame	: 1;
  uint32_t	pare	: 1;
  uint32_t		: 1;
  uint32_t	txempty	: 1;
  uint32_t		: 1;
  uint32_t	txbufe	: 1;
  uint32_t	rxbuff	: 1;
  uint32_t		: 19;
};

#define UART_RHR_RXCHR(x)  	((x) << 0)
#define UART_RHR_RXCHR_m   	0x000000ff
#define UART_RHR_RXCHR_v(x)	(((x) >> 0) & 0xff)

struct __struct_UART_RHR
{
  uint32_t	rxchr	: 8;
  uint32_t		: 24;
};

#define UART_THR_TXCHR(x)  	((x) << 0)
#define UART_THR_TXCHR_m   	0x000000ff
#define UART_THR_TXCHR_v(x)	(((x) >> 0) & 0xff)

struct __struct_UART_THR
{
  uint32_t	txchr	: 8;
  uint32_t		: 24;
};

#define UART_BRGR_CD(x)  	((x) << 0)
#define UART_BRGR_CD_m   	0x0000ffff
#define UART_BRGR_CD_v(x)	(((x) >> 0) & 0xffff)

struct __struct_UART_BRGR
{
  uint32_t	cd	: 16;
  uint32_t		: 16;
};


// EEFC
#define EEFC_CIDR_VERSION(x)  	((x) << 0)
#define EEFC_CIDR_VERSION_m   	0x0000001f
#define EEFC_CIDR_VERSION_v(x)	(((x) >> 0) & 0x1f)
#define EEFC_CIDR_EPROC(x)  	((x) << 5)
#define EEFC_CIDR_EPROC_m   	0x000000e0
#define EEFC_CIDR_EPROC_v(x)	(((x) >> 5) & 0x7)
#define EEFC_CIDR_EPROC_ARM946ES	0x1
#define EEFC_CIDR_EPROC_ARM7TDMI	0x2
#define EEFC_CIDR_EPROC_CM3	0x3
#define EEFC_CIDR_EPROC_ARM920T	0x4
#define EEFC_CIDR_EPROC_ARM926EJS	0x5
#define EEFC_CIDR_EPROC_CA5	0x6
#define EEFC_CIDR_EPROC_CM4	0x7
#define EEFC_CIDR_NVPSIZ(x)  	((x) << 8)
#define EEFC_CIDR_NVPSIZ_m   	0x00000f00
#define EEFC_CIDR_NVPSIZ_v(x)	(((x) >> 8) & 0xf)
#define EEFC_CIDR_NVPSIZ_NONE	0x0
#define EEFC_CIDR_NVPSIZ_8K	0x1
#define EEFC_CIDR_NVPSIZ_16K	0x2
#define EEFC_CIDR_NVPSIZ_32K	0x3
#define EEFC_CIDR_NVPSIZ_64K	0x5
#define EEFC_CIDR_NVPSIZ_128K	0x7
#define EEFC_CIDR_NVPSIZ_256K	0x9
#define EEFC_CIDR_NVPSIZ_512K	0xa
#define EEFC_CIDR_NVPSIZ_1024K	0xc
#define EEFC_CIDR_NVPSIZ_2048K	0xe
#define EEFC_CIDR_NVPSIZ2(x)  	((x) << 12)
#define EEFC_CIDR_NVPSIZ2_m   	0x0000f000
#define EEFC_CIDR_NVPSIZ2_v(x)	(((x) >> 12) & 0xf)
#define EEFC_CIDR_NVPSIZ2_NONE	0x0
#define EEFC_CIDR_NVPSIZ2_8K	0x1
#define EEFC_CIDR_NVPSIZ2_16K	0x2
#define EEFC_CIDR_NVPSIZ2_32K	0x3
#define EEFC_CIDR_NVPSIZ2_64K	0x5
#define EEFC_CIDR_NVPSIZ2_128K	0x7
#define EEFC_CIDR_NVPSIZ2_256K	0x9
#define EEFC_CIDR_NVPSIZ2_512K	0xa
#define EEFC_CIDR_NVPSIZ2_1024K	0xc
#define EEFC_CIDR_NVPSIZ2_2048K	0xe
#define EEFC_CIDR_SRAMSIZ(x)  	((x) << 16)
#define EEFC_CIDR_SRAMSIZ_m   	0x000f0000
#define EEFC_CIDR_SRAMSIZ_v(x)	(((x) >> 16) & 0xf)
#define EEFC_CIDR_SRAMSIZ_48K	0x0
#define EEFC_CIDR_SRAMSIZ_1K	0x1
#define EEFC_CIDR_SRAMSIZ_2K	0x2
#define EEFC_CIDR_SRAMSIZ_6K	0x3
#define EEFC_CIDR_SRAMSIZ_24K	0x4
#define EEFC_CIDR_SRAMSIZ_4K	0x5
#define EEFC_CIDR_SRAMSIZ_80K	0x6
#define EEFC_CIDR_SRAMSIZ_160K	0x7
#define EEFC_CIDR_SRAMSIZ_8K	0x8
#define EEFC_CIDR_SRAMSIZ_16K	0x9
#define EEFC_CIDR_SRAMSIZ_32K	0xa
#define EEFC_CIDR_SRAMSIZ_64K	0xb
#define EEFC_CIDR_SRAMSIZ_128K	0xc
#define EEFC_CIDR_SRAMSIZ_256K	0xd
#define EEFC_CIDR_SRAMSIZ_96K	0xe
#define EEFC_CIDR_SRAMSIZ_512K	0xf
#define EEFC_CIDR_ARCH(x)  	((x) << 20)
#define EEFC_CIDR_ARCH_m   	0x0ff00000
#define EEFC_CIDR_ARCH_v(x)	(((x) >> 20) & 0xff)
#define EEFC_CIDR_ARCH_AT91SAM9xx	0x19
#define EEFC_CIDR_ARCH_AT91SAM9XExx	0x29
#define EEFC_CIDR_ARCH_AT91x34	0x34
#define EEFC_CIDR_ARCH_CAP7	0x37
#define EEFC_CIDR_ARCH_CAP9	0x39
#define EEFC_CIDR_ARCH_CAP11	0x3b
#define EEFC_CIDR_ARCH_AT91x40	0x40
#define EEFC_CIDR_ARCH_AT91x42	0x42
#define EEFC_CIDR_ARCH_AT91x55	0x55
#define EEFC_CIDR_ARCH_AT91SAM7Axx	0x60
#define EEFC_CIDR_ARCH_AT91SAM7AQxx	0x61
#define EEFC_CIDR_ARCH_AT91x63	0x63
#define EEFC_CIDR_ARCH_AT91SAM7Sxx	0x70
#define EEFC_CIDR_ARCH_AT91SAM7XCxx	0x71
#define EEFC_CIDR_ARCH_AT91SAM7SExx	0x72
#define EEFC_CIDR_ARCH_AT91SAM7Lxx	0x73
#define EEFC_CIDR_ARCH_AT91SAM7Xxx	0x75
#define EEFC_CIDR_ARCH_AT91SAM7SLxx	0x76
#define EEFC_CIDR_ARCH_SAM3UxC	0x80
#define EEFC_CIDR_ARCH_SAM3UxE	0x81
#define EEFC_CIDR_ARCH_SAM3AxC	0x83
#define EEFC_CIDR_ARCH_SAM4AxC	0x83
#define EEFC_CIDR_ARCH_SAM3XxC	0x84
#define EEFC_CIDR_ARCH_SAM4XxC	0x84
#define EEFC_CIDR_ARCH_SAM3XxE	0x85
#define EEFC_CIDR_ARCH_SAM4XxE	0x85
#define EEFC_CIDR_ARCH_SAM3XxG	0x86
#define EEFC_CIDR_ARCH_SAM4XxG	0x86
#define EEFC_CIDR_ARCH_SAM3SxA	0x88
#define EEFC_CIDR_ARCH_SAM4SxA	0x88
#define EEFC_CIDR_ARCH_SAM3SxB	0x89
#define EEFC_CIDR_ARCH_SAM4SxB	0x89
#define EEFC_CIDR_ARCH_SAM3SxC	0x8a
#define EEFC_CIDR_ARCH_SAM4SxC	0x8a
#define EEFC_CIDR_ARCH_AT91x92	0x92
#define EEFC_CIDR_ARCH_SAM3NxA	0x93
#define EEFC_CIDR_ARCH_SAM3NxB	0x94
#define EEFC_CIDR_ARCH_SAM3NxC	0x95
#define EEFC_CIDR_ARCH_SAM3SDxB	0x99
#define EEFC_CIDR_ARCH_SAM3SDxC	0x9a
#define EEFC_CIDR_ARCH_SAM5A	0xa5
#define EEFC_CIDR_ARCH_AT75Cxx	0xf0
#define EEFC_CIDR_NVPTYP(x)  	((x) << 28)
#define EEFC_CIDR_NVPTYP_m   	0x70000000
#define EEFC_CIDR_NVPTYP_v(x)	(((x) >> 28) & 0x7)
#define EEFC_CIDR_NVPTYP_ROM	0x0
#define EEFC_CIDR_NVPTYP_ROMLESS	0x1
#define EEFC_CIDR_NVPTYP_FLASH	0x2
#define EEFC_CIDR_NVPTYP_ROM_FLASH	0x3
#define EEFC_CIDR_NVPTYP_SRAM	0x4
#define EEFC_CIDR_EXT     	(1 << 31)

struct __struct_EEFC_CIDR
{
  uint32_t	version	: 5;
  uint32_t	eproc	: 3;
  uint32_t	nvpsiz	: 4;
  uint32_t	nvpsiz2	: 4;
  uint32_t	sramsiz	: 4;
  uint32_t	arch	: 8;
  uint32_t	nvptyp	: 3;
  uint32_t	ext	: 1;
};


// EEFC
#define EEFC_FMR_FRDY     	(1 << 0)
#define EEFC_FMR_FWS(x)  	((x) << 8)
#define EEFC_FMR_FWS_m   	0x00000f00
#define EEFC_FMR_FWS_v(x)	(((x) >> 8) & 0xf)
#define EEFC_FMR_SCOD     	(1 << 16)
#define EEFC_FMR_FAM     	(1 << 24)

struct __struct_EEFC_FMR
{
  uint32_t	frdy	: 1;
  uint32_t		: 7;
  uint32_t	fws	: 4;
  uint32_t		: 4;
  uint32_t	scod	: 1;
  uint32_t		: 7;
  uint32_t	fam	: 1;
  uint32_t		: 7;
};

#define EEFC_FCR_FCMD(x)  	((x) << 0)
#define EEFC_FCR_FCMD_m   	0x000000ff
#define EEFC_FCR_FCMD_v(x)	(((x) >> 0) & 0xff)
#define EEFC_FCR_FARG(x)  	((x) << 8)
#define EEFC_FCR_FARG_m   	0x00ffff00
#define EEFC_FCR_FARG_v(x)	(((x) >> 8) & 0xffff)
#define EEFC_FCR_FKEY(x)  	((x) << 24)
#define EEFC_FCR_FKEY_m   	0xff000000
#define EEFC_FCR_FKEY_v(x)	(((x) >> 24) & 0xff)
#define EEFC_FCR_FKEY_KEY	0x5a

struct __struct_EEFC_FCR
{
  uint32_t	fcmd	: 8;
  uint32_t	farg	: 16;
  uint32_t	fkey	: 8;
};

#define EEFC_FSR_FRDY     	(1 << 0)
#define EEFC_FSR_FCMDE     	(1 << 1)
#define EEFC_FSR_FLOCKE     	(1 << 2)

struct __struct_EEFC_FSR
{
  uint32_t	frdy	: 1;
  uint32_t	fcmde	: 1;
  uint32_t	flocke	: 1;
  uint32_t		: 29;
};


// PIO
#define PIO_PER_P0     	(1 << 0)
#define PIO_PER_P1     	(1 << 1)
#define PIO_PER_P2     	(1 << 2)
#define PIO_PER_P3     	(1 << 3)
#define PIO_PER_P4     	(1 << 4)
#define PIO_PER_P5     	(1 << 5)
#define PIO_PER_P6     	(1 << 6)
#define PIO_PER_P7     	(1 << 7)
#define PIO_PER_P8     	(1 << 8)
#define PIO_PER_P9     	(1 << 9)
#define PIO_PER_P10     	(1 << 10)
#define PIO_PER_P11     	(1 << 11)
#define PIO_PER_P12     	(1 << 12)
#define PIO_PER_P13     	(1 << 13)
#define PIO_PER_P14     	(1 << 14)
#define PIO_PER_P15     	(1 << 15)
#define PIO_PER_P16     	(1 << 16)
#define PIO_PER_P17     	(1 << 17)
#define PIO_PER_P18     	(1 << 18)
#define PIO_PER_P19     	(1 << 19)
#define PIO_PER_P20     	(1 << 20)
#define PIO_PER_P21     	(1 << 21)
#define PIO_PER_P22     	(1 << 22)
#define PIO_PER_P23     	(1 << 23)
#define PIO_PER_P24     	(1 << 24)
#define PIO_PER_P25     	(1 << 25)
#define PIO_PER_P26     	(1 << 26)
#define PIO_PER_P27     	(1 << 27)
#define PIO_PER_P28     	(1 << 28)
#define PIO_PER_P29     	(1 << 29)
#define PIO_PER_P30     	(1 << 30)
#define PIO_PER_P31     	(1 << 31)

struct __struct_PIO_PER
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_PDR_P0     	(1 << 0)
#define PIO_PDR_P1     	(1 << 1)
#define PIO_PDR_P2     	(1 << 2)
#define PIO_PDR_P3     	(1 << 3)
#define PIO_PDR_P4     	(1 << 4)
#define PIO_PDR_P5     	(1 << 5)
#define PIO_PDR_P6     	(1 << 6)
#define PIO_PDR_P7     	(1 << 7)
#define PIO_PDR_P8     	(1 << 8)
#define PIO_PDR_P9     	(1 << 9)
#define PIO_PDR_P10     	(1 << 10)
#define PIO_PDR_P11     	(1 << 11)
#define PIO_PDR_P12     	(1 << 12)
#define PIO_PDR_P13     	(1 << 13)
#define PIO_PDR_P14     	(1 << 14)
#define PIO_PDR_P15     	(1 << 15)
#define PIO_PDR_P16     	(1 << 16)
#define PIO_PDR_P17     	(1 << 17)
#define PIO_PDR_P18     	(1 << 18)
#define PIO_PDR_P19     	(1 << 19)
#define PIO_PDR_P20     	(1 << 20)
#define PIO_PDR_P21     	(1 << 21)
#define PIO_PDR_P22     	(1 << 22)
#define PIO_PDR_P23     	(1 << 23)
#define PIO_PDR_P24     	(1 << 24)
#define PIO_PDR_P25     	(1 << 25)
#define PIO_PDR_P26     	(1 << 26)
#define PIO_PDR_P27     	(1 << 27)
#define PIO_PDR_P28     	(1 << 28)
#define PIO_PDR_P29     	(1 << 29)
#define PIO_PDR_P30     	(1 << 30)
#define PIO_PDR_P31     	(1 << 31)

struct __struct_PIO_PDR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_PSR_P0     	(1 << 0)
#define PIO_PSR_P1     	(1 << 1)
#define PIO_PSR_P2     	(1 << 2)
#define PIO_PSR_P3     	(1 << 3)
#define PIO_PSR_P4     	(1 << 4)
#define PIO_PSR_P5     	(1 << 5)
#define PIO_PSR_P6     	(1 << 6)
#define PIO_PSR_P7     	(1 << 7)
#define PIO_PSR_P8     	(1 << 8)
#define PIO_PSR_P9     	(1 << 9)
#define PIO_PSR_P10     	(1 << 10)
#define PIO_PSR_P11     	(1 << 11)
#define PIO_PSR_P12     	(1 << 12)
#define PIO_PSR_P13     	(1 << 13)
#define PIO_PSR_P14     	(1 << 14)
#define PIO_PSR_P15     	(1 << 15)
#define PIO_PSR_P16     	(1 << 16)
#define PIO_PSR_P17     	(1 << 17)
#define PIO_PSR_P18     	(1 << 18)
#define PIO_PSR_P19     	(1 << 19)
#define PIO_PSR_P20     	(1 << 20)
#define PIO_PSR_P21     	(1 << 21)
#define PIO_PSR_P22     	(1 << 22)
#define PIO_PSR_P23     	(1 << 23)
#define PIO_PSR_P24     	(1 << 24)
#define PIO_PSR_P25     	(1 << 25)
#define PIO_PSR_P26     	(1 << 26)
#define PIO_PSR_P27     	(1 << 27)
#define PIO_PSR_P28     	(1 << 28)
#define PIO_PSR_P29     	(1 << 29)
#define PIO_PSR_P30     	(1 << 30)
#define PIO_PSR_P31     	(1 << 31)

struct __struct_PIO_PSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_OER_P0     	(1 << 0)
#define PIO_OER_P1     	(1 << 1)
#define PIO_OER_P2     	(1 << 2)
#define PIO_OER_P3     	(1 << 3)
#define PIO_OER_P4     	(1 << 4)
#define PIO_OER_P5     	(1 << 5)
#define PIO_OER_P6     	(1 << 6)
#define PIO_OER_P7     	(1 << 7)
#define PIO_OER_P8     	(1 << 8)
#define PIO_OER_P9     	(1 << 9)
#define PIO_OER_P10     	(1 << 10)
#define PIO_OER_P11     	(1 << 11)
#define PIO_OER_P12     	(1 << 12)
#define PIO_OER_P13     	(1 << 13)
#define PIO_OER_P14     	(1 << 14)
#define PIO_OER_P15     	(1 << 15)
#define PIO_OER_P16     	(1 << 16)
#define PIO_OER_P17     	(1 << 17)
#define PIO_OER_P18     	(1 << 18)
#define PIO_OER_P19     	(1 << 19)
#define PIO_OER_P20     	(1 << 20)
#define PIO_OER_P21     	(1 << 21)
#define PIO_OER_P22     	(1 << 22)
#define PIO_OER_P23     	(1 << 23)
#define PIO_OER_P24     	(1 << 24)
#define PIO_OER_P25     	(1 << 25)
#define PIO_OER_P26     	(1 << 26)
#define PIO_OER_P27     	(1 << 27)
#define PIO_OER_P28     	(1 << 28)
#define PIO_OER_P29     	(1 << 29)
#define PIO_OER_P30     	(1 << 30)
#define PIO_OER_P31     	(1 << 31)

struct __struct_PIO_OER
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_ODR_P0     	(1 << 0)
#define PIO_ODR_P1     	(1 << 1)
#define PIO_ODR_P2     	(1 << 2)
#define PIO_ODR_P3     	(1 << 3)
#define PIO_ODR_P4     	(1 << 4)
#define PIO_ODR_P5     	(1 << 5)
#define PIO_ODR_P6     	(1 << 6)
#define PIO_ODR_P7     	(1 << 7)
#define PIO_ODR_P8     	(1 << 8)
#define PIO_ODR_P9     	(1 << 9)
#define PIO_ODR_P10     	(1 << 10)
#define PIO_ODR_P11     	(1 << 11)
#define PIO_ODR_P12     	(1 << 12)
#define PIO_ODR_P13     	(1 << 13)
#define PIO_ODR_P14     	(1 << 14)
#define PIO_ODR_P15     	(1 << 15)
#define PIO_ODR_P16     	(1 << 16)
#define PIO_ODR_P17     	(1 << 17)
#define PIO_ODR_P18     	(1 << 18)
#define PIO_ODR_P19     	(1 << 19)
#define PIO_ODR_P20     	(1 << 20)
#define PIO_ODR_P21     	(1 << 21)
#define PIO_ODR_P22     	(1 << 22)
#define PIO_ODR_P23     	(1 << 23)
#define PIO_ODR_P24     	(1 << 24)
#define PIO_ODR_P25     	(1 << 25)
#define PIO_ODR_P26     	(1 << 26)
#define PIO_ODR_P27     	(1 << 27)
#define PIO_ODR_P28     	(1 << 28)
#define PIO_ODR_P29     	(1 << 29)
#define PIO_ODR_P30     	(1 << 30)
#define PIO_ODR_P31     	(1 << 31)

struct __struct_PIO_ODR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_OSR_P0     	(1 << 0)
#define PIO_OSR_P1     	(1 << 1)
#define PIO_OSR_P2     	(1 << 2)
#define PIO_OSR_P3     	(1 << 3)
#define PIO_OSR_P4     	(1 << 4)
#define PIO_OSR_P5     	(1 << 5)
#define PIO_OSR_P6     	(1 << 6)
#define PIO_OSR_P7     	(1 << 7)
#define PIO_OSR_P8     	(1 << 8)
#define PIO_OSR_P9     	(1 << 9)
#define PIO_OSR_P10     	(1 << 10)
#define PIO_OSR_P11     	(1 << 11)
#define PIO_OSR_P12     	(1 << 12)
#define PIO_OSR_P13     	(1 << 13)
#define PIO_OSR_P14     	(1 << 14)
#define PIO_OSR_P15     	(1 << 15)
#define PIO_OSR_P16     	(1 << 16)
#define PIO_OSR_P17     	(1 << 17)
#define PIO_OSR_P18     	(1 << 18)
#define PIO_OSR_P19     	(1 << 19)
#define PIO_OSR_P20     	(1 << 20)
#define PIO_OSR_P21     	(1 << 21)
#define PIO_OSR_P22     	(1 << 22)
#define PIO_OSR_P23     	(1 << 23)
#define PIO_OSR_P24     	(1 << 24)
#define PIO_OSR_P25     	(1 << 25)
#define PIO_OSR_P26     	(1 << 26)
#define PIO_OSR_P27     	(1 << 27)
#define PIO_OSR_P28     	(1 << 28)
#define PIO_OSR_P29     	(1 << 29)
#define PIO_OSR_P30     	(1 << 30)
#define PIO_OSR_P31     	(1 << 31)

struct __struct_PIO_OSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_IFER_P0     	(1 << 0)
#define PIO_IFER_P1     	(1 << 1)
#define PIO_IFER_P2     	(1 << 2)
#define PIO_IFER_P3     	(1 << 3)
#define PIO_IFER_P4     	(1 << 4)
#define PIO_IFER_P5     	(1 << 5)
#define PIO_IFER_P6     	(1 << 6)
#define PIO_IFER_P7     	(1 << 7)
#define PIO_IFER_P8     	(1 << 8)
#define PIO_IFER_P9     	(1 << 9)
#define PIO_IFER_P10     	(1 << 10)
#define PIO_IFER_P11     	(1 << 11)
#define PIO_IFER_P12     	(1 << 12)
#define PIO_IFER_P13     	(1 << 13)
#define PIO_IFER_P14     	(1 << 14)
#define PIO_IFER_P15     	(1 << 15)
#define PIO_IFER_P16     	(1 << 16)
#define PIO_IFER_P17     	(1 << 17)
#define PIO_IFER_P18     	(1 << 18)
#define PIO_IFER_P19     	(1 << 19)
#define PIO_IFER_P20     	(1 << 20)
#define PIO_IFER_P21     	(1 << 21)
#define PIO_IFER_P22     	(1 << 22)
#define PIO_IFER_P23     	(1 << 23)
#define PIO_IFER_P24     	(1 << 24)
#define PIO_IFER_P25     	(1 << 25)
#define PIO_IFER_P26     	(1 << 26)
#define PIO_IFER_P27     	(1 << 27)
#define PIO_IFER_P28     	(1 << 28)
#define PIO_IFER_P29     	(1 << 29)
#define PIO_IFER_P30     	(1 << 30)
#define PIO_IFER_P31     	(1 << 31)

struct __struct_PIO_IFER
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_IFDR_P0     	(1 << 0)
#define PIO_IFDR_P1     	(1 << 1)
#define PIO_IFDR_P2     	(1 << 2)
#define PIO_IFDR_P3     	(1 << 3)
#define PIO_IFDR_P4     	(1 << 4)
#define PIO_IFDR_P5     	(1 << 5)
#define PIO_IFDR_P6     	(1 << 6)
#define PIO_IFDR_P7     	(1 << 7)
#define PIO_IFDR_P8     	(1 << 8)
#define PIO_IFDR_P9     	(1 << 9)
#define PIO_IFDR_P10     	(1 << 10)
#define PIO_IFDR_P11     	(1 << 11)
#define PIO_IFDR_P12     	(1 << 12)
#define PIO_IFDR_P13     	(1 << 13)
#define PIO_IFDR_P14     	(1 << 14)
#define PIO_IFDR_P15     	(1 << 15)
#define PIO_IFDR_P16     	(1 << 16)
#define PIO_IFDR_P17     	(1 << 17)
#define PIO_IFDR_P18     	(1 << 18)
#define PIO_IFDR_P19     	(1 << 19)
#define PIO_IFDR_P20     	(1 << 20)
#define PIO_IFDR_P21     	(1 << 21)
#define PIO_IFDR_P22     	(1 << 22)
#define PIO_IFDR_P23     	(1 << 23)
#define PIO_IFDR_P24     	(1 << 24)
#define PIO_IFDR_P25     	(1 << 25)
#define PIO_IFDR_P26     	(1 << 26)
#define PIO_IFDR_P27     	(1 << 27)
#define PIO_IFDR_P28     	(1 << 28)
#define PIO_IFDR_P29     	(1 << 29)
#define PIO_IFDR_P30     	(1 << 30)
#define PIO_IFDR_P31     	(1 << 31)

struct __struct_PIO_IFDR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_IFSR_P0     	(1 << 0)
#define PIO_IFSR_P1     	(1 << 1)
#define PIO_IFSR_P2     	(1 << 2)
#define PIO_IFSR_P3     	(1 << 3)
#define PIO_IFSR_P4     	(1 << 4)
#define PIO_IFSR_P5     	(1 << 5)
#define PIO_IFSR_P6     	(1 << 6)
#define PIO_IFSR_P7     	(1 << 7)
#define PIO_IFSR_P8     	(1 << 8)
#define PIO_IFSR_P9     	(1 << 9)
#define PIO_IFSR_P10     	(1 << 10)
#define PIO_IFSR_P11     	(1 << 11)
#define PIO_IFSR_P12     	(1 << 12)
#define PIO_IFSR_P13     	(1 << 13)
#define PIO_IFSR_P14     	(1 << 14)
#define PIO_IFSR_P15     	(1 << 15)
#define PIO_IFSR_P16     	(1 << 16)
#define PIO_IFSR_P17     	(1 << 17)
#define PIO_IFSR_P18     	(1 << 18)
#define PIO_IFSR_P19     	(1 << 19)
#define PIO_IFSR_P20     	(1 << 20)
#define PIO_IFSR_P21     	(1 << 21)
#define PIO_IFSR_P22     	(1 << 22)
#define PIO_IFSR_P23     	(1 << 23)
#define PIO_IFSR_P24     	(1 << 24)
#define PIO_IFSR_P25     	(1 << 25)
#define PIO_IFSR_P26     	(1 << 26)
#define PIO_IFSR_P27     	(1 << 27)
#define PIO_IFSR_P28     	(1 << 28)
#define PIO_IFSR_P29     	(1 << 29)
#define PIO_IFSR_P30     	(1 << 30)
#define PIO_IFSR_P31     	(1 << 31)

struct __struct_PIO_IFSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_SODR_P0     	(1 << 0)
#define PIO_SODR_P1     	(1 << 1)
#define PIO_SODR_P2     	(1 << 2)
#define PIO_SODR_P3     	(1 << 3)
#define PIO_SODR_P4     	(1 << 4)
#define PIO_SODR_P5     	(1 << 5)
#define PIO_SODR_P6     	(1 << 6)
#define PIO_SODR_P7     	(1 << 7)
#define PIO_SODR_P8     	(1 << 8)
#define PIO_SODR_P9     	(1 << 9)
#define PIO_SODR_P10     	(1 << 10)
#define PIO_SODR_P11     	(1 << 11)
#define PIO_SODR_P12     	(1 << 12)
#define PIO_SODR_P13     	(1 << 13)
#define PIO_SODR_P14     	(1 << 14)
#define PIO_SODR_P15     	(1 << 15)
#define PIO_SODR_P16     	(1 << 16)
#define PIO_SODR_P17     	(1 << 17)
#define PIO_SODR_P18     	(1 << 18)
#define PIO_SODR_P19     	(1 << 19)
#define PIO_SODR_P20     	(1 << 20)
#define PIO_SODR_P21     	(1 << 21)
#define PIO_SODR_P22     	(1 << 22)
#define PIO_SODR_P23     	(1 << 23)
#define PIO_SODR_P24     	(1 << 24)
#define PIO_SODR_P25     	(1 << 25)
#define PIO_SODR_P26     	(1 << 26)
#define PIO_SODR_P27     	(1 << 27)
#define PIO_SODR_P28     	(1 << 28)
#define PIO_SODR_P29     	(1 << 29)
#define PIO_SODR_P30     	(1 << 30)
#define PIO_SODR_P31     	(1 << 31)

struct __struct_PIO_SODR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_CODR_P0     	(1 << 0)
#define PIO_CODR_P1     	(1 << 1)
#define PIO_CODR_P2     	(1 << 2)
#define PIO_CODR_P3     	(1 << 3)
#define PIO_CODR_P4     	(1 << 4)
#define PIO_CODR_P5     	(1 << 5)
#define PIO_CODR_P6     	(1 << 6)
#define PIO_CODR_P7     	(1 << 7)
#define PIO_CODR_P8     	(1 << 8)
#define PIO_CODR_P9     	(1 << 9)
#define PIO_CODR_P10     	(1 << 10)
#define PIO_CODR_P11     	(1 << 11)
#define PIO_CODR_P12     	(1 << 12)
#define PIO_CODR_P13     	(1 << 13)
#define PIO_CODR_P14     	(1 << 14)
#define PIO_CODR_P15     	(1 << 15)
#define PIO_CODR_P16     	(1 << 16)
#define PIO_CODR_P17     	(1 << 17)
#define PIO_CODR_P18     	(1 << 18)
#define PIO_CODR_P19     	(1 << 19)
#define PIO_CODR_P20     	(1 << 20)
#define PIO_CODR_P21     	(1 << 21)
#define PIO_CODR_P22     	(1 << 22)
#define PIO_CODR_P23     	(1 << 23)
#define PIO_CODR_P24     	(1 << 24)
#define PIO_CODR_P25     	(1 << 25)
#define PIO_CODR_P26     	(1 << 26)
#define PIO_CODR_P27     	(1 << 27)
#define PIO_CODR_P28     	(1 << 28)
#define PIO_CODR_P29     	(1 << 29)
#define PIO_CODR_P30     	(1 << 30)
#define PIO_CODR_P31     	(1 << 31)

struct __struct_PIO_CODR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_ODSR_P0     	(1 << 0)
#define PIO_ODSR_P1     	(1 << 1)
#define PIO_ODSR_P2     	(1 << 2)
#define PIO_ODSR_P3     	(1 << 3)
#define PIO_ODSR_P4     	(1 << 4)
#define PIO_ODSR_P5     	(1 << 5)
#define PIO_ODSR_P6     	(1 << 6)
#define PIO_ODSR_P7     	(1 << 7)
#define PIO_ODSR_P8     	(1 << 8)
#define PIO_ODSR_P9     	(1 << 9)
#define PIO_ODSR_P10     	(1 << 10)
#define PIO_ODSR_P11     	(1 << 11)
#define PIO_ODSR_P12     	(1 << 12)
#define PIO_ODSR_P13     	(1 << 13)
#define PIO_ODSR_P14     	(1 << 14)
#define PIO_ODSR_P15     	(1 << 15)
#define PIO_ODSR_P16     	(1 << 16)
#define PIO_ODSR_P17     	(1 << 17)
#define PIO_ODSR_P18     	(1 << 18)
#define PIO_ODSR_P19     	(1 << 19)
#define PIO_ODSR_P20     	(1 << 20)
#define PIO_ODSR_P21     	(1 << 21)
#define PIO_ODSR_P22     	(1 << 22)
#define PIO_ODSR_P23     	(1 << 23)
#define PIO_ODSR_P24     	(1 << 24)
#define PIO_ODSR_P25     	(1 << 25)
#define PIO_ODSR_P26     	(1 << 26)
#define PIO_ODSR_P27     	(1 << 27)
#define PIO_ODSR_P28     	(1 << 28)
#define PIO_ODSR_P29     	(1 << 29)
#define PIO_ODSR_P30     	(1 << 30)
#define PIO_ODSR_P31     	(1 << 31)

struct __struct_PIO_ODSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_PDSR_P0     	(1 << 0)
#define PIO_PDSR_P1     	(1 << 1)
#define PIO_PDSR_P2     	(1 << 2)
#define PIO_PDSR_P3     	(1 << 3)
#define PIO_PDSR_P4     	(1 << 4)
#define PIO_PDSR_P5     	(1 << 5)
#define PIO_PDSR_P6     	(1 << 6)
#define PIO_PDSR_P7     	(1 << 7)
#define PIO_PDSR_P8     	(1 << 8)
#define PIO_PDSR_P9     	(1 << 9)
#define PIO_PDSR_P10     	(1 << 10)
#define PIO_PDSR_P11     	(1 << 11)
#define PIO_PDSR_P12     	(1 << 12)
#define PIO_PDSR_P13     	(1 << 13)
#define PIO_PDSR_P14     	(1 << 14)
#define PIO_PDSR_P15     	(1 << 15)
#define PIO_PDSR_P16     	(1 << 16)
#define PIO_PDSR_P17     	(1 << 17)
#define PIO_PDSR_P18     	(1 << 18)
#define PIO_PDSR_P19     	(1 << 19)
#define PIO_PDSR_P20     	(1 << 20)
#define PIO_PDSR_P21     	(1 << 21)
#define PIO_PDSR_P22     	(1 << 22)
#define PIO_PDSR_P23     	(1 << 23)
#define PIO_PDSR_P24     	(1 << 24)
#define PIO_PDSR_P25     	(1 << 25)
#define PIO_PDSR_P26     	(1 << 26)
#define PIO_PDSR_P27     	(1 << 27)
#define PIO_PDSR_P28     	(1 << 28)
#define PIO_PDSR_P29     	(1 << 29)
#define PIO_PDSR_P30     	(1 << 30)
#define PIO_PDSR_P31     	(1 << 31)

struct __struct_PIO_PDSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_IER_P0     	(1 << 0)
#define PIO_IER_P1     	(1 << 1)
#define PIO_IER_P2     	(1 << 2)
#define PIO_IER_P3     	(1 << 3)
#define PIO_IER_P4     	(1 << 4)
#define PIO_IER_P5     	(1 << 5)
#define PIO_IER_P6     	(1 << 6)
#define PIO_IER_P7     	(1 << 7)
#define PIO_IER_P8     	(1 << 8)
#define PIO_IER_P9     	(1 << 9)
#define PIO_IER_P10     	(1 << 10)
#define PIO_IER_P11     	(1 << 11)
#define PIO_IER_P12     	(1 << 12)
#define PIO_IER_P13     	(1 << 13)
#define PIO_IER_P14     	(1 << 14)
#define PIO_IER_P15     	(1 << 15)
#define PIO_IER_P16     	(1 << 16)
#define PIO_IER_P17     	(1 << 17)
#define PIO_IER_P18     	(1 << 18)
#define PIO_IER_P19     	(1 << 19)
#define PIO_IER_P20     	(1 << 20)
#define PIO_IER_P21     	(1 << 21)
#define PIO_IER_P22     	(1 << 22)
#define PIO_IER_P23     	(1 << 23)
#define PIO_IER_P24     	(1 << 24)
#define PIO_IER_P25     	(1 << 25)
#define PIO_IER_P26     	(1 << 26)
#define PIO_IER_P27     	(1 << 27)
#define PIO_IER_P28     	(1 << 28)
#define PIO_IER_P29     	(1 << 29)
#define PIO_IER_P30     	(1 << 30)
#define PIO_IER_P31     	(1 << 31)

struct __struct_PIO_IER
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_IDR_P0     	(1 << 0)
#define PIO_IDR_P1     	(1 << 1)
#define PIO_IDR_P2     	(1 << 2)
#define PIO_IDR_P3     	(1 << 3)
#define PIO_IDR_P4     	(1 << 4)
#define PIO_IDR_P5     	(1 << 5)
#define PIO_IDR_P6     	(1 << 6)
#define PIO_IDR_P7     	(1 << 7)
#define PIO_IDR_P8     	(1 << 8)
#define PIO_IDR_P9     	(1 << 9)
#define PIO_IDR_P10     	(1 << 10)
#define PIO_IDR_P11     	(1 << 11)
#define PIO_IDR_P12     	(1 << 12)
#define PIO_IDR_P13     	(1 << 13)
#define PIO_IDR_P14     	(1 << 14)
#define PIO_IDR_P15     	(1 << 15)
#define PIO_IDR_P16     	(1 << 16)
#define PIO_IDR_P17     	(1 << 17)
#define PIO_IDR_P18     	(1 << 18)
#define PIO_IDR_P19     	(1 << 19)
#define PIO_IDR_P20     	(1 << 20)
#define PIO_IDR_P21     	(1 << 21)
#define PIO_IDR_P22     	(1 << 22)
#define PIO_IDR_P23     	(1 << 23)
#define PIO_IDR_P24     	(1 << 24)
#define PIO_IDR_P25     	(1 << 25)
#define PIO_IDR_P26     	(1 << 26)
#define PIO_IDR_P27     	(1 << 27)
#define PIO_IDR_P28     	(1 << 28)
#define PIO_IDR_P29     	(1 << 29)
#define PIO_IDR_P30     	(1 << 30)
#define PIO_IDR_P31     	(1 << 31)

struct __struct_PIO_IDR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_IMR_P0     	(1 << 0)
#define PIO_IMR_P1     	(1 << 1)
#define PIO_IMR_P2     	(1 << 2)
#define PIO_IMR_P3     	(1 << 3)
#define PIO_IMR_P4     	(1 << 4)
#define PIO_IMR_P5     	(1 << 5)
#define PIO_IMR_P6     	(1 << 6)
#define PIO_IMR_P7     	(1 << 7)
#define PIO_IMR_P8     	(1 << 8)
#define PIO_IMR_P9     	(1 << 9)
#define PIO_IMR_P10     	(1 << 10)
#define PIO_IMR_P11     	(1 << 11)
#define PIO_IMR_P12     	(1 << 12)
#define PIO_IMR_P13     	(1 << 13)
#define PIO_IMR_P14     	(1 << 14)
#define PIO_IMR_P15     	(1 << 15)
#define PIO_IMR_P16     	(1 << 16)
#define PIO_IMR_P17     	(1 << 17)
#define PIO_IMR_P18     	(1 << 18)
#define PIO_IMR_P19     	(1 << 19)
#define PIO_IMR_P20     	(1 << 20)
#define PIO_IMR_P21     	(1 << 21)
#define PIO_IMR_P22     	(1 << 22)
#define PIO_IMR_P23     	(1 << 23)
#define PIO_IMR_P24     	(1 << 24)
#define PIO_IMR_P25     	(1 << 25)
#define PIO_IMR_P26     	(1 << 26)
#define PIO_IMR_P27     	(1 << 27)
#define PIO_IMR_P28     	(1 << 28)
#define PIO_IMR_P29     	(1 << 29)
#define PIO_IMR_P30     	(1 << 30)
#define PIO_IMR_P31     	(1 << 31)

struct __struct_PIO_IMR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_ISR_P0     	(1 << 0)
#define PIO_ISR_P1     	(1 << 1)
#define PIO_ISR_P2     	(1 << 2)
#define PIO_ISR_P3     	(1 << 3)
#define PIO_ISR_P4     	(1 << 4)
#define PIO_ISR_P5     	(1 << 5)
#define PIO_ISR_P6     	(1 << 6)
#define PIO_ISR_P7     	(1 << 7)
#define PIO_ISR_P8     	(1 << 8)
#define PIO_ISR_P9     	(1 << 9)
#define PIO_ISR_P10     	(1 << 10)
#define PIO_ISR_P11     	(1 << 11)
#define PIO_ISR_P12     	(1 << 12)
#define PIO_ISR_P13     	(1 << 13)
#define PIO_ISR_P14     	(1 << 14)
#define PIO_ISR_P15     	(1 << 15)
#define PIO_ISR_P16     	(1 << 16)
#define PIO_ISR_P17     	(1 << 17)
#define PIO_ISR_P18     	(1 << 18)
#define PIO_ISR_P19     	(1 << 19)
#define PIO_ISR_P20     	(1 << 20)
#define PIO_ISR_P21     	(1 << 21)
#define PIO_ISR_P22     	(1 << 22)
#define PIO_ISR_P23     	(1 << 23)
#define PIO_ISR_P24     	(1 << 24)
#define PIO_ISR_P25     	(1 << 25)
#define PIO_ISR_P26     	(1 << 26)
#define PIO_ISR_P27     	(1 << 27)
#define PIO_ISR_P28     	(1 << 28)
#define PIO_ISR_P29     	(1 << 29)
#define PIO_ISR_P30     	(1 << 30)
#define PIO_ISR_P31     	(1 << 31)

struct __struct_PIO_ISR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_MDER_P0     	(1 << 0)
#define PIO_MDER_P1     	(1 << 1)
#define PIO_MDER_P2     	(1 << 2)
#define PIO_MDER_P3     	(1 << 3)
#define PIO_MDER_P4     	(1 << 4)
#define PIO_MDER_P5     	(1 << 5)
#define PIO_MDER_P6     	(1 << 6)
#define PIO_MDER_P7     	(1 << 7)
#define PIO_MDER_P8     	(1 << 8)
#define PIO_MDER_P9     	(1 << 9)
#define PIO_MDER_P10     	(1 << 10)
#define PIO_MDER_P11     	(1 << 11)
#define PIO_MDER_P12     	(1 << 12)
#define PIO_MDER_P13     	(1 << 13)
#define PIO_MDER_P14     	(1 << 14)
#define PIO_MDER_P15     	(1 << 15)
#define PIO_MDER_P16     	(1 << 16)
#define PIO_MDER_P17     	(1 << 17)
#define PIO_MDER_P18     	(1 << 18)
#define PIO_MDER_P19     	(1 << 19)
#define PIO_MDER_P20     	(1 << 20)
#define PIO_MDER_P21     	(1 << 21)
#define PIO_MDER_P22     	(1 << 22)
#define PIO_MDER_P23     	(1 << 23)
#define PIO_MDER_P24     	(1 << 24)
#define PIO_MDER_P25     	(1 << 25)
#define PIO_MDER_P26     	(1 << 26)
#define PIO_MDER_P27     	(1 << 27)
#define PIO_MDER_P28     	(1 << 28)
#define PIO_MDER_P29     	(1 << 29)
#define PIO_MDER_P30     	(1 << 30)
#define PIO_MDER_P31     	(1 << 31)

struct __struct_PIO_MDER
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_MDDR_P0     	(1 << 0)
#define PIO_MDDR_P1     	(1 << 1)
#define PIO_MDDR_P2     	(1 << 2)
#define PIO_MDDR_P3     	(1 << 3)
#define PIO_MDDR_P4     	(1 << 4)
#define PIO_MDDR_P5     	(1 << 5)
#define PIO_MDDR_P6     	(1 << 6)
#define PIO_MDDR_P7     	(1 << 7)
#define PIO_MDDR_P8     	(1 << 8)
#define PIO_MDDR_P9     	(1 << 9)
#define PIO_MDDR_P10     	(1 << 10)
#define PIO_MDDR_P11     	(1 << 11)
#define PIO_MDDR_P12     	(1 << 12)
#define PIO_MDDR_P13     	(1 << 13)
#define PIO_MDDR_P14     	(1 << 14)
#define PIO_MDDR_P15     	(1 << 15)
#define PIO_MDDR_P16     	(1 << 16)
#define PIO_MDDR_P17     	(1 << 17)
#define PIO_MDDR_P18     	(1 << 18)
#define PIO_MDDR_P19     	(1 << 19)
#define PIO_MDDR_P20     	(1 << 20)
#define PIO_MDDR_P21     	(1 << 21)
#define PIO_MDDR_P22     	(1 << 22)
#define PIO_MDDR_P23     	(1 << 23)
#define PIO_MDDR_P24     	(1 << 24)
#define PIO_MDDR_P25     	(1 << 25)
#define PIO_MDDR_P26     	(1 << 26)
#define PIO_MDDR_P27     	(1 << 27)
#define PIO_MDDR_P28     	(1 << 28)
#define PIO_MDDR_P29     	(1 << 29)
#define PIO_MDDR_P30     	(1 << 30)
#define PIO_MDDR_P31     	(1 << 31)

struct __struct_PIO_MDDR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_MDSR_P0     	(1 << 0)
#define PIO_MDSR_P1     	(1 << 1)
#define PIO_MDSR_P2     	(1 << 2)
#define PIO_MDSR_P3     	(1 << 3)
#define PIO_MDSR_P4     	(1 << 4)
#define PIO_MDSR_P5     	(1 << 5)
#define PIO_MDSR_P6     	(1 << 6)
#define PIO_MDSR_P7     	(1 << 7)
#define PIO_MDSR_P8     	(1 << 8)
#define PIO_MDSR_P9     	(1 << 9)
#define PIO_MDSR_P10     	(1 << 10)
#define PIO_MDSR_P11     	(1 << 11)
#define PIO_MDSR_P12     	(1 << 12)
#define PIO_MDSR_P13     	(1 << 13)
#define PIO_MDSR_P14     	(1 << 14)
#define PIO_MDSR_P15     	(1 << 15)
#define PIO_MDSR_P16     	(1 << 16)
#define PIO_MDSR_P17     	(1 << 17)
#define PIO_MDSR_P18     	(1 << 18)
#define PIO_MDSR_P19     	(1 << 19)
#define PIO_MDSR_P20     	(1 << 20)
#define PIO_MDSR_P21     	(1 << 21)
#define PIO_MDSR_P22     	(1 << 22)
#define PIO_MDSR_P23     	(1 << 23)
#define PIO_MDSR_P24     	(1 << 24)
#define PIO_MDSR_P25     	(1 << 25)
#define PIO_MDSR_P26     	(1 << 26)
#define PIO_MDSR_P27     	(1 << 27)
#define PIO_MDSR_P28     	(1 << 28)
#define PIO_MDSR_P29     	(1 << 29)
#define PIO_MDSR_P30     	(1 << 30)
#define PIO_MDSR_P31     	(1 << 31)

struct __struct_PIO_MDSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_PUDR_P0     	(1 << 0)
#define PIO_PUDR_P1     	(1 << 1)
#define PIO_PUDR_P2     	(1 << 2)
#define PIO_PUDR_P3     	(1 << 3)
#define PIO_PUDR_P4     	(1 << 4)
#define PIO_PUDR_P5     	(1 << 5)
#define PIO_PUDR_P6     	(1 << 6)
#define PIO_PUDR_P7     	(1 << 7)
#define PIO_PUDR_P8     	(1 << 8)
#define PIO_PUDR_P9     	(1 << 9)
#define PIO_PUDR_P10     	(1 << 10)
#define PIO_PUDR_P11     	(1 << 11)
#define PIO_PUDR_P12     	(1 << 12)
#define PIO_PUDR_P13     	(1 << 13)
#define PIO_PUDR_P14     	(1 << 14)
#define PIO_PUDR_P15     	(1 << 15)
#define PIO_PUDR_P16     	(1 << 16)
#define PIO_PUDR_P17     	(1 << 17)
#define PIO_PUDR_P18     	(1 << 18)
#define PIO_PUDR_P19     	(1 << 19)
#define PIO_PUDR_P20     	(1 << 20)
#define PIO_PUDR_P21     	(1 << 21)
#define PIO_PUDR_P22     	(1 << 22)
#define PIO_PUDR_P23     	(1 << 23)
#define PIO_PUDR_P24     	(1 << 24)
#define PIO_PUDR_P25     	(1 << 25)
#define PIO_PUDR_P26     	(1 << 26)
#define PIO_PUDR_P27     	(1 << 27)
#define PIO_PUDR_P28     	(1 << 28)
#define PIO_PUDR_P29     	(1 << 29)
#define PIO_PUDR_P30     	(1 << 30)
#define PIO_PUDR_P31     	(1 << 31)

struct __struct_PIO_PUDR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_PUER_P0     	(1 << 0)
#define PIO_PUER_P1     	(1 << 1)
#define PIO_PUER_P2     	(1 << 2)
#define PIO_PUER_P3     	(1 << 3)
#define PIO_PUER_P4     	(1 << 4)
#define PIO_PUER_P5     	(1 << 5)
#define PIO_PUER_P6     	(1 << 6)
#define PIO_PUER_P7     	(1 << 7)
#define PIO_PUER_P8     	(1 << 8)
#define PIO_PUER_P9     	(1 << 9)
#define PIO_PUER_P10     	(1 << 10)
#define PIO_PUER_P11     	(1 << 11)
#define PIO_PUER_P12     	(1 << 12)
#define PIO_PUER_P13     	(1 << 13)
#define PIO_PUER_P14     	(1 << 14)
#define PIO_PUER_P15     	(1 << 15)
#define PIO_PUER_P16     	(1 << 16)
#define PIO_PUER_P17     	(1 << 17)
#define PIO_PUER_P18     	(1 << 18)
#define PIO_PUER_P19     	(1 << 19)
#define PIO_PUER_P20     	(1 << 20)
#define PIO_PUER_P21     	(1 << 21)
#define PIO_PUER_P22     	(1 << 22)
#define PIO_PUER_P23     	(1 << 23)
#define PIO_PUER_P24     	(1 << 24)
#define PIO_PUER_P25     	(1 << 25)
#define PIO_PUER_P26     	(1 << 26)
#define PIO_PUER_P27     	(1 << 27)
#define PIO_PUER_P28     	(1 << 28)
#define PIO_PUER_P29     	(1 << 29)
#define PIO_PUER_P30     	(1 << 30)
#define PIO_PUER_P31     	(1 << 31)

struct __struct_PIO_PUER
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_PUSR_P0     	(1 << 0)
#define PIO_PUSR_P1     	(1 << 1)
#define PIO_PUSR_P2     	(1 << 2)
#define PIO_PUSR_P3     	(1 << 3)
#define PIO_PUSR_P4     	(1 << 4)
#define PIO_PUSR_P5     	(1 << 5)
#define PIO_PUSR_P6     	(1 << 6)
#define PIO_PUSR_P7     	(1 << 7)
#define PIO_PUSR_P8     	(1 << 8)
#define PIO_PUSR_P9     	(1 << 9)
#define PIO_PUSR_P10     	(1 << 10)
#define PIO_PUSR_P11     	(1 << 11)
#define PIO_PUSR_P12     	(1 << 12)
#define PIO_PUSR_P13     	(1 << 13)
#define PIO_PUSR_P14     	(1 << 14)
#define PIO_PUSR_P15     	(1 << 15)
#define PIO_PUSR_P16     	(1 << 16)
#define PIO_PUSR_P17     	(1 << 17)
#define PIO_PUSR_P18     	(1 << 18)
#define PIO_PUSR_P19     	(1 << 19)
#define PIO_PUSR_P20     	(1 << 20)
#define PIO_PUSR_P21     	(1 << 21)
#define PIO_PUSR_P22     	(1 << 22)
#define PIO_PUSR_P23     	(1 << 23)
#define PIO_PUSR_P24     	(1 << 24)
#define PIO_PUSR_P25     	(1 << 25)
#define PIO_PUSR_P26     	(1 << 26)
#define PIO_PUSR_P27     	(1 << 27)
#define PIO_PUSR_P28     	(1 << 28)
#define PIO_PUSR_P29     	(1 << 29)
#define PIO_PUSR_P30     	(1 << 30)
#define PIO_PUSR_P31     	(1 << 31)

struct __struct_PIO_PUSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_ABSR_P0     	(1 << 0)
#define PIO_ABSR_P1     	(1 << 1)
#define PIO_ABSR_P2     	(1 << 2)
#define PIO_ABSR_P3     	(1 << 3)
#define PIO_ABSR_P4     	(1 << 4)
#define PIO_ABSR_P5     	(1 << 5)
#define PIO_ABSR_P6     	(1 << 6)
#define PIO_ABSR_P7     	(1 << 7)
#define PIO_ABSR_P8     	(1 << 8)
#define PIO_ABSR_P9     	(1 << 9)
#define PIO_ABSR_P10     	(1 << 10)
#define PIO_ABSR_P11     	(1 << 11)
#define PIO_ABSR_P12     	(1 << 12)
#define PIO_ABSR_P13     	(1 << 13)
#define PIO_ABSR_P14     	(1 << 14)
#define PIO_ABSR_P15     	(1 << 15)
#define PIO_ABSR_P16     	(1 << 16)
#define PIO_ABSR_P17     	(1 << 17)
#define PIO_ABSR_P18     	(1 << 18)
#define PIO_ABSR_P19     	(1 << 19)
#define PIO_ABSR_P20     	(1 << 20)
#define PIO_ABSR_P21     	(1 << 21)
#define PIO_ABSR_P22     	(1 << 22)
#define PIO_ABSR_P23     	(1 << 23)
#define PIO_ABSR_P24     	(1 << 24)
#define PIO_ABSR_P25     	(1 << 25)
#define PIO_ABSR_P26     	(1 << 26)
#define PIO_ABSR_P27     	(1 << 27)
#define PIO_ABSR_P28     	(1 << 28)
#define PIO_ABSR_P29     	(1 << 29)
#define PIO_ABSR_P30     	(1 << 30)
#define PIO_ABSR_P31     	(1 << 31)

struct __struct_PIO_ABSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_SCIFSR_P0     	(1 << 0)
#define PIO_SCIFSR_P1     	(1 << 1)
#define PIO_SCIFSR_P2     	(1 << 2)
#define PIO_SCIFSR_P3     	(1 << 3)
#define PIO_SCIFSR_P4     	(1 << 4)
#define PIO_SCIFSR_P5     	(1 << 5)
#define PIO_SCIFSR_P6     	(1 << 6)
#define PIO_SCIFSR_P7     	(1 << 7)
#define PIO_SCIFSR_P8     	(1 << 8)
#define PIO_SCIFSR_P9     	(1 << 9)
#define PIO_SCIFSR_P10     	(1 << 10)
#define PIO_SCIFSR_P11     	(1 << 11)
#define PIO_SCIFSR_P12     	(1 << 12)
#define PIO_SCIFSR_P13     	(1 << 13)
#define PIO_SCIFSR_P14     	(1 << 14)
#define PIO_SCIFSR_P15     	(1 << 15)
#define PIO_SCIFSR_P16     	(1 << 16)
#define PIO_SCIFSR_P17     	(1 << 17)
#define PIO_SCIFSR_P18     	(1 << 18)
#define PIO_SCIFSR_P19     	(1 << 19)
#define PIO_SCIFSR_P20     	(1 << 20)
#define PIO_SCIFSR_P21     	(1 << 21)
#define PIO_SCIFSR_P22     	(1 << 22)
#define PIO_SCIFSR_P23     	(1 << 23)
#define PIO_SCIFSR_P24     	(1 << 24)
#define PIO_SCIFSR_P25     	(1 << 25)
#define PIO_SCIFSR_P26     	(1 << 26)
#define PIO_SCIFSR_P27     	(1 << 27)
#define PIO_SCIFSR_P28     	(1 << 28)
#define PIO_SCIFSR_P29     	(1 << 29)
#define PIO_SCIFSR_P30     	(1 << 30)
#define PIO_SCIFSR_P31     	(1 << 31)

struct __struct_PIO_SCIFSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_DIFSR_P0     	(1 << 0)
#define PIO_DIFSR_P1     	(1 << 1)
#define PIO_DIFSR_P2     	(1 << 2)
#define PIO_DIFSR_P3     	(1 << 3)
#define PIO_DIFSR_P4     	(1 << 4)
#define PIO_DIFSR_P5     	(1 << 5)
#define PIO_DIFSR_P6     	(1 << 6)
#define PIO_DIFSR_P7     	(1 << 7)
#define PIO_DIFSR_P8     	(1 << 8)
#define PIO_DIFSR_P9     	(1 << 9)
#define PIO_DIFSR_P10     	(1 << 10)
#define PIO_DIFSR_P11     	(1 << 11)
#define PIO_DIFSR_P12     	(1 << 12)
#define PIO_DIFSR_P13     	(1 << 13)
#define PIO_DIFSR_P14     	(1 << 14)
#define PIO_DIFSR_P15     	(1 << 15)
#define PIO_DIFSR_P16     	(1 << 16)
#define PIO_DIFSR_P17     	(1 << 17)
#define PIO_DIFSR_P18     	(1 << 18)
#define PIO_DIFSR_P19     	(1 << 19)
#define PIO_DIFSR_P20     	(1 << 20)
#define PIO_DIFSR_P21     	(1 << 21)
#define PIO_DIFSR_P22     	(1 << 22)
#define PIO_DIFSR_P23     	(1 << 23)
#define PIO_DIFSR_P24     	(1 << 24)
#define PIO_DIFSR_P25     	(1 << 25)
#define PIO_DIFSR_P26     	(1 << 26)
#define PIO_DIFSR_P27     	(1 << 27)
#define PIO_DIFSR_P28     	(1 << 28)
#define PIO_DIFSR_P29     	(1 << 29)
#define PIO_DIFSR_P30     	(1 << 30)
#define PIO_DIFSR_P31     	(1 << 31)

struct __struct_PIO_DIFSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_IFDGSR_P0     	(1 << 0)
#define PIO_IFDGSR_P1     	(1 << 1)
#define PIO_IFDGSR_P2     	(1 << 2)
#define PIO_IFDGSR_P3     	(1 << 3)
#define PIO_IFDGSR_P4     	(1 << 4)
#define PIO_IFDGSR_P5     	(1 << 5)
#define PIO_IFDGSR_P6     	(1 << 6)
#define PIO_IFDGSR_P7     	(1 << 7)
#define PIO_IFDGSR_P8     	(1 << 8)
#define PIO_IFDGSR_P9     	(1 << 9)
#define PIO_IFDGSR_P10     	(1 << 10)
#define PIO_IFDGSR_P11     	(1 << 11)
#define PIO_IFDGSR_P12     	(1 << 12)
#define PIO_IFDGSR_P13     	(1 << 13)
#define PIO_IFDGSR_P14     	(1 << 14)
#define PIO_IFDGSR_P15     	(1 << 15)
#define PIO_IFDGSR_P16     	(1 << 16)
#define PIO_IFDGSR_P17     	(1 << 17)
#define PIO_IFDGSR_P18     	(1 << 18)
#define PIO_IFDGSR_P19     	(1 << 19)
#define PIO_IFDGSR_P20     	(1 << 20)
#define PIO_IFDGSR_P21     	(1 << 21)
#define PIO_IFDGSR_P22     	(1 << 22)
#define PIO_IFDGSR_P23     	(1 << 23)
#define PIO_IFDGSR_P24     	(1 << 24)
#define PIO_IFDGSR_P25     	(1 << 25)
#define PIO_IFDGSR_P26     	(1 << 26)
#define PIO_IFDGSR_P27     	(1 << 27)
#define PIO_IFDGSR_P28     	(1 << 28)
#define PIO_IFDGSR_P29     	(1 << 29)
#define PIO_IFDGSR_P30     	(1 << 30)
#define PIO_IFDGSR_P31     	(1 << 31)

struct __struct_PIO_IFDGSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_SCDR_DIV(x)  	((x) << 0)
#define PIO_SCDR_DIV_m   	0x00003fff
#define PIO_SCDR_DIV_v(x)	(((x) >> 0) & 0x3fff)

struct __struct_PIO_SCDR
{
  uint32_t	div	: 14;
  uint32_t		: 18;
};

#define PIO_OWER_P0     	(1 << 0)
#define PIO_OWER_P1     	(1 << 1)
#define PIO_OWER_P2     	(1 << 2)
#define PIO_OWER_P3     	(1 << 3)
#define PIO_OWER_P4     	(1 << 4)
#define PIO_OWER_P5     	(1 << 5)
#define PIO_OWER_P6     	(1 << 6)
#define PIO_OWER_P7     	(1 << 7)
#define PIO_OWER_P8     	(1 << 8)
#define PIO_OWER_P9     	(1 << 9)
#define PIO_OWER_P10     	(1 << 10)
#define PIO_OWER_P11     	(1 << 11)
#define PIO_OWER_P12     	(1 << 12)
#define PIO_OWER_P13     	(1 << 13)
#define PIO_OWER_P14     	(1 << 14)
#define PIO_OWER_P15     	(1 << 15)
#define PIO_OWER_P16     	(1 << 16)
#define PIO_OWER_P17     	(1 << 17)
#define PIO_OWER_P18     	(1 << 18)
#define PIO_OWER_P19     	(1 << 19)
#define PIO_OWER_P20     	(1 << 20)
#define PIO_OWER_P21     	(1 << 21)
#define PIO_OWER_P22     	(1 << 22)
#define PIO_OWER_P23     	(1 << 23)
#define PIO_OWER_P24     	(1 << 24)
#define PIO_OWER_P25     	(1 << 25)
#define PIO_OWER_P26     	(1 << 26)
#define PIO_OWER_P27     	(1 << 27)
#define PIO_OWER_P28     	(1 << 28)
#define PIO_OWER_P29     	(1 << 29)
#define PIO_OWER_P30     	(1 << 30)
#define PIO_OWER_P31     	(1 << 31)

struct __struct_PIO_OWER
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_OWDR_P0     	(1 << 0)
#define PIO_OWDR_P1     	(1 << 1)
#define PIO_OWDR_P2     	(1 << 2)
#define PIO_OWDR_P3     	(1 << 3)
#define PIO_OWDR_P4     	(1 << 4)
#define PIO_OWDR_P5     	(1 << 5)
#define PIO_OWDR_P6     	(1 << 6)
#define PIO_OWDR_P7     	(1 << 7)
#define PIO_OWDR_P8     	(1 << 8)
#define PIO_OWDR_P9     	(1 << 9)
#define PIO_OWDR_P10     	(1 << 10)
#define PIO_OWDR_P11     	(1 << 11)
#define PIO_OWDR_P12     	(1 << 12)
#define PIO_OWDR_P13     	(1 << 13)
#define PIO_OWDR_P14     	(1 << 14)
#define PIO_OWDR_P15     	(1 << 15)
#define PIO_OWDR_P16     	(1 << 16)
#define PIO_OWDR_P17     	(1 << 17)
#define PIO_OWDR_P18     	(1 << 18)
#define PIO_OWDR_P19     	(1 << 19)
#define PIO_OWDR_P20     	(1 << 20)
#define PIO_OWDR_P21     	(1 << 21)
#define PIO_OWDR_P22     	(1 << 22)
#define PIO_OWDR_P23     	(1 << 23)
#define PIO_OWDR_P24     	(1 << 24)
#define PIO_OWDR_P25     	(1 << 25)
#define PIO_OWDR_P26     	(1 << 26)
#define PIO_OWDR_P27     	(1 << 27)
#define PIO_OWDR_P28     	(1 << 28)
#define PIO_OWDR_P29     	(1 << 29)
#define PIO_OWDR_P30     	(1 << 30)
#define PIO_OWDR_P31     	(1 << 31)

struct __struct_PIO_OWDR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_OWSR_P0     	(1 << 0)
#define PIO_OWSR_P1     	(1 << 1)
#define PIO_OWSR_P2     	(1 << 2)
#define PIO_OWSR_P3     	(1 << 3)
#define PIO_OWSR_P4     	(1 << 4)
#define PIO_OWSR_P5     	(1 << 5)
#define PIO_OWSR_P6     	(1 << 6)
#define PIO_OWSR_P7     	(1 << 7)
#define PIO_OWSR_P8     	(1 << 8)
#define PIO_OWSR_P9     	(1 << 9)
#define PIO_OWSR_P10     	(1 << 10)
#define PIO_OWSR_P11     	(1 << 11)
#define PIO_OWSR_P12     	(1 << 12)
#define PIO_OWSR_P13     	(1 << 13)
#define PIO_OWSR_P14     	(1 << 14)
#define PIO_OWSR_P15     	(1 << 15)
#define PIO_OWSR_P16     	(1 << 16)
#define PIO_OWSR_P17     	(1 << 17)
#define PIO_OWSR_P18     	(1 << 18)
#define PIO_OWSR_P19     	(1 << 19)
#define PIO_OWSR_P20     	(1 << 20)
#define PIO_OWSR_P21     	(1 << 21)
#define PIO_OWSR_P22     	(1 << 22)
#define PIO_OWSR_P23     	(1 << 23)
#define PIO_OWSR_P24     	(1 << 24)
#define PIO_OWSR_P25     	(1 << 25)
#define PIO_OWSR_P26     	(1 << 26)
#define PIO_OWSR_P27     	(1 << 27)
#define PIO_OWSR_P28     	(1 << 28)
#define PIO_OWSR_P29     	(1 << 29)
#define PIO_OWSR_P30     	(1 << 30)
#define PIO_OWSR_P31     	(1 << 31)

struct __struct_PIO_OWSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_AIMER_P0     	(1 << 0)
#define PIO_AIMER_P1     	(1 << 1)
#define PIO_AIMER_P2     	(1 << 2)
#define PIO_AIMER_P3     	(1 << 3)
#define PIO_AIMER_P4     	(1 << 4)
#define PIO_AIMER_P5     	(1 << 5)
#define PIO_AIMER_P6     	(1 << 6)
#define PIO_AIMER_P7     	(1 << 7)
#define PIO_AIMER_P8     	(1 << 8)
#define PIO_AIMER_P9     	(1 << 9)
#define PIO_AIMER_P10     	(1 << 10)
#define PIO_AIMER_P11     	(1 << 11)
#define PIO_AIMER_P12     	(1 << 12)
#define PIO_AIMER_P13     	(1 << 13)
#define PIO_AIMER_P14     	(1 << 14)
#define PIO_AIMER_P15     	(1 << 15)
#define PIO_AIMER_P16     	(1 << 16)
#define PIO_AIMER_P17     	(1 << 17)
#define PIO_AIMER_P18     	(1 << 18)
#define PIO_AIMER_P19     	(1 << 19)
#define PIO_AIMER_P20     	(1 << 20)
#define PIO_AIMER_P21     	(1 << 21)
#define PIO_AIMER_P22     	(1 << 22)
#define PIO_AIMER_P23     	(1 << 23)
#define PIO_AIMER_P24     	(1 << 24)
#define PIO_AIMER_P25     	(1 << 25)
#define PIO_AIMER_P26     	(1 << 26)
#define PIO_AIMER_P27     	(1 << 27)
#define PIO_AIMER_P28     	(1 << 28)
#define PIO_AIMER_P29     	(1 << 29)
#define PIO_AIMER_P30     	(1 << 30)
#define PIO_AIMER_P31     	(1 << 31)

struct __struct_PIO_AIMER
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_AIMDR_P0     	(1 << 0)
#define PIO_AIMDR_P1     	(1 << 1)
#define PIO_AIMDR_P2     	(1 << 2)
#define PIO_AIMDR_P3     	(1 << 3)
#define PIO_AIMDR_P4     	(1 << 4)
#define PIO_AIMDR_P5     	(1 << 5)
#define PIO_AIMDR_P6     	(1 << 6)
#define PIO_AIMDR_P7     	(1 << 7)
#define PIO_AIMDR_P8     	(1 << 8)
#define PIO_AIMDR_P9     	(1 << 9)
#define PIO_AIMDR_P10     	(1 << 10)
#define PIO_AIMDR_P11     	(1 << 11)
#define PIO_AIMDR_P12     	(1 << 12)
#define PIO_AIMDR_P13     	(1 << 13)
#define PIO_AIMDR_P14     	(1 << 14)
#define PIO_AIMDR_P15     	(1 << 15)
#define PIO_AIMDR_P16     	(1 << 16)
#define PIO_AIMDR_P17     	(1 << 17)
#define PIO_AIMDR_P18     	(1 << 18)
#define PIO_AIMDR_P19     	(1 << 19)
#define PIO_AIMDR_P20     	(1 << 20)
#define PIO_AIMDR_P21     	(1 << 21)
#define PIO_AIMDR_P22     	(1 << 22)
#define PIO_AIMDR_P23     	(1 << 23)
#define PIO_AIMDR_P24     	(1 << 24)
#define PIO_AIMDR_P25     	(1 << 25)
#define PIO_AIMDR_P26     	(1 << 26)
#define PIO_AIMDR_P27     	(1 << 27)
#define PIO_AIMDR_P28     	(1 << 28)
#define PIO_AIMDR_P29     	(1 << 29)
#define PIO_AIMDR_P30     	(1 << 30)
#define PIO_AIMDR_P31     	(1 << 31)

struct __struct_PIO_AIMDR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_AIMMR_P0     	(1 << 0)
#define PIO_AIMMR_P1     	(1 << 1)
#define PIO_AIMMR_P2     	(1 << 2)
#define PIO_AIMMR_P3     	(1 << 3)
#define PIO_AIMMR_P4     	(1 << 4)
#define PIO_AIMMR_P5     	(1 << 5)
#define PIO_AIMMR_P6     	(1 << 6)
#define PIO_AIMMR_P7     	(1 << 7)
#define PIO_AIMMR_P8     	(1 << 8)
#define PIO_AIMMR_P9     	(1 << 9)
#define PIO_AIMMR_P10     	(1 << 10)
#define PIO_AIMMR_P11     	(1 << 11)
#define PIO_AIMMR_P12     	(1 << 12)
#define PIO_AIMMR_P13     	(1 << 13)
#define PIO_AIMMR_P14     	(1 << 14)
#define PIO_AIMMR_P15     	(1 << 15)
#define PIO_AIMMR_P16     	(1 << 16)
#define PIO_AIMMR_P17     	(1 << 17)
#define PIO_AIMMR_P18     	(1 << 18)
#define PIO_AIMMR_P19     	(1 << 19)
#define PIO_AIMMR_P20     	(1 << 20)
#define PIO_AIMMR_P21     	(1 << 21)
#define PIO_AIMMR_P22     	(1 << 22)
#define PIO_AIMMR_P23     	(1 << 23)
#define PIO_AIMMR_P24     	(1 << 24)
#define PIO_AIMMR_P25     	(1 << 25)
#define PIO_AIMMR_P26     	(1 << 26)
#define PIO_AIMMR_P27     	(1 << 27)
#define PIO_AIMMR_P28     	(1 << 28)
#define PIO_AIMMR_P29     	(1 << 29)
#define PIO_AIMMR_P30     	(1 << 30)
#define PIO_AIMMR_P31     	(1 << 31)

struct __struct_PIO_AIMMR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_ESR_P0     	(1 << 0)
#define PIO_ESR_P1     	(1 << 1)
#define PIO_ESR_P2     	(1 << 2)
#define PIO_ESR_P3     	(1 << 3)
#define PIO_ESR_P4     	(1 << 4)
#define PIO_ESR_P5     	(1 << 5)
#define PIO_ESR_P6     	(1 << 6)
#define PIO_ESR_P7     	(1 << 7)
#define PIO_ESR_P8     	(1 << 8)
#define PIO_ESR_P9     	(1 << 9)
#define PIO_ESR_P10     	(1 << 10)
#define PIO_ESR_P11     	(1 << 11)
#define PIO_ESR_P12     	(1 << 12)
#define PIO_ESR_P13     	(1 << 13)
#define PIO_ESR_P14     	(1 << 14)
#define PIO_ESR_P15     	(1 << 15)
#define PIO_ESR_P16     	(1 << 16)
#define PIO_ESR_P17     	(1 << 17)
#define PIO_ESR_P18     	(1 << 18)
#define PIO_ESR_P19     	(1 << 19)
#define PIO_ESR_P20     	(1 << 20)
#define PIO_ESR_P21     	(1 << 21)
#define PIO_ESR_P22     	(1 << 22)
#define PIO_ESR_P23     	(1 << 23)
#define PIO_ESR_P24     	(1 << 24)
#define PIO_ESR_P25     	(1 << 25)
#define PIO_ESR_P26     	(1 << 26)
#define PIO_ESR_P27     	(1 << 27)
#define PIO_ESR_P28     	(1 << 28)
#define PIO_ESR_P29     	(1 << 29)
#define PIO_ESR_P30     	(1 << 30)
#define PIO_ESR_P31     	(1 << 31)

struct __struct_PIO_ESR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_LSR_P0     	(1 << 0)
#define PIO_LSR_P1     	(1 << 1)
#define PIO_LSR_P2     	(1 << 2)
#define PIO_LSR_P3     	(1 << 3)
#define PIO_LSR_P4     	(1 << 4)
#define PIO_LSR_P5     	(1 << 5)
#define PIO_LSR_P6     	(1 << 6)
#define PIO_LSR_P7     	(1 << 7)
#define PIO_LSR_P8     	(1 << 8)
#define PIO_LSR_P9     	(1 << 9)
#define PIO_LSR_P10     	(1 << 10)
#define PIO_LSR_P11     	(1 << 11)
#define PIO_LSR_P12     	(1 << 12)
#define PIO_LSR_P13     	(1 << 13)
#define PIO_LSR_P14     	(1 << 14)
#define PIO_LSR_P15     	(1 << 15)
#define PIO_LSR_P16     	(1 << 16)
#define PIO_LSR_P17     	(1 << 17)
#define PIO_LSR_P18     	(1 << 18)
#define PIO_LSR_P19     	(1 << 19)
#define PIO_LSR_P20     	(1 << 20)
#define PIO_LSR_P21     	(1 << 21)
#define PIO_LSR_P22     	(1 << 22)
#define PIO_LSR_P23     	(1 << 23)
#define PIO_LSR_P24     	(1 << 24)
#define PIO_LSR_P25     	(1 << 25)
#define PIO_LSR_P26     	(1 << 26)
#define PIO_LSR_P27     	(1 << 27)
#define PIO_LSR_P28     	(1 << 28)
#define PIO_LSR_P29     	(1 << 29)
#define PIO_LSR_P30     	(1 << 30)
#define PIO_LSR_P31     	(1 << 31)

struct __struct_PIO_LSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_ELSR_P0     	(1 << 0)
#define PIO_ELSR_P1     	(1 << 1)
#define PIO_ELSR_P2     	(1 << 2)
#define PIO_ELSR_P3     	(1 << 3)
#define PIO_ELSR_P4     	(1 << 4)
#define PIO_ELSR_P5     	(1 << 5)
#define PIO_ELSR_P6     	(1 << 6)
#define PIO_ELSR_P7     	(1 << 7)
#define PIO_ELSR_P8     	(1 << 8)
#define PIO_ELSR_P9     	(1 << 9)
#define PIO_ELSR_P10     	(1 << 10)
#define PIO_ELSR_P11     	(1 << 11)
#define PIO_ELSR_P12     	(1 << 12)
#define PIO_ELSR_P13     	(1 << 13)
#define PIO_ELSR_P14     	(1 << 14)
#define PIO_ELSR_P15     	(1 << 15)
#define PIO_ELSR_P16     	(1 << 16)
#define PIO_ELSR_P17     	(1 << 17)
#define PIO_ELSR_P18     	(1 << 18)
#define PIO_ELSR_P19     	(1 << 19)
#define PIO_ELSR_P20     	(1 << 20)
#define PIO_ELSR_P21     	(1 << 21)
#define PIO_ELSR_P22     	(1 << 22)
#define PIO_ELSR_P23     	(1 << 23)
#define PIO_ELSR_P24     	(1 << 24)
#define PIO_ELSR_P25     	(1 << 25)
#define PIO_ELSR_P26     	(1 << 26)
#define PIO_ELSR_P27     	(1 << 27)
#define PIO_ELSR_P28     	(1 << 28)
#define PIO_ELSR_P29     	(1 << 29)
#define PIO_ELSR_P30     	(1 << 30)
#define PIO_ELSR_P31     	(1 << 31)

struct __struct_PIO_ELSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_FELLSR_P0     	(1 << 0)
#define PIO_FELLSR_P1     	(1 << 1)
#define PIO_FELLSR_P2     	(1 << 2)
#define PIO_FELLSR_P3     	(1 << 3)
#define PIO_FELLSR_P4     	(1 << 4)
#define PIO_FELLSR_P5     	(1 << 5)
#define PIO_FELLSR_P6     	(1 << 6)
#define PIO_FELLSR_P7     	(1 << 7)
#define PIO_FELLSR_P8     	(1 << 8)
#define PIO_FELLSR_P9     	(1 << 9)
#define PIO_FELLSR_P10     	(1 << 10)
#define PIO_FELLSR_P11     	(1 << 11)
#define PIO_FELLSR_P12     	(1 << 12)
#define PIO_FELLSR_P13     	(1 << 13)
#define PIO_FELLSR_P14     	(1 << 14)
#define PIO_FELLSR_P15     	(1 << 15)
#define PIO_FELLSR_P16     	(1 << 16)
#define PIO_FELLSR_P17     	(1 << 17)
#define PIO_FELLSR_P18     	(1 << 18)
#define PIO_FELLSR_P19     	(1 << 19)
#define PIO_FELLSR_P20     	(1 << 20)
#define PIO_FELLSR_P21     	(1 << 21)
#define PIO_FELLSR_P22     	(1 << 22)
#define PIO_FELLSR_P23     	(1 << 23)
#define PIO_FELLSR_P24     	(1 << 24)
#define PIO_FELLSR_P25     	(1 << 25)
#define PIO_FELLSR_P26     	(1 << 26)
#define PIO_FELLSR_P27     	(1 << 27)
#define PIO_FELLSR_P28     	(1 << 28)
#define PIO_FELLSR_P29     	(1 << 29)
#define PIO_FELLSR_P30     	(1 << 30)
#define PIO_FELLSR_P31     	(1 << 31)

struct __struct_PIO_FELLSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_REHLSR_P0     	(1 << 0)
#define PIO_REHLSR_P1     	(1 << 1)
#define PIO_REHLSR_P2     	(1 << 2)
#define PIO_REHLSR_P3     	(1 << 3)
#define PIO_REHLSR_P4     	(1 << 4)
#define PIO_REHLSR_P5     	(1 << 5)
#define PIO_REHLSR_P6     	(1 << 6)
#define PIO_REHLSR_P7     	(1 << 7)
#define PIO_REHLSR_P8     	(1 << 8)
#define PIO_REHLSR_P9     	(1 << 9)
#define PIO_REHLSR_P10     	(1 << 10)
#define PIO_REHLSR_P11     	(1 << 11)
#define PIO_REHLSR_P12     	(1 << 12)
#define PIO_REHLSR_P13     	(1 << 13)
#define PIO_REHLSR_P14     	(1 << 14)
#define PIO_REHLSR_P15     	(1 << 15)
#define PIO_REHLSR_P16     	(1 << 16)
#define PIO_REHLSR_P17     	(1 << 17)
#define PIO_REHLSR_P18     	(1 << 18)
#define PIO_REHLSR_P19     	(1 << 19)
#define PIO_REHLSR_P20     	(1 << 20)
#define PIO_REHLSR_P21     	(1 << 21)
#define PIO_REHLSR_P22     	(1 << 22)
#define PIO_REHLSR_P23     	(1 << 23)
#define PIO_REHLSR_P24     	(1 << 24)
#define PIO_REHLSR_P25     	(1 << 25)
#define PIO_REHLSR_P26     	(1 << 26)
#define PIO_REHLSR_P27     	(1 << 27)
#define PIO_REHLSR_P28     	(1 << 28)
#define PIO_REHLSR_P29     	(1 << 29)
#define PIO_REHLSR_P30     	(1 << 30)
#define PIO_REHLSR_P31     	(1 << 31)

struct __struct_PIO_REHLSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_FRLHSR_P0     	(1 << 0)
#define PIO_FRLHSR_P1     	(1 << 1)
#define PIO_FRLHSR_P2     	(1 << 2)
#define PIO_FRLHSR_P3     	(1 << 3)
#define PIO_FRLHSR_P4     	(1 << 4)
#define PIO_FRLHSR_P5     	(1 << 5)
#define PIO_FRLHSR_P6     	(1 << 6)
#define PIO_FRLHSR_P7     	(1 << 7)
#define PIO_FRLHSR_P8     	(1 << 8)
#define PIO_FRLHSR_P9     	(1 << 9)
#define PIO_FRLHSR_P10     	(1 << 10)
#define PIO_FRLHSR_P11     	(1 << 11)
#define PIO_FRLHSR_P12     	(1 << 12)
#define PIO_FRLHSR_P13     	(1 << 13)
#define PIO_FRLHSR_P14     	(1 << 14)
#define PIO_FRLHSR_P15     	(1 << 15)
#define PIO_FRLHSR_P16     	(1 << 16)
#define PIO_FRLHSR_P17     	(1 << 17)
#define PIO_FRLHSR_P18     	(1 << 18)
#define PIO_FRLHSR_P19     	(1 << 19)
#define PIO_FRLHSR_P20     	(1 << 20)
#define PIO_FRLHSR_P21     	(1 << 21)
#define PIO_FRLHSR_P22     	(1 << 22)
#define PIO_FRLHSR_P23     	(1 << 23)
#define PIO_FRLHSR_P24     	(1 << 24)
#define PIO_FRLHSR_P25     	(1 << 25)
#define PIO_FRLHSR_P26     	(1 << 26)
#define PIO_FRLHSR_P27     	(1 << 27)
#define PIO_FRLHSR_P28     	(1 << 28)
#define PIO_FRLHSR_P29     	(1 << 29)
#define PIO_FRLHSR_P30     	(1 << 30)
#define PIO_FRLHSR_P31     	(1 << 31)

struct __struct_PIO_FRLHSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_LOCKSR_P0     	(1 << 0)
#define PIO_LOCKSR_P1     	(1 << 1)
#define PIO_LOCKSR_P2     	(1 << 2)
#define PIO_LOCKSR_P3     	(1 << 3)
#define PIO_LOCKSR_P4     	(1 << 4)
#define PIO_LOCKSR_P5     	(1 << 5)
#define PIO_LOCKSR_P6     	(1 << 6)
#define PIO_LOCKSR_P7     	(1 << 7)
#define PIO_LOCKSR_P8     	(1 << 8)
#define PIO_LOCKSR_P9     	(1 << 9)
#define PIO_LOCKSR_P10     	(1 << 10)
#define PIO_LOCKSR_P11     	(1 << 11)
#define PIO_LOCKSR_P12     	(1 << 12)
#define PIO_LOCKSR_P13     	(1 << 13)
#define PIO_LOCKSR_P14     	(1 << 14)
#define PIO_LOCKSR_P15     	(1 << 15)
#define PIO_LOCKSR_P16     	(1 << 16)
#define PIO_LOCKSR_P17     	(1 << 17)
#define PIO_LOCKSR_P18     	(1 << 18)
#define PIO_LOCKSR_P19     	(1 << 19)
#define PIO_LOCKSR_P20     	(1 << 20)
#define PIO_LOCKSR_P21     	(1 << 21)
#define PIO_LOCKSR_P22     	(1 << 22)
#define PIO_LOCKSR_P23     	(1 << 23)
#define PIO_LOCKSR_P24     	(1 << 24)
#define PIO_LOCKSR_P25     	(1 << 25)
#define PIO_LOCKSR_P26     	(1 << 26)
#define PIO_LOCKSR_P27     	(1 << 27)
#define PIO_LOCKSR_P28     	(1 << 28)
#define PIO_LOCKSR_P29     	(1 << 29)
#define PIO_LOCKSR_P30     	(1 << 30)
#define PIO_LOCKSR_P31     	(1 << 31)

struct __struct_PIO_LOCKSR
{
  uint32_t	p0	: 1;
  uint32_t	p1	: 1;
  uint32_t	p2	: 1;
  uint32_t	p3	: 1;
  uint32_t	p4	: 1;
  uint32_t	p5	: 1;
  uint32_t	p6	: 1;
  uint32_t	p7	: 1;
  uint32_t	p8	: 1;
  uint32_t	p9	: 1;
  uint32_t	p10	: 1;
  uint32_t	p11	: 1;
  uint32_t	p12	: 1;
  uint32_t	p13	: 1;
  uint32_t	p14	: 1;
  uint32_t	p15	: 1;
  uint32_t	p16	: 1;
  uint32_t	p17	: 1;
  uint32_t	p18	: 1;
  uint32_t	p19	: 1;
  uint32_t	p20	: 1;
  uint32_t	p21	: 1;
  uint32_t	p22	: 1;
  uint32_t	p23	: 1;
  uint32_t	p24	: 1;
  uint32_t	p25	: 1;
  uint32_t	p26	: 1;
  uint32_t	p27	: 1;
  uint32_t	p28	: 1;
  uint32_t	p29	: 1;
  uint32_t	p30	: 1;
  uint32_t	p31	: 1;
};

#define PIO_WPMR_WPEN     	(1 << 0)
#define PIO_WPMR_WPKEY(x)  	((x) << 8)
#define PIO_WPMR_WPKEY_m   	0xffffff00
#define PIO_WPMR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define PIO_WPMR_WPKEY_KEY	0x50494f

struct __struct_PIO_WPMR
{
  uint32_t	wpen	: 1;
  uint32_t		: 7;
  uint32_t	wpkey	: 24;
};

#define PIO_WPSR_WPVS     	(1 << 0)
#define PIO_WPSR_WPVSRC(x)  	((x) << 8)
#define PIO_WPSR_WPVSRC_m   	0x00ffff00
#define PIO_WPSR_WPVSRC_v(x)	(((x) >> 8) & 0xffff)

struct __struct_PIO_WPSR
{
  uint32_t	wpvs	: 1;
  uint32_t		: 7;
  uint32_t	wpvsrc	: 16;
  uint32_t		: 8;
};


// RSTC
#define RSTC_CR_PROCRST     	(1 << 0)
#define RSTC_CR_PERRST     	(1 << 2)
#define RSTC_CR_EXTRST     	(1 << 3)
#define RSTC_CR_KEY(x)  	((x) << 24)
#define RSTC_CR_KEY_m   	0xff000000
#define RSTC_CR_KEY_v(x)	(((x) >> 24) & 0xff)
#define RSTC_CR_KEY_KEY	0xa5

struct __struct_RSTC_CR
{
  uint32_t	procrst	: 1;
  uint32_t		: 1;
  uint32_t	perrst	: 1;
  uint32_t	extrst	: 1;
  uint32_t		: 20;
  uint32_t	key	: 8;
};

#define RSTC_SR_URSTS     	(1 << 0)
#define RSTC_SR_RSTTYP(x)  	((x) << 8)
#define RSTC_SR_RSTTYP_m   	0x00000700
#define RSTC_SR_RSTTYP_v(x)	(((x) >> 8) & 0x7)
#define RSTC_SR_RSTTYP_GENERAL	0x0
#define RSTC_SR_RSTTYP_BACKUP	0x1
#define RSTC_SR_RSTTYP_WATCHDOG	0x2
#define RSTC_SR_RSTTYP_SOFTWARE	0x3
#define RSTC_SR_RSTTYP_USER	0x4
#define RSTC_SR_NRSTL     	(1 << 16)
#define RSTC_SR_SRCMP     	(1 << 17)

struct __struct_RSTC_SR
{
  uint32_t	ursts	: 1;
  uint32_t		: 7;
  uint32_t	rsttyp	: 3;
  uint32_t		: 5;
  uint32_t	nrstl	: 1;
  uint32_t	srcmp	: 1;
  uint32_t		: 14;
};

#define RSTC_MR_URSTEN     	(1 << 0)
#define RSTC_MR_URSTIEN     	(1 << 4)
#define RSTC_MR_ERSTL(x)  	((x) << 8)
#define RSTC_MR_ERSTL_m   	0x00000f00
#define RSTC_MR_ERSTL_v(x)	(((x) >> 8) & 0xf)
#define RSTC_MR_KEY(x)  	((x) << 24)
#define RSTC_MR_KEY_m   	0xff000000
#define RSTC_MR_KEY_v(x)	(((x) >> 24) & 0xff)
#define RSTC_MR_KEY_KEY	0xa5

struct __struct_RSTC_MR
{
  uint32_t	ursten	: 1;
  uint32_t		: 3;
  uint32_t	urstien	: 1;
  uint32_t		: 3;
  uint32_t	erstl	: 4;
  uint32_t		: 12;
  uint32_t	key	: 8;
};


// SUPC
#define SUPC_CR_VROFF     	(1 << 2)
#define SUPC_CR_XTALSEL     	(1 << 3)
#define SUPC_CR_KEY(x)  	((x) << 24)
#define SUPC_CR_KEY_m   	0xff000000
#define SUPC_CR_KEY_v(x)	(((x) >> 24) & 0xff)
#define SUPC_CR_KEY_KEY	0xa5

struct __struct_SUPC_CR
{
  uint32_t		: 2;
  uint32_t	vroff	: 1;
  uint32_t	xtalsel	: 1;
  uint32_t		: 20;
  uint32_t	key	: 8;
};

#define SUPC_SMMR_SMTH(x)  	((x) << 0)
#define SUPC_SMMR_SMTH_m   	0x0000000f
#define SUPC_SMMR_SMTH_v(x)	(((x) >> 0) & 0xf)
#define SUPC_SMMR_SMTH_1_9V	0x0
#define SUPC_SMMR_SMTH_2_0V	0x1
#define SUPC_SMMR_SMTH_2_1V	0x2
#define SUPC_SMMR_SMTH_2_2V	0x3
#define SUPC_SMMR_SMTH_2_3V	0x4
#define SUPC_SMMR_SMTH_2_4V	0x5
#define SUPC_SMMR_SMTH_2_5V	0x6
#define SUPC_SMMR_SMTH_2_6V	0x7
#define SUPC_SMMR_SMTH_2_7V	0x8
#define SUPC_SMMR_SMTH_2_8V	0x9
#define SUPC_SMMR_SMTH_2_9V	0xa
#define SUPC_SMMR_SMTH_3_0V	0xb
#define SUPC_SMMR_SMTH_3_1V	0xc
#define SUPC_SMMR_SMTH_3_2V	0xd
#define SUPC_SMMR_SMTH_3_3V	0xe
#define SUPC_SMMR_SMTH_3_4V	0xf
#define SUPC_SMMR_SMSMPL(x)  	((x) << 8)
#define SUPC_SMMR_SMSMPL_m   	0x00000700
#define SUPC_SMMR_SMSMPL_v(x)	(((x) >> 8) & 0x7)
#define SUPC_SMMR_SMSMPL_SMD	0x0
#define SUPC_SMMR_SMSMPL_CSM	0x1
#define SUPC_SMMR_SMSMPL_32SLCK	0x2
#define SUPC_SMMR_SMSMPL_256SLCK	0x3
#define SUPC_SMMR_SMSMPL_2048SLCK	0x4
#define SUPC_SMMR_SMRSTEN     	(1 << 12)
#define SUPC_SMMR_SMIEN     	(1 << 13)

struct __struct_SUPC_SMMR
{
  uint32_t	smth	: 4;
  uint32_t		: 4;
  uint32_t	smsmpl	: 3;
  uint32_t		: 1;
  uint32_t	smrsten	: 1;
  uint32_t	smien	: 1;
  uint32_t		: 18;
};

#define SUPC_MR_BODRSTEN     	(1 << 12)
#define SUPC_MR_BODDIS     	(1 << 13)
#define SUPC_MR_VDDIORDYONREG     	(1 << 14)
#define SUPC_MR_OSCBYPASS     	(1 << 20)
#define SUPC_MR_KEY(x)  	((x) << 24)
#define SUPC_MR_KEY_m   	0xff000000
#define SUPC_MR_KEY_v(x)	(((x) >> 24) & 0xff)
#define SUPC_MR_KEY_KEY	0xa5

struct __struct_SUPC_MR
{
  uint32_t		: 12;
  uint32_t	bodrsten	: 1;
  uint32_t	boddis	: 1;
  uint32_t	vddiordyonreg	: 1;
  uint32_t		: 5;
  uint32_t	oscbypass	: 1;
  uint32_t		: 3;
  uint32_t	key	: 8;
};

#define SUPC_WUMR_FWUPEN     	(1 << 0)
#define SUPC_WUMR_SMEN     	(1 << 1)
#define SUPC_WUMR_RTTEN     	(1 << 2)
#define SUPC_WUMR_RTCEN     	(1 << 3)
#define SUPC_WUMR_FWUPDBC(x)  	((x) << 8)
#define SUPC_WUMR_FWUPDBC_m   	0x00000700
#define SUPC_WUMR_FWUPDBC_v(x)	(((x) >> 8) & 0x7)
#define SUPC_WUMR_FWUPDBC_IMMEDIATE	0x0
#define SUPC_WUMR_FWUPDBC_3_SCLK	0x1
#define SUPC_WUMR_FWUPDBC_32_SCLK	0x2
#define SUPC_WUMR_FWUPDBC_512_SCLK	0x3
#define SUPC_WUMR_FWUPDBC_4096_SCLK	0x4
#define SUPC_WUMR_FWUPDBC_32768_SCLK	0x5
#define SUPC_WUMR_WKUPDBC(x)  	((x) << 12)
#define SUPC_WUMR_WKUPDBC_m   	0x00007000
#define SUPC_WUMR_WKUPDBC_v(x)	(((x) >> 12) & 0x7)
#define SUPC_WUMR_WKUPDBC_IMMEDIATE	0x0
#define SUPC_WUMR_WKUPDBC_3_SCLK	0x1
#define SUPC_WUMR_WKUPDBC_32_SCLK	0x2
#define SUPC_WUMR_WKUPDBC_512_SCLK	0x3
#define SUPC_WUMR_WKUPDBC_4096_SCLK	0x4
#define SUPC_WUMR_WKUPDBC_32768_SCLK	0x5

struct __struct_SUPC_WUMR
{
  uint32_t	fwupen	: 1;
  uint32_t	smen	: 1;
  uint32_t	rtten	: 1;
  uint32_t	rtcen	: 1;
  uint32_t		: 4;
  uint32_t	fwupdbc	: 3;
  uint32_t		: 1;
  uint32_t	wkupdbc	: 3;
  uint32_t		: 17;
};

#define SUPC_WUIR_WKUPEN0     	(1 << 0)
#define SUPC_WUIR_WKUPEN1     	(1 << 1)
#define SUPC_WUIR_WKUPEN2     	(1 << 2)
#define SUPC_WUIR_WKUPEN3     	(1 << 3)
#define SUPC_WUIR_WKUPEN4     	(1 << 4)
#define SUPC_WUIR_WKUPEN5     	(1 << 5)
#define SUPC_WUIR_WKUPEN6     	(1 << 6)
#define SUPC_WUIR_WKUPEN7     	(1 << 7)
#define SUPC_WUIR_WKUPEN8     	(1 << 8)
#define SUPC_WUIR_WKUPEN9     	(1 << 9)
#define SUPC_WUIR_WKUPEN10     	(1 << 10)
#define SUPC_WUIR_WKUPEN11     	(1 << 11)
#define SUPC_WUIR_WKUPEN12     	(1 << 12)
#define SUPC_WUIR_WKUPEN13     	(1 << 13)
#define SUPC_WUIR_WKUPEN14     	(1 << 14)
#define SUPC_WUIR_WKUPEN15     	(1 << 15)
#define SUPC_WUIR_WKUPT0     	(1 << 16)
#define SUPC_WUIR_WKUPT0_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT0_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT1     	(1 << 17)
#define SUPC_WUIR_WKUPT1_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT1_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT2     	(1 << 18)
#define SUPC_WUIR_WKUPT2_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT2_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT3     	(1 << 19)
#define SUPC_WUIR_WKUPT3_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT3_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT4     	(1 << 20)
#define SUPC_WUIR_WKUPT4_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT4_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT5     	(1 << 21)
#define SUPC_WUIR_WKUPT5_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT5_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT6     	(1 << 22)
#define SUPC_WUIR_WKUPT6_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT6_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT7     	(1 << 23)
#define SUPC_WUIR_WKUPT7_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT7_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT8     	(1 << 24)
#define SUPC_WUIR_WKUPT8_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT8_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT9     	(1 << 25)
#define SUPC_WUIR_WKUPT9_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT9_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT10     	(1 << 26)
#define SUPC_WUIR_WKUPT10_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT10_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT11     	(1 << 27)
#define SUPC_WUIR_WKUPT11_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT11_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT12     	(1 << 28)
#define SUPC_WUIR_WKUPT12_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT12_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT13     	(1 << 29)
#define SUPC_WUIR_WKUPT13_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT13_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT14     	(1 << 30)
#define SUPC_WUIR_WKUPT14_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT14_LOW_TO_HIGH	0x1
#define SUPC_WUIR_WKUPT15     	(1 << 31)
#define SUPC_WUIR_WKUPT15_HIGH_TO_LOW	0x0
#define SUPC_WUIR_WKUPT15_LOW_TO_HIGH	0x1

struct __struct_SUPC_WUIR
{
  uint32_t	wkupen0	: 1;
  uint32_t	wkupen1	: 1;
  uint32_t	wkupen2	: 1;
  uint32_t	wkupen3	: 1;
  uint32_t	wkupen4	: 1;
  uint32_t	wkupen5	: 1;
  uint32_t	wkupen6	: 1;
  uint32_t	wkupen7	: 1;
  uint32_t	wkupen8	: 1;
  uint32_t	wkupen9	: 1;
  uint32_t	wkupen10	: 1;
  uint32_t	wkupen11	: 1;
  uint32_t	wkupen12	: 1;
  uint32_t	wkupen13	: 1;
  uint32_t	wkupen14	: 1;
  uint32_t	wkupen15	: 1;
  uint32_t	wkupt0	: 1;
  uint32_t	wkupt1	: 1;
  uint32_t	wkupt2	: 1;
  uint32_t	wkupt3	: 1;
  uint32_t	wkupt4	: 1;
  uint32_t	wkupt5	: 1;
  uint32_t	wkupt6	: 1;
  uint32_t	wkupt7	: 1;
  uint32_t	wkupt8	: 1;
  uint32_t	wkupt9	: 1;
  uint32_t	wkupt10	: 1;
  uint32_t	wkupt11	: 1;
  uint32_t	wkupt12	: 1;
  uint32_t	wkupt13	: 1;
  uint32_t	wkupt14	: 1;
  uint32_t	wkupt15	: 1;
};

#define SUPC_SR_FWUPS     	(1 << 0)
#define SUPC_SR_WKUPS     	(1 << 1)
#define SUPC_SR_SMWS     	(1 << 2)
#define SUPC_SR_BODRSTS     	(1 << 3)
#define SUPC_SR_SMRSTS     	(1 << 4)
#define SUPC_SR_SMS     	(1 << 5)
#define SUPC_SR_SMOS     	(1 << 6)
#define SUPC_SR_SMOS_HIGH	0x0
#define SUPC_SR_SMOS_LOW	0x1
#define SUPC_SR_OSCSEL     	(1 << 7)
#define SUPC_SR_OSCSEL_RC	0x0
#define SUPC_SR_OSCSEL_CRYST	0x1
#define SUPC_SR_FWUPIS     	(1 << 12)
#define SUPC_SR_FWUPIS_LOW	0x0
#define SUPC_SR_FWUPIS_HIGH	0x1
#define SUPC_SR_WKUPIS0     	(1 << 16)
#define SUPC_SR_WKUPIS1     	(1 << 17)
#define SUPC_SR_WKUPIS2     	(1 << 18)
#define SUPC_SR_WKUPIS3     	(1 << 19)
#define SUPC_SR_WKUPIS4     	(1 << 20)
#define SUPC_SR_WKUPIS5     	(1 << 21)
#define SUPC_SR_WKUPIS6     	(1 << 22)
#define SUPC_SR_WKUPIS7     	(1 << 23)
#define SUPC_SR_WKUPIS8     	(1 << 24)
#define SUPC_SR_WKUPIS9     	(1 << 25)
#define SUPC_SR_WKUPIS10     	(1 << 26)
#define SUPC_SR_WKUPIS11     	(1 << 27)
#define SUPC_SR_WKUPIS12     	(1 << 28)
#define SUPC_SR_WKUPIS13     	(1 << 29)
#define SUPC_SR_WKUPIS14     	(1 << 30)
#define SUPC_SR_WKUPIS15     	(1 << 31)

struct __struct_SUPC_SR
{
  uint32_t	fwups	: 1;
  uint32_t	wkups	: 1;
  uint32_t	smws	: 1;
  uint32_t	bodrsts	: 1;
  uint32_t	smrsts	: 1;
  uint32_t	sms	: 1;
  uint32_t	smos	: 1;
  uint32_t	oscsel	: 1;
  uint32_t		: 4;
  uint32_t	fwupis	: 1;
  uint32_t		: 3;
  uint32_t	wkupis0	: 1;
  uint32_t	wkupis1	: 1;
  uint32_t	wkupis2	: 1;
  uint32_t	wkupis3	: 1;
  uint32_t	wkupis4	: 1;
  uint32_t	wkupis5	: 1;
  uint32_t	wkupis6	: 1;
  uint32_t	wkupis7	: 1;
  uint32_t	wkupis8	: 1;
  uint32_t	wkupis9	: 1;
  uint32_t	wkupis10	: 1;
  uint32_t	wkupis11	: 1;
  uint32_t	wkupis12	: 1;
  uint32_t	wkupis13	: 1;
  uint32_t	wkupis14	: 1;
  uint32_t	wkupis15	: 1;
};


// RTT
#define RTT_MR_RTPRES(x)  	((x) << 0)
#define RTT_MR_RTPRES_m   	0x0000ffff
#define RTT_MR_RTPRES_v(x)	(((x) >> 0) & 0xffff)
#define RTT_MR_ALMIEN     	(1 << 16)
#define RTT_MR_RTTINCIEN     	(1 << 17)
#define RTT_MR_RTTRST     	(1 << 18)

struct __struct_RTT_MR
{
  uint32_t	rtpres	: 16;
  uint32_t	almien	: 1;
  uint32_t	rttincien	: 1;
  uint32_t	rttrst	: 1;
  uint32_t		: 13;
};

#define RTT_AR_ALMV(x)  	((x) << 0)
#define RTT_AR_ALMV_m   	0xffffffff
#define RTT_AR_ALMV_v(x)	(((x) >> 0) & 0xffffffff)

struct __struct_RTT_AR
{
  uint32_t	almv	: 32;
};

#define RTT_VR_CRTV(x)  	((x) << 0)
#define RTT_VR_CRTV_m   	0xffffffff
#define RTT_VR_CRTV_v(x)	(((x) >> 0) & 0xffffffff)

struct __struct_RTT_VR
{
  uint32_t	crtv	: 32;
};

#define RTT_SR_ALMS     	(1 << 0)
#define RTT_SR_RTTINC     	(1 << 1)

struct __struct_RTT_SR
{
  uint32_t	alms	: 1;
  uint32_t	rttinc	: 1;
  uint32_t		: 30;
};


// WDT
#define WDT_CR_WDRSTT     	(1 << 0)
#define WDT_CR_KEY(x)  	((x) << 24)
#define WDT_CR_KEY_m   	0xff000000
#define WDT_CR_KEY_v(x)	(((x) >> 24) & 0xff)

struct __struct_WDT_CR
{
  uint32_t	wdrstt	: 1;
  uint32_t		: 23;
  uint32_t	key	: 8;
};

#define WDT_MR_WDV(x)  	((x) << 0)
#define WDT_MR_WDV_m   	0x00000fff
#define WDT_MR_WDV_v(x)	(((x) >> 0) & 0xfff)
#define WDT_MR_WDFIEN     	(1 << 12)
#define WDT_MR_WDRSTEN     	(1 << 13)
#define WDT_MR_WDRPROC     	(1 << 14)
#define WDT_MR_WDDIS     	(1 << 15)
#define WDT_MR_WDD(x)  	((x) << 16)
#define WDT_MR_WDD_m   	0x0fff0000
#define WDT_MR_WDD_v(x)	(((x) >> 16) & 0xfff)
#define WDT_MR_WDDBGHLT     	(1 << 28)
#define WDT_MR_WDIDLEHLT     	(1 << 29)

struct __struct_WDT_MR
{
  uint32_t	wdv	: 12;
  uint32_t	wdfien	: 1;
  uint32_t	wdrsten	: 1;
  uint32_t	wdrproc	: 1;
  uint32_t	wddis	: 1;
  uint32_t	wdd	: 12;
  uint32_t	wddbghlt	: 1;
  uint32_t	wdidlehlt	: 1;
  uint32_t		: 2;
};

#define WDT_SR_WDUNF     	(1 << 0)
#define WDT_SR_WDERR     	(1 << 1)

struct __struct_WDT_SR
{
  uint32_t	wdunf	: 1;
  uint32_t	wderr	: 1;
  uint32_t		: 30;
};


// RTC
#define RTC_CR_UPDTIM     	(1 << 0)
#define RTC_CR_UPDCAL     	(1 << 1)
#define RTC_CR_TIMEVSEL(x)  	((x) << 8)
#define RTC_CR_TIMEVSEL_m   	0x00000300
#define RTC_CR_TIMEVSEL_v(x)	(((x) >> 8) & 0x3)
#define RTC_CR_TIMEVSEL_MINUTE	0x0
#define RTC_CR_TIMEVSEL_HOUR	0x1
#define RTC_CR_TIMEVSEL_MIDNIGHT	0x2
#define RTC_CR_TIMEVSEL_NOON	0x3
#define RTC_CR_CALEVSEL(x)  	((x) << 16)
#define RTC_CR_CALEVSEL_m   	0x00030000
#define RTC_CR_CALEVSEL_v(x)	(((x) >> 16) & 0x3)
#define RTC_CR_CALEVSEL_WEEK	0x0
#define RTC_CR_CALEVSEL_MONTH	0x1
#define RTC_CR_CALEVSEL_YEAR	0x2

struct __struct_RTC_CR
{
  uint32_t	updtim	: 1;
  uint32_t	updcal	: 1;
  uint32_t		: 6;
  uint32_t	timevsel	: 2;
  uint32_t		: 6;
  uint32_t	calevsel	: 2;
  uint32_t		: 14;
};

#define RTC_MR_HRMOD     	(1 << 0)

struct __struct_RTC_MR
{
  uint32_t	hrmod	: 1;
  uint32_t		: 31;
};

#define RTC_TIMR_SEC(x)  	((x) << 0)
#define RTC_TIMR_SEC_m   	0x0000007f
#define RTC_TIMR_SEC_v(x)	(((x) >> 0) & 0x7f)
#define RTC_TIMR_MIN(x)  	((x) << 8)
#define RTC_TIMR_MIN_m   	0x00007f00
#define RTC_TIMR_MIN_v(x)	(((x) >> 8) & 0x7f)
#define RTC_TIMR_HOUR(x)  	((x) << 16)
#define RTC_TIMR_HOUR_m   	0x003f0000
#define RTC_TIMR_HOUR_v(x)	(((x) >> 16) & 0x3f)
#define RTC_TIMR_AMPM     	(1 << 22)

struct __struct_RTC_TIMR
{
  uint32_t	sec	: 7;
  uint32_t		: 1;
  uint32_t	min	: 7;
  uint32_t		: 1;
  uint32_t	hour	: 6;
  uint32_t	ampm	: 1;
  uint32_t		: 9;
};

#define RTC_CALR_CENT(x)  	((x) << 0)
#define RTC_CALR_CENT_m   	0x0000007f
#define RTC_CALR_CENT_v(x)	(((x) >> 0) & 0x7f)
#define RTC_CALR_YEAR(x)  	((x) << 8)
#define RTC_CALR_YEAR_m   	0x0000ff00
#define RTC_CALR_YEAR_v(x)	(((x) >> 8) & 0xff)
#define RTC_CALR_MONTH(x)  	((x) << 16)
#define RTC_CALR_MONTH_m   	0x001f0000
#define RTC_CALR_MONTH_v(x)	(((x) >> 16) & 0x1f)
#define RTC_CALR_DAY(x)  	((x) << 21)
#define RTC_CALR_DAY_m   	0x00e00000
#define RTC_CALR_DAY_v(x)	(((x) >> 21) & 0x7)
#define RTC_CALR_DATE(x)  	((x) << 24)
#define RTC_CALR_DATE_m   	0x3f000000
#define RTC_CALR_DATE_v(x)	(((x) >> 24) & 0x3f)

struct __struct_RTC_CALR
{
  uint32_t	cent	: 7;
  uint32_t		: 1;
  uint32_t	year	: 8;
  uint32_t	month	: 5;
  uint32_t	day	: 3;
  uint32_t	date	: 6;
  uint32_t		: 2;
};

#define RTC_TIMALR_SEC(x)  	((x) << 0)
#define RTC_TIMALR_SEC_m   	0x0000007f
#define RTC_TIMALR_SEC_v(x)	(((x) >> 0) & 0x7f)
#define RTC_TIMALR_SECEN     	(1 << 7)
#define RTC_TIMALR_MIN(x)  	((x) << 8)
#define RTC_TIMALR_MIN_m   	0x00007f00
#define RTC_TIMALR_MIN_v(x)	(((x) >> 8) & 0x7f)
#define RTC_TIMALR_MINEN     	(1 << 15)
#define RTC_TIMALR_HOUR(x)  	((x) << 16)
#define RTC_TIMALR_HOUR_m   	0x003f0000
#define RTC_TIMALR_HOUR_v(x)	(((x) >> 16) & 0x3f)
#define RTC_TIMALR_AMPM     	(1 << 22)
#define RTC_TIMALR_HOUREN     	(1 << 23)

struct __struct_RTC_TIMALR
{
  uint32_t	sec	: 7;
  uint32_t	secen	: 1;
  uint32_t	min	: 7;
  uint32_t	minen	: 1;
  uint32_t	hour	: 6;
  uint32_t	ampm	: 1;
  uint32_t	houren	: 1;
  uint32_t		: 8;
};

#define RTC_CALALR_MONTH(x)  	((x) << 16)
#define RTC_CALALR_MONTH_m   	0x001f0000
#define RTC_CALALR_MONTH_v(x)	(((x) >> 16) & 0x1f)
#define RTC_CALALR_MTHEN     	(1 << 23)
#define RTC_CALALR_DATE(x)  	((x) << 24)
#define RTC_CALALR_DATE_m   	0x3f000000
#define RTC_CALALR_DATE_v(x)	(((x) >> 24) & 0x3f)
#define RTC_CALALR_DATEEN     	(1 << 31)

struct __struct_RTC_CALALR
{
  uint32_t		: 16;
  uint32_t	month	: 5;
  uint32_t		: 2;
  uint32_t	mthen	: 1;
  uint32_t	date	: 6;
  uint32_t		: 1;
  uint32_t	dateen	: 1;
};

#define RTC_SR_ACKUPD     	(1 << 0)
#define RTC_SR_ALARM     	(1 << 1)
#define RTC_SR_SEC     	(1 << 2)
#define RTC_SR_TIMEV     	(1 << 3)
#define RTC_SR_CALEV     	(1 << 4)

struct __struct_RTC_SR
{
  uint32_t	ackupd	: 1;
  uint32_t	alarm	: 1;
  uint32_t	sec	: 1;
  uint32_t	timev	: 1;
  uint32_t	calev	: 1;
  uint32_t		: 27;
};

#define RTC_SCCR_ACKCLR     	(1 << 0)
#define RTC_SCCR_ALRCLR     	(1 << 1)
#define RTC_SCCR_SECCLR     	(1 << 2)
#define RTC_SCCR_TIMCLR     	(1 << 3)
#define RTC_SCCR_CALCLR     	(1 << 4)

struct __struct_RTC_SCCR
{
  uint32_t	ackclr	: 1;
  uint32_t	alrclr	: 1;
  uint32_t	secclr	: 1;
  uint32_t	timclr	: 1;
  uint32_t	calclr	: 1;
  uint32_t		: 27;
};

#define RTC_IER_ACKEN     	(1 << 0)
#define RTC_IER_ALREN     	(1 << 1)
#define RTC_IER_SECEN     	(1 << 2)
#define RTC_IER_TIMEN     	(1 << 3)
#define RTC_IER_CALEN     	(1 << 4)

struct __struct_RTC_IER
{
  uint32_t	acken	: 1;
  uint32_t	alren	: 1;
  uint32_t	secen	: 1;
  uint32_t	timen	: 1;
  uint32_t	calen	: 1;
  uint32_t		: 27;
};

#define RTC_IDR_ACKDIS     	(1 << 0)
#define RTC_IDR_ALRDIS     	(1 << 1)
#define RTC_IDR_SECDIS     	(1 << 2)
#define RTC_IDR_TIMDIS     	(1 << 3)
#define RTC_IDR_CALDIS     	(1 << 4)

struct __struct_RTC_IDR
{
  uint32_t	ackdis	: 1;
  uint32_t	alrdis	: 1;
  uint32_t	secdis	: 1;
  uint32_t	timdis	: 1;
  uint32_t	caldis	: 1;
  uint32_t		: 27;
};

#define RTC_IMR_ACK     	(1 << 0)
#define RTC_IMR_ALR     	(1 << 1)
#define RTC_IMR_SEC     	(1 << 2)
#define RTC_IMR_TIM     	(1 << 3)
#define RTC_IMR_CAL     	(1 << 4)

struct __struct_RTC_IMR
{
  uint32_t	ack	: 1;
  uint32_t	alr	: 1;
  uint32_t	sec	: 1;
  uint32_t	tim	: 1;
  uint32_t	cal	: 1;
  uint32_t		: 27;
};

#define RTC_VER_NVTIM     	(1 << 0)
#define RTC_VER_NVCAL     	(1 << 1)
#define RTC_VER_NVTIMALR     	(1 << 2)
#define RTC_VER_NVCALALR     	(1 << 3)

struct __struct_RTC_VER
{
  uint32_t	nvtim	: 1;
  uint32_t	nvcal	: 1;
  uint32_t	nvtimalr	: 1;
  uint32_t	nvcalalr	: 1;
  uint32_t		: 28;
};

#define RTC_WPMR_WPEN     	(1 << 0)
#define RTC_WPMR_WPKEY(x)  	((x) << 8)
#define RTC_WPMR_WPKEY_m   	0xffffff00
#define RTC_WPMR_WPKEY_v(x)	(((x) >> 8) & 0xffffff)
#define RTC_WPMR_WPKEY_KEY	0x525443

struct __struct_RTC_WPMR
{
  uint32_t	wpen	: 1;
  uint32_t		: 7;
  uint32_t	wpkey	: 24;
};


// GPBR

// SYSTICK
#define SYSTICK_CSR_ENABLE     	(1 << 0)
#define SYSTICK_CSR_TICKINT     	(1 << 1)
#define SYSTICK_CSR_CLKSOURCE     	(1 << 2)
#define SYSTICK_CSR_COUNTFLAG     	(1 << 16)

struct __struct_SYSTICK_CSR
{
  uint32_t	enable	: 1;
  uint32_t	tickint	: 1;
  uint32_t	clksource	: 1;
  uint32_t		: 13;
  uint32_t	countflag	: 1;
  uint32_t		: 15;
};

#define SYSTICK_RVR_RELOAD(x)  	((x) << 0)
#define SYSTICK_RVR_RELOAD_m   	0x00ffffff
#define SYSTICK_RVR_RELOAD_v(x)	(((x) >> 0) & 0xffffff)

struct __struct_SYSTICK_RVR
{
  uint32_t	reload	: 24;
  uint32_t		: 8;
};

#define SYSTICK_CVR_CURRENT(x)  	((x) << 0)
#define SYSTICK_CVR_CURRENT_m   	0x00ffffff
#define SYSTICK_CVR_CURRENT_v(x)	(((x) >> 0) & 0xffffff)

struct __struct_SYSTICK_CVR
{
  uint32_t	current	: 24;
  uint32_t		: 8;
};

#define SYSTICK_CALIB_TENMS(x)  	((x) << 0)
#define SYSTICK_CALIB_TENMS_m   	0x00ffffff
#define SYSTICK_CALIB_TENMS_v(x)	(((x) >> 0) & 0xffffff)
#define SYSTICK_CALIB_SKEW     	(1 << 30)
#define SYSTICK_CALIB_NOREF     	(1 << 31)

struct __struct_SYSTICK_CALIB
{
  uint32_t	tenms	: 24;
  uint32_t		: 6;
  uint32_t	skew	: 1;
  uint32_t	noref	: 1;
};


// SCB
#define SCB_ACTLR_DISMCYCINT     	(1 << 0)
#define SCB_ACTLR_DISDEFWBUF     	(1 << 1)
#define SCB_ACTLR_DISFOLD     	(1 << 2)

struct __struct_SCB_ACTLR
{
  uint32_t	dismcycint	: 1;
  uint32_t	disdefwbuf	: 1;
  uint32_t	disfold	: 1;
  uint32_t		: 29;
};

#define SCB_CPUID_REVISION(x)  	((x) << 0)
#define SCB_CPUID_REVISION_m   	0x0000000f
#define SCB_CPUID_REVISION_v(x)	(((x) >> 0) & 0xf)
#define SCB_CPUID_PARTNO(x)  	((x) << 4)
#define SCB_CPUID_PARTNO_m   	0x0000fff0
#define SCB_CPUID_PARTNO_v(x)	(((x) >> 4) & 0xfff)
#define SCB_CPUID_VARIANT(x)  	((x) << 20)
#define SCB_CPUID_VARIANT_m   	0x00f00000
#define SCB_CPUID_VARIANT_v(x)	(((x) >> 20) & 0xf)
#define SCB_CPUID_IMPLEMENTER(x)  	((x) << 24)
#define SCB_CPUID_IMPLEMENTER_m   	0xff000000
#define SCB_CPUID_IMPLEMENTER_v(x)	(((x) >> 24) & 0xff)

struct __struct_SCB_CPUID
{
  uint32_t	revision	: 4;
  uint32_t	partno	: 12;
  uint32_t		: 4;
  uint32_t	variant	: 4;
  uint32_t	implementer	: 8;
};

#define SCB_ICSR_VECTACTIVE(x)  	((x) << 0)
#define SCB_ICSR_VECTACTIVE_m   	0x000001ff
#define SCB_ICSR_VECTACTIVE_v(x)	(((x) >> 0) & 0x1ff)
#define SCB_ICSR_RETTOBASE     	(1 << 11)
#define SCB_ICSR_VECTPENDING(x)  	((x) << 12)
#define SCB_ICSR_VECTPENDING_m   	0x003ff000
#define SCB_ICSR_VECTPENDING_v(x)	(((x) >> 12) & 0x3ff)
#define SCB_ICSR_ISRPENDING     	(1 << 22)
#define SCB_ICSR_PENDSTCLR     	(1 << 25)
#define SCB_ICSR_PENDSTSET     	(1 << 26)
#define SCB_ICSR_PENDSVCLR     	(1 << 27)
#define SCB_ICSR_PENDSVSET     	(1 << 28)

struct __struct_SCB_ICSR
{
  uint32_t	vectactive	: 9;
  uint32_t		: 2;
  uint32_t	rettobase	: 1;
  uint32_t	vectpending	: 10;
  uint32_t	isrpending	: 1;
  uint32_t		: 2;
  uint32_t	pendstclr	: 1;
  uint32_t	pendstset	: 1;
  uint32_t	pendsvclr	: 1;
  uint32_t	pendsvset	: 1;
  uint32_t		: 3;
};

#define SCB_VTOR_TBLOFF(x)  	((x) << 7)
#define SCB_VTOR_TBLOFF_m   	0x3fffff80
#define SCB_VTOR_TBLOFF_v(x)	(((x) >> 7) & 0x7fffff)

struct __struct_SCB_VTOR
{
  uint32_t		: 7;
  uint32_t	tbloff	: 23;
  uint32_t		: 2;
};

#define SCB_AIRCR_VECTRESET     	(1 << 0)
#define SCB_AIRCR_VECTCLRACTIVE     	(1 << 1)
#define SCB_AIRCR_SYSRESETREQ     	(1 << 2)
#define SCB_AIRCR_PRIGROUP(x)  	((x) << 8)
#define SCB_AIRCR_PRIGROUP_m   	0x00000700
#define SCB_AIRCR_PRIGROUP_v(x)	(((x) >> 8) & 0x7)
#define SCB_AIRCR_ENDIANNESS     	(1 << 15)
#define SCB_AIRCR_VECTKEY(x)  	((x) << 16)
#define SCB_AIRCR_VECTKEY_m   	0xffff0000
#define SCB_AIRCR_VECTKEY_v(x)	(((x) >> 16) & 0xffff)
#define SCB_AIRCR_VECTKEY_KEY	0x5fa

struct __struct_SCB_AIRCR
{
  uint32_t	vectreset	: 1;
  uint32_t	vectclractive	: 1;
  uint32_t	sysresetreq	: 1;
  uint32_t		: 5;
  uint32_t	prigroup	: 3;
  uint32_t		: 4;
  uint32_t	endianness	: 1;
  uint32_t	vectkey	: 16;
};

#define SCB_SCR_SLEEPONEXIT     	(1 << 1)
#define SCB_SCR_SLEEPDEEP     	(1 << 2)
#define SCB_SCR_SEVONPEND     	(1 << 4)

struct __struct_SCB_SCR
{
  uint32_t		: 1;
  uint32_t	sleeponexit	: 1;
  uint32_t	sleepdeep	: 1;
  uint32_t		: 1;
  uint32_t	sevonpend	: 1;
  uint32_t		: 27;
};

#define SCB_CCR_NONBASETHRDENA     	(1 << 0)
#define SCB_CCR_USERSETMPEND     	(1 << 1)
#define SCB_CCR_UNALIGN_TRP     	(1 << 3)
#define SCB_CCR_DIV_0_TRP     	(1 << 4)
#define SCB_CCR_BFHFNMIGN     	(1 << 8)
#define SCB_CCR_STKALIGN     	(1 << 9)

struct __struct_SCB_CCR
{
  uint32_t	nonbasethrdena	: 1;
  uint32_t	usersetmpend	: 1;
  uint32_t		: 1;
  uint32_t	unalign_trp	: 1;
  uint32_t	div_0_trp	: 1;
  uint32_t		: 3;
  uint32_t	bfhfnmign	: 1;
  uint32_t	stkalign	: 1;
  uint32_t		: 22;
};

#define SCB_SHPR1_PRI_4(x)  	((x) << 0)
#define SCB_SHPR1_PRI_4_m   	0x000000ff
#define SCB_SHPR1_PRI_4_v(x)	(((x) >> 0) & 0xff)
#define SCB_SHPR1_PRI_5(x)  	((x) << 8)
#define SCB_SHPR1_PRI_5_m   	0x0000ff00
#define SCB_SHPR1_PRI_5_v(x)	(((x) >> 8) & 0xff)
#define SCB_SHPR1_PRI_6(x)  	((x) << 16)
#define SCB_SHPR1_PRI_6_m   	0x00ff0000
#define SCB_SHPR1_PRI_6_v(x)	(((x) >> 16) & 0xff)

struct __struct_SCB_SHPR1
{
  uint32_t	pri_4	: 8;
  uint32_t	pri_5	: 8;
  uint32_t	pri_6	: 8;
  uint32_t		: 8;
};

#define SCB_SHPR2_PRI_11(x)  	((x) << 24)
#define SCB_SHPR2_PRI_11_m   	0xff000000
#define SCB_SHPR2_PRI_11_v(x)	(((x) >> 24) & 0xff)

struct __struct_SCB_SHPR2
{
  uint32_t		: 24;
  uint32_t	pri_11	: 8;
};

#define SCB_SHPR3_PRI_14(x)  	((x) << 16)
#define SCB_SHPR3_PRI_14_m   	0x00ff0000
#define SCB_SHPR3_PRI_14_v(x)	(((x) >> 16) & 0xff)
#define SCB_SHPR3_PRI_15(x)  	((x) << 24)
#define SCB_SHPR3_PRI_15_m   	0xff000000
#define SCB_SHPR3_PRI_15_v(x)	(((x) >> 24) & 0xff)

struct __struct_SCB_SHPR3
{
  uint32_t		: 16;
  uint32_t	pri_14	: 8;
  uint32_t	pri_15	: 8;
};

#define SCB_SHCSR_MEMFAULTACT     	(1 << 0)
#define SCB_SHCSR_BUSFAULTACT     	(1 << 1)
#define SCB_SHCSR_USGFAULTACT     	(1 << 3)
#define SCB_SHCSR_SVCALLACT     	(1 << 7)
#define SCB_SHCSR_MONITORACT     	(1 << 8)
#define SCB_SHCSR_PENDSVACT     	(1 << 10)
#define SCB_SHCSR_SYSTICKACT     	(1 << 11)
#define SCB_SHCSR_USGFAULTPENDED     	(1 << 12)
#define SCB_SHCSR_MEMFAULTPENDED     	(1 << 13)
#define SCB_SHCSR_BUSFAULTPENDED     	(1 << 14)
#define SCB_SHCSR_SVCALLPENDED     	(1 << 15)
#define SCB_SHCSR_MEMFAULTENA     	(1 << 16)
#define SCB_SHCSR_BUSFAULTENA     	(1 << 17)
#define SCB_SHCSR_USGFAULTENA     	(1 << 18)

struct __struct_SCB_SHCSR
{
  uint32_t	memfaultact	: 1;
  uint32_t	busfaultact	: 1;
  uint32_t		: 1;
  uint32_t	usgfaultact	: 1;
  uint32_t		: 3;
  uint32_t	svcallact	: 1;
  uint32_t	monitoract	: 1;
  uint32_t		: 1;
  uint32_t	pendsvact	: 1;
  uint32_t	systickact	: 1;
  uint32_t	usgfaultpended	: 1;
  uint32_t	memfaultpended	: 1;
  uint32_t	busfaultpended	: 1;
  uint32_t	svcallpended	: 1;
  uint32_t	memfaultena	: 1;
  uint32_t	busfaultena	: 1;
  uint32_t	usgfaultena	: 1;
  uint32_t		: 13;
};

#define SCB_CFSR_IACCVIOL     	(1 << 0)
#define SCB_CFSR_DACCVIOL     	(1 << 1)
#define SCB_CFSR_MUNSTKERR     	(1 << 3)
#define SCB_CFSR_MSTKERR     	(1 << 4)
#define SCB_CFSR_MMARVALID     	(1 << 7)
#define SCB_CFSR_IBUSERR     	(1 << 8)
#define SCB_CFSR_PRECISERR     	(1 << 9)
#define SCB_CFSR_IMPRECISERR     	(1 << 10)
#define SCB_CFSR_UNSTKERR     	(1 << 11)
#define SCB_CFSR_STKERR     	(1 << 12)
#define SCB_CFSR_BFARVALID     	(1 << 15)
#define SCB_CFSR_UNDEFINSTR     	(1 << 16)
#define SCB_CFSR_INVSTATE     	(1 << 17)
#define SCB_CFSR_INVPC     	(1 << 18)
#define SCB_CFSR_NOCP     	(1 << 19)
#define SCB_CFSR_UNALIGNED     	(1 << 24)
#define SCB_CFSR_DIVBYZERO     	(1 << 25)

struct __struct_SCB_CFSR
{
  uint32_t	iaccviol	: 1;
  uint32_t	daccviol	: 1;
  uint32_t		: 1;
  uint32_t	munstkerr	: 1;
  uint32_t	mstkerr	: 1;
  uint32_t		: 2;
  uint32_t	mmarvalid	: 1;
  uint32_t	ibuserr	: 1;
  uint32_t	preciserr	: 1;
  uint32_t	impreciserr	: 1;
  uint32_t	unstkerr	: 1;
  uint32_t	stkerr	: 1;
  uint32_t		: 2;
  uint32_t	bfarvalid	: 1;
  uint32_t	undefinstr	: 1;
  uint32_t	invstate	: 1;
  uint32_t	invpc	: 1;
  uint32_t	nocp	: 1;
  uint32_t		: 4;
  uint32_t	unaligned	: 1;
  uint32_t	divbyzero	: 1;
  uint32_t		: 6;
};

#define SCB_HFSR_VECTTBL     	(1 << 1)
#define SCB_HFSR_FORCED     	(1 << 30)
#define SCB_HFSR_DEBUGEVT     	(1 << 31)

struct __struct_SCB_HFSR
{
  uint32_t		: 1;
  uint32_t	vecttbl	: 1;
  uint32_t		: 28;
  uint32_t	forced	: 1;
  uint32_t	debugevt	: 1;
};


// NVIC
#define NVIC_ISER0_SUPC     	(1 << 0)
#define NVIC_ISER0_RSTC     	(1 << 1)
#define NVIC_ISER0_RTC     	(1 << 2)
#define NVIC_ISER0_RTT     	(1 << 3)
#define NVIC_ISER0_WDT     	(1 << 4)
#define NVIC_ISER0_PMC     	(1 << 5)
#define NVIC_ISER0_EEFC0     	(1 << 6)
#define NVIC_ISER0_EEFC1     	(1 << 7)
#define NVIC_ISER0_UART     	(1 << 8)
#define NVIC_ISER0_SMC     	(1 << 9)
#define NVIC_ISER0_PIOA     	(1 << 10)
#define NVIC_ISER0_PIOB     	(1 << 11)
#define NVIC_ISER0_PIOC     	(1 << 12)
#define NVIC_ISER0_USART0     	(1 << 13)
#define NVIC_ISER0_USART1     	(1 << 14)
#define NVIC_ISER0_USART2     	(1 << 15)
#define NVIC_ISER0_USART3     	(1 << 16)
#define NVIC_ISER0_HSMCI     	(1 << 17)
#define NVIC_ISER0_TWI0     	(1 << 18)
#define NVIC_ISER0_TWI1     	(1 << 19)
#define NVIC_ISER0_SPI     	(1 << 20)
#define NVIC_ISER0_SSC     	(1 << 21)
#define NVIC_ISER0_TC0     	(1 << 22)
#define NVIC_ISER0_TC1     	(1 << 23)
#define NVIC_ISER0_TC2     	(1 << 24)
#define NVIC_ISER0_PWM     	(1 << 25)
#define NVIC_ISER0_ADC12B     	(1 << 26)
#define NVIC_ISER0_ADC     	(1 << 27)
#define NVIC_ISER0_DMAC     	(1 << 28)
#define NVIC_ISER0_UDPHS     	(1 << 29)

struct __struct_NVIC_ISER0
{
  uint32_t	supc	: 1;
  uint32_t	rstc	: 1;
  uint32_t	rtc	: 1;
  uint32_t	rtt	: 1;
  uint32_t	wdt	: 1;
  uint32_t	pmc	: 1;
  uint32_t	eefc0	: 1;
  uint32_t	eefc1	: 1;
  uint32_t	uart	: 1;
  uint32_t	smc	: 1;
  uint32_t	pioa	: 1;
  uint32_t	piob	: 1;
  uint32_t	pioc	: 1;
  uint32_t	usart0	: 1;
  uint32_t	usart1	: 1;
  uint32_t	usart2	: 1;
  uint32_t	usart3	: 1;
  uint32_t	hsmci	: 1;
  uint32_t	twi0	: 1;
  uint32_t	twi1	: 1;
  uint32_t	spi	: 1;
  uint32_t	ssc	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	pwm	: 1;
  uint32_t	adc12b	: 1;
  uint32_t	adc	: 1;
  uint32_t	dmac	: 1;
  uint32_t	udphs	: 1;
  uint32_t		: 2;
};

#define NVIC_ICER0_SUPC     	(1 << 0)
#define NVIC_ICER0_RSTC     	(1 << 1)
#define NVIC_ICER0_RTC     	(1 << 2)
#define NVIC_ICER0_RTT     	(1 << 3)
#define NVIC_ICER0_WDT     	(1 << 4)
#define NVIC_ICER0_PMC     	(1 << 5)
#define NVIC_ICER0_EEFC0     	(1 << 6)
#define NVIC_ICER0_EEFC1     	(1 << 7)
#define NVIC_ICER0_UART     	(1 << 8)
#define NVIC_ICER0_SMC     	(1 << 9)
#define NVIC_ICER0_PIOA     	(1 << 10)
#define NVIC_ICER0_PIOB     	(1 << 11)
#define NVIC_ICER0_PIOC     	(1 << 12)
#define NVIC_ICER0_USART0     	(1 << 13)
#define NVIC_ICER0_USART1     	(1 << 14)
#define NVIC_ICER0_USART2     	(1 << 15)
#define NVIC_ICER0_USART3     	(1 << 16)
#define NVIC_ICER0_HSMCI     	(1 << 17)
#define NVIC_ICER0_TWI0     	(1 << 18)
#define NVIC_ICER0_TWI1     	(1 << 19)
#define NVIC_ICER0_SPI     	(1 << 20)
#define NVIC_ICER0_SSC     	(1 << 21)
#define NVIC_ICER0_TC0     	(1 << 22)
#define NVIC_ICER0_TC1     	(1 << 23)
#define NVIC_ICER0_TC2     	(1 << 24)
#define NVIC_ICER0_PWM     	(1 << 25)
#define NVIC_ICER0_ADC12B     	(1 << 26)
#define NVIC_ICER0_ADC     	(1 << 27)
#define NVIC_ICER0_DMAC     	(1 << 28)
#define NVIC_ICER0_UDPHS     	(1 << 29)

struct __struct_NVIC_ICER0
{
  uint32_t	supc	: 1;
  uint32_t	rstc	: 1;
  uint32_t	rtc	: 1;
  uint32_t	rtt	: 1;
  uint32_t	wdt	: 1;
  uint32_t	pmc	: 1;
  uint32_t	eefc0	: 1;
  uint32_t	eefc1	: 1;
  uint32_t	uart	: 1;
  uint32_t	smc	: 1;
  uint32_t	pioa	: 1;
  uint32_t	piob	: 1;
  uint32_t	pioc	: 1;
  uint32_t	usart0	: 1;
  uint32_t	usart1	: 1;
  uint32_t	usart2	: 1;
  uint32_t	usart3	: 1;
  uint32_t	hsmci	: 1;
  uint32_t	twi0	: 1;
  uint32_t	twi1	: 1;
  uint32_t	spi	: 1;
  uint32_t	ssc	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	pwm	: 1;
  uint32_t	adc12b	: 1;
  uint32_t	adc	: 1;
  uint32_t	dmac	: 1;
  uint32_t	udphs	: 1;
  uint32_t		: 2;
};

#define NVIC_ISPR0_SUPC     	(1 << 0)
#define NVIC_ISPR0_RSTC     	(1 << 1)
#define NVIC_ISPR0_RTC     	(1 << 2)
#define NVIC_ISPR0_RTT     	(1 << 3)
#define NVIC_ISPR0_WDT     	(1 << 4)
#define NVIC_ISPR0_PMC     	(1 << 5)
#define NVIC_ISPR0_EEFC0     	(1 << 6)
#define NVIC_ISPR0_EEFC1     	(1 << 7)
#define NVIC_ISPR0_UART     	(1 << 8)
#define NVIC_ISPR0_SMC     	(1 << 9)
#define NVIC_ISPR0_PIOA     	(1 << 10)
#define NVIC_ISPR0_PIOB     	(1 << 11)
#define NVIC_ISPR0_PIOC     	(1 << 12)
#define NVIC_ISPR0_USART0     	(1 << 13)
#define NVIC_ISPR0_USART1     	(1 << 14)
#define NVIC_ISPR0_USART2     	(1 << 15)
#define NVIC_ISPR0_USART3     	(1 << 16)
#define NVIC_ISPR0_HSMCI     	(1 << 17)
#define NVIC_ISPR0_TWI0     	(1 << 18)
#define NVIC_ISPR0_TWI1     	(1 << 19)
#define NVIC_ISPR0_SPI     	(1 << 20)
#define NVIC_ISPR0_SSC     	(1 << 21)
#define NVIC_ISPR0_TC0     	(1 << 22)
#define NVIC_ISPR0_TC1     	(1 << 23)
#define NVIC_ISPR0_TC2     	(1 << 24)
#define NVIC_ISPR0_PWM     	(1 << 25)
#define NVIC_ISPR0_ADC12B     	(1 << 26)
#define NVIC_ISPR0_ADC     	(1 << 27)
#define NVIC_ISPR0_DMAC     	(1 << 28)
#define NVIC_ISPR0_UDPHS     	(1 << 29)

struct __struct_NVIC_ISPR0
{
  uint32_t	supc	: 1;
  uint32_t	rstc	: 1;
  uint32_t	rtc	: 1;
  uint32_t	rtt	: 1;
  uint32_t	wdt	: 1;
  uint32_t	pmc	: 1;
  uint32_t	eefc0	: 1;
  uint32_t	eefc1	: 1;
  uint32_t	uart	: 1;
  uint32_t	smc	: 1;
  uint32_t	pioa	: 1;
  uint32_t	piob	: 1;
  uint32_t	pioc	: 1;
  uint32_t	usart0	: 1;
  uint32_t	usart1	: 1;
  uint32_t	usart2	: 1;
  uint32_t	usart3	: 1;
  uint32_t	hsmci	: 1;
  uint32_t	twi0	: 1;
  uint32_t	twi1	: 1;
  uint32_t	spi	: 1;
  uint32_t	ssc	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	pwm	: 1;
  uint32_t	adc12b	: 1;
  uint32_t	adc	: 1;
  uint32_t	dmac	: 1;
  uint32_t	udphs	: 1;
  uint32_t		: 2;
};

#define NVIC_ICPR0_SUPC     	(1 << 0)
#define NVIC_ICPR0_RSTC     	(1 << 1)
#define NVIC_ICPR0_RTC     	(1 << 2)
#define NVIC_ICPR0_RTT     	(1 << 3)
#define NVIC_ICPR0_WDT     	(1 << 4)
#define NVIC_ICPR0_PMC     	(1 << 5)
#define NVIC_ICPR0_EEFC0     	(1 << 6)
#define NVIC_ICPR0_EEFC1     	(1 << 7)
#define NVIC_ICPR0_UART     	(1 << 8)
#define NVIC_ICPR0_SMC     	(1 << 9)
#define NVIC_ICPR0_PIOA     	(1 << 10)
#define NVIC_ICPR0_PIOB     	(1 << 11)
#define NVIC_ICPR0_PIOC     	(1 << 12)
#define NVIC_ICPR0_USART0     	(1 << 13)
#define NVIC_ICPR0_USART1     	(1 << 14)
#define NVIC_ICPR0_USART2     	(1 << 15)
#define NVIC_ICPR0_USART3     	(1 << 16)
#define NVIC_ICPR0_HSMCI     	(1 << 17)
#define NVIC_ICPR0_TWI0     	(1 << 18)
#define NVIC_ICPR0_TWI1     	(1 << 19)
#define NVIC_ICPR0_SPI     	(1 << 20)
#define NVIC_ICPR0_SSC     	(1 << 21)
#define NVIC_ICPR0_TC0     	(1 << 22)
#define NVIC_ICPR0_TC1     	(1 << 23)
#define NVIC_ICPR0_TC2     	(1 << 24)
#define NVIC_ICPR0_PWM     	(1 << 25)
#define NVIC_ICPR0_ADC12B     	(1 << 26)
#define NVIC_ICPR0_ADC     	(1 << 27)
#define NVIC_ICPR0_DMAC     	(1 << 28)
#define NVIC_ICPR0_UDPHS     	(1 << 29)

struct __struct_NVIC_ICPR0
{
  uint32_t	supc	: 1;
  uint32_t	rstc	: 1;
  uint32_t	rtc	: 1;
  uint32_t	rtt	: 1;
  uint32_t	wdt	: 1;
  uint32_t	pmc	: 1;
  uint32_t	eefc0	: 1;
  uint32_t	eefc1	: 1;
  uint32_t	uart	: 1;
  uint32_t	smc	: 1;
  uint32_t	pioa	: 1;
  uint32_t	piob	: 1;
  uint32_t	pioc	: 1;
  uint32_t	usart0	: 1;
  uint32_t	usart1	: 1;
  uint32_t	usart2	: 1;
  uint32_t	usart3	: 1;
  uint32_t	hsmci	: 1;
  uint32_t	twi0	: 1;
  uint32_t	twi1	: 1;
  uint32_t	spi	: 1;
  uint32_t	ssc	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	pwm	: 1;
  uint32_t	adc12b	: 1;
  uint32_t	adc	: 1;
  uint32_t	dmac	: 1;
  uint32_t	udphs	: 1;
  uint32_t		: 2;
};

#define NVIC_IABR0_SUPC     	(1 << 0)
#define NVIC_IABR0_RSTC     	(1 << 1)
#define NVIC_IABR0_RTC     	(1 << 2)
#define NVIC_IABR0_RTT     	(1 << 3)
#define NVIC_IABR0_WDT     	(1 << 4)
#define NVIC_IABR0_PMC     	(1 << 5)
#define NVIC_IABR0_EEFC0     	(1 << 6)
#define NVIC_IABR0_EEFC1     	(1 << 7)
#define NVIC_IABR0_UART     	(1 << 8)
#define NVIC_IABR0_SMC     	(1 << 9)
#define NVIC_IABR0_PIOA     	(1 << 10)
#define NVIC_IABR0_PIOB     	(1 << 11)
#define NVIC_IABR0_PIOC     	(1 << 12)
#define NVIC_IABR0_USART0     	(1 << 13)
#define NVIC_IABR0_USART1     	(1 << 14)
#define NVIC_IABR0_USART2     	(1 << 15)
#define NVIC_IABR0_USART3     	(1 << 16)
#define NVIC_IABR0_HSMCI     	(1 << 17)
#define NVIC_IABR0_TWI0     	(1 << 18)
#define NVIC_IABR0_TWI1     	(1 << 19)
#define NVIC_IABR0_SPI     	(1 << 20)
#define NVIC_IABR0_SSC     	(1 << 21)
#define NVIC_IABR0_TC0     	(1 << 22)
#define NVIC_IABR0_TC1     	(1 << 23)
#define NVIC_IABR0_TC2     	(1 << 24)
#define NVIC_IABR0_PWM     	(1 << 25)
#define NVIC_IABR0_ADC12B     	(1 << 26)
#define NVIC_IABR0_ADC     	(1 << 27)
#define NVIC_IABR0_DMAC     	(1 << 28)
#define NVIC_IABR0_UDPHS     	(1 << 29)

struct __struct_NVIC_IABR0
{
  uint32_t	supc	: 1;
  uint32_t	rstc	: 1;
  uint32_t	rtc	: 1;
  uint32_t	rtt	: 1;
  uint32_t	wdt	: 1;
  uint32_t	pmc	: 1;
  uint32_t	eefc0	: 1;
  uint32_t	eefc1	: 1;
  uint32_t	uart	: 1;
  uint32_t	smc	: 1;
  uint32_t	pioa	: 1;
  uint32_t	piob	: 1;
  uint32_t	pioc	: 1;
  uint32_t	usart0	: 1;
  uint32_t	usart1	: 1;
  uint32_t	usart2	: 1;
  uint32_t	usart3	: 1;
  uint32_t	hsmci	: 1;
  uint32_t	twi0	: 1;
  uint32_t	twi1	: 1;
  uint32_t	spi	: 1;
  uint32_t	ssc	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	pwm	: 1;
  uint32_t	adc12b	: 1;
  uint32_t	adc	: 1;
  uint32_t	dmac	: 1;
  uint32_t	udphs	: 1;
  uint32_t		: 2;
};

#define NVIC_IPR0_SUPC(x)  	((x) << 4)
#define NVIC_IPR0_SUPC_m   	0x000000f0
#define NVIC_IPR0_SUPC_v(x)	(((x) >> 4) & 0xf)
#define NVIC_IPR0_RSTC(x)  	((x) << 12)
#define NVIC_IPR0_RSTC_m   	0x0000f000
#define NVIC_IPR0_RSTC_v(x)	(((x) >> 12) & 0xf)
#define NVIC_IPR0_RTC(x)  	((x) << 20)
#define NVIC_IPR0_RTC_m   	0x00f00000
#define NVIC_IPR0_RTC_v(x)	(((x) >> 20) & 0xf)
#define NVIC_IPR0_RTT(x)  	((x) << 28)
#define NVIC_IPR0_RTT_m   	0xf0000000
#define NVIC_IPR0_RTT_v(x)	(((x) >> 28) & 0xf)

struct __struct_NVIC_IPR0
{
  uint32_t		: 4;
  uint32_t	supc	: 4;
  uint32_t		: 4;
  uint32_t	rstc	: 4;
  uint32_t		: 4;
  uint32_t	rtc	: 4;
  uint32_t		: 4;
  uint32_t	rtt	: 4;
};

#define NVIC_IPR1_WDT(x)  	((x) << 4)
#define NVIC_IPR1_WDT_m   	0x000000f0
#define NVIC_IPR1_WDT_v(x)	(((x) >> 4) & 0xf)
#define NVIC_IPR1_PMC(x)  	((x) << 12)
#define NVIC_IPR1_PMC_m   	0x0000f000
#define NVIC_IPR1_PMC_v(x)	(((x) >> 12) & 0xf)
#define NVIC_IPR1_EEFC0(x)  	((x) << 20)
#define NVIC_IPR1_EEFC0_m   	0x00f00000
#define NVIC_IPR1_EEFC0_v(x)	(((x) >> 20) & 0xf)
#define NVIC_IPR1_EEFC1(x)  	((x) << 28)
#define NVIC_IPR1_EEFC1_m   	0xf0000000
#define NVIC_IPR1_EEFC1_v(x)	(((x) >> 28) & 0xf)

struct __struct_NVIC_IPR1
{
  uint32_t		: 4;
  uint32_t	wdt	: 4;
  uint32_t		: 4;
  uint32_t	pmc	: 4;
  uint32_t		: 4;
  uint32_t	eefc0	: 4;
  uint32_t		: 4;
  uint32_t	eefc1	: 4;
};

#define NVIC_IPR2_UART(x)  	((x) << 4)
#define NVIC_IPR2_UART_m   	0x000000f0
#define NVIC_IPR2_UART_v(x)	(((x) >> 4) & 0xf)
#define NVIC_IPR2_SMC(x)  	((x) << 12)
#define NVIC_IPR2_SMC_m   	0x0000f000
#define NVIC_IPR2_SMC_v(x)	(((x) >> 12) & 0xf)
#define NVIC_IPR2_PIOA(x)  	((x) << 20)
#define NVIC_IPR2_PIOA_m   	0x00f00000
#define NVIC_IPR2_PIOA_v(x)	(((x) >> 20) & 0xf)
#define NVIC_IPR2_PIOB(x)  	((x) << 28)
#define NVIC_IPR2_PIOB_m   	0xf0000000
#define NVIC_IPR2_PIOB_v(x)	(((x) >> 28) & 0xf)

struct __struct_NVIC_IPR2
{
  uint32_t		: 4;
  uint32_t	uart	: 4;
  uint32_t		: 4;
  uint32_t	smc	: 4;
  uint32_t		: 4;
  uint32_t	pioa	: 4;
  uint32_t		: 4;
  uint32_t	piob	: 4;
};

#define NVIC_IPR3_PIOC(x)  	((x) << 4)
#define NVIC_IPR3_PIOC_m   	0x000000f0
#define NVIC_IPR3_PIOC_v(x)	(((x) >> 4) & 0xf)
#define NVIC_IPR3_USART0(x)  	((x) << 12)
#define NVIC_IPR3_USART0_m   	0x0000f000
#define NVIC_IPR3_USART0_v(x)	(((x) >> 12) & 0xf)
#define NVIC_IPR3_USART1(x)  	((x) << 20)
#define NVIC_IPR3_USART1_m   	0x00f00000
#define NVIC_IPR3_USART1_v(x)	(((x) >> 20) & 0xf)
#define NVIC_IPR3_USART2(x)  	((x) << 28)
#define NVIC_IPR3_USART2_m   	0xf0000000
#define NVIC_IPR3_USART2_v(x)	(((x) >> 28) & 0xf)

struct __struct_NVIC_IPR3
{
  uint32_t		: 4;
  uint32_t	pioc	: 4;
  uint32_t		: 4;
  uint32_t	usart0	: 4;
  uint32_t		: 4;
  uint32_t	usart1	: 4;
  uint32_t		: 4;
  uint32_t	usart2	: 4;
};

#define NVIC_IPR4_USART3(x)  	((x) << 4)
#define NVIC_IPR4_USART3_m   	0x000000f0
#define NVIC_IPR4_USART3_v(x)	(((x) >> 4) & 0xf)
#define NVIC_IPR4_HSMCI(x)  	((x) << 12)
#define NVIC_IPR4_HSMCI_m   	0x0000f000
#define NVIC_IPR4_HSMCI_v(x)	(((x) >> 12) & 0xf)
#define NVIC_IPR4_TWI0(x)  	((x) << 20)
#define NVIC_IPR4_TWI0_m   	0x00f00000
#define NVIC_IPR4_TWI0_v(x)	(((x) >> 20) & 0xf)
#define NVIC_IPR4_TWI1(x)  	((x) << 28)
#define NVIC_IPR4_TWI1_m   	0xf0000000
#define NVIC_IPR4_TWI1_v(x)	(((x) >> 28) & 0xf)

struct __struct_NVIC_IPR4
{
  uint32_t		: 4;
  uint32_t	usart3	: 4;
  uint32_t		: 4;
  uint32_t	hsmci	: 4;
  uint32_t		: 4;
  uint32_t	twi0	: 4;
  uint32_t		: 4;
  uint32_t	twi1	: 4;
};

#define NVIC_IPR5_SPI(x)  	((x) << 4)
#define NVIC_IPR5_SPI_m   	0x000000f0
#define NVIC_IPR5_SPI_v(x)	(((x) >> 4) & 0xf)
#define NVIC_IPR5_SSC(x)  	((x) << 12)
#define NVIC_IPR5_SSC_m   	0x0000f000
#define NVIC_IPR5_SSC_v(x)	(((x) >> 12) & 0xf)
#define NVIC_IPR5_TC0(x)  	((x) << 20)
#define NVIC_IPR5_TC0_m   	0x00f00000
#define NVIC_IPR5_TC0_v(x)	(((x) >> 20) & 0xf)
#define NVIC_IPR5_TC1(x)  	((x) << 28)
#define NVIC_IPR5_TC1_m   	0xf0000000
#define NVIC_IPR5_TC1_v(x)	(((x) >> 28) & 0xf)

struct __struct_NVIC_IPR5
{
  uint32_t		: 4;
  uint32_t	spi	: 4;
  uint32_t		: 4;
  uint32_t	ssc	: 4;
  uint32_t		: 4;
  uint32_t	tc0	: 4;
  uint32_t		: 4;
  uint32_t	tc1	: 4;
};

#define NVIC_IPR6_TC2(x)  	((x) << 4)
#define NVIC_IPR6_TC2_m   	0x000000f0
#define NVIC_IPR6_TC2_v(x)	(((x) >> 4) & 0xf)
#define NVIC_IPR6_PWM(x)  	((x) << 12)
#define NVIC_IPR6_PWM_m   	0x0000f000
#define NVIC_IPR6_PWM_v(x)	(((x) >> 12) & 0xf)
#define NVIC_IPR6_ADC12B(x)  	((x) << 20)
#define NVIC_IPR6_ADC12B_m   	0x00f00000
#define NVIC_IPR6_ADC12B_v(x)	(((x) >> 20) & 0xf)
#define NVIC_IPR6_ADC(x)  	((x) << 28)
#define NVIC_IPR6_ADC_m   	0xf0000000
#define NVIC_IPR6_ADC_v(x)	(((x) >> 28) & 0xf)

struct __struct_NVIC_IPR6
{
  uint32_t		: 4;
  uint32_t	tc2	: 4;
  uint32_t		: 4;
  uint32_t	pwm	: 4;
  uint32_t		: 4;
  uint32_t	adc12b	: 4;
  uint32_t		: 4;
  uint32_t	adc	: 4;
};

#define NVIC_IPR7_DMAC(x)  	((x) << 4)
#define NVIC_IPR7_DMAC_m   	0x000000f0
#define NVIC_IPR7_DMAC_v(x)	(((x) >> 4) & 0xf)
#define NVIC_IPR7_UDPHS(x)  	((x) << 12)
#define NVIC_IPR7_UDPHS_m   	0x0000f000
#define NVIC_IPR7_UDPHS_v(x)	(((x) >> 12) & 0xf)

struct __struct_NVIC_IPR7
{
  uint32_t		: 4;
  uint32_t	dmac	: 4;
  uint32_t		: 4;
  uint32_t	udphs	: 4;
  uint32_t		: 4;
  uint32_t		: 4;
  uint32_t		: 4;
  uint32_t		: 4;
};

#define NVIC_STIR_INTID(x)  	((x) << 0)
#define NVIC_STIR_INTID_m   	0x000001ff
#define NVIC_STIR_INTID_v(x)	(((x) >> 0) & 0x1ff)

struct __struct_NVIC_STIR
{
  uint32_t	intid	: 9;
  uint32_t		: 23;
};


// MPU
#define MPU_TYPE_SEPARATE     	(1 << 0)
#define MPU_TYPE_DREGION(x)  	((x) << 8)
#define MPU_TYPE_DREGION_m   	0x0000ff00
#define MPU_TYPE_DREGION_v(x)	(((x) >> 8) & 0xff)
#define MPU_TYPE_IREGION(x)  	((x) << 16)
#define MPU_TYPE_IREGION_m   	0x00ff0000
#define MPU_TYPE_IREGION_v(x)	(((x) >> 16) & 0xff)

struct __struct_MPU_TYPE
{
  uint32_t	separate	: 1;
  uint32_t		: 7;
  uint32_t	dregion	: 8;
  uint32_t	iregion	: 8;
  uint32_t		: 8;
};

#define MPU_CTRL_ENABLE     	(1 << 0)
#define MPU_CTRL_HFNMIENA     	(1 << 1)
#define MPU_CTRL_PRIVDEFENA     	(1 << 2)

struct __struct_MPU_CTRL
{
  uint32_t	enable	: 1;
  uint32_t	hfnmiena	: 1;
  uint32_t	privdefena	: 1;
  uint32_t		: 29;
};

#define MPU_RNR_REGION(x)  	((x) << 0)
#define MPU_RNR_REGION_m   	0x000000ff
#define MPU_RNR_REGION_v(x)	(((x) >> 0) & 0xff)

struct __struct_MPU_RNR
{
  uint32_t	region	: 8;
  uint32_t		: 24;
};

#define MPU_RBAR_REGION(x)  	((x) << 0)
#define MPU_RBAR_REGION_m   	0x0000000f
#define MPU_RBAR_REGION_v(x)	(((x) >> 0) & 0xf)
#define MPU_RBAR_VALID     	(1 << 4)
#define MPU_RBAR_ADDR(x)  	((x) << 5)
#define MPU_RBAR_ADDR_m   	0xffffffe0
#define MPU_RBAR_ADDR_v(x)	(((x) >> 5) & 0x7ffffff)

struct __struct_MPU_RBAR
{
  uint32_t	region	: 4;
  uint32_t	valid	: 1;
  uint32_t	addr	: 27;
};

#define MPU_RASR_ENABLE     	(1 << 0)
#define MPU_RASR_SIZE(x)  	((x) << 1)
#define MPU_RASR_SIZE_m   	0x0000003e
#define MPU_RASR_SIZE_v(x)	(((x) >> 1) & 0x1f)
#define MPU_RASR_SRD(x)  	((x) << 8)
#define MPU_RASR_SRD_m   	0x0000ff00
#define MPU_RASR_SRD_v(x)	(((x) >> 8) & 0xff)
#define MPU_RASR_B     	(1 << 16)
#define MPU_RASR_C     	(1 << 17)
#define MPU_RASR_S     	(1 << 18)
#define MPU_RASR_TEX(x)  	((x) << 19)
#define MPU_RASR_TEX_m   	0x00380000
#define MPU_RASR_TEX_v(x)	(((x) >> 19) & 0x7)
#define MPU_RASR_AP(x)  	((x) << 24)
#define MPU_RASR_AP_m   	0x07000000
#define MPU_RASR_AP_v(x)	(((x) >> 24) & 0x7)
#define MPU_RASR_XN     	(1 << 28)

struct __struct_MPU_RASR
{
  uint32_t	enable	: 1;
  uint32_t	size	: 5;
  uint32_t		: 2;
  uint32_t	srd	: 8;
  uint32_t	b	: 1;
  uint32_t	c	: 1;
  uint32_t	s	: 1;
  uint32_t	tex	: 3;
  uint32_t		: 2;
  uint32_t	ap	: 3;
  uint32_t		: 1;
  uint32_t	xn	: 1;
  uint32_t		: 3;
};

// Registers definitions

// HSMCI

#define HSMCI_BASE_ADDR	0x40000000

#define HSMCI_CR  	MMIO_REG(0x40000000, uint32_t)
#define HSMCI_CR_s	MMIO_REG(0x40000000, struct __struct_HSMCI_CR)

#define HSMCI_MR  	MMIO_REG(0x40000004, uint32_t)
#define HSMCI_MR_s	MMIO_REG(0x40000004, struct __struct_HSMCI_MR)

#define HSMCI_DTOR  	MMIO_REG(0x40000008, uint32_t)
#define HSMCI_DTOR_s	MMIO_REG(0x40000008, struct __struct_HSMCI_DTOR)

#define HSMCI_SDCR  	MMIO_REG(0x4000000c, uint32_t)
#define HSMCI_SDCR_s	MMIO_REG(0x4000000c, struct __struct_HSMCI_SDCR)

#define HSMCI_ARGR  	MMIO_REG(0x40000010, uint32_t)

#define HSMCI_CMDR  	MMIO_REG(0x40000014, uint32_t)
#define HSMCI_CMDR_s	MMIO_REG(0x40000014, struct __struct_HSMCI_CMDR)

#define HSMCI_BLKR  	MMIO_REG(0x40000018, uint32_t)
#define HSMCI_BLKR_s	MMIO_REG(0x40000018, struct __struct_HSMCI_BLKR)

#define HSMCI_CSTOR  	MMIO_REG(0x4000001c, uint32_t)
#define HSMCI_CSTOR_s	MMIO_REG(0x4000001c, struct __struct_HSMCI_CSTOR)

#define HSMCI_RSPR(i)  	MMIO_REG(0x40000020 + (i)*4, uint32_t)

#define HSMCI_RDR  	MMIO_REG(0x40000030, uint32_t)

#define HSMCI_TDR  	MMIO_REG(0x40000034, uint32_t)

#define HSMCI_SR  	MMIO_REG(0x40000040, uint32_t)
#define HSMCI_SR_s	MMIO_REG(0x40000040, struct __struct_HSMCI_SR)

#define HSMCI_IER  	MMIO_REG(0x40000044, uint32_t)
#define HSMCI_IER_s	MMIO_REG(0x40000044, struct __struct_HSMCI_IER)

#define HSMCI_IDR  	MMIO_REG(0x40000048, uint32_t)
#define HSMCI_IDR_s	MMIO_REG(0x40000048, struct __struct_HSMCI_IDR)

#define HSMCI_IMR  	MMIO_REG(0x4000004c, uint32_t)
#define HSMCI_IMR_s	MMIO_REG(0x4000004c, struct __struct_HSMCI_IMR)

#define HSMCI_DMA  	MMIO_REG(0x40000050, uint32_t)
#define HSMCI_DMA_s	MMIO_REG(0x40000050, struct __struct_HSMCI_DMA)

#define HSMCI_CFG  	MMIO_REG(0x40000054, uint32_t)
#define HSMCI_CFG_s	MMIO_REG(0x40000054, struct __struct_HSMCI_CFG)

#define HSMCI_WPMR  	MMIO_REG(0x400000e4, uint32_t)
#define HSMCI_WPMR_s	MMIO_REG(0x400000e4, struct __struct_HSMCI_WPMR)

#define HSMCI_WPSR  	MMIO_REG(0x400000e8, uint32_t)
#define HSMCI_WPSR_s	MMIO_REG(0x400000e8, struct __struct_HSMCI_WPSR)

#define HSMCI_FIFO0(i)  	MMIO_REG(0x40000200 + (i)*4, uint32_t)


// SSC

#define SSC_BASE_ADDR	0x40004000

#define SSC_CR  	MMIO_REG(0x40004000, uint32_t)
#define SSC_CR_s	MMIO_REG(0x40004000, struct __struct_SSC_CR)

#define SSC_CMR  	MMIO_REG(0x40004004, uint32_t)
#define SSC_CMR_s	MMIO_REG(0x40004004, struct __struct_SSC_CMR)

#define SSC_RCMR  	MMIO_REG(0x40004010, uint32_t)
#define SSC_RCMR_s	MMIO_REG(0x40004010, struct __struct_SSC_RCMR)

#define SSC_RFMR  	MMIO_REG(0x40004014, uint32_t)
#define SSC_RFMR_s	MMIO_REG(0x40004014, struct __struct_SSC_RFMR)

#define SSC_TCMR  	MMIO_REG(0x40004018, uint32_t)
#define SSC_TCMR_s	MMIO_REG(0x40004018, struct __struct_SSC_TCMR)

#define SSC_TFMR  	MMIO_REG(0x4000401c, uint32_t)
#define SSC_TFMR_s	MMIO_REG(0x4000401c, struct __struct_SSC_TFMR)

#define SSC_RHR  	MMIO_REG(0x40004020, uint32_t)

#define SSC_THR  	MMIO_REG(0x40004024, uint32_t)

#define SSC_RSHR  	MMIO_REG(0x40004030, uint32_t)
#define SSC_RSHR_s	MMIO_REG(0x40004030, struct __struct_SSC_RSHR)

#define SSC_TSHR  	MMIO_REG(0x40004034, uint32_t)
#define SSC_TSHR_s	MMIO_REG(0x40004034, struct __struct_SSC_TSHR)

#define SSC_RC0R  	MMIO_REG(0x40004038, uint32_t)
#define SSC_RC0R_s	MMIO_REG(0x40004038, struct __struct_SSC_RC0R)

#define SSC_RC1R  	MMIO_REG(0x4000403c, uint32_t)
#define SSC_RC1R_s	MMIO_REG(0x4000403c, struct __struct_SSC_RC1R)

#define SSC_SR  	MMIO_REG(0x40004040, uint32_t)
#define SSC_SR_s	MMIO_REG(0x40004040, struct __struct_SSC_SR)

#define SSC_IER  	MMIO_REG(0x40004044, uint32_t)
#define SSC_IER_s	MMIO_REG(0x40004044, struct __struct_SSC_IER)

#define SSC_IDR  	MMIO_REG(0x40004048, uint32_t)
#define SSC_IDR_s	MMIO_REG(0x40004048, struct __struct_SSC_IDR)

#define SSC_IMR  	MMIO_REG(0x4000404c, uint32_t)
#define SSC_IMR_s	MMIO_REG(0x4000404c, struct __struct_SSC_IMR)

#define SSC_WPMR  	MMIO_REG(0x400040e4, uint32_t)
#define SSC_WPMR_s	MMIO_REG(0x400040e4, struct __struct_SSC_WPMR)

#define SSC_WPSR  	MMIO_REG(0x400040e8, uint32_t)
#define SSC_WPSR_s	MMIO_REG(0x400040e8, struct __struct_SSC_WPSR)


// SPI

#define SPI_BASE_ADDR	0x40008000

#define SPI_CR  	MMIO_REG(0x40008000, uint32_t)
#define SPI_CR_s	MMIO_REG(0x40008000, struct __struct_SPI_CR)

#define SPI_MR  	MMIO_REG(0x40008004, uint32_t)
#define SPI_MR_s	MMIO_REG(0x40008004, struct __struct_SPI_MR)

#define SPI_RDR  	MMIO_REG(0x40008008, uint32_t)
#define SPI_RDR_s	MMIO_REG(0x40008008, struct __struct_SPI_RDR)

#define SPI_TDR  	MMIO_REG(0x4000800c, uint32_t)
#define SPI_TDR_s	MMIO_REG(0x4000800c, struct __struct_SPI_TDR)

#define SPI_SR  	MMIO_REG(0x40008010, uint32_t)
#define SPI_SR_s	MMIO_REG(0x40008010, struct __struct_SPI_SR)

#define SPI_IER  	MMIO_REG(0x40008014, uint32_t)
#define SPI_IER_s	MMIO_REG(0x40008014, struct __struct_SPI_IER)

#define SPI_IDR  	MMIO_REG(0x40008018, uint32_t)
#define SPI_IDR_s	MMIO_REG(0x40008018, struct __struct_SPI_IDR)

#define SPI_IMR  	MMIO_REG(0x4000801c, uint32_t)
#define SPI_IMR_s	MMIO_REG(0x4000801c, struct __struct_SPI_IMR)

#define SPI_CSR(i)  	MMIO_REG(0x40008030 + (i)*4, uint32_t)
#define SPI_CSR_s(i)	MMIO_REG(0x40008030 + (i)*4, struct __struct_SPI_CSR)

#define SPI_WPMR  	MMIO_REG(0x400080e4, uint32_t)
#define SPI_WPMR_s	MMIO_REG(0x400080e4, struct __struct_SPI_WPMR)

#define SPI_WPSR  	MMIO_REG(0x400080e8, uint32_t)
#define SPI_WPSR_s	MMIO_REG(0x400080e8, struct __struct_SPI_WPSR)


// TC0

#define TC0_BASE_ADDR	0x40080000

#define TC0_CCR(i)  	MMIO_REG(0x40080000 + (i)*64, uint32_t)
#define TC0_CCR_s(i)	MMIO_REG(0x40080000 + (i)*64, struct __struct_TC_CCR)

#define TC0_CMR(i)  	MMIO_REG(0x40080004 + (i)*64, uint32_t)
#define TC0_CMR_s(i)	MMIO_REG(0x40080004 + (i)*64, struct __struct_TC_CMR)

#define TC0_CV(i)  	MMIO_REG(0x40080010 + (i)*64, uint32_t)

#define TC0_RA(i)  	MMIO_REG(0x40080014 + (i)*64, uint32_t)

#define TC0_RB(i)  	MMIO_REG(0x40080018 + (i)*64, uint32_t)

#define TC0_RC(i)  	MMIO_REG(0x4008001c + (i)*64, uint32_t)

#define TC0_SR(i)  	MMIO_REG(0x40080020 + (i)*64, uint32_t)
#define TC0_SR_s(i)	MMIO_REG(0x40080020 + (i)*64, struct __struct_TC_SR)

#define TC0_IER(i)  	MMIO_REG(0x40080024 + (i)*64, uint32_t)
#define TC0_IER_s(i)	MMIO_REG(0x40080024 + (i)*64, struct __struct_TC_IER)

#define TC0_IDR(i)  	MMIO_REG(0x40080028 + (i)*64, uint32_t)
#define TC0_IDR_s(i)	MMIO_REG(0x40080028 + (i)*64, struct __struct_TC_IDR)

#define TC0_IMR(i)  	MMIO_REG(0x4008002c + (i)*64, uint32_t)
#define TC0_IMR_s(i)	MMIO_REG(0x4008002c + (i)*64, struct __struct_TC_IMR)

#define TC0_BCR  	MMIO_REG(0x400800c0, uint32_t)
#define TC0_BCR_s	MMIO_REG(0x400800c0, struct __struct_TC_BCR)

#define TC0_BMR  	MMIO_REG(0x400800c4, uint32_t)
#define TC0_BMR_s	MMIO_REG(0x400800c4, struct __struct_TC_BMR)

#define TC0_QIER  	MMIO_REG(0x400800c8, uint32_t)
#define TC0_QIER_s	MMIO_REG(0x400800c8, struct __struct_TC_QIER)

#define TC0_QIDR  	MMIO_REG(0x400800cc, uint32_t)
#define TC0_QIDR_s	MMIO_REG(0x400800cc, struct __struct_TC_QIDR)

#define TC0_QIMR  	MMIO_REG(0x400800d0, uint32_t)
#define TC0_QIMR_s	MMIO_REG(0x400800d0, struct __struct_TC_QIMR)

#define TC0_QISR  	MMIO_REG(0x400800d4, uint32_t)
#define TC0_QISR_s	MMIO_REG(0x400800d4, struct __struct_TC_QISR)


// TC1

#define TC1_BASE_ADDR	0x40080040

#define TC1_CCR(i)  	MMIO_REG(0x40080040 + (i)*64, uint32_t)
#define TC1_CCR_s(i)	MMIO_REG(0x40080040 + (i)*64, struct __struct_TC_CCR)

#define TC1_CMR(i)  	MMIO_REG(0x40080044 + (i)*64, uint32_t)
#define TC1_CMR_s(i)	MMIO_REG(0x40080044 + (i)*64, struct __struct_TC_CMR)

#define TC1_CV(i)  	MMIO_REG(0x40080050 + (i)*64, uint32_t)

#define TC1_RA(i)  	MMIO_REG(0x40080054 + (i)*64, uint32_t)

#define TC1_RB(i)  	MMIO_REG(0x40080058 + (i)*64, uint32_t)

#define TC1_RC(i)  	MMIO_REG(0x4008005c + (i)*64, uint32_t)

#define TC1_SR(i)  	MMIO_REG(0x40080060 + (i)*64, uint32_t)
#define TC1_SR_s(i)	MMIO_REG(0x40080060 + (i)*64, struct __struct_TC_SR)

#define TC1_IER(i)  	MMIO_REG(0x40080064 + (i)*64, uint32_t)
#define TC1_IER_s(i)	MMIO_REG(0x40080064 + (i)*64, struct __struct_TC_IER)

#define TC1_IDR(i)  	MMIO_REG(0x40080068 + (i)*64, uint32_t)
#define TC1_IDR_s(i)	MMIO_REG(0x40080068 + (i)*64, struct __struct_TC_IDR)

#define TC1_IMR(i)  	MMIO_REG(0x4008006c + (i)*64, uint32_t)
#define TC1_IMR_s(i)	MMIO_REG(0x4008006c + (i)*64, struct __struct_TC_IMR)

#define TC1_BCR  	MMIO_REG(0x40080100, uint32_t)
#define TC1_BCR_s	MMIO_REG(0x40080100, struct __struct_TC_BCR)

#define TC1_BMR  	MMIO_REG(0x40080104, uint32_t)
#define TC1_BMR_s	MMIO_REG(0x40080104, struct __struct_TC_BMR)

#define TC1_QIER  	MMIO_REG(0x40080108, uint32_t)
#define TC1_QIER_s	MMIO_REG(0x40080108, struct __struct_TC_QIER)

#define TC1_QIDR  	MMIO_REG(0x4008010c, uint32_t)
#define TC1_QIDR_s	MMIO_REG(0x4008010c, struct __struct_TC_QIDR)

#define TC1_QIMR  	MMIO_REG(0x40080110, uint32_t)
#define TC1_QIMR_s	MMIO_REG(0x40080110, struct __struct_TC_QIMR)

#define TC1_QISR  	MMIO_REG(0x40080114, uint32_t)
#define TC1_QISR_s	MMIO_REG(0x40080114, struct __struct_TC_QISR)


// TC2

#define TC2_BASE_ADDR	0x40080080

#define TC2_CCR(i)  	MMIO_REG(0x40080080 + (i)*64, uint32_t)
#define TC2_CCR_s(i)	MMIO_REG(0x40080080 + (i)*64, struct __struct_TC_CCR)

#define TC2_CMR(i)  	MMIO_REG(0x40080084 + (i)*64, uint32_t)
#define TC2_CMR_s(i)	MMIO_REG(0x40080084 + (i)*64, struct __struct_TC_CMR)

#define TC2_CV(i)  	MMIO_REG(0x40080090 + (i)*64, uint32_t)

#define TC2_RA(i)  	MMIO_REG(0x40080094 + (i)*64, uint32_t)

#define TC2_RB(i)  	MMIO_REG(0x40080098 + (i)*64, uint32_t)

#define TC2_RC(i)  	MMIO_REG(0x4008009c + (i)*64, uint32_t)

#define TC2_SR(i)  	MMIO_REG(0x400800a0 + (i)*64, uint32_t)
#define TC2_SR_s(i)	MMIO_REG(0x400800a0 + (i)*64, struct __struct_TC_SR)

#define TC2_IER(i)  	MMIO_REG(0x400800a4 + (i)*64, uint32_t)
#define TC2_IER_s(i)	MMIO_REG(0x400800a4 + (i)*64, struct __struct_TC_IER)

#define TC2_IDR(i)  	MMIO_REG(0x400800a8 + (i)*64, uint32_t)
#define TC2_IDR_s(i)	MMIO_REG(0x400800a8 + (i)*64, struct __struct_TC_IDR)

#define TC2_IMR(i)  	MMIO_REG(0x400800ac + (i)*64, uint32_t)
#define TC2_IMR_s(i)	MMIO_REG(0x400800ac + (i)*64, struct __struct_TC_IMR)

#define TC2_BCR  	MMIO_REG(0x40080140, uint32_t)
#define TC2_BCR_s	MMIO_REG(0x40080140, struct __struct_TC_BCR)

#define TC2_BMR  	MMIO_REG(0x40080144, uint32_t)
#define TC2_BMR_s	MMIO_REG(0x40080144, struct __struct_TC_BMR)

#define TC2_QIER  	MMIO_REG(0x40080148, uint32_t)
#define TC2_QIER_s	MMIO_REG(0x40080148, struct __struct_TC_QIER)

#define TC2_QIDR  	MMIO_REG(0x4008014c, uint32_t)
#define TC2_QIDR_s	MMIO_REG(0x4008014c, struct __struct_TC_QIDR)

#define TC2_QIMR  	MMIO_REG(0x40080150, uint32_t)
#define TC2_QIMR_s	MMIO_REG(0x40080150, struct __struct_TC_QIMR)

#define TC2_QISR  	MMIO_REG(0x40080154, uint32_t)
#define TC2_QISR_s	MMIO_REG(0x40080154, struct __struct_TC_QISR)


// TWI0

#define TWI0_BASE_ADDR	0x40084000

#define TWI0_CR  	MMIO_REG(0x40084000, uint32_t)
#define TWI0_CR_s	MMIO_REG(0x40084000, struct __struct_TWI_CR)

#define TWI0_MMR  	MMIO_REG(0x40084004, uint32_t)
#define TWI0_MMR_s	MMIO_REG(0x40084004, struct __struct_TWI_MMR)

#define TWI0_SMR  	MMIO_REG(0x40084008, uint32_t)
#define TWI0_SMR_s	MMIO_REG(0x40084008, struct __struct_TWI_SMR)

#define TWI0_IADR  	MMIO_REG(0x4008400c, uint32_t)
#define TWI0_IADR_s	MMIO_REG(0x4008400c, struct __struct_TWI_IADR)

#define TWI0_CWGR  	MMIO_REG(0x40084010, uint32_t)
#define TWI0_CWGR_s	MMIO_REG(0x40084010, struct __struct_TWI_CWGR)

#define TWI0_SR  	MMIO_REG(0x40084020, uint32_t)
#define TWI0_SR_s	MMIO_REG(0x40084020, struct __struct_TWI_SR)

#define TWI0_IER  	MMIO_REG(0x40084024, uint32_t)
#define TWI0_IER_s	MMIO_REG(0x40084024, struct __struct_TWI_IER)

#define TWI0_IDR  	MMIO_REG(0x40084028, uint32_t)
#define TWI0_IDR_s	MMIO_REG(0x40084028, struct __struct_TWI_IDR)

#define TWI0_IMR  	MMIO_REG(0x4008402c, uint32_t)
#define TWI0_IMR_s	MMIO_REG(0x4008402c, struct __struct_TWI_IMR)

#define TWI0_RHR  	MMIO_REG(0x40084030, uint32_t)
#define TWI0_RHR_s	MMIO_REG(0x40084030, struct __struct_TWI_RHR)

#define TWI0_THR  	MMIO_REG(0x40084034, uint32_t)
#define TWI0_THR_s	MMIO_REG(0x40084034, struct __struct_TWI_THR)


// TWI0_PDC

#define TWI0_PDC_BASE_ADDR	0x40084100

#define TWI0_PDC_RPR  	MMIO_REG(0x40084100, uint32_t)

#define TWI0_PDC_RCR  	MMIO_REG(0x40084104, uint32_t)

#define TWI0_PDC_TPR  	MMIO_REG(0x40084108, uint32_t)

#define TWI0_PDC_TCR  	MMIO_REG(0x4008410c, uint32_t)

#define TWI0_PDC_RNPR  	MMIO_REG(0x40084110, uint32_t)

#define TWI0_PDC_RNCR  	MMIO_REG(0x40084114, uint32_t)

#define TWI0_PDC_TNPR  	MMIO_REG(0x40084118, uint32_t)

#define TWI0_PDC_TNCR  	MMIO_REG(0x4008411c, uint32_t)

#define TWI0_PDC_PTCR  	MMIO_REG(0x40084120, uint32_t)
#define TWI0_PDC_PTCR_s	MMIO_REG(0x40084120, struct __struct_PDC_PTCR)

#define TWI0_PDC_PTSR  	MMIO_REG(0x40084124, uint32_t)
#define TWI0_PDC_PTSR_s	MMIO_REG(0x40084124, struct __struct_PDC_PTSR)


// TWI1

#define TWI1_BASE_ADDR	0x40088000

#define TWI1_CR  	MMIO_REG(0x40088000, uint32_t)
#define TWI1_CR_s	MMIO_REG(0x40088000, struct __struct_TWI_CR)

#define TWI1_MMR  	MMIO_REG(0x40088004, uint32_t)
#define TWI1_MMR_s	MMIO_REG(0x40088004, struct __struct_TWI_MMR)

#define TWI1_SMR  	MMIO_REG(0x40088008, uint32_t)
#define TWI1_SMR_s	MMIO_REG(0x40088008, struct __struct_TWI_SMR)

#define TWI1_IADR  	MMIO_REG(0x4008800c, uint32_t)
#define TWI1_IADR_s	MMIO_REG(0x4008800c, struct __struct_TWI_IADR)

#define TWI1_CWGR  	MMIO_REG(0x40088010, uint32_t)
#define TWI1_CWGR_s	MMIO_REG(0x40088010, struct __struct_TWI_CWGR)

#define TWI1_SR  	MMIO_REG(0x40088020, uint32_t)
#define TWI1_SR_s	MMIO_REG(0x40088020, struct __struct_TWI_SR)

#define TWI1_IER  	MMIO_REG(0x40088024, uint32_t)
#define TWI1_IER_s	MMIO_REG(0x40088024, struct __struct_TWI_IER)

#define TWI1_IDR  	MMIO_REG(0x40088028, uint32_t)
#define TWI1_IDR_s	MMIO_REG(0x40088028, struct __struct_TWI_IDR)

#define TWI1_IMR  	MMIO_REG(0x4008802c, uint32_t)
#define TWI1_IMR_s	MMIO_REG(0x4008802c, struct __struct_TWI_IMR)

#define TWI1_RHR  	MMIO_REG(0x40088030, uint32_t)
#define TWI1_RHR_s	MMIO_REG(0x40088030, struct __struct_TWI_RHR)

#define TWI1_THR  	MMIO_REG(0x40088034, uint32_t)
#define TWI1_THR_s	MMIO_REG(0x40088034, struct __struct_TWI_THR)


// TWI1_PDC

#define TWI1_PDC_BASE_ADDR	0x40088100

#define TWI1_PDC_RPR  	MMIO_REG(0x40088100, uint32_t)

#define TWI1_PDC_RCR  	MMIO_REG(0x40088104, uint32_t)

#define TWI1_PDC_TPR  	MMIO_REG(0x40088108, uint32_t)

#define TWI1_PDC_TCR  	MMIO_REG(0x4008810c, uint32_t)

#define TWI1_PDC_RNPR  	MMIO_REG(0x40088110, uint32_t)

#define TWI1_PDC_RNCR  	MMIO_REG(0x40088114, uint32_t)

#define TWI1_PDC_TNPR  	MMIO_REG(0x40088118, uint32_t)

#define TWI1_PDC_TNCR  	MMIO_REG(0x4008811c, uint32_t)

#define TWI1_PDC_PTCR  	MMIO_REG(0x40088120, uint32_t)
#define TWI1_PDC_PTCR_s	MMIO_REG(0x40088120, struct __struct_PDC_PTCR)

#define TWI1_PDC_PTSR  	MMIO_REG(0x40088124, uint32_t)
#define TWI1_PDC_PTSR_s	MMIO_REG(0x40088124, struct __struct_PDC_PTSR)


// PWM

#define PWM_BASE_ADDR	0x4008c000

#define PWM_CLK  	MMIO_REG(0x4008c000, uint32_t)
#define PWM_CLK_s	MMIO_REG(0x4008c000, struct __struct_PWM_CLK)

#define PWM_ENA  	MMIO_REG(0x4008c004, uint32_t)
#define PWM_ENA_s	MMIO_REG(0x4008c004, struct __struct_PWM_ENA)

#define PWM_DIS  	MMIO_REG(0x4008c008, uint32_t)
#define PWM_DIS_s	MMIO_REG(0x4008c008, struct __struct_PWM_DIS)

#define PWM_SR  	MMIO_REG(0x4008c00c, uint32_t)
#define PWM_SR_s	MMIO_REG(0x4008c00c, struct __struct_PWM_SR)

#define PWM_IER1  	MMIO_REG(0x4008c010, uint32_t)
#define PWM_IER1_s	MMIO_REG(0x4008c010, struct __struct_PWM_IER1)

#define PWM_IDR1  	MMIO_REG(0x4008c014, uint32_t)
#define PWM_IDR1_s	MMIO_REG(0x4008c014, struct __struct_PWM_IDR1)

#define PWM_IMR1  	MMIO_REG(0x4008c018, uint32_t)
#define PWM_IMR1_s	MMIO_REG(0x4008c018, struct __struct_PWM_IMR1)

#define PWM_ISR1  	MMIO_REG(0x4008c01c, uint32_t)
#define PWM_ISR1_s	MMIO_REG(0x4008c01c, struct __struct_PWM_ISR1)

#define PWM_SCM  	MMIO_REG(0x4008c020, uint32_t)
#define PWM_SCM_s	MMIO_REG(0x4008c020, struct __struct_PWM_SCM)

#define PWM_SCUC  	MMIO_REG(0x4008c028, uint32_t)
#define PWM_SCUC_s	MMIO_REG(0x4008c028, struct __struct_PWM_SCUC)

#define PWM_SCUP  	MMIO_REG(0x4008c02c, uint32_t)
#define PWM_SCUP_s	MMIO_REG(0x4008c02c, struct __struct_PWM_SCUP)

#define PWM_SCUPUPD  	MMIO_REG(0x4008c030, uint32_t)
#define PWM_SCUPUPD_s	MMIO_REG(0x4008c030, struct __struct_PWM_SCUPUPD)

#define PWM_IER2  	MMIO_REG(0x4008c034, uint32_t)
#define PWM_IER2_s	MMIO_REG(0x4008c034, struct __struct_PWM_IER2)

#define PWM_IDR2  	MMIO_REG(0x4008c038, uint32_t)
#define PWM_IDR2_s	MMIO_REG(0x4008c038, struct __struct_PWM_IDR2)

#define PWM_IMR2  	MMIO_REG(0x4008c03c, uint32_t)
#define PWM_IMR2_s	MMIO_REG(0x4008c03c, struct __struct_PWM_IMR2)

#define PWM_ISR2  	MMIO_REG(0x4008c040, uint32_t)
#define PWM_ISR2_s	MMIO_REG(0x4008c040, struct __struct_PWM_ISR2)

#define PWM_OOV  	MMIO_REG(0x4008c044, uint32_t)
#define PWM_OOV_s	MMIO_REG(0x4008c044, struct __struct_PWM_OOV)

#define PWM_OS  	MMIO_REG(0x4008c048, uint32_t)
#define PWM_OS_s	MMIO_REG(0x4008c048, struct __struct_PWM_OS)

#define PWM_OSS  	MMIO_REG(0x4008c04c, uint32_t)
#define PWM_OSS_s	MMIO_REG(0x4008c04c, struct __struct_PWM_OSS)

#define PWM_OSC  	MMIO_REG(0x4008c050, uint32_t)
#define PWM_OSC_s	MMIO_REG(0x4008c050, struct __struct_PWM_OSC)

#define PWM_OSSUPD  	MMIO_REG(0x4008c054, uint32_t)
#define PWM_OSSUPD_s	MMIO_REG(0x4008c054, struct __struct_PWM_OSSUPD)

#define PWM_OSCUPD  	MMIO_REG(0x4008c058, uint32_t)
#define PWM_OSCUPD_s	MMIO_REG(0x4008c058, struct __struct_PWM_OSCUPD)

#define PWM_FMR  	MMIO_REG(0x4008c05c, uint32_t)
#define PWM_FMR_s	MMIO_REG(0x4008c05c, struct __struct_PWM_FMR)

#define PWM_FSR  	MMIO_REG(0x4008c060, uint32_t)
#define PWM_FSR_s	MMIO_REG(0x4008c060, struct __struct_PWM_FSR)

#define PWM_FCR  	MMIO_REG(0x4008c064, uint32_t)
#define PWM_FCR_s	MMIO_REG(0x4008c064, struct __struct_PWM_FCR)

#define PWM_FPV  	MMIO_REG(0x4008c068, uint32_t)
#define PWM_FPV_s	MMIO_REG(0x4008c068, struct __struct_PWM_FPV)

#define PWM_FPE  	MMIO_REG(0x4008c06c, uint32_t)
#define PWM_FPE_s	MMIO_REG(0x4008c06c, struct __struct_PWM_FPE)

#define PWM_ELMR(i)  	MMIO_REG(0x4008c07c + (i)*4, uint32_t)
#define PWM_ELMR_s(i)	MMIO_REG(0x4008c07c + (i)*4, struct __struct_PWM_ELMR)

#define PWM_WPCR  	MMIO_REG(0x4008c0e4, uint32_t)
#define PWM_WPCR_s	MMIO_REG(0x4008c0e4, struct __struct_PWM_WPCR)

#define PWM_WPSR  	MMIO_REG(0x4008c0e8, uint32_t)
#define PWM_WPSR_s	MMIO_REG(0x4008c0e8, struct __struct_PWM_WPSR)

#define PWM_CMPV(i)  	MMIO_REG(0x4008c130 + (i)*12, uint32_t)
#define PWM_CMPV_s(i)	MMIO_REG(0x4008c130 + (i)*12, struct __struct_PWM_CMPV)

#define PWM_CMPVUPD(i)  	MMIO_REG(0x4008c134 + (i)*12, uint32_t)
#define PWM_CMPVUPD_s(i)	MMIO_REG(0x4008c134 + (i)*12, struct __struct_PWM_CMPVUPD)

#define PWM_CMPM(i)  	MMIO_REG(0x4008c138 + (i)*12, uint32_t)
#define PWM_CMPM_s(i)	MMIO_REG(0x4008c138 + (i)*12, struct __struct_PWM_CMPM)

#define PWM_CMPMUPD(i)  	MMIO_REG(0x4008c13c + (i)*12, uint32_t)
#define PWM_CMPMUPD_s(i)	MMIO_REG(0x4008c13c + (i)*12, struct __struct_PWM_CMPMUPD)

#define PWM_CMR(i)  	MMIO_REG(0x4008c200 + (i)*32, uint32_t)
#define PWM_CMR_s(i)	MMIO_REG(0x4008c200 + (i)*32, struct __struct_PWM_CMR)

#define PWM_CDTY(i)  	MMIO_REG(0x4008c204 + (i)*32, uint32_t)

#define PWM_CDTYUPD(i)  	MMIO_REG(0x4008c208 + (i)*32, uint32_t)

#define PWM_CPRD(i)  	MMIO_REG(0x4008c20c + (i)*32, uint32_t)

#define PWM_CPRDUPD(i)  	MMIO_REG(0x4008c210 + (i)*32, uint32_t)

#define PWM_CCNT(i)  	MMIO_REG(0x4008c214 + (i)*32, uint32_t)

#define PWM_DT(i)  	MMIO_REG(0x4008c218 + (i)*32, uint32_t)
#define PWM_DT_s(i)	MMIO_REG(0x4008c218 + (i)*32, struct __struct_PWM_DT)

#define PWM_DTUPD(i)  	MMIO_REG(0x4008c21c + (i)*32, uint32_t)
#define PWM_DTUPD_s(i)	MMIO_REG(0x4008c21c + (i)*32, struct __struct_PWM_DTUPD)


// PWM_PDC

#define PWM_PDC_BASE_ADDR	0x4008c100

#define PWM_PDC_RPR  	MMIO_REG(0x4008c100, uint32_t)

#define PWM_PDC_RCR  	MMIO_REG(0x4008c104, uint32_t)

#define PWM_PDC_TPR  	MMIO_REG(0x4008c108, uint32_t)

#define PWM_PDC_TCR  	MMIO_REG(0x4008c10c, uint32_t)

#define PWM_PDC_RNPR  	MMIO_REG(0x4008c110, uint32_t)

#define PWM_PDC_RNCR  	MMIO_REG(0x4008c114, uint32_t)

#define PWM_PDC_TNPR  	MMIO_REG(0x4008c118, uint32_t)

#define PWM_PDC_TNCR  	MMIO_REG(0x4008c11c, uint32_t)

#define PWM_PDC_PTCR  	MMIO_REG(0x4008c120, uint32_t)
#define PWM_PDC_PTCR_s	MMIO_REG(0x4008c120, struct __struct_PDC_PTCR)

#define PWM_PDC_PTSR  	MMIO_REG(0x4008c124, uint32_t)
#define PWM_PDC_PTSR_s	MMIO_REG(0x4008c124, struct __struct_PDC_PTSR)


// USART0

#define USART0_BASE_ADDR	0x40090000

#define USART0_CR  	MMIO_REG(0x40090000, uint32_t)
#define USART0_CR_s	MMIO_REG(0x40090000, struct __struct_USART_CR)

#define USART0_MR  	MMIO_REG(0x40090004, uint32_t)
#define USART0_MR_s	MMIO_REG(0x40090004, struct __struct_USART_MR)

#define USART0_IER  	MMIO_REG(0x40090008, uint32_t)
#define USART0_IER_s	MMIO_REG(0x40090008, struct __struct_USART_IER)

#define USART0_IDR  	MMIO_REG(0x4009000c, uint32_t)
#define USART0_IDR_s	MMIO_REG(0x4009000c, struct __struct_USART_IDR)

#define USART0_IMR  	MMIO_REG(0x40090010, uint32_t)
#define USART0_IMR_s	MMIO_REG(0x40090010, struct __struct_USART_IMR)

#define USART0_CSR  	MMIO_REG(0x40090014, uint32_t)
#define USART0_CSR_s	MMIO_REG(0x40090014, struct __struct_USART_CSR)

#define USART0_RHR  	MMIO_REG(0x40090018, uint32_t)
#define USART0_RHR_s	MMIO_REG(0x40090018, struct __struct_USART_RHR)

#define USART0_THR  	MMIO_REG(0x4009001c, uint32_t)
#define USART0_THR_s	MMIO_REG(0x4009001c, struct __struct_USART_THR)

#define USART0_BRGR  	MMIO_REG(0x40090020, uint32_t)
#define USART0_BRGR_s	MMIO_REG(0x40090020, struct __struct_USART_BRGR)

#define USART0_RTOR  	MMIO_REG(0x40090024, uint32_t)
#define USART0_RTOR_s	MMIO_REG(0x40090024, struct __struct_USART_RTOR)

#define USART0_TTGR  	MMIO_REG(0x40090028, uint32_t)
#define USART0_TTGR_s	MMIO_REG(0x40090028, struct __struct_USART_TTGR)

#define USART0_FIDI  	MMIO_REG(0x40090040, uint32_t)
#define USART0_FIDI_s	MMIO_REG(0x40090040, struct __struct_USART_FIDI)

#define USART0_NER  	MMIO_REG(0x40090044, uint32_t)
#define USART0_NER_s	MMIO_REG(0x40090044, struct __struct_USART_NER)

#define USART0_IF  	MMIO_REG(0x4009004c, uint32_t)
#define USART0_IF_s	MMIO_REG(0x4009004c, struct __struct_USART_IF)

#define USART0_MAN  	MMIO_REG(0x40090050, uint32_t)
#define USART0_MAN_s	MMIO_REG(0x40090050, struct __struct_USART_MAN)

#define USART0_WPMR  	MMIO_REG(0x400900e4, uint32_t)
#define USART0_WPMR_s	MMIO_REG(0x400900e4, struct __struct_USART_WPMR)

#define USART0_WPSR  	MMIO_REG(0x400900e8, uint32_t)
#define USART0_WPSR_s	MMIO_REG(0x400900e8, struct __struct_USART_WPSR)


// USART0_PDC

#define USART0_PDC_BASE_ADDR	0x40090100

#define USART0_PDC_RPR  	MMIO_REG(0x40090100, uint32_t)

#define USART0_PDC_RCR  	MMIO_REG(0x40090104, uint32_t)

#define USART0_PDC_TPR  	MMIO_REG(0x40090108, uint32_t)

#define USART0_PDC_TCR  	MMIO_REG(0x4009010c, uint32_t)

#define USART0_PDC_RNPR  	MMIO_REG(0x40090110, uint32_t)

#define USART0_PDC_RNCR  	MMIO_REG(0x40090114, uint32_t)

#define USART0_PDC_TNPR  	MMIO_REG(0x40090118, uint32_t)

#define USART0_PDC_TNCR  	MMIO_REG(0x4009011c, uint32_t)

#define USART0_PDC_PTCR  	MMIO_REG(0x40090120, uint32_t)
#define USART0_PDC_PTCR_s	MMIO_REG(0x40090120, struct __struct_PDC_PTCR)

#define USART0_PDC_PTSR  	MMIO_REG(0x40090124, uint32_t)
#define USART0_PDC_PTSR_s	MMIO_REG(0x40090124, struct __struct_PDC_PTSR)


// USART1

#define USART1_BASE_ADDR	0x40094000

#define USART1_CR  	MMIO_REG(0x40094000, uint32_t)
#define USART1_CR_s	MMIO_REG(0x40094000, struct __struct_USART_CR)

#define USART1_MR  	MMIO_REG(0x40094004, uint32_t)
#define USART1_MR_s	MMIO_REG(0x40094004, struct __struct_USART_MR)

#define USART1_IER  	MMIO_REG(0x40094008, uint32_t)
#define USART1_IER_s	MMIO_REG(0x40094008, struct __struct_USART_IER)

#define USART1_IDR  	MMIO_REG(0x4009400c, uint32_t)
#define USART1_IDR_s	MMIO_REG(0x4009400c, struct __struct_USART_IDR)

#define USART1_IMR  	MMIO_REG(0x40094010, uint32_t)
#define USART1_IMR_s	MMIO_REG(0x40094010, struct __struct_USART_IMR)

#define USART1_CSR  	MMIO_REG(0x40094014, uint32_t)
#define USART1_CSR_s	MMIO_REG(0x40094014, struct __struct_USART_CSR)

#define USART1_RHR  	MMIO_REG(0x40094018, uint32_t)
#define USART1_RHR_s	MMIO_REG(0x40094018, struct __struct_USART_RHR)

#define USART1_THR  	MMIO_REG(0x4009401c, uint32_t)
#define USART1_THR_s	MMIO_REG(0x4009401c, struct __struct_USART_THR)

#define USART1_BRGR  	MMIO_REG(0x40094020, uint32_t)
#define USART1_BRGR_s	MMIO_REG(0x40094020, struct __struct_USART_BRGR)

#define USART1_RTOR  	MMIO_REG(0x40094024, uint32_t)
#define USART1_RTOR_s	MMIO_REG(0x40094024, struct __struct_USART_RTOR)

#define USART1_TTGR  	MMIO_REG(0x40094028, uint32_t)
#define USART1_TTGR_s	MMIO_REG(0x40094028, struct __struct_USART_TTGR)

#define USART1_FIDI  	MMIO_REG(0x40094040, uint32_t)
#define USART1_FIDI_s	MMIO_REG(0x40094040, struct __struct_USART_FIDI)

#define USART1_NER  	MMIO_REG(0x40094044, uint32_t)
#define USART1_NER_s	MMIO_REG(0x40094044, struct __struct_USART_NER)

#define USART1_IF  	MMIO_REG(0x4009404c, uint32_t)
#define USART1_IF_s	MMIO_REG(0x4009404c, struct __struct_USART_IF)

#define USART1_MAN  	MMIO_REG(0x40094050, uint32_t)
#define USART1_MAN_s	MMIO_REG(0x40094050, struct __struct_USART_MAN)

#define USART1_WPMR  	MMIO_REG(0x400940e4, uint32_t)
#define USART1_WPMR_s	MMIO_REG(0x400940e4, struct __struct_USART_WPMR)

#define USART1_WPSR  	MMIO_REG(0x400940e8, uint32_t)
#define USART1_WPSR_s	MMIO_REG(0x400940e8, struct __struct_USART_WPSR)


// USART1_PDC

#define USART1_PDC_BASE_ADDR	0x40094100

#define USART1_PDC_RPR  	MMIO_REG(0x40094100, uint32_t)

#define USART1_PDC_RCR  	MMIO_REG(0x40094104, uint32_t)

#define USART1_PDC_TPR  	MMIO_REG(0x40094108, uint32_t)

#define USART1_PDC_TCR  	MMIO_REG(0x4009410c, uint32_t)

#define USART1_PDC_RNPR  	MMIO_REG(0x40094110, uint32_t)

#define USART1_PDC_RNCR  	MMIO_REG(0x40094114, uint32_t)

#define USART1_PDC_TNPR  	MMIO_REG(0x40094118, uint32_t)

#define USART1_PDC_TNCR  	MMIO_REG(0x4009411c, uint32_t)

#define USART1_PDC_PTCR  	MMIO_REG(0x40094120, uint32_t)
#define USART1_PDC_PTCR_s	MMIO_REG(0x40094120, struct __struct_PDC_PTCR)

#define USART1_PDC_PTSR  	MMIO_REG(0x40094124, uint32_t)
#define USART1_PDC_PTSR_s	MMIO_REG(0x40094124, struct __struct_PDC_PTSR)


// USART2

#define USART2_BASE_ADDR	0x40098000

#define USART2_CR  	MMIO_REG(0x40098000, uint32_t)
#define USART2_CR_s	MMIO_REG(0x40098000, struct __struct_USART_CR)

#define USART2_MR  	MMIO_REG(0x40098004, uint32_t)
#define USART2_MR_s	MMIO_REG(0x40098004, struct __struct_USART_MR)

#define USART2_IER  	MMIO_REG(0x40098008, uint32_t)
#define USART2_IER_s	MMIO_REG(0x40098008, struct __struct_USART_IER)

#define USART2_IDR  	MMIO_REG(0x4009800c, uint32_t)
#define USART2_IDR_s	MMIO_REG(0x4009800c, struct __struct_USART_IDR)

#define USART2_IMR  	MMIO_REG(0x40098010, uint32_t)
#define USART2_IMR_s	MMIO_REG(0x40098010, struct __struct_USART_IMR)

#define USART2_CSR  	MMIO_REG(0x40098014, uint32_t)
#define USART2_CSR_s	MMIO_REG(0x40098014, struct __struct_USART_CSR)

#define USART2_RHR  	MMIO_REG(0x40098018, uint32_t)
#define USART2_RHR_s	MMIO_REG(0x40098018, struct __struct_USART_RHR)

#define USART2_THR  	MMIO_REG(0x4009801c, uint32_t)
#define USART2_THR_s	MMIO_REG(0x4009801c, struct __struct_USART_THR)

#define USART2_BRGR  	MMIO_REG(0x40098020, uint32_t)
#define USART2_BRGR_s	MMIO_REG(0x40098020, struct __struct_USART_BRGR)

#define USART2_RTOR  	MMIO_REG(0x40098024, uint32_t)
#define USART2_RTOR_s	MMIO_REG(0x40098024, struct __struct_USART_RTOR)

#define USART2_TTGR  	MMIO_REG(0x40098028, uint32_t)
#define USART2_TTGR_s	MMIO_REG(0x40098028, struct __struct_USART_TTGR)

#define USART2_FIDI  	MMIO_REG(0x40098040, uint32_t)
#define USART2_FIDI_s	MMIO_REG(0x40098040, struct __struct_USART_FIDI)

#define USART2_NER  	MMIO_REG(0x40098044, uint32_t)
#define USART2_NER_s	MMIO_REG(0x40098044, struct __struct_USART_NER)

#define USART2_IF  	MMIO_REG(0x4009804c, uint32_t)
#define USART2_IF_s	MMIO_REG(0x4009804c, struct __struct_USART_IF)

#define USART2_MAN  	MMIO_REG(0x40098050, uint32_t)
#define USART2_MAN_s	MMIO_REG(0x40098050, struct __struct_USART_MAN)

#define USART2_WPMR  	MMIO_REG(0x400980e4, uint32_t)
#define USART2_WPMR_s	MMIO_REG(0x400980e4, struct __struct_USART_WPMR)

#define USART2_WPSR  	MMIO_REG(0x400980e8, uint32_t)
#define USART2_WPSR_s	MMIO_REG(0x400980e8, struct __struct_USART_WPSR)


// USART2_PDC

#define USART2_PDC_BASE_ADDR	0x40098100

#define USART2_PDC_RPR  	MMIO_REG(0x40098100, uint32_t)

#define USART2_PDC_RCR  	MMIO_REG(0x40098104, uint32_t)

#define USART2_PDC_TPR  	MMIO_REG(0x40098108, uint32_t)

#define USART2_PDC_TCR  	MMIO_REG(0x4009810c, uint32_t)

#define USART2_PDC_RNPR  	MMIO_REG(0x40098110, uint32_t)

#define USART2_PDC_RNCR  	MMIO_REG(0x40098114, uint32_t)

#define USART2_PDC_TNPR  	MMIO_REG(0x40098118, uint32_t)

#define USART2_PDC_TNCR  	MMIO_REG(0x4009811c, uint32_t)

#define USART2_PDC_PTCR  	MMIO_REG(0x40098120, uint32_t)
#define USART2_PDC_PTCR_s	MMIO_REG(0x40098120, struct __struct_PDC_PTCR)

#define USART2_PDC_PTSR  	MMIO_REG(0x40098124, uint32_t)
#define USART2_PDC_PTSR_s	MMIO_REG(0x40098124, struct __struct_PDC_PTSR)


// USART3

#define USART3_BASE_ADDR	0x4009c000

#define USART3_CR  	MMIO_REG(0x4009c000, uint32_t)
#define USART3_CR_s	MMIO_REG(0x4009c000, struct __struct_USART_CR)

#define USART3_MR  	MMIO_REG(0x4009c004, uint32_t)
#define USART3_MR_s	MMIO_REG(0x4009c004, struct __struct_USART_MR)

#define USART3_IER  	MMIO_REG(0x4009c008, uint32_t)
#define USART3_IER_s	MMIO_REG(0x4009c008, struct __struct_USART_IER)

#define USART3_IDR  	MMIO_REG(0x4009c00c, uint32_t)
#define USART3_IDR_s	MMIO_REG(0x4009c00c, struct __struct_USART_IDR)

#define USART3_IMR  	MMIO_REG(0x4009c010, uint32_t)
#define USART3_IMR_s	MMIO_REG(0x4009c010, struct __struct_USART_IMR)

#define USART3_CSR  	MMIO_REG(0x4009c014, uint32_t)
#define USART3_CSR_s	MMIO_REG(0x4009c014, struct __struct_USART_CSR)

#define USART3_RHR  	MMIO_REG(0x4009c018, uint32_t)
#define USART3_RHR_s	MMIO_REG(0x4009c018, struct __struct_USART_RHR)

#define USART3_THR  	MMIO_REG(0x4009c01c, uint32_t)
#define USART3_THR_s	MMIO_REG(0x4009c01c, struct __struct_USART_THR)

#define USART3_BRGR  	MMIO_REG(0x4009c020, uint32_t)
#define USART3_BRGR_s	MMIO_REG(0x4009c020, struct __struct_USART_BRGR)

#define USART3_RTOR  	MMIO_REG(0x4009c024, uint32_t)
#define USART3_RTOR_s	MMIO_REG(0x4009c024, struct __struct_USART_RTOR)

#define USART3_TTGR  	MMIO_REG(0x4009c028, uint32_t)
#define USART3_TTGR_s	MMIO_REG(0x4009c028, struct __struct_USART_TTGR)

#define USART3_FIDI  	MMIO_REG(0x4009c040, uint32_t)
#define USART3_FIDI_s	MMIO_REG(0x4009c040, struct __struct_USART_FIDI)

#define USART3_NER  	MMIO_REG(0x4009c044, uint32_t)
#define USART3_NER_s	MMIO_REG(0x4009c044, struct __struct_USART_NER)

#define USART3_IF  	MMIO_REG(0x4009c04c, uint32_t)
#define USART3_IF_s	MMIO_REG(0x4009c04c, struct __struct_USART_IF)

#define USART3_MAN  	MMIO_REG(0x4009c050, uint32_t)
#define USART3_MAN_s	MMIO_REG(0x4009c050, struct __struct_USART_MAN)

#define USART3_WPMR  	MMIO_REG(0x4009c0e4, uint32_t)
#define USART3_WPMR_s	MMIO_REG(0x4009c0e4, struct __struct_USART_WPMR)

#define USART3_WPSR  	MMIO_REG(0x4009c0e8, uint32_t)
#define USART3_WPSR_s	MMIO_REG(0x4009c0e8, struct __struct_USART_WPSR)


// USART3_PDC

#define USART3_PDC_BASE_ADDR	0x4009c100

#define USART3_PDC_RPR  	MMIO_REG(0x4009c100, uint32_t)

#define USART3_PDC_RCR  	MMIO_REG(0x4009c104, uint32_t)

#define USART3_PDC_TPR  	MMIO_REG(0x4009c108, uint32_t)

#define USART3_PDC_TCR  	MMIO_REG(0x4009c10c, uint32_t)

#define USART3_PDC_RNPR  	MMIO_REG(0x4009c110, uint32_t)

#define USART3_PDC_RNCR  	MMIO_REG(0x4009c114, uint32_t)

#define USART3_PDC_TNPR  	MMIO_REG(0x4009c118, uint32_t)

#define USART3_PDC_TNCR  	MMIO_REG(0x4009c11c, uint32_t)

#define USART3_PDC_PTCR  	MMIO_REG(0x4009c120, uint32_t)
#define USART3_PDC_PTCR_s	MMIO_REG(0x4009c120, struct __struct_PDC_PTCR)

#define USART3_PDC_PTSR  	MMIO_REG(0x4009c124, uint32_t)
#define USART3_PDC_PTSR_s	MMIO_REG(0x4009c124, struct __struct_PDC_PTSR)


// UDPHS

#define UDPHS_BASE_ADDR	0x400a4000

#define UDPHS_CTRL  	MMIO_REG(0x400a4000, uint32_t)
#define UDPHS_CTRL_s	MMIO_REG(0x400a4000, struct __struct_UDPHS_CTRL)

#define UDPHS_FNUM  	MMIO_REG(0x400a4004, uint32_t)
#define UDPHS_FNUM_s	MMIO_REG(0x400a4004, struct __struct_UDPHS_FNUM)

#define UDPHS_IEN  	MMIO_REG(0x400a4010, uint32_t)
#define UDPHS_IEN_s	MMIO_REG(0x400a4010, struct __struct_UDPHS_IEN)

#define UDPHS_INTSTA  	MMIO_REG(0x400a4014, uint32_t)
#define UDPHS_INTSTA_s	MMIO_REG(0x400a4014, struct __struct_UDPHS_INTSTA)

#define UDPHS_CLRINT  	MMIO_REG(0x400a4018, uint32_t)
#define UDPHS_CLRINT_s	MMIO_REG(0x400a4018, struct __struct_UDPHS_CLRINT)

#define UDPHS_EPTRST  	MMIO_REG(0x400a401c, uint32_t)
#define UDPHS_EPTRST_s	MMIO_REG(0x400a401c, struct __struct_UDPHS_EPTRST)

#define UDPHS_TST  	MMIO_REG(0x400a40e0, uint32_t)
#define UDPHS_TST_s	MMIO_REG(0x400a40e0, struct __struct_UDPHS_TST)

#define UDPHS_IPNAME1  	MMIO_REG(0x400a40f0, uint32_t)

#define UDPHS_IPNAME2  	MMIO_REG(0x400a40f4, uint32_t)

#define UDPHS_IPFEATURES  	MMIO_REG(0x400a40f8, uint32_t)
#define UDPHS_IPFEATURES_s	MMIO_REG(0x400a40f8, struct __struct_UDPHS_IPFEATURES)

#define UDPHS_EPTCFG(i)  	MMIO_REG(0x400a4100 + (i)*32, uint32_t)
#define UDPHS_EPTCFG_s(i)	MMIO_REG(0x400a4100 + (i)*32, struct __struct_UDPHS_EPTCFG)

#define UDPHS_EPTCTLENB(i)  	MMIO_REG(0x400a4104 + (i)*32, uint32_t)
#define UDPHS_EPTCTLENB_s(i)	MMIO_REG(0x400a4104 + (i)*32, struct __struct_UDPHS_EPTCTLENB)

#define UDPHS_EPTCTLDIS(i)  	MMIO_REG(0x400a4108 + (i)*32, uint32_t)
#define UDPHS_EPTCTLDIS_s(i)	MMIO_REG(0x400a4108 + (i)*32, struct __struct_UDPHS_EPTCTLDIS)

#define UDPHS_EPTCTL(i)  	MMIO_REG(0x400a410c + (i)*32, uint32_t)
#define UDPHS_EPTCTL_s(i)	MMIO_REG(0x400a410c + (i)*32, struct __struct_UDPHS_EPTCTL)

#define UDPHS_EPTSETSTA(i)  	MMIO_REG(0x400a4114 + (i)*32, uint32_t)
#define UDPHS_EPTSETSTA_s(i)	MMIO_REG(0x400a4114 + (i)*32, struct __struct_UDPHS_EPTSETSTA)

#define UDPHS_EPTCLRSTA(i)  	MMIO_REG(0x400a4118 + (i)*32, uint32_t)
#define UDPHS_EPTCLRSTA_s(i)	MMIO_REG(0x400a4118 + (i)*32, struct __struct_UDPHS_EPTCLRSTA)

#define UDPHS_EPTSTA(i)  	MMIO_REG(0x400a411c + (i)*32, uint32_t)
#define UDPHS_EPTSTA_s(i)	MMIO_REG(0x400a411c + (i)*32, struct __struct_UDPHS_EPTSTA)

#define UDPHS_DMANXTDSC(i)  	MMIO_REG(0x400a4300 + (i)*16, uint32_t)
#define UDPHS_DMANXTDSC_s(i)	MMIO_REG(0x400a4300 + (i)*16, struct __struct_UDPHS_DMANXTDSC)

#define UDPHS_DMAADDRESS(i)  	MMIO_REG(0x400a4304 + (i)*16, uint32_t)
#define UDPHS_DMAADDRESS_s(i)	MMIO_REG(0x400a4304 + (i)*16, struct __struct_UDPHS_DMAADDRESS)

#define UDPHS_DMACONTROL(i)  	MMIO_REG(0x400a4308 + (i)*16, uint32_t)
#define UDPHS_DMACONTROL_s(i)	MMIO_REG(0x400a4308 + (i)*16, struct __struct_UDPHS_DMACONTROL)

#define UDPHS_DMASTATUS(i)  	MMIO_REG(0x400a430c + (i)*16, uint32_t)
#define UDPHS_DMASTATUS_s(i)	MMIO_REG(0x400a430c + (i)*16, struct __struct_UDPHS_DMASTATUS)


// ADC12B

#define ADC12B_BASE_ADDR	0x400a8000

#define ADC12B_CR  	MMIO_REG(0x400a8000, uint32_t)
#define ADC12B_CR_s	MMIO_REG(0x400a8000, struct __struct_ADC12B_CR)

#define ADC12B_MR  	MMIO_REG(0x400a8004, uint32_t)
#define ADC12B_MR_s	MMIO_REG(0x400a8004, struct __struct_ADC12B_MR)

#define ADC12B_CHER  	MMIO_REG(0x400a8010, uint32_t)
#define ADC12B_CHER_s	MMIO_REG(0x400a8010, struct __struct_ADC12B_CHER)

#define ADC12B_CHDR  	MMIO_REG(0x400a8014, uint32_t)
#define ADC12B_CHDR_s	MMIO_REG(0x400a8014, struct __struct_ADC12B_CHDR)

#define ADC12B_CHSR  	MMIO_REG(0x400a8018, uint32_t)
#define ADC12B_CHSR_s	MMIO_REG(0x400a8018, struct __struct_ADC12B_CHSR)

#define ADC12B_SR  	MMIO_REG(0x400a801c, uint32_t)
#define ADC12B_SR_s	MMIO_REG(0x400a801c, struct __struct_ADC12B_SR)

#define ADC12B_LCDR  	MMIO_REG(0x400a8020, uint32_t)
#define ADC12B_LCDR_s	MMIO_REG(0x400a8020, struct __struct_ADC12B_LCDR)

#define ADC12B_IER  	MMIO_REG(0x400a8024, uint32_t)
#define ADC12B_IER_s	MMIO_REG(0x400a8024, struct __struct_ADC12B_IER)

#define ADC12B_IDR  	MMIO_REG(0x400a8028, uint32_t)
#define ADC12B_IDR_s	MMIO_REG(0x400a8028, struct __struct_ADC12B_IDR)

#define ADC12B_IMR  	MMIO_REG(0x400a802c, uint32_t)
#define ADC12B_IMR_s	MMIO_REG(0x400a802c, struct __struct_ADC12B_IMR)

#define ADC12B_CDR(i)  	MMIO_REG(0x400a8030 + (i)*4, uint32_t)
#define ADC12B_CDR_s(i)	MMIO_REG(0x400a8030 + (i)*4, struct __struct_ADC12B_CDR)

#define ADC12B_ACR  	MMIO_REG(0x400a8064, uint32_t)
#define ADC12B_ACR_s	MMIO_REG(0x400a8064, struct __struct_ADC12B_ACR)

#define ADC12B_EMR  	MMIO_REG(0x400a8068, uint32_t)
#define ADC12B_EMR_s	MMIO_REG(0x400a8068, struct __struct_ADC12B_EMR)


// ADC12B_PDC

#define ADC12B_PDC_BASE_ADDR	0x400a8100

#define ADC12B_PDC_RPR  	MMIO_REG(0x400a8100, uint32_t)

#define ADC12B_PDC_RCR  	MMIO_REG(0x400a8104, uint32_t)

#define ADC12B_PDC_TPR  	MMIO_REG(0x400a8108, uint32_t)

#define ADC12B_PDC_TCR  	MMIO_REG(0x400a810c, uint32_t)

#define ADC12B_PDC_RNPR  	MMIO_REG(0x400a8110, uint32_t)

#define ADC12B_PDC_RNCR  	MMIO_REG(0x400a8114, uint32_t)

#define ADC12B_PDC_TNPR  	MMIO_REG(0x400a8118, uint32_t)

#define ADC12B_PDC_TNCR  	MMIO_REG(0x400a811c, uint32_t)

#define ADC12B_PDC_PTCR  	MMIO_REG(0x400a8120, uint32_t)
#define ADC12B_PDC_PTCR_s	MMIO_REG(0x400a8120, struct __struct_PDC_PTCR)

#define ADC12B_PDC_PTSR  	MMIO_REG(0x400a8124, uint32_t)
#define ADC12B_PDC_PTSR_s	MMIO_REG(0x400a8124, struct __struct_PDC_PTSR)


// ADC

#define ADC_BASE_ADDR	0x400ac000

#define ADC_CR  	MMIO_REG(0x400ac000, uint32_t)
#define ADC_CR_s	MMIO_REG(0x400ac000, struct __struct_ADC_CR)

#define ADC_MR  	MMIO_REG(0x400ac004, uint32_t)
#define ADC_MR_s	MMIO_REG(0x400ac004, struct __struct_ADC_MR)

#define ADC_CHER  	MMIO_REG(0x400ac010, uint32_t)
#define ADC_CHER_s	MMIO_REG(0x400ac010, struct __struct_ADC_CHER)

#define ADC_CHDR  	MMIO_REG(0x400ac014, uint32_t)
#define ADC_CHDR_s	MMIO_REG(0x400ac014, struct __struct_ADC_CHDR)

#define ADC_CHSR  	MMIO_REG(0x400ac018, uint32_t)
#define ADC_CHSR_s	MMIO_REG(0x400ac018, struct __struct_ADC_CHSR)

#define ADC_SR  	MMIO_REG(0x400ac01c, uint32_t)
#define ADC_SR_s	MMIO_REG(0x400ac01c, struct __struct_ADC_SR)

#define ADC_LCDR  	MMIO_REG(0x400ac020, uint32_t)
#define ADC_LCDR_s	MMIO_REG(0x400ac020, struct __struct_ADC_LCDR)

#define ADC_IER  	MMIO_REG(0x400ac024, uint32_t)
#define ADC_IER_s	MMIO_REG(0x400ac024, struct __struct_ADC_IER)

#define ADC_IDR  	MMIO_REG(0x400ac028, uint32_t)
#define ADC_IDR_s	MMIO_REG(0x400ac028, struct __struct_ADC_IDR)

#define ADC_IMR  	MMIO_REG(0x400ac02c, uint32_t)
#define ADC_IMR_s	MMIO_REG(0x400ac02c, struct __struct_ADC_IMR)

#define ADC_CDR(i)  	MMIO_REG(0x400ac030 + (i)*4, uint32_t)
#define ADC_CDR_s(i)	MMIO_REG(0x400ac030 + (i)*4, struct __struct_ADC_CDR)


// ADC_PDC

#define ADC_PDC_BASE_ADDR	0x400ac100

#define ADC_PDC_RPR  	MMIO_REG(0x400ac100, uint32_t)

#define ADC_PDC_RCR  	MMIO_REG(0x400ac104, uint32_t)

#define ADC_PDC_TPR  	MMIO_REG(0x400ac108, uint32_t)

#define ADC_PDC_TCR  	MMIO_REG(0x400ac10c, uint32_t)

#define ADC_PDC_RNPR  	MMIO_REG(0x400ac110, uint32_t)

#define ADC_PDC_RNCR  	MMIO_REG(0x400ac114, uint32_t)

#define ADC_PDC_TNPR  	MMIO_REG(0x400ac118, uint32_t)

#define ADC_PDC_TNCR  	MMIO_REG(0x400ac11c, uint32_t)

#define ADC_PDC_PTCR  	MMIO_REG(0x400ac120, uint32_t)
#define ADC_PDC_PTCR_s	MMIO_REG(0x400ac120, struct __struct_PDC_PTCR)

#define ADC_PDC_PTSR  	MMIO_REG(0x400ac124, uint32_t)
#define ADC_PDC_PTSR_s	MMIO_REG(0x400ac124, struct __struct_PDC_PTSR)


// DMAC

#define DMAC_BASE_ADDR	0x400b0000

#define DMAC_GCFG  	MMIO_REG(0x400b0000, uint32_t)
#define DMAC_GCFG_s	MMIO_REG(0x400b0000, struct __struct_DMAC_GCFG)

#define DMAC_EN  	MMIO_REG(0x400b0004, uint32_t)
#define DMAC_EN_s	MMIO_REG(0x400b0004, struct __struct_DMAC_EN)

#define DMAC_SREQ  	MMIO_REG(0x400b0008, uint32_t)
#define DMAC_SREQ_s	MMIO_REG(0x400b0008, struct __struct_DMAC_SREQ)

#define DMAC_CREQ  	MMIO_REG(0x400b000c, uint32_t)
#define DMAC_CREQ_s	MMIO_REG(0x400b000c, struct __struct_DMAC_CREQ)

#define DMAC_LAST  	MMIO_REG(0x400b0010, uint32_t)
#define DMAC_LAST_s	MMIO_REG(0x400b0010, struct __struct_DMAC_LAST)

#define DMAC_EBCIER  	MMIO_REG(0x400b0018, uint32_t)
#define DMAC_EBCIER_s	MMIO_REG(0x400b0018, struct __struct_DMAC_EBCIER)

#define DMAC_EBCIDR  	MMIO_REG(0x400b001c, uint32_t)
#define DMAC_EBCIDR_s	MMIO_REG(0x400b001c, struct __struct_DMAC_EBCIDR)

#define DMAC_EBCIMR  	MMIO_REG(0x400b0020, uint32_t)
#define DMAC_EBCIMR_s	MMIO_REG(0x400b0020, struct __struct_DMAC_EBCIMR)

#define DMAC_EBCISR  	MMIO_REG(0x400b0024, uint32_t)
#define DMAC_EBCISR_s	MMIO_REG(0x400b0024, struct __struct_DMAC_EBCISR)

#define DMAC_CHER  	MMIO_REG(0x400b0028, uint32_t)
#define DMAC_CHER_s	MMIO_REG(0x400b0028, struct __struct_DMAC_CHER)

#define DMAC_CHDR  	MMIO_REG(0x400b002c, uint32_t)
#define DMAC_CHDR_s	MMIO_REG(0x400b002c, struct __struct_DMAC_CHDR)

#define DMAC_CHSR  	MMIO_REG(0x400b0030, uint32_t)
#define DMAC_CHSR_s	MMIO_REG(0x400b0030, struct __struct_DMAC_CHSR)

#define DMAC_SADDR(i)  	MMIO_REG(0x400b003c + (i)*40, uint32_t)

#define DMAC_DADDR(i)  	MMIO_REG(0x400b0040 + (i)*40, uint32_t)

#define DMAC_DSCR(i)  	MMIO_REG(0x400b0044 + (i)*40, uint32_t)
#define DMAC_DSCR_s(i)	MMIO_REG(0x400b0044 + (i)*40, struct __struct_DMAC_DSCR)

#define DMAC_CTRLA(i)  	MMIO_REG(0x400b0048 + (i)*40, uint32_t)
#define DMAC_CTRLA_s(i)	MMIO_REG(0x400b0048 + (i)*40, struct __struct_DMAC_CTRLA)

#define DMAC_CTRLB(i)  	MMIO_REG(0x400b004c + (i)*40, uint32_t)
#define DMAC_CTRLB_s(i)	MMIO_REG(0x400b004c + (i)*40, struct __struct_DMAC_CTRLB)

#define DMAC_CFG(i)  	MMIO_REG(0x400b0050 + (i)*40, uint32_t)
#define DMAC_CFG_s(i)	MMIO_REG(0x400b0050 + (i)*40, struct __struct_DMAC_CFG)


// SMC

#define SMC_BASE_ADDR	0x400e0000

#define SMC_CFG  	MMIO_REG(0x400e0000, uint32_t)
#define SMC_CFG_s	MMIO_REG(0x400e0000, struct __struct_SMC_CFG)

#define SMC_CTRL  	MMIO_REG(0x400e0004, uint32_t)
#define SMC_CTRL_s	MMIO_REG(0x400e0004, struct __struct_SMC_CTRL)

#define SMC_SR  	MMIO_REG(0x400e0008, uint32_t)
#define SMC_SR_s	MMIO_REG(0x400e0008, struct __struct_SMC_SR)

#define SMC_IER  	MMIO_REG(0x400e000c, uint32_t)
#define SMC_IER_s	MMIO_REG(0x400e000c, struct __struct_SMC_IER)

#define SMC_IDR  	MMIO_REG(0x400e0010, uint32_t)
#define SMC_IDR_s	MMIO_REG(0x400e0010, struct __struct_SMC_IDR)

#define SMC_IMR  	MMIO_REG(0x400e0014, uint32_t)
#define SMC_IMR_s	MMIO_REG(0x400e0014, struct __struct_SMC_IMR)

#define SMC_ADDR  	MMIO_REG(0x400e0018, uint32_t)
#define SMC_ADDR_s	MMIO_REG(0x400e0018, struct __struct_SMC_ADDR)

#define SMC_BANK  	MMIO_REG(0x400e001c, uint32_t)
#define SMC_BANK_s	MMIO_REG(0x400e001c, struct __struct_SMC_BANK)

#define SMC_ECC_CTRL  	MMIO_REG(0x400e0020, uint32_t)
#define SMC_ECC_CTRL_s	MMIO_REG(0x400e0020, struct __struct_SMC_ECC_CTRL)

#define SMC_ECC_MD  	MMIO_REG(0x400e0024, uint32_t)
#define SMC_ECC_MD_s	MMIO_REG(0x400e0024, struct __struct_SMC_ECC_MD)

#define SMC_ECC_SR1  	MMIO_REG(0x400e0028, uint32_t)
#define SMC_ECC_SR1_s	MMIO_REG(0x400e0028, struct __struct_SMC_ECC_SR1)

#define SMC_ECC_PR0  	MMIO_REG(0x400e002c, uint32_t)
#define SMC_ECC_PR0_s	MMIO_REG(0x400e002c, struct __struct_SMC_ECC_PR0)

#define SMC_ECC_PR1  	MMIO_REG(0x400e0030, uint32_t)
#define SMC_ECC_PR1_s	MMIO_REG(0x400e0030, struct __struct_SMC_ECC_PR1)

#define SMC_ECC_SR2  	MMIO_REG(0x400e0034, uint32_t)
#define SMC_ECC_SR2_s	MMIO_REG(0x400e0034, struct __struct_SMC_ECC_SR2)

#define SMC_ECC_PR2_15(i)  	MMIO_REG(0x400e0038 + (i)*4, uint32_t)
#define SMC_ECC_PR2_15_s(i)	MMIO_REG(0x400e0038 + (i)*4, struct __struct_SMC_ECC_PR2_15)

#define SMC_SETUP(i)  	MMIO_REG(0x400e0070 + (i)*20, uint32_t)
#define SMC_SETUP_s(i)	MMIO_REG(0x400e0070 + (i)*20, struct __struct_SMC_SETUP)

#define SMC_PULSE(i)  	MMIO_REG(0x400e0074 + (i)*20, uint32_t)
#define SMC_PULSE_s(i)	MMIO_REG(0x400e0074 + (i)*20, struct __struct_SMC_PULSE)

#define SMC_CYCLE(i)  	MMIO_REG(0x400e0078 + (i)*20, uint32_t)
#define SMC_CYCLE_s(i)	MMIO_REG(0x400e0078 + (i)*20, struct __struct_SMC_CYCLE)

#define SMC_TIMINGS(i)  	MMIO_REG(0x400e007c + (i)*20, uint32_t)
#define SMC_TIMINGS_s(i)	MMIO_REG(0x400e007c + (i)*20, struct __struct_SMC_TIMINGS)

#define SMC_MODE(i)  	MMIO_REG(0x400e0080 + (i)*20, uint32_t)
#define SMC_MODE_s(i)	MMIO_REG(0x400e0080 + (i)*20, struct __struct_SMC_MODE)

#define SMC_OCMS  	MMIO_REG(0x400e0110, uint32_t)
#define SMC_OCMS_s	MMIO_REG(0x400e0110, struct __struct_SMC_OCMS)

#define SMC_KEY(i)  	MMIO_REG(0x400e0114 + (i)*4, uint32_t)

#define SMC_WPCR  	MMIO_REG(0x400e01e4, uint32_t)
#define SMC_WPCR_s	MMIO_REG(0x400e01e4, struct __struct_SMC_WPCR)

#define SMC_WPSR  	MMIO_REG(0x400e01e8, uint32_t)
#define SMC_WPSR_s	MMIO_REG(0x400e01e8, struct __struct_SMC_WPSR)


// MATRIX

#define MATRIX_BASE_ADDR	0x400e0200

#define MATRIX_MCFG(i)  	MMIO_REG(0x400e0200 + (i)*4, uint32_t)
#define MATRIX_MCFG_s(i)	MMIO_REG(0x400e0200 + (i)*4, struct __struct_MATRIX_MCFG)

#define MATRIX_SCFG(i)  	MMIO_REG(0x400e0240 + (i)*4, uint32_t)
#define MATRIX_SCFG_s(i)	MMIO_REG(0x400e0240 + (i)*4, struct __struct_MATRIX_SCFG)

#define MATRIX_PRAS(i)  	MMIO_REG(0x400e0280 + (i)*4, uint32_t)
#define MATRIX_PRAS_s(i)	MMIO_REG(0x400e0280 + (i)*4, struct __struct_MATRIX_PRAS)

#define MATRIX_MRCR  	MMIO_REG(0x400e0300, uint32_t)
#define MATRIX_MRCR_s	MMIO_REG(0x400e0300, struct __struct_MATRIX_MRCR)

#define MATRIX_WPMR  	MMIO_REG(0x400e03e4, uint32_t)
#define MATRIX_WPMR_s	MMIO_REG(0x400e03e4, struct __struct_MATRIX_WPMR)

#define MATRIX_WPSR  	MMIO_REG(0x400e03e8, uint32_t)
#define MATRIX_WPSR_s	MMIO_REG(0x400e03e8, struct __struct_MATRIX_WPSR)


// PMC

#define PMC_BASE_ADDR	0x400e0400

#define PMC_SCER  	MMIO_REG(0x400e0400, uint32_t)
#define PMC_SCER_s	MMIO_REG(0x400e0400, struct __struct_PMC_SCER)

#define PMC_SCDR  	MMIO_REG(0x400e0404, uint32_t)
#define PMC_SCDR_s	MMIO_REG(0x400e0404, struct __struct_PMC_SCDR)

#define PMC_SCSR  	MMIO_REG(0x400e0408, uint32_t)
#define PMC_SCSR_s	MMIO_REG(0x400e0408, struct __struct_PMC_SCSR)

#define PMC_PCER0  	MMIO_REG(0x400e0410, uint32_t)
#define PMC_PCER0_s	MMIO_REG(0x400e0410, struct __struct_PMC_PCER0)

#define PMC_PCDR0  	MMIO_REG(0x400e0414, uint32_t)
#define PMC_PCDR0_s	MMIO_REG(0x400e0414, struct __struct_PMC_PCDR0)

#define PMC_PCSR0  	MMIO_REG(0x400e0418, uint32_t)
#define PMC_PCSR0_s	MMIO_REG(0x400e0418, struct __struct_PMC_PCSR0)

#define PMC_CKGR_UCKR  	MMIO_REG(0x400e041c, uint32_t)
#define PMC_CKGR_UCKR_s	MMIO_REG(0x400e041c, struct __struct_PMC_CKGR_UCKR)

#define PMC_CKGR_MOR  	MMIO_REG(0x400e0420, uint32_t)
#define PMC_CKGR_MOR_s	MMIO_REG(0x400e0420, struct __struct_PMC_CKGR_MOR)

#define PMC_CKGR_MCFR  	MMIO_REG(0x400e0424, uint32_t)
#define PMC_CKGR_MCFR_s	MMIO_REG(0x400e0424, struct __struct_PMC_CKGR_MCFR)

#define PMC_CKGR_PLLAR  	MMIO_REG(0x400e0428, uint32_t)
#define PMC_CKGR_PLLAR_s	MMIO_REG(0x400e0428, struct __struct_PMC_CKGR_PLLAR)

#define PMC_MCKR  	MMIO_REG(0x400e0430, uint32_t)
#define PMC_MCKR_s	MMIO_REG(0x400e0430, struct __struct_PMC_MCKR)

#define PMC_PCK(i)  	MMIO_REG(0x400e0440 + (i)*4, uint32_t)
#define PMC_PCK_s(i)	MMIO_REG(0x400e0440 + (i)*4, struct __struct_PMC_PCK)

#define PMC_IER  	MMIO_REG(0x400e0460, uint32_t)
#define PMC_IER_s	MMIO_REG(0x400e0460, struct __struct_PMC_IER)

#define PMC_IDR  	MMIO_REG(0x400e0464, uint32_t)
#define PMC_IDR_s	MMIO_REG(0x400e0464, struct __struct_PMC_IDR)

#define PMC_SR  	MMIO_REG(0x400e0468, uint32_t)
#define PMC_SR_s	MMIO_REG(0x400e0468, struct __struct_PMC_SR)

#define PMC_IMR  	MMIO_REG(0x400e046c, uint32_t)
#define PMC_IMR_s	MMIO_REG(0x400e046c, struct __struct_PMC_IMR)

#define PMC_FSMR  	MMIO_REG(0x400e0470, uint32_t)
#define PMC_FSMR_s	MMIO_REG(0x400e0470, struct __struct_PMC_FSMR)

#define PMC_FSPR  	MMIO_REG(0x400e0474, uint32_t)
#define PMC_FSPR_s	MMIO_REG(0x400e0474, struct __struct_PMC_FSPR)

#define PMC_FOCR  	MMIO_REG(0x400e0478, uint32_t)
#define PMC_FOCR_s	MMIO_REG(0x400e0478, struct __struct_PMC_FOCR)

#define PMC_WPMR  	MMIO_REG(0x400e04e4, uint32_t)
#define PMC_WPMR_s	MMIO_REG(0x400e04e4, struct __struct_PMC_WPMR)

#define PMC_WPSR  	MMIO_REG(0x400e04e8, uint32_t)
#define PMC_WPSR_s	MMIO_REG(0x400e04e8, struct __struct_PMC_WPSR)


// UART

#define UART_BASE_ADDR	0x400e0600

#define UART_CR  	MMIO_REG(0x400e0600, uint32_t)
#define UART_CR_s	MMIO_REG(0x400e0600, struct __struct_UART_CR)

#define UART_MR  	MMIO_REG(0x400e0604, uint32_t)
#define UART_MR_s	MMIO_REG(0x400e0604, struct __struct_UART_MR)

#define UART_IER  	MMIO_REG(0x400e0608, uint32_t)
#define UART_IER_s	MMIO_REG(0x400e0608, struct __struct_UART_IER)

#define UART_IDR  	MMIO_REG(0x400e060c, uint32_t)
#define UART_IDR_s	MMIO_REG(0x400e060c, struct __struct_UART_IDR)

#define UART_IMR  	MMIO_REG(0x400e0610, uint32_t)
#define UART_IMR_s	MMIO_REG(0x400e0610, struct __struct_UART_IMR)

#define UART_SR  	MMIO_REG(0x400e0614, uint32_t)
#define UART_SR_s	MMIO_REG(0x400e0614, struct __struct_UART_SR)

#define UART_RHR  	MMIO_REG(0x400e0618, uint32_t)
#define UART_RHR_s	MMIO_REG(0x400e0618, struct __struct_UART_RHR)

#define UART_THR  	MMIO_REG(0x400e061c, uint32_t)
#define UART_THR_s	MMIO_REG(0x400e061c, struct __struct_UART_THR)

#define UART_BRGR  	MMIO_REG(0x400e0620, uint32_t)
#define UART_BRGR_s	MMIO_REG(0x400e0620, struct __struct_UART_BRGR)


// UART_PDC

#define UART_PDC_BASE_ADDR	0x400e0700

#define UART_PDC_RPR  	MMIO_REG(0x400e0700, uint32_t)

#define UART_PDC_RCR  	MMIO_REG(0x400e0704, uint32_t)

#define UART_PDC_TPR  	MMIO_REG(0x400e0708, uint32_t)

#define UART_PDC_TCR  	MMIO_REG(0x400e070c, uint32_t)

#define UART_PDC_RNPR  	MMIO_REG(0x400e0710, uint32_t)

#define UART_PDC_RNCR  	MMIO_REG(0x400e0714, uint32_t)

#define UART_PDC_TNPR  	MMIO_REG(0x400e0718, uint32_t)

#define UART_PDC_TNCR  	MMIO_REG(0x400e071c, uint32_t)

#define UART_PDC_PTCR  	MMIO_REG(0x400e0720, uint32_t)
#define UART_PDC_PTCR_s	MMIO_REG(0x400e0720, struct __struct_PDC_PTCR)

#define UART_PDC_PTSR  	MMIO_REG(0x400e0724, uint32_t)
#define UART_PDC_PTSR_s	MMIO_REG(0x400e0724, struct __struct_PDC_PTSR)


// CHIPID

#define CHIPID_BASE_ADDR	0x400e0740

#define CHIPID_CIDR  	MMIO_REG(0x400e0740, uint32_t)
#define CHIPID_CIDR_s	MMIO_REG(0x400e0740, struct __struct_EEFC_CIDR)

#define CHIPID_EXID  	MMIO_REG(0x400e0744, uint32_t)


// EEFC0

#define EEFC0_BASE_ADDR	0x400e0800

#define EEFC0_FMR  	MMIO_REG(0x400e0800, uint32_t)
#define EEFC0_FMR_s	MMIO_REG(0x400e0800, struct __struct_EEFC_FMR)

#define EEFC0_FCR  	MMIO_REG(0x400e0804, uint32_t)
#define EEFC0_FCR_s	MMIO_REG(0x400e0804, struct __struct_EEFC_FCR)

#define EEFC0_FSR  	MMIO_REG(0x400e0808, uint32_t)
#define EEFC0_FSR_s	MMIO_REG(0x400e0808, struct __struct_EEFC_FSR)

#define EEFC0_FRR  	MMIO_REG(0x400e080c, uint32_t)


// EEFC1

#define EEFC1_BASE_ADDR	0x400e0a00

#define EEFC1_FMR  	MMIO_REG(0x400e0a00, uint32_t)
#define EEFC1_FMR_s	MMIO_REG(0x400e0a00, struct __struct_EEFC_FMR)

#define EEFC1_FCR  	MMIO_REG(0x400e0a04, uint32_t)
#define EEFC1_FCR_s	MMIO_REG(0x400e0a04, struct __struct_EEFC_FCR)

#define EEFC1_FSR  	MMIO_REG(0x400e0a08, uint32_t)
#define EEFC1_FSR_s	MMIO_REG(0x400e0a08, struct __struct_EEFC_FSR)

#define EEFC1_FRR  	MMIO_REG(0x400e0a0c, uint32_t)


// PIOA

#define PIOA_BASE_ADDR	0x400e0c00

#define PIOA_PER  	MMIO_REG(0x400e0c00, uint32_t)
#define PIOA_PER_s	MMIO_REG(0x400e0c00, struct __struct_PIO_PER)

#define PIOA_PDR  	MMIO_REG(0x400e0c04, uint32_t)
#define PIOA_PDR_s	MMIO_REG(0x400e0c04, struct __struct_PIO_PDR)

#define PIOA_PSR  	MMIO_REG(0x400e0c08, uint32_t)
#define PIOA_PSR_s	MMIO_REG(0x400e0c08, struct __struct_PIO_PSR)

#define PIOA_OER  	MMIO_REG(0x400e0c10, uint32_t)
#define PIOA_OER_s	MMIO_REG(0x400e0c10, struct __struct_PIO_OER)

#define PIOA_ODR  	MMIO_REG(0x400e0c14, uint32_t)
#define PIOA_ODR_s	MMIO_REG(0x400e0c14, struct __struct_PIO_ODR)

#define PIOA_OSR  	MMIO_REG(0x400e0c18, uint32_t)
#define PIOA_OSR_s	MMIO_REG(0x400e0c18, struct __struct_PIO_OSR)

#define PIOA_IFER  	MMIO_REG(0x400e0c20, uint32_t)
#define PIOA_IFER_s	MMIO_REG(0x400e0c20, struct __struct_PIO_IFER)

#define PIOA_IFDR  	MMIO_REG(0x400e0c24, uint32_t)
#define PIOA_IFDR_s	MMIO_REG(0x400e0c24, struct __struct_PIO_IFDR)

#define PIOA_IFSR  	MMIO_REG(0x400e0c28, uint32_t)
#define PIOA_IFSR_s	MMIO_REG(0x400e0c28, struct __struct_PIO_IFSR)

#define PIOA_SODR  	MMIO_REG(0x400e0c30, uint32_t)
#define PIOA_SODR_s	MMIO_REG(0x400e0c30, struct __struct_PIO_SODR)

#define PIOA_CODR  	MMIO_REG(0x400e0c34, uint32_t)
#define PIOA_CODR_s	MMIO_REG(0x400e0c34, struct __struct_PIO_CODR)

#define PIOA_ODSR  	MMIO_REG(0x400e0c38, uint32_t)
#define PIOA_ODSR_s	MMIO_REG(0x400e0c38, struct __struct_PIO_ODSR)

#define PIOA_PDSR  	MMIO_REG(0x400e0c3c, uint32_t)
#define PIOA_PDSR_s	MMIO_REG(0x400e0c3c, struct __struct_PIO_PDSR)

#define PIOA_IER  	MMIO_REG(0x400e0c40, uint32_t)
#define PIOA_IER_s	MMIO_REG(0x400e0c40, struct __struct_PIO_IER)

#define PIOA_IDR  	MMIO_REG(0x400e0c44, uint32_t)
#define PIOA_IDR_s	MMIO_REG(0x400e0c44, struct __struct_PIO_IDR)

#define PIOA_IMR  	MMIO_REG(0x400e0c48, uint32_t)
#define PIOA_IMR_s	MMIO_REG(0x400e0c48, struct __struct_PIO_IMR)

#define PIOA_ISR  	MMIO_REG(0x400e0c4c, uint32_t)
#define PIOA_ISR_s	MMIO_REG(0x400e0c4c, struct __struct_PIO_ISR)

#define PIOA_MDER  	MMIO_REG(0x400e0c50, uint32_t)
#define PIOA_MDER_s	MMIO_REG(0x400e0c50, struct __struct_PIO_MDER)

#define PIOA_MDDR  	MMIO_REG(0x400e0c54, uint32_t)
#define PIOA_MDDR_s	MMIO_REG(0x400e0c54, struct __struct_PIO_MDDR)

#define PIOA_MDSR  	MMIO_REG(0x400e0c58, uint32_t)
#define PIOA_MDSR_s	MMIO_REG(0x400e0c58, struct __struct_PIO_MDSR)

#define PIOA_PUDR  	MMIO_REG(0x400e0c60, uint32_t)
#define PIOA_PUDR_s	MMIO_REG(0x400e0c60, struct __struct_PIO_PUDR)

#define PIOA_PUER  	MMIO_REG(0x400e0c64, uint32_t)
#define PIOA_PUER_s	MMIO_REG(0x400e0c64, struct __struct_PIO_PUER)

#define PIOA_PUSR  	MMIO_REG(0x400e0c68, uint32_t)
#define PIOA_PUSR_s	MMIO_REG(0x400e0c68, struct __struct_PIO_PUSR)

#define PIOA_ABSR  	MMIO_REG(0x400e0c70, uint32_t)
#define PIOA_ABSR_s	MMIO_REG(0x400e0c70, struct __struct_PIO_ABSR)

#define PIOA_SCIFSR  	MMIO_REG(0x400e0c80, uint32_t)
#define PIOA_SCIFSR_s	MMIO_REG(0x400e0c80, struct __struct_PIO_SCIFSR)

#define PIOA_DIFSR  	MMIO_REG(0x400e0c84, uint32_t)
#define PIOA_DIFSR_s	MMIO_REG(0x400e0c84, struct __struct_PIO_DIFSR)

#define PIOA_IFDGSR  	MMIO_REG(0x400e0c88, uint32_t)
#define PIOA_IFDGSR_s	MMIO_REG(0x400e0c88, struct __struct_PIO_IFDGSR)

#define PIOA_SCDR  	MMIO_REG(0x400e0c8c, uint32_t)
#define PIOA_SCDR_s	MMIO_REG(0x400e0c8c, struct __struct_PIO_SCDR)

#define PIOA_OWER  	MMIO_REG(0x400e0ca0, uint32_t)
#define PIOA_OWER_s	MMIO_REG(0x400e0ca0, struct __struct_PIO_OWER)

#define PIOA_OWDR  	MMIO_REG(0x400e0ca4, uint32_t)
#define PIOA_OWDR_s	MMIO_REG(0x400e0ca4, struct __struct_PIO_OWDR)

#define PIOA_OWSR  	MMIO_REG(0x400e0ca8, uint32_t)
#define PIOA_OWSR_s	MMIO_REG(0x400e0ca8, struct __struct_PIO_OWSR)

#define PIOA_AIMER  	MMIO_REG(0x400e0cb0, uint32_t)
#define PIOA_AIMER_s	MMIO_REG(0x400e0cb0, struct __struct_PIO_AIMER)

#define PIOA_AIMDR  	MMIO_REG(0x400e0cb4, uint32_t)
#define PIOA_AIMDR_s	MMIO_REG(0x400e0cb4, struct __struct_PIO_AIMDR)

#define PIOA_AIMMR  	MMIO_REG(0x400e0cb8, uint32_t)
#define PIOA_AIMMR_s	MMIO_REG(0x400e0cb8, struct __struct_PIO_AIMMR)

#define PIOA_ESR  	MMIO_REG(0x400e0cc0, uint32_t)
#define PIOA_ESR_s	MMIO_REG(0x400e0cc0, struct __struct_PIO_ESR)

#define PIOA_LSR  	MMIO_REG(0x400e0cc4, uint32_t)
#define PIOA_LSR_s	MMIO_REG(0x400e0cc4, struct __struct_PIO_LSR)

#define PIOA_ELSR  	MMIO_REG(0x400e0cc8, uint32_t)
#define PIOA_ELSR_s	MMIO_REG(0x400e0cc8, struct __struct_PIO_ELSR)

#define PIOA_FELLSR  	MMIO_REG(0x400e0cd0, uint32_t)
#define PIOA_FELLSR_s	MMIO_REG(0x400e0cd0, struct __struct_PIO_FELLSR)

#define PIOA_REHLSR  	MMIO_REG(0x400e0cd4, uint32_t)
#define PIOA_REHLSR_s	MMIO_REG(0x400e0cd4, struct __struct_PIO_REHLSR)

#define PIOA_FRLHSR  	MMIO_REG(0x400e0cd8, uint32_t)
#define PIOA_FRLHSR_s	MMIO_REG(0x400e0cd8, struct __struct_PIO_FRLHSR)

#define PIOA_LOCKSR  	MMIO_REG(0x400e0ce0, uint32_t)
#define PIOA_LOCKSR_s	MMIO_REG(0x400e0ce0, struct __struct_PIO_LOCKSR)

#define PIOA_WPMR  	MMIO_REG(0x400e0ce4, uint32_t)
#define PIOA_WPMR_s	MMIO_REG(0x400e0ce4, struct __struct_PIO_WPMR)

#define PIOA_WPSR  	MMIO_REG(0x400e0ce8, uint32_t)
#define PIOA_WPSR_s	MMIO_REG(0x400e0ce8, struct __struct_PIO_WPSR)


// PIOB

#define PIOB_BASE_ADDR	0x400e0e00

#define PIOB_PER  	MMIO_REG(0x400e0e00, uint32_t)
#define PIOB_PER_s	MMIO_REG(0x400e0e00, struct __struct_PIO_PER)

#define PIOB_PDR  	MMIO_REG(0x400e0e04, uint32_t)
#define PIOB_PDR_s	MMIO_REG(0x400e0e04, struct __struct_PIO_PDR)

#define PIOB_PSR  	MMIO_REG(0x400e0e08, uint32_t)
#define PIOB_PSR_s	MMIO_REG(0x400e0e08, struct __struct_PIO_PSR)

#define PIOB_OER  	MMIO_REG(0x400e0e10, uint32_t)
#define PIOB_OER_s	MMIO_REG(0x400e0e10, struct __struct_PIO_OER)

#define PIOB_ODR  	MMIO_REG(0x400e0e14, uint32_t)
#define PIOB_ODR_s	MMIO_REG(0x400e0e14, struct __struct_PIO_ODR)

#define PIOB_OSR  	MMIO_REG(0x400e0e18, uint32_t)
#define PIOB_OSR_s	MMIO_REG(0x400e0e18, struct __struct_PIO_OSR)

#define PIOB_IFER  	MMIO_REG(0x400e0e20, uint32_t)
#define PIOB_IFER_s	MMIO_REG(0x400e0e20, struct __struct_PIO_IFER)

#define PIOB_IFDR  	MMIO_REG(0x400e0e24, uint32_t)
#define PIOB_IFDR_s	MMIO_REG(0x400e0e24, struct __struct_PIO_IFDR)

#define PIOB_IFSR  	MMIO_REG(0x400e0e28, uint32_t)
#define PIOB_IFSR_s	MMIO_REG(0x400e0e28, struct __struct_PIO_IFSR)

#define PIOB_SODR  	MMIO_REG(0x400e0e30, uint32_t)
#define PIOB_SODR_s	MMIO_REG(0x400e0e30, struct __struct_PIO_SODR)

#define PIOB_CODR  	MMIO_REG(0x400e0e34, uint32_t)
#define PIOB_CODR_s	MMIO_REG(0x400e0e34, struct __struct_PIO_CODR)

#define PIOB_ODSR  	MMIO_REG(0x400e0e38, uint32_t)
#define PIOB_ODSR_s	MMIO_REG(0x400e0e38, struct __struct_PIO_ODSR)

#define PIOB_PDSR  	MMIO_REG(0x400e0e3c, uint32_t)
#define PIOB_PDSR_s	MMIO_REG(0x400e0e3c, struct __struct_PIO_PDSR)

#define PIOB_IER  	MMIO_REG(0x400e0e40, uint32_t)
#define PIOB_IER_s	MMIO_REG(0x400e0e40, struct __struct_PIO_IER)

#define PIOB_IDR  	MMIO_REG(0x400e0e44, uint32_t)
#define PIOB_IDR_s	MMIO_REG(0x400e0e44, struct __struct_PIO_IDR)

#define PIOB_IMR  	MMIO_REG(0x400e0e48, uint32_t)
#define PIOB_IMR_s	MMIO_REG(0x400e0e48, struct __struct_PIO_IMR)

#define PIOB_ISR  	MMIO_REG(0x400e0e4c, uint32_t)
#define PIOB_ISR_s	MMIO_REG(0x400e0e4c, struct __struct_PIO_ISR)

#define PIOB_MDER  	MMIO_REG(0x400e0e50, uint32_t)
#define PIOB_MDER_s	MMIO_REG(0x400e0e50, struct __struct_PIO_MDER)

#define PIOB_MDDR  	MMIO_REG(0x400e0e54, uint32_t)
#define PIOB_MDDR_s	MMIO_REG(0x400e0e54, struct __struct_PIO_MDDR)

#define PIOB_MDSR  	MMIO_REG(0x400e0e58, uint32_t)
#define PIOB_MDSR_s	MMIO_REG(0x400e0e58, struct __struct_PIO_MDSR)

#define PIOB_PUDR  	MMIO_REG(0x400e0e60, uint32_t)
#define PIOB_PUDR_s	MMIO_REG(0x400e0e60, struct __struct_PIO_PUDR)

#define PIOB_PUER  	MMIO_REG(0x400e0e64, uint32_t)
#define PIOB_PUER_s	MMIO_REG(0x400e0e64, struct __struct_PIO_PUER)

#define PIOB_PUSR  	MMIO_REG(0x400e0e68, uint32_t)
#define PIOB_PUSR_s	MMIO_REG(0x400e0e68, struct __struct_PIO_PUSR)

#define PIOB_ABSR  	MMIO_REG(0x400e0e70, uint32_t)
#define PIOB_ABSR_s	MMIO_REG(0x400e0e70, struct __struct_PIO_ABSR)

#define PIOB_SCIFSR  	MMIO_REG(0x400e0e80, uint32_t)
#define PIOB_SCIFSR_s	MMIO_REG(0x400e0e80, struct __struct_PIO_SCIFSR)

#define PIOB_DIFSR  	MMIO_REG(0x400e0e84, uint32_t)
#define PIOB_DIFSR_s	MMIO_REG(0x400e0e84, struct __struct_PIO_DIFSR)

#define PIOB_IFDGSR  	MMIO_REG(0x400e0e88, uint32_t)
#define PIOB_IFDGSR_s	MMIO_REG(0x400e0e88, struct __struct_PIO_IFDGSR)

#define PIOB_SCDR  	MMIO_REG(0x400e0e8c, uint32_t)
#define PIOB_SCDR_s	MMIO_REG(0x400e0e8c, struct __struct_PIO_SCDR)

#define PIOB_OWER  	MMIO_REG(0x400e0ea0, uint32_t)
#define PIOB_OWER_s	MMIO_REG(0x400e0ea0, struct __struct_PIO_OWER)

#define PIOB_OWDR  	MMIO_REG(0x400e0ea4, uint32_t)
#define PIOB_OWDR_s	MMIO_REG(0x400e0ea4, struct __struct_PIO_OWDR)

#define PIOB_OWSR  	MMIO_REG(0x400e0ea8, uint32_t)
#define PIOB_OWSR_s	MMIO_REG(0x400e0ea8, struct __struct_PIO_OWSR)

#define PIOB_AIMER  	MMIO_REG(0x400e0eb0, uint32_t)
#define PIOB_AIMER_s	MMIO_REG(0x400e0eb0, struct __struct_PIO_AIMER)

#define PIOB_AIMDR  	MMIO_REG(0x400e0eb4, uint32_t)
#define PIOB_AIMDR_s	MMIO_REG(0x400e0eb4, struct __struct_PIO_AIMDR)

#define PIOB_AIMMR  	MMIO_REG(0x400e0eb8, uint32_t)
#define PIOB_AIMMR_s	MMIO_REG(0x400e0eb8, struct __struct_PIO_AIMMR)

#define PIOB_ESR  	MMIO_REG(0x400e0ec0, uint32_t)
#define PIOB_ESR_s	MMIO_REG(0x400e0ec0, struct __struct_PIO_ESR)

#define PIOB_LSR  	MMIO_REG(0x400e0ec4, uint32_t)
#define PIOB_LSR_s	MMIO_REG(0x400e0ec4, struct __struct_PIO_LSR)

#define PIOB_ELSR  	MMIO_REG(0x400e0ec8, uint32_t)
#define PIOB_ELSR_s	MMIO_REG(0x400e0ec8, struct __struct_PIO_ELSR)

#define PIOB_FELLSR  	MMIO_REG(0x400e0ed0, uint32_t)
#define PIOB_FELLSR_s	MMIO_REG(0x400e0ed0, struct __struct_PIO_FELLSR)

#define PIOB_REHLSR  	MMIO_REG(0x400e0ed4, uint32_t)
#define PIOB_REHLSR_s	MMIO_REG(0x400e0ed4, struct __struct_PIO_REHLSR)

#define PIOB_FRLHSR  	MMIO_REG(0x400e0ed8, uint32_t)
#define PIOB_FRLHSR_s	MMIO_REG(0x400e0ed8, struct __struct_PIO_FRLHSR)

#define PIOB_LOCKSR  	MMIO_REG(0x400e0ee0, uint32_t)
#define PIOB_LOCKSR_s	MMIO_REG(0x400e0ee0, struct __struct_PIO_LOCKSR)

#define PIOB_WPMR  	MMIO_REG(0x400e0ee4, uint32_t)
#define PIOB_WPMR_s	MMIO_REG(0x400e0ee4, struct __struct_PIO_WPMR)

#define PIOB_WPSR  	MMIO_REG(0x400e0ee8, uint32_t)
#define PIOB_WPSR_s	MMIO_REG(0x400e0ee8, struct __struct_PIO_WPSR)


// PIOC

#define PIOC_BASE_ADDR	0x400e1000

#define PIOC_PER  	MMIO_REG(0x400e1000, uint32_t)
#define PIOC_PER_s	MMIO_REG(0x400e1000, struct __struct_PIO_PER)

#define PIOC_PDR  	MMIO_REG(0x400e1004, uint32_t)
#define PIOC_PDR_s	MMIO_REG(0x400e1004, struct __struct_PIO_PDR)

#define PIOC_PSR  	MMIO_REG(0x400e1008, uint32_t)
#define PIOC_PSR_s	MMIO_REG(0x400e1008, struct __struct_PIO_PSR)

#define PIOC_OER  	MMIO_REG(0x400e1010, uint32_t)
#define PIOC_OER_s	MMIO_REG(0x400e1010, struct __struct_PIO_OER)

#define PIOC_ODR  	MMIO_REG(0x400e1014, uint32_t)
#define PIOC_ODR_s	MMIO_REG(0x400e1014, struct __struct_PIO_ODR)

#define PIOC_OSR  	MMIO_REG(0x400e1018, uint32_t)
#define PIOC_OSR_s	MMIO_REG(0x400e1018, struct __struct_PIO_OSR)

#define PIOC_IFER  	MMIO_REG(0x400e1020, uint32_t)
#define PIOC_IFER_s	MMIO_REG(0x400e1020, struct __struct_PIO_IFER)

#define PIOC_IFDR  	MMIO_REG(0x400e1024, uint32_t)
#define PIOC_IFDR_s	MMIO_REG(0x400e1024, struct __struct_PIO_IFDR)

#define PIOC_IFSR  	MMIO_REG(0x400e1028, uint32_t)
#define PIOC_IFSR_s	MMIO_REG(0x400e1028, struct __struct_PIO_IFSR)

#define PIOC_SODR  	MMIO_REG(0x400e1030, uint32_t)
#define PIOC_SODR_s	MMIO_REG(0x400e1030, struct __struct_PIO_SODR)

#define PIOC_CODR  	MMIO_REG(0x400e1034, uint32_t)
#define PIOC_CODR_s	MMIO_REG(0x400e1034, struct __struct_PIO_CODR)

#define PIOC_ODSR  	MMIO_REG(0x400e1038, uint32_t)
#define PIOC_ODSR_s	MMIO_REG(0x400e1038, struct __struct_PIO_ODSR)

#define PIOC_PDSR  	MMIO_REG(0x400e103c, uint32_t)
#define PIOC_PDSR_s	MMIO_REG(0x400e103c, struct __struct_PIO_PDSR)

#define PIOC_IER  	MMIO_REG(0x400e1040, uint32_t)
#define PIOC_IER_s	MMIO_REG(0x400e1040, struct __struct_PIO_IER)

#define PIOC_IDR  	MMIO_REG(0x400e1044, uint32_t)
#define PIOC_IDR_s	MMIO_REG(0x400e1044, struct __struct_PIO_IDR)

#define PIOC_IMR  	MMIO_REG(0x400e1048, uint32_t)
#define PIOC_IMR_s	MMIO_REG(0x400e1048, struct __struct_PIO_IMR)

#define PIOC_ISR  	MMIO_REG(0x400e104c, uint32_t)
#define PIOC_ISR_s	MMIO_REG(0x400e104c, struct __struct_PIO_ISR)

#define PIOC_MDER  	MMIO_REG(0x400e1050, uint32_t)
#define PIOC_MDER_s	MMIO_REG(0x400e1050, struct __struct_PIO_MDER)

#define PIOC_MDDR  	MMIO_REG(0x400e1054, uint32_t)
#define PIOC_MDDR_s	MMIO_REG(0x400e1054, struct __struct_PIO_MDDR)

#define PIOC_MDSR  	MMIO_REG(0x400e1058, uint32_t)
#define PIOC_MDSR_s	MMIO_REG(0x400e1058, struct __struct_PIO_MDSR)

#define PIOC_PUDR  	MMIO_REG(0x400e1060, uint32_t)
#define PIOC_PUDR_s	MMIO_REG(0x400e1060, struct __struct_PIO_PUDR)

#define PIOC_PUER  	MMIO_REG(0x400e1064, uint32_t)
#define PIOC_PUER_s	MMIO_REG(0x400e1064, struct __struct_PIO_PUER)

#define PIOC_PUSR  	MMIO_REG(0x400e1068, uint32_t)
#define PIOC_PUSR_s	MMIO_REG(0x400e1068, struct __struct_PIO_PUSR)

#define PIOC_ABSR  	MMIO_REG(0x400e1070, uint32_t)
#define PIOC_ABSR_s	MMIO_REG(0x400e1070, struct __struct_PIO_ABSR)

#define PIOC_SCIFSR  	MMIO_REG(0x400e1080, uint32_t)
#define PIOC_SCIFSR_s	MMIO_REG(0x400e1080, struct __struct_PIO_SCIFSR)

#define PIOC_DIFSR  	MMIO_REG(0x400e1084, uint32_t)
#define PIOC_DIFSR_s	MMIO_REG(0x400e1084, struct __struct_PIO_DIFSR)

#define PIOC_IFDGSR  	MMIO_REG(0x400e1088, uint32_t)
#define PIOC_IFDGSR_s	MMIO_REG(0x400e1088, struct __struct_PIO_IFDGSR)

#define PIOC_SCDR  	MMIO_REG(0x400e108c, uint32_t)
#define PIOC_SCDR_s	MMIO_REG(0x400e108c, struct __struct_PIO_SCDR)

#define PIOC_OWER  	MMIO_REG(0x400e10a0, uint32_t)
#define PIOC_OWER_s	MMIO_REG(0x400e10a0, struct __struct_PIO_OWER)

#define PIOC_OWDR  	MMIO_REG(0x400e10a4, uint32_t)
#define PIOC_OWDR_s	MMIO_REG(0x400e10a4, struct __struct_PIO_OWDR)

#define PIOC_OWSR  	MMIO_REG(0x400e10a8, uint32_t)
#define PIOC_OWSR_s	MMIO_REG(0x400e10a8, struct __struct_PIO_OWSR)

#define PIOC_AIMER  	MMIO_REG(0x400e10b0, uint32_t)
#define PIOC_AIMER_s	MMIO_REG(0x400e10b0, struct __struct_PIO_AIMER)

#define PIOC_AIMDR  	MMIO_REG(0x400e10b4, uint32_t)
#define PIOC_AIMDR_s	MMIO_REG(0x400e10b4, struct __struct_PIO_AIMDR)

#define PIOC_AIMMR  	MMIO_REG(0x400e10b8, uint32_t)
#define PIOC_AIMMR_s	MMIO_REG(0x400e10b8, struct __struct_PIO_AIMMR)

#define PIOC_ESR  	MMIO_REG(0x400e10c0, uint32_t)
#define PIOC_ESR_s	MMIO_REG(0x400e10c0, struct __struct_PIO_ESR)

#define PIOC_LSR  	MMIO_REG(0x400e10c4, uint32_t)
#define PIOC_LSR_s	MMIO_REG(0x400e10c4, struct __struct_PIO_LSR)

#define PIOC_ELSR  	MMIO_REG(0x400e10c8, uint32_t)
#define PIOC_ELSR_s	MMIO_REG(0x400e10c8, struct __struct_PIO_ELSR)

#define PIOC_FELLSR  	MMIO_REG(0x400e10d0, uint32_t)
#define PIOC_FELLSR_s	MMIO_REG(0x400e10d0, struct __struct_PIO_FELLSR)

#define PIOC_REHLSR  	MMIO_REG(0x400e10d4, uint32_t)
#define PIOC_REHLSR_s	MMIO_REG(0x400e10d4, struct __struct_PIO_REHLSR)

#define PIOC_FRLHSR  	MMIO_REG(0x400e10d8, uint32_t)
#define PIOC_FRLHSR_s	MMIO_REG(0x400e10d8, struct __struct_PIO_FRLHSR)

#define PIOC_LOCKSR  	MMIO_REG(0x400e10e0, uint32_t)
#define PIOC_LOCKSR_s	MMIO_REG(0x400e10e0, struct __struct_PIO_LOCKSR)

#define PIOC_WPMR  	MMIO_REG(0x400e10e4, uint32_t)
#define PIOC_WPMR_s	MMIO_REG(0x400e10e4, struct __struct_PIO_WPMR)

#define PIOC_WPSR  	MMIO_REG(0x400e10e8, uint32_t)
#define PIOC_WPSR_s	MMIO_REG(0x400e10e8, struct __struct_PIO_WPSR)


// RSTC

#define RSTC_BASE_ADDR	0x400e1200

#define RSTC_CR  	MMIO_REG(0x400e1200, uint32_t)
#define RSTC_CR_s	MMIO_REG(0x400e1200, struct __struct_RSTC_CR)

#define RSTC_SR  	MMIO_REG(0x400e1204, uint32_t)
#define RSTC_SR_s	MMIO_REG(0x400e1204, struct __struct_RSTC_SR)

#define RSTC_MR  	MMIO_REG(0x400e1208, uint32_t)
#define RSTC_MR_s	MMIO_REG(0x400e1208, struct __struct_RSTC_MR)


// SUPC

#define SUPC_BASE_ADDR	0x400e1210

#define SUPC_CR  	MMIO_REG(0x400e1210, uint32_t)
#define SUPC_CR_s	MMIO_REG(0x400e1210, struct __struct_SUPC_CR)

#define SUPC_SMMR  	MMIO_REG(0x400e1214, uint32_t)
#define SUPC_SMMR_s	MMIO_REG(0x400e1214, struct __struct_SUPC_SMMR)

#define SUPC_MR  	MMIO_REG(0x400e1218, uint32_t)
#define SUPC_MR_s	MMIO_REG(0x400e1218, struct __struct_SUPC_MR)

#define SUPC_WUMR  	MMIO_REG(0x400e121c, uint32_t)
#define SUPC_WUMR_s	MMIO_REG(0x400e121c, struct __struct_SUPC_WUMR)

#define SUPC_WUIR  	MMIO_REG(0x400e1220, uint32_t)
#define SUPC_WUIR_s	MMIO_REG(0x400e1220, struct __struct_SUPC_WUIR)

#define SUPC_SR  	MMIO_REG(0x400e1224, uint32_t)
#define SUPC_SR_s	MMIO_REG(0x400e1224, struct __struct_SUPC_SR)


// RTT

#define RTT_BASE_ADDR	0x400e1230

#define RTT_MR  	MMIO_REG(0x400e1230, uint32_t)
#define RTT_MR_s	MMIO_REG(0x400e1230, struct __struct_RTT_MR)

#define RTT_AR  	MMIO_REG(0x400e1234, uint32_t)
#define RTT_AR_s	MMIO_REG(0x400e1234, struct __struct_RTT_AR)

#define RTT_VR  	MMIO_REG(0x400e1238, uint32_t)
#define RTT_VR_s	MMIO_REG(0x400e1238, struct __struct_RTT_VR)

#define RTT_SR  	MMIO_REG(0x400e123c, uint32_t)
#define RTT_SR_s	MMIO_REG(0x400e123c, struct __struct_RTT_SR)


// WDT

#define WDT_BASE_ADDR	0x400e1250

#define WDT_CR  	MMIO_REG(0x400e1250, uint32_t)
#define WDT_CR_s	MMIO_REG(0x400e1250, struct __struct_WDT_CR)

#define WDT_MR  	MMIO_REG(0x400e1254, uint32_t)
#define WDT_MR_s	MMIO_REG(0x400e1254, struct __struct_WDT_MR)

#define WDT_SR  	MMIO_REG(0x400e1258, uint32_t)
#define WDT_SR_s	MMIO_REG(0x400e1258, struct __struct_WDT_SR)


// RTC

#define RTC_BASE_ADDR	0x400e1260

#define RTC_CR  	MMIO_REG(0x400e1260, uint32_t)
#define RTC_CR_s	MMIO_REG(0x400e1260, struct __struct_RTC_CR)

#define RTC_MR  	MMIO_REG(0x400e1264, uint32_t)
#define RTC_MR_s	MMIO_REG(0x400e1264, struct __struct_RTC_MR)

#define RTC_TIMR  	MMIO_REG(0x400e1268, uint32_t)
#define RTC_TIMR_s	MMIO_REG(0x400e1268, struct __struct_RTC_TIMR)

#define RTC_CALR  	MMIO_REG(0x400e126c, uint32_t)
#define RTC_CALR_s	MMIO_REG(0x400e126c, struct __struct_RTC_CALR)

#define RTC_TIMALR  	MMIO_REG(0x400e1270, uint32_t)
#define RTC_TIMALR_s	MMIO_REG(0x400e1270, struct __struct_RTC_TIMALR)

#define RTC_CALALR  	MMIO_REG(0x400e1274, uint32_t)
#define RTC_CALALR_s	MMIO_REG(0x400e1274, struct __struct_RTC_CALALR)

#define RTC_SR  	MMIO_REG(0x400e1278, uint32_t)
#define RTC_SR_s	MMIO_REG(0x400e1278, struct __struct_RTC_SR)

#define RTC_SCCR  	MMIO_REG(0x400e127c, uint32_t)
#define RTC_SCCR_s	MMIO_REG(0x400e127c, struct __struct_RTC_SCCR)

#define RTC_IER  	MMIO_REG(0x400e1280, uint32_t)
#define RTC_IER_s	MMIO_REG(0x400e1280, struct __struct_RTC_IER)

#define RTC_IDR  	MMIO_REG(0x400e1284, uint32_t)
#define RTC_IDR_s	MMIO_REG(0x400e1284, struct __struct_RTC_IDR)

#define RTC_IMR  	MMIO_REG(0x400e1288, uint32_t)
#define RTC_IMR_s	MMIO_REG(0x400e1288, struct __struct_RTC_IMR)

#define RTC_VER  	MMIO_REG(0x400e128c, uint32_t)
#define RTC_VER_s	MMIO_REG(0x400e128c, struct __struct_RTC_VER)

#define RTC_WPMR  	MMIO_REG(0x400e1344, uint32_t)
#define RTC_WPMR_s	MMIO_REG(0x400e1344, struct __struct_RTC_WPMR)


// GPBR

#define GPBR_BASE_ADDR	0x400e1290

#define GPBR_SYS_GPBR0(i)  	MMIO_REG(0x400e1290 + (i)*4, uint32_t)


// SYSTICK

#define SYSTICK_BASE_ADDR	0xe000e010

#define SYSTICK_CSR  	MMIO_REG(0xe000e010, uint32_t)
#define SYSTICK_CSR_s	MMIO_REG(0xe000e010, struct __struct_SYSTICK_CSR)

#define SYSTICK_RVR  	MMIO_REG(0xe000e014, uint32_t)
#define SYSTICK_RVR_s	MMIO_REG(0xe000e014, struct __struct_SYSTICK_RVR)

#define SYSTICK_CVR  	MMIO_REG(0xe000e018, uint32_t)
#define SYSTICK_CVR_s	MMIO_REG(0xe000e018, struct __struct_SYSTICK_CVR)

#define SYSTICK_CALIB  	MMIO_REG(0xe000e01c, uint32_t)
#define SYSTICK_CALIB_s	MMIO_REG(0xe000e01c, struct __struct_SYSTICK_CALIB)


// SCB

#define SCB_BASE_ADDR	0xe000e000

#define SCB_ACTLR  	MMIO_REG(0xe000e008, uint32_t)
#define SCB_ACTLR_s	MMIO_REG(0xe000e008, struct __struct_SCB_ACTLR)

#define SCB_CPUID  	MMIO_REG(0xe000ed00, uint32_t)
#define SCB_CPUID_s	MMIO_REG(0xe000ed00, struct __struct_SCB_CPUID)

#define SCB_ICSR  	MMIO_REG(0xe000ed04, uint32_t)
#define SCB_ICSR_s	MMIO_REG(0xe000ed04, struct __struct_SCB_ICSR)

#define SCB_VTOR  	MMIO_REG(0xe000ed08, uint32_t)
#define SCB_VTOR_s	MMIO_REG(0xe000ed08, struct __struct_SCB_VTOR)

#define SCB_AIRCR  	MMIO_REG(0xe000ed0c, uint32_t)
#define SCB_AIRCR_s	MMIO_REG(0xe000ed0c, struct __struct_SCB_AIRCR)

#define SCB_SCR  	MMIO_REG(0xe000ed10, uint32_t)
#define SCB_SCR_s	MMIO_REG(0xe000ed10, struct __struct_SCB_SCR)

#define SCB_CCR  	MMIO_REG(0xe000ed14, uint32_t)
#define SCB_CCR_s	MMIO_REG(0xe000ed14, struct __struct_SCB_CCR)

#define SCB_SHPR1  	MMIO_REG(0xe000ed18, uint32_t)
#define SCB_SHPR1_s	MMIO_REG(0xe000ed18, struct __struct_SCB_SHPR1)

#define SCB_SHPR2  	MMIO_REG(0xe000ed1c, uint32_t)
#define SCB_SHPR2_s	MMIO_REG(0xe000ed1c, struct __struct_SCB_SHPR2)

#define SCB_SHPR3  	MMIO_REG(0xe000ed20, uint32_t)
#define SCB_SHPR3_s	MMIO_REG(0xe000ed20, struct __struct_SCB_SHPR3)

#define SCB_SHCSR  	MMIO_REG(0xe000ed24, uint32_t)
#define SCB_SHCSR_s	MMIO_REG(0xe000ed24, struct __struct_SCB_SHCSR)

#define SCB_CFSR  	MMIO_REG(0xe000ed28, uint32_t)
#define SCB_CFSR_s	MMIO_REG(0xe000ed28, struct __struct_SCB_CFSR)

#define SCB_HFSR  	MMIO_REG(0xe000ed2c, uint32_t)
#define SCB_HFSR_s	MMIO_REG(0xe000ed2c, struct __struct_SCB_HFSR)

#define SCB_MMFAR  	MMIO_REG(0xe000ed34, uint32_t)

#define SCB_BFAR  	MMIO_REG(0xe000ed38, uint32_t)

#define SCB_AFSR  	MMIO_REG(0xe000ed3c, uint32_t)


// NVIC

#define NVIC_BASE_ADDR	0xe000e100

#define NVIC_ISER0  	MMIO_REG(0xe000e100, uint32_t)
#define NVIC_ISER0_s	MMIO_REG(0xe000e100, struct __struct_NVIC_ISER0)

#define NVIC_ICER0  	MMIO_REG(0xe000e180, uint32_t)
#define NVIC_ICER0_s	MMIO_REG(0xe000e180, struct __struct_NVIC_ICER0)

#define NVIC_ISPR0  	MMIO_REG(0xe000e200, uint32_t)
#define NVIC_ISPR0_s	MMIO_REG(0xe000e200, struct __struct_NVIC_ISPR0)

#define NVIC_ICPR0  	MMIO_REG(0xe000e280, uint32_t)
#define NVIC_ICPR0_s	MMIO_REG(0xe000e280, struct __struct_NVIC_ICPR0)

#define NVIC_IABR0  	MMIO_REG(0xe000e300, uint32_t)
#define NVIC_IABR0_s	MMIO_REG(0xe000e300, struct __struct_NVIC_IABR0)

#define NVIC_IPR0  	MMIO_REG(0xe000e400, uint32_t)
#define NVIC_IPR0_s	MMIO_REG(0xe000e400, struct __struct_NVIC_IPR0)

#define NVIC_IPR1  	MMIO_REG(0xe000e404, uint32_t)
#define NVIC_IPR1_s	MMIO_REG(0xe000e404, struct __struct_NVIC_IPR1)

#define NVIC_IPR2  	MMIO_REG(0xe000e408, uint32_t)
#define NVIC_IPR2_s	MMIO_REG(0xe000e408, struct __struct_NVIC_IPR2)

#define NVIC_IPR3  	MMIO_REG(0xe000e40c, uint32_t)
#define NVIC_IPR3_s	MMIO_REG(0xe000e40c, struct __struct_NVIC_IPR3)

#define NVIC_IPR4  	MMIO_REG(0xe000e410, uint32_t)
#define NVIC_IPR4_s	MMIO_REG(0xe000e410, struct __struct_NVIC_IPR4)

#define NVIC_IPR5  	MMIO_REG(0xe000e414, uint32_t)
#define NVIC_IPR5_s	MMIO_REG(0xe000e414, struct __struct_NVIC_IPR5)

#define NVIC_IPR6  	MMIO_REG(0xe000e418, uint32_t)
#define NVIC_IPR6_s	MMIO_REG(0xe000e418, struct __struct_NVIC_IPR6)

#define NVIC_IPR7  	MMIO_REG(0xe000e41c, uint32_t)
#define NVIC_IPR7_s	MMIO_REG(0xe000e41c, struct __struct_NVIC_IPR7)

#define NVIC_STIR  	MMIO_REG(0xe000ef00, uint32_t)
#define NVIC_STIR_s	MMIO_REG(0xe000ef00, struct __struct_NVIC_STIR)


// MPU

#define MPU_BASE_ADDR	0xe000ed90

#define MPU_TYPE  	MMIO_REG(0xe000ed90, uint32_t)
#define MPU_TYPE_s	MMIO_REG(0xe000ed90, struct __struct_MPU_TYPE)

#define MPU_CTRL  	MMIO_REG(0xe000ed94, uint32_t)
#define MPU_CTRL_s	MMIO_REG(0xe000ed94, struct __struct_MPU_CTRL)

#define MPU_RNR  	MMIO_REG(0xe000ed98, uint32_t)
#define MPU_RNR_s	MMIO_REG(0xe000ed98, struct __struct_MPU_RNR)

#define MPU_RBAR(i)  	MMIO_REG(0xe000ed9c + (i)*8, uint32_t)
#define MPU_RBAR_s(i)	MMIO_REG(0xe000ed9c + (i)*8, struct __struct_MPU_RBAR)

#define MPU_RASR(i)  	MMIO_REG(0xe000eda0 + (i)*8, uint32_t)
#define MPU_RASR_s(i)	MMIO_REG(0xe000eda0 + (i)*8, struct __struct_MPU_RASR)


#endif // _SAM3U_H_

