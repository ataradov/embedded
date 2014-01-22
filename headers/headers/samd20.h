// This file was generated automatically. Visit https://github.com/ataradov/embedded to get the source.
#ifndef _SAMD20_H_
#define _SAMD20_H_
#include <stdint.h>
#define MMIO_REG(addr, type) (*(volatile type *)(addr))

// Peripherals definitions

// PAC0
#define PAC0_WPCLR_PM     	(1 << 1)
#define PAC0_WPCLR_SYSCTRL     	(1 << 2)
#define PAC0_WPCLR_GCLK     	(1 << 3)
#define PAC0_WPCLR_WDT     	(1 << 4)
#define PAC0_WPCLR_RTC     	(1 << 5)
#define PAC0_WPCLR_EIC     	(1 << 6)

struct __struct_PAC0_WPCLR
{
  uint32_t		: 1;
  uint32_t	pm	: 1;
  uint32_t	sysctrl	: 1;
  uint32_t	gclk	: 1;
  uint32_t	wdt	: 1;
  uint32_t	rtc	: 1;
  uint32_t	eic	: 1;
  uint32_t		: 25;
};

#define PAC0_WPSET_PM     	(1 << 1)
#define PAC0_WPSET_SYSCTRL     	(1 << 2)
#define PAC0_WPSET_GCLK     	(1 << 3)
#define PAC0_WPSET_WDT     	(1 << 4)
#define PAC0_WPSET_RTC     	(1 << 5)
#define PAC0_WPSET_EIC     	(1 << 6)

struct __struct_PAC0_WPSET
{
  uint32_t		: 1;
  uint32_t	pm	: 1;
  uint32_t	sysctrl	: 1;
  uint32_t	gclk	: 1;
  uint32_t	wdt	: 1;
  uint32_t	rtc	: 1;
  uint32_t	eic	: 1;
  uint32_t		: 25;
};


// PAC1
#define PAC1_WPCLR_DSU     	(1 << 1)
#define PAC1_WPCLR_NVMCTRL     	(1 << 2)
#define PAC1_WPCLR_PORT     	(1 << 3)

struct __struct_PAC1_WPCLR
{
  uint32_t		: 1;
  uint32_t	dsu	: 1;
  uint32_t	nvmctrl	: 1;
  uint32_t	port	: 1;
  uint32_t		: 28;
};

#define PAC1_WPSET_DSU     	(1 << 1)
#define PAC1_WPSET_NVMCTRL     	(1 << 2)
#define PAC1_WPSET_PORT     	(1 << 3)

struct __struct_PAC1_WPSET
{
  uint32_t		: 1;
  uint32_t	dsu	: 1;
  uint32_t	nvmctrl	: 1;
  uint32_t	port	: 1;
  uint32_t		: 28;
};


// PAC2
#define PAC2_WPCLR_EVSYS     	(1 << 1)
#define PAC2_WPCLR_SERCOM0     	(1 << 2)
#define PAC2_WPCLR_SERCOM1     	(1 << 3)
#define PAC2_WPCLR_SERCOM2     	(1 << 4)
#define PAC2_WPCLR_SERCOM3     	(1 << 5)
#define PAC2_WPCLR_SERCOM4     	(1 << 6)
#define PAC2_WPCLR_SERCOM5     	(1 << 7)
#define PAC2_WPCLR_TC0     	(1 << 8)
#define PAC2_WPCLR_TC1     	(1 << 9)
#define PAC2_WPCLR_TC2     	(1 << 10)
#define PAC2_WPCLR_TC3     	(1 << 11)
#define PAC2_WPCLR_TC4     	(1 << 12)
#define PAC2_WPCLR_TC5     	(1 << 13)
#define PAC2_WPCLR_TC6     	(1 << 14)
#define PAC2_WPCLR_TC7     	(1 << 15)
#define PAC2_WPCLR_ADC     	(1 << 16)
#define PAC2_WPCLR_AC     	(1 << 17)
#define PAC2_WPCLR_DAC     	(1 << 18)
#define PAC2_WPCLR_PTC     	(1 << 19)

struct __struct_PAC2_WPCLR
{
  uint32_t		: 1;
  uint32_t	evsys	: 1;
  uint32_t	sercom0	: 1;
  uint32_t	sercom1	: 1;
  uint32_t	sercom2	: 1;
  uint32_t	sercom3	: 1;
  uint32_t	sercom4	: 1;
  uint32_t	sercom5	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	tc3	: 1;
  uint32_t	tc4	: 1;
  uint32_t	tc5	: 1;
  uint32_t	tc6	: 1;
  uint32_t	tc7	: 1;
  uint32_t	adc	: 1;
  uint32_t	ac	: 1;
  uint32_t	dac	: 1;
  uint32_t	ptc	: 1;
  uint32_t		: 12;
};

#define PAC2_WPSET_EVSYS     	(1 << 1)
#define PAC2_WPSET_SERCOM0     	(1 << 2)
#define PAC2_WPSET_SERCOM1     	(1 << 3)
#define PAC2_WPSET_SERCOM2     	(1 << 4)
#define PAC2_WPSET_SERCOM3     	(1 << 5)
#define PAC2_WPSET_SERCOM4     	(1 << 6)
#define PAC2_WPSET_SERCOM5     	(1 << 7)
#define PAC2_WPSET_TC0     	(1 << 8)
#define PAC2_WPSET_TC1     	(1 << 9)
#define PAC2_WPSET_TC2     	(1 << 10)
#define PAC2_WPSET_TC3     	(1 << 11)
#define PAC2_WPSET_TC4     	(1 << 12)
#define PAC2_WPSET_TC5     	(1 << 13)
#define PAC2_WPSET_TC6     	(1 << 14)
#define PAC2_WPSET_TC7     	(1 << 15)
#define PAC2_WPSET_ADC     	(1 << 16)
#define PAC2_WPSET_AC     	(1 << 17)
#define PAC2_WPSET_DAC     	(1 << 18)
#define PAC2_WPSET_PTC     	(1 << 19)

struct __struct_PAC2_WPSET
{
  uint32_t		: 1;
  uint32_t	evsys	: 1;
  uint32_t	sercom0	: 1;
  uint32_t	sercom1	: 1;
  uint32_t	sercom2	: 1;
  uint32_t	sercom3	: 1;
  uint32_t	sercom4	: 1;
  uint32_t	sercom5	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	tc3	: 1;
  uint32_t	tc4	: 1;
  uint32_t	tc5	: 1;
  uint32_t	tc6	: 1;
  uint32_t	tc7	: 1;
  uint32_t	adc	: 1;
  uint32_t	ac	: 1;
  uint32_t	dac	: 1;
  uint32_t	ptc	: 1;
  uint32_t		: 12;
};


// PM
#define PM_CTRL_CFDEN     	(1 << 2)
#define PM_CTRL_BKUPCLK     	(1 << 4)

struct __struct_PM_CTRL
{
  uint8_t		: 2;
  uint8_t	cfden	: 1;
  uint8_t		: 1;
  uint8_t	bkupclk	: 1;
  uint8_t		: 3;
};

#define PM_SLEEP_IDLE(x)  	((x) << 0)
#define PM_SLEEP_IDLE_m   	0x00000003
#define PM_SLEEP_IDLE_v(x)	(((x) >> 0) & 0x3)

struct __struct_PM_SLEEP
{
  uint8_t	idle	: 2;
  uint8_t		: 6;
};

#define PM_CPUSEL_CPUDIV(x)  	((x) << 0)
#define PM_CPUSEL_CPUDIV_m   	0x00000007
#define PM_CPUSEL_CPUDIV_v(x)	(((x) >> 0) & 0x7)
#define PM_CPUSEL_CPUDIV_1	0x0
#define PM_CPUSEL_CPUDIV_2	0x1
#define PM_CPUSEL_CPUDIV_4	0x2
#define PM_CPUSEL_CPUDIV_8	0x3
#define PM_CPUSEL_CPUDIV_16	0x4
#define PM_CPUSEL_CPUDIV_32	0x5
#define PM_CPUSEL_CPUDIV_64	0x6
#define PM_CPUSEL_CPUDIV_128	0x7

struct __struct_PM_CPUSEL
{
  uint8_t	cpudiv	: 3;
  uint8_t		: 5;
};

#define PM_APBASEL_APBADIV(x)  	((x) << 0)
#define PM_APBASEL_APBADIV_m   	0x00000007
#define PM_APBASEL_APBADIV_v(x)	(((x) >> 0) & 0x7)
#define PM_APBASEL_APBADIV_1	0x0
#define PM_APBASEL_APBADIV_2	0x1
#define PM_APBASEL_APBADIV_4	0x2
#define PM_APBASEL_APBADIV_8	0x3
#define PM_APBASEL_APBADIV_16	0x4
#define PM_APBASEL_APBADIV_32	0x5
#define PM_APBASEL_APBADIV_64	0x6
#define PM_APBASEL_APBADIV_128	0x7

struct __struct_PM_APBASEL
{
  uint8_t	apbadiv	: 3;
  uint8_t		: 5;
};

#define PM_APBBSEL_APBBDIV(x)  	((x) << 0)
#define PM_APBBSEL_APBBDIV_m   	0x00000007
#define PM_APBBSEL_APBBDIV_v(x)	(((x) >> 0) & 0x7)
#define PM_APBBSEL_APBBDIV_1	0x0
#define PM_APBBSEL_APBBDIV_2	0x1
#define PM_APBBSEL_APBBDIV_4	0x2
#define PM_APBBSEL_APBBDIV_8	0x3
#define PM_APBBSEL_APBBDIV_16	0x4
#define PM_APBBSEL_APBBDIV_32	0x5
#define PM_APBBSEL_APBBDIV_64	0x6
#define PM_APBBSEL_APBBDIV_128	0x7

struct __struct_PM_APBBSEL
{
  uint8_t	apbbdiv	: 3;
  uint8_t		: 5;
};

#define PM_APBCSEL_APBCDIV(x)  	((x) << 0)
#define PM_APBCSEL_APBCDIV_m   	0x00000007
#define PM_APBCSEL_APBCDIV_v(x)	(((x) >> 0) & 0x7)
#define PM_APBCSEL_APBCDIV_1	0x0
#define PM_APBCSEL_APBCDIV_2	0x1
#define PM_APBCSEL_APBCDIV_4	0x2
#define PM_APBCSEL_APBCDIV_8	0x3
#define PM_APBCSEL_APBCDIV_16	0x4
#define PM_APBCSEL_APBCDIV_32	0x5
#define PM_APBCSEL_APBCDIV_64	0x6
#define PM_APBCSEL_APBCDIV_128	0x7

struct __struct_PM_APBCSEL
{
  uint8_t	apbcdiv	: 3;
  uint8_t		: 5;
};

#define PM_AHBMASK_HPB0     	(1 << 0)
#define PM_AHBMASK_HPB1     	(1 << 1)
#define PM_AHBMASK_HPB2     	(1 << 2)
#define PM_AHBMASK_DSU     	(1 << 3)
#define PM_AHBMASK_NVMCTRL     	(1 << 4)

struct __struct_PM_AHBMASK
{
  uint32_t	hpb0	: 1;
  uint32_t	hpb1	: 1;
  uint32_t	hpb2	: 1;
  uint32_t	dsu	: 1;
  uint32_t	nvmctrl	: 1;
  uint32_t		: 27;
};

#define PM_APBAMASK_PAC0     	(1 << 0)
#define PM_APBAMASK_PM     	(1 << 1)
#define PM_APBAMASK_SYSCTRL     	(1 << 2)
#define PM_APBAMASK_GCLK     	(1 << 3)
#define PM_APBAMASK_WDT     	(1 << 4)
#define PM_APBAMASK_RTC     	(1 << 5)
#define PM_APBAMASK_EIC     	(1 << 6)

struct __struct_PM_APBAMASK
{
  uint32_t	pac0	: 1;
  uint32_t	pm	: 1;
  uint32_t	sysctrl	: 1;
  uint32_t	gclk	: 1;
  uint32_t	wdt	: 1;
  uint32_t	rtc	: 1;
  uint32_t	eic	: 1;
  uint32_t		: 25;
};

#define PM_APBBMASK_PAC1     	(1 << 0)
#define PM_APBBMASK_DSU     	(1 << 1)
#define PM_APBBMASK_NVMCTRL     	(1 << 2)
#define PM_APBBMASK_PORT     	(1 << 3)

struct __struct_PM_APBBMASK
{
  uint32_t	pac1	: 1;
  uint32_t	dsu	: 1;
  uint32_t	nvmctrl	: 1;
  uint32_t	port	: 1;
  uint32_t		: 28;
};

#define PM_APBCMASK_PAC2     	(1 << 0)
#define PM_APBCMASK_EVSYS     	(1 << 1)
#define PM_APBCMASK_SERCOM0     	(1 << 2)
#define PM_APBCMASK_SERCOM1     	(1 << 3)
#define PM_APBCMASK_SERCOM2     	(1 << 4)
#define PM_APBCMASK_SERCOM3     	(1 << 5)
#define PM_APBCMASK_SERCOM4     	(1 << 6)
#define PM_APBCMASK_SERCOM5     	(1 << 7)
#define PM_APBCMASK_TC0     	(1 << 8)
#define PM_APBCMASK_TC1     	(1 << 9)
#define PM_APBCMASK_TC2     	(1 << 10)
#define PM_APBCMASK_TC3     	(1 << 11)
#define PM_APBCMASK_TC4     	(1 << 12)
#define PM_APBCMASK_TC5     	(1 << 13)
#define PM_APBCMASK_TC6     	(1 << 14)
#define PM_APBCMASK_TC7     	(1 << 15)
#define PM_APBCMASK_ADC     	(1 << 16)
#define PM_APBCMASK_AC     	(1 << 17)
#define PM_APBCMASK_DAC     	(1 << 18)
#define PM_APBCMASK_PTC     	(1 << 19)

struct __struct_PM_APBCMASK
{
  uint32_t	pac2	: 1;
  uint32_t	evsys	: 1;
  uint32_t	sercom0	: 1;
  uint32_t	sercom1	: 1;
  uint32_t	sercom2	: 1;
  uint32_t	sercom3	: 1;
  uint32_t	sercom4	: 1;
  uint32_t	sercom5	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	tc3	: 1;
  uint32_t	tc4	: 1;
  uint32_t	tc5	: 1;
  uint32_t	tc6	: 1;
  uint32_t	tc7	: 1;
  uint32_t	adc	: 1;
  uint32_t	ac	: 1;
  uint32_t	dac	: 1;
  uint32_t	ptc	: 1;
  uint32_t		: 12;
};

#define PM_INTENCLR_CKRDY     	(1 << 0)
#define PM_INTENCLR_CFD     	(1 << 1)

struct __struct_PM_INTENCLR
{
  uint8_t	ckrdy	: 1;
  uint8_t	cfd	: 1;
  uint8_t		: 6;
};

#define PM_INTENSET_CKRDY     	(1 << 0)
#define PM_INTENSET_CFD     	(1 << 1)

struct __struct_PM_INTENSET
{
  uint8_t	ckrdy	: 1;
  uint8_t	cfd	: 1;
  uint8_t		: 6;
};

#define PM_INTFLAG_CKRDY     	(1 << 0)
#define PM_INTFLAG_CFD     	(1 << 1)

struct __struct_PM_INTFLAG
{
  uint8_t	ckrdy	: 1;
  uint8_t	cfd	: 1;
  uint8_t		: 6;
};

#define PM_RCAUSE_POR     	(1 << 0)
#define PM_RCAUSE_BOD12     	(1 << 1)
#define PM_RCAUSE_BOD33     	(1 << 2)
#define PM_RCAUSE_EXT     	(1 << 4)
#define PM_RCAUSE_WDT     	(1 << 5)
#define PM_RCAUSE_SYST     	(1 << 6)

struct __struct_PM_RCAUSE
{
  uint8_t	por	: 1;
  uint8_t	bod12	: 1;
  uint8_t	bod33	: 1;
  uint8_t		: 1;
  uint8_t	ext	: 1;
  uint8_t	wdt	: 1;
  uint8_t	syst	: 1;
  uint8_t		: 1;
};


// SYSCTRL
#define SYSCTRL_INTENCLR_XOSCRDY     	(1 << 0)
#define SYSCTRL_INTENCLR_XOSC32KRDY     	(1 << 1)
#define SYSCTRL_INTENCLR_OSC32KRDY     	(1 << 2)
#define SYSCTRL_INTENCLR_OSC8MRDY     	(1 << 3)
#define SYSCTRL_INTENCLR_DFLLRDY     	(1 << 4)
#define SYSCTRL_INTENCLR_DFLLOOB     	(1 << 5)
#define SYSCTRL_INTENCLR_DFLLLCKF     	(1 << 6)
#define SYSCTRL_INTENCLR_DFLLLCKC     	(1 << 7)
#define SYSCTRL_INTENCLR_DFLLRCS     	(1 << 8)
#define SYSCTRL_INTENCLR_BOD33RDY     	(1 << 9)
#define SYSCTRL_INTENCLR_BOD33DET     	(1 << 10)
#define SYSCTRL_INTENCLR_B33SRDY     	(1 << 11)

struct __struct_SYSCTRL_INTENCLR
{
  uint32_t	xoscrdy	: 1;
  uint32_t	xosc32krdy	: 1;
  uint32_t	osc32krdy	: 1;
  uint32_t	osc8mrdy	: 1;
  uint32_t	dfllrdy	: 1;
  uint32_t	dflloob	: 1;
  uint32_t	dflllckf	: 1;
  uint32_t	dflllckc	: 1;
  uint32_t	dfllrcs	: 1;
  uint32_t	bod33rdy	: 1;
  uint32_t	bod33det	: 1;
  uint32_t	b33srdy	: 1;
  uint32_t		: 20;
};

#define SYSCTRL_INTENSET_XOSCRDY     	(1 << 0)
#define SYSCTRL_INTENSET_XOSC32KRDY     	(1 << 1)
#define SYSCTRL_INTENSET_OSC32KRDY     	(1 << 2)
#define SYSCTRL_INTENSET_OSC8MRDY     	(1 << 3)
#define SYSCTRL_INTENSET_DFLLRDY     	(1 << 4)
#define SYSCTRL_INTENSET_DFLLOOB     	(1 << 5)
#define SYSCTRL_INTENSET_DFLLLCKF     	(1 << 6)
#define SYSCTRL_INTENSET_DFLLLCKC     	(1 << 7)
#define SYSCTRL_INTENSET_DFLLRCS     	(1 << 8)
#define SYSCTRL_INTENSET_BOD33RDY     	(1 << 9)
#define SYSCTRL_INTENSET_BOD33DET     	(1 << 10)
#define SYSCTRL_INTENSET_B33SRDY     	(1 << 11)

struct __struct_SYSCTRL_INTENSET
{
  uint32_t	xoscrdy	: 1;
  uint32_t	xosc32krdy	: 1;
  uint32_t	osc32krdy	: 1;
  uint32_t	osc8mrdy	: 1;
  uint32_t	dfllrdy	: 1;
  uint32_t	dflloob	: 1;
  uint32_t	dflllckf	: 1;
  uint32_t	dflllckc	: 1;
  uint32_t	dfllrcs	: 1;
  uint32_t	bod33rdy	: 1;
  uint32_t	bod33det	: 1;
  uint32_t	b33srdy	: 1;
  uint32_t		: 20;
};

#define SYSCTRL_INTFLAG_XOSCRDY     	(1 << 0)
#define SYSCTRL_INTFLAG_XOSC32KRDY     	(1 << 1)
#define SYSCTRL_INTFLAG_OSC32KRDY     	(1 << 2)
#define SYSCTRL_INTFLAG_OSC8MRDY     	(1 << 3)
#define SYSCTRL_INTFLAG_DFLLRDY     	(1 << 4)
#define SYSCTRL_INTFLAG_DFLLOOB     	(1 << 5)
#define SYSCTRL_INTFLAG_DFLLLCKF     	(1 << 6)
#define SYSCTRL_INTFLAG_DFLLLCKC     	(1 << 7)
#define SYSCTRL_INTFLAG_DFLLRCS     	(1 << 8)
#define SYSCTRL_INTFLAG_BOD33RDY     	(1 << 9)
#define SYSCTRL_INTFLAG_BOD33DET     	(1 << 10)
#define SYSCTRL_INTFLAG_B33SRDY     	(1 << 11)

struct __struct_SYSCTRL_INTFLAG
{
  uint32_t	xoscrdy	: 1;
  uint32_t	xosc32krdy	: 1;
  uint32_t	osc32krdy	: 1;
  uint32_t	osc8mrdy	: 1;
  uint32_t	dfllrdy	: 1;
  uint32_t	dflloob	: 1;
  uint32_t	dflllckf	: 1;
  uint32_t	dflllckc	: 1;
  uint32_t	dfllrcs	: 1;
  uint32_t	bod33rdy	: 1;
  uint32_t	bod33det	: 1;
  uint32_t	b33srdy	: 1;
  uint32_t		: 20;
};

#define SYSCTRL_PCLKSR_XOSCRDY     	(1 << 0)
#define SYSCTRL_PCLKSR_XOSC32KRDY     	(1 << 1)
#define SYSCTRL_PCLKSR_OSC32KRDY     	(1 << 2)
#define SYSCTRL_PCLKSR_OSC8MRDY     	(1 << 3)
#define SYSCTRL_PCLKSR_DFLLRDY     	(1 << 4)
#define SYSCTRL_PCLKSR_DFLLOOB     	(1 << 5)
#define SYSCTRL_PCLKSR_DFLLLCKF     	(1 << 6)
#define SYSCTRL_PCLKSR_DFLLLCKC     	(1 << 7)
#define SYSCTRL_PCLKSR_DFLLRCS     	(1 << 8)
#define SYSCTRL_PCLKSR_BOD33RDY     	(1 << 9)
#define SYSCTRL_PCLKSR_BOD33DET     	(1 << 10)
#define SYSCTRL_PCLKSR_B33SRDY     	(1 << 11)

struct __struct_SYSCTRL_PCLKSR
{
  uint32_t	xoscrdy	: 1;
  uint32_t	xosc32krdy	: 1;
  uint32_t	osc32krdy	: 1;
  uint32_t	osc8mrdy	: 1;
  uint32_t	dfllrdy	: 1;
  uint32_t	dflloob	: 1;
  uint32_t	dflllckf	: 1;
  uint32_t	dflllckc	: 1;
  uint32_t	dfllrcs	: 1;
  uint32_t	bod33rdy	: 1;
  uint32_t	bod33det	: 1;
  uint32_t	b33srdy	: 1;
  uint32_t		: 20;
};

#define SYSCTRL_XOSC_ENABLE     	(1 << 1)
#define SYSCTRL_XOSC_XTALEN     	(1 << 2)
#define SYSCTRL_XOSC_RUNSTDBY     	(1 << 6)
#define SYSCTRL_XOSC_ONDEMAND     	(1 << 7)
#define SYSCTRL_XOSC_GAIN(x)  	((x) << 8)
#define SYSCTRL_XOSC_GAIN_m   	0x00000700
#define SYSCTRL_XOSC_GAIN_v(x)	(((x) >> 8) & 0x7)
#define SYSCTRL_XOSC_AMPGC     	(1 << 11)
#define SYSCTRL_XOSC_STARTUP(x)  	((x) << 12)
#define SYSCTRL_XOSC_STARTUP_m   	0x0000f000
#define SYSCTRL_XOSC_STARTUP_v(x)	(((x) >> 12) & 0xf)
#define SYSCTRL_XOSC_STARTUP_1	0x0
#define SYSCTRL_XOSC_STARTUP_2	0x1
#define SYSCTRL_XOSC_STARTUP_4	0x2
#define SYSCTRL_XOSC_STARTUP_8	0x3
#define SYSCTRL_XOSC_STARTUP_16	0x4
#define SYSCTRL_XOSC_STARTUP_32	0x5
#define SYSCTRL_XOSC_STARTUP_64	0x6
#define SYSCTRL_XOSC_STARTUP_128	0x7
#define SYSCTRL_XOSC_STARTUP_256	0x8
#define SYSCTRL_XOSC_STARTUP_512	0x9
#define SYSCTRL_XOSC_STARTUP_1024	0xa
#define SYSCTRL_XOSC_STARTUP_2048	0xb
#define SYSCTRL_XOSC_STARTUP_4096	0xc
#define SYSCTRL_XOSC_STARTUP_8192	0xd
#define SYSCTRL_XOSC_STARTUP_16384	0xe
#define SYSCTRL_XOSC_STARTUP_32768	0xf

struct __struct_SYSCTRL_XOSC
{
  uint16_t		: 1;
  uint16_t	enable	: 1;
  uint16_t	xtalen	: 1;
  uint16_t		: 3;
  uint16_t	runstdby	: 1;
  uint16_t	ondemand	: 1;
  uint16_t	gain	: 3;
  uint16_t	ampgc	: 1;
  uint16_t	startup	: 4;
};

#define SYSCTRL_XOSC32K_ENABLE     	(1 << 1)
#define SYSCTRL_XOSC32K_XTALEN     	(1 << 2)
#define SYSCTRL_XOSC32K_EN32K     	(1 << 3)
#define SYSCTRL_XOSC32K_EN1K     	(1 << 4)
#define SYSCTRL_XOSC32K_AAMPEN     	(1 << 5)
#define SYSCTRL_XOSC32K_RUNSTDBY     	(1 << 6)
#define SYSCTRL_XOSC32K_ONDEMAND     	(1 << 7)
#define SYSCTRL_XOSC32K_STARTUP(x)  	((x) << 8)
#define SYSCTRL_XOSC32K_STARTUP_m   	0x00000700
#define SYSCTRL_XOSC32K_STARTUP_v(x)	(((x) >> 8) & 0x7)
#define SYSCTRL_XOSC32K_STARTUP_1	0x0
#define SYSCTRL_XOSC32K_STARTUP_32	0x1
#define SYSCTRL_XOSC32K_STARTUP_2048	0x2
#define SYSCTRL_XOSC32K_STARTUP_4096	0x3
#define SYSCTRL_XOSC32K_STARTUP_16384	0x4
#define SYSCTRL_XOSC32K_STARTUP_32768	0x5
#define SYSCTRL_XOSC32K_STARTUP_65536	0x6
#define SYSCTRL_XOSC32K_STARTUP_131072	0x7
#define SYSCTRL_XOSC32K_WRTLOCK     	(1 << 12)

struct __struct_SYSCTRL_XOSC32K
{
  uint16_t		: 1;
  uint16_t	enable	: 1;
  uint16_t	xtalen	: 1;
  uint16_t	en32k	: 1;
  uint16_t	en1k	: 1;
  uint16_t	aampen	: 1;
  uint16_t	runstdby	: 1;
  uint16_t	ondemand	: 1;
  uint16_t	startup	: 3;
  uint16_t		: 1;
  uint16_t	wrtlock	: 1;
  uint16_t		: 3;
};

#define SYSCTRL_OSC32K_ENABLE     	(1 << 1)
#define SYSCTRL_OSC32K_EN32K     	(1 << 2)
#define SYSCTRL_OSC32K_EN1K     	(1 << 3)
#define SYSCTRL_OSC32K_RUNSTDBY     	(1 << 6)
#define SYSCTRL_OSC32K_ONDEMAND     	(1 << 7)
#define SYSCTRL_OSC32K_STARTUP(x)  	((x) << 8)
#define SYSCTRL_OSC32K_STARTUP_m   	0x00000700
#define SYSCTRL_OSC32K_STARTUP_v(x)	(((x) >> 8) & 0x7)
#define SYSCTRL_OSC32K_STARTUP_1	0x0
#define SYSCTRL_OSC32K_STARTUP_2	0x1
#define SYSCTRL_OSC32K_STARTUP_4	0x2
#define SYSCTRL_OSC32K_STARTUP_8	0x3
#define SYSCTRL_OSC32K_STARTUP_16	0x4
#define SYSCTRL_OSC32K_STARTUP_32	0x5
#define SYSCTRL_OSC32K_STARTUP_64	0x6
#define SYSCTRL_OSC32K_STARTUP_128	0x7
#define SYSCTRL_OSC32K_WRTLOCK     	(1 << 12)
#define SYSCTRL_OSC32K_CALIB(x)  	((x) << 16)
#define SYSCTRL_OSC32K_CALIB_m   	0x007f0000
#define SYSCTRL_OSC32K_CALIB_v(x)	(((x) >> 16) & 0x7f)

struct __struct_SYSCTRL_OSC32K
{
  uint32_t		: 1;
  uint32_t	enable	: 1;
  uint32_t	en32k	: 1;
  uint32_t	en1k	: 1;
  uint32_t		: 2;
  uint32_t	runstdby	: 1;
  uint32_t	ondemand	: 1;
  uint32_t	startup	: 3;
  uint32_t		: 1;
  uint32_t	wrtlock	: 1;
  uint32_t		: 3;
  uint32_t	calib	: 7;
  uint32_t		: 9;
};

#define SYSCTRL_OSCULP32K_CALIB(x)  	((x) << 0)
#define SYSCTRL_OSCULP32K_CALIB_m   	0x0000001f
#define SYSCTRL_OSCULP32K_CALIB_v(x)	(((x) >> 0) & 0x1f)
#define SYSCTRL_OSCULP32K_WRTLOCK     	(1 << 7)

struct __struct_SYSCTRL_OSCULP32K
{
  uint8_t	calib	: 5;
  uint8_t		: 2;
  uint8_t	wrtlock	: 1;
};

#define SYSCTRL_OSC8M_ENABLE     	(1 << 1)
#define SYSCTRL_OSC8M_RUNSTDBY     	(1 << 6)
#define SYSCTRL_OSC8M_ONDEMAND     	(1 << 7)
#define SYSCTRL_OSC8M_PRESC(x)  	((x) << 8)
#define SYSCTRL_OSC8M_PRESC_m   	0x00000300
#define SYSCTRL_OSC8M_PRESC_v(x)	(((x) >> 8) & 0x3)
#define SYSCTRL_OSC8M_PRESC_1	0x0
#define SYSCTRL_OSC8M_PRESC_2	0x1
#define SYSCTRL_OSC8M_PRESC_4	0x2
#define SYSCTRL_OSC8M_PRESC_8	0x3
#define SYSCTRL_OSC8M_CALIB(x)  	((x) << 16)
#define SYSCTRL_OSC8M_CALIB_m   	0x0fff0000
#define SYSCTRL_OSC8M_CALIB_v(x)	(((x) >> 16) & 0xfff)
#define SYSCTRL_OSC8M_FRANGE(x)  	((x) << 30)
#define SYSCTRL_OSC8M_FRANGE_m   	0xc0000000
#define SYSCTRL_OSC8M_FRANGE_v(x)	(((x) >> 30) & 0x3)

struct __struct_SYSCTRL_OSC8M
{
  uint32_t		: 1;
  uint32_t	enable	: 1;
  uint32_t		: 4;
  uint32_t	runstdby	: 1;
  uint32_t	ondemand	: 1;
  uint32_t	presc	: 2;
  uint32_t		: 6;
  uint32_t	calib	: 12;
  uint32_t		: 2;
  uint32_t	frange	: 2;
};

#define SYSCTRL_DFLLCTRL_ENABLE     	(1 << 1)
#define SYSCTRL_DFLLCTRL_MODE     	(1 << 2)
#define SYSCTRL_DFLLCTRL_STABLE     	(1 << 3)
#define SYSCTRL_DFLLCTRL_LLAW     	(1 << 4)
#define SYSCTRL_DFLLCTRL_USBCRM     	(1 << 5)
#define SYSCTRL_DFLLCTRL_RUNSTDBY     	(1 << 6)
#define SYSCTRL_DFLLCTRL_ONDEMAND     	(1 << 7)
#define SYSCTRL_DFLLCTRL_CCDIS     	(1 << 8)
#define SYSCTRL_DFLLCTRL_QLDIS     	(1 << 9)

struct __struct_SYSCTRL_DFLLCTRL
{
  uint16_t		: 1;
  uint16_t	enable	: 1;
  uint16_t	mode	: 1;
  uint16_t	stable	: 1;
  uint16_t	llaw	: 1;
  uint16_t	usbcrm	: 1;
  uint16_t	runstdby	: 1;
  uint16_t	ondemand	: 1;
  uint16_t	ccdis	: 1;
  uint16_t	qldis	: 1;
  uint16_t		: 6;
};

#define SYSCTRL_DFLLVAL_FINE(x)  	((x) << 0)
#define SYSCTRL_DFLLVAL_FINE_m   	0x000003ff
#define SYSCTRL_DFLLVAL_FINE_v(x)	(((x) >> 0) & 0x3ff)
#define SYSCTRL_DFLLVAL_COARSE(x)  	((x) << 10)
#define SYSCTRL_DFLLVAL_COARSE_m   	0x0000fc00
#define SYSCTRL_DFLLVAL_COARSE_v(x)	(((x) >> 10) & 0x3f)
#define SYSCTRL_DFLLVAL_DIFF(x)  	((x) << 16)
#define SYSCTRL_DFLLVAL_DIFF_m   	0xffff0000
#define SYSCTRL_DFLLVAL_DIFF_v(x)	(((x) >> 16) & 0xffff)

struct __struct_SYSCTRL_DFLLVAL
{
  uint32_t	fine	: 10;
  uint32_t	coarse	: 6;
  uint32_t	diff	: 16;
};

#define SYSCTRL_DFLLMUL_MUL(x)  	((x) << 0)
#define SYSCTRL_DFLLMUL_MUL_m   	0x0000ffff
#define SYSCTRL_DFLLMUL_MUL_v(x)	(((x) >> 0) & 0xffff)
#define SYSCTRL_DFLLMUL_FSTEP(x)  	((x) << 16)
#define SYSCTRL_DFLLMUL_FSTEP_m   	0x03ff0000
#define SYSCTRL_DFLLMUL_FSTEP_v(x)	(((x) >> 16) & 0x3ff)
#define SYSCTRL_DFLLMUL_CSTEP(x)  	((x) << 26)
#define SYSCTRL_DFLLMUL_CSTEP_m   	0xfc000000
#define SYSCTRL_DFLLMUL_CSTEP_v(x)	(((x) >> 26) & 0x3f)

struct __struct_SYSCTRL_DFLLMUL
{
  uint32_t	mul	: 16;
  uint32_t	fstep	: 10;
  uint32_t	cstep	: 6;
};

#define SYSCTRL_DFLLSYNC_READREQ     	(1 << 7)

struct __struct_SYSCTRL_DFLLSYNC
{
  uint8_t		: 7;
  uint8_t	readreq	: 1;
};

#define SYSCTRL_BOD33_ENABLE     	(1 << 1)
#define SYSCTRL_BOD33_HYST     	(1 << 2)
#define SYSCTRL_BOD33_ACTION(x)  	((x) << 3)
#define SYSCTRL_BOD33_ACTION_m   	0x00000018
#define SYSCTRL_BOD33_ACTION_v(x)	(((x) >> 3) & 0x3)
#define SYSCTRL_BOD33_ACTION_NONE	0x0
#define SYSCTRL_BOD33_ACTION_RESET	0x1
#define SYSCTRL_BOD33_ACTION_INTERRUPT	0x2
#define SYSCTRL_BOD33_RUNSTDBY     	(1 << 6)
#define SYSCTRL_BOD33_MODE     	(1 << 8)
#define SYSCTRL_BOD33_CEN     	(1 << 9)
#define SYSCTRL_BOD33_PSEL(x)  	((x) << 12)
#define SYSCTRL_BOD33_PSEL_m   	0x0000f000
#define SYSCTRL_BOD33_PSEL_v(x)	(((x) >> 12) & 0xf)
#define SYSCTRL_BOD33_PSEL_2	0x0
#define SYSCTRL_BOD33_PSEL_4	0x1
#define SYSCTRL_BOD33_PSEL_8	0x2
#define SYSCTRL_BOD33_PSEL_16	0x3
#define SYSCTRL_BOD33_PSEL_32	0x4
#define SYSCTRL_BOD33_PSEL_64	0x5
#define SYSCTRL_BOD33_PSEL_128	0x6
#define SYSCTRL_BOD33_PSEL_256	0x7
#define SYSCTRL_BOD33_PSEL_512	0x8
#define SYSCTRL_BOD33_PSEL_1K	0x9
#define SYSCTRL_BOD33_PSEL_2K	0xa
#define SYSCTRL_BOD33_PSEL_4K	0xb
#define SYSCTRL_BOD33_PSEL_8K	0xc
#define SYSCTRL_BOD33_PSEL_16K	0xd
#define SYSCTRL_BOD33_PSEL_32K	0xe
#define SYSCTRL_BOD33_PSEL_64K	0xf
#define SYSCTRL_BOD33_LEVEL(x)  	((x) << 16)
#define SYSCTRL_BOD33_LEVEL_m   	0x003f0000
#define SYSCTRL_BOD33_LEVEL_v(x)	(((x) >> 16) & 0x3f)

struct __struct_SYSCTRL_BOD33
{
  uint32_t		: 1;
  uint32_t	enable	: 1;
  uint32_t	hyst	: 1;
  uint32_t	action	: 2;
  uint32_t		: 1;
  uint32_t	runstdby	: 1;
  uint32_t		: 1;
  uint32_t	mode	: 1;
  uint32_t	cen	: 1;
  uint32_t		: 2;
  uint32_t	psel	: 4;
  uint32_t	level	: 6;
  uint32_t		: 10;
};

#define SYSCTRL_VREF_TSEN     	(1 << 1)
#define SYSCTRL_VREF_BGOUTEN     	(1 << 2)
#define SYSCTRL_VREF_CALIB(x)  	((x) << 16)
#define SYSCTRL_VREF_CALIB_m   	0x07ff0000
#define SYSCTRL_VREF_CALIB_v(x)	(((x) >> 16) & 0x7ff)

struct __struct_SYSCTRL_VREF
{
  uint32_t		: 1;
  uint32_t	tsen	: 1;
  uint32_t	bgouten	: 1;
  uint32_t		: 13;
  uint32_t	calib	: 11;
  uint32_t		: 5;
};


// GCLK
#define GCLK_CTRL_SWRST     	(1 << 0)

struct __struct_GCLK_CTRL
{
  uint8_t	swrst	: 1;
  uint8_t		: 7;
};

#define GCLK_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_GCLK_STATUS
{
  uint8_t		: 7;
  uint8_t	syncbusy	: 1;
};

#define GCLK_CLKCTRL_ID(x)  	((x) << 0)
#define GCLK_CLKCTRL_ID_m   	0x0000003f
#define GCLK_CLKCTRL_ID_v(x)	(((x) >> 0) & 0x3f)
#define GCLK_CLKCTRL_ID_DFLL48M	0x0
#define GCLK_CLKCTRL_ID_WDT	0x1
#define GCLK_CLKCTRL_ID_RTC	0x2
#define GCLK_CLKCTRL_ID_EIC	0x3
#define GCLK_CLKCTRL_ID_EVSYS_0	0x4
#define GCLK_CLKCTRL_ID_EVSYS_1	0x5
#define GCLK_CLKCTRL_ID_EVSYS_2	0x6
#define GCLK_CLKCTRL_ID_EVSYS_3	0x7
#define GCLK_CLKCTRL_ID_EVSYS_4	0x8
#define GCLK_CLKCTRL_ID_EVSYS_5	0x9
#define GCLK_CLKCTRL_ID_EVSYS_6	0xa
#define GCLK_CLKCTRL_ID_EVSYS_7	0xb
#define GCLK_CLKCTRL_ID_SERCOMX_SLOW	0xc
#define GCLK_CLKCTRL_ID_SERCOM0_CORE	0xd
#define GCLK_CLKCTRL_ID_SERCOM1_CORE	0xe
#define GCLK_CLKCTRL_ID_SERCOM2_CORE	0xf
#define GCLK_CLKCTRL_ID_SERCOM3_CORE	0x10
#define GCLK_CLKCTRL_ID_SERCOM4_CORE	0x11
#define GCLK_CLKCTRL_ID_SERCOM5_CORE	0x12
#define GCLK_CLKCTRL_ID_TC0_TC1	0x13
#define GCLK_CLKCTRL_ID_TC2_TC3	0x14
#define GCLK_CLKCTRL_ID_TC4_TC5	0x15
#define GCLK_CLKCTRL_ID_TC6_TC7	0x16
#define GCLK_CLKCTRL_ID_ADC	0x17
#define GCLK_CLKCTRL_ID_AC_DIG	0x18
#define GCLK_CLKCTRL_ID_AC_ANA	0x19
#define GCLK_CLKCTRL_ID_DAC	0x1a
#define GCLK_CLKCTRL_ID_PTC	0x1b
#define GCLK_CLKCTRL_GEN(x)  	((x) << 8)
#define GCLK_CLKCTRL_GEN_m   	0x00000f00
#define GCLK_CLKCTRL_GEN_v(x)	(((x) >> 8) & 0xf)
#define GCLK_CLKCTRL_CLKEN     	(1 << 14)
#define GCLK_CLKCTRL_WRTLOCK     	(1 << 15)

struct __struct_GCLK_CLKCTRL
{
  uint16_t	id	: 6;
  uint16_t		: 2;
  uint16_t	gen	: 4;
  uint16_t		: 2;
  uint16_t	clken	: 1;
  uint16_t	wrtlock	: 1;
};

#define GCLK_GENCTRL_ID(x)  	((x) << 0)
#define GCLK_GENCTRL_ID_m   	0x0000000f
#define GCLK_GENCTRL_ID_v(x)	(((x) >> 0) & 0xf)
#define GCLK_GENCTRL_SRC(x)  	((x) << 8)
#define GCLK_GENCTRL_SRC_m   	0x00001f00
#define GCLK_GENCTRL_SRC_v(x)	(((x) >> 8) & 0x1f)
#define GCLK_GENCTRL_SRC_XOSC	0x0
#define GCLK_GENCTRL_SRC_GCLKIN	0x1
#define GCLK_GENCTRL_SRC_GCLKGEN1	0x2
#define GCLK_GENCTRL_SRC_OSCULP32K	0x3
#define GCLK_GENCTRL_SRC_OSC32K	0x4
#define GCLK_GENCTRL_SRC_XOSC32K	0x5
#define GCLK_GENCTRL_SRC_OSC8M	0x6
#define GCLK_GENCTRL_SRC_DFLL48M	0x7
#define GCLK_GENCTRL_GENEN     	(1 << 16)
#define GCLK_GENCTRL_IDC     	(1 << 17)
#define GCLK_GENCTRL_OOV     	(1 << 18)
#define GCLK_GENCTRL_OE     	(1 << 19)
#define GCLK_GENCTRL_DIVSEL     	(1 << 20)
#define GCLK_GENCTRL_RUNSTDBY     	(1 << 21)

struct __struct_GCLK_GENCTRL
{
  uint32_t	id	: 4;
  uint32_t		: 4;
  uint32_t	src	: 5;
  uint32_t		: 3;
  uint32_t	genen	: 1;
  uint32_t	idc	: 1;
  uint32_t	oov	: 1;
  uint32_t	oe	: 1;
  uint32_t	divsel	: 1;
  uint32_t	runstdby	: 1;
  uint32_t		: 10;
};

#define GCLK_GENDIV_ID(x)  	((x) << 0)
#define GCLK_GENDIV_ID_m   	0x0000000f
#define GCLK_GENDIV_ID_v(x)	(((x) >> 0) & 0xf)
#define GCLK_GENDIV_DIV(x)  	((x) << 8)
#define GCLK_GENDIV_DIV_m   	0x00ffff00
#define GCLK_GENDIV_DIV_v(x)	(((x) >> 8) & 0xffff)

struct __struct_GCLK_GENDIV
{
  uint32_t	id	: 4;
  uint32_t		: 4;
  uint32_t	div	: 16;
  uint32_t		: 8;
};


// WDT
#define WDT_CTRL_ENABLE     	(1 << 1)
#define WDT_CTRL_WEN     	(1 << 2)
#define WDT_CTRL_ALWAYSON     	(1 << 7)

struct __struct_WDT_CTRL
{
  uint8_t		: 1;
  uint8_t	enable	: 1;
  uint8_t	wen	: 1;
  uint8_t		: 4;
  uint8_t	alwayson	: 1;
};

#define WDT_CONFIG_PER(x)  	((x) << 0)
#define WDT_CONFIG_PER_m   	0x0000000f
#define WDT_CONFIG_PER_v(x)	(((x) >> 0) & 0xf)
#define WDT_CONFIG_PER_8	0x0
#define WDT_CONFIG_PER_16	0x1
#define WDT_CONFIG_PER_32	0x2
#define WDT_CONFIG_PER_64	0x3
#define WDT_CONFIG_PER_128	0x4
#define WDT_CONFIG_PER_256	0x5
#define WDT_CONFIG_PER_512	0x6
#define WDT_CONFIG_PER_1024	0x7
#define WDT_CONFIG_PER_2048	0x8
#define WDT_CONFIG_PER_4096	0x9
#define WDT_CONFIG_PER_8192	0xa
#define WDT_CONFIG_PER_16384	0xb
#define WDT_CONFIG_WINDOW(x)  	((x) << 4)
#define WDT_CONFIG_WINDOW_m   	0x000000f0
#define WDT_CONFIG_WINDOW_v(x)	(((x) >> 4) & 0xf)
#define WDT_CONFIG_WINDOW_8	0x0
#define WDT_CONFIG_WINDOW_16	0x1
#define WDT_CONFIG_WINDOW_32	0x2
#define WDT_CONFIG_WINDOW_64	0x3
#define WDT_CONFIG_WINDOW_128	0x4
#define WDT_CONFIG_WINDOW_256	0x5
#define WDT_CONFIG_WINDOW_512	0x6
#define WDT_CONFIG_WINDOW_1024	0x7
#define WDT_CONFIG_WINDOW_2048	0x8
#define WDT_CONFIG_WINDOW_4096	0x9
#define WDT_CONFIG_WINDOW_8192	0xa
#define WDT_CONFIG_WINDOW_16384	0xb

struct __struct_WDT_CONFIG
{
  uint8_t	per	: 4;
  uint8_t	window	: 4;
};

#define WDT_EWCTRL_EWOFFSET(x)  	((x) << 0)
#define WDT_EWCTRL_EWOFFSET_m   	0x0000000f
#define WDT_EWCTRL_EWOFFSET_v(x)	(((x) >> 0) & 0xf)
#define WDT_EWCTRL_EWOFFSET_8	0x0
#define WDT_EWCTRL_EWOFFSET_16	0x1
#define WDT_EWCTRL_EWOFFSET_32	0x2
#define WDT_EWCTRL_EWOFFSET_64	0x3
#define WDT_EWCTRL_EWOFFSET_128	0x4
#define WDT_EWCTRL_EWOFFSET_256	0x5
#define WDT_EWCTRL_EWOFFSET_512	0x6
#define WDT_EWCTRL_EWOFFSET_1024	0x7
#define WDT_EWCTRL_EWOFFSET_2048	0x8
#define WDT_EWCTRL_EWOFFSET_4096	0x9
#define WDT_EWCTRL_EWOFFSET_8192	0xa
#define WDT_EWCTRL_EWOFFSET_16384	0xb

struct __struct_WDT_EWCTRL
{
  uint8_t	ewoffset	: 4;
  uint8_t		: 4;
};

#define WDT_INTENCLR_EW     	(1 << 0)

struct __struct_WDT_INTENCLR
{
  uint8_t	ew	: 1;
  uint8_t		: 7;
};

#define WDT_INTENSET_EW     	(1 << 0)

struct __struct_WDT_INTENSET
{
  uint8_t	ew	: 1;
  uint8_t		: 7;
};

#define WDT_INTFLAG_EW     	(1 << 0)

struct __struct_WDT_INTFLAG
{
  uint8_t	ew	: 1;
  uint8_t		: 7;
};

#define WDT_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_WDT_STATUS
{
  uint8_t		: 7;
  uint8_t	syncbusy	: 1;
};

#define WDT_CLEAR_CLEAR(x)  	((x) << 0)
#define WDT_CLEAR_CLEAR_m   	0x000000ff
#define WDT_CLEAR_CLEAR_v(x)	(((x) >> 0) & 0xff)
#define WDT_CLEAR_CLEAR_KEY	0xa5

struct __struct_WDT_CLEAR
{
  uint8_t	clear	: 8;
};


// RTC_M0
#define RTC_M0_CTRL_SWRST     	(1 << 0)
#define RTC_M0_CTRL_ENABLE     	(1 << 1)
#define RTC_M0_CTRL_MODE(x)  	((x) << 2)
#define RTC_M0_CTRL_MODE_m   	0x0000000c
#define RTC_M0_CTRL_MODE_v(x)	(((x) >> 2) & 0x3)
#define RTC_M0_CTRL_MODE_COUNT32	0x0
#define RTC_M0_CTRL_MODE_COUNT16	0x1
#define RTC_M0_CTRL_MODE_CLOCK	0x2
#define RTC_M0_CTRL_MATCHCLR     	(1 << 7)
#define RTC_M0_CTRL_PRESCALER(x)  	((x) << 8)
#define RTC_M0_CTRL_PRESCALER_m   	0x00000f00
#define RTC_M0_CTRL_PRESCALER_v(x)	(((x) >> 8) & 0xf)
#define RTC_M0_CTRL_PRESCALER_1	0x0
#define RTC_M0_CTRL_PRESCALER_2	0x1
#define RTC_M0_CTRL_PRESCALER_4	0x2
#define RTC_M0_CTRL_PRESCALER_8	0x3
#define RTC_M0_CTRL_PRESCALER_16	0x4
#define RTC_M0_CTRL_PRESCALER_32	0x5
#define RTC_M0_CTRL_PRESCALER_64	0x6
#define RTC_M0_CTRL_PRESCALER_128	0x7
#define RTC_M0_CTRL_PRESCALER_256	0x8
#define RTC_M0_CTRL_PRESCALER_512	0x9
#define RTC_M0_CTRL_PRESCALER_1024	0xa

struct __struct_RTC_M0_CTRL
{
  uint16_t	swrst	: 1;
  uint16_t	enable	: 1;
  uint16_t	mode	: 2;
  uint16_t		: 3;
  uint16_t	matchclr	: 1;
  uint16_t	prescaler	: 4;
  uint16_t		: 4;
};

#define RTC_M0_READREQ_ADDR(x)  	((x) << 0)
#define RTC_M0_READREQ_ADDR_m   	0x0000003f
#define RTC_M0_READREQ_ADDR_v(x)	(((x) >> 0) & 0x3f)
#define RTC_M0_READREQ_RCONT     	(1 << 14)
#define RTC_M0_READREQ_RREQ     	(1 << 15)

struct __struct_RTC_M0_READREQ
{
  uint16_t	addr	: 6;
  uint16_t		: 8;
  uint16_t	rcont	: 1;
  uint16_t	rreq	: 1;
};

#define RTC_M0_EVCTRL_PEREO0     	(1 << 0)
#define RTC_M0_EVCTRL_PEREO1     	(1 << 1)
#define RTC_M0_EVCTRL_PEREO2     	(1 << 2)
#define RTC_M0_EVCTRL_PEREO3     	(1 << 3)
#define RTC_M0_EVCTRL_PEREO4     	(1 << 4)
#define RTC_M0_EVCTRL_PEREO5     	(1 << 5)
#define RTC_M0_EVCTRL_PEREO6     	(1 << 6)
#define RTC_M0_EVCTRL_PEREO7     	(1 << 7)
#define RTC_M0_EVCTRL_CMPEO0     	(1 << 8)
#define RTC_M0_EVCTRL_OVFEO     	(1 << 15)

struct __struct_RTC_M0_EVCTRL
{
  uint16_t	pereo0	: 1;
  uint16_t	pereo1	: 1;
  uint16_t	pereo2	: 1;
  uint16_t	pereo3	: 1;
  uint16_t	pereo4	: 1;
  uint16_t	pereo5	: 1;
  uint16_t	pereo6	: 1;
  uint16_t	pereo7	: 1;
  uint16_t	cmpeo0	: 1;
  uint16_t		: 6;
  uint16_t	ovfeo	: 1;
};

#define RTC_M0_INTENCLR_CMP0     	(1 << 0)
#define RTC_M0_INTENCLR_SYNCRDY     	(1 << 6)
#define RTC_M0_INTENCLR_OVF     	(1 << 7)

struct __struct_RTC_M0_INTENCLR
{
  uint8_t	cmp0	: 1;
  uint8_t		: 5;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M0_INTENSET_CMP0     	(1 << 0)
#define RTC_M0_INTENSET_SYNCRDY     	(1 << 6)
#define RTC_M0_INTENSET_OVF     	(1 << 7)

struct __struct_RTC_M0_INTENSET
{
  uint8_t	cmp0	: 1;
  uint8_t		: 5;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M0_INTFLAG_CMP0     	(1 << 0)
#define RTC_M0_INTFLAG_SYNCRDY     	(1 << 6)
#define RTC_M0_INTFLAG_OVF     	(1 << 7)

struct __struct_RTC_M0_INTFLAG
{
  uint8_t	cmp0	: 1;
  uint8_t		: 5;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M0_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_RTC_M0_STATUS
{
  uint8_t		: 7;
  uint8_t	syncbusy	: 1;
};

#define RTC_M0_DBGCTRL_DBGRUN     	(1 << 0)

struct __struct_RTC_M0_DBGCTRL
{
  uint8_t	dbgrun	: 1;
  uint8_t		: 7;
};

#define RTC_M0_FREQCORR_VALUE(x)  	((x) << 0)
#define RTC_M0_FREQCORR_VALUE_m   	0x0000007f
#define RTC_M0_FREQCORR_VALUE_v(x)	(((x) >> 0) & 0x7f)
#define RTC_M0_FREQCORR_SIGN     	(1 << 7)

struct __struct_RTC_M0_FREQCORR
{
  uint8_t	value	: 7;
  uint8_t	sign	: 1;
};


// RTC_M1
#define RTC_M1_CTRL_SWRST     	(1 << 0)
#define RTC_M1_CTRL_ENABLE     	(1 << 1)
#define RTC_M1_CTRL_MODE(x)  	((x) << 2)
#define RTC_M1_CTRL_MODE_m   	0x0000000c
#define RTC_M1_CTRL_MODE_v(x)	(((x) >> 2) & 0x3)
#define RTC_M1_CTRL_MODE_COUNT32	0x0
#define RTC_M1_CTRL_MODE_COUNT16	0x1
#define RTC_M1_CTRL_MODE_CLOCK	0x2
#define RTC_M1_CTRL_PRESCALER(x)  	((x) << 8)
#define RTC_M1_CTRL_PRESCALER_m   	0x00000f00
#define RTC_M1_CTRL_PRESCALER_v(x)	(((x) >> 8) & 0xf)
#define RTC_M1_CTRL_PRESCALER_1	0x0
#define RTC_M1_CTRL_PRESCALER_2	0x1
#define RTC_M1_CTRL_PRESCALER_4	0x2
#define RTC_M1_CTRL_PRESCALER_8	0x3
#define RTC_M1_CTRL_PRESCALER_16	0x4
#define RTC_M1_CTRL_PRESCALER_32	0x5
#define RTC_M1_CTRL_PRESCALER_64	0x6
#define RTC_M1_CTRL_PRESCALER_128	0x7
#define RTC_M1_CTRL_PRESCALER_256	0x8
#define RTC_M1_CTRL_PRESCALER_512	0x9
#define RTC_M1_CTRL_PRESCALER_1024	0xa

struct __struct_RTC_M1_CTRL
{
  uint16_t	swrst	: 1;
  uint16_t	enable	: 1;
  uint16_t	mode	: 2;
  uint16_t		: 4;
  uint16_t	prescaler	: 4;
  uint16_t		: 4;
};

#define RTC_M1_READREQ_ADDR(x)  	((x) << 0)
#define RTC_M1_READREQ_ADDR_m   	0x0000003f
#define RTC_M1_READREQ_ADDR_v(x)	(((x) >> 0) & 0x3f)
#define RTC_M1_READREQ_RCONT     	(1 << 14)
#define RTC_M1_READREQ_RREQ     	(1 << 15)

struct __struct_RTC_M1_READREQ
{
  uint16_t	addr	: 6;
  uint16_t		: 8;
  uint16_t	rcont	: 1;
  uint16_t	rreq	: 1;
};

#define RTC_M1_EVCTRL_PEREO0     	(1 << 0)
#define RTC_M1_EVCTRL_PEREO1     	(1 << 1)
#define RTC_M1_EVCTRL_PEREO2     	(1 << 2)
#define RTC_M1_EVCTRL_PEREO3     	(1 << 3)
#define RTC_M1_EVCTRL_PEREO4     	(1 << 4)
#define RTC_M1_EVCTRL_PEREO5     	(1 << 5)
#define RTC_M1_EVCTRL_PEREO6     	(1 << 6)
#define RTC_M1_EVCTRL_PEREO7     	(1 << 7)
#define RTC_M1_EVCTRL_CMPEO0     	(1 << 8)
#define RTC_M1_EVCTRL_CMPEO1     	(1 << 9)
#define RTC_M1_EVCTRL_OVFEO     	(1 << 15)

struct __struct_RTC_M1_EVCTRL
{
  uint16_t	pereo0	: 1;
  uint16_t	pereo1	: 1;
  uint16_t	pereo2	: 1;
  uint16_t	pereo3	: 1;
  uint16_t	pereo4	: 1;
  uint16_t	pereo5	: 1;
  uint16_t	pereo6	: 1;
  uint16_t	pereo7	: 1;
  uint16_t	cmpeo0	: 1;
  uint16_t	cmpeo1	: 1;
  uint16_t		: 5;
  uint16_t	ovfeo	: 1;
};

#define RTC_M1_INTENCLR_CMP0     	(1 << 0)
#define RTC_M1_INTENCLR_CMP1     	(1 << 1)
#define RTC_M1_INTENCLR_SYNCRDY     	(1 << 6)
#define RTC_M1_INTENCLR_OVF     	(1 << 7)

struct __struct_RTC_M1_INTENCLR
{
  uint8_t	cmp0	: 1;
  uint8_t	cmp1	: 1;
  uint8_t		: 4;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M1_INTENSET_CMP0     	(1 << 0)
#define RTC_M1_INTENSET_CMP1     	(1 << 1)
#define RTC_M1_INTENSET_SYNCRDY     	(1 << 6)
#define RTC_M1_INTENSET_OVF     	(1 << 7)

struct __struct_RTC_M1_INTENSET
{
  uint8_t	cmp0	: 1;
  uint8_t	cmp1	: 1;
  uint8_t		: 4;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M1_INTFLAG_CMP0     	(1 << 0)
#define RTC_M1_INTFLAG_CMP1     	(1 << 1)
#define RTC_M1_INTFLAG_SYNCRDY     	(1 << 6)
#define RTC_M1_INTFLAG_OVF     	(1 << 7)

struct __struct_RTC_M1_INTFLAG
{
  uint8_t	cmp0	: 1;
  uint8_t	cmp1	: 1;
  uint8_t		: 4;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M1_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_RTC_M1_STATUS
{
  uint8_t		: 7;
  uint8_t	syncbusy	: 1;
};

#define RTC_M1_DBGCTRL_DBGRUN     	(1 << 0)

struct __struct_RTC_M1_DBGCTRL
{
  uint8_t	dbgrun	: 1;
  uint8_t		: 7;
};

#define RTC_M1_FREQCORR_VALUE(x)  	((x) << 0)
#define RTC_M1_FREQCORR_VALUE_m   	0x0000007f
#define RTC_M1_FREQCORR_VALUE_v(x)	(((x) >> 0) & 0x7f)
#define RTC_M1_FREQCORR_SIGN     	(1 << 7)

struct __struct_RTC_M1_FREQCORR
{
  uint8_t	value	: 7;
  uint8_t	sign	: 1;
};


// RTC_M2
#define RTC_M2_CTRL_SWRST     	(1 << 0)
#define RTC_M2_CTRL_ENABLE     	(1 << 1)
#define RTC_M2_CTRL_MODE(x)  	((x) << 2)
#define RTC_M2_CTRL_MODE_m   	0x0000000c
#define RTC_M2_CTRL_MODE_v(x)	(((x) >> 2) & 0x3)
#define RTC_M2_CTRL_MODE_COUNT32	0x0
#define RTC_M2_CTRL_MODE_COUNT16	0x1
#define RTC_M2_CTRL_MODE_CLOCK	0x2
#define RTC_M2_CTRL_CLKREP     	(1 << 6)
#define RTC_M2_CTRL_MATCHCLR     	(1 << 7)
#define RTC_M2_CTRL_PRESCALER(x)  	((x) << 8)
#define RTC_M2_CTRL_PRESCALER_m   	0x00000f00
#define RTC_M2_CTRL_PRESCALER_v(x)	(((x) >> 8) & 0xf)
#define RTC_M2_CTRL_PRESCALER_1	0x0
#define RTC_M2_CTRL_PRESCALER_2	0x1
#define RTC_M2_CTRL_PRESCALER_4	0x2
#define RTC_M2_CTRL_PRESCALER_8	0x3
#define RTC_M2_CTRL_PRESCALER_16	0x4
#define RTC_M2_CTRL_PRESCALER_32	0x5
#define RTC_M2_CTRL_PRESCALER_64	0x6
#define RTC_M2_CTRL_PRESCALER_128	0x7
#define RTC_M2_CTRL_PRESCALER_256	0x8
#define RTC_M2_CTRL_PRESCALER_512	0x9
#define RTC_M2_CTRL_PRESCALER_1024	0xa

struct __struct_RTC_M2_CTRL
{
  uint16_t	swrst	: 1;
  uint16_t	enable	: 1;
  uint16_t	mode	: 2;
  uint16_t		: 2;
  uint16_t	clkrep	: 1;
  uint16_t	matchclr	: 1;
  uint16_t	prescaler	: 4;
  uint16_t		: 4;
};

#define RTC_M2_READREQ_ADDR(x)  	((x) << 0)
#define RTC_M2_READREQ_ADDR_m   	0x0000003f
#define RTC_M2_READREQ_ADDR_v(x)	(((x) >> 0) & 0x3f)
#define RTC_M2_READREQ_RCONT     	(1 << 14)
#define RTC_M2_READREQ_RREQ     	(1 << 15)

struct __struct_RTC_M2_READREQ
{
  uint16_t	addr	: 6;
  uint16_t		: 8;
  uint16_t	rcont	: 1;
  uint16_t	rreq	: 1;
};

#define RTC_M2_EVCTRL_PEREO0     	(1 << 0)
#define RTC_M2_EVCTRL_PEREO1     	(1 << 1)
#define RTC_M2_EVCTRL_PEREO2     	(1 << 2)
#define RTC_M2_EVCTRL_PEREO3     	(1 << 3)
#define RTC_M2_EVCTRL_PEREO4     	(1 << 4)
#define RTC_M2_EVCTRL_PEREO5     	(1 << 5)
#define RTC_M2_EVCTRL_PEREO6     	(1 << 6)
#define RTC_M2_EVCTRL_PEREO7     	(1 << 7)
#define RTC_M2_EVCTRL_ALARMEO0     	(1 << 8)
#define RTC_M2_EVCTRL_OVFEO     	(1 << 15)

struct __struct_RTC_M2_EVCTRL
{
  uint16_t	pereo0	: 1;
  uint16_t	pereo1	: 1;
  uint16_t	pereo2	: 1;
  uint16_t	pereo3	: 1;
  uint16_t	pereo4	: 1;
  uint16_t	pereo5	: 1;
  uint16_t	pereo6	: 1;
  uint16_t	pereo7	: 1;
  uint16_t	alarmeo0	: 1;
  uint16_t		: 6;
  uint16_t	ovfeo	: 1;
};

#define RTC_M2_INTENCLR_ALARM0     	(1 << 0)
#define RTC_M2_INTENCLR_SYNCRDY     	(1 << 6)
#define RTC_M2_INTENCLR_OVF     	(1 << 7)

struct __struct_RTC_M2_INTENCLR
{
  uint8_t	alarm0	: 1;
  uint8_t		: 5;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M2_INTENSET_ALARM0     	(1 << 0)
#define RTC_M2_INTENSET_SYNCRDY     	(1 << 6)
#define RTC_M2_INTENSET_OVF     	(1 << 7)

struct __struct_RTC_M2_INTENSET
{
  uint8_t	alarm0	: 1;
  uint8_t		: 5;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M2_INTFLAG_ALARM0     	(1 << 0)
#define RTC_M2_INTFLAG_SYNCRDY     	(1 << 6)
#define RTC_M2_INTFLAG_OVF     	(1 << 7)

struct __struct_RTC_M2_INTFLAG
{
  uint8_t	alarm0	: 1;
  uint8_t		: 5;
  uint8_t	syncrdy	: 1;
  uint8_t	ovf	: 1;
};

#define RTC_M2_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_RTC_M2_STATUS
{
  uint8_t		: 7;
  uint8_t	syncbusy	: 1;
};

#define RTC_M2_DBGCTRL_DBGRUN     	(1 << 0)

struct __struct_RTC_M2_DBGCTRL
{
  uint8_t	dbgrun	: 1;
  uint8_t		: 7;
};

#define RTC_M2_FREQCORR_VALUE(x)  	((x) << 0)
#define RTC_M2_FREQCORR_VALUE_m   	0x0000007f
#define RTC_M2_FREQCORR_VALUE_v(x)	(((x) >> 0) & 0x7f)
#define RTC_M2_FREQCORR_SIGN     	(1 << 7)

struct __struct_RTC_M2_FREQCORR
{
  uint8_t	value	: 7;
  uint8_t	sign	: 1;
};

#define RTC_M2_CLOCK_SECOND(x)  	((x) << 0)
#define RTC_M2_CLOCK_SECOND_m   	0x0000003f
#define RTC_M2_CLOCK_SECOND_v(x)	(((x) >> 0) & 0x3f)
#define RTC_M2_CLOCK_MINUTE(x)  	((x) << 6)
#define RTC_M2_CLOCK_MINUTE_m   	0x00000fc0
#define RTC_M2_CLOCK_MINUTE_v(x)	(((x) >> 6) & 0x3f)
#define RTC_M2_CLOCK_HOUR(x)  	((x) << 12)
#define RTC_M2_CLOCK_HOUR_m   	0x0001f000
#define RTC_M2_CLOCK_HOUR_v(x)	(((x) >> 12) & 0x1f)
#define RTC_M2_CLOCK_DAY(x)  	((x) << 17)
#define RTC_M2_CLOCK_DAY_m   	0x003e0000
#define RTC_M2_CLOCK_DAY_v(x)	(((x) >> 17) & 0x1f)
#define RTC_M2_CLOCK_MONTH(x)  	((x) << 22)
#define RTC_M2_CLOCK_MONTH_m   	0x03c00000
#define RTC_M2_CLOCK_MONTH_v(x)	(((x) >> 22) & 0xf)
#define RTC_M2_CLOCK_YEAR(x)  	((x) << 26)
#define RTC_M2_CLOCK_YEAR_m   	0xfc000000
#define RTC_M2_CLOCK_YEAR_v(x)	(((x) >> 26) & 0x3f)

struct __struct_RTC_M2_CLOCK
{
  uint32_t	second	: 6;
  uint32_t	minute	: 6;
  uint32_t	hour	: 5;
  uint32_t	day	: 5;
  uint32_t	month	: 4;
  uint32_t	year	: 6;
};

#define RTC_M2_ALARM_SECOND(x)  	((x) << 0)
#define RTC_M2_ALARM_SECOND_m   	0x0000003f
#define RTC_M2_ALARM_SECOND_v(x)	(((x) >> 0) & 0x3f)
#define RTC_M2_ALARM_MINUTE(x)  	((x) << 6)
#define RTC_M2_ALARM_MINUTE_m   	0x00000fc0
#define RTC_M2_ALARM_MINUTE_v(x)	(((x) >> 6) & 0x3f)
#define RTC_M2_ALARM_HOUR(x)  	((x) << 12)
#define RTC_M2_ALARM_HOUR_m   	0x0001f000
#define RTC_M2_ALARM_HOUR_v(x)	(((x) >> 12) & 0x1f)
#define RTC_M2_ALARM_DAY(x)  	((x) << 17)
#define RTC_M2_ALARM_DAY_m   	0x003e0000
#define RTC_M2_ALARM_DAY_v(x)	(((x) >> 17) & 0x1f)
#define RTC_M2_ALARM_MONTH(x)  	((x) << 22)
#define RTC_M2_ALARM_MONTH_m   	0x03c00000
#define RTC_M2_ALARM_MONTH_v(x)	(((x) >> 22) & 0xf)
#define RTC_M2_ALARM_YEAR(x)  	((x) << 26)
#define RTC_M2_ALARM_YEAR_m   	0xfc000000
#define RTC_M2_ALARM_YEAR_v(x)	(((x) >> 26) & 0x3f)

struct __struct_RTC_M2_ALARM
{
  uint32_t	second	: 6;
  uint32_t	minute	: 6;
  uint32_t	hour	: 5;
  uint32_t	day	: 5;
  uint32_t	month	: 4;
  uint32_t	year	: 6;
};

#define RTC_M2_MASK_SEL(x)  	((x) << 0)
#define RTC_M2_MASK_SEL_m   	0x00000007
#define RTC_M2_MASK_SEL_v(x)	(((x) >> 0) & 0x7)
#define RTC_M2_MASK_SEL_OFF	0x0
#define RTC_M2_MASK_SEL_SS	0x1
#define RTC_M2_MASK_SEL_MMSS	0x2
#define RTC_M2_MASK_SEL_HHMMSS	0x3
#define RTC_M2_MASK_SEL_DDHHMMSS	0x4
#define RTC_M2_MASK_SEL_MMDDHHMMSS	0x5
#define RTC_M2_MASK_SEL_YYMMDDHHMMSS	0x6

struct __struct_RTC_M2_MASK
{
  uint8_t	sel	: 3;
  uint8_t		: 5;
};


// EIC
#define EIC_CTRL_SWRST     	(1 << 0)
#define EIC_CTRL_ENABLE     	(1 << 1)

struct __struct_EIC_CTRL
{
  uint8_t	swrst	: 1;
  uint8_t	enable	: 1;
  uint8_t		: 6;
};

#define EIC_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_EIC_STATUS
{
  uint8_t		: 7;
  uint8_t	syncbusy	: 1;
};

#define EIC_NMICTRL_NMISENSE(x)  	((x) << 0)
#define EIC_NMICTRL_NMISENSE_m   	0x00000007
#define EIC_NMICTRL_NMISENSE_v(x)	(((x) >> 0) & 0x7)
#define EIC_NMICTRL_NMISENSE_NONE	0x0
#define EIC_NMICTRL_NMISENSE_RISE	0x1
#define EIC_NMICTRL_NMISENSE_FALL	0x2
#define EIC_NMICTRL_NMISENSE_BOTH	0x3
#define EIC_NMICTRL_NMISENSE_HIGH	0x4
#define EIC_NMICTRL_NMISENSE_LOW	0x5
#define EIC_NMICTRL_NMIFILTEN     	(1 << 3)

struct __struct_EIC_NMICTRL
{
  uint8_t	nmisense	: 3;
  uint8_t	nmifilten	: 1;
  uint8_t		: 4;
};

#define EIC_NMIFLAG_NMI     	(1 << 0)

struct __struct_EIC_NMIFLAG
{
  uint8_t	nmi	: 1;
  uint8_t		: 7;
};

#define EIC_EVCTRL_EXTINTEO(x)  	((x) << 0)
#define EIC_EVCTRL_EXTINTEO_m   	0x0000ffff
#define EIC_EVCTRL_EXTINTEO_v(x)	(((x) >> 0) & 0xffff)

struct __struct_EIC_EVCTRL
{
  uint32_t	extinteo	: 16;
  uint32_t		: 16;
};

#define EIC_INTENCLR_EXTINT(x)  	((x) << 0)
#define EIC_INTENCLR_EXTINT_m   	0x0000ffff
#define EIC_INTENCLR_EXTINT_v(x)	(((x) >> 0) & 0xffff)

struct __struct_EIC_INTENCLR
{
  uint32_t	extint	: 16;
  uint32_t		: 16;
};

#define EIC_INTENSET_EXTINT(x)  	((x) << 0)
#define EIC_INTENSET_EXTINT_m   	0x0000ffff
#define EIC_INTENSET_EXTINT_v(x)	(((x) >> 0) & 0xffff)

struct __struct_EIC_INTENSET
{
  uint32_t	extint	: 16;
  uint32_t		: 16;
};

#define EIC_INTFLAG_EXTINT(x)  	((x) << 0)
#define EIC_INTFLAG_EXTINT_m   	0x0000ffff
#define EIC_INTFLAG_EXTINT_v(x)	(((x) >> 0) & 0xffff)

struct __struct_EIC_INTFLAG
{
  uint32_t	extint	: 16;
  uint32_t		: 16;
};

#define EIC_WAKEUP_WAKEUPEN(x)  	((x) << 0)
#define EIC_WAKEUP_WAKEUPEN_m   	0x0000ffff
#define EIC_WAKEUP_WAKEUPEN_v(x)	(((x) >> 0) & 0xffff)

struct __struct_EIC_WAKEUP
{
  uint32_t	wakeupen	: 16;
  uint32_t		: 16;
};

#define EIC_CONFIG_SENSE0(x)  	((x) << 0)
#define EIC_CONFIG_SENSE0_m   	0x00000007
#define EIC_CONFIG_SENSE0_v(x)	(((x) >> 0) & 0x7)
#define EIC_CONFIG_FILTEN0     	(1 << 3)
#define EIC_CONFIG_SENSE1(x)  	((x) << 4)
#define EIC_CONFIG_SENSE1_m   	0x00000070
#define EIC_CONFIG_SENSE1_v(x)	(((x) >> 4) & 0x7)
#define EIC_CONFIG_SENSE1_NONE	0x0
#define EIC_CONFIG_SENSE1_RISE	0x1
#define EIC_CONFIG_SENSE1_FALL	0x2
#define EIC_CONFIG_SENSE1_BOTH	0x3
#define EIC_CONFIG_SENSE1_HIGH	0x4
#define EIC_CONFIG_SENSE1_LOW	0x5
#define EIC_CONFIG_FILTEN1     	(1 << 7)
#define EIC_CONFIG_SENSE2(x)  	((x) << 8)
#define EIC_CONFIG_SENSE2_m   	0x00000700
#define EIC_CONFIG_SENSE2_v(x)	(((x) >> 8) & 0x7)
#define EIC_CONFIG_SENSE2_NONE	0x0
#define EIC_CONFIG_SENSE2_RISE	0x1
#define EIC_CONFIG_SENSE2_FALL	0x2
#define EIC_CONFIG_SENSE2_BOTH	0x3
#define EIC_CONFIG_SENSE2_HIGH	0x4
#define EIC_CONFIG_SENSE2_LOW	0x5
#define EIC_CONFIG_FILTEN2     	(1 << 11)
#define EIC_CONFIG_SENSE3(x)  	((x) << 12)
#define EIC_CONFIG_SENSE3_m   	0x00007000
#define EIC_CONFIG_SENSE3_v(x)	(((x) >> 12) & 0x7)
#define EIC_CONFIG_SENSE3_NONE	0x0
#define EIC_CONFIG_SENSE3_RISE	0x1
#define EIC_CONFIG_SENSE3_FALL	0x2
#define EIC_CONFIG_SENSE3_BOTH	0x3
#define EIC_CONFIG_SENSE3_HIGH	0x4
#define EIC_CONFIG_SENSE3_LOW	0x5
#define EIC_CONFIG_FILTEN3     	(1 << 15)
#define EIC_CONFIG_SENSE4(x)  	((x) << 16)
#define EIC_CONFIG_SENSE4_m   	0x00070000
#define EIC_CONFIG_SENSE4_v(x)	(((x) >> 16) & 0x7)
#define EIC_CONFIG_SENSE4_NONE	0x0
#define EIC_CONFIG_SENSE4_RISE	0x1
#define EIC_CONFIG_SENSE4_FALL	0x2
#define EIC_CONFIG_SENSE4_BOTH	0x3
#define EIC_CONFIG_SENSE4_HIGH	0x4
#define EIC_CONFIG_SENSE4_LOW	0x5
#define EIC_CONFIG_FILTEN4     	(1 << 19)
#define EIC_CONFIG_SENSE5(x)  	((x) << 20)
#define EIC_CONFIG_SENSE5_m   	0x00700000
#define EIC_CONFIG_SENSE5_v(x)	(((x) >> 20) & 0x7)
#define EIC_CONFIG_SENSE5_NONE	0x0
#define EIC_CONFIG_SENSE5_RISE	0x1
#define EIC_CONFIG_SENSE5_FALL	0x2
#define EIC_CONFIG_SENSE5_BOTH	0x3
#define EIC_CONFIG_SENSE5_HIGH	0x4
#define EIC_CONFIG_SENSE5_LOW	0x5
#define EIC_CONFIG_FILTEN5     	(1 << 23)
#define EIC_CONFIG_SENSE6(x)  	((x) << 24)
#define EIC_CONFIG_SENSE6_m   	0x07000000
#define EIC_CONFIG_SENSE6_v(x)	(((x) >> 24) & 0x7)
#define EIC_CONFIG_SENSE6_NONE	0x0
#define EIC_CONFIG_SENSE6_RISE	0x1
#define EIC_CONFIG_SENSE6_FALL	0x2
#define EIC_CONFIG_SENSE6_BOTH	0x3
#define EIC_CONFIG_SENSE6_HIGH	0x4
#define EIC_CONFIG_SENSE6_LOW	0x5
#define EIC_CONFIG_FILTEN6     	(1 << 27)
#define EIC_CONFIG_SENSE7(x)  	((x) << 28)
#define EIC_CONFIG_SENSE7_m   	0x70000000
#define EIC_CONFIG_SENSE7_v(x)	(((x) >> 28) & 0x7)
#define EIC_CONFIG_SENSE7_NONE	0x0
#define EIC_CONFIG_SENSE7_RISE	0x1
#define EIC_CONFIG_SENSE7_FALL	0x2
#define EIC_CONFIG_SENSE7_BOTH	0x3
#define EIC_CONFIG_SENSE7_HIGH	0x4
#define EIC_CONFIG_SENSE7_LOW	0x5
#define EIC_CONFIG_FILTEN7     	(1 << 31)

struct __struct_EIC_CONFIG
{
  uint32_t	sense0	: 3;
  uint32_t	filten0	: 1;
  uint32_t	sense1	: 3;
  uint32_t	filten1	: 1;
  uint32_t	sense2	: 3;
  uint32_t	filten2	: 1;
  uint32_t	sense3	: 3;
  uint32_t	filten3	: 1;
  uint32_t	sense4	: 3;
  uint32_t	filten4	: 1;
  uint32_t	sense5	: 3;
  uint32_t	filten5	: 1;
  uint32_t	sense6	: 3;
  uint32_t	filten6	: 1;
  uint32_t	sense7	: 3;
  uint32_t	filten7	: 1;
};


// DSU
#define DSU_CTRL_SWRST     	(1 << 0)
#define DSU_CTRL_CRC     	(1 << 2)
#define DSU_CTRL_MBIST     	(1 << 3)
#define DSU_CTRL_CE     	(1 << 4)

struct __struct_DSU_CTRL
{
  uint8_t	swrst	: 1;
  uint8_t		: 1;
  uint8_t	crc	: 1;
  uint8_t	mbist	: 1;
  uint8_t	ce	: 1;
  uint8_t		: 3;
};

#define DSU_STATUSA_DONE     	(1 << 0)
#define DSU_STATUSA_CRSTEXT     	(1 << 1)
#define DSU_STATUSA_BERR     	(1 << 2)
#define DSU_STATUSA_FAIL     	(1 << 3)
#define DSU_STATUSA_PERR     	(1 << 4)

struct __struct_DSU_STATUSA
{
  uint8_t	done	: 1;
  uint8_t	crstext	: 1;
  uint8_t	berr	: 1;
  uint8_t	fail	: 1;
  uint8_t	perr	: 1;
  uint8_t		: 3;
};

#define DSU_STATUSB_PROT     	(1 << 0)
#define DSU_STATUSB_DBGPRES     	(1 << 1)
#define DSU_STATUSB_DCCD0     	(1 << 2)
#define DSU_STATUSB_DCCD1     	(1 << 3)
#define DSU_STATUSB_HPE     	(1 << 4)

struct __struct_DSU_STATUSB
{
  uint8_t	prot	: 1;
  uint8_t	dbgpres	: 1;
  uint8_t	dccd0	: 1;
  uint8_t	dccd1	: 1;
  uint8_t	hpe	: 1;
  uint8_t		: 3;
};

#define DSU_ADDR_ADDR(x)  	((x) << 2)
#define DSU_ADDR_ADDR_m   	0xfffffffc
#define DSU_ADDR_ADDR_v(x)	(((x) >> 2) & 0x3fffffff)

struct __struct_DSU_ADDR
{
  uint32_t		: 2;
  uint32_t	addr	: 30;
};

#define DSU_LENGTH_LENGTH(x)  	((x) << 2)
#define DSU_LENGTH_LENGTH_m   	0xfffffffc
#define DSU_LENGTH_LENGTH_v(x)	(((x) >> 2) & 0x3fffffff)

struct __struct_DSU_LENGTH
{
  uint32_t		: 2;
  uint32_t	length	: 30;
};

#define DSU_DID_DEVSEL(x)  	((x) << 0)
#define DSU_DID_DEVSEL_m   	0x000000ff
#define DSU_DID_DEVSEL_v(x)	(((x) >> 0) & 0xff)
#define DSU_DID_DEVSEL_SAMD20J18A	0x0
#define DSU_DID_DEVSEL_SAMD20J17A	0x1
#define DSU_DID_DEVSEL_SAMD20J16A	0x2
#define DSU_DID_DEVSEL_SAMD20J15A	0x3
#define DSU_DID_DEVSEL_SAMD20J14A	0x4
#define DSU_DID_DEVSEL_SAMD20G18A	0x5
#define DSU_DID_DEVSEL_SAMD20G17A	0x6
#define DSU_DID_DEVSEL_SAMD20G16A	0x7
#define DSU_DID_DEVSEL_SAMD20G15A	0x8
#define DSU_DID_DEVSEL_SAMD20G14A	0x9
#define DSU_DID_DEVSEL_SAMD20E18A	0xa
#define DSU_DID_DEVSEL_SAMD20E17A	0xb
#define DSU_DID_DEVSEL_SAMD20E16A	0xc
#define DSU_DID_DEVSEL_SAMD20E15A	0xd
#define DSU_DID_DEVSEL_SAMD20E14A	0xe
#define DSU_DID_REVISION(x)  	((x) << 8)
#define DSU_DID_REVISION_m   	0x00000f00
#define DSU_DID_REVISION_v(x)	(((x) >> 8) & 0xf)
#define DSU_DID_DIE(x)  	((x) << 12)
#define DSU_DID_DIE_m   	0x0000f000
#define DSU_DID_DIE_v(x)	(((x) >> 12) & 0xf)
#define DSU_DID_SERIES(x)  	((x) << 16)
#define DSU_DID_SERIES_m   	0x003f0000
#define DSU_DID_SERIES_v(x)	(((x) >> 16) & 0x3f)
#define DSU_DID_FAMILY(x)  	((x) << 23)
#define DSU_DID_FAMILY_m   	0x0f800000
#define DSU_DID_FAMILY_v(x)	(((x) >> 23) & 0x1f)
#define DSU_DID_PROCESSOR(x)  	((x) << 28)
#define DSU_DID_PROCESSOR_m   	0xf0000000
#define DSU_DID_PROCESSOR_v(x)	(((x) >> 28) & 0xf)

struct __struct_DSU_DID
{
  uint32_t	devsel	: 8;
  uint32_t	revision	: 4;
  uint32_t	die	: 4;
  uint32_t	series	: 6;
  uint32_t		: 1;
  uint32_t	family	: 5;
  uint32_t	processor	: 4;
};

#define DSU_ENTRY_EPRES     	(1 << 0)
#define DSU_ENTRY_FMT     	(1 << 1)
#define DSU_ENTRY_ADDOFF(x)  	((x) << 12)
#define DSU_ENTRY_ADDOFF_m   	0xfffff000
#define DSU_ENTRY_ADDOFF_v(x)	(((x) >> 12) & 0xfffff)

struct __struct_DSU_ENTRY
{
  uint32_t	epres	: 1;
  uint32_t	fmt	: 1;
  uint32_t		: 10;
  uint32_t	addoff	: 20;
};

#define DSU_MEMTYPE_SMEMP     	(1 << 0)

struct __struct_DSU_MEMTYPE
{
  uint32_t	smemp	: 1;
  uint32_t		: 31;
};

#define DSU_PID4_JEPCC(x)  	((x) << 0)
#define DSU_PID4_JEPCC_m   	0x0000000f
#define DSU_PID4_JEPCC_v(x)	(((x) >> 0) & 0xf)
#define DSU_PID4_FKBC(x)  	((x) << 4)
#define DSU_PID4_FKBC_m   	0x000000f0
#define DSU_PID4_FKBC_v(x)	(((x) >> 4) & 0xf)

struct __struct_DSU_PID4
{
  uint32_t	jepcc	: 4;
  uint32_t	fkbc	: 4;
  uint32_t		: 24;
};

#define DSU_PID0_PARTNBL(x)  	((x) << 0)
#define DSU_PID0_PARTNBL_m   	0x000000ff
#define DSU_PID0_PARTNBL_v(x)	(((x) >> 0) & 0xff)

struct __struct_DSU_PID0
{
  uint32_t	partnbl	: 8;
  uint32_t		: 24;
};

#define DSU_PID1_PARTNBH(x)  	((x) << 0)
#define DSU_PID1_PARTNBH_m   	0x0000000f
#define DSU_PID1_PARTNBH_v(x)	(((x) >> 0) & 0xf)
#define DSU_PID1_JEPIDCL(x)  	((x) << 4)
#define DSU_PID1_JEPIDCL_m   	0x000000f0
#define DSU_PID1_JEPIDCL_v(x)	(((x) >> 4) & 0xf)

struct __struct_DSU_PID1
{
  uint32_t	partnbh	: 4;
  uint32_t	jepidcl	: 4;
  uint32_t		: 24;
};

#define DSU_PID2_JEPIDCH(x)  	((x) << 0)
#define DSU_PID2_JEPIDCH_m   	0x00000007
#define DSU_PID2_JEPIDCH_v(x)	(((x) >> 0) & 0x7)
#define DSU_PID2_JEPU     	(1 << 3)
#define DSU_PID2_REVISION(x)  	((x) << 4)
#define DSU_PID2_REVISION_m   	0x000000f0
#define DSU_PID2_REVISION_v(x)	(((x) >> 4) & 0xf)

struct __struct_DSU_PID2
{
  uint32_t	jepidch	: 3;
  uint32_t	jepu	: 1;
  uint32_t	revision	: 4;
  uint32_t		: 24;
};

#define DSU_PID3_CUSMOD(x)  	((x) << 0)
#define DSU_PID3_CUSMOD_m   	0x0000000f
#define DSU_PID3_CUSMOD_v(x)	(((x) >> 0) & 0xf)
#define DSU_PID3_REVAND(x)  	((x) << 4)
#define DSU_PID3_REVAND_m   	0x000000f0
#define DSU_PID3_REVAND_v(x)	(((x) >> 4) & 0xf)

struct __struct_DSU_PID3
{
  uint32_t	cusmod	: 4;
  uint32_t	revand	: 4;
  uint32_t		: 24;
};

#define DSU_CID0_PREAMBLEB0(x)  	((x) << 0)
#define DSU_CID0_PREAMBLEB0_m   	0x000000ff
#define DSU_CID0_PREAMBLEB0_v(x)	(((x) >> 0) & 0xff)

struct __struct_DSU_CID0
{
  uint32_t	preambleb0	: 8;
  uint32_t		: 24;
};

#define DSU_CID1_PREAMBLE(x)  	((x) << 0)
#define DSU_CID1_PREAMBLE_m   	0x0000000f
#define DSU_CID1_PREAMBLE_v(x)	(((x) >> 0) & 0xf)
#define DSU_CID1_CCLASS(x)  	((x) << 4)
#define DSU_CID1_CCLASS_m   	0x000000f0
#define DSU_CID1_CCLASS_v(x)	(((x) >> 4) & 0xf)

struct __struct_DSU_CID1
{
  uint32_t	preamble	: 4;
  uint32_t	cclass	: 4;
  uint32_t		: 24;
};

#define DSU_CID2_PREAMBLEB2(x)  	((x) << 0)
#define DSU_CID2_PREAMBLEB2_m   	0x000000ff
#define DSU_CID2_PREAMBLEB2_v(x)	(((x) >> 0) & 0xff)

struct __struct_DSU_CID2
{
  uint32_t	preambleb2	: 8;
  uint32_t		: 24;
};

#define DSU_CID3_PREAMBLEB3(x)  	((x) << 0)
#define DSU_CID3_PREAMBLEB3_m   	0x000000ff
#define DSU_CID3_PREAMBLEB3_v(x)	(((x) >> 0) & 0xff)

struct __struct_DSU_CID3
{
  uint32_t	preambleb3	: 8;
  uint32_t		: 24;
};


// NVMCTRL
#define NVMCTRL_CTRLA_CMD(x)  	((x) << 0)
#define NVMCTRL_CTRLA_CMD_m   	0x0000007f
#define NVMCTRL_CTRLA_CMD_v(x)	(((x) >> 0) & 0x7f)
#define NVMCTRL_CTRLA_CMD_ER	0x2
#define NVMCTRL_CTRLA_CMD_WP	0x4
#define NVMCTRL_CTRLA_CMD_EAR	0x5
#define NVMCTRL_CTRLA_CMD_WAP	0x6
#define NVMCTRL_CTRLA_CMD_LR	0x40
#define NVMCTRL_CTRLA_CMD_UR	0x41
#define NVMCTRL_CTRLA_CMD_SPRM	0x42
#define NVMCTRL_CTRLA_CMD_CPRM	0x43
#define NVMCTRL_CTRLA_CMD_PBC	0x44
#define NVMCTRL_CTRLA_CMD_SSB	0x45
#define NVMCTRL_CTRLA_CMD_INVALL	0x46
#define NVMCTRL_CTRLA_CMDEX(x)  	((x) << 8)
#define NVMCTRL_CTRLA_CMDEX_m   	0x0000ff00
#define NVMCTRL_CTRLA_CMDEX_v(x)	(((x) >> 8) & 0xff)
#define NVMCTRL_CTRLA_CMDEX_KEY	0xa5

struct __struct_NVMCTRL_CTRLA
{
  uint16_t	cmd	: 7;
  uint16_t		: 1;
  uint16_t	cmdex	: 8;
};

#define NVMCTRL_CTRLB_RWS(x)  	((x) << 1)
#define NVMCTRL_CTRLB_RWS_m   	0x0000001e
#define NVMCTRL_CTRLB_RWS_v(x)	(((x) >> 1) & 0xf)
#define NVMCTRL_CTRLB_RWS_SINGLE	0x0
#define NVMCTRL_CTRLB_RWS_HALF	0x1
#define NVMCTRL_CTRLB_RWS_DUAL	0x2
#define NVMCTRL_CTRLB_MANW     	(1 << 7)
#define NVMCTRL_CTRLB_SLEEPPRM(x)  	((x) << 8)
#define NVMCTRL_CTRLB_SLEEPPRM_m   	0x00000300
#define NVMCTRL_CTRLB_SLEEPPRM_v(x)	(((x) >> 8) & 0x3)
#define NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS	0x0
#define NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT	0x1
#define NVMCTRL_CTRLB_SLEEPPRM_DISABLED	0x3
#define NVMCTRL_CTRLB_READMODE(x)  	((x) << 16)
#define NVMCTRL_CTRLB_READMODE_m   	0x00030000
#define NVMCTRL_CTRLB_READMODE_v(x)	(((x) >> 16) & 0x3)
#define NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY	0x0
#define NVMCTRL_CTRLB_READMODE_LOW_POWER	0x1
#define NVMCTRL_CTRLB_READMODE_DETERMINISTIC	0x2
#define NVMCTRL_CTRLB_CACHEDIS     	(1 << 18)

struct __struct_NVMCTRL_CTRLB
{
  uint32_t		: 1;
  uint32_t	rws	: 4;
  uint32_t		: 2;
  uint32_t	manw	: 1;
  uint32_t	sleepprm	: 2;
  uint32_t		: 6;
  uint32_t	readmode	: 2;
  uint32_t	cachedis	: 1;
  uint32_t		: 13;
};

#define NVMCTRL_PARAM_NVMP(x)  	((x) << 0)
#define NVMCTRL_PARAM_NVMP_m   	0x0000ffff
#define NVMCTRL_PARAM_NVMP_v(x)	(((x) >> 0) & 0xffff)
#define NVMCTRL_PARAM_PSZ(x)  	((x) << 16)
#define NVMCTRL_PARAM_PSZ_m   	0x00070000
#define NVMCTRL_PARAM_PSZ_v(x)	(((x) >> 16) & 0x7)
#define NVMCTRL_PARAM_PSZ_8	0x0
#define NVMCTRL_PARAM_PSZ_16	0x1
#define NVMCTRL_PARAM_PSZ_32	0x2
#define NVMCTRL_PARAM_PSZ_64	0x3
#define NVMCTRL_PARAM_PSZ_128	0x4
#define NVMCTRL_PARAM_PSZ_256	0x5
#define NVMCTRL_PARAM_PSZ_512	0x6
#define NVMCTRL_PARAM_PSZ_1024	0x7

struct __struct_NVMCTRL_PARAM
{
  uint32_t	nvmp	: 16;
  uint32_t	psz	: 3;
  uint32_t		: 13;
};

#define NVMCTRL_INTENCLR_READY     	(1 << 0)
#define NVMCTRL_INTENCLR_ERROR     	(1 << 1)

struct __struct_NVMCTRL_INTENCLR
{
  uint8_t	ready	: 1;
  uint8_t	error	: 1;
  uint8_t		: 6;
};

#define NVMCTRL_INTENSET_READY     	(1 << 0)
#define NVMCTRL_INTENSET_ERROR     	(1 << 1)

struct __struct_NVMCTRL_INTENSET
{
  uint8_t	ready	: 1;
  uint8_t	error	: 1;
  uint8_t		: 6;
};

#define NVMCTRL_INTFLAG_READY     	(1 << 0)
#define NVMCTRL_INTFLAG_ERROR     	(1 << 1)

struct __struct_NVMCTRL_INTFLAG
{
  uint8_t	ready	: 1;
  uint8_t	error	: 1;
  uint8_t		: 6;
};

#define NVMCTRL_STATUS_PRM     	(1 << 0)
#define NVMCTRL_STATUS_LOAD     	(1 << 1)
#define NVMCTRL_STATUS_PROGE     	(1 << 2)
#define NVMCTRL_STATUS_LOCKE     	(1 << 3)
#define NVMCTRL_STATUS_NVME     	(1 << 4)
#define NVMCTRL_STATUS_SB     	(1 << 8)

struct __struct_NVMCTRL_STATUS
{
  uint16_t	prm	: 1;
  uint16_t	load	: 1;
  uint16_t	proge	: 1;
  uint16_t	locke	: 1;
  uint16_t	nvme	: 1;
  uint16_t		: 3;
  uint16_t	sb	: 1;
  uint16_t		: 7;
};

#define NVMCTRL_ADDR_ADDR(x)  	((x) << 0)
#define NVMCTRL_ADDR_ADDR_m   	0x003fffff
#define NVMCTRL_ADDR_ADDR_v(x)	(((x) >> 0) & 0x3fffff)

struct __struct_NVMCTRL_ADDR
{
  uint32_t	addr	: 22;
  uint32_t		: 10;
};


// PORT
#define PORT_DIR_P0     	(1 << 0)
#define PORT_DIR_P1     	(1 << 1)
#define PORT_DIR_P2     	(1 << 2)
#define PORT_DIR_P3     	(1 << 3)
#define PORT_DIR_P4     	(1 << 4)
#define PORT_DIR_P5     	(1 << 5)
#define PORT_DIR_P6     	(1 << 6)
#define PORT_DIR_P7     	(1 << 7)
#define PORT_DIR_P8     	(1 << 8)
#define PORT_DIR_P9     	(1 << 9)
#define PORT_DIR_P10     	(1 << 10)
#define PORT_DIR_P11     	(1 << 11)
#define PORT_DIR_P12     	(1 << 12)
#define PORT_DIR_P13     	(1 << 13)
#define PORT_DIR_P14     	(1 << 14)
#define PORT_DIR_P15     	(1 << 15)
#define PORT_DIR_P16     	(1 << 16)
#define PORT_DIR_P17     	(1 << 17)
#define PORT_DIR_P18     	(1 << 18)
#define PORT_DIR_P19     	(1 << 19)
#define PORT_DIR_P20     	(1 << 20)
#define PORT_DIR_P21     	(1 << 21)
#define PORT_DIR_P22     	(1 << 22)
#define PORT_DIR_P23     	(1 << 23)
#define PORT_DIR_P24     	(1 << 24)
#define PORT_DIR_P25     	(1 << 25)
#define PORT_DIR_P26     	(1 << 26)
#define PORT_DIR_P27     	(1 << 27)
#define PORT_DIR_P28     	(1 << 28)
#define PORT_DIR_P29     	(1 << 29)
#define PORT_DIR_P30     	(1 << 30)
#define PORT_DIR_P31     	(1 << 31)

struct __struct_PORT_DIR
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

#define PORT_DIRCLR_P0     	(1 << 0)
#define PORT_DIRCLR_P1     	(1 << 1)
#define PORT_DIRCLR_P2     	(1 << 2)
#define PORT_DIRCLR_P3     	(1 << 3)
#define PORT_DIRCLR_P4     	(1 << 4)
#define PORT_DIRCLR_P5     	(1 << 5)
#define PORT_DIRCLR_P6     	(1 << 6)
#define PORT_DIRCLR_P7     	(1 << 7)
#define PORT_DIRCLR_P8     	(1 << 8)
#define PORT_DIRCLR_P9     	(1 << 9)
#define PORT_DIRCLR_P10     	(1 << 10)
#define PORT_DIRCLR_P11     	(1 << 11)
#define PORT_DIRCLR_P12     	(1 << 12)
#define PORT_DIRCLR_P13     	(1 << 13)
#define PORT_DIRCLR_P14     	(1 << 14)
#define PORT_DIRCLR_P15     	(1 << 15)
#define PORT_DIRCLR_P16     	(1 << 16)
#define PORT_DIRCLR_P17     	(1 << 17)
#define PORT_DIRCLR_P18     	(1 << 18)
#define PORT_DIRCLR_P19     	(1 << 19)
#define PORT_DIRCLR_P20     	(1 << 20)
#define PORT_DIRCLR_P21     	(1 << 21)
#define PORT_DIRCLR_P22     	(1 << 22)
#define PORT_DIRCLR_P23     	(1 << 23)
#define PORT_DIRCLR_P24     	(1 << 24)
#define PORT_DIRCLR_P25     	(1 << 25)
#define PORT_DIRCLR_P26     	(1 << 26)
#define PORT_DIRCLR_P27     	(1 << 27)
#define PORT_DIRCLR_P28     	(1 << 28)
#define PORT_DIRCLR_P29     	(1 << 29)
#define PORT_DIRCLR_P30     	(1 << 30)
#define PORT_DIRCLR_P31     	(1 << 31)

struct __struct_PORT_DIRCLR
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

#define PORT_DIRSET_P0     	(1 << 0)
#define PORT_DIRSET_P1     	(1 << 1)
#define PORT_DIRSET_P2     	(1 << 2)
#define PORT_DIRSET_P3     	(1 << 3)
#define PORT_DIRSET_P4     	(1 << 4)
#define PORT_DIRSET_P5     	(1 << 5)
#define PORT_DIRSET_P6     	(1 << 6)
#define PORT_DIRSET_P7     	(1 << 7)
#define PORT_DIRSET_P8     	(1 << 8)
#define PORT_DIRSET_P9     	(1 << 9)
#define PORT_DIRSET_P10     	(1 << 10)
#define PORT_DIRSET_P11     	(1 << 11)
#define PORT_DIRSET_P12     	(1 << 12)
#define PORT_DIRSET_P13     	(1 << 13)
#define PORT_DIRSET_P14     	(1 << 14)
#define PORT_DIRSET_P15     	(1 << 15)
#define PORT_DIRSET_P16     	(1 << 16)
#define PORT_DIRSET_P17     	(1 << 17)
#define PORT_DIRSET_P18     	(1 << 18)
#define PORT_DIRSET_P19     	(1 << 19)
#define PORT_DIRSET_P20     	(1 << 20)
#define PORT_DIRSET_P21     	(1 << 21)
#define PORT_DIRSET_P22     	(1 << 22)
#define PORT_DIRSET_P23     	(1 << 23)
#define PORT_DIRSET_P24     	(1 << 24)
#define PORT_DIRSET_P25     	(1 << 25)
#define PORT_DIRSET_P26     	(1 << 26)
#define PORT_DIRSET_P27     	(1 << 27)
#define PORT_DIRSET_P28     	(1 << 28)
#define PORT_DIRSET_P29     	(1 << 29)
#define PORT_DIRSET_P30     	(1 << 30)
#define PORT_DIRSET_P31     	(1 << 31)

struct __struct_PORT_DIRSET
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

#define PORT_DIRTGL_P0     	(1 << 0)
#define PORT_DIRTGL_P1     	(1 << 1)
#define PORT_DIRTGL_P2     	(1 << 2)
#define PORT_DIRTGL_P3     	(1 << 3)
#define PORT_DIRTGL_P4     	(1 << 4)
#define PORT_DIRTGL_P5     	(1 << 5)
#define PORT_DIRTGL_P6     	(1 << 6)
#define PORT_DIRTGL_P7     	(1 << 7)
#define PORT_DIRTGL_P8     	(1 << 8)
#define PORT_DIRTGL_P9     	(1 << 9)
#define PORT_DIRTGL_P10     	(1 << 10)
#define PORT_DIRTGL_P11     	(1 << 11)
#define PORT_DIRTGL_P12     	(1 << 12)
#define PORT_DIRTGL_P13     	(1 << 13)
#define PORT_DIRTGL_P14     	(1 << 14)
#define PORT_DIRTGL_P15     	(1 << 15)
#define PORT_DIRTGL_P16     	(1 << 16)
#define PORT_DIRTGL_P17     	(1 << 17)
#define PORT_DIRTGL_P18     	(1 << 18)
#define PORT_DIRTGL_P19     	(1 << 19)
#define PORT_DIRTGL_P20     	(1 << 20)
#define PORT_DIRTGL_P21     	(1 << 21)
#define PORT_DIRTGL_P22     	(1 << 22)
#define PORT_DIRTGL_P23     	(1 << 23)
#define PORT_DIRTGL_P24     	(1 << 24)
#define PORT_DIRTGL_P25     	(1 << 25)
#define PORT_DIRTGL_P26     	(1 << 26)
#define PORT_DIRTGL_P27     	(1 << 27)
#define PORT_DIRTGL_P28     	(1 << 28)
#define PORT_DIRTGL_P29     	(1 << 29)
#define PORT_DIRTGL_P30     	(1 << 30)
#define PORT_DIRTGL_P31     	(1 << 31)

struct __struct_PORT_DIRTGL
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

#define PORT_OUT_P0     	(1 << 0)
#define PORT_OUT_P1     	(1 << 1)
#define PORT_OUT_P2     	(1 << 2)
#define PORT_OUT_P3     	(1 << 3)
#define PORT_OUT_P4     	(1 << 4)
#define PORT_OUT_P5     	(1 << 5)
#define PORT_OUT_P6     	(1 << 6)
#define PORT_OUT_P7     	(1 << 7)
#define PORT_OUT_P8     	(1 << 8)
#define PORT_OUT_P9     	(1 << 9)
#define PORT_OUT_P10     	(1 << 10)
#define PORT_OUT_P11     	(1 << 11)
#define PORT_OUT_P12     	(1 << 12)
#define PORT_OUT_P13     	(1 << 13)
#define PORT_OUT_P14     	(1 << 14)
#define PORT_OUT_P15     	(1 << 15)
#define PORT_OUT_P16     	(1 << 16)
#define PORT_OUT_P17     	(1 << 17)
#define PORT_OUT_P18     	(1 << 18)
#define PORT_OUT_P19     	(1 << 19)
#define PORT_OUT_P20     	(1 << 20)
#define PORT_OUT_P21     	(1 << 21)
#define PORT_OUT_P22     	(1 << 22)
#define PORT_OUT_P23     	(1 << 23)
#define PORT_OUT_P24     	(1 << 24)
#define PORT_OUT_P25     	(1 << 25)
#define PORT_OUT_P26     	(1 << 26)
#define PORT_OUT_P27     	(1 << 27)
#define PORT_OUT_P28     	(1 << 28)
#define PORT_OUT_P29     	(1 << 29)
#define PORT_OUT_P30     	(1 << 30)
#define PORT_OUT_P31     	(1 << 31)

struct __struct_PORT_OUT
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

#define PORT_OUTCLR_P0     	(1 << 0)
#define PORT_OUTCLR_P1     	(1 << 1)
#define PORT_OUTCLR_P2     	(1 << 2)
#define PORT_OUTCLR_P3     	(1 << 3)
#define PORT_OUTCLR_P4     	(1 << 4)
#define PORT_OUTCLR_P5     	(1 << 5)
#define PORT_OUTCLR_P6     	(1 << 6)
#define PORT_OUTCLR_P7     	(1 << 7)
#define PORT_OUTCLR_P8     	(1 << 8)
#define PORT_OUTCLR_P9     	(1 << 9)
#define PORT_OUTCLR_P10     	(1 << 10)
#define PORT_OUTCLR_P11     	(1 << 11)
#define PORT_OUTCLR_P12     	(1 << 12)
#define PORT_OUTCLR_P13     	(1 << 13)
#define PORT_OUTCLR_P14     	(1 << 14)
#define PORT_OUTCLR_P15     	(1 << 15)
#define PORT_OUTCLR_P16     	(1 << 16)
#define PORT_OUTCLR_P17     	(1 << 17)
#define PORT_OUTCLR_P18     	(1 << 18)
#define PORT_OUTCLR_P19     	(1 << 19)
#define PORT_OUTCLR_P20     	(1 << 20)
#define PORT_OUTCLR_P21     	(1 << 21)
#define PORT_OUTCLR_P22     	(1 << 22)
#define PORT_OUTCLR_P23     	(1 << 23)
#define PORT_OUTCLR_P24     	(1 << 24)
#define PORT_OUTCLR_P25     	(1 << 25)
#define PORT_OUTCLR_P26     	(1 << 26)
#define PORT_OUTCLR_P27     	(1 << 27)
#define PORT_OUTCLR_P28     	(1 << 28)
#define PORT_OUTCLR_P29     	(1 << 29)
#define PORT_OUTCLR_P30     	(1 << 30)
#define PORT_OUTCLR_P31     	(1 << 31)

struct __struct_PORT_OUTCLR
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

#define PORT_OUTSET_P0     	(1 << 0)
#define PORT_OUTSET_P1     	(1 << 1)
#define PORT_OUTSET_P2     	(1 << 2)
#define PORT_OUTSET_P3     	(1 << 3)
#define PORT_OUTSET_P4     	(1 << 4)
#define PORT_OUTSET_P5     	(1 << 5)
#define PORT_OUTSET_P6     	(1 << 6)
#define PORT_OUTSET_P7     	(1 << 7)
#define PORT_OUTSET_P8     	(1 << 8)
#define PORT_OUTSET_P9     	(1 << 9)
#define PORT_OUTSET_P10     	(1 << 10)
#define PORT_OUTSET_P11     	(1 << 11)
#define PORT_OUTSET_P12     	(1 << 12)
#define PORT_OUTSET_P13     	(1 << 13)
#define PORT_OUTSET_P14     	(1 << 14)
#define PORT_OUTSET_P15     	(1 << 15)
#define PORT_OUTSET_P16     	(1 << 16)
#define PORT_OUTSET_P17     	(1 << 17)
#define PORT_OUTSET_P18     	(1 << 18)
#define PORT_OUTSET_P19     	(1 << 19)
#define PORT_OUTSET_P20     	(1 << 20)
#define PORT_OUTSET_P21     	(1 << 21)
#define PORT_OUTSET_P22     	(1 << 22)
#define PORT_OUTSET_P23     	(1 << 23)
#define PORT_OUTSET_P24     	(1 << 24)
#define PORT_OUTSET_P25     	(1 << 25)
#define PORT_OUTSET_P26     	(1 << 26)
#define PORT_OUTSET_P27     	(1 << 27)
#define PORT_OUTSET_P28     	(1 << 28)
#define PORT_OUTSET_P29     	(1 << 29)
#define PORT_OUTSET_P30     	(1 << 30)
#define PORT_OUTSET_P31     	(1 << 31)

struct __struct_PORT_OUTSET
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

#define PORT_OUTTGL_P0     	(1 << 0)
#define PORT_OUTTGL_P1     	(1 << 1)
#define PORT_OUTTGL_P2     	(1 << 2)
#define PORT_OUTTGL_P3     	(1 << 3)
#define PORT_OUTTGL_P4     	(1 << 4)
#define PORT_OUTTGL_P5     	(1 << 5)
#define PORT_OUTTGL_P6     	(1 << 6)
#define PORT_OUTTGL_P7     	(1 << 7)
#define PORT_OUTTGL_P8     	(1 << 8)
#define PORT_OUTTGL_P9     	(1 << 9)
#define PORT_OUTTGL_P10     	(1 << 10)
#define PORT_OUTTGL_P11     	(1 << 11)
#define PORT_OUTTGL_P12     	(1 << 12)
#define PORT_OUTTGL_P13     	(1 << 13)
#define PORT_OUTTGL_P14     	(1 << 14)
#define PORT_OUTTGL_P15     	(1 << 15)
#define PORT_OUTTGL_P16     	(1 << 16)
#define PORT_OUTTGL_P17     	(1 << 17)
#define PORT_OUTTGL_P18     	(1 << 18)
#define PORT_OUTTGL_P19     	(1 << 19)
#define PORT_OUTTGL_P20     	(1 << 20)
#define PORT_OUTTGL_P21     	(1 << 21)
#define PORT_OUTTGL_P22     	(1 << 22)
#define PORT_OUTTGL_P23     	(1 << 23)
#define PORT_OUTTGL_P24     	(1 << 24)
#define PORT_OUTTGL_P25     	(1 << 25)
#define PORT_OUTTGL_P26     	(1 << 26)
#define PORT_OUTTGL_P27     	(1 << 27)
#define PORT_OUTTGL_P28     	(1 << 28)
#define PORT_OUTTGL_P29     	(1 << 29)
#define PORT_OUTTGL_P30     	(1 << 30)
#define PORT_OUTTGL_P31     	(1 << 31)

struct __struct_PORT_OUTTGL
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

#define PORT_IN_P0     	(1 << 0)
#define PORT_IN_P1     	(1 << 1)
#define PORT_IN_P2     	(1 << 2)
#define PORT_IN_P3     	(1 << 3)
#define PORT_IN_P4     	(1 << 4)
#define PORT_IN_P5     	(1 << 5)
#define PORT_IN_P6     	(1 << 6)
#define PORT_IN_P7     	(1 << 7)
#define PORT_IN_P8     	(1 << 8)
#define PORT_IN_P9     	(1 << 9)
#define PORT_IN_P10     	(1 << 10)
#define PORT_IN_P11     	(1 << 11)
#define PORT_IN_P12     	(1 << 12)
#define PORT_IN_P13     	(1 << 13)
#define PORT_IN_P14     	(1 << 14)
#define PORT_IN_P15     	(1 << 15)
#define PORT_IN_P16     	(1 << 16)
#define PORT_IN_P17     	(1 << 17)
#define PORT_IN_P18     	(1 << 18)
#define PORT_IN_P19     	(1 << 19)
#define PORT_IN_P20     	(1 << 20)
#define PORT_IN_P21     	(1 << 21)
#define PORT_IN_P22     	(1 << 22)
#define PORT_IN_P23     	(1 << 23)
#define PORT_IN_P24     	(1 << 24)
#define PORT_IN_P25     	(1 << 25)
#define PORT_IN_P26     	(1 << 26)
#define PORT_IN_P27     	(1 << 27)
#define PORT_IN_P28     	(1 << 28)
#define PORT_IN_P29     	(1 << 29)
#define PORT_IN_P30     	(1 << 30)
#define PORT_IN_P31     	(1 << 31)

struct __struct_PORT_IN
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

#define PORT_CTRL_P0     	(1 << 0)
#define PORT_CTRL_P1     	(1 << 1)
#define PORT_CTRL_P2     	(1 << 2)
#define PORT_CTRL_P3     	(1 << 3)
#define PORT_CTRL_P4     	(1 << 4)
#define PORT_CTRL_P5     	(1 << 5)
#define PORT_CTRL_P6     	(1 << 6)
#define PORT_CTRL_P7     	(1 << 7)
#define PORT_CTRL_P8     	(1 << 8)
#define PORT_CTRL_P9     	(1 << 9)
#define PORT_CTRL_P10     	(1 << 10)
#define PORT_CTRL_P11     	(1 << 11)
#define PORT_CTRL_P12     	(1 << 12)
#define PORT_CTRL_P13     	(1 << 13)
#define PORT_CTRL_P14     	(1 << 14)
#define PORT_CTRL_P15     	(1 << 15)
#define PORT_CTRL_P16     	(1 << 16)
#define PORT_CTRL_P17     	(1 << 17)
#define PORT_CTRL_P18     	(1 << 18)
#define PORT_CTRL_P19     	(1 << 19)
#define PORT_CTRL_P20     	(1 << 20)
#define PORT_CTRL_P21     	(1 << 21)
#define PORT_CTRL_P22     	(1 << 22)
#define PORT_CTRL_P23     	(1 << 23)
#define PORT_CTRL_P24     	(1 << 24)
#define PORT_CTRL_P25     	(1 << 25)
#define PORT_CTRL_P26     	(1 << 26)
#define PORT_CTRL_P27     	(1 << 27)
#define PORT_CTRL_P28     	(1 << 28)
#define PORT_CTRL_P29     	(1 << 29)
#define PORT_CTRL_P30     	(1 << 30)
#define PORT_CTRL_P31     	(1 << 31)

struct __struct_PORT_CTRL
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

#define PORT_WRCONFIG_PINMASK(x)  	((x) << 0)
#define PORT_WRCONFIG_PINMASK_m   	0x0000ffff
#define PORT_WRCONFIG_PINMASK_v(x)	(((x) >> 0) & 0xffff)
#define PORT_WRCONFIG_PMUXEN     	(1 << 16)
#define PORT_WRCONFIG_INEN     	(1 << 17)
#define PORT_WRCONFIG_PULLEN     	(1 << 18)
#define PORT_WRCONFIG_DRVSTR     	(1 << 22)
#define PORT_WRCONFIG_PMUX(x)  	((x) << 24)
#define PORT_WRCONFIG_PMUX_m   	0x0f000000
#define PORT_WRCONFIG_PMUX_v(x)	(((x) >> 24) & 0xf)
#define PORT_WRCONFIG_WRPMUX     	(1 << 28)
#define PORT_WRCONFIG_WRPINCFG     	(1 << 30)
#define PORT_WRCONFIG_HWSEL     	(1 << 31)

struct __struct_PORT_WRCONFIG
{
  uint32_t	pinmask	: 16;
  uint32_t	pmuxen	: 1;
  uint32_t	inen	: 1;
  uint32_t	pullen	: 1;
  uint32_t		: 3;
  uint32_t	drvstr	: 1;
  uint32_t		: 1;
  uint32_t	pmux	: 4;
  uint32_t	wrpmux	: 1;
  uint32_t		: 1;
  uint32_t	wrpincfg	: 1;
  uint32_t	hwsel	: 1;
};

#define PORT_PMUX_PMUXE(x)  	((x) << 0)
#define PORT_PMUX_PMUXE_m   	0x0000000f
#define PORT_PMUX_PMUXE_v(x)	(((x) >> 0) & 0xf)
#define PORT_PMUX_PMUXO(x)  	((x) << 4)
#define PORT_PMUX_PMUXO_m   	0x000000f0
#define PORT_PMUX_PMUXO_v(x)	(((x) >> 4) & 0xf)

struct __struct_PORT_PMUX
{
  uint8_t	pmuxe	: 4;
  uint8_t	pmuxo	: 4;
};

#define PORT_PINCFG_PMUXEN     	(1 << 0)
#define PORT_PINCFG_INEN     	(1 << 1)
#define PORT_PINCFG_PULLEN     	(1 << 2)
#define PORT_PINCFG_DRVSTR     	(1 << 6)

struct __struct_PORT_PINCFG
{
  uint8_t	pmuxen	: 1;
  uint8_t	inen	: 1;
  uint8_t	pullen	: 1;
  uint8_t		: 3;
  uint8_t	drvstr	: 1;
  uint8_t		: 1;
};


// EVSYS
#define EVSYS_CTRL_SWRST     	(1 << 0)
#define EVSYS_CTRL_GCLKREQ     	(1 << 4)

struct __struct_EVSYS_CTRL
{
  uint8_t	swrst	: 1;
  uint8_t		: 3;
  uint8_t	gclkreq	: 1;
  uint8_t		: 3;
};

#define EVSYS_CHANNEL_CHANNEL(x)  	((x) << 0)
#define EVSYS_CHANNEL_CHANNEL_m   	0x000000ff
#define EVSYS_CHANNEL_CHANNEL_v(x)	(((x) >> 0) & 0xff)
#define EVSYS_CHANNEL_SWEVT     	(1 << 8)
#define EVSYS_CHANNEL_EVGEN(x)  	((x) << 16)
#define EVSYS_CHANNEL_EVGEN_m   	0x00ff0000
#define EVSYS_CHANNEL_EVGEN_v(x)	(((x) >> 16) & 0xff)
#define EVSYS_CHANNEL_EVGEN_NONE	0x0
#define EVSYS_CHANNEL_EVGEN_RTC_CMP0	0x1
#define EVSYS_CHANNEL_EVGEN_RTC_CMP1	0x2
#define EVSYS_CHANNEL_EVGEN_RTC_OVF	0x3
#define EVSYS_CHANNEL_EVGEN_RTC_PER0	0x4
#define EVSYS_CHANNEL_EVGEN_RTC_PER1	0x5
#define EVSYS_CHANNEL_EVGEN_RTC_PER2	0x6
#define EVSYS_CHANNEL_EVGEN_RTC_PER3	0x7
#define EVSYS_CHANNEL_EVGEN_RTC_PER4	0x8
#define EVSYS_CHANNEL_EVGEN_RTC_PER5	0x9
#define EVSYS_CHANNEL_EVGEN_RTC_PER6	0xa
#define EVSYS_CHANNEL_EVGEN_RTC_PER7	0xb
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT0	0xc
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT1	0xd
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT2	0xe
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT3	0xf
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT4	0x10
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT5	0x11
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT6	0x12
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT7	0x13
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT8	0x14
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT9	0x15
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT10	0x16
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT11	0x17
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT12	0x18
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT13	0x19
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT14	0x1a
#define EVSYS_CHANNEL_EVGEN_EIC_EXTINT15	0x1b
#define EVSYS_CHANNEL_EVGEN_TC0_OVF	0x1c
#define EVSYS_CHANNEL_EVGEN_TC0_MC0	0x1d
#define EVSYS_CHANNEL_EVGEN_TC0_MC1	0x1e
#define EVSYS_CHANNEL_EVGEN_TC1_OVF	0x1f
#define EVSYS_CHANNEL_EVGEN_TC1_MC0	0x20
#define EVSYS_CHANNEL_EVGEN_TC1_MC1	0x21
#define EVSYS_CHANNEL_EVGEN_TC2_OVF	0x22
#define EVSYS_CHANNEL_EVGEN_TC2_MC0	0x23
#define EVSYS_CHANNEL_EVGEN_TC2_MC1	0x24
#define EVSYS_CHANNEL_EVGEN_TC3_OVF	0x25
#define EVSYS_CHANNEL_EVGEN_TC3_MC0	0x26
#define EVSYS_CHANNEL_EVGEN_TC3_MC1	0x27
#define EVSYS_CHANNEL_EVGEN_TC4_OVF	0x28
#define EVSYS_CHANNEL_EVGEN_TC4_MC0	0x29
#define EVSYS_CHANNEL_EVGEN_TC4_MC1	0x2a
#define EVSYS_CHANNEL_EVGEN_TC5_OVF	0x2b
#define EVSYS_CHANNEL_EVGEN_TC5_MC0	0x2c
#define EVSYS_CHANNEL_EVGEN_TC5_MC1	0x2d
#define EVSYS_CHANNEL_EVGEN_TC6_OVF	0x2e
#define EVSYS_CHANNEL_EVGEN_TC6_MC0	0x2f
#define EVSYS_CHANNEL_EVGEN_TC6_MC1	0x30
#define EVSYS_CHANNEL_EVGEN_TC7_OVF	0x31
#define EVSYS_CHANNEL_EVGEN_TC7_MC0	0x32
#define EVSYS_CHANNEL_EVGEN_TC7_MC1	0x33
#define EVSYS_CHANNEL_EVGEN_ADC_RESRDY	0x34
#define EVSYS_CHANNEL_EVGEN_ADC_WINMON	0x35
#define EVSYS_CHANNEL_EVGEN_AC_COMP0	0x36
#define EVSYS_CHANNEL_EVGEN_AC_COMP1	0x37
#define EVSYS_CHANNEL_EVGEN_AC_WIN	0x38
#define EVSYS_CHANNEL_EVGEN_DAC_EMPTY	0x39
#define EVSYS_CHANNEL_EVGEN_PTC_EOC	0x3a
#define EVSYS_CHANNEL_EVGEN_PTC_WCOMP	0x3b
#define EVSYS_CHANNEL_PATH(x)  	((x) << 24)
#define EVSYS_CHANNEL_PATH_m   	0x03000000
#define EVSYS_CHANNEL_PATH_v(x)	(((x) >> 24) & 0x3)
#define EVSYS_CHANNEL_PATH_SYNC	0x0
#define EVSYS_CHANNEL_PATH_RESYNC	0x1
#define EVSYS_CHANNEL_PATH_ASYNC	0x2
#define EVSYS_CHANNEL_EDGSEL(x)  	((x) << 26)
#define EVSYS_CHANNEL_EDGSEL_m   	0x0c000000
#define EVSYS_CHANNEL_EDGSEL_v(x)	(((x) >> 26) & 0x3)
#define EVSYS_CHANNEL_EDGSEL_NO_EVT	0x0
#define EVSYS_CHANNEL_EDGSEL_RISING	0x1
#define EVSYS_CHANNEL_EDGSEL_FALLING	0x2
#define EVSYS_CHANNEL_EDGSEL_BOTH	0x3

struct __struct_EVSYS_CHANNEL
{
  uint32_t	channel	: 8;
  uint32_t	swevt	: 1;
  uint32_t		: 7;
  uint32_t	evgen	: 8;
  uint32_t	path	: 2;
  uint32_t	edgsel	: 2;
  uint32_t		: 4;
};

#define EVSYS_USER_USER(x)  	((x) << 0)
#define EVSYS_USER_USER_m   	0x000000ff
#define EVSYS_USER_USER_v(x)	(((x) >> 0) & 0xff)
#define EVSYS_USER_USER_TC0	0x0
#define EVSYS_USER_USER_TC1	0x1
#define EVSYS_USER_USER_TC2	0x2
#define EVSYS_USER_USER_TC3	0x3
#define EVSYS_USER_USER_TC4	0x4
#define EVSYS_USER_USER_TC5	0x5
#define EVSYS_USER_USER_TC6	0x6
#define EVSYS_USER_USER_TC7	0x7
#define EVSYS_USER_USER_ADC_START	0x8
#define EVSYS_USER_USER_ADC_SYNC	0x9
#define EVSYS_USER_USER_AC_COMP0	0xa
#define EVSYS_USER_USER_AC_COMP1	0xb
#define EVSYS_USER_USER_DAC_START	0xc
#define EVSYS_USER_USER_PTC_STCONV	0xd
#define EVSYS_USER_CHANNEL(x)  	((x) << 8)
#define EVSYS_USER_CHANNEL_m   	0x0000ff00
#define EVSYS_USER_CHANNEL_v(x)	(((x) >> 8) & 0xff)

struct __struct_EVSYS_USER
{
  uint16_t	user	: 8;
  uint16_t	channel	: 8;
};

#define EVSYS_CHSTATUS_USRRDY0     	(1 << 0)
#define EVSYS_CHSTATUS_USRRDY1     	(1 << 1)
#define EVSYS_CHSTATUS_USRRDY2     	(1 << 2)
#define EVSYS_CHSTATUS_USRRDY3     	(1 << 3)
#define EVSYS_CHSTATUS_USRRDY4     	(1 << 4)
#define EVSYS_CHSTATUS_USRRDY5     	(1 << 5)
#define EVSYS_CHSTATUS_USRRDY6     	(1 << 6)
#define EVSYS_CHSTATUS_USRRDY7     	(1 << 7)
#define EVSYS_CHSTATUS_CHBUSY0     	(1 << 8)
#define EVSYS_CHSTATUS_CHBUSY1     	(1 << 9)
#define EVSYS_CHSTATUS_CHBUSY2     	(1 << 10)
#define EVSYS_CHSTATUS_CHBUSY3     	(1 << 11)
#define EVSYS_CHSTATUS_CHBUSY4     	(1 << 12)
#define EVSYS_CHSTATUS_CHBUSY5     	(1 << 13)
#define EVSYS_CHSTATUS_CHBUSY6     	(1 << 14)
#define EVSYS_CHSTATUS_CHBUSY7     	(1 << 15)

struct __struct_EVSYS_CHSTATUS
{
  uint32_t	usrrdy0	: 1;
  uint32_t	usrrdy1	: 1;
  uint32_t	usrrdy2	: 1;
  uint32_t	usrrdy3	: 1;
  uint32_t	usrrdy4	: 1;
  uint32_t	usrrdy5	: 1;
  uint32_t	usrrdy6	: 1;
  uint32_t	usrrdy7	: 1;
  uint32_t	chbusy0	: 1;
  uint32_t	chbusy1	: 1;
  uint32_t	chbusy2	: 1;
  uint32_t	chbusy3	: 1;
  uint32_t	chbusy4	: 1;
  uint32_t	chbusy5	: 1;
  uint32_t	chbusy6	: 1;
  uint32_t	chbusy7	: 1;
  uint32_t		: 16;
};

#define EVSYS_INTENCLR_OVR0     	(1 << 0)
#define EVSYS_INTENCLR_OVR1     	(1 << 1)
#define EVSYS_INTENCLR_OVR2     	(1 << 2)
#define EVSYS_INTENCLR_OVR3     	(1 << 3)
#define EVSYS_INTENCLR_OVR4     	(1 << 4)
#define EVSYS_INTENCLR_OVR5     	(1 << 5)
#define EVSYS_INTENCLR_OVR6     	(1 << 6)
#define EVSYS_INTENCLR_OVR7     	(1 << 7)
#define EVSYS_INTENCLR_EVD0     	(1 << 8)
#define EVSYS_INTENCLR_EVD1     	(1 << 9)
#define EVSYS_INTENCLR_EVD2     	(1 << 10)
#define EVSYS_INTENCLR_EVD3     	(1 << 11)
#define EVSYS_INTENCLR_EVD4     	(1 << 12)
#define EVSYS_INTENCLR_EVD5     	(1 << 13)
#define EVSYS_INTENCLR_EVD6     	(1 << 14)
#define EVSYS_INTENCLR_EVD7     	(1 << 15)

struct __struct_EVSYS_INTENCLR
{
  uint32_t	ovr0	: 1;
  uint32_t	ovr1	: 1;
  uint32_t	ovr2	: 1;
  uint32_t	ovr3	: 1;
  uint32_t	ovr4	: 1;
  uint32_t	ovr5	: 1;
  uint32_t	ovr6	: 1;
  uint32_t	ovr7	: 1;
  uint32_t	evd0	: 1;
  uint32_t	evd1	: 1;
  uint32_t	evd2	: 1;
  uint32_t	evd3	: 1;
  uint32_t	evd4	: 1;
  uint32_t	evd5	: 1;
  uint32_t	evd6	: 1;
  uint32_t	evd7	: 1;
  uint32_t		: 16;
};

#define EVSYS_INTENSET_OVR0     	(1 << 0)
#define EVSYS_INTENSET_OVR1     	(1 << 1)
#define EVSYS_INTENSET_OVR2     	(1 << 2)
#define EVSYS_INTENSET_OVR3     	(1 << 3)
#define EVSYS_INTENSET_OVR4     	(1 << 4)
#define EVSYS_INTENSET_OVR5     	(1 << 5)
#define EVSYS_INTENSET_OVR6     	(1 << 6)
#define EVSYS_INTENSET_OVR7     	(1 << 7)
#define EVSYS_INTENSET_EVD0     	(1 << 8)
#define EVSYS_INTENSET_EVD1     	(1 << 9)
#define EVSYS_INTENSET_EVD2     	(1 << 10)
#define EVSYS_INTENSET_EVD3     	(1 << 11)
#define EVSYS_INTENSET_EVD4     	(1 << 12)
#define EVSYS_INTENSET_EVD5     	(1 << 13)
#define EVSYS_INTENSET_EVD6     	(1 << 14)
#define EVSYS_INTENSET_EVD7     	(1 << 15)

struct __struct_EVSYS_INTENSET
{
  uint32_t	ovr0	: 1;
  uint32_t	ovr1	: 1;
  uint32_t	ovr2	: 1;
  uint32_t	ovr3	: 1;
  uint32_t	ovr4	: 1;
  uint32_t	ovr5	: 1;
  uint32_t	ovr6	: 1;
  uint32_t	ovr7	: 1;
  uint32_t	evd0	: 1;
  uint32_t	evd1	: 1;
  uint32_t	evd2	: 1;
  uint32_t	evd3	: 1;
  uint32_t	evd4	: 1;
  uint32_t	evd5	: 1;
  uint32_t	evd6	: 1;
  uint32_t	evd7	: 1;
  uint32_t		: 16;
};

#define EVSYS_INTFLAG_OVR0     	(1 << 0)
#define EVSYS_INTFLAG_OVR1     	(1 << 1)
#define EVSYS_INTFLAG_OVR2     	(1 << 2)
#define EVSYS_INTFLAG_OVR3     	(1 << 3)
#define EVSYS_INTFLAG_OVR4     	(1 << 4)
#define EVSYS_INTFLAG_OVR5     	(1 << 5)
#define EVSYS_INTFLAG_OVR6     	(1 << 6)
#define EVSYS_INTFLAG_OVR7     	(1 << 7)
#define EVSYS_INTFLAG_EVD0     	(1 << 8)
#define EVSYS_INTFLAG_EVD1     	(1 << 9)
#define EVSYS_INTFLAG_EVD2     	(1 << 10)
#define EVSYS_INTFLAG_EVD3     	(1 << 11)
#define EVSYS_INTFLAG_EVD4     	(1 << 12)
#define EVSYS_INTFLAG_EVD5     	(1 << 13)
#define EVSYS_INTFLAG_EVD6     	(1 << 14)
#define EVSYS_INTFLAG_EVD7     	(1 << 15)

struct __struct_EVSYS_INTFLAG
{
  uint32_t	ovr0	: 1;
  uint32_t	ovr1	: 1;
  uint32_t	ovr2	: 1;
  uint32_t	ovr3	: 1;
  uint32_t	ovr4	: 1;
  uint32_t	ovr5	: 1;
  uint32_t	ovr6	: 1;
  uint32_t	ovr7	: 1;
  uint32_t	evd0	: 1;
  uint32_t	evd1	: 1;
  uint32_t	evd2	: 1;
  uint32_t	evd3	: 1;
  uint32_t	evd4	: 1;
  uint32_t	evd5	: 1;
  uint32_t	evd6	: 1;
  uint32_t	evd7	: 1;
  uint32_t		: 16;
};


// SC_USART
#define SC_USART_CTRLA_SWRST     	(1 << 0)
#define SC_USART_CTRLA_ENABLE     	(1 << 1)
#define SC_USART_CTRLA_MODE(x)  	((x) << 2)
#define SC_USART_CTRLA_MODE_m   	0x0000001c
#define SC_USART_CTRLA_MODE_v(x)	(((x) >> 2) & 0x7)
#define SC_USART_CTRLA_MODE_USART_EXT_CLK	0x0
#define SC_USART_CTRLA_MODE_USART_INT_CLK	0x1
#define SC_USART_CTRLA_RUNSTDBY     	(1 << 7)
#define SC_USART_CTRLA_TXPO     	(1 << 16)
#define SC_USART_CTRLA_RXPO(x)  	((x) << 20)
#define SC_USART_CTRLA_RXPO_m   	0x00300000
#define SC_USART_CTRLA_RXPO_v(x)	(((x) >> 20) & 0x3)
#define SC_USART_CTRLA_FORM(x)  	((x) << 24)
#define SC_USART_CTRLA_FORM_m   	0x0f000000
#define SC_USART_CTRLA_FORM_v(x)	(((x) >> 24) & 0xf)
#define SC_USART_CTRLA_FORM_NO_PARITY	0x0
#define SC_USART_CTRLA_FORM_PARITY	0x1
#define SC_USART_CTRLA_CMODE(x)  	((x) << 28)
#define SC_USART_CTRLA_CMODE_m   	0x10000000
#define SC_USART_CTRLA_CMODE_v(x)	(((x) >> 28) & 0x1)
#define SC_USART_CTRLA_CMODE_ASYNC	0x0
#define SC_USART_CTRLA_CMODE_SYNC	0x1
#define SC_USART_CTRLA_CPOL     	(1 << 29)
#define SC_USART_CTRLA_DORD(x)  	((x) << 30)
#define SC_USART_CTRLA_DORD_m   	0x40000000
#define SC_USART_CTRLA_DORD_v(x)	(((x) >> 30) & 0x1)
#define SC_USART_CTRLA_DORD_MSB_FIRST	0x0
#define SC_USART_CTRLA_DORD_LSB_FIRST	0x1

struct __struct_SC_USART_CTRLA
{
  uint32_t	swrst	: 1;
  uint32_t	enable	: 1;
  uint32_t	mode	: 3;
  uint32_t		: 2;
  uint32_t	runstdby	: 1;
  uint32_t		: 8;
  uint32_t	txpo	: 1;
  uint32_t		: 3;
  uint32_t	rxpo	: 2;
  uint32_t		: 2;
  uint32_t	form	: 4;
  uint32_t	cmode	: 1;
  uint32_t	cpol	: 1;
  uint32_t	dord	: 1;
  uint32_t		: 1;
};

#define SC_USART_CTRLB_CHSIZE(x)  	((x) << 0)
#define SC_USART_CTRLB_CHSIZE_m   	0x00000007
#define SC_USART_CTRLB_CHSIZE_v(x)	(((x) >> 0) & 0x7)
#define SC_USART_CTRLB_CHSIZE_8_BITS	0x0
#define SC_USART_CTRLB_CHSIZE_9_BITS	0x1
#define SC_USART_CTRLB_CHSIZE_5_BITS	0x5
#define SC_USART_CTRLB_CHSIZE_6_BITS	0x6
#define SC_USART_CTRLB_CHSIZE_7_BITS	0x7
#define SC_USART_CTRLB_SBMODE(x)  	((x) << 6)
#define SC_USART_CTRLB_SBMODE_m   	0x00000040
#define SC_USART_CTRLB_SBMODE_v(x)	(((x) >> 6) & 0x1)
#define SC_USART_CTRLB_SBMODE_ONE_STOP_BIT	0x0
#define SC_USART_CTRLB_SBMODE_TWO_STOP_BITS	0x1
#define SC_USART_CTRLB_SFDE     	(1 << 9)
#define SC_USART_CTRLB_PMODE     	(1 << 13)
#define SC_USART_CTRLB_TXEN     	(1 << 16)
#define SC_USART_CTRLB_RXEN     	(1 << 17)

struct __struct_SC_USART_CTRLB
{
  uint32_t	chsize	: 3;
  uint32_t		: 3;
  uint32_t	sbmode	: 1;
  uint32_t		: 2;
  uint32_t	sfde	: 1;
  uint32_t		: 3;
  uint32_t	pmode	: 1;
  uint32_t		: 2;
  uint32_t	txen	: 1;
  uint32_t	rxen	: 1;
  uint32_t		: 14;
};

#define SC_USART_DBGCTRL_DBGSTOP     	(1 << 0)

struct __struct_SC_USART_DBGCTRL
{
  uint8_t	dbgstop	: 1;
  uint8_t		: 7;
};

#define SC_USART_INTENCLR_DRE     	(1 << 0)
#define SC_USART_INTENCLR_TXC     	(1 << 1)
#define SC_USART_INTENCLR_RXC     	(1 << 2)
#define SC_USART_INTENCLR_RXS     	(1 << 3)

struct __struct_SC_USART_INTENCLR
{
  uint8_t	dre	: 1;
  uint8_t	txc	: 1;
  uint8_t	rxc	: 1;
  uint8_t	rxs	: 1;
  uint8_t		: 4;
};

#define SC_USART_INTENSET_DRE     	(1 << 0)
#define SC_USART_INTENSET_TXC     	(1 << 1)
#define SC_USART_INTENSET_RXC     	(1 << 2)
#define SC_USART_INTENSET_RXS     	(1 << 3)

struct __struct_SC_USART_INTENSET
{
  uint8_t	dre	: 1;
  uint8_t	txc	: 1;
  uint8_t	rxc	: 1;
  uint8_t	rxs	: 1;
  uint8_t		: 4;
};

#define SC_USART_INTFLAG_DRE     	(1 << 0)
#define SC_USART_INTFLAG_TXC     	(1 << 1)
#define SC_USART_INTFLAG_RXC     	(1 << 2)
#define SC_USART_INTFLAG_RXS     	(1 << 3)

struct __struct_SC_USART_INTFLAG
{
  uint8_t	dre	: 1;
  uint8_t	txc	: 1;
  uint8_t	rxc	: 1;
  uint8_t	rxs	: 1;
  uint8_t		: 4;
};

#define SC_USART_STATUS_PERR     	(1 << 0)
#define SC_USART_STATUS_FERR     	(1 << 1)
#define SC_USART_STATUS_BUFOVF     	(1 << 2)
#define SC_USART_STATUS_SYNCBUSY     	(1 << 15)

struct __struct_SC_USART_STATUS
{
  uint16_t	perr	: 1;
  uint16_t	ferr	: 1;
  uint16_t	bufovf	: 1;
  uint16_t		: 12;
  uint16_t	syncbusy	: 1;
};

#define SC_USART_DATA_DATA(x)  	((x) << 0)
#define SC_USART_DATA_DATA_m   	0x000001ff
#define SC_USART_DATA_DATA_v(x)	(((x) >> 0) & 0x1ff)

struct __struct_SC_USART_DATA
{
  uint16_t	data	: 9;
  uint16_t		: 7;
};


// SC_SPI
#define SC_SPI_CTRLA_SWRST     	(1 << 0)
#define SC_SPI_CTRLA_ENABLE     	(1 << 1)
#define SC_SPI_CTRLA_MODE(x)  	((x) << 2)
#define SC_SPI_CTRLA_MODE_m   	0x0000001c
#define SC_SPI_CTRLA_MODE_v(x)	(((x) >> 2) & 0x7)
#define SC_SPI_CTRLA_MODE_SPI_SLAVE	0x2
#define SC_SPI_CTRLA_MODE_SPI_MASTER	0x3
#define SC_SPI_CTRLA_RUNSTDBY     	(1 << 7)
#define SC_SPI_CTRLA_DOPO     	(1 << 16)
#define SC_SPI_CTRLA_DIPO(x)  	((x) << 20)
#define SC_SPI_CTRLA_DIPO_m   	0x00300000
#define SC_SPI_CTRLA_DIPO_v(x)	(((x) >> 20) & 0x3)
#define SC_SPI_CTRLA_FORM(x)  	((x) << 24)
#define SC_SPI_CTRLA_FORM_m   	0x0f000000
#define SC_SPI_CTRLA_FORM_v(x)	(((x) >> 24) & 0xf)
#define SC_SPI_CTRLA_FORM_SPI	0x0
#define SC_SPI_CTRLA_FORM_SPI_ADDR	0x2
#define SC_SPI_CTRLA_CPHA     	(1 << 28)
#define SC_SPI_CTRLA_CPOL     	(1 << 29)
#define SC_SPI_CTRLA_DORD(x)  	((x) << 30)
#define SC_SPI_CTRLA_DORD_m   	0x40000000
#define SC_SPI_CTRLA_DORD_v(x)	(((x) >> 30) & 0x1)
#define SC_SPI_CTRLA_DORD_MSB_FIRST	0x0
#define SC_SPI_CTRLA_DORD_LSB_FIRST	0x1

struct __struct_SC_SPI_CTRLA
{
  uint32_t	swrst	: 1;
  uint32_t	enable	: 1;
  uint32_t	mode	: 3;
  uint32_t		: 2;
  uint32_t	runstdby	: 1;
  uint32_t		: 8;
  uint32_t	dopo	: 1;
  uint32_t		: 3;
  uint32_t	dipo	: 2;
  uint32_t		: 2;
  uint32_t	form	: 4;
  uint32_t	cpha	: 1;
  uint32_t	cpol	: 1;
  uint32_t	dord	: 1;
  uint32_t		: 1;
};

#define SC_SPI_CTRLB_CHSIZE(x)  	((x) << 0)
#define SC_SPI_CTRLB_CHSIZE_m   	0x00000007
#define SC_SPI_CTRLB_CHSIZE_v(x)	(((x) >> 0) & 0x7)
#define SC_SPI_CTRLB_CHSIZE_8_BITS	0x0
#define SC_SPI_CTRLB_CHSIZE_9_BITS	0x1
#define SC_SPI_CTRLB_PLOADEN     	(1 << 6)
#define SC_SPI_CTRLB_AMODE(x)  	((x) << 14)
#define SC_SPI_CTRLB_AMODE_m   	0x0000c000
#define SC_SPI_CTRLB_AMODE_v(x)	(((x) >> 14) & 0x3)
#define SC_SPI_CTRLB_AMODE_MASK	0x0
#define SC_SPI_CTRLB_AMODE_2_ADDRS	0x1
#define SC_SPI_CTRLB_AMODE_RANGE	0x2
#define SC_SPI_CTRLB_RXEN     	(1 << 17)

struct __struct_SC_SPI_CTRLB
{
  uint32_t	chsize	: 3;
  uint32_t		: 3;
  uint32_t	ploaden	: 1;
  uint32_t		: 7;
  uint32_t	amode	: 2;
  uint32_t		: 1;
  uint32_t	rxen	: 1;
  uint32_t		: 14;
};

#define SC_SPI_DBGCTRL_DBGSTOP     	(1 << 0)

struct __struct_SC_SPI_DBGCTRL
{
  uint8_t	dbgstop	: 1;
  uint8_t		: 7;
};

#define SC_SPI_INTENCLR_DRE     	(1 << 0)
#define SC_SPI_INTENCLR_TXC     	(1 << 1)
#define SC_SPI_INTENCLR_RXC     	(1 << 2)

struct __struct_SC_SPI_INTENCLR
{
  uint8_t	dre	: 1;
  uint8_t	txc	: 1;
  uint8_t	rxc	: 1;
  uint8_t		: 5;
};

#define SC_SPI_INTENSET_DRE     	(1 << 0)
#define SC_SPI_INTENSET_TXC     	(1 << 1)
#define SC_SPI_INTENSET_RXC     	(1 << 2)

struct __struct_SC_SPI_INTENSET
{
  uint8_t	dre	: 1;
  uint8_t	txc	: 1;
  uint8_t	rxc	: 1;
  uint8_t		: 5;
};

#define SC_SPI_INTFLAG_DRE     	(1 << 0)
#define SC_SPI_INTFLAG_TXC     	(1 << 1)
#define SC_SPI_INTFLAG_RXC     	(1 << 2)

struct __struct_SC_SPI_INTFLAG
{
  uint8_t	dre	: 1;
  uint8_t	txc	: 1;
  uint8_t	rxc	: 1;
  uint8_t		: 5;
};

#define SC_SPI_STATUS_BUFOVF     	(1 << 2)
#define SC_SPI_STATUS_SYNCBUSY     	(1 << 15)

struct __struct_SC_SPI_STATUS
{
  uint16_t		: 2;
  uint16_t	bufovf	: 1;
  uint16_t		: 12;
  uint16_t	syncbusy	: 1;
};

#define SC_SPI_ADDR_ADDR(x)  	((x) << 0)
#define SC_SPI_ADDR_ADDR_m   	0x000000ff
#define SC_SPI_ADDR_ADDR_v(x)	(((x) >> 0) & 0xff)
#define SC_SPI_ADDR_ADDRMASK(x)  	((x) << 16)
#define SC_SPI_ADDR_ADDRMASK_m   	0x00ff0000
#define SC_SPI_ADDR_ADDRMASK_v(x)	(((x) >> 16) & 0xff)

struct __struct_SC_SPI_ADDR
{
  uint32_t	addr	: 8;
  uint32_t		: 8;
  uint32_t	addrmask	: 8;
  uint32_t		: 8;
};

#define SC_SPI_DATA_DATA(x)  	((x) << 0)
#define SC_SPI_DATA_DATA_m   	0x000001ff
#define SC_SPI_DATA_DATA_v(x)	(((x) >> 0) & 0x1ff)

struct __struct_SC_SPI_DATA
{
  uint16_t	data	: 9;
  uint16_t		: 7;
};


// SC_I2CS
#define SC_I2CS_CTRLA_SWRST     	(1 << 0)
#define SC_I2CS_CTRLA_ENABLE     	(1 << 1)
#define SC_I2CS_CTRLA_MODE(x)  	((x) << 2)
#define SC_I2CS_CTRLA_MODE_m   	0x0000001c
#define SC_I2CS_CTRLA_MODE_v(x)	(((x) >> 2) & 0x7)
#define SC_I2CS_CTRLA_MODE_I2C_SLAVE	0x4
#define SC_I2CS_CTRLA_RUNSTDBY     	(1 << 7)
#define SC_I2CS_CTRLA_PINOUT     	(1 << 16)
#define SC_I2CS_CTRLA_SDAHOLD(x)  	((x) << 20)
#define SC_I2CS_CTRLA_SDAHOLD_m   	0x00300000
#define SC_I2CS_CTRLA_SDAHOLD_v(x)	(((x) >> 20) & 0x3)
#define SC_I2CS_CTRLA_SDAHOLD_DIS	0x0
#define SC_I2CS_CTRLA_SDAHOLD_75_NS	0x1
#define SC_I2CS_CTRLA_SDAHOLD_450_NS	0x2
#define SC_I2CS_CTRLA_SDAHOLD_600_NS	0x3
#define SC_I2CS_CTRLA_LOWTOUT     	(1 << 30)

struct __struct_SC_I2CS_CTRLA
{
  uint32_t	swrst	: 1;
  uint32_t	enable	: 1;
  uint32_t	mode	: 3;
  uint32_t		: 2;
  uint32_t	runstdby	: 1;
  uint32_t		: 8;
  uint32_t	pinout	: 1;
  uint32_t		: 3;
  uint32_t	sdahold	: 2;
  uint32_t		: 8;
  uint32_t	lowtout	: 1;
  uint32_t		: 1;
};

#define SC_I2CS_CTRLB_SMEN     	(1 << 8)
#define SC_I2CS_CTRLB_AMODE(x)  	((x) << 14)
#define SC_I2CS_CTRLB_AMODE_m   	0x0000c000
#define SC_I2CS_CTRLB_AMODE_v(x)	(((x) >> 14) & 0x3)
#define SC_I2CS_CTRLB_AMODE_MASK	0x0
#define SC_I2CS_CTRLB_AMODE_2_ADDRS	0x1
#define SC_I2CS_CTRLB_AMODE_RANGE	0x2
#define SC_I2CS_CTRLB_CMD(x)  	((x) << 16)
#define SC_I2CS_CTRLB_CMD_m   	0x00030000
#define SC_I2CS_CTRLB_CMD_v(x)	(((x) >> 16) & 0x3)
#define SC_I2CS_CTRLB_ACKACT     	(1 << 18)

struct __struct_SC_I2CS_CTRLB
{
  uint32_t		: 8;
  uint32_t	smen	: 1;
  uint32_t		: 5;
  uint32_t	amode	: 2;
  uint32_t	cmd	: 2;
  uint32_t	ackact	: 1;
  uint32_t		: 13;
};

#define SC_I2CS_INTENCLR_PREC     	(1 << 0)
#define SC_I2CS_INTENCLR_AMATCH     	(1 << 1)
#define SC_I2CS_INTENCLR_DRDY     	(1 << 2)

struct __struct_SC_I2CS_INTENCLR
{
  uint8_t	prec	: 1;
  uint8_t	amatch	: 1;
  uint8_t	drdy	: 1;
  uint8_t		: 5;
};

#define SC_I2CS_INTENSET_PREC     	(1 << 0)
#define SC_I2CS_INTENSET_AMATCH     	(1 << 1)
#define SC_I2CS_INTENSET_DRDY     	(1 << 2)

struct __struct_SC_I2CS_INTENSET
{
  uint8_t	prec	: 1;
  uint8_t	amatch	: 1;
  uint8_t	drdy	: 1;
  uint8_t		: 5;
};

#define SC_I2CS_INTFLAG_PREC     	(1 << 0)
#define SC_I2CS_INTFLAG_AMATCH     	(1 << 1)
#define SC_I2CS_INTFLAG_DRDY     	(1 << 2)

struct __struct_SC_I2CS_INTFLAG
{
  uint8_t	prec	: 1;
  uint8_t	amatch	: 1;
  uint8_t	drdy	: 1;
  uint8_t		: 5;
};

#define SC_I2CS_STATUS_BUSERR     	(1 << 0)
#define SC_I2CS_STATUS_COLL     	(1 << 1)
#define SC_I2CS_STATUS_RXNACK     	(1 << 2)
#define SC_I2CS_STATUS_DIR     	(1 << 3)
#define SC_I2CS_STATUS_SR     	(1 << 4)
#define SC_I2CS_STATUS_LOWTOUT     	(1 << 6)
#define SC_I2CS_STATUS_CLKHOLD     	(1 << 7)
#define SC_I2CS_STATUS_SYNCBUSY     	(1 << 15)

struct __struct_SC_I2CS_STATUS
{
  uint16_t	buserr	: 1;
  uint16_t	coll	: 1;
  uint16_t	rxnack	: 1;
  uint16_t	dir	: 1;
  uint16_t	sr	: 1;
  uint16_t		: 1;
  uint16_t	lowtout	: 1;
  uint16_t	clkhold	: 1;
  uint16_t		: 7;
  uint16_t	syncbusy	: 1;
};

#define SC_I2CS_ADDR_GENCEN     	(1 << 0)
#define SC_I2CS_ADDR_ADDR(x)  	((x) << 1)
#define SC_I2CS_ADDR_ADDR_m   	0x000000fe
#define SC_I2CS_ADDR_ADDR_v(x)	(((x) >> 1) & 0x7f)
#define SC_I2CS_ADDR_ADDRMASK(x)  	((x) << 17)
#define SC_I2CS_ADDR_ADDRMASK_m   	0x00fe0000
#define SC_I2CS_ADDR_ADDRMASK_v(x)	(((x) >> 17) & 0x7f)

struct __struct_SC_I2CS_ADDR
{
  uint32_t	gencen	: 1;
  uint32_t	addr	: 7;
  uint32_t		: 9;
  uint32_t	addrmask	: 7;
  uint32_t		: 8;
};


// SC_I2CM
#define SC_I2CM_CTRLA_SWRST     	(1 << 0)
#define SC_I2CM_CTRLA_ENABLE     	(1 << 1)
#define SC_I2CM_CTRLA_MODE(x)  	((x) << 2)
#define SC_I2CM_CTRLA_MODE_m   	0x0000001c
#define SC_I2CM_CTRLA_MODE_v(x)	(((x) >> 2) & 0x7)
#define SC_I2CM_CTRLA_MODE_I2C_MASTER	0x5
#define SC_I2CM_CTRLA_RUNSTDBY     	(1 << 7)
#define SC_I2CM_CTRLA_PINOUT     	(1 << 16)
#define SC_I2CM_CTRLA_SDAHOLD(x)  	((x) << 20)
#define SC_I2CM_CTRLA_SDAHOLD_m   	0x00300000
#define SC_I2CM_CTRLA_SDAHOLD_v(x)	(((x) >> 20) & 0x3)
#define SC_I2CM_CTRLA_SDAHOLD_DIS	0x0
#define SC_I2CM_CTRLA_SDAHOLD_75_NS	0x1
#define SC_I2CM_CTRLA_SDAHOLD_450_NS	0x2
#define SC_I2CM_CTRLA_SDAHOLD_600_NS	0x3
#define SC_I2CM_CTRLA_INACTOUT(x)  	((x) << 28)
#define SC_I2CM_CTRLA_INACTOUT_m   	0x30000000
#define SC_I2CM_CTRLA_INACTOUT_v(x)	(((x) >> 28) & 0x3)
#define SC_I2CM_CTRLA_INACTOUT_DIS	0x0
#define SC_I2CM_CTRLA_INACTOUT_55_US	0x1
#define SC_I2CM_CTRLA_INACTOUT_105_US	0x2
#define SC_I2CM_CTRLA_INACTOUT_205_US	0x3
#define SC_I2CM_CTRLA_LOWTOUT     	(1 << 30)

struct __struct_SC_I2CM_CTRLA
{
  uint32_t	swrst	: 1;
  uint32_t	enable	: 1;
  uint32_t	mode	: 3;
  uint32_t		: 2;
  uint32_t	runstdby	: 1;
  uint32_t		: 8;
  uint32_t	pinout	: 1;
  uint32_t		: 3;
  uint32_t	sdahold	: 2;
  uint32_t		: 6;
  uint32_t	inactout	: 2;
  uint32_t	lowtout	: 1;
  uint32_t		: 1;
};

#define SC_I2CM_CTRLB_SMEN     	(1 << 8)
#define SC_I2CM_CTRLB_QCEN     	(1 << 9)
#define SC_I2CM_CTRLB_CMD(x)  	((x) << 16)
#define SC_I2CM_CTRLB_CMD_m   	0x00030000
#define SC_I2CM_CTRLB_CMD_v(x)	(((x) >> 16) & 0x3)
#define SC_I2CM_CTRLB_ACKACT     	(1 << 18)

struct __struct_SC_I2CM_CTRLB
{
  uint32_t		: 8;
  uint32_t	smen	: 1;
  uint32_t	qcen	: 1;
  uint32_t		: 6;
  uint32_t	cmd	: 2;
  uint32_t	ackact	: 1;
  uint32_t		: 13;
};

#define SC_I2CM_DBGCTRL_DBGSTOP     	(1 << 0)

struct __struct_SC_I2CM_DBGCTRL
{
  uint8_t	dbgstop	: 1;
  uint8_t		: 7;
};

#define SC_I2CM_BAUD_BAUD(x)  	((x) << 0)
#define SC_I2CM_BAUD_BAUD_m   	0x000000ff
#define SC_I2CM_BAUD_BAUD_v(x)	(((x) >> 0) & 0xff)
#define SC_I2CM_BAUD_BAUDLOW(x)  	((x) << 8)
#define SC_I2CM_BAUD_BAUDLOW_m   	0x0000ff00
#define SC_I2CM_BAUD_BAUDLOW_v(x)	(((x) >> 8) & 0xff)

struct __struct_SC_I2CM_BAUD
{
  uint16_t	baud	: 8;
  uint16_t	baudlow	: 8;
};

#define SC_I2CM_INTENCLR_MB     	(1 << 0)
#define SC_I2CM_INTENCLR_SB     	(1 << 1)

struct __struct_SC_I2CM_INTENCLR
{
  uint8_t	mb	: 1;
  uint8_t	sb	: 1;
  uint8_t		: 6;
};

#define SC_I2CM_INTENSET_MB     	(1 << 0)
#define SC_I2CM_INTENSET_SB     	(1 << 1)

struct __struct_SC_I2CM_INTENSET
{
  uint8_t	mb	: 1;
  uint8_t	sb	: 1;
  uint8_t		: 6;
};

#define SC_I2CM_INTFLAG_MB     	(1 << 0)
#define SC_I2CM_INTFLAG_SB     	(1 << 1)

struct __struct_SC_I2CM_INTFLAG
{
  uint8_t	mb	: 1;
  uint8_t	sb	: 1;
  uint8_t		: 6;
};

#define SC_I2CM_STATUS_BUSERR     	(1 << 0)
#define SC_I2CM_STATUS_ARBLOST     	(1 << 1)
#define SC_I2CM_STATUS_RXNACK     	(1 << 2)
#define SC_I2CM_STATUS_BUSSTATE(x)  	((x) << 4)
#define SC_I2CM_STATUS_BUSSTATE_m   	0x00000030
#define SC_I2CM_STATUS_BUSSTATE_v(x)	(((x) >> 4) & 0x3)
#define SC_I2CM_STATUS_BUSSTATE_UNKNOWN	0x0
#define SC_I2CM_STATUS_BUSSTATE_IDLE	0x1
#define SC_I2CM_STATUS_BUSSTATE_OWNER	0x2
#define SC_I2CM_STATUS_BUSSTATE_BUSY	0x3
#define SC_I2CM_STATUS_LOWTOUT     	(1 << 6)
#define SC_I2CM_STATUS_CLKHOLD     	(1 << 7)
#define SC_I2CM_STATUS_SYNCBUSY     	(1 << 15)

struct __struct_SC_I2CM_STATUS
{
  uint16_t	buserr	: 1;
  uint16_t	arblost	: 1;
  uint16_t	rxnack	: 1;
  uint16_t		: 1;
  uint16_t	busstate	: 2;
  uint16_t	lowtout	: 1;
  uint16_t	clkhold	: 1;
  uint16_t		: 7;
  uint16_t	syncbusy	: 1;
};


// TC_8
#define TC_8_CTRLA_SWRST     	(1 << 0)
#define TC_8_CTRLA_ENABLE     	(1 << 1)
#define TC_8_CTRLA_MODE(x)  	((x) << 2)
#define TC_8_CTRLA_MODE_m   	0x0000000c
#define TC_8_CTRLA_MODE_v(x)	(((x) >> 2) & 0x3)
#define TC_8_CTRLA_MODE_COUNT16	0x0
#define TC_8_CTRLA_MODE_COUNT8	0x1
#define TC_8_CTRLA_MODE_COUNT32	0x2
#define TC_8_CTRLA_WAVEGEN(x)  	((x) << 5)
#define TC_8_CTRLA_WAVEGEN_m   	0x00000060
#define TC_8_CTRLA_WAVEGEN_v(x)	(((x) >> 5) & 0x3)
#define TC_8_CTRLA_WAVEGEN_NFRQ	0x0
#define TC_8_CTRLA_WAVEGEN_MFRQ	0x1
#define TC_8_CTRLA_WAVEGEN_NPWM	0x2
#define TC_8_CTRLA_WAVEGEN_MPWM	0x3
#define TC_8_CTRLA_PRESCALER(x)  	((x) << 8)
#define TC_8_CTRLA_PRESCALER_m   	0x00000700
#define TC_8_CTRLA_PRESCALER_v(x)	(((x) >> 8) & 0x7)
#define TC_8_CTRLA_PRESCALER_1	0x0
#define TC_8_CTRLA_PRESCALER_2	0x1
#define TC_8_CTRLA_PRESCALER_4	0x2
#define TC_8_CTRLA_PRESCALER_8	0x3
#define TC_8_CTRLA_PRESCALER_16	0x4
#define TC_8_CTRLA_PRESCALER_64	0x5
#define TC_8_CTRLA_PRESCALER_256	0x6
#define TC_8_CTRLA_PRESCALER_1024 	0x7
#define TC_8_CTRLA_RUNSTDBY     	(1 << 11)
#define TC_8_CTRLA_PRESCSYNC(x)  	((x) << 12)
#define TC_8_CTRLA_PRESCSYNC_m   	0x00003000
#define TC_8_CTRLA_PRESCSYNC_v(x)	(((x) >> 12) & 0x3)
#define TC_8_CTRLA_PRESCSYNC_GCLK	0x0
#define TC_8_CTRLA_PRESCSYNC_PRESC	0x1
#define TC_8_CTRLA_PRESCSYNC_RESYNC	0x2

struct __struct_TC_8_CTRLA
{
  uint16_t	swrst	: 1;
  uint16_t	enable	: 1;
  uint16_t	mode	: 2;
  uint16_t		: 1;
  uint16_t	wavegen	: 2;
  uint16_t		: 1;
  uint16_t	prescaler	: 3;
  uint16_t	runstdby	: 1;
  uint16_t	prescsync	: 2;
  uint16_t		: 2;
};

#define TC_8_READREQ_ADDR(x)  	((x) << 0)
#define TC_8_READREQ_ADDR_m   	0x0000001f
#define TC_8_READREQ_ADDR_v(x)	(((x) >> 0) & 0x1f)
#define TC_8_READREQ_RCONT     	(1 << 14)
#define TC_8_READREQ_RREQ     	(1 << 15)

struct __struct_TC_8_READREQ
{
  uint16_t	addr	: 5;
  uint16_t		: 9;
  uint16_t	rcont	: 1;
  uint16_t	rreq	: 1;
};

#define TC_8_CTRLBCLR_DIR     	(1 << 0)
#define TC_8_CTRLBCLR_ONESHOT     	(1 << 2)
#define TC_8_CTRLBCLR_CMD(x)  	((x) << 6)
#define TC_8_CTRLBCLR_CMD_m   	0x000000c0
#define TC_8_CTRLBCLR_CMD_v(x)	(((x) >> 6) & 0x3)
#define TC_8_CTRLBCLR_CMD_NONE	0x0
#define TC_8_CTRLBCLR_CMD_RETRIGGER	0x1
#define TC_8_CTRLBCLR_CMD_STOP	0x2

struct __struct_TC_8_CTRLBCLR
{
  uint8_t	dir	: 1;
  uint8_t		: 1;
  uint8_t	oneshot	: 1;
  uint8_t		: 3;
  uint8_t	cmd	: 2;
};

#define TC_8_CTRLBSET_DIR     	(1 << 0)
#define TC_8_CTRLBSET_ONESHOT     	(1 << 2)
#define TC_8_CTRLBSET_CMD(x)  	((x) << 6)
#define TC_8_CTRLBSET_CMD_m   	0x000000c0
#define TC_8_CTRLBSET_CMD_v(x)	(((x) >> 6) & 0x3)
#define TC_8_CTRLBSET_CMD_NONE	0x0
#define TC_8_CTRLBSET_CMD_RETRIGGER	0x1
#define TC_8_CTRLBSET_CMD_STOP	0x2

struct __struct_TC_8_CTRLBSET
{
  uint8_t	dir	: 1;
  uint8_t		: 1;
  uint8_t	oneshot	: 1;
  uint8_t		: 3;
  uint8_t	cmd	: 2;
};

#define TC_8_CTRLC_INVEN0     	(1 << 0)
#define TC_8_CTRLC_INVEN1     	(1 << 1)
#define TC_8_CTRLC_CPTEN0     	(1 << 4)
#define TC_8_CTRLC_CPTEN1     	(1 << 5)

struct __struct_TC_8_CTRLC
{
  uint8_t	inven0	: 1;
  uint8_t	inven1	: 1;
  uint8_t		: 2;
  uint8_t	cpten0	: 1;
  uint8_t	cpten1	: 1;
  uint8_t		: 2;
};

#define TC_8_DBGCTRL_DBGRUN     	(1 << 0)

struct __struct_TC_8_DBGCTRL
{
  uint8_t	dbgrun	: 1;
  uint8_t		: 7;
};

#define TC_8_EVCTRL_EVACT(x)  	((x) << 0)
#define TC_8_EVCTRL_EVACT_m   	0x00000007
#define TC_8_EVCTRL_EVACT_v(x)	(((x) >> 0) & 0x7)
#define TC_8_EVCTRL_EVACT_OFF	0x0
#define TC_8_EVCTRL_EVACT_RETRIGGER	0x1
#define TC_8_EVCTRL_EVACT_COUNT	0x2
#define TC_8_EVCTRL_EVACT_START	0x3
#define TC_8_EVCTRL_EVACT_PPW	0x5
#define TC_8_EVCTRL_EVACT_PWP	0x6
#define TC_8_EVCTRL_TCINV     	(1 << 4)
#define TC_8_EVCTRL_TCEI     	(1 << 5)
#define TC_8_EVCTRL_OVFEO     	(1 << 8)
#define TC_8_EVCTRL_MCEO0     	(1 << 12)
#define TC_8_EVCTRL_MCEO1     	(1 << 13)

struct __struct_TC_8_EVCTRL
{
  uint16_t	evact	: 3;
  uint16_t		: 1;
  uint16_t	tcinv	: 1;
  uint16_t	tcei	: 1;
  uint16_t		: 2;
  uint16_t	ovfeo	: 1;
  uint16_t		: 3;
  uint16_t	mceo0	: 1;
  uint16_t	mceo1	: 1;
  uint16_t		: 2;
};

#define TC_8_INTENCLR_OVF     	(1 << 0)
#define TC_8_INTENCLR_ERR     	(1 << 1)
#define TC_8_INTENCLR_SYNCRDY     	(1 << 3)
#define TC_8_INTENCLR_MC(x)  	((x) << 4)
#define TC_8_INTENCLR_MC_m   	0x00000030
#define TC_8_INTENCLR_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_8_INTENCLR
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_8_INTENSET_OVF     	(1 << 0)
#define TC_8_INTENSET_ERR     	(1 << 1)
#define TC_8_INTENSET_SYNCRDY     	(1 << 3)
#define TC_8_INTENSET_MC(x)  	((x) << 4)
#define TC_8_INTENSET_MC_m   	0x00000030
#define TC_8_INTENSET_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_8_INTENSET
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_8_INTFLAG_OVF     	(1 << 0)
#define TC_8_INTFLAG_ERR     	(1 << 1)
#define TC_8_INTFLAG_SYNCRDY     	(1 << 3)
#define TC_8_INTFLAG_MC(x)  	((x) << 4)
#define TC_8_INTFLAG_MC_m   	0x00000030
#define TC_8_INTFLAG_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_8_INTFLAG
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_8_STATUS_STOP     	(1 << 3)
#define TC_8_STATUS_SLAVE     	(1 << 4)
#define TC_8_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_TC_8_STATUS
{
  uint8_t		: 3;
  uint8_t	stop	: 1;
  uint8_t	slave	: 1;
  uint8_t		: 2;
  uint8_t	syncbusy	: 1;
};


// TC_16
#define TC_16_CTRLA_SWRST     	(1 << 0)
#define TC_16_CTRLA_ENABLE     	(1 << 1)
#define TC_16_CTRLA_MODE(x)  	((x) << 2)
#define TC_16_CTRLA_MODE_m   	0x0000000c
#define TC_16_CTRLA_MODE_v(x)	(((x) >> 2) & 0x3)
#define TC_16_CTRLA_MODE_COUNT16	0x0
#define TC_16_CTRLA_MODE_COUNT8	0x1
#define TC_16_CTRLA_MODE_COUNT32	0x2
#define TC_16_CTRLA_WAVEGEN(x)  	((x) << 5)
#define TC_16_CTRLA_WAVEGEN_m   	0x00000060
#define TC_16_CTRLA_WAVEGEN_v(x)	(((x) >> 5) & 0x3)
#define TC_16_CTRLA_WAVEGEN_NFRQ	0x0
#define TC_16_CTRLA_WAVEGEN_MFRQ	0x1
#define TC_16_CTRLA_WAVEGEN_NPWM	0x2
#define TC_16_CTRLA_WAVEGEN_MPWM	0x3
#define TC_16_CTRLA_PRESCALER(x)  	((x) << 8)
#define TC_16_CTRLA_PRESCALER_m   	0x00000700
#define TC_16_CTRLA_PRESCALER_v(x)	(((x) >> 8) & 0x7)
#define TC_16_CTRLA_PRESCALER_1	0x0
#define TC_16_CTRLA_PRESCALER_2	0x1
#define TC_16_CTRLA_PRESCALER_4	0x2
#define TC_16_CTRLA_PRESCALER_8	0x3
#define TC_16_CTRLA_PRESCALER_16	0x4
#define TC_16_CTRLA_PRESCALER_64	0x5
#define TC_16_CTRLA_PRESCALER_256	0x6
#define TC_16_CTRLA_PRESCALER_1024 	0x7
#define TC_16_CTRLA_RUNSTDBY     	(1 << 11)
#define TC_16_CTRLA_PRESCSYNC(x)  	((x) << 12)
#define TC_16_CTRLA_PRESCSYNC_m   	0x00003000
#define TC_16_CTRLA_PRESCSYNC_v(x)	(((x) >> 12) & 0x3)
#define TC_16_CTRLA_PRESCSYNC_GCLK	0x0
#define TC_16_CTRLA_PRESCSYNC_PRESC	0x1
#define TC_16_CTRLA_PRESCSYNC_RESYNC	0x2

struct __struct_TC_16_CTRLA
{
  uint16_t	swrst	: 1;
  uint16_t	enable	: 1;
  uint16_t	mode	: 2;
  uint16_t		: 1;
  uint16_t	wavegen	: 2;
  uint16_t		: 1;
  uint16_t	prescaler	: 3;
  uint16_t	runstdby	: 1;
  uint16_t	prescsync	: 2;
  uint16_t		: 2;
};

#define TC_16_READREQ_ADDR(x)  	((x) << 0)
#define TC_16_READREQ_ADDR_m   	0x0000001f
#define TC_16_READREQ_ADDR_v(x)	(((x) >> 0) & 0x1f)
#define TC_16_READREQ_RCONT     	(1 << 14)
#define TC_16_READREQ_RREQ     	(1 << 15)

struct __struct_TC_16_READREQ
{
  uint16_t	addr	: 5;
  uint16_t		: 9;
  uint16_t	rcont	: 1;
  uint16_t	rreq	: 1;
};

#define TC_16_CTRLBCLR_DIR     	(1 << 0)
#define TC_16_CTRLBCLR_ONESHOT     	(1 << 2)
#define TC_16_CTRLBCLR_CMD(x)  	((x) << 6)
#define TC_16_CTRLBCLR_CMD_m   	0x000000c0
#define TC_16_CTRLBCLR_CMD_v(x)	(((x) >> 6) & 0x3)
#define TC_16_CTRLBCLR_CMD_NONE	0x0
#define TC_16_CTRLBCLR_CMD_RETRIGGER	0x1
#define TC_16_CTRLBCLR_CMD_STOP	0x2

struct __struct_TC_16_CTRLBCLR
{
  uint8_t	dir	: 1;
  uint8_t		: 1;
  uint8_t	oneshot	: 1;
  uint8_t		: 3;
  uint8_t	cmd	: 2;
};

#define TC_16_CTRLBSET_DIR     	(1 << 0)
#define TC_16_CTRLBSET_ONESHOT     	(1 << 2)
#define TC_16_CTRLBSET_CMD(x)  	((x) << 6)
#define TC_16_CTRLBSET_CMD_m   	0x000000c0
#define TC_16_CTRLBSET_CMD_v(x)	(((x) >> 6) & 0x3)
#define TC_16_CTRLBSET_CMD_NONE	0x0
#define TC_16_CTRLBSET_CMD_RETRIGGER	0x1
#define TC_16_CTRLBSET_CMD_STOP	0x2

struct __struct_TC_16_CTRLBSET
{
  uint8_t	dir	: 1;
  uint8_t		: 1;
  uint8_t	oneshot	: 1;
  uint8_t		: 3;
  uint8_t	cmd	: 2;
};

#define TC_16_CTRLC_INVEN0     	(1 << 0)
#define TC_16_CTRLC_INVEN1     	(1 << 1)
#define TC_16_CTRLC_CPTEN0     	(1 << 4)
#define TC_16_CTRLC_CPTEN1     	(1 << 5)

struct __struct_TC_16_CTRLC
{
  uint8_t	inven0	: 1;
  uint8_t	inven1	: 1;
  uint8_t		: 2;
  uint8_t	cpten0	: 1;
  uint8_t	cpten1	: 1;
  uint8_t		: 2;
};

#define TC_16_DBGCTRL_DBGRUN     	(1 << 0)

struct __struct_TC_16_DBGCTRL
{
  uint8_t	dbgrun	: 1;
  uint8_t		: 7;
};

#define TC_16_EVCTRL_EVACT(x)  	((x) << 0)
#define TC_16_EVCTRL_EVACT_m   	0x00000007
#define TC_16_EVCTRL_EVACT_v(x)	(((x) >> 0) & 0x7)
#define TC_16_EVCTRL_EVACT_OFF	0x0
#define TC_16_EVCTRL_EVACT_RETRIGGER	0x1
#define TC_16_EVCTRL_EVACT_COUNT	0x2
#define TC_16_EVCTRL_EVACT_START	0x3
#define TC_16_EVCTRL_EVACT_PPW	0x5
#define TC_16_EVCTRL_EVACT_PWP	0x6
#define TC_16_EVCTRL_TCINV     	(1 << 4)
#define TC_16_EVCTRL_TCEI     	(1 << 5)
#define TC_16_EVCTRL_OVFEO     	(1 << 8)
#define TC_16_EVCTRL_MCEO0     	(1 << 12)
#define TC_16_EVCTRL_MCEO1     	(1 << 13)

struct __struct_TC_16_EVCTRL
{
  uint16_t	evact	: 3;
  uint16_t		: 1;
  uint16_t	tcinv	: 1;
  uint16_t	tcei	: 1;
  uint16_t		: 2;
  uint16_t	ovfeo	: 1;
  uint16_t		: 3;
  uint16_t	mceo0	: 1;
  uint16_t	mceo1	: 1;
  uint16_t		: 2;
};

#define TC_16_INTENCLR_OVF     	(1 << 0)
#define TC_16_INTENCLR_ERR     	(1 << 1)
#define TC_16_INTENCLR_SYNCRDY     	(1 << 3)
#define TC_16_INTENCLR_MC(x)  	((x) << 4)
#define TC_16_INTENCLR_MC_m   	0x00000030
#define TC_16_INTENCLR_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_16_INTENCLR
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_16_INTENSET_OVF     	(1 << 0)
#define TC_16_INTENSET_ERR     	(1 << 1)
#define TC_16_INTENSET_SYNCRDY     	(1 << 3)
#define TC_16_INTENSET_MC(x)  	((x) << 4)
#define TC_16_INTENSET_MC_m   	0x00000030
#define TC_16_INTENSET_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_16_INTENSET
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_16_INTFLAG_OVF     	(1 << 0)
#define TC_16_INTFLAG_ERR     	(1 << 1)
#define TC_16_INTFLAG_SYNCRDY     	(1 << 3)
#define TC_16_INTFLAG_MC(x)  	((x) << 4)
#define TC_16_INTFLAG_MC_m   	0x00000030
#define TC_16_INTFLAG_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_16_INTFLAG
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_16_STATUS_STOP     	(1 << 3)
#define TC_16_STATUS_SLAVE     	(1 << 4)
#define TC_16_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_TC_16_STATUS
{
  uint8_t		: 3;
  uint8_t	stop	: 1;
  uint8_t	slave	: 1;
  uint8_t		: 2;
  uint8_t	syncbusy	: 1;
};


// TC_32
#define TC_32_CTRLA_SWRST     	(1 << 0)
#define TC_32_CTRLA_ENABLE     	(1 << 1)
#define TC_32_CTRLA_MODE(x)  	((x) << 2)
#define TC_32_CTRLA_MODE_m   	0x0000000c
#define TC_32_CTRLA_MODE_v(x)	(((x) >> 2) & 0x3)
#define TC_32_CTRLA_MODE_COUNT16	0x0
#define TC_32_CTRLA_MODE_COUNT8	0x1
#define TC_32_CTRLA_MODE_COUNT32	0x2
#define TC_32_CTRLA_WAVEGEN(x)  	((x) << 5)
#define TC_32_CTRLA_WAVEGEN_m   	0x00000060
#define TC_32_CTRLA_WAVEGEN_v(x)	(((x) >> 5) & 0x3)
#define TC_32_CTRLA_WAVEGEN_NFRQ	0x0
#define TC_32_CTRLA_WAVEGEN_MFRQ	0x1
#define TC_32_CTRLA_WAVEGEN_NPWM	0x2
#define TC_32_CTRLA_WAVEGEN_MPWM	0x3
#define TC_32_CTRLA_PRESCALER(x)  	((x) << 8)
#define TC_32_CTRLA_PRESCALER_m   	0x00000700
#define TC_32_CTRLA_PRESCALER_v(x)	(((x) >> 8) & 0x7)
#define TC_32_CTRLA_PRESCALER_1	0x0
#define TC_32_CTRLA_PRESCALER_2	0x1
#define TC_32_CTRLA_PRESCALER_4	0x2
#define TC_32_CTRLA_PRESCALER_8	0x3
#define TC_32_CTRLA_PRESCALER_16	0x4
#define TC_32_CTRLA_PRESCALER_64	0x5
#define TC_32_CTRLA_PRESCALER_256	0x6
#define TC_32_CTRLA_PRESCALER_1024 	0x7
#define TC_32_CTRLA_RUNSTDBY     	(1 << 11)
#define TC_32_CTRLA_PRESCSYNC(x)  	((x) << 12)
#define TC_32_CTRLA_PRESCSYNC_m   	0x00003000
#define TC_32_CTRLA_PRESCSYNC_v(x)	(((x) >> 12) & 0x3)
#define TC_32_CTRLA_PRESCSYNC_GCLK	0x0
#define TC_32_CTRLA_PRESCSYNC_PRESC	0x1
#define TC_32_CTRLA_PRESCSYNC_RESYNC	0x2

struct __struct_TC_32_CTRLA
{
  uint16_t	swrst	: 1;
  uint16_t	enable	: 1;
  uint16_t	mode	: 2;
  uint16_t		: 1;
  uint16_t	wavegen	: 2;
  uint16_t		: 1;
  uint16_t	prescaler	: 3;
  uint16_t	runstdby	: 1;
  uint16_t	prescsync	: 2;
  uint16_t		: 2;
};

#define TC_32_READREQ_ADDR(x)  	((x) << 0)
#define TC_32_READREQ_ADDR_m   	0x0000001f
#define TC_32_READREQ_ADDR_v(x)	(((x) >> 0) & 0x1f)
#define TC_32_READREQ_RCONT     	(1 << 14)
#define TC_32_READREQ_RREQ     	(1 << 15)

struct __struct_TC_32_READREQ
{
  uint16_t	addr	: 5;
  uint16_t		: 9;
  uint16_t	rcont	: 1;
  uint16_t	rreq	: 1;
};

#define TC_32_CTRLBCLR_DIR     	(1 << 0)
#define TC_32_CTRLBCLR_ONESHOT     	(1 << 2)
#define TC_32_CTRLBCLR_CMD(x)  	((x) << 6)
#define TC_32_CTRLBCLR_CMD_m   	0x000000c0
#define TC_32_CTRLBCLR_CMD_v(x)	(((x) >> 6) & 0x3)
#define TC_32_CTRLBCLR_CMD_NONE	0x0
#define TC_32_CTRLBCLR_CMD_RETRIGGER	0x1
#define TC_32_CTRLBCLR_CMD_STOP	0x2

struct __struct_TC_32_CTRLBCLR
{
  uint8_t	dir	: 1;
  uint8_t		: 1;
  uint8_t	oneshot	: 1;
  uint8_t		: 3;
  uint8_t	cmd	: 2;
};

#define TC_32_CTRLBSET_DIR     	(1 << 0)
#define TC_32_CTRLBSET_ONESHOT     	(1 << 2)
#define TC_32_CTRLBSET_CMD(x)  	((x) << 6)
#define TC_32_CTRLBSET_CMD_m   	0x000000c0
#define TC_32_CTRLBSET_CMD_v(x)	(((x) >> 6) & 0x3)
#define TC_32_CTRLBSET_CMD_NONE	0x0
#define TC_32_CTRLBSET_CMD_RETRIGGER	0x1
#define TC_32_CTRLBSET_CMD_STOP	0x2

struct __struct_TC_32_CTRLBSET
{
  uint8_t	dir	: 1;
  uint8_t		: 1;
  uint8_t	oneshot	: 1;
  uint8_t		: 3;
  uint8_t	cmd	: 2;
};

#define TC_32_CTRLC_INVEN0     	(1 << 0)
#define TC_32_CTRLC_INVEN1     	(1 << 1)
#define TC_32_CTRLC_CPTEN0     	(1 << 4)
#define TC_32_CTRLC_CPTEN1     	(1 << 5)

struct __struct_TC_32_CTRLC
{
  uint8_t	inven0	: 1;
  uint8_t	inven1	: 1;
  uint8_t		: 2;
  uint8_t	cpten0	: 1;
  uint8_t	cpten1	: 1;
  uint8_t		: 2;
};

#define TC_32_DBGCTRL_DBGRUN     	(1 << 0)

struct __struct_TC_32_DBGCTRL
{
  uint8_t	dbgrun	: 1;
  uint8_t		: 7;
};

#define TC_32_EVCTRL_EVACT(x)  	((x) << 0)
#define TC_32_EVCTRL_EVACT_m   	0x00000007
#define TC_32_EVCTRL_EVACT_v(x)	(((x) >> 0) & 0x7)
#define TC_32_EVCTRL_EVACT_OFF	0x0
#define TC_32_EVCTRL_EVACT_RETRIGGER	0x1
#define TC_32_EVCTRL_EVACT_COUNT	0x2
#define TC_32_EVCTRL_EVACT_START	0x3
#define TC_32_EVCTRL_EVACT_PPW	0x5
#define TC_32_EVCTRL_EVACT_PWP	0x6
#define TC_32_EVCTRL_TCINV     	(1 << 4)
#define TC_32_EVCTRL_TCEI     	(1 << 5)
#define TC_32_EVCTRL_OVFEO     	(1 << 8)
#define TC_32_EVCTRL_MCEO0     	(1 << 12)
#define TC_32_EVCTRL_MCEO1     	(1 << 13)

struct __struct_TC_32_EVCTRL
{
  uint16_t	evact	: 3;
  uint16_t		: 1;
  uint16_t	tcinv	: 1;
  uint16_t	tcei	: 1;
  uint16_t		: 2;
  uint16_t	ovfeo	: 1;
  uint16_t		: 3;
  uint16_t	mceo0	: 1;
  uint16_t	mceo1	: 1;
  uint16_t		: 2;
};

#define TC_32_INTENCLR_OVF     	(1 << 0)
#define TC_32_INTENCLR_ERR     	(1 << 1)
#define TC_32_INTENCLR_SYNCRDY     	(1 << 3)
#define TC_32_INTENCLR_MC(x)  	((x) << 4)
#define TC_32_INTENCLR_MC_m   	0x00000030
#define TC_32_INTENCLR_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_32_INTENCLR
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_32_INTENSET_OVF     	(1 << 0)
#define TC_32_INTENSET_ERR     	(1 << 1)
#define TC_32_INTENSET_SYNCRDY     	(1 << 3)
#define TC_32_INTENSET_MC(x)  	((x) << 4)
#define TC_32_INTENSET_MC_m   	0x00000030
#define TC_32_INTENSET_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_32_INTENSET
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_32_INTFLAG_OVF     	(1 << 0)
#define TC_32_INTFLAG_ERR     	(1 << 1)
#define TC_32_INTFLAG_SYNCRDY     	(1 << 3)
#define TC_32_INTFLAG_MC(x)  	((x) << 4)
#define TC_32_INTFLAG_MC_m   	0x00000030
#define TC_32_INTFLAG_MC_v(x)	(((x) >> 4) & 0x3)

struct __struct_TC_32_INTFLAG
{
  uint8_t	ovf	: 1;
  uint8_t	err	: 1;
  uint8_t		: 1;
  uint8_t	syncrdy	: 1;
  uint8_t	mc	: 2;
  uint8_t		: 2;
};

#define TC_32_STATUS_STOP     	(1 << 3)
#define TC_32_STATUS_SLAVE     	(1 << 4)
#define TC_32_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_TC_32_STATUS
{
  uint8_t		: 3;
  uint8_t	stop	: 1;
  uint8_t	slave	: 1;
  uint8_t		: 2;
  uint8_t	syncbusy	: 1;
};


// ADC
#define ADC_CTRLA_SWRST     	(1 << 0)
#define ADC_CTRLA_ENABLE     	(1 << 1)
#define ADC_CTRLA_RUNSTDBY     	(1 << 2)

struct __struct_ADC_CTRLA
{
  uint8_t	swrst	: 1;
  uint8_t	enable	: 1;
  uint8_t	runstdby	: 1;
  uint8_t		: 5;
};

#define ADC_REFCTRL_REFSEL(x)  	((x) << 0)
#define ADC_REFCTRL_REFSEL_m   	0x0000000f
#define ADC_REFCTRL_REFSEL_v(x)	(((x) >> 0) & 0xf)
#define ADC_REFCTRL_REFSEL_INT1V	0x0
#define ADC_REFCTRL_REFSEL_INTVCC0	0x1
#define ADC_REFCTRL_REFSEL_INTVCC1	0x2
#define ADC_REFCTRL_REFSEL_AREFA	0x3
#define ADC_REFCTRL_REFSEL_AREFB	0x4
#define ADC_REFCTRL_REFCOMP     	(1 << 7)

struct __struct_ADC_REFCTRL
{
  uint8_t	refsel	: 4;
  uint8_t		: 3;
  uint8_t	refcomp	: 1;
};

#define ADC_AVGCTRL_SAMPLENUM(x)  	((x) << 0)
#define ADC_AVGCTRL_SAMPLENUM_m   	0x0000000f
#define ADC_AVGCTRL_SAMPLENUM_v(x)	(((x) >> 0) & 0xf)
#define ADC_AVGCTRL_SAMPLENUM_1	0x0
#define ADC_AVGCTRL_SAMPLENUM_2	0x1
#define ADC_AVGCTRL_SAMPLENUM_4	0x2
#define ADC_AVGCTRL_SAMPLENUM_8	0x3
#define ADC_AVGCTRL_SAMPLENUM_16	0x4
#define ADC_AVGCTRL_SAMPLENUM_32	0x5
#define ADC_AVGCTRL_SAMPLENUM_64	0x6
#define ADC_AVGCTRL_SAMPLENUM_128	0x7
#define ADC_AVGCTRL_SAMPLENUM_256	0x8
#define ADC_AVGCTRL_SAMPLENUM_512	0x9
#define ADC_AVGCTRL_SAMPLENUM_1024	0xa
#define ADC_AVGCTRL_ADJRES(x)  	((x) << 4)
#define ADC_AVGCTRL_ADJRES_m   	0x00000070
#define ADC_AVGCTRL_ADJRES_v(x)	(((x) >> 4) & 0x7)

struct __struct_ADC_AVGCTRL
{
  uint8_t	samplenum	: 4;
  uint8_t	adjres	: 3;
  uint8_t		: 1;
};

#define ADC_SAMPCTRL_SAMPLEN(x)  	((x) << 0)
#define ADC_SAMPCTRL_SAMPLEN_m   	0x0000003f
#define ADC_SAMPCTRL_SAMPLEN_v(x)	(((x) >> 0) & 0x3f)

struct __struct_ADC_SAMPCTRL
{
  uint8_t	samplen	: 6;
  uint8_t		: 2;
};

#define ADC_CTRLB_DIFFMODE     	(1 << 0)
#define ADC_CTRLB_LEFTADJ     	(1 << 1)
#define ADC_CTRLB_FREERUN     	(1 << 2)
#define ADC_CTRLB_CORREN     	(1 << 3)
#define ADC_CTRLB_RESSEL(x)  	((x) << 4)
#define ADC_CTRLB_RESSEL_m   	0x00000030
#define ADC_CTRLB_RESSEL_v(x)	(((x) >> 4) & 0x3)
#define ADC_CTRLB_RESSEL_12BIT	0x0
#define ADC_CTRLB_RESSEL_16BIT	0x1
#define ADC_CTRLB_RESSEL_10BIT	0x2
#define ADC_CTRLB_RESSEL_8BIT	0x3
#define ADC_CTRLB_PRESCALER(x)  	((x) << 8)
#define ADC_CTRLB_PRESCALER_m   	0x00000700
#define ADC_CTRLB_PRESCALER_v(x)	(((x) >> 8) & 0x7)
#define ADC_CTRLB_PRESCALER_4	0x0
#define ADC_CTRLB_PRESCALER_8	0x1
#define ADC_CTRLB_PRESCALER_16	0x2
#define ADC_CTRLB_PRESCALER_32	0x3
#define ADC_CTRLB_PRESCALER_64	0x4
#define ADC_CTRLB_PRESCALER_128	0x5
#define ADC_CTRLB_PRESCALER_256	0x6
#define ADC_CTRLB_PRESCALER_512	0x7

struct __struct_ADC_CTRLB
{
  uint16_t	diffmode	: 1;
  uint16_t	leftadj	: 1;
  uint16_t	freerun	: 1;
  uint16_t	corren	: 1;
  uint16_t	ressel	: 2;
  uint16_t		: 2;
  uint16_t	prescaler	: 3;
  uint16_t		: 5;
};

#define ADC_WINCTRL_WINMODE(x)  	((x) << 0)
#define ADC_WINCTRL_WINMODE_m   	0x00000007
#define ADC_WINCTRL_WINMODE_v(x)	(((x) >> 0) & 0x7)
#define ADC_WINCTRL_WINMODE_DISABLE	0x0
#define ADC_WINCTRL_WINMODE_MODE1	0x1
#define ADC_WINCTRL_WINMODE_MODE2	0x2
#define ADC_WINCTRL_WINMODE_MODE3	0x3
#define ADC_WINCTRL_WINMODE_MODE4	0x4

struct __struct_ADC_WINCTRL
{
  uint8_t	winmode	: 3;
  uint8_t		: 5;
};

#define ADC_SWTRIG_FLUSH     	(1 << 0)
#define ADC_SWTRIG_START     	(1 << 1)

struct __struct_ADC_SWTRIG
{
  uint8_t	flush	: 1;
  uint8_t	start	: 1;
  uint8_t		: 6;
};

#define ADC_INPUTCTRL_MUXPOS(x)  	((x) << 0)
#define ADC_INPUTCTRL_MUXPOS_m   	0x0000001f
#define ADC_INPUTCTRL_MUXPOS_v(x)	(((x) >> 0) & 0x1f)
#define ADC_INPUTCTRL_MUXPOS_PIN0	0x0
#define ADC_INPUTCTRL_MUXPOS_PIN1	0x1
#define ADC_INPUTCTRL_MUXPOS_PIN2	0x2
#define ADC_INPUTCTRL_MUXPOS_PIN3	0x3
#define ADC_INPUTCTRL_MUXPOS_PIN4	0x4
#define ADC_INPUTCTRL_MUXPOS_PIN5	0x5
#define ADC_INPUTCTRL_MUXPOS_PIN6	0x6
#define ADC_INPUTCTRL_MUXPOS_PIN7	0x7
#define ADC_INPUTCTRL_MUXPOS_PIN8	0x8
#define ADC_INPUTCTRL_MUXPOS_PIN9	0x9
#define ADC_INPUTCTRL_MUXPOS_PIN10	0xa
#define ADC_INPUTCTRL_MUXPOS_PIN11	0xb
#define ADC_INPUTCTRL_MUXPOS_PIN12	0xc
#define ADC_INPUTCTRL_MUXPOS_PIN13	0xd
#define ADC_INPUTCTRL_MUXPOS_PIN14	0xe
#define ADC_INPUTCTRL_MUXPOS_PIN15	0xf
#define ADC_INPUTCTRL_MUXPOS_PIN16	0x10
#define ADC_INPUTCTRL_MUXPOS_PIN17	0x11
#define ADC_INPUTCTRL_MUXPOS_PIN18	0x12
#define ADC_INPUTCTRL_MUXPOS_PIN19	0x13
#define ADC_INPUTCTRL_MUXPOS_PIN20	0x14
#define ADC_INPUTCTRL_MUXPOS_PIN21	0x15
#define ADC_INPUTCTRL_MUXPOS_PIN22	0x16
#define ADC_INPUTCTRL_MUXPOS_PIN23	0x17
#define ADC_INPUTCTRL_MUXPOS_TEMP	0x18
#define ADC_INPUTCTRL_MUXPOS_BANDGAP	0x19
#define ADC_INPUTCTRL_MUXPOS_SCALEDCOREVCC	0x1a
#define ADC_INPUTCTRL_MUXPOS_SCALEDIOVCC	0x1b
#define ADC_INPUTCTRL_MUXPOS_DAC	0x1c
#define ADC_INPUTCTRL_MUXNEG(x)  	((x) << 8)
#define ADC_INPUTCTRL_MUXNEG_m   	0x00001f00
#define ADC_INPUTCTRL_MUXNEG_v(x)	(((x) >> 8) & 0x1f)
#define ADC_INPUTCTRL_MUXNEG_PIN0	0x0
#define ADC_INPUTCTRL_MUXNEG_PIN1	0x1
#define ADC_INPUTCTRL_MUXNEG_PIN2	0x2
#define ADC_INPUTCTRL_MUXNEG_PIN3	0x3
#define ADC_INPUTCTRL_MUXNEG_PIN4	0x4
#define ADC_INPUTCTRL_MUXNEG_PIN5	0x5
#define ADC_INPUTCTRL_MUXNEG_PIN6	0x6
#define ADC_INPUTCTRL_MUXNEG_PIN7	0x7
#define ADC_INPUTCTRL_MUXNEG_PIN8	0x8
#define ADC_INPUTCTRL_MUXNEG_PIN9	0x9
#define ADC_INPUTCTRL_MUXNEG_PIN10	0xa
#define ADC_INPUTCTRL_MUXNEG_PIN11	0xb
#define ADC_INPUTCTRL_MUXNEG_PIN12	0xc
#define ADC_INPUTCTRL_MUXNEG_PIN13	0xd
#define ADC_INPUTCTRL_MUXNEG_PIN14	0xe
#define ADC_INPUTCTRL_MUXNEG_PIN15	0xf
#define ADC_INPUTCTRL_MUXNEG_PIN16	0x10
#define ADC_INPUTCTRL_MUXNEG_PIN17	0x11
#define ADC_INPUTCTRL_MUXNEG_PIN18	0x12
#define ADC_INPUTCTRL_MUXNEG_PIN19	0x13
#define ADC_INPUTCTRL_MUXNEG_PIN20	0x14
#define ADC_INPUTCTRL_MUXNEG_PIN21	0x15
#define ADC_INPUTCTRL_MUXNEG_PIN22	0x16
#define ADC_INPUTCTRL_MUXNEG_PIN23	0x17
#define ADC_INPUTCTRL_MUXNEG_GND	0x18
#define ADC_INPUTCTRL_MUXNEG_IOGND	0x19
#define ADC_INPUTCTRL_INPUTSCAN(x)  	((x) << 16)
#define ADC_INPUTCTRL_INPUTSCAN_m   	0x000f0000
#define ADC_INPUTCTRL_INPUTSCAN_v(x)	(((x) >> 16) & 0xf)
#define ADC_INPUTCTRL_INPUTOFFSET(x)  	((x) << 20)
#define ADC_INPUTCTRL_INPUTOFFSET_m   	0x00f00000
#define ADC_INPUTCTRL_INPUTOFFSET_v(x)	(((x) >> 20) & 0xf)
#define ADC_INPUTCTRL_GAIN(x)  	((x) << 24)
#define ADC_INPUTCTRL_GAIN_m   	0x0f000000
#define ADC_INPUTCTRL_GAIN_v(x)	(((x) >> 24) & 0xf)
#define ADC_INPUTCTRL_GAIN_1X	0x0
#define ADC_INPUTCTRL_GAIN_2X	0x1
#define ADC_INPUTCTRL_GAIN_4X	0x2
#define ADC_INPUTCTRL_GAIN_8X	0x3
#define ADC_INPUTCTRL_GAIN_16X	0x4
#define ADC_INPUTCTRL_GAIN_DIV2	0xf

struct __struct_ADC_INPUTCTRL
{
  uint32_t	muxpos	: 5;
  uint32_t		: 3;
  uint32_t	muxneg	: 5;
  uint32_t		: 3;
  uint32_t	inputscan	: 4;
  uint32_t	inputoffset	: 4;
  uint32_t	gain	: 4;
  uint32_t		: 4;
};

#define ADC_EVCTRL_STARTEI     	(1 << 0)
#define ADC_EVCTRL_SYNCEI     	(1 << 1)
#define ADC_EVCTRL_RESRDYEO     	(1 << 4)
#define ADC_EVCTRL_WINMONEO     	(1 << 5)

struct __struct_ADC_EVCTRL
{
  uint8_t	startei	: 1;
  uint8_t	syncei	: 1;
  uint8_t		: 2;
  uint8_t	resrdyeo	: 1;
  uint8_t	winmoneo	: 1;
  uint8_t		: 2;
};

#define ADC_INTENCLR_RESRDY     	(1 << 0)
#define ADC_INTENCLR_OVERRUN     	(1 << 1)
#define ADC_INTENCLR_WINMON     	(1 << 2)
#define ADC_INTENCLR_SYNCRDY     	(1 << 3)

struct __struct_ADC_INTENCLR
{
  uint8_t	resrdy	: 1;
  uint8_t	overrun	: 1;
  uint8_t	winmon	: 1;
  uint8_t	syncrdy	: 1;
  uint8_t		: 4;
};

#define ADC_INTENSET_RESRDY     	(1 << 0)
#define ADC_INTENSET_OVERRUN     	(1 << 1)
#define ADC_INTENSET_WINMON     	(1 << 2)
#define ADC_INTENSET_SYNCRDY     	(1 << 3)

struct __struct_ADC_INTENSET
{
  uint8_t	resrdy	: 1;
  uint8_t	overrun	: 1;
  uint8_t	winmon	: 1;
  uint8_t	syncrdy	: 1;
  uint8_t		: 4;
};

#define ADC_INTFLAG_RESRDY     	(1 << 0)
#define ADC_INTFLAG_OVERRUN     	(1 << 1)
#define ADC_INTFLAG_WINMON     	(1 << 2)
#define ADC_INTFLAG_SYNCRDY     	(1 << 3)

struct __struct_ADC_INTFLAG
{
  uint8_t	resrdy	: 1;
  uint8_t	overrun	: 1;
  uint8_t	winmon	: 1;
  uint8_t	syncrdy	: 1;
  uint8_t		: 4;
};

#define ADC_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_ADC_STATUS
{
  uint8_t		: 7;
  uint8_t	syncbusy	: 1;
};

#define ADC_GAINCORR_GAINCORR(x)  	((x) << 0)
#define ADC_GAINCORR_GAINCORR_m   	0x00000fff
#define ADC_GAINCORR_GAINCORR_v(x)	(((x) >> 0) & 0xfff)

struct __struct_ADC_GAINCORR
{
  uint16_t	gaincorr	: 12;
  uint16_t		: 4;
};

#define ADC_OFFSETCORR_OFFSETCORR(x)  	((x) << 0)
#define ADC_OFFSETCORR_OFFSETCORR_m   	0x00000fff
#define ADC_OFFSETCORR_OFFSETCORR_v(x)	(((x) >> 0) & 0xfff)

struct __struct_ADC_OFFSETCORR
{
  uint16_t	offsetcorr	: 12;
  uint16_t		: 4;
};

#define ADC_CALIB_LINEARITY_CAL(x)  	((x) << 0)
#define ADC_CALIB_LINEARITY_CAL_m   	0x000000ff
#define ADC_CALIB_LINEARITY_CAL_v(x)	(((x) >> 0) & 0xff)
#define ADC_CALIB_BIAS_CAL(x)  	((x) << 8)
#define ADC_CALIB_BIAS_CAL_m   	0x00000700
#define ADC_CALIB_BIAS_CAL_v(x)	(((x) >> 8) & 0x7)

struct __struct_ADC_CALIB
{
  uint16_t	linearity_cal	: 8;
  uint16_t	bias_cal	: 3;
  uint16_t		: 5;
};

#define ADC_DBGCTRL_DBGRUN     	(1 << 0)

struct __struct_ADC_DBGCTRL
{
  uint8_t	dbgrun	: 1;
  uint8_t		: 7;
};


// AC
#define AC_CTRLA_SWRST     	(1 << 0)
#define AC_CTRLA_ENABLE     	(1 << 1)
#define AC_CTRLA_RUNSTDBY     	(1 << 2)

struct __struct_AC_CTRLA
{
  uint8_t	swrst	: 1;
  uint8_t	enable	: 1;
  uint8_t	runstdby	: 1;
  uint8_t		: 5;
};

#define AC_CTRLB_START0     	(1 << 0)
#define AC_CTRLB_START1     	(1 << 1)

struct __struct_AC_CTRLB
{
  uint8_t	start0	: 1;
  uint8_t	start1	: 1;
  uint8_t		: 6;
};

#define AC_EVCTRL_COMPEO0     	(1 << 0)
#define AC_EVCTRL_COMPEO1     	(1 << 1)
#define AC_EVCTRL_WINEO0     	(1 << 4)
#define AC_EVCTRL_COMPEI0     	(1 << 8)
#define AC_EVCTRL_COMPEI1     	(1 << 9)

struct __struct_AC_EVCTRL
{
  uint16_t	compeo0	: 1;
  uint16_t	compeo1	: 1;
  uint16_t		: 2;
  uint16_t	wineo0	: 1;
  uint16_t		: 3;
  uint16_t	compei0	: 1;
  uint16_t	compei1	: 1;
  uint16_t		: 6;
};

#define AC_INTENCLR_COMP0     	(1 << 0)
#define AC_INTENCLR_COMP1     	(1 << 1)
#define AC_INTENCLR_WIN0     	(1 << 4)

struct __struct_AC_INTENCLR
{
  uint8_t	comp0	: 1;
  uint8_t	comp1	: 1;
  uint8_t		: 2;
  uint8_t	win0	: 1;
  uint8_t		: 3;
};

#define AC_INTENSET_COMP0     	(1 << 0)
#define AC_INTENSET_COMP1     	(1 << 1)
#define AC_INTENSET_WIN0     	(1 << 4)

struct __struct_AC_INTENSET
{
  uint8_t	comp0	: 1;
  uint8_t	comp1	: 1;
  uint8_t		: 2;
  uint8_t	win0	: 1;
  uint8_t		: 3;
};

#define AC_INTFLAG_COMP0     	(1 << 0)
#define AC_INTFLAG_COMP1     	(1 << 1)
#define AC_INTFLAG_WIN0     	(1 << 4)

struct __struct_AC_INTFLAG
{
  uint8_t	comp0	: 1;
  uint8_t	comp1	: 1;
  uint8_t		: 2;
  uint8_t	win0	: 1;
  uint8_t		: 3;
};

#define AC_STATUSA_STATE0     	(1 << 0)
#define AC_STATUSA_STATE1     	(1 << 1)
#define AC_STATUSA_WSTATE0(x)  	((x) << 4)
#define AC_STATUSA_WSTATE0_m   	0x00000030
#define AC_STATUSA_WSTATE0_v(x)	(((x) >> 4) & 0x3)
#define AC_STATUSA_WSTATE0_ABOVE	0x0
#define AC_STATUSA_WSTATE0_INSIDE	0x1
#define AC_STATUSA_WSTATE0_BELOW	0x2

struct __struct_AC_STATUSA
{
  uint8_t	state0	: 1;
  uint8_t	state1	: 1;
  uint8_t		: 2;
  uint8_t	wstate0	: 2;
  uint8_t		: 2;
};

#define AC_STATUSB_READY0     	(1 << 0)
#define AC_STATUSB_READY1     	(1 << 1)
#define AC_STATUSB_SYNCBUSY     	(1 << 7)

struct __struct_AC_STATUSB
{
  uint8_t	ready0	: 1;
  uint8_t	ready1	: 1;
  uint8_t		: 5;
  uint8_t	syncbusy	: 1;
};

#define AC_STATUSC_STATE0     	(1 << 0)
#define AC_STATUSC_STATE1     	(1 << 1)
#define AC_STATUSC_WSTATE0(x)  	((x) << 4)
#define AC_STATUSC_WSTATE0_m   	0x00000030
#define AC_STATUSC_WSTATE0_v(x)	(((x) >> 4) & 0x3)
#define AC_STATUSC_WSTATE0_ABOVE	0x0
#define AC_STATUSC_WSTATE0_INSIDE	0x1
#define AC_STATUSC_WSTATE0_BELOW	0x2

struct __struct_AC_STATUSC
{
  uint8_t	state0	: 1;
  uint8_t	state1	: 1;
  uint8_t		: 2;
  uint8_t	wstate0	: 2;
  uint8_t		: 2;
};

#define AC_WINCTRL_WEN0     	(1 << 0)
#define AC_WINCTRL_WINTSEL0(x)  	((x) << 1)
#define AC_WINCTRL_WINTSEL0_m   	0x00000006
#define AC_WINCTRL_WINTSEL0_v(x)	(((x) >> 1) & 0x3)
#define AC_WINCTRL_WINTSEL0_ABOVE	0x0
#define AC_WINCTRL_WINTSEL0_INSIDE	0x1
#define AC_WINCTRL_WINTSEL0_BELOW	0x2
#define AC_WINCTRL_WINTSEL0_OUTSIDE	0x3

struct __struct_AC_WINCTRL
{
  uint8_t	wen0	: 1;
  uint8_t	wintsel0	: 2;
  uint8_t		: 5;
};

#define AC_COMPCTRL_ENABLE     	(1 << 0)
#define AC_COMPCTRL_SINGLE     	(1 << 1)
#define AC_COMPCTRL_SPEED(x)  	((x) << 2)
#define AC_COMPCTRL_SPEED_m   	0x0000000c
#define AC_COMPCTRL_SPEED_v(x)	(((x) >> 2) & 0x3)
#define AC_COMPCTRL_SPEED_LOW	0x0
#define AC_COMPCTRL_SPEED_HIGH	0x1
#define AC_COMPCTRL_INTSEL(x)  	((x) << 5)
#define AC_COMPCTRL_INTSEL_m   	0x00000060
#define AC_COMPCTRL_INTSEL_v(x)	(((x) >> 5) & 0x3)
#define AC_COMPCTRL_INTSEL_TOGGLE	0x0
#define AC_COMPCTRL_INTSEL_RISING	0x1
#define AC_COMPCTRL_INTSEL_FALLING	0x2
#define AC_COMPCTRL_INTSEL_EOC	0x3
#define AC_COMPCTRL_MUXNEG(x)  	((x) << 8)
#define AC_COMPCTRL_MUXNEG_m   	0x00000700
#define AC_COMPCTRL_MUXNEG_v(x)	(((x) >> 8) & 0x7)
#define AC_COMPCTRL_MUXNEG_PIN0	0x0
#define AC_COMPCTRL_MUXNEG_PIN1	0x1
#define AC_COMPCTRL_MUXNEG_PIN2	0x2
#define AC_COMPCTRL_MUXNEG_PIN3	0x3
#define AC_COMPCTRL_MUXNEG_GND	0x4
#define AC_COMPCTRL_MUXNEG_VSCALE	0x5
#define AC_COMPCTRL_MUXNEG_BANDGAP	0x6
#define AC_COMPCTRL_MUXNEG_DAC	0x7
#define AC_COMPCTRL_MUXPOS(x)  	((x) << 12)
#define AC_COMPCTRL_MUXPOS_m   	0x00003000
#define AC_COMPCTRL_MUXPOS_v(x)	(((x) >> 12) & 0x3)
#define AC_COMPCTRL_MUXPOS_PIN0	0x0
#define AC_COMPCTRL_MUXPOS_PIN1	0x1
#define AC_COMPCTRL_MUXPOS_PIN2	0x2
#define AC_COMPCTRL_MUXPOS_PIN3	0x3
#define AC_COMPCTRL_SWAP     	(1 << 15)
#define AC_COMPCTRL_OUT(x)  	((x) << 16)
#define AC_COMPCTRL_OUT_m   	0x00030000
#define AC_COMPCTRL_OUT_v(x)	(((x) >> 16) & 0x3)
#define AC_COMPCTRL_OUT_OFF	0x0
#define AC_COMPCTRL_OUT_ASYNC	0x1
#define AC_COMPCTRL_OUT_SYNC	0x2
#define AC_COMPCTRL_HYST     	(1 << 19)
#define AC_COMPCTRL_FLEN(x)  	((x) << 24)
#define AC_COMPCTRL_FLEN_m   	0x07000000
#define AC_COMPCTRL_FLEN_v(x)	(((x) >> 24) & 0x7)
#define AC_COMPCTRL_FLEN_OFF	0x0
#define AC_COMPCTRL_FLEN_MAJ3	0x1
#define AC_COMPCTRL_FLEN_MAJ5	0x2

struct __struct_AC_COMPCTRL
{
  uint32_t	enable	: 1;
  uint32_t	single	: 1;
  uint32_t	speed	: 2;
  uint32_t		: 1;
  uint32_t	intsel	: 2;
  uint32_t		: 1;
  uint32_t	muxneg	: 3;
  uint32_t		: 1;
  uint32_t	muxpos	: 2;
  uint32_t		: 1;
  uint32_t	swap	: 1;
  uint32_t	out	: 2;
  uint32_t		: 1;
  uint32_t	hyst	: 1;
  uint32_t		: 4;
  uint32_t	flen	: 3;
  uint32_t		: 5;
};

#define AC_SCALER_VALUE(x)  	((x) << 0)
#define AC_SCALER_VALUE_m   	0x0000003f
#define AC_SCALER_VALUE_v(x)	(((x) >> 0) & 0x3f)

struct __struct_AC_SCALER
{
  uint8_t	value	: 6;
  uint8_t		: 2;
};


// DAC
#define DAC_CTRLA_SWRST     	(1 << 0)
#define DAC_CTRLA_ENABLE     	(1 << 1)
#define DAC_CTRLA_RUNSTDBY     	(1 << 2)

struct __struct_DAC_CTRLA
{
  uint8_t	swrst	: 1;
  uint8_t	enable	: 1;
  uint8_t	runstdby	: 1;
  uint8_t		: 5;
};

#define DAC_CTRLB_EOEN     	(1 << 0)
#define DAC_CTRLB_IOEN     	(1 << 1)
#define DAC_CTRLB_LEFTADJ     	(1 << 2)
#define DAC_CTRLB_VPD     	(1 << 3)
#define DAC_CTRLB_REFSEL(x)  	((x) << 6)
#define DAC_CTRLB_REFSEL_m   	0x000000c0
#define DAC_CTRLB_REFSEL_v(x)	(((x) >> 6) & 0x3)
#define DAC_CTRLB_REFSEL_INT1V	0x0
#define DAC_CTRLB_REFSEL_AVCC	0x1
#define DAC_CTRLB_REFSEL_VREFP	0x2

struct __struct_DAC_CTRLB
{
  uint8_t	eoen	: 1;
  uint8_t	ioen	: 1;
  uint8_t	leftadj	: 1;
  uint8_t	vpd	: 1;
  uint8_t		: 2;
  uint8_t	refsel	: 2;
};

#define DAC_EVCTRL_STARTEI     	(1 << 0)
#define DAC_EVCTRL_EMPTYEO     	(1 << 1)

struct __struct_DAC_EVCTRL
{
  uint8_t	startei	: 1;
  uint8_t	emptyeo	: 1;
  uint8_t		: 6;
};

#define DAC_INTENCLR_UNDERRUN     	(1 << 0)
#define DAC_INTENCLR_EMPTY     	(1 << 1)
#define DAC_INTENCLR_SYNCRDY     	(1 << 2)

struct __struct_DAC_INTENCLR
{
  uint8_t	underrun	: 1;
  uint8_t	empty	: 1;
  uint8_t	syncrdy	: 1;
  uint8_t		: 5;
};

#define DAC_INTENSET_UNDERRUN     	(1 << 0)
#define DAC_INTENSET_EMPTY     	(1 << 1)
#define DAC_INTENSET_SYNCRDY     	(1 << 2)

struct __struct_DAC_INTENSET
{
  uint8_t	underrun	: 1;
  uint8_t	empty	: 1;
  uint8_t	syncrdy	: 1;
  uint8_t		: 5;
};

#define DAC_INTFLAG_UNDERRUN     	(1 << 0)
#define DAC_INTFLAG_EMPTY     	(1 << 1)
#define DAC_INTFLAG_SYNCRDY     	(1 << 2)

struct __struct_DAC_INTFLAG
{
  uint8_t	underrun	: 1;
  uint8_t	empty	: 1;
  uint8_t	syncrdy	: 1;
  uint8_t		: 5;
};

#define DAC_STATUS_SYNCBUSY     	(1 << 7)

struct __struct_DAC_STATUS
{
  uint8_t		: 7;
  uint8_t	syncbusy	: 1;
};


// PTC

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


// NVIC
#define NVIC_ISER_PM     	(1 << 0)
#define NVIC_ISER_SYSCTRL     	(1 << 1)
#define NVIC_ISER_WDT     	(1 << 2)
#define NVIC_ISER_RTC     	(1 << 3)
#define NVIC_ISER_EIC     	(1 << 4)
#define NVIC_ISER_NVMCTRL     	(1 << 5)
#define NVIC_ISER_EVSYS     	(1 << 6)
#define NVIC_ISER_SERCOM0     	(1 << 7)
#define NVIC_ISER_SERCOM1     	(1 << 8)
#define NVIC_ISER_SERCOM2     	(1 << 9)
#define NVIC_ISER_SERCOM3     	(1 << 10)
#define NVIC_ISER_SERCOM4     	(1 << 11)
#define NVIC_ISER_SERCOM5     	(1 << 12)
#define NVIC_ISER_TC0     	(1 << 13)
#define NVIC_ISER_TC1     	(1 << 14)
#define NVIC_ISER_TC2     	(1 << 15)
#define NVIC_ISER_TC3     	(1 << 16)
#define NVIC_ISER_TC4     	(1 << 17)
#define NVIC_ISER_TC5     	(1 << 18)
#define NVIC_ISER_TC6     	(1 << 19)
#define NVIC_ISER_TC7     	(1 << 20)
#define NVIC_ISER_ADC     	(1 << 21)
#define NVIC_ISER_AC     	(1 << 22)
#define NVIC_ISER_DAC     	(1 << 23)
#define NVIC_ISER_PTC     	(1 << 24)

struct __struct_NVIC_ISER
{
  uint32_t	pm	: 1;
  uint32_t	sysctrl	: 1;
  uint32_t	wdt	: 1;
  uint32_t	rtc	: 1;
  uint32_t	eic	: 1;
  uint32_t	nvmctrl	: 1;
  uint32_t	evsys	: 1;
  uint32_t	sercom0	: 1;
  uint32_t	sercom1	: 1;
  uint32_t	sercom2	: 1;
  uint32_t	sercom3	: 1;
  uint32_t	sercom4	: 1;
  uint32_t	sercom5	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	tc3	: 1;
  uint32_t	tc4	: 1;
  uint32_t	tc5	: 1;
  uint32_t	tc6	: 1;
  uint32_t	tc7	: 1;
  uint32_t	adc	: 1;
  uint32_t	ac	: 1;
  uint32_t	dac	: 1;
  uint32_t	ptc	: 1;
  uint32_t		: 7;
};

#define NVIC_ICER_PM     	(1 << 0)
#define NVIC_ICER_SYSCTRL     	(1 << 1)
#define NVIC_ICER_WDT     	(1 << 2)
#define NVIC_ICER_RTC     	(1 << 3)
#define NVIC_ICER_EIC     	(1 << 4)
#define NVIC_ICER_NVMCTRL     	(1 << 5)
#define NVIC_ICER_EVSYS     	(1 << 6)
#define NVIC_ICER_SERCOM0     	(1 << 7)
#define NVIC_ICER_SERCOM1     	(1 << 8)
#define NVIC_ICER_SERCOM2     	(1 << 9)
#define NVIC_ICER_SERCOM3     	(1 << 10)
#define NVIC_ICER_SERCOM4     	(1 << 11)
#define NVIC_ICER_SERCOM5     	(1 << 12)
#define NVIC_ICER_TC0     	(1 << 13)
#define NVIC_ICER_TC1     	(1 << 14)
#define NVIC_ICER_TC2     	(1 << 15)
#define NVIC_ICER_TC3     	(1 << 16)
#define NVIC_ICER_TC4     	(1 << 17)
#define NVIC_ICER_TC5     	(1 << 18)
#define NVIC_ICER_TC6     	(1 << 19)
#define NVIC_ICER_TC7     	(1 << 20)
#define NVIC_ICER_ADC     	(1 << 21)
#define NVIC_ICER_AC     	(1 << 22)
#define NVIC_ICER_DAC     	(1 << 23)
#define NVIC_ICER_PTC     	(1 << 24)

struct __struct_NVIC_ICER
{
  uint32_t	pm	: 1;
  uint32_t	sysctrl	: 1;
  uint32_t	wdt	: 1;
  uint32_t	rtc	: 1;
  uint32_t	eic	: 1;
  uint32_t	nvmctrl	: 1;
  uint32_t	evsys	: 1;
  uint32_t	sercom0	: 1;
  uint32_t	sercom1	: 1;
  uint32_t	sercom2	: 1;
  uint32_t	sercom3	: 1;
  uint32_t	sercom4	: 1;
  uint32_t	sercom5	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	tc3	: 1;
  uint32_t	tc4	: 1;
  uint32_t	tc5	: 1;
  uint32_t	tc6	: 1;
  uint32_t	tc7	: 1;
  uint32_t	adc	: 1;
  uint32_t	ac	: 1;
  uint32_t	dac	: 1;
  uint32_t	ptc	: 1;
  uint32_t		: 7;
};

#define NVIC_ISPR_PM     	(1 << 0)
#define NVIC_ISPR_SYSCTRL     	(1 << 1)
#define NVIC_ISPR_WDT     	(1 << 2)
#define NVIC_ISPR_RTC     	(1 << 3)
#define NVIC_ISPR_EIC     	(1 << 4)
#define NVIC_ISPR_NVMCTRL     	(1 << 5)
#define NVIC_ISPR_EVSYS     	(1 << 6)
#define NVIC_ISPR_SERCOM0     	(1 << 7)
#define NVIC_ISPR_SERCOM1     	(1 << 8)
#define NVIC_ISPR_SERCOM2     	(1 << 9)
#define NVIC_ISPR_SERCOM3     	(1 << 10)
#define NVIC_ISPR_SERCOM4     	(1 << 11)
#define NVIC_ISPR_SERCOM5     	(1 << 12)
#define NVIC_ISPR_TC0     	(1 << 13)
#define NVIC_ISPR_TC1     	(1 << 14)
#define NVIC_ISPR_TC2     	(1 << 15)
#define NVIC_ISPR_TC3     	(1 << 16)
#define NVIC_ISPR_TC4     	(1 << 17)
#define NVIC_ISPR_TC5     	(1 << 18)
#define NVIC_ISPR_TC6     	(1 << 19)
#define NVIC_ISPR_TC7     	(1 << 20)
#define NVIC_ISPR_ADC     	(1 << 21)
#define NVIC_ISPR_AC     	(1 << 22)
#define NVIC_ISPR_DAC     	(1 << 23)
#define NVIC_ISPR_PTC     	(1 << 24)

struct __struct_NVIC_ISPR
{
  uint32_t	pm	: 1;
  uint32_t	sysctrl	: 1;
  uint32_t	wdt	: 1;
  uint32_t	rtc	: 1;
  uint32_t	eic	: 1;
  uint32_t	nvmctrl	: 1;
  uint32_t	evsys	: 1;
  uint32_t	sercom0	: 1;
  uint32_t	sercom1	: 1;
  uint32_t	sercom2	: 1;
  uint32_t	sercom3	: 1;
  uint32_t	sercom4	: 1;
  uint32_t	sercom5	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	tc3	: 1;
  uint32_t	tc4	: 1;
  uint32_t	tc5	: 1;
  uint32_t	tc6	: 1;
  uint32_t	tc7	: 1;
  uint32_t	adc	: 1;
  uint32_t	ac	: 1;
  uint32_t	dac	: 1;
  uint32_t	ptc	: 1;
  uint32_t		: 7;
};

#define NVIC_ICPR_PM     	(1 << 0)
#define NVIC_ICPR_SYSCTRL     	(1 << 1)
#define NVIC_ICPR_WDT     	(1 << 2)
#define NVIC_ICPR_RTC     	(1 << 3)
#define NVIC_ICPR_EIC     	(1 << 4)
#define NVIC_ICPR_NVMCTRL     	(1 << 5)
#define NVIC_ICPR_EVSYS     	(1 << 6)
#define NVIC_ICPR_SERCOM0     	(1 << 7)
#define NVIC_ICPR_SERCOM1     	(1 << 8)
#define NVIC_ICPR_SERCOM2     	(1 << 9)
#define NVIC_ICPR_SERCOM3     	(1 << 10)
#define NVIC_ICPR_SERCOM4     	(1 << 11)
#define NVIC_ICPR_SERCOM5     	(1 << 12)
#define NVIC_ICPR_TC0     	(1 << 13)
#define NVIC_ICPR_TC1     	(1 << 14)
#define NVIC_ICPR_TC2     	(1 << 15)
#define NVIC_ICPR_TC3     	(1 << 16)
#define NVIC_ICPR_TC4     	(1 << 17)
#define NVIC_ICPR_TC5     	(1 << 18)
#define NVIC_ICPR_TC6     	(1 << 19)
#define NVIC_ICPR_TC7     	(1 << 20)
#define NVIC_ICPR_ADC     	(1 << 21)
#define NVIC_ICPR_AC     	(1 << 22)
#define NVIC_ICPR_DAC     	(1 << 23)
#define NVIC_ICPR_PTC     	(1 << 24)

struct __struct_NVIC_ICPR
{
  uint32_t	pm	: 1;
  uint32_t	sysctrl	: 1;
  uint32_t	wdt	: 1;
  uint32_t	rtc	: 1;
  uint32_t	eic	: 1;
  uint32_t	nvmctrl	: 1;
  uint32_t	evsys	: 1;
  uint32_t	sercom0	: 1;
  uint32_t	sercom1	: 1;
  uint32_t	sercom2	: 1;
  uint32_t	sercom3	: 1;
  uint32_t	sercom4	: 1;
  uint32_t	sercom5	: 1;
  uint32_t	tc0	: 1;
  uint32_t	tc1	: 1;
  uint32_t	tc2	: 1;
  uint32_t	tc3	: 1;
  uint32_t	tc4	: 1;
  uint32_t	tc5	: 1;
  uint32_t	tc6	: 1;
  uint32_t	tc7	: 1;
  uint32_t	adc	: 1;
  uint32_t	ac	: 1;
  uint32_t	dac	: 1;
  uint32_t	ptc	: 1;
  uint32_t		: 7;
};

#define NVIC_IPR0_PM(x)  	((x) << 6)
#define NVIC_IPR0_PM_m   	0x000000c0
#define NVIC_IPR0_PM_v(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR0_SYSCTRL(x)  	((x) << 14)
#define NVIC_IPR0_SYSCTRL_m   	0x0000c000
#define NVIC_IPR0_SYSCTRL_v(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR0_WDT(x)  	((x) << 22)
#define NVIC_IPR0_WDT_m   	0x00c00000
#define NVIC_IPR0_WDT_v(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR0_RTC(x)  	((x) << 30)
#define NVIC_IPR0_RTC_m   	0xc0000000
#define NVIC_IPR0_RTC_v(x)	(((x) >> 30) & 0x3)

struct __struct_NVIC_IPR0
{
  uint32_t		: 6;
  uint32_t	pm	: 2;
  uint32_t		: 6;
  uint32_t	sysctrl	: 2;
  uint32_t		: 6;
  uint32_t	wdt	: 2;
  uint32_t		: 6;
  uint32_t	rtc	: 2;
};

#define NVIC_IPR1_EIC(x)  	((x) << 6)
#define NVIC_IPR1_EIC_m   	0x000000c0
#define NVIC_IPR1_EIC_v(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR1_NVMCTRL(x)  	((x) << 14)
#define NVIC_IPR1_NVMCTRL_m   	0x0000c000
#define NVIC_IPR1_NVMCTRL_v(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR1_EVSYS(x)  	((x) << 22)
#define NVIC_IPR1_EVSYS_m   	0x00c00000
#define NVIC_IPR1_EVSYS_v(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR1_SERCOM0(x)  	((x) << 30)
#define NVIC_IPR1_SERCOM0_m   	0xc0000000
#define NVIC_IPR1_SERCOM0_v(x)	(((x) >> 30) & 0x3)

struct __struct_NVIC_IPR1
{
  uint32_t		: 6;
  uint32_t	eic	: 2;
  uint32_t		: 6;
  uint32_t	nvmctrl	: 2;
  uint32_t		: 6;
  uint32_t	evsys	: 2;
  uint32_t		: 6;
  uint32_t	sercom0	: 2;
};

#define NVIC_IPR2_SERCOM1(x)  	((x) << 6)
#define NVIC_IPR2_SERCOM1_m   	0x000000c0
#define NVIC_IPR2_SERCOM1_v(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR2_SERCOM2(x)  	((x) << 14)
#define NVIC_IPR2_SERCOM2_m   	0x0000c000
#define NVIC_IPR2_SERCOM2_v(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR2_SERCOM3(x)  	((x) << 22)
#define NVIC_IPR2_SERCOM3_m   	0x00c00000
#define NVIC_IPR2_SERCOM3_v(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR2_SERCOM4(x)  	((x) << 30)
#define NVIC_IPR2_SERCOM4_m   	0xc0000000
#define NVIC_IPR2_SERCOM4_v(x)	(((x) >> 30) & 0x3)

struct __struct_NVIC_IPR2
{
  uint32_t		: 6;
  uint32_t	sercom1	: 2;
  uint32_t		: 6;
  uint32_t	sercom2	: 2;
  uint32_t		: 6;
  uint32_t	sercom3	: 2;
  uint32_t		: 6;
  uint32_t	sercom4	: 2;
};

#define NVIC_IPR3_SERCOM5(x)  	((x) << 6)
#define NVIC_IPR3_SERCOM5_m   	0x000000c0
#define NVIC_IPR3_SERCOM5_v(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR3_TC0(x)  	((x) << 14)
#define NVIC_IPR3_TC0_m   	0x0000c000
#define NVIC_IPR3_TC0_v(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR3_TC1(x)  	((x) << 22)
#define NVIC_IPR3_TC1_m   	0x00c00000
#define NVIC_IPR3_TC1_v(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR3_TC2(x)  	((x) << 30)
#define NVIC_IPR3_TC2_m   	0xc0000000
#define NVIC_IPR3_TC2_v(x)	(((x) >> 30) & 0x3)

struct __struct_NVIC_IPR3
{
  uint32_t		: 6;
  uint32_t	sercom5	: 2;
  uint32_t		: 6;
  uint32_t	tc0	: 2;
  uint32_t		: 6;
  uint32_t	tc1	: 2;
  uint32_t		: 6;
  uint32_t	tc2	: 2;
};

#define NVIC_IPR4_TC3(x)  	((x) << 6)
#define NVIC_IPR4_TC3_m   	0x000000c0
#define NVIC_IPR4_TC3_v(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR4_TC4(x)  	((x) << 14)
#define NVIC_IPR4_TC4_m   	0x0000c000
#define NVIC_IPR4_TC4_v(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR4_TC5(x)  	((x) << 22)
#define NVIC_IPR4_TC5_m   	0x00c00000
#define NVIC_IPR4_TC5_v(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR4_TC6(x)  	((x) << 30)
#define NVIC_IPR4_TC6_m   	0xc0000000
#define NVIC_IPR4_TC6_v(x)	(((x) >> 30) & 0x3)

struct __struct_NVIC_IPR4
{
  uint32_t		: 6;
  uint32_t	tc3	: 2;
  uint32_t		: 6;
  uint32_t	tc4	: 2;
  uint32_t		: 6;
  uint32_t	tc5	: 2;
  uint32_t		: 6;
  uint32_t	tc6	: 2;
};

#define NVIC_IPR5_TC7(x)  	((x) << 6)
#define NVIC_IPR5_TC7_m   	0x000000c0
#define NVIC_IPR5_TC7_v(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR5_ADC(x)  	((x) << 14)
#define NVIC_IPR5_ADC_m   	0x0000c000
#define NVIC_IPR5_ADC_v(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR5_AC(x)  	((x) << 22)
#define NVIC_IPR5_AC_m   	0x00c00000
#define NVIC_IPR5_AC_v(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR5_DAC(x)  	((x) << 30)
#define NVIC_IPR5_DAC_m   	0xc0000000
#define NVIC_IPR5_DAC_v(x)	(((x) >> 30) & 0x3)

struct __struct_NVIC_IPR5
{
  uint32_t		: 6;
  uint32_t	tc7	: 2;
  uint32_t		: 6;
  uint32_t	adc	: 2;
  uint32_t		: 6;
  uint32_t	ac	: 2;
  uint32_t		: 6;
  uint32_t	dac	: 2;
};

#define NVIC_IPR6_PTC(x)  	((x) << 6)
#define NVIC_IPR6_PTC_m   	0x000000c0
#define NVIC_IPR6_PTC_v(x)	(((x) >> 6) & 0x3)

struct __struct_NVIC_IPR6
{
  uint32_t		: 6;
  uint32_t	ptc	: 2;
  uint32_t		: 6;
  uint32_t		: 2;
  uint32_t		: 6;
  uint32_t		: 2;
  uint32_t		: 6;
  uint32_t		: 2;
};


// SCB
#define SCB_CPUID_REVISION(x)  	((x) << 0)
#define SCB_CPUID_REVISION_m   	0x0000000f
#define SCB_CPUID_REVISION_v(x)	(((x) >> 0) & 0xf)
#define SCB_CPUID_PARTNO(x)  	((x) << 4)
#define SCB_CPUID_PARTNO_m   	0x0000fff0
#define SCB_CPUID_PARTNO_v(x)	(((x) >> 4) & 0xfff)
#define SCB_CPUID__1100(x)  	((x) << 16)
#define SCB_CPUID__1100_m   	0x000f0000
#define SCB_CPUID__1100_v(x)	(((x) >> 16) & 0xf)
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
  uint32_t	_1100	: 4;
  uint32_t	variant	: 4;
  uint32_t	implementer	: 8;
};

#define SCB_ICSR_VECTACTIVE(x)  	((x) << 0)
#define SCB_ICSR_VECTACTIVE_m   	0x000001ff
#define SCB_ICSR_VECTACTIVE_v(x)	(((x) >> 0) & 0x1ff)
#define SCB_ICSR_VECTPENDING(x)  	((x) << 12)
#define SCB_ICSR_VECTPENDING_m   	0x001ff000
#define SCB_ICSR_VECTPENDING_v(x)	(((x) >> 12) & 0x1ff)
#define SCB_ICSR_ISRPENDING     	(1 << 22)
#define SCB_ICSR_ISRPREEMPT     	(1 << 23)
#define SCB_ICSR_PENDSTCLR     	(1 << 25)
#define SCB_ICSR_PENDSTSET     	(1 << 26)
#define SCB_ICSR_PENDSVCLR     	(1 << 27)
#define SCB_ICSR_PENDSVSET     	(1 << 28)
#define SCB_ICSR_NMIPENDSET     	(1 << 31)

struct __struct_SCB_ICSR
{
  uint32_t	vectactive	: 9;
  uint32_t		: 3;
  uint32_t	vectpending	: 9;
  uint32_t		: 1;
  uint32_t	isrpending	: 1;
  uint32_t	isrpreempt	: 1;
  uint32_t		: 1;
  uint32_t	pendstclr	: 1;
  uint32_t	pendstset	: 1;
  uint32_t	pendsvclr	: 1;
  uint32_t	pendsvset	: 1;
  uint32_t		: 2;
  uint32_t	nmipendset	: 1;
};

#define SCB_VTOR_TBLOFF(x)  	((x) << 7)
#define SCB_VTOR_TBLOFF_m   	0xffffff80
#define SCB_VTOR_TBLOFF_v(x)	(((x) >> 7) & 0x1ffffff)

struct __struct_SCB_VTOR
{
  uint32_t		: 7;
  uint32_t	tbloff	: 25;
};

#define SCB_AIRCR_VECTCLRACTIVE     	(1 << 1)
#define SCB_AIRCR_SYSRESETREQ     	(1 << 2)
#define SCB_AIRCR_ENDIANNESS     	(1 << 15)
#define SCB_AIRCR_VECTKEY(x)  	((x) << 16)
#define SCB_AIRCR_VECTKEY_m   	0xffff0000
#define SCB_AIRCR_VECTKEY_v(x)	(((x) >> 16) & 0xffff)

struct __struct_SCB_AIRCR
{
  uint32_t		: 1;
  uint32_t	vectclractive	: 1;
  uint32_t	sysresetreq	: 1;
  uint32_t		: 12;
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

#define SCB_CCR_UNALIGN_TRP     	(1 << 3)
#define SCB_CCR_STKALIGN     	(1 << 9)

struct __struct_SCB_CCR
{
  uint32_t		: 3;
  uint32_t	unalign_trp	: 1;
  uint32_t		: 5;
  uint32_t	stkalign	: 1;
  uint32_t		: 22;
};

#define SCB_SHPR2_PRI_11(x)  	((x) << 30)
#define SCB_SHPR2_PRI_11_m   	0xc0000000
#define SCB_SHPR2_PRI_11_v(x)	(((x) >> 30) & 0x3)

struct __struct_SCB_SHPR2
{
  uint32_t		: 30;
  uint32_t	pri_11	: 2;
};

#define SCB_SHPR3_PRI_14(x)  	((x) << 22)
#define SCB_SHPR3_PRI_14_m   	0x00c00000
#define SCB_SHPR3_PRI_14_v(x)	(((x) >> 22) & 0x3)
#define SCB_SHPR3_PRI_15(x)  	((x) << 30)
#define SCB_SHPR3_PRI_15_m   	0xc0000000
#define SCB_SHPR3_PRI_15_v(x)	(((x) >> 30) & 0x3)

struct __struct_SCB_SHPR3
{
  uint32_t		: 22;
  uint32_t	pri_14	: 2;
  uint32_t		: 6;
  uint32_t	pri_15	: 2;
};

#define SCB_SHCSR_SVCALLPENDED     	(1 << 15)

struct __struct_SCB_SHCSR
{
  uint32_t		: 15;
  uint32_t	svcallpended	: 1;
  uint32_t		: 16;
};

#define SCB_DFSR_HALTED     	(1 << 0)
#define SCB_DFSR_BKPT     	(1 << 1)
#define SCB_DFSR_DWTTRAP     	(1 << 2)
#define SCB_DFSR_VCATCH     	(1 << 3)
#define SCB_DFSR_EXTERNAL     	(1 << 4)

struct __struct_SCB_DFSR
{
  uint32_t	halted	: 1;
  uint32_t	bkpt	: 1;
  uint32_t	dwttrap	: 1;
  uint32_t	vcatch	: 1;
  uint32_t	external	: 1;
  uint32_t		: 27;
};

// Registers definitions

// PAC0

#define PAC0_BASE_ADDR	0x40000000

#define PAC0_WPCLR  	MMIO_REG(0x40000000, uint32_t)
#define PAC0_WPCLR_s	MMIO_REG(0x40000000, struct __struct_PAC0_WPCLR)

#define PAC0_WPSET  	MMIO_REG(0x40000004, uint32_t)
#define PAC0_WPSET_s	MMIO_REG(0x40000004, struct __struct_PAC0_WPSET)


// PM

#define PM_BASE_ADDR	0x40000400

#define PM_CTRL  	MMIO_REG(0x40000400, uint8_t)
#define PM_CTRL_s	MMIO_REG(0x40000400, struct __struct_PM_CTRL)

#define PM_SLEEP  	MMIO_REG(0x40000401, uint8_t)
#define PM_SLEEP_s	MMIO_REG(0x40000401, struct __struct_PM_SLEEP)

#define PM_CPUSEL  	MMIO_REG(0x40000408, uint8_t)
#define PM_CPUSEL_s	MMIO_REG(0x40000408, struct __struct_PM_CPUSEL)

#define PM_APBASEL  	MMIO_REG(0x40000409, uint8_t)
#define PM_APBASEL_s	MMIO_REG(0x40000409, struct __struct_PM_APBASEL)

#define PM_APBBSEL  	MMIO_REG(0x4000040a, uint8_t)
#define PM_APBBSEL_s	MMIO_REG(0x4000040a, struct __struct_PM_APBBSEL)

#define PM_APBCSEL  	MMIO_REG(0x4000040b, uint8_t)
#define PM_APBCSEL_s	MMIO_REG(0x4000040b, struct __struct_PM_APBCSEL)

#define PM_AHBMASK  	MMIO_REG(0x40000414, uint32_t)
#define PM_AHBMASK_s	MMIO_REG(0x40000414, struct __struct_PM_AHBMASK)

#define PM_APBAMASK  	MMIO_REG(0x40000418, uint32_t)
#define PM_APBAMASK_s	MMIO_REG(0x40000418, struct __struct_PM_APBAMASK)

#define PM_APBBMASK  	MMIO_REG(0x4000041c, uint32_t)
#define PM_APBBMASK_s	MMIO_REG(0x4000041c, struct __struct_PM_APBBMASK)

#define PM_APBCMASK  	MMIO_REG(0x40000420, uint32_t)
#define PM_APBCMASK_s	MMIO_REG(0x40000420, struct __struct_PM_APBCMASK)

#define PM_INTENCLR  	MMIO_REG(0x40000434, uint8_t)
#define PM_INTENCLR_s	MMIO_REG(0x40000434, struct __struct_PM_INTENCLR)

#define PM_INTENSET  	MMIO_REG(0x40000435, uint8_t)
#define PM_INTENSET_s	MMIO_REG(0x40000435, struct __struct_PM_INTENSET)

#define PM_INTFLAG  	MMIO_REG(0x40000436, uint8_t)
#define PM_INTFLAG_s	MMIO_REG(0x40000436, struct __struct_PM_INTFLAG)

#define PM_RCAUSE  	MMIO_REG(0x40000438, uint8_t)
#define PM_RCAUSE_s	MMIO_REG(0x40000438, struct __struct_PM_RCAUSE)


// SYSCTRL

#define SYSCTRL_BASE_ADDR	0x40000800

#define SYSCTRL_INTENCLR  	MMIO_REG(0x40000800, uint32_t)
#define SYSCTRL_INTENCLR_s	MMIO_REG(0x40000800, struct __struct_SYSCTRL_INTENCLR)

#define SYSCTRL_INTENSET  	MMIO_REG(0x40000804, uint32_t)
#define SYSCTRL_INTENSET_s	MMIO_REG(0x40000804, struct __struct_SYSCTRL_INTENSET)

#define SYSCTRL_INTFLAG  	MMIO_REG(0x40000808, uint32_t)
#define SYSCTRL_INTFLAG_s	MMIO_REG(0x40000808, struct __struct_SYSCTRL_INTFLAG)

#define SYSCTRL_PCLKSR  	MMIO_REG(0x4000080c, uint32_t)
#define SYSCTRL_PCLKSR_s	MMIO_REG(0x4000080c, struct __struct_SYSCTRL_PCLKSR)

#define SYSCTRL_XOSC  	MMIO_REG(0x40000810, uint16_t)
#define SYSCTRL_XOSC_s	MMIO_REG(0x40000810, struct __struct_SYSCTRL_XOSC)

#define SYSCTRL_XOSC32K  	MMIO_REG(0x40000814, uint16_t)
#define SYSCTRL_XOSC32K_s	MMIO_REG(0x40000814, struct __struct_SYSCTRL_XOSC32K)

#define SYSCTRL_OSC32K  	MMIO_REG(0x40000818, uint32_t)
#define SYSCTRL_OSC32K_s	MMIO_REG(0x40000818, struct __struct_SYSCTRL_OSC32K)

#define SYSCTRL_OSCULP32K  	MMIO_REG(0x4000081c, uint8_t)
#define SYSCTRL_OSCULP32K_s	MMIO_REG(0x4000081c, struct __struct_SYSCTRL_OSCULP32K)

#define SYSCTRL_OSC8M  	MMIO_REG(0x40000820, uint32_t)
#define SYSCTRL_OSC8M_s	MMIO_REG(0x40000820, struct __struct_SYSCTRL_OSC8M)

#define SYSCTRL_DFLLCTRL  	MMIO_REG(0x40000824, uint16_t)
#define SYSCTRL_DFLLCTRL_s	MMIO_REG(0x40000824, struct __struct_SYSCTRL_DFLLCTRL)

#define SYSCTRL_DFLLVAL  	MMIO_REG(0x40000828, uint32_t)
#define SYSCTRL_DFLLVAL_s	MMIO_REG(0x40000828, struct __struct_SYSCTRL_DFLLVAL)

#define SYSCTRL_DFLLMUL  	MMIO_REG(0x4000082c, uint32_t)
#define SYSCTRL_DFLLMUL_s	MMIO_REG(0x4000082c, struct __struct_SYSCTRL_DFLLMUL)

#define SYSCTRL_DFLLSYNC  	MMIO_REG(0x40000830, uint8_t)
#define SYSCTRL_DFLLSYNC_s	MMIO_REG(0x40000830, struct __struct_SYSCTRL_DFLLSYNC)

#define SYSCTRL_BOD33  	MMIO_REG(0x40000834, uint32_t)
#define SYSCTRL_BOD33_s	MMIO_REG(0x40000834, struct __struct_SYSCTRL_BOD33)

#define SYSCTRL_VREF  	MMIO_REG(0x40000840, uint32_t)
#define SYSCTRL_VREF_s	MMIO_REG(0x40000840, struct __struct_SYSCTRL_VREF)


// GCLK

#define GCLK_BASE_ADDR	0x40000c00

#define GCLK_CTRL  	MMIO_REG(0x40000c00, uint8_t)
#define GCLK_CTRL_s	MMIO_REG(0x40000c00, struct __struct_GCLK_CTRL)

#define GCLK_STATUS  	MMIO_REG(0x40000c01, uint8_t)
#define GCLK_STATUS_s	MMIO_REG(0x40000c01, struct __struct_GCLK_STATUS)

#define GCLK_CLKCTRL  	MMIO_REG(0x40000c02, uint16_t)
#define GCLK_CLKCTRL_s	MMIO_REG(0x40000c02, struct __struct_GCLK_CLKCTRL)

#define GCLK_GENCTRL  	MMIO_REG(0x40000c04, uint32_t)
#define GCLK_GENCTRL_s	MMIO_REG(0x40000c04, struct __struct_GCLK_GENCTRL)

#define GCLK_GENDIV  	MMIO_REG(0x40000c08, uint32_t)
#define GCLK_GENDIV_s	MMIO_REG(0x40000c08, struct __struct_GCLK_GENDIV)


// WDT

#define WDT_BASE_ADDR	0x40001000

#define WDT_CTRL  	MMIO_REG(0x40001000, uint8_t)
#define WDT_CTRL_s	MMIO_REG(0x40001000, struct __struct_WDT_CTRL)

#define WDT_CONFIG  	MMIO_REG(0x40001001, uint8_t)
#define WDT_CONFIG_s	MMIO_REG(0x40001001, struct __struct_WDT_CONFIG)

#define WDT_EWCTRL  	MMIO_REG(0x40001002, uint8_t)
#define WDT_EWCTRL_s	MMIO_REG(0x40001002, struct __struct_WDT_EWCTRL)

#define WDT_INTENCLR  	MMIO_REG(0x40001004, uint8_t)
#define WDT_INTENCLR_s	MMIO_REG(0x40001004, struct __struct_WDT_INTENCLR)

#define WDT_INTENSET  	MMIO_REG(0x40001005, uint8_t)
#define WDT_INTENSET_s	MMIO_REG(0x40001005, struct __struct_WDT_INTENSET)

#define WDT_INTFLAG  	MMIO_REG(0x40001006, uint8_t)
#define WDT_INTFLAG_s	MMIO_REG(0x40001006, struct __struct_WDT_INTFLAG)

#define WDT_STATUS  	MMIO_REG(0x40001007, uint8_t)
#define WDT_STATUS_s	MMIO_REG(0x40001007, struct __struct_WDT_STATUS)

#define WDT_CLEAR  	MMIO_REG(0x40001008, uint8_t)
#define WDT_CLEAR_s	MMIO_REG(0x40001008, struct __struct_WDT_CLEAR)


// RTC_M0

#define RTC_M0_BASE_ADDR	0x40001400

#define RTC_M0_CTRL  	MMIO_REG(0x40001400, uint16_t)
#define RTC_M0_CTRL_s	MMIO_REG(0x40001400, struct __struct_RTC_M0_CTRL)

#define RTC_M0_READREQ  	MMIO_REG(0x40001402, uint16_t)
#define RTC_M0_READREQ_s	MMIO_REG(0x40001402, struct __struct_RTC_M0_READREQ)

#define RTC_M0_EVCTRL  	MMIO_REG(0x40001404, uint16_t)
#define RTC_M0_EVCTRL_s	MMIO_REG(0x40001404, struct __struct_RTC_M0_EVCTRL)

#define RTC_M0_INTENCLR  	MMIO_REG(0x40001406, uint8_t)
#define RTC_M0_INTENCLR_s	MMIO_REG(0x40001406, struct __struct_RTC_M0_INTENCLR)

#define RTC_M0_INTENSET  	MMIO_REG(0x40001407, uint8_t)
#define RTC_M0_INTENSET_s	MMIO_REG(0x40001407, struct __struct_RTC_M0_INTENSET)

#define RTC_M0_INTFLAG  	MMIO_REG(0x40001408, uint8_t)
#define RTC_M0_INTFLAG_s	MMIO_REG(0x40001408, struct __struct_RTC_M0_INTFLAG)

#define RTC_M0_STATUS  	MMIO_REG(0x4000140a, uint8_t)
#define RTC_M0_STATUS_s	MMIO_REG(0x4000140a, struct __struct_RTC_M0_STATUS)

#define RTC_M0_DBGCTRL  	MMIO_REG(0x4000140b, uint8_t)
#define RTC_M0_DBGCTRL_s	MMIO_REG(0x4000140b, struct __struct_RTC_M0_DBGCTRL)

#define RTC_M0_FREQCORR  	MMIO_REG(0x4000140c, uint8_t)
#define RTC_M0_FREQCORR_s	MMIO_REG(0x4000140c, struct __struct_RTC_M0_FREQCORR)

#define RTC_M0_COUNT  	MMIO_REG(0x40001410, uint32_t)

#define RTC_M0_COMP(i)  	MMIO_REG(0x40001418 + (i)*4, uint32_t)


// RTC_M1

#define RTC_M1_BASE_ADDR	0x40001400

#define RTC_M1_CTRL  	MMIO_REG(0x40001400, uint16_t)
#define RTC_M1_CTRL_s	MMIO_REG(0x40001400, struct __struct_RTC_M1_CTRL)

#define RTC_M1_READREQ  	MMIO_REG(0x40001402, uint16_t)
#define RTC_M1_READREQ_s	MMIO_REG(0x40001402, struct __struct_RTC_M1_READREQ)

#define RTC_M1_EVCTRL  	MMIO_REG(0x40001404, uint16_t)
#define RTC_M1_EVCTRL_s	MMIO_REG(0x40001404, struct __struct_RTC_M1_EVCTRL)

#define RTC_M1_INTENCLR  	MMIO_REG(0x40001406, uint8_t)
#define RTC_M1_INTENCLR_s	MMIO_REG(0x40001406, struct __struct_RTC_M1_INTENCLR)

#define RTC_M1_INTENSET  	MMIO_REG(0x40001407, uint8_t)
#define RTC_M1_INTENSET_s	MMIO_REG(0x40001407, struct __struct_RTC_M1_INTENSET)

#define RTC_M1_INTFLAG  	MMIO_REG(0x40001408, uint8_t)
#define RTC_M1_INTFLAG_s	MMIO_REG(0x40001408, struct __struct_RTC_M1_INTFLAG)

#define RTC_M1_STATUS  	MMIO_REG(0x4000140a, uint8_t)
#define RTC_M1_STATUS_s	MMIO_REG(0x4000140a, struct __struct_RTC_M1_STATUS)

#define RTC_M1_DBGCTRL  	MMIO_REG(0x4000140b, uint8_t)
#define RTC_M1_DBGCTRL_s	MMIO_REG(0x4000140b, struct __struct_RTC_M1_DBGCTRL)

#define RTC_M1_FREQCORR  	MMIO_REG(0x4000140c, uint8_t)
#define RTC_M1_FREQCORR_s	MMIO_REG(0x4000140c, struct __struct_RTC_M1_FREQCORR)

#define RTC_M1_COUNT  	MMIO_REG(0x40001410, uint16_t)

#define RTC_M1_PER  	MMIO_REG(0x40001414, uint16_t)

#define RTC_M1_COMP(i)  	MMIO_REG(0x40001418 + (i)*2, uint16_t)


// RTC_M2

#define RTC_M2_BASE_ADDR	0x40001400

#define RTC_M2_CTRL  	MMIO_REG(0x40001400, uint16_t)
#define RTC_M2_CTRL_s	MMIO_REG(0x40001400, struct __struct_RTC_M2_CTRL)

#define RTC_M2_READREQ  	MMIO_REG(0x40001402, uint16_t)
#define RTC_M2_READREQ_s	MMIO_REG(0x40001402, struct __struct_RTC_M2_READREQ)

#define RTC_M2_EVCTRL  	MMIO_REG(0x40001404, uint16_t)
#define RTC_M2_EVCTRL_s	MMIO_REG(0x40001404, struct __struct_RTC_M2_EVCTRL)

#define RTC_M2_INTENCLR  	MMIO_REG(0x40001406, uint8_t)
#define RTC_M2_INTENCLR_s	MMIO_REG(0x40001406, struct __struct_RTC_M2_INTENCLR)

#define RTC_M2_INTENSET  	MMIO_REG(0x40001407, uint8_t)
#define RTC_M2_INTENSET_s	MMIO_REG(0x40001407, struct __struct_RTC_M2_INTENSET)

#define RTC_M2_INTFLAG  	MMIO_REG(0x40001408, uint8_t)
#define RTC_M2_INTFLAG_s	MMIO_REG(0x40001408, struct __struct_RTC_M2_INTFLAG)

#define RTC_M2_STATUS  	MMIO_REG(0x4000140a, uint8_t)
#define RTC_M2_STATUS_s	MMIO_REG(0x4000140a, struct __struct_RTC_M2_STATUS)

#define RTC_M2_DBGCTRL  	MMIO_REG(0x4000140b, uint8_t)
#define RTC_M2_DBGCTRL_s	MMIO_REG(0x4000140b, struct __struct_RTC_M2_DBGCTRL)

#define RTC_M2_FREQCORR  	MMIO_REG(0x4000140c, uint8_t)
#define RTC_M2_FREQCORR_s	MMIO_REG(0x4000140c, struct __struct_RTC_M2_FREQCORR)

#define RTC_M2_CLOCK  	MMIO_REG(0x40001410, uint32_t)
#define RTC_M2_CLOCK_s	MMIO_REG(0x40001410, struct __struct_RTC_M2_CLOCK)

#define RTC_M2_ALARM(i)  	MMIO_REG(0x40001418 + (i)*8, uint32_t)
#define RTC_M2_ALARM_s(i)	MMIO_REG(0x40001418 + (i)*8, struct __struct_RTC_M2_ALARM)

#define RTC_M2_MASK(i)  	MMIO_REG(0x4000141c + (i)*8, uint8_t)
#define RTC_M2_MASK_s(i)	MMIO_REG(0x4000141c + (i)*8, struct __struct_RTC_M2_MASK)


// EIC

#define EIC_BASE_ADDR	0x40001800

#define EIC_CTRL  	MMIO_REG(0x40001800, uint8_t)
#define EIC_CTRL_s	MMIO_REG(0x40001800, struct __struct_EIC_CTRL)

#define EIC_STATUS  	MMIO_REG(0x40001801, uint8_t)
#define EIC_STATUS_s	MMIO_REG(0x40001801, struct __struct_EIC_STATUS)

#define EIC_NMICTRL  	MMIO_REG(0x40001802, uint8_t)
#define EIC_NMICTRL_s	MMIO_REG(0x40001802, struct __struct_EIC_NMICTRL)

#define EIC_NMIFLAG  	MMIO_REG(0x40001803, uint8_t)
#define EIC_NMIFLAG_s	MMIO_REG(0x40001803, struct __struct_EIC_NMIFLAG)

#define EIC_EVCTRL  	MMIO_REG(0x40001804, uint32_t)
#define EIC_EVCTRL_s	MMIO_REG(0x40001804, struct __struct_EIC_EVCTRL)

#define EIC_INTENCLR  	MMIO_REG(0x40001808, uint32_t)
#define EIC_INTENCLR_s	MMIO_REG(0x40001808, struct __struct_EIC_INTENCLR)

#define EIC_INTENSET  	MMIO_REG(0x4000180c, uint32_t)
#define EIC_INTENSET_s	MMIO_REG(0x4000180c, struct __struct_EIC_INTENSET)

#define EIC_INTFLAG  	MMIO_REG(0x40001810, uint32_t)
#define EIC_INTFLAG_s	MMIO_REG(0x40001810, struct __struct_EIC_INTFLAG)

#define EIC_WAKEUP  	MMIO_REG(0x40001814, uint32_t)
#define EIC_WAKEUP_s	MMIO_REG(0x40001814, struct __struct_EIC_WAKEUP)

#define EIC_CONFIG(i)  	MMIO_REG(0x40001818 + (i)*4, uint32_t)
#define EIC_CONFIG_s(i)	MMIO_REG(0x40001818 + (i)*4, struct __struct_EIC_CONFIG)


// PAC1

#define PAC1_BASE_ADDR	0x41000000

#define PAC1_WPCLR  	MMIO_REG(0x41000000, uint32_t)
#define PAC1_WPCLR_s	MMIO_REG(0x41000000, struct __struct_PAC1_WPCLR)

#define PAC1_WPSET  	MMIO_REG(0x41000004, uint32_t)
#define PAC1_WPSET_s	MMIO_REG(0x41000004, struct __struct_PAC1_WPSET)


// DSU

#define DSU_BASE_ADDR	0x41002000

#define DSU_CTRL  	MMIO_REG(0x41002000, uint8_t)
#define DSU_CTRL_s	MMIO_REG(0x41002000, struct __struct_DSU_CTRL)

#define DSU_STATUSA  	MMIO_REG(0x41002001, uint8_t)
#define DSU_STATUSA_s	MMIO_REG(0x41002001, struct __struct_DSU_STATUSA)

#define DSU_STATUSB  	MMIO_REG(0x41002002, uint8_t)
#define DSU_STATUSB_s	MMIO_REG(0x41002002, struct __struct_DSU_STATUSB)

#define DSU_ADDR  	MMIO_REG(0x41002004, uint32_t)
#define DSU_ADDR_s	MMIO_REG(0x41002004, struct __struct_DSU_ADDR)

#define DSU_LENGTH  	MMIO_REG(0x41002008, uint32_t)
#define DSU_LENGTH_s	MMIO_REG(0x41002008, struct __struct_DSU_LENGTH)

#define DSU_DATA  	MMIO_REG(0x4100200c, uint32_t)

#define DSU_DCC(i)  	MMIO_REG(0x41002010 + (i)*4, uint32_t)

#define DSU_DID  	MMIO_REG(0x41002018, uint32_t)
#define DSU_DID_s	MMIO_REG(0x41002018, struct __struct_DSU_DID)

#define DSU_ENTRY(i)  	MMIO_REG(0x41003000 + (i)*4, uint32_t)
#define DSU_ENTRY_s(i)	MMIO_REG(0x41003000 + (i)*4, struct __struct_DSU_ENTRY)

#define DSU_END  	MMIO_REG(0x41003008, uint32_t)

#define DSU_MEMTYPE  	MMIO_REG(0x41003fcc, uint32_t)
#define DSU_MEMTYPE_s	MMIO_REG(0x41003fcc, struct __struct_DSU_MEMTYPE)

#define DSU_PID4  	MMIO_REG(0x41003fd0, uint32_t)
#define DSU_PID4_s	MMIO_REG(0x41003fd0, struct __struct_DSU_PID4)

#define DSU_PID0  	MMIO_REG(0x41003fe0, uint32_t)
#define DSU_PID0_s	MMIO_REG(0x41003fe0, struct __struct_DSU_PID0)

#define DSU_PID1  	MMIO_REG(0x41003fe4, uint32_t)
#define DSU_PID1_s	MMIO_REG(0x41003fe4, struct __struct_DSU_PID1)

#define DSU_PID2  	MMIO_REG(0x41003fe8, uint32_t)
#define DSU_PID2_s	MMIO_REG(0x41003fe8, struct __struct_DSU_PID2)

#define DSU_PID3  	MMIO_REG(0x41003fec, uint32_t)
#define DSU_PID3_s	MMIO_REG(0x41003fec, struct __struct_DSU_PID3)

#define DSU_CID0  	MMIO_REG(0x41003ff0, uint32_t)
#define DSU_CID0_s	MMIO_REG(0x41003ff0, struct __struct_DSU_CID0)

#define DSU_CID1  	MMIO_REG(0x41003ff4, uint32_t)
#define DSU_CID1_s	MMIO_REG(0x41003ff4, struct __struct_DSU_CID1)

#define DSU_CID2  	MMIO_REG(0x41003ff8, uint32_t)
#define DSU_CID2_s	MMIO_REG(0x41003ff8, struct __struct_DSU_CID2)

#define DSU_CID3  	MMIO_REG(0x41003ffc, uint32_t)
#define DSU_CID3_s	MMIO_REG(0x41003ffc, struct __struct_DSU_CID3)


// NVMCTRL

#define NVMCTRL_BASE_ADDR	0x41004000

#define NVMCTRL_CTRLA  	MMIO_REG(0x41004000, uint16_t)
#define NVMCTRL_CTRLA_s	MMIO_REG(0x41004000, struct __struct_NVMCTRL_CTRLA)

#define NVMCTRL_CTRLB  	MMIO_REG(0x41004004, uint32_t)
#define NVMCTRL_CTRLB_s	MMIO_REG(0x41004004, struct __struct_NVMCTRL_CTRLB)

#define NVMCTRL_PARAM  	MMIO_REG(0x41004008, uint32_t)
#define NVMCTRL_PARAM_s	MMIO_REG(0x41004008, struct __struct_NVMCTRL_PARAM)

#define NVMCTRL_INTENCLR  	MMIO_REG(0x4100400c, uint8_t)
#define NVMCTRL_INTENCLR_s	MMIO_REG(0x4100400c, struct __struct_NVMCTRL_INTENCLR)

#define NVMCTRL_INTENSET  	MMIO_REG(0x41004010, uint8_t)
#define NVMCTRL_INTENSET_s	MMIO_REG(0x41004010, struct __struct_NVMCTRL_INTENSET)

#define NVMCTRL_INTFLAG  	MMIO_REG(0x41004014, uint8_t)
#define NVMCTRL_INTFLAG_s	MMIO_REG(0x41004014, struct __struct_NVMCTRL_INTFLAG)

#define NVMCTRL_STATUS  	MMIO_REG(0x41004018, uint16_t)
#define NVMCTRL_STATUS_s	MMIO_REG(0x41004018, struct __struct_NVMCTRL_STATUS)

#define NVMCTRL_ADDR  	MMIO_REG(0x4100401c, uint32_t)
#define NVMCTRL_ADDR_s	MMIO_REG(0x4100401c, struct __struct_NVMCTRL_ADDR)

#define NVMCTRL_LOCK  	MMIO_REG(0x41004020, uint16_t)


// PORTA

#define PORTA_BASE_ADDR	0x41004400

#define PORTA_DIR  	MMIO_REG(0x41004400, uint32_t)
#define PORTA_DIR_s	MMIO_REG(0x41004400, struct __struct_PORT_DIR)

#define PORTA_DIRCLR  	MMIO_REG(0x41004404, uint32_t)
#define PORTA_DIRCLR_s	MMIO_REG(0x41004404, struct __struct_PORT_DIRCLR)

#define PORTA_DIRSET  	MMIO_REG(0x41004408, uint32_t)
#define PORTA_DIRSET_s	MMIO_REG(0x41004408, struct __struct_PORT_DIRSET)

#define PORTA_DIRTGL  	MMIO_REG(0x4100440c, uint32_t)
#define PORTA_DIRTGL_s	MMIO_REG(0x4100440c, struct __struct_PORT_DIRTGL)

#define PORTA_OUT  	MMIO_REG(0x41004410, uint32_t)
#define PORTA_OUT_s	MMIO_REG(0x41004410, struct __struct_PORT_OUT)

#define PORTA_OUTCLR  	MMIO_REG(0x41004414, uint32_t)
#define PORTA_OUTCLR_s	MMIO_REG(0x41004414, struct __struct_PORT_OUTCLR)

#define PORTA_OUTSET  	MMIO_REG(0x41004418, uint32_t)
#define PORTA_OUTSET_s	MMIO_REG(0x41004418, struct __struct_PORT_OUTSET)

#define PORTA_OUTTGL  	MMIO_REG(0x4100441c, uint32_t)
#define PORTA_OUTTGL_s	MMIO_REG(0x4100441c, struct __struct_PORT_OUTTGL)

#define PORTA_IN  	MMIO_REG(0x41004420, uint32_t)
#define PORTA_IN_s	MMIO_REG(0x41004420, struct __struct_PORT_IN)

#define PORTA_CTRL  	MMIO_REG(0x41004424, uint32_t)
#define PORTA_CTRL_s	MMIO_REG(0x41004424, struct __struct_PORT_CTRL)

#define PORTA_WRCONFIG  	MMIO_REG(0x41004428, uint32_t)
#define PORTA_WRCONFIG_s	MMIO_REG(0x41004428, struct __struct_PORT_WRCONFIG)

#define PORTA_PMUX(i)  	MMIO_REG(0x41004430 + (i)*1, uint8_t)
#define PORTA_PMUX_s(i)	MMIO_REG(0x41004430 + (i)*1, struct __struct_PORT_PMUX)

#define PORTA_PINCFG(i)  	MMIO_REG(0x41004440 + (i)*1, uint8_t)
#define PORTA_PINCFG_s(i)	MMIO_REG(0x41004440 + (i)*1, struct __struct_PORT_PINCFG)


// PORTB

#define PORTB_BASE_ADDR	0x41004480

#define PORTB_DIR  	MMIO_REG(0x41004480, uint32_t)
#define PORTB_DIR_s	MMIO_REG(0x41004480, struct __struct_PORT_DIR)

#define PORTB_DIRCLR  	MMIO_REG(0x41004484, uint32_t)
#define PORTB_DIRCLR_s	MMIO_REG(0x41004484, struct __struct_PORT_DIRCLR)

#define PORTB_DIRSET  	MMIO_REG(0x41004488, uint32_t)
#define PORTB_DIRSET_s	MMIO_REG(0x41004488, struct __struct_PORT_DIRSET)

#define PORTB_DIRTGL  	MMIO_REG(0x4100448c, uint32_t)
#define PORTB_DIRTGL_s	MMIO_REG(0x4100448c, struct __struct_PORT_DIRTGL)

#define PORTB_OUT  	MMIO_REG(0x41004490, uint32_t)
#define PORTB_OUT_s	MMIO_REG(0x41004490, struct __struct_PORT_OUT)

#define PORTB_OUTCLR  	MMIO_REG(0x41004494, uint32_t)
#define PORTB_OUTCLR_s	MMIO_REG(0x41004494, struct __struct_PORT_OUTCLR)

#define PORTB_OUTSET  	MMIO_REG(0x41004498, uint32_t)
#define PORTB_OUTSET_s	MMIO_REG(0x41004498, struct __struct_PORT_OUTSET)

#define PORTB_OUTTGL  	MMIO_REG(0x4100449c, uint32_t)
#define PORTB_OUTTGL_s	MMIO_REG(0x4100449c, struct __struct_PORT_OUTTGL)

#define PORTB_IN  	MMIO_REG(0x410044a0, uint32_t)
#define PORTB_IN_s	MMIO_REG(0x410044a0, struct __struct_PORT_IN)

#define PORTB_CTRL  	MMIO_REG(0x410044a4, uint32_t)
#define PORTB_CTRL_s	MMIO_REG(0x410044a4, struct __struct_PORT_CTRL)

#define PORTB_WRCONFIG  	MMIO_REG(0x410044a8, uint32_t)
#define PORTB_WRCONFIG_s	MMIO_REG(0x410044a8, struct __struct_PORT_WRCONFIG)

#define PORTB_PMUX(i)  	MMIO_REG(0x410044b0 + (i)*1, uint8_t)
#define PORTB_PMUX_s(i)	MMIO_REG(0x410044b0 + (i)*1, struct __struct_PORT_PMUX)

#define PORTB_PINCFG(i)  	MMIO_REG(0x410044c0 + (i)*1, uint8_t)
#define PORTB_PINCFG_s(i)	MMIO_REG(0x410044c0 + (i)*1, struct __struct_PORT_PINCFG)


// PAC2

#define PAC2_BASE_ADDR	0x42000000

#define PAC2_WPCLR  	MMIO_REG(0x42000000, uint32_t)
#define PAC2_WPCLR_s	MMIO_REG(0x42000000, struct __struct_PAC2_WPCLR)

#define PAC2_WPSET  	MMIO_REG(0x42000004, uint32_t)
#define PAC2_WPSET_s	MMIO_REG(0x42000004, struct __struct_PAC2_WPSET)


// EVSYS

#define EVSYS_BASE_ADDR	0x42000400

#define EVSYS_CTRL  	MMIO_REG(0x42000400, uint8_t)
#define EVSYS_CTRL_s	MMIO_REG(0x42000400, struct __struct_EVSYS_CTRL)

#define EVSYS_CHANNEL  	MMIO_REG(0x42000404, uint32_t)
#define EVSYS_CHANNEL_s	MMIO_REG(0x42000404, struct __struct_EVSYS_CHANNEL)

#define EVSYS_USER  	MMIO_REG(0x42000408, uint16_t)
#define EVSYS_USER_s	MMIO_REG(0x42000408, struct __struct_EVSYS_USER)

#define EVSYS_CHSTATUS  	MMIO_REG(0x4200040c, uint32_t)
#define EVSYS_CHSTATUS_s	MMIO_REG(0x4200040c, struct __struct_EVSYS_CHSTATUS)

#define EVSYS_INTENCLR  	MMIO_REG(0x42000410, uint32_t)
#define EVSYS_INTENCLR_s	MMIO_REG(0x42000410, struct __struct_EVSYS_INTENCLR)

#define EVSYS_INTENSET  	MMIO_REG(0x42000414, uint32_t)
#define EVSYS_INTENSET_s	MMIO_REG(0x42000414, struct __struct_EVSYS_INTENSET)

#define EVSYS_INTFLAG  	MMIO_REG(0x42000418, uint32_t)
#define EVSYS_INTFLAG_s	MMIO_REG(0x42000418, struct __struct_EVSYS_INTFLAG)


// SC0_USART

#define SC0_USART_BASE_ADDR	0x42000800

#define SC0_USART_CTRLA  	MMIO_REG(0x42000800, uint32_t)
#define SC0_USART_CTRLA_s	MMIO_REG(0x42000800, struct __struct_SC_USART_CTRLA)

#define SC0_USART_CTRLB  	MMIO_REG(0x42000804, uint32_t)
#define SC0_USART_CTRLB_s	MMIO_REG(0x42000804, struct __struct_SC_USART_CTRLB)

#define SC0_USART_DBGCTRL  	MMIO_REG(0x42000808, uint8_t)
#define SC0_USART_DBGCTRL_s	MMIO_REG(0x42000808, struct __struct_SC_USART_DBGCTRL)

#define SC0_USART_BAUD  	MMIO_REG(0x4200080a, uint16_t)

#define SC0_USART_INTENCLR  	MMIO_REG(0x4200080c, uint8_t)
#define SC0_USART_INTENCLR_s	MMIO_REG(0x4200080c, struct __struct_SC_USART_INTENCLR)

#define SC0_USART_INTENSET  	MMIO_REG(0x4200080d, uint8_t)
#define SC0_USART_INTENSET_s	MMIO_REG(0x4200080d, struct __struct_SC_USART_INTENSET)

#define SC0_USART_INTFLAG  	MMIO_REG(0x4200080e, uint8_t)
#define SC0_USART_INTFLAG_s	MMIO_REG(0x4200080e, struct __struct_SC_USART_INTFLAG)

#define SC0_USART_STATUS  	MMIO_REG(0x42000810, uint16_t)
#define SC0_USART_STATUS_s	MMIO_REG(0x42000810, struct __struct_SC_USART_STATUS)

#define SC0_USART_DATA  	MMIO_REG(0x42000818, uint16_t)
#define SC0_USART_DATA_s	MMIO_REG(0x42000818, struct __struct_SC_USART_DATA)


// SC0_SPI

#define SC0_SPI_BASE_ADDR	0x42000800

#define SC0_SPI_CTRLA  	MMIO_REG(0x42000800, uint32_t)
#define SC0_SPI_CTRLA_s	MMIO_REG(0x42000800, struct __struct_SC_SPI_CTRLA)

#define SC0_SPI_CTRLB  	MMIO_REG(0x42000804, uint32_t)
#define SC0_SPI_CTRLB_s	MMIO_REG(0x42000804, struct __struct_SC_SPI_CTRLB)

#define SC0_SPI_DBGCTRL  	MMIO_REG(0x42000808, uint8_t)
#define SC0_SPI_DBGCTRL_s	MMIO_REG(0x42000808, struct __struct_SC_SPI_DBGCTRL)

#define SC0_SPI_BAUD  	MMIO_REG(0x4200080a, uint8_t)

#define SC0_SPI_INTENCLR  	MMIO_REG(0x4200080c, uint8_t)
#define SC0_SPI_INTENCLR_s	MMIO_REG(0x4200080c, struct __struct_SC_SPI_INTENCLR)

#define SC0_SPI_INTENSET  	MMIO_REG(0x4200080d, uint8_t)
#define SC0_SPI_INTENSET_s	MMIO_REG(0x4200080d, struct __struct_SC_SPI_INTENSET)

#define SC0_SPI_INTFLAG  	MMIO_REG(0x4200080e, uint8_t)
#define SC0_SPI_INTFLAG_s	MMIO_REG(0x4200080e, struct __struct_SC_SPI_INTFLAG)

#define SC0_SPI_STATUS  	MMIO_REG(0x42000810, uint16_t)
#define SC0_SPI_STATUS_s	MMIO_REG(0x42000810, struct __struct_SC_SPI_STATUS)

#define SC0_SPI_ADDR  	MMIO_REG(0x42000814, uint32_t)
#define SC0_SPI_ADDR_s	MMIO_REG(0x42000814, struct __struct_SC_SPI_ADDR)

#define SC0_SPI_DATA  	MMIO_REG(0x42000818, uint16_t)
#define SC0_SPI_DATA_s	MMIO_REG(0x42000818, struct __struct_SC_SPI_DATA)


// SC0_I2CS

#define SC0_I2CS_BASE_ADDR	0x42000800

#define SC0_I2CS_CTRLA  	MMIO_REG(0x42000800, uint32_t)
#define SC0_I2CS_CTRLA_s	MMIO_REG(0x42000800, struct __struct_SC_I2CS_CTRLA)

#define SC0_I2CS_CTRLB  	MMIO_REG(0x42000804, uint32_t)
#define SC0_I2CS_CTRLB_s	MMIO_REG(0x42000804, struct __struct_SC_I2CS_CTRLB)

#define SC0_I2CS_INTENCLR  	MMIO_REG(0x4200080c, uint8_t)
#define SC0_I2CS_INTENCLR_s	MMIO_REG(0x4200080c, struct __struct_SC_I2CS_INTENCLR)

#define SC0_I2CS_INTENSET  	MMIO_REG(0x4200080d, uint8_t)
#define SC0_I2CS_INTENSET_s	MMIO_REG(0x4200080d, struct __struct_SC_I2CS_INTENSET)

#define SC0_I2CS_INTFLAG  	MMIO_REG(0x4200080e, uint8_t)
#define SC0_I2CS_INTFLAG_s	MMIO_REG(0x4200080e, struct __struct_SC_I2CS_INTFLAG)

#define SC0_I2CS_STATUS  	MMIO_REG(0x42000810, uint16_t)
#define SC0_I2CS_STATUS_s	MMIO_REG(0x42000810, struct __struct_SC_I2CS_STATUS)

#define SC0_I2CS_ADDR  	MMIO_REG(0x42000814, uint32_t)
#define SC0_I2CS_ADDR_s	MMIO_REG(0x42000814, struct __struct_SC_I2CS_ADDR)

#define SC0_I2CS_DATA  	MMIO_REG(0x42000818, uint8_t)


// SC0_I2CM

#define SC0_I2CM_BASE_ADDR	0x42000800

#define SC0_I2CM_CTRLA  	MMIO_REG(0x42000800, uint32_t)
#define SC0_I2CM_CTRLA_s	MMIO_REG(0x42000800, struct __struct_SC_I2CM_CTRLA)

#define SC0_I2CM_CTRLB  	MMIO_REG(0x42000804, uint32_t)
#define SC0_I2CM_CTRLB_s	MMIO_REG(0x42000804, struct __struct_SC_I2CM_CTRLB)

#define SC0_I2CM_DBGCTRL  	MMIO_REG(0x42000808, uint8_t)
#define SC0_I2CM_DBGCTRL_s	MMIO_REG(0x42000808, struct __struct_SC_I2CM_DBGCTRL)

#define SC0_I2CM_BAUD  	MMIO_REG(0x4200080a, uint16_t)
#define SC0_I2CM_BAUD_s	MMIO_REG(0x4200080a, struct __struct_SC_I2CM_BAUD)

#define SC0_I2CM_INTENCLR  	MMIO_REG(0x4200080c, uint8_t)
#define SC0_I2CM_INTENCLR_s	MMIO_REG(0x4200080c, struct __struct_SC_I2CM_INTENCLR)

#define SC0_I2CM_INTENSET  	MMIO_REG(0x4200080d, uint8_t)
#define SC0_I2CM_INTENSET_s	MMIO_REG(0x4200080d, struct __struct_SC_I2CM_INTENSET)

#define SC0_I2CM_INTFLAG  	MMIO_REG(0x4200080e, uint8_t)
#define SC0_I2CM_INTFLAG_s	MMIO_REG(0x4200080e, struct __struct_SC_I2CM_INTFLAG)

#define SC0_I2CM_STATUS  	MMIO_REG(0x42000810, uint16_t)
#define SC0_I2CM_STATUS_s	MMIO_REG(0x42000810, struct __struct_SC_I2CM_STATUS)

#define SC0_I2CM_ADDR  	MMIO_REG(0x42000814, uint8_t)

#define SC0_I2CM_DATA  	MMIO_REG(0x42000818, uint8_t)


// SC1_USART

#define SC1_USART_BASE_ADDR	0x42000c00

#define SC1_USART_CTRLA  	MMIO_REG(0x42000c00, uint32_t)
#define SC1_USART_CTRLA_s	MMIO_REG(0x42000c00, struct __struct_SC_USART_CTRLA)

#define SC1_USART_CTRLB  	MMIO_REG(0x42000c04, uint32_t)
#define SC1_USART_CTRLB_s	MMIO_REG(0x42000c04, struct __struct_SC_USART_CTRLB)

#define SC1_USART_DBGCTRL  	MMIO_REG(0x42000c08, uint8_t)
#define SC1_USART_DBGCTRL_s	MMIO_REG(0x42000c08, struct __struct_SC_USART_DBGCTRL)

#define SC1_USART_BAUD  	MMIO_REG(0x42000c0a, uint16_t)

#define SC1_USART_INTENCLR  	MMIO_REG(0x42000c0c, uint8_t)
#define SC1_USART_INTENCLR_s	MMIO_REG(0x42000c0c, struct __struct_SC_USART_INTENCLR)

#define SC1_USART_INTENSET  	MMIO_REG(0x42000c0d, uint8_t)
#define SC1_USART_INTENSET_s	MMIO_REG(0x42000c0d, struct __struct_SC_USART_INTENSET)

#define SC1_USART_INTFLAG  	MMIO_REG(0x42000c0e, uint8_t)
#define SC1_USART_INTFLAG_s	MMIO_REG(0x42000c0e, struct __struct_SC_USART_INTFLAG)

#define SC1_USART_STATUS  	MMIO_REG(0x42000c10, uint16_t)
#define SC1_USART_STATUS_s	MMIO_REG(0x42000c10, struct __struct_SC_USART_STATUS)

#define SC1_USART_DATA  	MMIO_REG(0x42000c18, uint16_t)
#define SC1_USART_DATA_s	MMIO_REG(0x42000c18, struct __struct_SC_USART_DATA)


// SC1_SPI

#define SC1_SPI_BASE_ADDR	0x42000c00

#define SC1_SPI_CTRLA  	MMIO_REG(0x42000c00, uint32_t)
#define SC1_SPI_CTRLA_s	MMIO_REG(0x42000c00, struct __struct_SC_SPI_CTRLA)

#define SC1_SPI_CTRLB  	MMIO_REG(0x42000c04, uint32_t)
#define SC1_SPI_CTRLB_s	MMIO_REG(0x42000c04, struct __struct_SC_SPI_CTRLB)

#define SC1_SPI_DBGCTRL  	MMIO_REG(0x42000c08, uint8_t)
#define SC1_SPI_DBGCTRL_s	MMIO_REG(0x42000c08, struct __struct_SC_SPI_DBGCTRL)

#define SC1_SPI_BAUD  	MMIO_REG(0x42000c0a, uint8_t)

#define SC1_SPI_INTENCLR  	MMIO_REG(0x42000c0c, uint8_t)
#define SC1_SPI_INTENCLR_s	MMIO_REG(0x42000c0c, struct __struct_SC_SPI_INTENCLR)

#define SC1_SPI_INTENSET  	MMIO_REG(0x42000c0d, uint8_t)
#define SC1_SPI_INTENSET_s	MMIO_REG(0x42000c0d, struct __struct_SC_SPI_INTENSET)

#define SC1_SPI_INTFLAG  	MMIO_REG(0x42000c0e, uint8_t)
#define SC1_SPI_INTFLAG_s	MMIO_REG(0x42000c0e, struct __struct_SC_SPI_INTFLAG)

#define SC1_SPI_STATUS  	MMIO_REG(0x42000c10, uint16_t)
#define SC1_SPI_STATUS_s	MMIO_REG(0x42000c10, struct __struct_SC_SPI_STATUS)

#define SC1_SPI_ADDR  	MMIO_REG(0x42000c14, uint32_t)
#define SC1_SPI_ADDR_s	MMIO_REG(0x42000c14, struct __struct_SC_SPI_ADDR)

#define SC1_SPI_DATA  	MMIO_REG(0x42000c18, uint16_t)
#define SC1_SPI_DATA_s	MMIO_REG(0x42000c18, struct __struct_SC_SPI_DATA)


// SC1_I2CS

#define SC1_I2CS_BASE_ADDR	0x42000c00

#define SC1_I2CS_CTRLA  	MMIO_REG(0x42000c00, uint32_t)
#define SC1_I2CS_CTRLA_s	MMIO_REG(0x42000c00, struct __struct_SC_I2CS_CTRLA)

#define SC1_I2CS_CTRLB  	MMIO_REG(0x42000c04, uint32_t)
#define SC1_I2CS_CTRLB_s	MMIO_REG(0x42000c04, struct __struct_SC_I2CS_CTRLB)

#define SC1_I2CS_INTENCLR  	MMIO_REG(0x42000c0c, uint8_t)
#define SC1_I2CS_INTENCLR_s	MMIO_REG(0x42000c0c, struct __struct_SC_I2CS_INTENCLR)

#define SC1_I2CS_INTENSET  	MMIO_REG(0x42000c0d, uint8_t)
#define SC1_I2CS_INTENSET_s	MMIO_REG(0x42000c0d, struct __struct_SC_I2CS_INTENSET)

#define SC1_I2CS_INTFLAG  	MMIO_REG(0x42000c0e, uint8_t)
#define SC1_I2CS_INTFLAG_s	MMIO_REG(0x42000c0e, struct __struct_SC_I2CS_INTFLAG)

#define SC1_I2CS_STATUS  	MMIO_REG(0x42000c10, uint16_t)
#define SC1_I2CS_STATUS_s	MMIO_REG(0x42000c10, struct __struct_SC_I2CS_STATUS)

#define SC1_I2CS_ADDR  	MMIO_REG(0x42000c14, uint32_t)
#define SC1_I2CS_ADDR_s	MMIO_REG(0x42000c14, struct __struct_SC_I2CS_ADDR)

#define SC1_I2CS_DATA  	MMIO_REG(0x42000c18, uint8_t)


// SC1_I2CM

#define SC1_I2CM_BASE_ADDR	0x42000c00

#define SC1_I2CM_CTRLA  	MMIO_REG(0x42000c00, uint32_t)
#define SC1_I2CM_CTRLA_s	MMIO_REG(0x42000c00, struct __struct_SC_I2CM_CTRLA)

#define SC1_I2CM_CTRLB  	MMIO_REG(0x42000c04, uint32_t)
#define SC1_I2CM_CTRLB_s	MMIO_REG(0x42000c04, struct __struct_SC_I2CM_CTRLB)

#define SC1_I2CM_DBGCTRL  	MMIO_REG(0x42000c08, uint8_t)
#define SC1_I2CM_DBGCTRL_s	MMIO_REG(0x42000c08, struct __struct_SC_I2CM_DBGCTRL)

#define SC1_I2CM_BAUD  	MMIO_REG(0x42000c0a, uint16_t)
#define SC1_I2CM_BAUD_s	MMIO_REG(0x42000c0a, struct __struct_SC_I2CM_BAUD)

#define SC1_I2CM_INTENCLR  	MMIO_REG(0x42000c0c, uint8_t)
#define SC1_I2CM_INTENCLR_s	MMIO_REG(0x42000c0c, struct __struct_SC_I2CM_INTENCLR)

#define SC1_I2CM_INTENSET  	MMIO_REG(0x42000c0d, uint8_t)
#define SC1_I2CM_INTENSET_s	MMIO_REG(0x42000c0d, struct __struct_SC_I2CM_INTENSET)

#define SC1_I2CM_INTFLAG  	MMIO_REG(0x42000c0e, uint8_t)
#define SC1_I2CM_INTFLAG_s	MMIO_REG(0x42000c0e, struct __struct_SC_I2CM_INTFLAG)

#define SC1_I2CM_STATUS  	MMIO_REG(0x42000c10, uint16_t)
#define SC1_I2CM_STATUS_s	MMIO_REG(0x42000c10, struct __struct_SC_I2CM_STATUS)

#define SC1_I2CM_ADDR  	MMIO_REG(0x42000c14, uint8_t)

#define SC1_I2CM_DATA  	MMIO_REG(0x42000c18, uint8_t)


// SC2_USART

#define SC2_USART_BASE_ADDR	0x42001000

#define SC2_USART_CTRLA  	MMIO_REG(0x42001000, uint32_t)
#define SC2_USART_CTRLA_s	MMIO_REG(0x42001000, struct __struct_SC_USART_CTRLA)

#define SC2_USART_CTRLB  	MMIO_REG(0x42001004, uint32_t)
#define SC2_USART_CTRLB_s	MMIO_REG(0x42001004, struct __struct_SC_USART_CTRLB)

#define SC2_USART_DBGCTRL  	MMIO_REG(0x42001008, uint8_t)
#define SC2_USART_DBGCTRL_s	MMIO_REG(0x42001008, struct __struct_SC_USART_DBGCTRL)

#define SC2_USART_BAUD  	MMIO_REG(0x4200100a, uint16_t)

#define SC2_USART_INTENCLR  	MMIO_REG(0x4200100c, uint8_t)
#define SC2_USART_INTENCLR_s	MMIO_REG(0x4200100c, struct __struct_SC_USART_INTENCLR)

#define SC2_USART_INTENSET  	MMIO_REG(0x4200100d, uint8_t)
#define SC2_USART_INTENSET_s	MMIO_REG(0x4200100d, struct __struct_SC_USART_INTENSET)

#define SC2_USART_INTFLAG  	MMIO_REG(0x4200100e, uint8_t)
#define SC2_USART_INTFLAG_s	MMIO_REG(0x4200100e, struct __struct_SC_USART_INTFLAG)

#define SC2_USART_STATUS  	MMIO_REG(0x42001010, uint16_t)
#define SC2_USART_STATUS_s	MMIO_REG(0x42001010, struct __struct_SC_USART_STATUS)

#define SC2_USART_DATA  	MMIO_REG(0x42001018, uint16_t)
#define SC2_USART_DATA_s	MMIO_REG(0x42001018, struct __struct_SC_USART_DATA)


// SC2_SPI

#define SC2_SPI_BASE_ADDR	0x42001000

#define SC2_SPI_CTRLA  	MMIO_REG(0x42001000, uint32_t)
#define SC2_SPI_CTRLA_s	MMIO_REG(0x42001000, struct __struct_SC_SPI_CTRLA)

#define SC2_SPI_CTRLB  	MMIO_REG(0x42001004, uint32_t)
#define SC2_SPI_CTRLB_s	MMIO_REG(0x42001004, struct __struct_SC_SPI_CTRLB)

#define SC2_SPI_DBGCTRL  	MMIO_REG(0x42001008, uint8_t)
#define SC2_SPI_DBGCTRL_s	MMIO_REG(0x42001008, struct __struct_SC_SPI_DBGCTRL)

#define SC2_SPI_BAUD  	MMIO_REG(0x4200100a, uint8_t)

#define SC2_SPI_INTENCLR  	MMIO_REG(0x4200100c, uint8_t)
#define SC2_SPI_INTENCLR_s	MMIO_REG(0x4200100c, struct __struct_SC_SPI_INTENCLR)

#define SC2_SPI_INTENSET  	MMIO_REG(0x4200100d, uint8_t)
#define SC2_SPI_INTENSET_s	MMIO_REG(0x4200100d, struct __struct_SC_SPI_INTENSET)

#define SC2_SPI_INTFLAG  	MMIO_REG(0x4200100e, uint8_t)
#define SC2_SPI_INTFLAG_s	MMIO_REG(0x4200100e, struct __struct_SC_SPI_INTFLAG)

#define SC2_SPI_STATUS  	MMIO_REG(0x42001010, uint16_t)
#define SC2_SPI_STATUS_s	MMIO_REG(0x42001010, struct __struct_SC_SPI_STATUS)

#define SC2_SPI_ADDR  	MMIO_REG(0x42001014, uint32_t)
#define SC2_SPI_ADDR_s	MMIO_REG(0x42001014, struct __struct_SC_SPI_ADDR)

#define SC2_SPI_DATA  	MMIO_REG(0x42001018, uint16_t)
#define SC2_SPI_DATA_s	MMIO_REG(0x42001018, struct __struct_SC_SPI_DATA)


// SC2_I2CS

#define SC2_I2CS_BASE_ADDR	0x42001000

#define SC2_I2CS_CTRLA  	MMIO_REG(0x42001000, uint32_t)
#define SC2_I2CS_CTRLA_s	MMIO_REG(0x42001000, struct __struct_SC_I2CS_CTRLA)

#define SC2_I2CS_CTRLB  	MMIO_REG(0x42001004, uint32_t)
#define SC2_I2CS_CTRLB_s	MMIO_REG(0x42001004, struct __struct_SC_I2CS_CTRLB)

#define SC2_I2CS_INTENCLR  	MMIO_REG(0x4200100c, uint8_t)
#define SC2_I2CS_INTENCLR_s	MMIO_REG(0x4200100c, struct __struct_SC_I2CS_INTENCLR)

#define SC2_I2CS_INTENSET  	MMIO_REG(0x4200100d, uint8_t)
#define SC2_I2CS_INTENSET_s	MMIO_REG(0x4200100d, struct __struct_SC_I2CS_INTENSET)

#define SC2_I2CS_INTFLAG  	MMIO_REG(0x4200100e, uint8_t)
#define SC2_I2CS_INTFLAG_s	MMIO_REG(0x4200100e, struct __struct_SC_I2CS_INTFLAG)

#define SC2_I2CS_STATUS  	MMIO_REG(0x42001010, uint16_t)
#define SC2_I2CS_STATUS_s	MMIO_REG(0x42001010, struct __struct_SC_I2CS_STATUS)

#define SC2_I2CS_ADDR  	MMIO_REG(0x42001014, uint32_t)
#define SC2_I2CS_ADDR_s	MMIO_REG(0x42001014, struct __struct_SC_I2CS_ADDR)

#define SC2_I2CS_DATA  	MMIO_REG(0x42001018, uint8_t)


// SC2_I2CM

#define SC2_I2CM_BASE_ADDR	0x42001000

#define SC2_I2CM_CTRLA  	MMIO_REG(0x42001000, uint32_t)
#define SC2_I2CM_CTRLA_s	MMIO_REG(0x42001000, struct __struct_SC_I2CM_CTRLA)

#define SC2_I2CM_CTRLB  	MMIO_REG(0x42001004, uint32_t)
#define SC2_I2CM_CTRLB_s	MMIO_REG(0x42001004, struct __struct_SC_I2CM_CTRLB)

#define SC2_I2CM_DBGCTRL  	MMIO_REG(0x42001008, uint8_t)
#define SC2_I2CM_DBGCTRL_s	MMIO_REG(0x42001008, struct __struct_SC_I2CM_DBGCTRL)

#define SC2_I2CM_BAUD  	MMIO_REG(0x4200100a, uint16_t)
#define SC2_I2CM_BAUD_s	MMIO_REG(0x4200100a, struct __struct_SC_I2CM_BAUD)

#define SC2_I2CM_INTENCLR  	MMIO_REG(0x4200100c, uint8_t)
#define SC2_I2CM_INTENCLR_s	MMIO_REG(0x4200100c, struct __struct_SC_I2CM_INTENCLR)

#define SC2_I2CM_INTENSET  	MMIO_REG(0x4200100d, uint8_t)
#define SC2_I2CM_INTENSET_s	MMIO_REG(0x4200100d, struct __struct_SC_I2CM_INTENSET)

#define SC2_I2CM_INTFLAG  	MMIO_REG(0x4200100e, uint8_t)
#define SC2_I2CM_INTFLAG_s	MMIO_REG(0x4200100e, struct __struct_SC_I2CM_INTFLAG)

#define SC2_I2CM_STATUS  	MMIO_REG(0x42001010, uint16_t)
#define SC2_I2CM_STATUS_s	MMIO_REG(0x42001010, struct __struct_SC_I2CM_STATUS)

#define SC2_I2CM_ADDR  	MMIO_REG(0x42001014, uint8_t)

#define SC2_I2CM_DATA  	MMIO_REG(0x42001018, uint8_t)


// SC3_USART

#define SC3_USART_BASE_ADDR	0x42001400

#define SC3_USART_CTRLA  	MMIO_REG(0x42001400, uint32_t)
#define SC3_USART_CTRLA_s	MMIO_REG(0x42001400, struct __struct_SC_USART_CTRLA)

#define SC3_USART_CTRLB  	MMIO_REG(0x42001404, uint32_t)
#define SC3_USART_CTRLB_s	MMIO_REG(0x42001404, struct __struct_SC_USART_CTRLB)

#define SC3_USART_DBGCTRL  	MMIO_REG(0x42001408, uint8_t)
#define SC3_USART_DBGCTRL_s	MMIO_REG(0x42001408, struct __struct_SC_USART_DBGCTRL)

#define SC3_USART_BAUD  	MMIO_REG(0x4200140a, uint16_t)

#define SC3_USART_INTENCLR  	MMIO_REG(0x4200140c, uint8_t)
#define SC3_USART_INTENCLR_s	MMIO_REG(0x4200140c, struct __struct_SC_USART_INTENCLR)

#define SC3_USART_INTENSET  	MMIO_REG(0x4200140d, uint8_t)
#define SC3_USART_INTENSET_s	MMIO_REG(0x4200140d, struct __struct_SC_USART_INTENSET)

#define SC3_USART_INTFLAG  	MMIO_REG(0x4200140e, uint8_t)
#define SC3_USART_INTFLAG_s	MMIO_REG(0x4200140e, struct __struct_SC_USART_INTFLAG)

#define SC3_USART_STATUS  	MMIO_REG(0x42001410, uint16_t)
#define SC3_USART_STATUS_s	MMIO_REG(0x42001410, struct __struct_SC_USART_STATUS)

#define SC3_USART_DATA  	MMIO_REG(0x42001418, uint16_t)
#define SC3_USART_DATA_s	MMIO_REG(0x42001418, struct __struct_SC_USART_DATA)


// SC3_SPI

#define SC3_SPI_BASE_ADDR	0x42001400

#define SC3_SPI_CTRLA  	MMIO_REG(0x42001400, uint32_t)
#define SC3_SPI_CTRLA_s	MMIO_REG(0x42001400, struct __struct_SC_SPI_CTRLA)

#define SC3_SPI_CTRLB  	MMIO_REG(0x42001404, uint32_t)
#define SC3_SPI_CTRLB_s	MMIO_REG(0x42001404, struct __struct_SC_SPI_CTRLB)

#define SC3_SPI_DBGCTRL  	MMIO_REG(0x42001408, uint8_t)
#define SC3_SPI_DBGCTRL_s	MMIO_REG(0x42001408, struct __struct_SC_SPI_DBGCTRL)

#define SC3_SPI_BAUD  	MMIO_REG(0x4200140a, uint8_t)

#define SC3_SPI_INTENCLR  	MMIO_REG(0x4200140c, uint8_t)
#define SC3_SPI_INTENCLR_s	MMIO_REG(0x4200140c, struct __struct_SC_SPI_INTENCLR)

#define SC3_SPI_INTENSET  	MMIO_REG(0x4200140d, uint8_t)
#define SC3_SPI_INTENSET_s	MMIO_REG(0x4200140d, struct __struct_SC_SPI_INTENSET)

#define SC3_SPI_INTFLAG  	MMIO_REG(0x4200140e, uint8_t)
#define SC3_SPI_INTFLAG_s	MMIO_REG(0x4200140e, struct __struct_SC_SPI_INTFLAG)

#define SC3_SPI_STATUS  	MMIO_REG(0x42001410, uint16_t)
#define SC3_SPI_STATUS_s	MMIO_REG(0x42001410, struct __struct_SC_SPI_STATUS)

#define SC3_SPI_ADDR  	MMIO_REG(0x42001414, uint32_t)
#define SC3_SPI_ADDR_s	MMIO_REG(0x42001414, struct __struct_SC_SPI_ADDR)

#define SC3_SPI_DATA  	MMIO_REG(0x42001418, uint16_t)
#define SC3_SPI_DATA_s	MMIO_REG(0x42001418, struct __struct_SC_SPI_DATA)


// SC3_I2CS

#define SC3_I2CS_BASE_ADDR	0x42001400

#define SC3_I2CS_CTRLA  	MMIO_REG(0x42001400, uint32_t)
#define SC3_I2CS_CTRLA_s	MMIO_REG(0x42001400, struct __struct_SC_I2CS_CTRLA)

#define SC3_I2CS_CTRLB  	MMIO_REG(0x42001404, uint32_t)
#define SC3_I2CS_CTRLB_s	MMIO_REG(0x42001404, struct __struct_SC_I2CS_CTRLB)

#define SC3_I2CS_INTENCLR  	MMIO_REG(0x4200140c, uint8_t)
#define SC3_I2CS_INTENCLR_s	MMIO_REG(0x4200140c, struct __struct_SC_I2CS_INTENCLR)

#define SC3_I2CS_INTENSET  	MMIO_REG(0x4200140d, uint8_t)
#define SC3_I2CS_INTENSET_s	MMIO_REG(0x4200140d, struct __struct_SC_I2CS_INTENSET)

#define SC3_I2CS_INTFLAG  	MMIO_REG(0x4200140e, uint8_t)
#define SC3_I2CS_INTFLAG_s	MMIO_REG(0x4200140e, struct __struct_SC_I2CS_INTFLAG)

#define SC3_I2CS_STATUS  	MMIO_REG(0x42001410, uint16_t)
#define SC3_I2CS_STATUS_s	MMIO_REG(0x42001410, struct __struct_SC_I2CS_STATUS)

#define SC3_I2CS_ADDR  	MMIO_REG(0x42001414, uint32_t)
#define SC3_I2CS_ADDR_s	MMIO_REG(0x42001414, struct __struct_SC_I2CS_ADDR)

#define SC3_I2CS_DATA  	MMIO_REG(0x42001418, uint8_t)


// SC3_I2CM

#define SC3_I2CM_BASE_ADDR	0x42001400

#define SC3_I2CM_CTRLA  	MMIO_REG(0x42001400, uint32_t)
#define SC3_I2CM_CTRLA_s	MMIO_REG(0x42001400, struct __struct_SC_I2CM_CTRLA)

#define SC3_I2CM_CTRLB  	MMIO_REG(0x42001404, uint32_t)
#define SC3_I2CM_CTRLB_s	MMIO_REG(0x42001404, struct __struct_SC_I2CM_CTRLB)

#define SC3_I2CM_DBGCTRL  	MMIO_REG(0x42001408, uint8_t)
#define SC3_I2CM_DBGCTRL_s	MMIO_REG(0x42001408, struct __struct_SC_I2CM_DBGCTRL)

#define SC3_I2CM_BAUD  	MMIO_REG(0x4200140a, uint16_t)
#define SC3_I2CM_BAUD_s	MMIO_REG(0x4200140a, struct __struct_SC_I2CM_BAUD)

#define SC3_I2CM_INTENCLR  	MMIO_REG(0x4200140c, uint8_t)
#define SC3_I2CM_INTENCLR_s	MMIO_REG(0x4200140c, struct __struct_SC_I2CM_INTENCLR)

#define SC3_I2CM_INTENSET  	MMIO_REG(0x4200140d, uint8_t)
#define SC3_I2CM_INTENSET_s	MMIO_REG(0x4200140d, struct __struct_SC_I2CM_INTENSET)

#define SC3_I2CM_INTFLAG  	MMIO_REG(0x4200140e, uint8_t)
#define SC3_I2CM_INTFLAG_s	MMIO_REG(0x4200140e, struct __struct_SC_I2CM_INTFLAG)

#define SC3_I2CM_STATUS  	MMIO_REG(0x42001410, uint16_t)
#define SC3_I2CM_STATUS_s	MMIO_REG(0x42001410, struct __struct_SC_I2CM_STATUS)

#define SC3_I2CM_ADDR  	MMIO_REG(0x42001414, uint8_t)

#define SC3_I2CM_DATA  	MMIO_REG(0x42001418, uint8_t)


// SC4_USART

#define SC4_USART_BASE_ADDR	0x42001800

#define SC4_USART_CTRLA  	MMIO_REG(0x42001800, uint32_t)
#define SC4_USART_CTRLA_s	MMIO_REG(0x42001800, struct __struct_SC_USART_CTRLA)

#define SC4_USART_CTRLB  	MMIO_REG(0x42001804, uint32_t)
#define SC4_USART_CTRLB_s	MMIO_REG(0x42001804, struct __struct_SC_USART_CTRLB)

#define SC4_USART_DBGCTRL  	MMIO_REG(0x42001808, uint8_t)
#define SC4_USART_DBGCTRL_s	MMIO_REG(0x42001808, struct __struct_SC_USART_DBGCTRL)

#define SC4_USART_BAUD  	MMIO_REG(0x4200180a, uint16_t)

#define SC4_USART_INTENCLR  	MMIO_REG(0x4200180c, uint8_t)
#define SC4_USART_INTENCLR_s	MMIO_REG(0x4200180c, struct __struct_SC_USART_INTENCLR)

#define SC4_USART_INTENSET  	MMIO_REG(0x4200180d, uint8_t)
#define SC4_USART_INTENSET_s	MMIO_REG(0x4200180d, struct __struct_SC_USART_INTENSET)

#define SC4_USART_INTFLAG  	MMIO_REG(0x4200180e, uint8_t)
#define SC4_USART_INTFLAG_s	MMIO_REG(0x4200180e, struct __struct_SC_USART_INTFLAG)

#define SC4_USART_STATUS  	MMIO_REG(0x42001810, uint16_t)
#define SC4_USART_STATUS_s	MMIO_REG(0x42001810, struct __struct_SC_USART_STATUS)

#define SC4_USART_DATA  	MMIO_REG(0x42001818, uint16_t)
#define SC4_USART_DATA_s	MMIO_REG(0x42001818, struct __struct_SC_USART_DATA)


// SC4_SPI

#define SC4_SPI_BASE_ADDR	0x42001800

#define SC4_SPI_CTRLA  	MMIO_REG(0x42001800, uint32_t)
#define SC4_SPI_CTRLA_s	MMIO_REG(0x42001800, struct __struct_SC_SPI_CTRLA)

#define SC4_SPI_CTRLB  	MMIO_REG(0x42001804, uint32_t)
#define SC4_SPI_CTRLB_s	MMIO_REG(0x42001804, struct __struct_SC_SPI_CTRLB)

#define SC4_SPI_DBGCTRL  	MMIO_REG(0x42001808, uint8_t)
#define SC4_SPI_DBGCTRL_s	MMIO_REG(0x42001808, struct __struct_SC_SPI_DBGCTRL)

#define SC4_SPI_BAUD  	MMIO_REG(0x4200180a, uint8_t)

#define SC4_SPI_INTENCLR  	MMIO_REG(0x4200180c, uint8_t)
#define SC4_SPI_INTENCLR_s	MMIO_REG(0x4200180c, struct __struct_SC_SPI_INTENCLR)

#define SC4_SPI_INTENSET  	MMIO_REG(0x4200180d, uint8_t)
#define SC4_SPI_INTENSET_s	MMIO_REG(0x4200180d, struct __struct_SC_SPI_INTENSET)

#define SC4_SPI_INTFLAG  	MMIO_REG(0x4200180e, uint8_t)
#define SC4_SPI_INTFLAG_s	MMIO_REG(0x4200180e, struct __struct_SC_SPI_INTFLAG)

#define SC4_SPI_STATUS  	MMIO_REG(0x42001810, uint16_t)
#define SC4_SPI_STATUS_s	MMIO_REG(0x42001810, struct __struct_SC_SPI_STATUS)

#define SC4_SPI_ADDR  	MMIO_REG(0x42001814, uint32_t)
#define SC4_SPI_ADDR_s	MMIO_REG(0x42001814, struct __struct_SC_SPI_ADDR)

#define SC4_SPI_DATA  	MMIO_REG(0x42001818, uint16_t)
#define SC4_SPI_DATA_s	MMIO_REG(0x42001818, struct __struct_SC_SPI_DATA)


// SC4_I2CS

#define SC4_I2CS_BASE_ADDR	0x42001800

#define SC4_I2CS_CTRLA  	MMIO_REG(0x42001800, uint32_t)
#define SC4_I2CS_CTRLA_s	MMIO_REG(0x42001800, struct __struct_SC_I2CS_CTRLA)

#define SC4_I2CS_CTRLB  	MMIO_REG(0x42001804, uint32_t)
#define SC4_I2CS_CTRLB_s	MMIO_REG(0x42001804, struct __struct_SC_I2CS_CTRLB)

#define SC4_I2CS_INTENCLR  	MMIO_REG(0x4200180c, uint8_t)
#define SC4_I2CS_INTENCLR_s	MMIO_REG(0x4200180c, struct __struct_SC_I2CS_INTENCLR)

#define SC4_I2CS_INTENSET  	MMIO_REG(0x4200180d, uint8_t)
#define SC4_I2CS_INTENSET_s	MMIO_REG(0x4200180d, struct __struct_SC_I2CS_INTENSET)

#define SC4_I2CS_INTFLAG  	MMIO_REG(0x4200180e, uint8_t)
#define SC4_I2CS_INTFLAG_s	MMIO_REG(0x4200180e, struct __struct_SC_I2CS_INTFLAG)

#define SC4_I2CS_STATUS  	MMIO_REG(0x42001810, uint16_t)
#define SC4_I2CS_STATUS_s	MMIO_REG(0x42001810, struct __struct_SC_I2CS_STATUS)

#define SC4_I2CS_ADDR  	MMIO_REG(0x42001814, uint32_t)
#define SC4_I2CS_ADDR_s	MMIO_REG(0x42001814, struct __struct_SC_I2CS_ADDR)

#define SC4_I2CS_DATA  	MMIO_REG(0x42001818, uint8_t)


// SC4_I2CM

#define SC4_I2CM_BASE_ADDR	0x42001800

#define SC4_I2CM_CTRLA  	MMIO_REG(0x42001800, uint32_t)
#define SC4_I2CM_CTRLA_s	MMIO_REG(0x42001800, struct __struct_SC_I2CM_CTRLA)

#define SC4_I2CM_CTRLB  	MMIO_REG(0x42001804, uint32_t)
#define SC4_I2CM_CTRLB_s	MMIO_REG(0x42001804, struct __struct_SC_I2CM_CTRLB)

#define SC4_I2CM_DBGCTRL  	MMIO_REG(0x42001808, uint8_t)
#define SC4_I2CM_DBGCTRL_s	MMIO_REG(0x42001808, struct __struct_SC_I2CM_DBGCTRL)

#define SC4_I2CM_BAUD  	MMIO_REG(0x4200180a, uint16_t)
#define SC4_I2CM_BAUD_s	MMIO_REG(0x4200180a, struct __struct_SC_I2CM_BAUD)

#define SC4_I2CM_INTENCLR  	MMIO_REG(0x4200180c, uint8_t)
#define SC4_I2CM_INTENCLR_s	MMIO_REG(0x4200180c, struct __struct_SC_I2CM_INTENCLR)

#define SC4_I2CM_INTENSET  	MMIO_REG(0x4200180d, uint8_t)
#define SC4_I2CM_INTENSET_s	MMIO_REG(0x4200180d, struct __struct_SC_I2CM_INTENSET)

#define SC4_I2CM_INTFLAG  	MMIO_REG(0x4200180e, uint8_t)
#define SC4_I2CM_INTFLAG_s	MMIO_REG(0x4200180e, struct __struct_SC_I2CM_INTFLAG)

#define SC4_I2CM_STATUS  	MMIO_REG(0x42001810, uint16_t)
#define SC4_I2CM_STATUS_s	MMIO_REG(0x42001810, struct __struct_SC_I2CM_STATUS)

#define SC4_I2CM_ADDR  	MMIO_REG(0x42001814, uint8_t)

#define SC4_I2CM_DATA  	MMIO_REG(0x42001818, uint8_t)


// SC5_USART

#define SC5_USART_BASE_ADDR	0x42001c00

#define SC5_USART_CTRLA  	MMIO_REG(0x42001c00, uint32_t)
#define SC5_USART_CTRLA_s	MMIO_REG(0x42001c00, struct __struct_SC_USART_CTRLA)

#define SC5_USART_CTRLB  	MMIO_REG(0x42001c04, uint32_t)
#define SC5_USART_CTRLB_s	MMIO_REG(0x42001c04, struct __struct_SC_USART_CTRLB)

#define SC5_USART_DBGCTRL  	MMIO_REG(0x42001c08, uint8_t)
#define SC5_USART_DBGCTRL_s	MMIO_REG(0x42001c08, struct __struct_SC_USART_DBGCTRL)

#define SC5_USART_BAUD  	MMIO_REG(0x42001c0a, uint16_t)

#define SC5_USART_INTENCLR  	MMIO_REG(0x42001c0c, uint8_t)
#define SC5_USART_INTENCLR_s	MMIO_REG(0x42001c0c, struct __struct_SC_USART_INTENCLR)

#define SC5_USART_INTENSET  	MMIO_REG(0x42001c0d, uint8_t)
#define SC5_USART_INTENSET_s	MMIO_REG(0x42001c0d, struct __struct_SC_USART_INTENSET)

#define SC5_USART_INTFLAG  	MMIO_REG(0x42001c0e, uint8_t)
#define SC5_USART_INTFLAG_s	MMIO_REG(0x42001c0e, struct __struct_SC_USART_INTFLAG)

#define SC5_USART_STATUS  	MMIO_REG(0x42001c10, uint16_t)
#define SC5_USART_STATUS_s	MMIO_REG(0x42001c10, struct __struct_SC_USART_STATUS)

#define SC5_USART_DATA  	MMIO_REG(0x42001c18, uint16_t)
#define SC5_USART_DATA_s	MMIO_REG(0x42001c18, struct __struct_SC_USART_DATA)


// SC5_SPI

#define SC5_SPI_BASE_ADDR	0x42001c00

#define SC5_SPI_CTRLA  	MMIO_REG(0x42001c00, uint32_t)
#define SC5_SPI_CTRLA_s	MMIO_REG(0x42001c00, struct __struct_SC_SPI_CTRLA)

#define SC5_SPI_CTRLB  	MMIO_REG(0x42001c04, uint32_t)
#define SC5_SPI_CTRLB_s	MMIO_REG(0x42001c04, struct __struct_SC_SPI_CTRLB)

#define SC5_SPI_DBGCTRL  	MMIO_REG(0x42001c08, uint8_t)
#define SC5_SPI_DBGCTRL_s	MMIO_REG(0x42001c08, struct __struct_SC_SPI_DBGCTRL)

#define SC5_SPI_BAUD  	MMIO_REG(0x42001c0a, uint8_t)

#define SC5_SPI_INTENCLR  	MMIO_REG(0x42001c0c, uint8_t)
#define SC5_SPI_INTENCLR_s	MMIO_REG(0x42001c0c, struct __struct_SC_SPI_INTENCLR)

#define SC5_SPI_INTENSET  	MMIO_REG(0x42001c0d, uint8_t)
#define SC5_SPI_INTENSET_s	MMIO_REG(0x42001c0d, struct __struct_SC_SPI_INTENSET)

#define SC5_SPI_INTFLAG  	MMIO_REG(0x42001c0e, uint8_t)
#define SC5_SPI_INTFLAG_s	MMIO_REG(0x42001c0e, struct __struct_SC_SPI_INTFLAG)

#define SC5_SPI_STATUS  	MMIO_REG(0x42001c10, uint16_t)
#define SC5_SPI_STATUS_s	MMIO_REG(0x42001c10, struct __struct_SC_SPI_STATUS)

#define SC5_SPI_ADDR  	MMIO_REG(0x42001c14, uint32_t)
#define SC5_SPI_ADDR_s	MMIO_REG(0x42001c14, struct __struct_SC_SPI_ADDR)

#define SC5_SPI_DATA  	MMIO_REG(0x42001c18, uint16_t)
#define SC5_SPI_DATA_s	MMIO_REG(0x42001c18, struct __struct_SC_SPI_DATA)


// SC5_I2CS

#define SC5_I2CS_BASE_ADDR	0x42001c00

#define SC5_I2CS_CTRLA  	MMIO_REG(0x42001c00, uint32_t)
#define SC5_I2CS_CTRLA_s	MMIO_REG(0x42001c00, struct __struct_SC_I2CS_CTRLA)

#define SC5_I2CS_CTRLB  	MMIO_REG(0x42001c04, uint32_t)
#define SC5_I2CS_CTRLB_s	MMIO_REG(0x42001c04, struct __struct_SC_I2CS_CTRLB)

#define SC5_I2CS_INTENCLR  	MMIO_REG(0x42001c0c, uint8_t)
#define SC5_I2CS_INTENCLR_s	MMIO_REG(0x42001c0c, struct __struct_SC_I2CS_INTENCLR)

#define SC5_I2CS_INTENSET  	MMIO_REG(0x42001c0d, uint8_t)
#define SC5_I2CS_INTENSET_s	MMIO_REG(0x42001c0d, struct __struct_SC_I2CS_INTENSET)

#define SC5_I2CS_INTFLAG  	MMIO_REG(0x42001c0e, uint8_t)
#define SC5_I2CS_INTFLAG_s	MMIO_REG(0x42001c0e, struct __struct_SC_I2CS_INTFLAG)

#define SC5_I2CS_STATUS  	MMIO_REG(0x42001c10, uint16_t)
#define SC5_I2CS_STATUS_s	MMIO_REG(0x42001c10, struct __struct_SC_I2CS_STATUS)

#define SC5_I2CS_ADDR  	MMIO_REG(0x42001c14, uint32_t)
#define SC5_I2CS_ADDR_s	MMIO_REG(0x42001c14, struct __struct_SC_I2CS_ADDR)

#define SC5_I2CS_DATA  	MMIO_REG(0x42001c18, uint8_t)


// SC5_I2CM

#define SC5_I2CM_BASE_ADDR	0x42001c00

#define SC5_I2CM_CTRLA  	MMIO_REG(0x42001c00, uint32_t)
#define SC5_I2CM_CTRLA_s	MMIO_REG(0x42001c00, struct __struct_SC_I2CM_CTRLA)

#define SC5_I2CM_CTRLB  	MMIO_REG(0x42001c04, uint32_t)
#define SC5_I2CM_CTRLB_s	MMIO_REG(0x42001c04, struct __struct_SC_I2CM_CTRLB)

#define SC5_I2CM_DBGCTRL  	MMIO_REG(0x42001c08, uint8_t)
#define SC5_I2CM_DBGCTRL_s	MMIO_REG(0x42001c08, struct __struct_SC_I2CM_DBGCTRL)

#define SC5_I2CM_BAUD  	MMIO_REG(0x42001c0a, uint16_t)
#define SC5_I2CM_BAUD_s	MMIO_REG(0x42001c0a, struct __struct_SC_I2CM_BAUD)

#define SC5_I2CM_INTENCLR  	MMIO_REG(0x42001c0c, uint8_t)
#define SC5_I2CM_INTENCLR_s	MMIO_REG(0x42001c0c, struct __struct_SC_I2CM_INTENCLR)

#define SC5_I2CM_INTENSET  	MMIO_REG(0x42001c0d, uint8_t)
#define SC5_I2CM_INTENSET_s	MMIO_REG(0x42001c0d, struct __struct_SC_I2CM_INTENSET)

#define SC5_I2CM_INTFLAG  	MMIO_REG(0x42001c0e, uint8_t)
#define SC5_I2CM_INTFLAG_s	MMIO_REG(0x42001c0e, struct __struct_SC_I2CM_INTFLAG)

#define SC5_I2CM_STATUS  	MMIO_REG(0x42001c10, uint16_t)
#define SC5_I2CM_STATUS_s	MMIO_REG(0x42001c10, struct __struct_SC_I2CM_STATUS)

#define SC5_I2CM_ADDR  	MMIO_REG(0x42001c14, uint8_t)

#define SC5_I2CM_DATA  	MMIO_REG(0x42001c18, uint8_t)


// TC0_8

#define TC0_8_BASE_ADDR	0x42002000

#define TC0_8_CTRLA  	MMIO_REG(0x42002000, uint16_t)
#define TC0_8_CTRLA_s	MMIO_REG(0x42002000, struct __struct_TC_8_CTRLA)

#define TC0_8_READREQ  	MMIO_REG(0x42002002, uint16_t)
#define TC0_8_READREQ_s	MMIO_REG(0x42002002, struct __struct_TC_8_READREQ)

#define TC0_8_CTRLBCLR  	MMIO_REG(0x42002004, uint8_t)
#define TC0_8_CTRLBCLR_s	MMIO_REG(0x42002004, struct __struct_TC_8_CTRLBCLR)

#define TC0_8_CTRLBSET  	MMIO_REG(0x42002005, uint8_t)
#define TC0_8_CTRLBSET_s	MMIO_REG(0x42002005, struct __struct_TC_8_CTRLBSET)

#define TC0_8_CTRLC  	MMIO_REG(0x42002006, uint8_t)
#define TC0_8_CTRLC_s	MMIO_REG(0x42002006, struct __struct_TC_8_CTRLC)

#define TC0_8_DBGCTRL  	MMIO_REG(0x42002008, uint8_t)
#define TC0_8_DBGCTRL_s	MMIO_REG(0x42002008, struct __struct_TC_8_DBGCTRL)

#define TC0_8_EVCTRL  	MMIO_REG(0x4200200a, uint16_t)
#define TC0_8_EVCTRL_s	MMIO_REG(0x4200200a, struct __struct_TC_8_EVCTRL)

#define TC0_8_INTENCLR  	MMIO_REG(0x4200200c, uint8_t)
#define TC0_8_INTENCLR_s	MMIO_REG(0x4200200c, struct __struct_TC_8_INTENCLR)

#define TC0_8_INTENSET  	MMIO_REG(0x4200200d, uint8_t)
#define TC0_8_INTENSET_s	MMIO_REG(0x4200200d, struct __struct_TC_8_INTENSET)

#define TC0_8_INTFLAG  	MMIO_REG(0x4200200e, uint8_t)
#define TC0_8_INTFLAG_s	MMIO_REG(0x4200200e, struct __struct_TC_8_INTFLAG)

#define TC0_8_STATUS  	MMIO_REG(0x4200200f, uint8_t)
#define TC0_8_STATUS_s	MMIO_REG(0x4200200f, struct __struct_TC_8_STATUS)

#define TC0_8_COUNT  	MMIO_REG(0x42002010, uint8_t)

#define TC0_8_PER  	MMIO_REG(0x42002014, uint8_t)

#define TC0_8_CC(i)  	MMIO_REG(0x42002018 + (i)*1, uint8_t)


// TC0_16

#define TC0_16_BASE_ADDR	0x42002000

#define TC0_16_CTRLA  	MMIO_REG(0x42002000, uint16_t)
#define TC0_16_CTRLA_s	MMIO_REG(0x42002000, struct __struct_TC_16_CTRLA)

#define TC0_16_READREQ  	MMIO_REG(0x42002002, uint16_t)
#define TC0_16_READREQ_s	MMIO_REG(0x42002002, struct __struct_TC_16_READREQ)

#define TC0_16_CTRLBCLR  	MMIO_REG(0x42002004, uint8_t)
#define TC0_16_CTRLBCLR_s	MMIO_REG(0x42002004, struct __struct_TC_16_CTRLBCLR)

#define TC0_16_CTRLBSET  	MMIO_REG(0x42002005, uint8_t)
#define TC0_16_CTRLBSET_s	MMIO_REG(0x42002005, struct __struct_TC_16_CTRLBSET)

#define TC0_16_CTRLC  	MMIO_REG(0x42002006, uint8_t)
#define TC0_16_CTRLC_s	MMIO_REG(0x42002006, struct __struct_TC_16_CTRLC)

#define TC0_16_DBGCTRL  	MMIO_REG(0x42002008, uint8_t)
#define TC0_16_DBGCTRL_s	MMIO_REG(0x42002008, struct __struct_TC_16_DBGCTRL)

#define TC0_16_EVCTRL  	MMIO_REG(0x4200200a, uint16_t)
#define TC0_16_EVCTRL_s	MMIO_REG(0x4200200a, struct __struct_TC_16_EVCTRL)

#define TC0_16_INTENCLR  	MMIO_REG(0x4200200c, uint8_t)
#define TC0_16_INTENCLR_s	MMIO_REG(0x4200200c, struct __struct_TC_16_INTENCLR)

#define TC0_16_INTENSET  	MMIO_REG(0x4200200d, uint8_t)
#define TC0_16_INTENSET_s	MMIO_REG(0x4200200d, struct __struct_TC_16_INTENSET)

#define TC0_16_INTFLAG  	MMIO_REG(0x4200200e, uint8_t)
#define TC0_16_INTFLAG_s	MMIO_REG(0x4200200e, struct __struct_TC_16_INTFLAG)

#define TC0_16_STATUS  	MMIO_REG(0x4200200f, uint8_t)
#define TC0_16_STATUS_s	MMIO_REG(0x4200200f, struct __struct_TC_16_STATUS)

#define TC0_16_COUNT  	MMIO_REG(0x42002010, uint16_t)

#define TC0_16_CC(i)  	MMIO_REG(0x42002018 + (i)*2, uint16_t)


// TC0_32

#define TC0_32_BASE_ADDR	0x42002000

#define TC0_32_CTRLA  	MMIO_REG(0x42002000, uint16_t)
#define TC0_32_CTRLA_s	MMIO_REG(0x42002000, struct __struct_TC_32_CTRLA)

#define TC0_32_READREQ  	MMIO_REG(0x42002002, uint16_t)
#define TC0_32_READREQ_s	MMIO_REG(0x42002002, struct __struct_TC_32_READREQ)

#define TC0_32_CTRLBCLR  	MMIO_REG(0x42002004, uint8_t)
#define TC0_32_CTRLBCLR_s	MMIO_REG(0x42002004, struct __struct_TC_32_CTRLBCLR)

#define TC0_32_CTRLBSET  	MMIO_REG(0x42002005, uint8_t)
#define TC0_32_CTRLBSET_s	MMIO_REG(0x42002005, struct __struct_TC_32_CTRLBSET)

#define TC0_32_CTRLC  	MMIO_REG(0x42002006, uint8_t)
#define TC0_32_CTRLC_s	MMIO_REG(0x42002006, struct __struct_TC_32_CTRLC)

#define TC0_32_DBGCTRL  	MMIO_REG(0x42002008, uint8_t)
#define TC0_32_DBGCTRL_s	MMIO_REG(0x42002008, struct __struct_TC_32_DBGCTRL)

#define TC0_32_EVCTRL  	MMIO_REG(0x4200200a, uint16_t)
#define TC0_32_EVCTRL_s	MMIO_REG(0x4200200a, struct __struct_TC_32_EVCTRL)

#define TC0_32_INTENCLR  	MMIO_REG(0x4200200c, uint8_t)
#define TC0_32_INTENCLR_s	MMIO_REG(0x4200200c, struct __struct_TC_32_INTENCLR)

#define TC0_32_INTENSET  	MMIO_REG(0x4200200d, uint8_t)
#define TC0_32_INTENSET_s	MMIO_REG(0x4200200d, struct __struct_TC_32_INTENSET)

#define TC0_32_INTFLAG  	MMIO_REG(0x4200200e, uint8_t)
#define TC0_32_INTFLAG_s	MMIO_REG(0x4200200e, struct __struct_TC_32_INTFLAG)

#define TC0_32_STATUS  	MMIO_REG(0x4200200f, uint8_t)
#define TC0_32_STATUS_s	MMIO_REG(0x4200200f, struct __struct_TC_32_STATUS)

#define TC0_32_COUNT  	MMIO_REG(0x42002010, uint32_t)

#define TC0_32_CC(i)  	MMIO_REG(0x42002018 + (i)*4, uint32_t)


// TC1_8

#define TC1_8_BASE_ADDR	0x42002400

#define TC1_8_CTRLA  	MMIO_REG(0x42002400, uint16_t)
#define TC1_8_CTRLA_s	MMIO_REG(0x42002400, struct __struct_TC_8_CTRLA)

#define TC1_8_READREQ  	MMIO_REG(0x42002402, uint16_t)
#define TC1_8_READREQ_s	MMIO_REG(0x42002402, struct __struct_TC_8_READREQ)

#define TC1_8_CTRLBCLR  	MMIO_REG(0x42002404, uint8_t)
#define TC1_8_CTRLBCLR_s	MMIO_REG(0x42002404, struct __struct_TC_8_CTRLBCLR)

#define TC1_8_CTRLBSET  	MMIO_REG(0x42002405, uint8_t)
#define TC1_8_CTRLBSET_s	MMIO_REG(0x42002405, struct __struct_TC_8_CTRLBSET)

#define TC1_8_CTRLC  	MMIO_REG(0x42002406, uint8_t)
#define TC1_8_CTRLC_s	MMIO_REG(0x42002406, struct __struct_TC_8_CTRLC)

#define TC1_8_DBGCTRL  	MMIO_REG(0x42002408, uint8_t)
#define TC1_8_DBGCTRL_s	MMIO_REG(0x42002408, struct __struct_TC_8_DBGCTRL)

#define TC1_8_EVCTRL  	MMIO_REG(0x4200240a, uint16_t)
#define TC1_8_EVCTRL_s	MMIO_REG(0x4200240a, struct __struct_TC_8_EVCTRL)

#define TC1_8_INTENCLR  	MMIO_REG(0x4200240c, uint8_t)
#define TC1_8_INTENCLR_s	MMIO_REG(0x4200240c, struct __struct_TC_8_INTENCLR)

#define TC1_8_INTENSET  	MMIO_REG(0x4200240d, uint8_t)
#define TC1_8_INTENSET_s	MMIO_REG(0x4200240d, struct __struct_TC_8_INTENSET)

#define TC1_8_INTFLAG  	MMIO_REG(0x4200240e, uint8_t)
#define TC1_8_INTFLAG_s	MMIO_REG(0x4200240e, struct __struct_TC_8_INTFLAG)

#define TC1_8_STATUS  	MMIO_REG(0x4200240f, uint8_t)
#define TC1_8_STATUS_s	MMIO_REG(0x4200240f, struct __struct_TC_8_STATUS)

#define TC1_8_COUNT  	MMIO_REG(0x42002410, uint8_t)

#define TC1_8_PER  	MMIO_REG(0x42002414, uint8_t)

#define TC1_8_CC(i)  	MMIO_REG(0x42002418 + (i)*1, uint8_t)


// TC1_16

#define TC1_16_BASE_ADDR	0x42002400

#define TC1_16_CTRLA  	MMIO_REG(0x42002400, uint16_t)
#define TC1_16_CTRLA_s	MMIO_REG(0x42002400, struct __struct_TC_16_CTRLA)

#define TC1_16_READREQ  	MMIO_REG(0x42002402, uint16_t)
#define TC1_16_READREQ_s	MMIO_REG(0x42002402, struct __struct_TC_16_READREQ)

#define TC1_16_CTRLBCLR  	MMIO_REG(0x42002404, uint8_t)
#define TC1_16_CTRLBCLR_s	MMIO_REG(0x42002404, struct __struct_TC_16_CTRLBCLR)

#define TC1_16_CTRLBSET  	MMIO_REG(0x42002405, uint8_t)
#define TC1_16_CTRLBSET_s	MMIO_REG(0x42002405, struct __struct_TC_16_CTRLBSET)

#define TC1_16_CTRLC  	MMIO_REG(0x42002406, uint8_t)
#define TC1_16_CTRLC_s	MMIO_REG(0x42002406, struct __struct_TC_16_CTRLC)

#define TC1_16_DBGCTRL  	MMIO_REG(0x42002408, uint8_t)
#define TC1_16_DBGCTRL_s	MMIO_REG(0x42002408, struct __struct_TC_16_DBGCTRL)

#define TC1_16_EVCTRL  	MMIO_REG(0x4200240a, uint16_t)
#define TC1_16_EVCTRL_s	MMIO_REG(0x4200240a, struct __struct_TC_16_EVCTRL)

#define TC1_16_INTENCLR  	MMIO_REG(0x4200240c, uint8_t)
#define TC1_16_INTENCLR_s	MMIO_REG(0x4200240c, struct __struct_TC_16_INTENCLR)

#define TC1_16_INTENSET  	MMIO_REG(0x4200240d, uint8_t)
#define TC1_16_INTENSET_s	MMIO_REG(0x4200240d, struct __struct_TC_16_INTENSET)

#define TC1_16_INTFLAG  	MMIO_REG(0x4200240e, uint8_t)
#define TC1_16_INTFLAG_s	MMIO_REG(0x4200240e, struct __struct_TC_16_INTFLAG)

#define TC1_16_STATUS  	MMIO_REG(0x4200240f, uint8_t)
#define TC1_16_STATUS_s	MMIO_REG(0x4200240f, struct __struct_TC_16_STATUS)

#define TC1_16_COUNT  	MMIO_REG(0x42002410, uint16_t)

#define TC1_16_CC(i)  	MMIO_REG(0x42002418 + (i)*2, uint16_t)


// TC1_32

#define TC1_32_BASE_ADDR	0x42002400

#define TC1_32_CTRLA  	MMIO_REG(0x42002400, uint16_t)
#define TC1_32_CTRLA_s	MMIO_REG(0x42002400, struct __struct_TC_32_CTRLA)

#define TC1_32_READREQ  	MMIO_REG(0x42002402, uint16_t)
#define TC1_32_READREQ_s	MMIO_REG(0x42002402, struct __struct_TC_32_READREQ)

#define TC1_32_CTRLBCLR  	MMIO_REG(0x42002404, uint8_t)
#define TC1_32_CTRLBCLR_s	MMIO_REG(0x42002404, struct __struct_TC_32_CTRLBCLR)

#define TC1_32_CTRLBSET  	MMIO_REG(0x42002405, uint8_t)
#define TC1_32_CTRLBSET_s	MMIO_REG(0x42002405, struct __struct_TC_32_CTRLBSET)

#define TC1_32_CTRLC  	MMIO_REG(0x42002406, uint8_t)
#define TC1_32_CTRLC_s	MMIO_REG(0x42002406, struct __struct_TC_32_CTRLC)

#define TC1_32_DBGCTRL  	MMIO_REG(0x42002408, uint8_t)
#define TC1_32_DBGCTRL_s	MMIO_REG(0x42002408, struct __struct_TC_32_DBGCTRL)

#define TC1_32_EVCTRL  	MMIO_REG(0x4200240a, uint16_t)
#define TC1_32_EVCTRL_s	MMIO_REG(0x4200240a, struct __struct_TC_32_EVCTRL)

#define TC1_32_INTENCLR  	MMIO_REG(0x4200240c, uint8_t)
#define TC1_32_INTENCLR_s	MMIO_REG(0x4200240c, struct __struct_TC_32_INTENCLR)

#define TC1_32_INTENSET  	MMIO_REG(0x4200240d, uint8_t)
#define TC1_32_INTENSET_s	MMIO_REG(0x4200240d, struct __struct_TC_32_INTENSET)

#define TC1_32_INTFLAG  	MMIO_REG(0x4200240e, uint8_t)
#define TC1_32_INTFLAG_s	MMIO_REG(0x4200240e, struct __struct_TC_32_INTFLAG)

#define TC1_32_STATUS  	MMIO_REG(0x4200240f, uint8_t)
#define TC1_32_STATUS_s	MMIO_REG(0x4200240f, struct __struct_TC_32_STATUS)

#define TC1_32_COUNT  	MMIO_REG(0x42002410, uint32_t)

#define TC1_32_CC(i)  	MMIO_REG(0x42002418 + (i)*4, uint32_t)


// TC2_8

#define TC2_8_BASE_ADDR	0x42002800

#define TC2_8_CTRLA  	MMIO_REG(0x42002800, uint16_t)
#define TC2_8_CTRLA_s	MMIO_REG(0x42002800, struct __struct_TC_8_CTRLA)

#define TC2_8_READREQ  	MMIO_REG(0x42002802, uint16_t)
#define TC2_8_READREQ_s	MMIO_REG(0x42002802, struct __struct_TC_8_READREQ)

#define TC2_8_CTRLBCLR  	MMIO_REG(0x42002804, uint8_t)
#define TC2_8_CTRLBCLR_s	MMIO_REG(0x42002804, struct __struct_TC_8_CTRLBCLR)

#define TC2_8_CTRLBSET  	MMIO_REG(0x42002805, uint8_t)
#define TC2_8_CTRLBSET_s	MMIO_REG(0x42002805, struct __struct_TC_8_CTRLBSET)

#define TC2_8_CTRLC  	MMIO_REG(0x42002806, uint8_t)
#define TC2_8_CTRLC_s	MMIO_REG(0x42002806, struct __struct_TC_8_CTRLC)

#define TC2_8_DBGCTRL  	MMIO_REG(0x42002808, uint8_t)
#define TC2_8_DBGCTRL_s	MMIO_REG(0x42002808, struct __struct_TC_8_DBGCTRL)

#define TC2_8_EVCTRL  	MMIO_REG(0x4200280a, uint16_t)
#define TC2_8_EVCTRL_s	MMIO_REG(0x4200280a, struct __struct_TC_8_EVCTRL)

#define TC2_8_INTENCLR  	MMIO_REG(0x4200280c, uint8_t)
#define TC2_8_INTENCLR_s	MMIO_REG(0x4200280c, struct __struct_TC_8_INTENCLR)

#define TC2_8_INTENSET  	MMIO_REG(0x4200280d, uint8_t)
#define TC2_8_INTENSET_s	MMIO_REG(0x4200280d, struct __struct_TC_8_INTENSET)

#define TC2_8_INTFLAG  	MMIO_REG(0x4200280e, uint8_t)
#define TC2_8_INTFLAG_s	MMIO_REG(0x4200280e, struct __struct_TC_8_INTFLAG)

#define TC2_8_STATUS  	MMIO_REG(0x4200280f, uint8_t)
#define TC2_8_STATUS_s	MMIO_REG(0x4200280f, struct __struct_TC_8_STATUS)

#define TC2_8_COUNT  	MMIO_REG(0x42002810, uint8_t)

#define TC2_8_PER  	MMIO_REG(0x42002814, uint8_t)

#define TC2_8_CC(i)  	MMIO_REG(0x42002818 + (i)*1, uint8_t)


// TC2_16

#define TC2_16_BASE_ADDR	0x42002800

#define TC2_16_CTRLA  	MMIO_REG(0x42002800, uint16_t)
#define TC2_16_CTRLA_s	MMIO_REG(0x42002800, struct __struct_TC_16_CTRLA)

#define TC2_16_READREQ  	MMIO_REG(0x42002802, uint16_t)
#define TC2_16_READREQ_s	MMIO_REG(0x42002802, struct __struct_TC_16_READREQ)

#define TC2_16_CTRLBCLR  	MMIO_REG(0x42002804, uint8_t)
#define TC2_16_CTRLBCLR_s	MMIO_REG(0x42002804, struct __struct_TC_16_CTRLBCLR)

#define TC2_16_CTRLBSET  	MMIO_REG(0x42002805, uint8_t)
#define TC2_16_CTRLBSET_s	MMIO_REG(0x42002805, struct __struct_TC_16_CTRLBSET)

#define TC2_16_CTRLC  	MMIO_REG(0x42002806, uint8_t)
#define TC2_16_CTRLC_s	MMIO_REG(0x42002806, struct __struct_TC_16_CTRLC)

#define TC2_16_DBGCTRL  	MMIO_REG(0x42002808, uint8_t)
#define TC2_16_DBGCTRL_s	MMIO_REG(0x42002808, struct __struct_TC_16_DBGCTRL)

#define TC2_16_EVCTRL  	MMIO_REG(0x4200280a, uint16_t)
#define TC2_16_EVCTRL_s	MMIO_REG(0x4200280a, struct __struct_TC_16_EVCTRL)

#define TC2_16_INTENCLR  	MMIO_REG(0x4200280c, uint8_t)
#define TC2_16_INTENCLR_s	MMIO_REG(0x4200280c, struct __struct_TC_16_INTENCLR)

#define TC2_16_INTENSET  	MMIO_REG(0x4200280d, uint8_t)
#define TC2_16_INTENSET_s	MMIO_REG(0x4200280d, struct __struct_TC_16_INTENSET)

#define TC2_16_INTFLAG  	MMIO_REG(0x4200280e, uint8_t)
#define TC2_16_INTFLAG_s	MMIO_REG(0x4200280e, struct __struct_TC_16_INTFLAG)

#define TC2_16_STATUS  	MMIO_REG(0x4200280f, uint8_t)
#define TC2_16_STATUS_s	MMIO_REG(0x4200280f, struct __struct_TC_16_STATUS)

#define TC2_16_COUNT  	MMIO_REG(0x42002810, uint16_t)

#define TC2_16_CC(i)  	MMIO_REG(0x42002818 + (i)*2, uint16_t)


// TC2_32

#define TC2_32_BASE_ADDR	0x42002800

#define TC2_32_CTRLA  	MMIO_REG(0x42002800, uint16_t)
#define TC2_32_CTRLA_s	MMIO_REG(0x42002800, struct __struct_TC_32_CTRLA)

#define TC2_32_READREQ  	MMIO_REG(0x42002802, uint16_t)
#define TC2_32_READREQ_s	MMIO_REG(0x42002802, struct __struct_TC_32_READREQ)

#define TC2_32_CTRLBCLR  	MMIO_REG(0x42002804, uint8_t)
#define TC2_32_CTRLBCLR_s	MMIO_REG(0x42002804, struct __struct_TC_32_CTRLBCLR)

#define TC2_32_CTRLBSET  	MMIO_REG(0x42002805, uint8_t)
#define TC2_32_CTRLBSET_s	MMIO_REG(0x42002805, struct __struct_TC_32_CTRLBSET)

#define TC2_32_CTRLC  	MMIO_REG(0x42002806, uint8_t)
#define TC2_32_CTRLC_s	MMIO_REG(0x42002806, struct __struct_TC_32_CTRLC)

#define TC2_32_DBGCTRL  	MMIO_REG(0x42002808, uint8_t)
#define TC2_32_DBGCTRL_s	MMIO_REG(0x42002808, struct __struct_TC_32_DBGCTRL)

#define TC2_32_EVCTRL  	MMIO_REG(0x4200280a, uint16_t)
#define TC2_32_EVCTRL_s	MMIO_REG(0x4200280a, struct __struct_TC_32_EVCTRL)

#define TC2_32_INTENCLR  	MMIO_REG(0x4200280c, uint8_t)
#define TC2_32_INTENCLR_s	MMIO_REG(0x4200280c, struct __struct_TC_32_INTENCLR)

#define TC2_32_INTENSET  	MMIO_REG(0x4200280d, uint8_t)
#define TC2_32_INTENSET_s	MMIO_REG(0x4200280d, struct __struct_TC_32_INTENSET)

#define TC2_32_INTFLAG  	MMIO_REG(0x4200280e, uint8_t)
#define TC2_32_INTFLAG_s	MMIO_REG(0x4200280e, struct __struct_TC_32_INTFLAG)

#define TC2_32_STATUS  	MMIO_REG(0x4200280f, uint8_t)
#define TC2_32_STATUS_s	MMIO_REG(0x4200280f, struct __struct_TC_32_STATUS)

#define TC2_32_COUNT  	MMIO_REG(0x42002810, uint32_t)

#define TC2_32_CC(i)  	MMIO_REG(0x42002818 + (i)*4, uint32_t)


// TC3_8

#define TC3_8_BASE_ADDR	0x42002c00

#define TC3_8_CTRLA  	MMIO_REG(0x42002c00, uint16_t)
#define TC3_8_CTRLA_s	MMIO_REG(0x42002c00, struct __struct_TC_8_CTRLA)

#define TC3_8_READREQ  	MMIO_REG(0x42002c02, uint16_t)
#define TC3_8_READREQ_s	MMIO_REG(0x42002c02, struct __struct_TC_8_READREQ)

#define TC3_8_CTRLBCLR  	MMIO_REG(0x42002c04, uint8_t)
#define TC3_8_CTRLBCLR_s	MMIO_REG(0x42002c04, struct __struct_TC_8_CTRLBCLR)

#define TC3_8_CTRLBSET  	MMIO_REG(0x42002c05, uint8_t)
#define TC3_8_CTRLBSET_s	MMIO_REG(0x42002c05, struct __struct_TC_8_CTRLBSET)

#define TC3_8_CTRLC  	MMIO_REG(0x42002c06, uint8_t)
#define TC3_8_CTRLC_s	MMIO_REG(0x42002c06, struct __struct_TC_8_CTRLC)

#define TC3_8_DBGCTRL  	MMIO_REG(0x42002c08, uint8_t)
#define TC3_8_DBGCTRL_s	MMIO_REG(0x42002c08, struct __struct_TC_8_DBGCTRL)

#define TC3_8_EVCTRL  	MMIO_REG(0x42002c0a, uint16_t)
#define TC3_8_EVCTRL_s	MMIO_REG(0x42002c0a, struct __struct_TC_8_EVCTRL)

#define TC3_8_INTENCLR  	MMIO_REG(0x42002c0c, uint8_t)
#define TC3_8_INTENCLR_s	MMIO_REG(0x42002c0c, struct __struct_TC_8_INTENCLR)

#define TC3_8_INTENSET  	MMIO_REG(0x42002c0d, uint8_t)
#define TC3_8_INTENSET_s	MMIO_REG(0x42002c0d, struct __struct_TC_8_INTENSET)

#define TC3_8_INTFLAG  	MMIO_REG(0x42002c0e, uint8_t)
#define TC3_8_INTFLAG_s	MMIO_REG(0x42002c0e, struct __struct_TC_8_INTFLAG)

#define TC3_8_STATUS  	MMIO_REG(0x42002c0f, uint8_t)
#define TC3_8_STATUS_s	MMIO_REG(0x42002c0f, struct __struct_TC_8_STATUS)

#define TC3_8_COUNT  	MMIO_REG(0x42002c10, uint8_t)

#define TC3_8_PER  	MMIO_REG(0x42002c14, uint8_t)

#define TC3_8_CC(i)  	MMIO_REG(0x42002c18 + (i)*1, uint8_t)


// TC3_16

#define TC3_16_BASE_ADDR	0x42002c00

#define TC3_16_CTRLA  	MMIO_REG(0x42002c00, uint16_t)
#define TC3_16_CTRLA_s	MMIO_REG(0x42002c00, struct __struct_TC_16_CTRLA)

#define TC3_16_READREQ  	MMIO_REG(0x42002c02, uint16_t)
#define TC3_16_READREQ_s	MMIO_REG(0x42002c02, struct __struct_TC_16_READREQ)

#define TC3_16_CTRLBCLR  	MMIO_REG(0x42002c04, uint8_t)
#define TC3_16_CTRLBCLR_s	MMIO_REG(0x42002c04, struct __struct_TC_16_CTRLBCLR)

#define TC3_16_CTRLBSET  	MMIO_REG(0x42002c05, uint8_t)
#define TC3_16_CTRLBSET_s	MMIO_REG(0x42002c05, struct __struct_TC_16_CTRLBSET)

#define TC3_16_CTRLC  	MMIO_REG(0x42002c06, uint8_t)
#define TC3_16_CTRLC_s	MMIO_REG(0x42002c06, struct __struct_TC_16_CTRLC)

#define TC3_16_DBGCTRL  	MMIO_REG(0x42002c08, uint8_t)
#define TC3_16_DBGCTRL_s	MMIO_REG(0x42002c08, struct __struct_TC_16_DBGCTRL)

#define TC3_16_EVCTRL  	MMIO_REG(0x42002c0a, uint16_t)
#define TC3_16_EVCTRL_s	MMIO_REG(0x42002c0a, struct __struct_TC_16_EVCTRL)

#define TC3_16_INTENCLR  	MMIO_REG(0x42002c0c, uint8_t)
#define TC3_16_INTENCLR_s	MMIO_REG(0x42002c0c, struct __struct_TC_16_INTENCLR)

#define TC3_16_INTENSET  	MMIO_REG(0x42002c0d, uint8_t)
#define TC3_16_INTENSET_s	MMIO_REG(0x42002c0d, struct __struct_TC_16_INTENSET)

#define TC3_16_INTFLAG  	MMIO_REG(0x42002c0e, uint8_t)
#define TC3_16_INTFLAG_s	MMIO_REG(0x42002c0e, struct __struct_TC_16_INTFLAG)

#define TC3_16_STATUS  	MMIO_REG(0x42002c0f, uint8_t)
#define TC3_16_STATUS_s	MMIO_REG(0x42002c0f, struct __struct_TC_16_STATUS)

#define TC3_16_COUNT  	MMIO_REG(0x42002c10, uint16_t)

#define TC3_16_CC(i)  	MMIO_REG(0x42002c18 + (i)*2, uint16_t)


// TC3_32

#define TC3_32_BASE_ADDR	0x42002c00

#define TC3_32_CTRLA  	MMIO_REG(0x42002c00, uint16_t)
#define TC3_32_CTRLA_s	MMIO_REG(0x42002c00, struct __struct_TC_32_CTRLA)

#define TC3_32_READREQ  	MMIO_REG(0x42002c02, uint16_t)
#define TC3_32_READREQ_s	MMIO_REG(0x42002c02, struct __struct_TC_32_READREQ)

#define TC3_32_CTRLBCLR  	MMIO_REG(0x42002c04, uint8_t)
#define TC3_32_CTRLBCLR_s	MMIO_REG(0x42002c04, struct __struct_TC_32_CTRLBCLR)

#define TC3_32_CTRLBSET  	MMIO_REG(0x42002c05, uint8_t)
#define TC3_32_CTRLBSET_s	MMIO_REG(0x42002c05, struct __struct_TC_32_CTRLBSET)

#define TC3_32_CTRLC  	MMIO_REG(0x42002c06, uint8_t)
#define TC3_32_CTRLC_s	MMIO_REG(0x42002c06, struct __struct_TC_32_CTRLC)

#define TC3_32_DBGCTRL  	MMIO_REG(0x42002c08, uint8_t)
#define TC3_32_DBGCTRL_s	MMIO_REG(0x42002c08, struct __struct_TC_32_DBGCTRL)

#define TC3_32_EVCTRL  	MMIO_REG(0x42002c0a, uint16_t)
#define TC3_32_EVCTRL_s	MMIO_REG(0x42002c0a, struct __struct_TC_32_EVCTRL)

#define TC3_32_INTENCLR  	MMIO_REG(0x42002c0c, uint8_t)
#define TC3_32_INTENCLR_s	MMIO_REG(0x42002c0c, struct __struct_TC_32_INTENCLR)

#define TC3_32_INTENSET  	MMIO_REG(0x42002c0d, uint8_t)
#define TC3_32_INTENSET_s	MMIO_REG(0x42002c0d, struct __struct_TC_32_INTENSET)

#define TC3_32_INTFLAG  	MMIO_REG(0x42002c0e, uint8_t)
#define TC3_32_INTFLAG_s	MMIO_REG(0x42002c0e, struct __struct_TC_32_INTFLAG)

#define TC3_32_STATUS  	MMIO_REG(0x42002c0f, uint8_t)
#define TC3_32_STATUS_s	MMIO_REG(0x42002c0f, struct __struct_TC_32_STATUS)

#define TC3_32_COUNT  	MMIO_REG(0x42002c10, uint32_t)

#define TC3_32_CC(i)  	MMIO_REG(0x42002c18 + (i)*4, uint32_t)


// TC4_8

#define TC4_8_BASE_ADDR	0x42003000

#define TC4_8_CTRLA  	MMIO_REG(0x42003000, uint16_t)
#define TC4_8_CTRLA_s	MMIO_REG(0x42003000, struct __struct_TC_8_CTRLA)

#define TC4_8_READREQ  	MMIO_REG(0x42003002, uint16_t)
#define TC4_8_READREQ_s	MMIO_REG(0x42003002, struct __struct_TC_8_READREQ)

#define TC4_8_CTRLBCLR  	MMIO_REG(0x42003004, uint8_t)
#define TC4_8_CTRLBCLR_s	MMIO_REG(0x42003004, struct __struct_TC_8_CTRLBCLR)

#define TC4_8_CTRLBSET  	MMIO_REG(0x42003005, uint8_t)
#define TC4_8_CTRLBSET_s	MMIO_REG(0x42003005, struct __struct_TC_8_CTRLBSET)

#define TC4_8_CTRLC  	MMIO_REG(0x42003006, uint8_t)
#define TC4_8_CTRLC_s	MMIO_REG(0x42003006, struct __struct_TC_8_CTRLC)

#define TC4_8_DBGCTRL  	MMIO_REG(0x42003008, uint8_t)
#define TC4_8_DBGCTRL_s	MMIO_REG(0x42003008, struct __struct_TC_8_DBGCTRL)

#define TC4_8_EVCTRL  	MMIO_REG(0x4200300a, uint16_t)
#define TC4_8_EVCTRL_s	MMIO_REG(0x4200300a, struct __struct_TC_8_EVCTRL)

#define TC4_8_INTENCLR  	MMIO_REG(0x4200300c, uint8_t)
#define TC4_8_INTENCLR_s	MMIO_REG(0x4200300c, struct __struct_TC_8_INTENCLR)

#define TC4_8_INTENSET  	MMIO_REG(0x4200300d, uint8_t)
#define TC4_8_INTENSET_s	MMIO_REG(0x4200300d, struct __struct_TC_8_INTENSET)

#define TC4_8_INTFLAG  	MMIO_REG(0x4200300e, uint8_t)
#define TC4_8_INTFLAG_s	MMIO_REG(0x4200300e, struct __struct_TC_8_INTFLAG)

#define TC4_8_STATUS  	MMIO_REG(0x4200300f, uint8_t)
#define TC4_8_STATUS_s	MMIO_REG(0x4200300f, struct __struct_TC_8_STATUS)

#define TC4_8_COUNT  	MMIO_REG(0x42003010, uint8_t)

#define TC4_8_PER  	MMIO_REG(0x42003014, uint8_t)

#define TC4_8_CC(i)  	MMIO_REG(0x42003018 + (i)*1, uint8_t)


// TC4_16

#define TC4_16_BASE_ADDR	0x42003000

#define TC4_16_CTRLA  	MMIO_REG(0x42003000, uint16_t)
#define TC4_16_CTRLA_s	MMIO_REG(0x42003000, struct __struct_TC_16_CTRLA)

#define TC4_16_READREQ  	MMIO_REG(0x42003002, uint16_t)
#define TC4_16_READREQ_s	MMIO_REG(0x42003002, struct __struct_TC_16_READREQ)

#define TC4_16_CTRLBCLR  	MMIO_REG(0x42003004, uint8_t)
#define TC4_16_CTRLBCLR_s	MMIO_REG(0x42003004, struct __struct_TC_16_CTRLBCLR)

#define TC4_16_CTRLBSET  	MMIO_REG(0x42003005, uint8_t)
#define TC4_16_CTRLBSET_s	MMIO_REG(0x42003005, struct __struct_TC_16_CTRLBSET)

#define TC4_16_CTRLC  	MMIO_REG(0x42003006, uint8_t)
#define TC4_16_CTRLC_s	MMIO_REG(0x42003006, struct __struct_TC_16_CTRLC)

#define TC4_16_DBGCTRL  	MMIO_REG(0x42003008, uint8_t)
#define TC4_16_DBGCTRL_s	MMIO_REG(0x42003008, struct __struct_TC_16_DBGCTRL)

#define TC4_16_EVCTRL  	MMIO_REG(0x4200300a, uint16_t)
#define TC4_16_EVCTRL_s	MMIO_REG(0x4200300a, struct __struct_TC_16_EVCTRL)

#define TC4_16_INTENCLR  	MMIO_REG(0x4200300c, uint8_t)
#define TC4_16_INTENCLR_s	MMIO_REG(0x4200300c, struct __struct_TC_16_INTENCLR)

#define TC4_16_INTENSET  	MMIO_REG(0x4200300d, uint8_t)
#define TC4_16_INTENSET_s	MMIO_REG(0x4200300d, struct __struct_TC_16_INTENSET)

#define TC4_16_INTFLAG  	MMIO_REG(0x4200300e, uint8_t)
#define TC4_16_INTFLAG_s	MMIO_REG(0x4200300e, struct __struct_TC_16_INTFLAG)

#define TC4_16_STATUS  	MMIO_REG(0x4200300f, uint8_t)
#define TC4_16_STATUS_s	MMIO_REG(0x4200300f, struct __struct_TC_16_STATUS)

#define TC4_16_COUNT  	MMIO_REG(0x42003010, uint16_t)

#define TC4_16_CC(i)  	MMIO_REG(0x42003018 + (i)*2, uint16_t)


// TC4_32

#define TC4_32_BASE_ADDR	0x42003000

#define TC4_32_CTRLA  	MMIO_REG(0x42003000, uint16_t)
#define TC4_32_CTRLA_s	MMIO_REG(0x42003000, struct __struct_TC_32_CTRLA)

#define TC4_32_READREQ  	MMIO_REG(0x42003002, uint16_t)
#define TC4_32_READREQ_s	MMIO_REG(0x42003002, struct __struct_TC_32_READREQ)

#define TC4_32_CTRLBCLR  	MMIO_REG(0x42003004, uint8_t)
#define TC4_32_CTRLBCLR_s	MMIO_REG(0x42003004, struct __struct_TC_32_CTRLBCLR)

#define TC4_32_CTRLBSET  	MMIO_REG(0x42003005, uint8_t)
#define TC4_32_CTRLBSET_s	MMIO_REG(0x42003005, struct __struct_TC_32_CTRLBSET)

#define TC4_32_CTRLC  	MMIO_REG(0x42003006, uint8_t)
#define TC4_32_CTRLC_s	MMIO_REG(0x42003006, struct __struct_TC_32_CTRLC)

#define TC4_32_DBGCTRL  	MMIO_REG(0x42003008, uint8_t)
#define TC4_32_DBGCTRL_s	MMIO_REG(0x42003008, struct __struct_TC_32_DBGCTRL)

#define TC4_32_EVCTRL  	MMIO_REG(0x4200300a, uint16_t)
#define TC4_32_EVCTRL_s	MMIO_REG(0x4200300a, struct __struct_TC_32_EVCTRL)

#define TC4_32_INTENCLR  	MMIO_REG(0x4200300c, uint8_t)
#define TC4_32_INTENCLR_s	MMIO_REG(0x4200300c, struct __struct_TC_32_INTENCLR)

#define TC4_32_INTENSET  	MMIO_REG(0x4200300d, uint8_t)
#define TC4_32_INTENSET_s	MMIO_REG(0x4200300d, struct __struct_TC_32_INTENSET)

#define TC4_32_INTFLAG  	MMIO_REG(0x4200300e, uint8_t)
#define TC4_32_INTFLAG_s	MMIO_REG(0x4200300e, struct __struct_TC_32_INTFLAG)

#define TC4_32_STATUS  	MMIO_REG(0x4200300f, uint8_t)
#define TC4_32_STATUS_s	MMIO_REG(0x4200300f, struct __struct_TC_32_STATUS)

#define TC4_32_COUNT  	MMIO_REG(0x42003010, uint32_t)

#define TC4_32_CC(i)  	MMIO_REG(0x42003018 + (i)*4, uint32_t)


// TC5_8

#define TC5_8_BASE_ADDR	0x42003400

#define TC5_8_CTRLA  	MMIO_REG(0x42003400, uint16_t)
#define TC5_8_CTRLA_s	MMIO_REG(0x42003400, struct __struct_TC_8_CTRLA)

#define TC5_8_READREQ  	MMIO_REG(0x42003402, uint16_t)
#define TC5_8_READREQ_s	MMIO_REG(0x42003402, struct __struct_TC_8_READREQ)

#define TC5_8_CTRLBCLR  	MMIO_REG(0x42003404, uint8_t)
#define TC5_8_CTRLBCLR_s	MMIO_REG(0x42003404, struct __struct_TC_8_CTRLBCLR)

#define TC5_8_CTRLBSET  	MMIO_REG(0x42003405, uint8_t)
#define TC5_8_CTRLBSET_s	MMIO_REG(0x42003405, struct __struct_TC_8_CTRLBSET)

#define TC5_8_CTRLC  	MMIO_REG(0x42003406, uint8_t)
#define TC5_8_CTRLC_s	MMIO_REG(0x42003406, struct __struct_TC_8_CTRLC)

#define TC5_8_DBGCTRL  	MMIO_REG(0x42003408, uint8_t)
#define TC5_8_DBGCTRL_s	MMIO_REG(0x42003408, struct __struct_TC_8_DBGCTRL)

#define TC5_8_EVCTRL  	MMIO_REG(0x4200340a, uint16_t)
#define TC5_8_EVCTRL_s	MMIO_REG(0x4200340a, struct __struct_TC_8_EVCTRL)

#define TC5_8_INTENCLR  	MMIO_REG(0x4200340c, uint8_t)
#define TC5_8_INTENCLR_s	MMIO_REG(0x4200340c, struct __struct_TC_8_INTENCLR)

#define TC5_8_INTENSET  	MMIO_REG(0x4200340d, uint8_t)
#define TC5_8_INTENSET_s	MMIO_REG(0x4200340d, struct __struct_TC_8_INTENSET)

#define TC5_8_INTFLAG  	MMIO_REG(0x4200340e, uint8_t)
#define TC5_8_INTFLAG_s	MMIO_REG(0x4200340e, struct __struct_TC_8_INTFLAG)

#define TC5_8_STATUS  	MMIO_REG(0x4200340f, uint8_t)
#define TC5_8_STATUS_s	MMIO_REG(0x4200340f, struct __struct_TC_8_STATUS)

#define TC5_8_COUNT  	MMIO_REG(0x42003410, uint8_t)

#define TC5_8_PER  	MMIO_REG(0x42003414, uint8_t)

#define TC5_8_CC(i)  	MMIO_REG(0x42003418 + (i)*1, uint8_t)


// TC5_16

#define TC5_16_BASE_ADDR	0x42003400

#define TC5_16_CTRLA  	MMIO_REG(0x42003400, uint16_t)
#define TC5_16_CTRLA_s	MMIO_REG(0x42003400, struct __struct_TC_16_CTRLA)

#define TC5_16_READREQ  	MMIO_REG(0x42003402, uint16_t)
#define TC5_16_READREQ_s	MMIO_REG(0x42003402, struct __struct_TC_16_READREQ)

#define TC5_16_CTRLBCLR  	MMIO_REG(0x42003404, uint8_t)
#define TC5_16_CTRLBCLR_s	MMIO_REG(0x42003404, struct __struct_TC_16_CTRLBCLR)

#define TC5_16_CTRLBSET  	MMIO_REG(0x42003405, uint8_t)
#define TC5_16_CTRLBSET_s	MMIO_REG(0x42003405, struct __struct_TC_16_CTRLBSET)

#define TC5_16_CTRLC  	MMIO_REG(0x42003406, uint8_t)
#define TC5_16_CTRLC_s	MMIO_REG(0x42003406, struct __struct_TC_16_CTRLC)

#define TC5_16_DBGCTRL  	MMIO_REG(0x42003408, uint8_t)
#define TC5_16_DBGCTRL_s	MMIO_REG(0x42003408, struct __struct_TC_16_DBGCTRL)

#define TC5_16_EVCTRL  	MMIO_REG(0x4200340a, uint16_t)
#define TC5_16_EVCTRL_s	MMIO_REG(0x4200340a, struct __struct_TC_16_EVCTRL)

#define TC5_16_INTENCLR  	MMIO_REG(0x4200340c, uint8_t)
#define TC5_16_INTENCLR_s	MMIO_REG(0x4200340c, struct __struct_TC_16_INTENCLR)

#define TC5_16_INTENSET  	MMIO_REG(0x4200340d, uint8_t)
#define TC5_16_INTENSET_s	MMIO_REG(0x4200340d, struct __struct_TC_16_INTENSET)

#define TC5_16_INTFLAG  	MMIO_REG(0x4200340e, uint8_t)
#define TC5_16_INTFLAG_s	MMIO_REG(0x4200340e, struct __struct_TC_16_INTFLAG)

#define TC5_16_STATUS  	MMIO_REG(0x4200340f, uint8_t)
#define TC5_16_STATUS_s	MMIO_REG(0x4200340f, struct __struct_TC_16_STATUS)

#define TC5_16_COUNT  	MMIO_REG(0x42003410, uint16_t)

#define TC5_16_CC(i)  	MMIO_REG(0x42003418 + (i)*2, uint16_t)


// TC5_32

#define TC5_32_BASE_ADDR	0x42003400

#define TC5_32_CTRLA  	MMIO_REG(0x42003400, uint16_t)
#define TC5_32_CTRLA_s	MMIO_REG(0x42003400, struct __struct_TC_32_CTRLA)

#define TC5_32_READREQ  	MMIO_REG(0x42003402, uint16_t)
#define TC5_32_READREQ_s	MMIO_REG(0x42003402, struct __struct_TC_32_READREQ)

#define TC5_32_CTRLBCLR  	MMIO_REG(0x42003404, uint8_t)
#define TC5_32_CTRLBCLR_s	MMIO_REG(0x42003404, struct __struct_TC_32_CTRLBCLR)

#define TC5_32_CTRLBSET  	MMIO_REG(0x42003405, uint8_t)
#define TC5_32_CTRLBSET_s	MMIO_REG(0x42003405, struct __struct_TC_32_CTRLBSET)

#define TC5_32_CTRLC  	MMIO_REG(0x42003406, uint8_t)
#define TC5_32_CTRLC_s	MMIO_REG(0x42003406, struct __struct_TC_32_CTRLC)

#define TC5_32_DBGCTRL  	MMIO_REG(0x42003408, uint8_t)
#define TC5_32_DBGCTRL_s	MMIO_REG(0x42003408, struct __struct_TC_32_DBGCTRL)

#define TC5_32_EVCTRL  	MMIO_REG(0x4200340a, uint16_t)
#define TC5_32_EVCTRL_s	MMIO_REG(0x4200340a, struct __struct_TC_32_EVCTRL)

#define TC5_32_INTENCLR  	MMIO_REG(0x4200340c, uint8_t)
#define TC5_32_INTENCLR_s	MMIO_REG(0x4200340c, struct __struct_TC_32_INTENCLR)

#define TC5_32_INTENSET  	MMIO_REG(0x4200340d, uint8_t)
#define TC5_32_INTENSET_s	MMIO_REG(0x4200340d, struct __struct_TC_32_INTENSET)

#define TC5_32_INTFLAG  	MMIO_REG(0x4200340e, uint8_t)
#define TC5_32_INTFLAG_s	MMIO_REG(0x4200340e, struct __struct_TC_32_INTFLAG)

#define TC5_32_STATUS  	MMIO_REG(0x4200340f, uint8_t)
#define TC5_32_STATUS_s	MMIO_REG(0x4200340f, struct __struct_TC_32_STATUS)

#define TC5_32_COUNT  	MMIO_REG(0x42003410, uint32_t)

#define TC5_32_CC(i)  	MMIO_REG(0x42003418 + (i)*4, uint32_t)


// TC6_8

#define TC6_8_BASE_ADDR	0x42003800

#define TC6_8_CTRLA  	MMIO_REG(0x42003800, uint16_t)
#define TC6_8_CTRLA_s	MMIO_REG(0x42003800, struct __struct_TC_8_CTRLA)

#define TC6_8_READREQ  	MMIO_REG(0x42003802, uint16_t)
#define TC6_8_READREQ_s	MMIO_REG(0x42003802, struct __struct_TC_8_READREQ)

#define TC6_8_CTRLBCLR  	MMIO_REG(0x42003804, uint8_t)
#define TC6_8_CTRLBCLR_s	MMIO_REG(0x42003804, struct __struct_TC_8_CTRLBCLR)

#define TC6_8_CTRLBSET  	MMIO_REG(0x42003805, uint8_t)
#define TC6_8_CTRLBSET_s	MMIO_REG(0x42003805, struct __struct_TC_8_CTRLBSET)

#define TC6_8_CTRLC  	MMIO_REG(0x42003806, uint8_t)
#define TC6_8_CTRLC_s	MMIO_REG(0x42003806, struct __struct_TC_8_CTRLC)

#define TC6_8_DBGCTRL  	MMIO_REG(0x42003808, uint8_t)
#define TC6_8_DBGCTRL_s	MMIO_REG(0x42003808, struct __struct_TC_8_DBGCTRL)

#define TC6_8_EVCTRL  	MMIO_REG(0x4200380a, uint16_t)
#define TC6_8_EVCTRL_s	MMIO_REG(0x4200380a, struct __struct_TC_8_EVCTRL)

#define TC6_8_INTENCLR  	MMIO_REG(0x4200380c, uint8_t)
#define TC6_8_INTENCLR_s	MMIO_REG(0x4200380c, struct __struct_TC_8_INTENCLR)

#define TC6_8_INTENSET  	MMIO_REG(0x4200380d, uint8_t)
#define TC6_8_INTENSET_s	MMIO_REG(0x4200380d, struct __struct_TC_8_INTENSET)

#define TC6_8_INTFLAG  	MMIO_REG(0x4200380e, uint8_t)
#define TC6_8_INTFLAG_s	MMIO_REG(0x4200380e, struct __struct_TC_8_INTFLAG)

#define TC6_8_STATUS  	MMIO_REG(0x4200380f, uint8_t)
#define TC6_8_STATUS_s	MMIO_REG(0x4200380f, struct __struct_TC_8_STATUS)

#define TC6_8_COUNT  	MMIO_REG(0x42003810, uint8_t)

#define TC6_8_PER  	MMIO_REG(0x42003814, uint8_t)

#define TC6_8_CC(i)  	MMIO_REG(0x42003818 + (i)*1, uint8_t)


// TC6_16

#define TC6_16_BASE_ADDR	0x42003800

#define TC6_16_CTRLA  	MMIO_REG(0x42003800, uint16_t)
#define TC6_16_CTRLA_s	MMIO_REG(0x42003800, struct __struct_TC_16_CTRLA)

#define TC6_16_READREQ  	MMIO_REG(0x42003802, uint16_t)
#define TC6_16_READREQ_s	MMIO_REG(0x42003802, struct __struct_TC_16_READREQ)

#define TC6_16_CTRLBCLR  	MMIO_REG(0x42003804, uint8_t)
#define TC6_16_CTRLBCLR_s	MMIO_REG(0x42003804, struct __struct_TC_16_CTRLBCLR)

#define TC6_16_CTRLBSET  	MMIO_REG(0x42003805, uint8_t)
#define TC6_16_CTRLBSET_s	MMIO_REG(0x42003805, struct __struct_TC_16_CTRLBSET)

#define TC6_16_CTRLC  	MMIO_REG(0x42003806, uint8_t)
#define TC6_16_CTRLC_s	MMIO_REG(0x42003806, struct __struct_TC_16_CTRLC)

#define TC6_16_DBGCTRL  	MMIO_REG(0x42003808, uint8_t)
#define TC6_16_DBGCTRL_s	MMIO_REG(0x42003808, struct __struct_TC_16_DBGCTRL)

#define TC6_16_EVCTRL  	MMIO_REG(0x4200380a, uint16_t)
#define TC6_16_EVCTRL_s	MMIO_REG(0x4200380a, struct __struct_TC_16_EVCTRL)

#define TC6_16_INTENCLR  	MMIO_REG(0x4200380c, uint8_t)
#define TC6_16_INTENCLR_s	MMIO_REG(0x4200380c, struct __struct_TC_16_INTENCLR)

#define TC6_16_INTENSET  	MMIO_REG(0x4200380d, uint8_t)
#define TC6_16_INTENSET_s	MMIO_REG(0x4200380d, struct __struct_TC_16_INTENSET)

#define TC6_16_INTFLAG  	MMIO_REG(0x4200380e, uint8_t)
#define TC6_16_INTFLAG_s	MMIO_REG(0x4200380e, struct __struct_TC_16_INTFLAG)

#define TC6_16_STATUS  	MMIO_REG(0x4200380f, uint8_t)
#define TC6_16_STATUS_s	MMIO_REG(0x4200380f, struct __struct_TC_16_STATUS)

#define TC6_16_COUNT  	MMIO_REG(0x42003810, uint16_t)

#define TC6_16_CC(i)  	MMIO_REG(0x42003818 + (i)*2, uint16_t)


// TC6_32

#define TC6_32_BASE_ADDR	0x42003800

#define TC6_32_CTRLA  	MMIO_REG(0x42003800, uint16_t)
#define TC6_32_CTRLA_s	MMIO_REG(0x42003800, struct __struct_TC_32_CTRLA)

#define TC6_32_READREQ  	MMIO_REG(0x42003802, uint16_t)
#define TC6_32_READREQ_s	MMIO_REG(0x42003802, struct __struct_TC_32_READREQ)

#define TC6_32_CTRLBCLR  	MMIO_REG(0x42003804, uint8_t)
#define TC6_32_CTRLBCLR_s	MMIO_REG(0x42003804, struct __struct_TC_32_CTRLBCLR)

#define TC6_32_CTRLBSET  	MMIO_REG(0x42003805, uint8_t)
#define TC6_32_CTRLBSET_s	MMIO_REG(0x42003805, struct __struct_TC_32_CTRLBSET)

#define TC6_32_CTRLC  	MMIO_REG(0x42003806, uint8_t)
#define TC6_32_CTRLC_s	MMIO_REG(0x42003806, struct __struct_TC_32_CTRLC)

#define TC6_32_DBGCTRL  	MMIO_REG(0x42003808, uint8_t)
#define TC6_32_DBGCTRL_s	MMIO_REG(0x42003808, struct __struct_TC_32_DBGCTRL)

#define TC6_32_EVCTRL  	MMIO_REG(0x4200380a, uint16_t)
#define TC6_32_EVCTRL_s	MMIO_REG(0x4200380a, struct __struct_TC_32_EVCTRL)

#define TC6_32_INTENCLR  	MMIO_REG(0x4200380c, uint8_t)
#define TC6_32_INTENCLR_s	MMIO_REG(0x4200380c, struct __struct_TC_32_INTENCLR)

#define TC6_32_INTENSET  	MMIO_REG(0x4200380d, uint8_t)
#define TC6_32_INTENSET_s	MMIO_REG(0x4200380d, struct __struct_TC_32_INTENSET)

#define TC6_32_INTFLAG  	MMIO_REG(0x4200380e, uint8_t)
#define TC6_32_INTFLAG_s	MMIO_REG(0x4200380e, struct __struct_TC_32_INTFLAG)

#define TC6_32_STATUS  	MMIO_REG(0x4200380f, uint8_t)
#define TC6_32_STATUS_s	MMIO_REG(0x4200380f, struct __struct_TC_32_STATUS)

#define TC6_32_COUNT  	MMIO_REG(0x42003810, uint32_t)

#define TC6_32_CC(i)  	MMIO_REG(0x42003818 + (i)*4, uint32_t)


// TC7_8

#define TC7_8_BASE_ADDR	0x42003c00

#define TC7_8_CTRLA  	MMIO_REG(0x42003c00, uint16_t)
#define TC7_8_CTRLA_s	MMIO_REG(0x42003c00, struct __struct_TC_8_CTRLA)

#define TC7_8_READREQ  	MMIO_REG(0x42003c02, uint16_t)
#define TC7_8_READREQ_s	MMIO_REG(0x42003c02, struct __struct_TC_8_READREQ)

#define TC7_8_CTRLBCLR  	MMIO_REG(0x42003c04, uint8_t)
#define TC7_8_CTRLBCLR_s	MMIO_REG(0x42003c04, struct __struct_TC_8_CTRLBCLR)

#define TC7_8_CTRLBSET  	MMIO_REG(0x42003c05, uint8_t)
#define TC7_8_CTRLBSET_s	MMIO_REG(0x42003c05, struct __struct_TC_8_CTRLBSET)

#define TC7_8_CTRLC  	MMIO_REG(0x42003c06, uint8_t)
#define TC7_8_CTRLC_s	MMIO_REG(0x42003c06, struct __struct_TC_8_CTRLC)

#define TC7_8_DBGCTRL  	MMIO_REG(0x42003c08, uint8_t)
#define TC7_8_DBGCTRL_s	MMIO_REG(0x42003c08, struct __struct_TC_8_DBGCTRL)

#define TC7_8_EVCTRL  	MMIO_REG(0x42003c0a, uint16_t)
#define TC7_8_EVCTRL_s	MMIO_REG(0x42003c0a, struct __struct_TC_8_EVCTRL)

#define TC7_8_INTENCLR  	MMIO_REG(0x42003c0c, uint8_t)
#define TC7_8_INTENCLR_s	MMIO_REG(0x42003c0c, struct __struct_TC_8_INTENCLR)

#define TC7_8_INTENSET  	MMIO_REG(0x42003c0d, uint8_t)
#define TC7_8_INTENSET_s	MMIO_REG(0x42003c0d, struct __struct_TC_8_INTENSET)

#define TC7_8_INTFLAG  	MMIO_REG(0x42003c0e, uint8_t)
#define TC7_8_INTFLAG_s	MMIO_REG(0x42003c0e, struct __struct_TC_8_INTFLAG)

#define TC7_8_STATUS  	MMIO_REG(0x42003c0f, uint8_t)
#define TC7_8_STATUS_s	MMIO_REG(0x42003c0f, struct __struct_TC_8_STATUS)

#define TC7_8_COUNT  	MMIO_REG(0x42003c10, uint8_t)

#define TC7_8_PER  	MMIO_REG(0x42003c14, uint8_t)

#define TC7_8_CC(i)  	MMIO_REG(0x42003c18 + (i)*1, uint8_t)


// TC7_16

#define TC7_16_BASE_ADDR	0x42003c00

#define TC7_16_CTRLA  	MMIO_REG(0x42003c00, uint16_t)
#define TC7_16_CTRLA_s	MMIO_REG(0x42003c00, struct __struct_TC_16_CTRLA)

#define TC7_16_READREQ  	MMIO_REG(0x42003c02, uint16_t)
#define TC7_16_READREQ_s	MMIO_REG(0x42003c02, struct __struct_TC_16_READREQ)

#define TC7_16_CTRLBCLR  	MMIO_REG(0x42003c04, uint8_t)
#define TC7_16_CTRLBCLR_s	MMIO_REG(0x42003c04, struct __struct_TC_16_CTRLBCLR)

#define TC7_16_CTRLBSET  	MMIO_REG(0x42003c05, uint8_t)
#define TC7_16_CTRLBSET_s	MMIO_REG(0x42003c05, struct __struct_TC_16_CTRLBSET)

#define TC7_16_CTRLC  	MMIO_REG(0x42003c06, uint8_t)
#define TC7_16_CTRLC_s	MMIO_REG(0x42003c06, struct __struct_TC_16_CTRLC)

#define TC7_16_DBGCTRL  	MMIO_REG(0x42003c08, uint8_t)
#define TC7_16_DBGCTRL_s	MMIO_REG(0x42003c08, struct __struct_TC_16_DBGCTRL)

#define TC7_16_EVCTRL  	MMIO_REG(0x42003c0a, uint16_t)
#define TC7_16_EVCTRL_s	MMIO_REG(0x42003c0a, struct __struct_TC_16_EVCTRL)

#define TC7_16_INTENCLR  	MMIO_REG(0x42003c0c, uint8_t)
#define TC7_16_INTENCLR_s	MMIO_REG(0x42003c0c, struct __struct_TC_16_INTENCLR)

#define TC7_16_INTENSET  	MMIO_REG(0x42003c0d, uint8_t)
#define TC7_16_INTENSET_s	MMIO_REG(0x42003c0d, struct __struct_TC_16_INTENSET)

#define TC7_16_INTFLAG  	MMIO_REG(0x42003c0e, uint8_t)
#define TC7_16_INTFLAG_s	MMIO_REG(0x42003c0e, struct __struct_TC_16_INTFLAG)

#define TC7_16_STATUS  	MMIO_REG(0x42003c0f, uint8_t)
#define TC7_16_STATUS_s	MMIO_REG(0x42003c0f, struct __struct_TC_16_STATUS)

#define TC7_16_COUNT  	MMIO_REG(0x42003c10, uint16_t)

#define TC7_16_CC(i)  	MMIO_REG(0x42003c18 + (i)*2, uint16_t)


// TC7_32

#define TC7_32_BASE_ADDR	0x42003c00

#define TC7_32_CTRLA  	MMIO_REG(0x42003c00, uint16_t)
#define TC7_32_CTRLA_s	MMIO_REG(0x42003c00, struct __struct_TC_32_CTRLA)

#define TC7_32_READREQ  	MMIO_REG(0x42003c02, uint16_t)
#define TC7_32_READREQ_s	MMIO_REG(0x42003c02, struct __struct_TC_32_READREQ)

#define TC7_32_CTRLBCLR  	MMIO_REG(0x42003c04, uint8_t)
#define TC7_32_CTRLBCLR_s	MMIO_REG(0x42003c04, struct __struct_TC_32_CTRLBCLR)

#define TC7_32_CTRLBSET  	MMIO_REG(0x42003c05, uint8_t)
#define TC7_32_CTRLBSET_s	MMIO_REG(0x42003c05, struct __struct_TC_32_CTRLBSET)

#define TC7_32_CTRLC  	MMIO_REG(0x42003c06, uint8_t)
#define TC7_32_CTRLC_s	MMIO_REG(0x42003c06, struct __struct_TC_32_CTRLC)

#define TC7_32_DBGCTRL  	MMIO_REG(0x42003c08, uint8_t)
#define TC7_32_DBGCTRL_s	MMIO_REG(0x42003c08, struct __struct_TC_32_DBGCTRL)

#define TC7_32_EVCTRL  	MMIO_REG(0x42003c0a, uint16_t)
#define TC7_32_EVCTRL_s	MMIO_REG(0x42003c0a, struct __struct_TC_32_EVCTRL)

#define TC7_32_INTENCLR  	MMIO_REG(0x42003c0c, uint8_t)
#define TC7_32_INTENCLR_s	MMIO_REG(0x42003c0c, struct __struct_TC_32_INTENCLR)

#define TC7_32_INTENSET  	MMIO_REG(0x42003c0d, uint8_t)
#define TC7_32_INTENSET_s	MMIO_REG(0x42003c0d, struct __struct_TC_32_INTENSET)

#define TC7_32_INTFLAG  	MMIO_REG(0x42003c0e, uint8_t)
#define TC7_32_INTFLAG_s	MMIO_REG(0x42003c0e, struct __struct_TC_32_INTFLAG)

#define TC7_32_STATUS  	MMIO_REG(0x42003c0f, uint8_t)
#define TC7_32_STATUS_s	MMIO_REG(0x42003c0f, struct __struct_TC_32_STATUS)

#define TC7_32_COUNT  	MMIO_REG(0x42003c10, uint32_t)

#define TC7_32_CC(i)  	MMIO_REG(0x42003c18 + (i)*4, uint32_t)


// ADC

#define ADC_BASE_ADDR	0x42004000

#define ADC_CTRLA  	MMIO_REG(0x42004000, uint8_t)
#define ADC_CTRLA_s	MMIO_REG(0x42004000, struct __struct_ADC_CTRLA)

#define ADC_REFCTRL  	MMIO_REG(0x42004001, uint8_t)
#define ADC_REFCTRL_s	MMIO_REG(0x42004001, struct __struct_ADC_REFCTRL)

#define ADC_AVGCTRL  	MMIO_REG(0x42004002, uint8_t)
#define ADC_AVGCTRL_s	MMIO_REG(0x42004002, struct __struct_ADC_AVGCTRL)

#define ADC_SAMPCTRL  	MMIO_REG(0x42004003, uint8_t)
#define ADC_SAMPCTRL_s	MMIO_REG(0x42004003, struct __struct_ADC_SAMPCTRL)

#define ADC_CTRLB  	MMIO_REG(0x42004004, uint16_t)
#define ADC_CTRLB_s	MMIO_REG(0x42004004, struct __struct_ADC_CTRLB)

#define ADC_WINCTRL  	MMIO_REG(0x42004008, uint8_t)
#define ADC_WINCTRL_s	MMIO_REG(0x42004008, struct __struct_ADC_WINCTRL)

#define ADC_SWTRIG  	MMIO_REG(0x4200400c, uint8_t)
#define ADC_SWTRIG_s	MMIO_REG(0x4200400c, struct __struct_ADC_SWTRIG)

#define ADC_INPUTCTRL  	MMIO_REG(0x42004010, uint32_t)
#define ADC_INPUTCTRL_s	MMIO_REG(0x42004010, struct __struct_ADC_INPUTCTRL)

#define ADC_EVCTRL  	MMIO_REG(0x42004014, uint8_t)
#define ADC_EVCTRL_s	MMIO_REG(0x42004014, struct __struct_ADC_EVCTRL)

#define ADC_INTENCLR  	MMIO_REG(0x42004016, uint8_t)
#define ADC_INTENCLR_s	MMIO_REG(0x42004016, struct __struct_ADC_INTENCLR)

#define ADC_INTENSET  	MMIO_REG(0x42004017, uint8_t)
#define ADC_INTENSET_s	MMIO_REG(0x42004017, struct __struct_ADC_INTENSET)

#define ADC_INTFLAG  	MMIO_REG(0x42004018, uint8_t)
#define ADC_INTFLAG_s	MMIO_REG(0x42004018, struct __struct_ADC_INTFLAG)

#define ADC_STATUS  	MMIO_REG(0x42004019, uint8_t)
#define ADC_STATUS_s	MMIO_REG(0x42004019, struct __struct_ADC_STATUS)

#define ADC_RESULT  	MMIO_REG(0x4200401a, uint16_t)

#define ADC_WINLT  	MMIO_REG(0x4200401c, uint16_t)

#define ADC_WINUT  	MMIO_REG(0x42004020, uint16_t)

#define ADC_GAINCORR  	MMIO_REG(0x42004024, uint16_t)
#define ADC_GAINCORR_s	MMIO_REG(0x42004024, struct __struct_ADC_GAINCORR)

#define ADC_OFFSETCORR  	MMIO_REG(0x42004026, uint16_t)
#define ADC_OFFSETCORR_s	MMIO_REG(0x42004026, struct __struct_ADC_OFFSETCORR)

#define ADC_CALIB  	MMIO_REG(0x42004028, uint16_t)
#define ADC_CALIB_s	MMIO_REG(0x42004028, struct __struct_ADC_CALIB)

#define ADC_DBGCTRL  	MMIO_REG(0x4200402a, uint8_t)
#define ADC_DBGCTRL_s	MMIO_REG(0x4200402a, struct __struct_ADC_DBGCTRL)


// AC

#define AC_BASE_ADDR	0x42004400

#define AC_CTRLA  	MMIO_REG(0x42004400, uint8_t)
#define AC_CTRLA_s	MMIO_REG(0x42004400, struct __struct_AC_CTRLA)

#define AC_CTRLB  	MMIO_REG(0x42004401, uint8_t)
#define AC_CTRLB_s	MMIO_REG(0x42004401, struct __struct_AC_CTRLB)

#define AC_EVCTRL  	MMIO_REG(0x42004402, uint16_t)
#define AC_EVCTRL_s	MMIO_REG(0x42004402, struct __struct_AC_EVCTRL)

#define AC_INTENCLR  	MMIO_REG(0x42004404, uint8_t)
#define AC_INTENCLR_s	MMIO_REG(0x42004404, struct __struct_AC_INTENCLR)

#define AC_INTENSET  	MMIO_REG(0x42004405, uint8_t)
#define AC_INTENSET_s	MMIO_REG(0x42004405, struct __struct_AC_INTENSET)

#define AC_INTFLAG  	MMIO_REG(0x42004406, uint8_t)
#define AC_INTFLAG_s	MMIO_REG(0x42004406, struct __struct_AC_INTFLAG)

#define AC_STATUSA  	MMIO_REG(0x42004408, uint8_t)
#define AC_STATUSA_s	MMIO_REG(0x42004408, struct __struct_AC_STATUSA)

#define AC_STATUSB  	MMIO_REG(0x42004409, uint8_t)
#define AC_STATUSB_s	MMIO_REG(0x42004409, struct __struct_AC_STATUSB)

#define AC_STATUSC  	MMIO_REG(0x4200440a, uint8_t)
#define AC_STATUSC_s	MMIO_REG(0x4200440a, struct __struct_AC_STATUSC)

#define AC_WINCTRL  	MMIO_REG(0x4200440c, uint8_t)
#define AC_WINCTRL_s	MMIO_REG(0x4200440c, struct __struct_AC_WINCTRL)

#define AC_COMPCTRL(i)  	MMIO_REG(0x42004410 + (i)*4, uint32_t)
#define AC_COMPCTRL_s(i)	MMIO_REG(0x42004410 + (i)*4, struct __struct_AC_COMPCTRL)

#define AC_SCALER(i)  	MMIO_REG(0x42004420 + (i)*1, uint8_t)
#define AC_SCALER_s(i)	MMIO_REG(0x42004420 + (i)*1, struct __struct_AC_SCALER)


// DAC

#define DAC_BASE_ADDR	0x42004800

#define DAC_CTRLA  	MMIO_REG(0x42004800, uint8_t)
#define DAC_CTRLA_s	MMIO_REG(0x42004800, struct __struct_DAC_CTRLA)

#define DAC_CTRLB  	MMIO_REG(0x42004801, uint8_t)
#define DAC_CTRLB_s	MMIO_REG(0x42004801, struct __struct_DAC_CTRLB)

#define DAC_EVCTRL  	MMIO_REG(0x42004802, uint8_t)
#define DAC_EVCTRL_s	MMIO_REG(0x42004802, struct __struct_DAC_EVCTRL)

#define DAC_INTENCLR  	MMIO_REG(0x42004804, uint8_t)
#define DAC_INTENCLR_s	MMIO_REG(0x42004804, struct __struct_DAC_INTENCLR)

#define DAC_INTENSET  	MMIO_REG(0x42004805, uint8_t)
#define DAC_INTENSET_s	MMIO_REG(0x42004805, struct __struct_DAC_INTENSET)

#define DAC_INTFLAG  	MMIO_REG(0x42004806, uint8_t)
#define DAC_INTFLAG_s	MMIO_REG(0x42004806, struct __struct_DAC_INTFLAG)

#define DAC_STATUS  	MMIO_REG(0x42004807, uint8_t)
#define DAC_STATUS_s	MMIO_REG(0x42004807, struct __struct_DAC_STATUS)

#define DAC_DATA  	MMIO_REG(0x42004808, uint16_t)

#define DAC_DATABUF  	MMIO_REG(0x4200480c, uint16_t)


// PTC

#define PTC_BASE_ADDR	0x42004c00


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


// NVIC

#define NVIC_BASE_ADDR	0xe000e100

#define NVIC_ISER  	MMIO_REG(0xe000e100, uint32_t)
#define NVIC_ISER_s	MMIO_REG(0xe000e100, struct __struct_NVIC_ISER)

#define NVIC_ICER  	MMIO_REG(0xe000e180, uint32_t)
#define NVIC_ICER_s	MMIO_REG(0xe000e180, struct __struct_NVIC_ICER)

#define NVIC_ISPR  	MMIO_REG(0xe000e200, uint32_t)
#define NVIC_ISPR_s	MMIO_REG(0xe000e200, struct __struct_NVIC_ISPR)

#define NVIC_ICPR  	MMIO_REG(0xe000e280, uint32_t)
#define NVIC_ICPR_s	MMIO_REG(0xe000e280, struct __struct_NVIC_ICPR)

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


// SCB

#define SCB_BASE_ADDR	0xe000ed00

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

#define SCB_SHPR2  	MMIO_REG(0xe000ed1c, uint32_t)
#define SCB_SHPR2_s	MMIO_REG(0xe000ed1c, struct __struct_SCB_SHPR2)

#define SCB_SHPR3  	MMIO_REG(0xe000ed20, uint32_t)
#define SCB_SHPR3_s	MMIO_REG(0xe000ed20, struct __struct_SCB_SHPR3)

#define SCB_SHCSR  	MMIO_REG(0xe000ed24, uint32_t)
#define SCB_SHCSR_s	MMIO_REG(0xe000ed24, struct __struct_SCB_SHCSR)

#define SCB_DFSR  	MMIO_REG(0xe000ed30, uint32_t)
#define SCB_DFSR_s	MMIO_REG(0xe000ed30, struct __struct_SCB_DFSR)


#endif // _SAMD20_H_

