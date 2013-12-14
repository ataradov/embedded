// This file was generated automatically. Visit https://github.com/ataradov/embedded to get the source.
#ifndef _SAMD20_H_
#define _SAMD20_H_
#include <stdint.h>
#define MMIO_REG(mem_addr, type) (*(volatile type *)(mem_addr))

// 0x40000000 PAC0

#define PAC0_WPCLR	MMIO_REG(0x40000000, uint32_t)
#define PAC0_WPCLR_PM	(1 << 1)
#define PAC0_WPCLR_SYSCTRL	(1 << 2)
#define PAC0_WPCLR_GCLK	(1 << 3)
#define PAC0_WPCLR_WDT	(1 << 4)
#define PAC0_WPCLR_RTC	(1 << 5)
#define PAC0_WPCLR_EIC	(1 << 6)

#define PAC0_WPCLR_s    MMIO_REG(0x40000000, struct __struct_PAC0_WPCLR)
struct __struct_PAC0_WPCLR
{
  uint32_t  : 1;
  uint32_t pm : 1;
  uint32_t sysctrl : 1;
  uint32_t gclk : 1;
  uint32_t wdt : 1;
  uint32_t rtc : 1;
  uint32_t eic : 1;
  uint32_t  : 25;
};

#define PAC0_WPSET	MMIO_REG(0x40000004, uint32_t)
#define PAC0_WPSET_PM	(1 << 1)
#define PAC0_WPSET_SYSCTRL	(1 << 2)
#define PAC0_WPSET_GCLK	(1 << 3)
#define PAC0_WPSET_WDT	(1 << 4)
#define PAC0_WPSET_RTC	(1 << 5)
#define PAC0_WPSET_EIC	(1 << 6)

#define PAC0_WPSET_s    MMIO_REG(0x40000004, struct __struct_PAC0_WPSET)
struct __struct_PAC0_WPSET
{
  uint32_t  : 1;
  uint32_t pm : 1;
  uint32_t sysctrl : 1;
  uint32_t gclk : 1;
  uint32_t wdt : 1;
  uint32_t rtc : 1;
  uint32_t eic : 1;
  uint32_t  : 25;
};

// 0x40000400 PM

#define PM_CTRL	MMIO_REG(0x40000400, uint8_t)
#define PM_CTRL_CFDEN	(1 << 2)
#define PM_CTRL_BKUPCLK	(1 << 4)

#define PM_CTRL_s    MMIO_REG(0x40000400, struct __struct_PM_CTRL)
struct __struct_PM_CTRL
{
  uint8_t  : 2;
  uint8_t cfden : 1;
  uint8_t  : 1;
  uint8_t bkupclk : 1;
  uint8_t  : 3;
};

#define PM_SLEEP	MMIO_REG(0x40000401, uint8_t)
#define PM_SLEEP_IDLE(x)	((x) << 0)
#define PM_SLEEP_IDLE_MSK	0x00000003
#define PM_SLEEP_IDLE_VAL(x)	(((x) >> 0) & 0x3)

#define PM_SLEEP_s    MMIO_REG(0x40000401, struct __struct_PM_SLEEP)
struct __struct_PM_SLEEP
{
  uint8_t idle : 2;
  uint8_t  : 6;
};

#define PM_CPUSEL	MMIO_REG(0x40000408, uint8_t)
#define PM_CPUSEL_CPUDIV(x)	((x) << 0)
#define PM_CPUSEL_CPUDIV_MSK	0x00000007
#define PM_CPUSEL_CPUDIV_VAL(x)	(((x) >> 0) & 0x7)

#define PM_CPUSEL_s    MMIO_REG(0x40000408, struct __struct_PM_CPUSEL)
struct __struct_PM_CPUSEL
{
  uint8_t cpudiv : 3;
  uint8_t  : 5;
};

#define PM_APBASEL	MMIO_REG(0x40000409, uint8_t)
#define PM_APBASEL_APBADIV(x)	((x) << 0)
#define PM_APBASEL_APBADIV_MSK	0x00000007
#define PM_APBASEL_APBADIV_VAL(x)	(((x) >> 0) & 0x7)

#define PM_APBASEL_s    MMIO_REG(0x40000409, struct __struct_PM_APBASEL)
struct __struct_PM_APBASEL
{
  uint8_t apbadiv : 3;
  uint8_t  : 5;
};

#define PM_APBBSEL	MMIO_REG(0x4000040a, uint8_t)
#define PM_APBBSEL_APBBDIV(x)	((x) << 0)
#define PM_APBBSEL_APBBDIV_MSK	0x00000007
#define PM_APBBSEL_APBBDIV_VAL(x)	(((x) >> 0) & 0x7)

#define PM_APBBSEL_s    MMIO_REG(0x4000040a, struct __struct_PM_APBBSEL)
struct __struct_PM_APBBSEL
{
  uint8_t apbbdiv : 3;
  uint8_t  : 5;
};

#define PM_APBCSEL	MMIO_REG(0x4000040b, uint8_t)
#define PM_APBCSEL_APBCDIV(x)	((x) << 0)
#define PM_APBCSEL_APBCDIV_MSK	0x00000007
#define PM_APBCSEL_APBCDIV_VAL(x)	(((x) >> 0) & 0x7)

#define PM_APBCSEL_s    MMIO_REG(0x4000040b, struct __struct_PM_APBCSEL)
struct __struct_PM_APBCSEL
{
  uint8_t apbcdiv : 3;
  uint8_t  : 5;
};

#define PM_AHBMASK	MMIO_REG(0x40000414, uint32_t)
#define PM_AHBMASK_HPB0	(1 << 0)
#define PM_AHBMASK_HPB1	(1 << 1)
#define PM_AHBMASK_HPB2	(1 << 2)
#define PM_AHBMASK_DSU	(1 << 3)
#define PM_AHBMASK_NVMCTRL	(1 << 4)

#define PM_AHBMASK_s    MMIO_REG(0x40000414, struct __struct_PM_AHBMASK)
struct __struct_PM_AHBMASK
{
  uint32_t hpb0 : 1;
  uint32_t hpb1 : 1;
  uint32_t hpb2 : 1;
  uint32_t dsu : 1;
  uint32_t nvmctrl : 1;
  uint32_t  : 27;
};

#define PM_APBAMASK	MMIO_REG(0x40000418, uint32_t)
#define PM_APBAMASK_PAC0	(1 << 0)
#define PM_APBAMASK_PM	(1 << 1)
#define PM_APBAMASK_SYSCTRL	(1 << 2)
#define PM_APBAMASK_GCLK	(1 << 3)
#define PM_APBAMASK_WDT	(1 << 4)
#define PM_APBAMASK_RTC	(1 << 5)
#define PM_APBAMASK_EIC	(1 << 6)

#define PM_APBAMASK_s    MMIO_REG(0x40000418, struct __struct_PM_APBAMASK)
struct __struct_PM_APBAMASK
{
  uint32_t pac0 : 1;
  uint32_t pm : 1;
  uint32_t sysctrl : 1;
  uint32_t gclk : 1;
  uint32_t wdt : 1;
  uint32_t rtc : 1;
  uint32_t eic : 1;
  uint32_t  : 25;
};

#define PM_APBBMASK	MMIO_REG(0x4000041c, uint32_t)
#define PM_APBBMASK_PAC1	(1 << 0)
#define PM_APBBMASK_DSU	(1 << 1)
#define PM_APBBMASK_NVMCTRL	(1 << 2)
#define PM_APBBMASK_PORT	(1 << 3)

#define PM_APBBMASK_s    MMIO_REG(0x4000041c, struct __struct_PM_APBBMASK)
struct __struct_PM_APBBMASK
{
  uint32_t pac1 : 1;
  uint32_t dsu : 1;
  uint32_t nvmctrl : 1;
  uint32_t port : 1;
  uint32_t  : 28;
};

#define PM_APBCMASK	MMIO_REG(0x40000420, uint32_t)
#define PM_APBCMASK_PAC2	(1 << 0)
#define PM_APBCMASK_EVSYS	(1 << 1)
#define PM_APBCMASK_SERCOM0	(1 << 2)
#define PM_APBCMASK_SERCOM1	(1 << 3)
#define PM_APBCMASK_SERCOM2	(1 << 4)
#define PM_APBCMASK_SERCOM3	(1 << 5)
#define PM_APBCMASK_SERCOM4	(1 << 6)
#define PM_APBCMASK_SERCOM5	(1 << 7)
#define PM_APBCMASK_TC0	(1 << 8)
#define PM_APBCMASK_TC1	(1 << 9)
#define PM_APBCMASK_TC2	(1 << 10)
#define PM_APBCMASK_TC3	(1 << 11)
#define PM_APBCMASK_TC4	(1 << 12)
#define PM_APBCMASK_TC5	(1 << 13)
#define PM_APBCMASK_TC6	(1 << 14)
#define PM_APBCMASK_TC7	(1 << 15)
#define PM_APBCMASK_ADC	(1 << 16)
#define PM_APBCMASK_AC	(1 << 17)
#define PM_APBCMASK_DAC	(1 << 18)
#define PM_APBCMASK_PTC	(1 << 19)

#define PM_APBCMASK_s    MMIO_REG(0x40000420, struct __struct_PM_APBCMASK)
struct __struct_PM_APBCMASK
{
  uint32_t pac2 : 1;
  uint32_t evsys : 1;
  uint32_t sercom0 : 1;
  uint32_t sercom1 : 1;
  uint32_t sercom2 : 1;
  uint32_t sercom3 : 1;
  uint32_t sercom4 : 1;
  uint32_t sercom5 : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t tc6 : 1;
  uint32_t tc7 : 1;
  uint32_t adc : 1;
  uint32_t ac : 1;
  uint32_t dac : 1;
  uint32_t ptc : 1;
  uint32_t  : 12;
};

#define PM_INTENCLR	MMIO_REG(0x40000434, uint8_t)
#define PM_INTENCLR_CKRDY	(1 << 0)
#define PM_INTENCLR_CFD	(1 << 1)

#define PM_INTENCLR_s    MMIO_REG(0x40000434, struct __struct_PM_INTENCLR)
struct __struct_PM_INTENCLR
{
  uint8_t ckrdy : 1;
  uint8_t cfd : 1;
  uint8_t  : 6;
};

#define PM_INTENSET	MMIO_REG(0x40000435, uint8_t)
#define PM_INTENSET_CKRDY	(1 << 0)
#define PM_INTENSET_CFD	(1 << 1)

#define PM_INTENSET_s    MMIO_REG(0x40000435, struct __struct_PM_INTENSET)
struct __struct_PM_INTENSET
{
  uint8_t ckrdy : 1;
  uint8_t cfd : 1;
  uint8_t  : 6;
};

#define PM_INTFLAG	MMIO_REG(0x40000436, uint8_t)
#define PM_INTFLAG_CKRDY	(1 << 0)
#define PM_INTFLAG_CFD	(1 << 1)

#define PM_INTFLAG_s    MMIO_REG(0x40000436, struct __struct_PM_INTFLAG)
struct __struct_PM_INTFLAG
{
  uint8_t ckrdy : 1;
  uint8_t cfd : 1;
  uint8_t  : 6;
};

#define PM_RCAUSE	MMIO_REG(0x40000438, uint8_t)
#define PM_RCAUSE_POR	(1 << 0)
#define PM_RCAUSE_BOD12	(1 << 1)
#define PM_RCAUSE_BOD33	(1 << 2)
#define PM_RCAUSE_EXT	(1 << 4)
#define PM_RCAUSE_WDT	(1 << 5)
#define PM_RCAUSE_SYST	(1 << 6)

#define PM_RCAUSE_s    MMIO_REG(0x40000438, struct __struct_PM_RCAUSE)
struct __struct_PM_RCAUSE
{
  uint8_t por : 1;
  uint8_t bod12 : 1;
  uint8_t bod33 : 1;
  uint8_t  : 1;
  uint8_t ext : 1;
  uint8_t wdt : 1;
  uint8_t syst : 1;
  uint8_t  : 1;
};

// 0x40000800 SYSCTRL

#define SYSCTRL_INTENCLR	MMIO_REG(0x40000800, uint32_t)
#define SYSCTRL_INTENCLR_XOSCRDY	(1 << 0)
#define SYSCTRL_INTENCLR_XOSC32KRDY	(1 << 1)
#define SYSCTRL_INTENCLR_OSC32KRDY	(1 << 2)
#define SYSCTRL_INTENCLR_OSC8MRDY	(1 << 3)
#define SYSCTRL_INTENCLR_DFLLRDY	(1 << 4)
#define SYSCTRL_INTENCLR_DFLLOOB	(1 << 5)
#define SYSCTRL_INTENCLR_DFLLLCKF	(1 << 6)
#define SYSCTRL_INTENCLR_DFLLLCKC	(1 << 7)
#define SYSCTRL_INTENCLR_DFLLRCS	(1 << 8)
#define SYSCTRL_INTENCLR_BOD33RDY	(1 << 9)
#define SYSCTRL_INTENCLR_BOD33DET	(1 << 10)
#define SYSCTRL_INTENCLR_B33SRDY	(1 << 11)
#define SYSCTRL_INTENCLR_BOD12RDY	(1 << 12)
#define SYSCTRL_INTENCLR_BOD12DET	(1 << 13)
#define SYSCTRL_INTENCLR_B12SRDY	(1 << 14)

#define SYSCTRL_INTENCLR_s    MMIO_REG(0x40000800, struct __struct_SYSCTRL_INTENCLR)
struct __struct_SYSCTRL_INTENCLR
{
  uint32_t xoscrdy : 1;
  uint32_t xosc32krdy : 1;
  uint32_t osc32krdy : 1;
  uint32_t osc8mrdy : 1;
  uint32_t dfllrdy : 1;
  uint32_t dflloob : 1;
  uint32_t dflllckf : 1;
  uint32_t dflllckc : 1;
  uint32_t dfllrcs : 1;
  uint32_t bod33rdy : 1;
  uint32_t bod33det : 1;
  uint32_t b33srdy : 1;
  uint32_t bod12rdy : 1;
  uint32_t bod12det : 1;
  uint32_t b12srdy : 1;
  uint32_t  : 17;
};

#define SYSCTRL_INTENSET	MMIO_REG(0x40000804, uint32_t)
#define SYSCTRL_INTENSET_XOSCRDY	(1 << 0)
#define SYSCTRL_INTENSET_XOSC32KRDY	(1 << 1)
#define SYSCTRL_INTENSET_OSC32KRDY	(1 << 2)
#define SYSCTRL_INTENSET_OSC8MRDY	(1 << 3)
#define SYSCTRL_INTENSET_DFLLRDY	(1 << 4)
#define SYSCTRL_INTENSET_DFLLOOB	(1 << 5)
#define SYSCTRL_INTENSET_DFLLLCKF	(1 << 6)
#define SYSCTRL_INTENSET_DFLLLCKC	(1 << 7)
#define SYSCTRL_INTENSET_DFLLRCS	(1 << 8)
#define SYSCTRL_INTENSET_BOD33RDY	(1 << 9)
#define SYSCTRL_INTENSET_BOD33DET	(1 << 10)
#define SYSCTRL_INTENSET_B33SRDY	(1 << 11)
#define SYSCTRL_INTENSET_BOD12RDY	(1 << 12)
#define SYSCTRL_INTENSET_BOD12DET	(1 << 13)
#define SYSCTRL_INTENSET_B12SRDY	(1 << 14)

#define SYSCTRL_INTENSET_s    MMIO_REG(0x40000804, struct __struct_SYSCTRL_INTENSET)
struct __struct_SYSCTRL_INTENSET
{
  uint32_t xoscrdy : 1;
  uint32_t xosc32krdy : 1;
  uint32_t osc32krdy : 1;
  uint32_t osc8mrdy : 1;
  uint32_t dfllrdy : 1;
  uint32_t dflloob : 1;
  uint32_t dflllckf : 1;
  uint32_t dflllckc : 1;
  uint32_t dfllrcs : 1;
  uint32_t bod33rdy : 1;
  uint32_t bod33det : 1;
  uint32_t b33srdy : 1;
  uint32_t bod12rdy : 1;
  uint32_t bod12det : 1;
  uint32_t b12srdy : 1;
  uint32_t  : 17;
};

#define SYSCTRL_INTFLAG	MMIO_REG(0x40000808, uint32_t)
#define SYSCTRL_INTFLAG_XOSCRDY	(1 << 0)
#define SYSCTRL_INTFLAG_XOSC32KRDY	(1 << 1)
#define SYSCTRL_INTFLAG_OSC32KRDY	(1 << 2)
#define SYSCTRL_INTFLAG_OSC8MRDY	(1 << 3)
#define SYSCTRL_INTFLAG_DFLLRDY	(1 << 4)
#define SYSCTRL_INTFLAG_DFLLOOB	(1 << 5)
#define SYSCTRL_INTFLAG_DFLLLCKF	(1 << 6)
#define SYSCTRL_INTFLAG_DFLLLCKC	(1 << 7)
#define SYSCTRL_INTFLAG_DFLLRCS	(1 << 8)
#define SYSCTRL_INTFLAG_BOD33RDY	(1 << 9)
#define SYSCTRL_INTFLAG_BOD33DET	(1 << 10)
#define SYSCTRL_INTFLAG_B33SRDY	(1 << 11)
#define SYSCTRL_INTFLAG_BOD12RDY	(1 << 12)
#define SYSCTRL_INTFLAG_BOD12DET	(1 << 13)
#define SYSCTRL_INTFLAG_B12SRDY	(1 << 14)

#define SYSCTRL_INTFLAG_s    MMIO_REG(0x40000808, struct __struct_SYSCTRL_INTFLAG)
struct __struct_SYSCTRL_INTFLAG
{
  uint32_t xoscrdy : 1;
  uint32_t xosc32krdy : 1;
  uint32_t osc32krdy : 1;
  uint32_t osc8mrdy : 1;
  uint32_t dfllrdy : 1;
  uint32_t dflloob : 1;
  uint32_t dflllckf : 1;
  uint32_t dflllckc : 1;
  uint32_t dfllrcs : 1;
  uint32_t bod33rdy : 1;
  uint32_t bod33det : 1;
  uint32_t b33srdy : 1;
  uint32_t bod12rdy : 1;
  uint32_t bod12det : 1;
  uint32_t b12srdy : 1;
  uint32_t  : 17;
};

#define SYSCTRL_PCLKSR	MMIO_REG(0x4000080c, uint32_t)
#define SYSCTRL_PCLKSR_XOSCRDY	(1 << 0)
#define SYSCTRL_PCLKSR_XOSC32KRDY	(1 << 1)
#define SYSCTRL_PCLKSR_OSC32KRDY	(1 << 2)
#define SYSCTRL_PCLKSR_OSC8MRDY	(1 << 3)
#define SYSCTRL_PCLKSR_DFLLRDY	(1 << 4)
#define SYSCTRL_PCLKSR_DFLLOOB	(1 << 5)
#define SYSCTRL_PCLKSR_DFLLLCKF	(1 << 6)
#define SYSCTRL_PCLKSR_DFLLLCKC	(1 << 7)
#define SYSCTRL_PCLKSR_DFLLRCS	(1 << 8)
#define SYSCTRL_PCLKSR_BOD33RDY	(1 << 9)
#define SYSCTRL_PCLKSR_BOD33DET	(1 << 10)
#define SYSCTRL_PCLKSR_B33SRDY	(1 << 11)
#define SYSCTRL_PCLKSR_BOD12RDY	(1 << 12)
#define SYSCTRL_PCLKSR_BOD12DET	(1 << 13)
#define SYSCTRL_PCLKSR_B12SRDY	(1 << 14)

#define SYSCTRL_PCLKSR_s    MMIO_REG(0x4000080c, struct __struct_SYSCTRL_PCLKSR)
struct __struct_SYSCTRL_PCLKSR
{
  uint32_t xoscrdy : 1;
  uint32_t xosc32krdy : 1;
  uint32_t osc32krdy : 1;
  uint32_t osc8mrdy : 1;
  uint32_t dfllrdy : 1;
  uint32_t dflloob : 1;
  uint32_t dflllckf : 1;
  uint32_t dflllckc : 1;
  uint32_t dfllrcs : 1;
  uint32_t bod33rdy : 1;
  uint32_t bod33det : 1;
  uint32_t b33srdy : 1;
  uint32_t bod12rdy : 1;
  uint32_t bod12det : 1;
  uint32_t b12srdy : 1;
  uint32_t  : 17;
};

#define SYSCTRL_XOSC	MMIO_REG(0x40000810, uint16_t)
#define SYSCTRL_XOSC_ENABLE	(1 << 1)
#define SYSCTRL_XOSC_XTALEN	(1 << 2)
#define SYSCTRL_XOSC_RUNSTDBY	(1 << 6)
#define SYSCTRL_XOSC_ONDEMAND	(1 << 7)
#define SYSCTRL_XOSC_GAIN(x)	((x) << 8)
#define SYSCTRL_XOSC_GAIN_MSK	0x00000700
#define SYSCTRL_XOSC_GAIN_VAL(x)	(((x) >> 8) & 0x7)
#define SYSCTRL_XOSC_AMPGC	(1 << 11)
#define SYSCTRL_XOSC_STARTUP(x)	((x) << 12)
#define SYSCTRL_XOSC_STARTUP_MSK	0x0000f000
#define SYSCTRL_XOSC_STARTUP_VAL(x)	(((x) >> 12) & 0xf)

#define SYSCTRL_XOSC_s    MMIO_REG(0x40000810, struct __struct_SYSCTRL_XOSC)
struct __struct_SYSCTRL_XOSC
{
  uint16_t  : 1;
  uint16_t enable : 1;
  uint16_t xtalen : 1;
  uint16_t  : 3;
  uint16_t runstdby : 1;
  uint16_t ondemand : 1;
  uint16_t gain : 3;
  uint16_t ampgc : 1;
  uint16_t startup : 4;
};

#define SYSCTRL_XOSC32K	MMIO_REG(0x40000814, uint16_t)
#define SYSCTRL_XOSC32K_ENABLE	(1 << 1)
#define SYSCTRL_XOSC32K_XTALEN	(1 << 2)
#define SYSCTRL_XOSC32K_EN32K	(1 << 3)
#define SYSCTRL_XOSC32K_EN1K	(1 << 4)
#define SYSCTRL_XOSC32K_AAMPEN	(1 << 5)
#define SYSCTRL_XOSC32K_RUNSTDBY	(1 << 6)
#define SYSCTRL_XOSC32K_ONDEMAND	(1 << 7)
#define SYSCTRL_XOSC32K_STARTUP(x)	((x) << 8)
#define SYSCTRL_XOSC32K_STARTUP_MSK	0x00000700
#define SYSCTRL_XOSC32K_STARTUP_VAL(x)	(((x) >> 8) & 0x7)
#define SYSCTRL_XOSC32K_WRTLOCK	(1 << 12)

#define SYSCTRL_XOSC32K_s    MMIO_REG(0x40000814, struct __struct_SYSCTRL_XOSC32K)
struct __struct_SYSCTRL_XOSC32K
{
  uint16_t  : 1;
  uint16_t enable : 1;
  uint16_t xtalen : 1;
  uint16_t en32k : 1;
  uint16_t en1k : 1;
  uint16_t aampen : 1;
  uint16_t runstdby : 1;
  uint16_t ondemand : 1;
  uint16_t startup : 3;
  uint16_t  : 1;
  uint16_t wrtlock : 1;
  uint16_t  : 3;
};

#define SYSCTRL_OSC32K	MMIO_REG(0x40000818, uint32_t)
#define SYSCTRL_OSC32K_ENABLE	(1 << 1)
#define SYSCTRL_OSC32K_EN32K	(1 << 2)
#define SYSCTRL_OSC32K_EN1K	(1 << 3)
#define SYSCTRL_OSC32K_RUNSTDBY	(1 << 6)
#define SYSCTRL_OSC32K_ONDEMAND	(1 << 7)
#define SYSCTRL_OSC32K_STARTUP(x)	((x) << 8)
#define SYSCTRL_OSC32K_STARTUP_MSK	0x00000700
#define SYSCTRL_OSC32K_STARTUP_VAL(x)	(((x) >> 8) & 0x7)
#define SYSCTRL_OSC32K_WRTLOCK	(1 << 12)
#define SYSCTRL_OSC32K_CALIB(x)	((x) << 16)
#define SYSCTRL_OSC32K_CALIB_MSK	0x007f0000
#define SYSCTRL_OSC32K_CALIB_VAL(x)	(((x) >> 16) & 0x7f)

#define SYSCTRL_OSC32K_s    MMIO_REG(0x40000818, struct __struct_SYSCTRL_OSC32K)
struct __struct_SYSCTRL_OSC32K
{
  uint32_t  : 1;
  uint32_t enable : 1;
  uint32_t en32k : 1;
  uint32_t en1k : 1;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t ondemand : 1;
  uint32_t startup : 3;
  uint32_t  : 1;
  uint32_t wrtlock : 1;
  uint32_t  : 3;
  uint32_t calib : 7;
  uint32_t  : 9;
};

#define SYSCTRL_OSCULP32K	MMIO_REG(0x4000081c, uint8_t)
#define SYSCTRL_OSCULP32K_CALIB(x)	((x) << 0)
#define SYSCTRL_OSCULP32K_CALIB_MSK	0x0000001f
#define SYSCTRL_OSCULP32K_CALIB_VAL(x)	(((x) >> 0) & 0x1f)
#define SYSCTRL_OSCULP32K_WRTLOCK	(1 << 7)

#define SYSCTRL_OSCULP32K_s    MMIO_REG(0x4000081c, struct __struct_SYSCTRL_OSCULP32K)
struct __struct_SYSCTRL_OSCULP32K
{
  uint8_t calib : 5;
  uint8_t  : 2;
  uint8_t wrtlock : 1;
};

#define SYSCTRL_OSC8M	MMIO_REG(0x40000820, uint32_t)
#define SYSCTRL_OSC8M_ENABLE	(1 << 1)
#define SYSCTRL_OSC8M_RUNSTDBY	(1 << 6)
#define SYSCTRL_OSC8M_ONDEMAND	(1 << 7)
#define SYSCTRL_OSC8M_PRESC(x)	((x) << 8)
#define SYSCTRL_OSC8M_PRESC_MSK	0x00000300
#define SYSCTRL_OSC8M_PRESC_VAL(x)	(((x) >> 8) & 0x3)
#define SYSCTRL_OSC8M_CALIB(x)	((x) << 16)
#define SYSCTRL_OSC8M_CALIB_MSK	0x0fff0000
#define SYSCTRL_OSC8M_CALIB_VAL(x)	(((x) >> 16) & 0xfff)
#define SYSCTRL_OSC8M_FRANGE(x)	((x) << 30)
#define SYSCTRL_OSC8M_FRANGE_MSK	0xc0000000
#define SYSCTRL_OSC8M_FRANGE_VAL(x)	(((x) >> 30) & 0x3)

#define SYSCTRL_OSC8M_s    MMIO_REG(0x40000820, struct __struct_SYSCTRL_OSC8M)
struct __struct_SYSCTRL_OSC8M
{
  uint32_t  : 1;
  uint32_t enable : 1;
  uint32_t  : 4;
  uint32_t runstdby : 1;
  uint32_t ondemand : 1;
  uint32_t presc : 2;
  uint32_t  : 6;
  uint32_t calib : 12;
  uint32_t  : 2;
  uint32_t frange : 2;
};

#define SYSCTRL_DFLLCTRL	MMIO_REG(0x40000824, uint16_t)
#define SYSCTRL_DFLLCTRL_ENABLE	(1 << 1)
#define SYSCTRL_DFLLCTRL_MODE	(1 << 2)
#define SYSCTRL_DFLLCTRL_STABLE	(1 << 3)
#define SYSCTRL_DFLLCTRL_LLAW	(1 << 4)
#define SYSCTRL_DFLLCTRL_RUNSTDBY	(1 << 6)
#define SYSCTRL_DFLLCTRL_ONDEMAND	(1 << 7)
#define SYSCTRL_DFLLCTRL_CCDIS	(1 << 8)
#define SYSCTRL_DFLLCTRL_QLDIS	(1 << 9)

#define SYSCTRL_DFLLCTRL_s    MMIO_REG(0x40000824, struct __struct_SYSCTRL_DFLLCTRL)
struct __struct_SYSCTRL_DFLLCTRL
{
  uint16_t  : 1;
  uint16_t enable : 1;
  uint16_t mode : 1;
  uint16_t stable : 1;
  uint16_t llaw : 1;
  uint16_t  : 1;
  uint16_t runstdby : 1;
  uint16_t ondemand : 1;
  uint16_t ccdis : 1;
  uint16_t qldis : 1;
  uint16_t  : 6;
};

#define SYSCTRL_DFLLVAL	MMIO_REG(0x40000828, uint32_t)
#define SYSCTRL_DFLLVAL_FINE(x)	((x) << 0)
#define SYSCTRL_DFLLVAL_FINE_MSK	0x000000ff
#define SYSCTRL_DFLLVAL_FINE_VAL(x)	(((x) >> 0) & 0xff)
#define SYSCTRL_DFLLVAL_COARSE(x)	((x) << 8)
#define SYSCTRL_DFLLVAL_COARSE_MSK	0x00001f00
#define SYSCTRL_DFLLVAL_COARSE_VAL(x)	(((x) >> 8) & 0x1f)
#define SYSCTRL_DFLLVAL_DIFF(x)	((x) << 16)
#define SYSCTRL_DFLLVAL_DIFF_MSK	0xffff0000
#define SYSCTRL_DFLLVAL_DIFF_VAL(x)	(((x) >> 16) & 0xffff)

#define SYSCTRL_DFLLVAL_s    MMIO_REG(0x40000828, struct __struct_SYSCTRL_DFLLVAL)
struct __struct_SYSCTRL_DFLLVAL
{
  uint32_t fine : 8;
  uint32_t coarse : 5;
  uint32_t  : 3;
  uint32_t diff : 16;
};

#define SYSCTRL_DFLLMUL	MMIO_REG(0x4000082c, uint32_t)
#define SYSCTRL_DFLLMUL_MUL(x)	((x) << 0)
#define SYSCTRL_DFLLMUL_MUL_MSK	0x0000ffff
#define SYSCTRL_DFLLMUL_MUL_VAL(x)	(((x) >> 0) & 0xffff)
#define SYSCTRL_DFLLMUL_FSTEP(x)	((x) << 16)
#define SYSCTRL_DFLLMUL_FSTEP_MSK	0x00ff0000
#define SYSCTRL_DFLLMUL_FSTEP_VAL(x)	(((x) >> 16) & 0xff)
#define SYSCTRL_DFLLMUL_CSTEP(x)	((x) << 24)
#define SYSCTRL_DFLLMUL_CSTEP_MSK	0x1f000000
#define SYSCTRL_DFLLMUL_CSTEP_VAL(x)	(((x) >> 24) & 0x1f)

#define SYSCTRL_DFLLMUL_s    MMIO_REG(0x4000082c, struct __struct_SYSCTRL_DFLLMUL)
struct __struct_SYSCTRL_DFLLMUL
{
  uint32_t mul : 16;
  uint32_t fstep : 8;
  uint32_t cstep : 5;
  uint32_t  : 3;
};

#define SYSCTRL_DFLLSYNC	MMIO_REG(0x40000830, uint8_t)
#define SYSCTRL_DFLLSYNC_READREQ	(1 << 7)

#define SYSCTRL_DFLLSYNC_s    MMIO_REG(0x40000830, struct __struct_SYSCTRL_DFLLSYNC)
struct __struct_SYSCTRL_DFLLSYNC
{
  uint8_t  : 7;
  uint8_t readreq : 1;
};

#define SYSCTRL_BOD33	MMIO_REG(0x40000834, uint32_t)
#define SYSCTRL_BOD33_ENABLE	(1 << 1)
#define SYSCTRL_BOD33_HYST	(1 << 2)
#define SYSCTRL_BOD33_ACTION(x)	((x) << 3)
#define SYSCTRL_BOD33_ACTION_MSK	0x00000018
#define SYSCTRL_BOD33_ACTION_VAL(x)	(((x) >> 3) & 0x3)
#define SYSCTRL_BOD33_RUNSTDBY	(1 << 6)
#define SYSCTRL_BOD33_MODE	(1 << 8)
#define SYSCTRL_BOD33_CEN	(1 << 9)
#define SYSCTRL_BOD33_PSEL(x)	((x) << 12)
#define SYSCTRL_BOD33_PSEL_MSK	0x0000f000
#define SYSCTRL_BOD33_PSEL_VAL(x)	(((x) >> 12) & 0xf)
#define SYSCTRL_BOD33_LEVEL(x)	((x) << 16)
#define SYSCTRL_BOD33_LEVEL_MSK	0x001f0000
#define SYSCTRL_BOD33_LEVEL_VAL(x)	(((x) >> 16) & 0x1f)

#define SYSCTRL_BOD33_s    MMIO_REG(0x40000834, struct __struct_SYSCTRL_BOD33)
struct __struct_SYSCTRL_BOD33
{
  uint32_t  : 1;
  uint32_t enable : 1;
  uint32_t hyst : 1;
  uint32_t action : 2;
  uint32_t  : 1;
  uint32_t runstdby : 1;
  uint32_t  : 1;
  uint32_t mode : 1;
  uint32_t cen : 1;
  uint32_t  : 2;
  uint32_t psel : 4;
  uint32_t level : 5;
  uint32_t  : 11;
};

#define SYSCTRL_BOD12	MMIO_REG(0x40000838, uint32_t)
#define SYSCTRL_BOD12_ENABLE	(1 << 1)
#define SYSCTRL_BOD12_HYST	(1 << 2)
#define SYSCTRL_BOD12_ACTION(x)	((x) << 3)
#define SYSCTRL_BOD12_ACTION_MSK	0x00000018
#define SYSCTRL_BOD12_ACTION_VAL(x)	(((x) >> 3) & 0x3)
#define SYSCTRL_BOD12_RUNSTDBY	(1 << 6)
#define SYSCTRL_BOD12_MODE	(1 << 8)
#define SYSCTRL_BOD12_CEN	(1 << 9)
#define SYSCTRL_BOD12_PSEL(x)	((x) << 12)
#define SYSCTRL_BOD12_PSEL_MSK	0x0000f000
#define SYSCTRL_BOD12_PSEL_VAL(x)	(((x) >> 12) & 0xf)
#define SYSCTRL_BOD12_LEVEL(x)	((x) << 16)
#define SYSCTRL_BOD12_LEVEL_MSK	0x001f0000
#define SYSCTRL_BOD12_LEVEL_VAL(x)	(((x) >> 16) & 0x1f)

#define SYSCTRL_BOD12_s    MMIO_REG(0x40000838, struct __struct_SYSCTRL_BOD12)
struct __struct_SYSCTRL_BOD12
{
  uint32_t  : 1;
  uint32_t enable : 1;
  uint32_t hyst : 1;
  uint32_t action : 2;
  uint32_t  : 1;
  uint32_t runstdby : 1;
  uint32_t  : 1;
  uint32_t mode : 1;
  uint32_t cen : 1;
  uint32_t  : 2;
  uint32_t psel : 4;
  uint32_t level : 5;
  uint32_t  : 11;
};

#define SYSCTRL_VREG	MMIO_REG(0x4000083c, uint16_t)
#define SYSCTRL_VREG_ENABLE	(1 << 1)
#define SYSCTRL_VREG_VDMON(x)	((x) << 4)
#define SYSCTRL_VREG_VDMON_MSK	0x00000030
#define SYSCTRL_VREG_VDMON_VAL(x)	(((x) >> 4) & 0x3)
#define SYSCTRL_VREG_RUNSTDBY	(1 << 6)
#define SYSCTRL_VREG_LEVEL(x)	((x) << 8)
#define SYSCTRL_VREG_LEVEL_MSK	0x00000700
#define SYSCTRL_VREG_LEVEL_VAL(x)	(((x) >> 8) & 0x7)
#define SYSCTRL_VREG_CALIB(x)	((x) << 12)
#define SYSCTRL_VREG_CALIB_MSK	0x00007000
#define SYSCTRL_VREG_CALIB_VAL(x)	(((x) >> 12) & 0x7)

#define SYSCTRL_VREG_s    MMIO_REG(0x4000083c, struct __struct_SYSCTRL_VREG)
struct __struct_SYSCTRL_VREG
{
  uint16_t  : 1;
  uint16_t enable : 1;
  uint16_t  : 2;
  uint16_t vdmon : 2;
  uint16_t runstdby : 1;
  uint16_t  : 1;
  uint16_t level : 3;
  uint16_t  : 1;
  uint16_t calib : 3;
  uint16_t  : 1;
};

#define SYSCTRL_VREF	MMIO_REG(0x40000840, uint32_t)
#define SYSCTRL_VREF_TSEN	(1 << 1)
#define SYSCTRL_VREF_BGOUTEN	(1 << 2)
#define SYSCTRL_VREF_CALIB(x)	((x) << 16)
#define SYSCTRL_VREF_CALIB_MSK	0x07ff0000
#define SYSCTRL_VREF_CALIB_VAL(x)	(((x) >> 16) & 0x7ff)

#define SYSCTRL_VREF_s    MMIO_REG(0x40000840, struct __struct_SYSCTRL_VREF)
struct __struct_SYSCTRL_VREF
{
  uint32_t  : 1;
  uint32_t tsen : 1;
  uint32_t bgouten : 1;
  uint32_t  : 13;
  uint32_t calib : 11;
  uint32_t  : 5;
};

// 0x40000c00 GCLK

#define GCLK_CTRL	MMIO_REG(0x40000c00, uint8_t)
#define GCLK_CTRL_SWRST	(1 << 0)

#define GCLK_CTRL_s    MMIO_REG(0x40000c00, struct __struct_GCLK_CTRL)
struct __struct_GCLK_CTRL
{
  uint8_t swrst : 1;
  uint8_t  : 7;
};

#define GCLK_STATUS	MMIO_REG(0x40000c01, uint8_t)
#define GCLK_STATUS_SYNCBUSY	(1 << 7)

#define GCLK_STATUS_s    MMIO_REG(0x40000c01, struct __struct_GCLK_STATUS)
struct __struct_GCLK_STATUS
{
  uint8_t  : 7;
  uint8_t syncbusy : 1;
};

#define GCLK_CLKCTRL	MMIO_REG(0x40000c02, uint16_t)
#define GCLK_CLKCTRL_ID(x)	((x) << 0)
#define GCLK_CLKCTRL_ID_MSK	0x0000003f
#define GCLK_CLKCTRL_ID_VAL(x)	(((x) >> 0) & 0x3f)
#define GCLK_CLKCTRL_GEN(x)	((x) << 8)
#define GCLK_CLKCTRL_GEN_MSK	0x00000f00
#define GCLK_CLKCTRL_GEN_VAL(x)	(((x) >> 8) & 0xf)
#define GCLK_CLKCTRL_CLKEN	(1 << 14)
#define GCLK_CLKCTRL_WRTLOCK	(1 << 15)

#define GCLK_CLKCTRL_s    MMIO_REG(0x40000c02, struct __struct_GCLK_CLKCTRL)
struct __struct_GCLK_CLKCTRL
{
  uint16_t id : 6;
  uint16_t  : 2;
  uint16_t gen : 4;
  uint16_t  : 2;
  uint16_t clken : 1;
  uint16_t wrtlock : 1;
};

#define GCLK_GENCTRL	MMIO_REG(0x40000c04, uint32_t)
#define GCLK_GENCTRL_ID(x)	((x) << 0)
#define GCLK_GENCTRL_ID_MSK	0x0000000f
#define GCLK_GENCTRL_ID_VAL(x)	(((x) >> 0) & 0xf)
#define GCLK_GENCTRL_SRC(x)	((x) << 8)
#define GCLK_GENCTRL_SRC_MSK	0x00001f00
#define GCLK_GENCTRL_SRC_VAL(x)	(((x) >> 8) & 0x1f)
#define GCLK_GENCTRL_GENEN	(1 << 16)
#define GCLK_GENCTRL_IDC	(1 << 17)
#define GCLK_GENCTRL_OOV	(1 << 18)
#define GCLK_GENCTRL_OE	(1 << 19)
#define GCLK_GENCTRL_DIVSEL	(1 << 20)
#define GCLK_GENCTRL_RUNSTDBY	(1 << 21)

#define GCLK_GENCTRL_s    MMIO_REG(0x40000c04, struct __struct_GCLK_GENCTRL)
struct __struct_GCLK_GENCTRL
{
  uint32_t id : 4;
  uint32_t  : 4;
  uint32_t src : 5;
  uint32_t  : 3;
  uint32_t genen : 1;
  uint32_t idc : 1;
  uint32_t oov : 1;
  uint32_t oe : 1;
  uint32_t divsel : 1;
  uint32_t runstdby : 1;
  uint32_t  : 10;
};

#define GCLK_GENDIV	MMIO_REG(0x40000c08, uint32_t)
#define GCLK_GENDIV_ID(x)	((x) << 0)
#define GCLK_GENDIV_ID_MSK	0x0000000f
#define GCLK_GENDIV_ID_VAL(x)	(((x) >> 0) & 0xf)
#define GCLK_GENDIV_DIV(x)	((x) << 8)
#define GCLK_GENDIV_DIV_MSK	0x00ffff00
#define GCLK_GENDIV_DIV_VAL(x)	(((x) >> 8) & 0xffff)

#define GCLK_GENDIV_s    MMIO_REG(0x40000c08, struct __struct_GCLK_GENDIV)
struct __struct_GCLK_GENDIV
{
  uint32_t id : 4;
  uint32_t  : 4;
  uint32_t div : 16;
  uint32_t  : 8;
};

// 0x40001000 WDT

#define WDT_CTRL	MMIO_REG(0x40001000, uint8_t)
#define WDT_CTRL_ENABLE	(1 << 1)
#define WDT_CTRL_WEN	(1 << 2)
#define WDT_CTRL_ALWAYSON	(1 << 7)

#define WDT_CTRL_s    MMIO_REG(0x40001000, struct __struct_WDT_CTRL)
struct __struct_WDT_CTRL
{
  uint8_t  : 1;
  uint8_t enable : 1;
  uint8_t wen : 1;
  uint8_t  : 4;
  uint8_t alwayson : 1;
};

#define WDT_CONFIG	MMIO_REG(0x40001001, uint8_t)
#define WDT_CONFIG_PER(x)	((x) << 0)
#define WDT_CONFIG_PER_MSK	0x0000000f
#define WDT_CONFIG_PER_VAL(x)	(((x) >> 0) & 0xf)
#define WDT_CONFIG_WINDOW(x)	((x) << 4)
#define WDT_CONFIG_WINDOW_MSK	0x000000f0
#define WDT_CONFIG_WINDOW_VAL(x)	(((x) >> 4) & 0xf)

#define WDT_CONFIG_s    MMIO_REG(0x40001001, struct __struct_WDT_CONFIG)
struct __struct_WDT_CONFIG
{
  uint8_t per : 4;
  uint8_t window : 4;
};

#define WDT_EWCTRL	MMIO_REG(0x40001002, uint8_t)
#define WDT_EWCTRL_EWOFFSET(x)	((x) << 0)
#define WDT_EWCTRL_EWOFFSET_MSK	0x0000000f
#define WDT_EWCTRL_EWOFFSET_VAL(x)	(((x) >> 0) & 0xf)

#define WDT_EWCTRL_s    MMIO_REG(0x40001002, struct __struct_WDT_EWCTRL)
struct __struct_WDT_EWCTRL
{
  uint8_t ewoffset : 4;
  uint8_t  : 4;
};

#define WDT_INTENCLR	MMIO_REG(0x40001004, uint8_t)
#define WDT_INTENCLR_EW	(1 << 0)

#define WDT_INTENCLR_s    MMIO_REG(0x40001004, struct __struct_WDT_INTENCLR)
struct __struct_WDT_INTENCLR
{
  uint8_t ew : 1;
  uint8_t  : 7;
};

#define WDT_INTENSET	MMIO_REG(0x40001005, uint8_t)
#define WDT_INTENSET_EW	(1 << 0)

#define WDT_INTENSET_s    MMIO_REG(0x40001005, struct __struct_WDT_INTENSET)
struct __struct_WDT_INTENSET
{
  uint8_t ew : 1;
  uint8_t  : 7;
};

#define WDT_INTFLAG	MMIO_REG(0x40001006, uint8_t)
#define WDT_INTFLAG_EW	(1 << 0)

#define WDT_INTFLAG_s    MMIO_REG(0x40001006, struct __struct_WDT_INTFLAG)
struct __struct_WDT_INTFLAG
{
  uint8_t ew : 1;
  uint8_t  : 7;
};

#define WDT_STATUS	MMIO_REG(0x40001007, uint8_t)
#define WDT_STATUS_SYNCBUSY	(1 << 7)

#define WDT_STATUS_s    MMIO_REG(0x40001007, struct __struct_WDT_STATUS)
struct __struct_WDT_STATUS
{
  uint8_t  : 7;
  uint8_t syncbusy : 1;
};

#define WDT_CLEAR	MMIO_REG(0x40001008, uint8_t)
#define WDT_CLEAR_CLEAR(x)	((x) << 0)
#define WDT_CLEAR_CLEAR_MSK	0x000000ff
#define WDT_CLEAR_CLEAR_VAL(x)	(((x) >> 0) & 0xff)

#define WDT_CLEAR_s    MMIO_REG(0x40001008, struct __struct_WDT_CLEAR)
struct __struct_WDT_CLEAR
{
  uint8_t clear : 8;
};

// 0x40001400 RTC_M0

#define RTC_M0_CTRL	MMIO_REG(0x40001400, uint16_t)
#define RTC_M0_CTRL_SWRST	(1 << 0)
#define RTC_M0_CTRL_ENABLE	(1 << 1)
#define RTC_M0_CTRL_MODE(x)	((x) << 2)
#define RTC_M0_CTRL_MODE_MSK	0x0000000c
#define RTC_M0_CTRL_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define RTC_M0_CTRL_CLKREP	(1 << 6)
#define RTC_M0_CTRL_MATCHCLR	(1 << 7)
#define RTC_M0_CTRL_PRESCALER(x)	((x) << 8)
#define RTC_M0_CTRL_PRESCALER_MSK	0x00000f00
#define RTC_M0_CTRL_PRESCALER_VAL(x)	(((x) >> 8) & 0xf)

#define RTC_M0_CTRL_s    MMIO_REG(0x40001400, struct __struct_RTC_M0_CTRL)
struct __struct_RTC_M0_CTRL
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 2;
  uint16_t clkrep : 1;
  uint16_t matchclr : 1;
  uint16_t prescaler : 4;
  uint16_t  : 4;
};

#define RTC_M0_READREQ	MMIO_REG(0x40001402, uint16_t)
#define RTC_M0_READREQ_ADDR(x)	((x) << 0)
#define RTC_M0_READREQ_ADDR_MSK	0x0000003f
#define RTC_M0_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x3f)
#define RTC_M0_READREQ_RCONT	(1 << 14)
#define RTC_M0_READREQ_RREQ	(1 << 15)

#define RTC_M0_READREQ_s    MMIO_REG(0x40001402, struct __struct_RTC_M0_READREQ)
struct __struct_RTC_M0_READREQ
{
  uint16_t addr : 6;
  uint16_t  : 8;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define RTC_M0_EVCTRL	MMIO_REG(0x40001404, uint16_t)
#define RTC_M0_EVCTRL_PEREO0	(1 << 0)
#define RTC_M0_EVCTRL_PEREO1	(1 << 1)
#define RTC_M0_EVCTRL_PEREO2	(1 << 2)
#define RTC_M0_EVCTRL_PEREO3	(1 << 3)
#define RTC_M0_EVCTRL_PEREO4	(1 << 4)
#define RTC_M0_EVCTRL_PEREO5	(1 << 5)
#define RTC_M0_EVCTRL_PEREO6	(1 << 6)
#define RTC_M0_EVCTRL_PEREO7	(1 << 7)
#define RTC_M0_EVCTRL_CMPEO0	(1 << 8)
#define RTC_M0_EVCTRL_OVFEO	(1 << 15)

#define RTC_M0_EVCTRL_s    MMIO_REG(0x40001404, struct __struct_RTC_M0_EVCTRL)
struct __struct_RTC_M0_EVCTRL
{
  uint16_t pereo0 : 1;
  uint16_t pereo1 : 1;
  uint16_t pereo2 : 1;
  uint16_t pereo3 : 1;
  uint16_t pereo4 : 1;
  uint16_t pereo5 : 1;
  uint16_t pereo6 : 1;
  uint16_t pereo7 : 1;
  uint16_t cmpeo0 : 1;
  uint16_t  : 6;
  uint16_t ovfeo : 1;
};

#define RTC_M0_INTENCLR	MMIO_REG(0x40001406, uint8_t)
#define RTC_M0_INTENCLR_CMP0	(1 << 0)
#define RTC_M0_INTENCLR_SYNCRDY	(1 << 6)
#define RTC_M0_INTENCLR_OVF	(1 << 7)

#define RTC_M0_INTENCLR_s    MMIO_REG(0x40001406, struct __struct_RTC_M0_INTENCLR)
struct __struct_RTC_M0_INTENCLR
{
  uint8_t cmp0 : 1;
  uint8_t  : 5;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M0_INTENSET	MMIO_REG(0x40001407, uint8_t)
#define RTC_M0_INTENSET_CMP0	(1 << 0)
#define RTC_M0_INTENSET_SYNCRDY	(1 << 6)
#define RTC_M0_INTENSET_OVF	(1 << 7)

#define RTC_M0_INTENSET_s    MMIO_REG(0x40001407, struct __struct_RTC_M0_INTENSET)
struct __struct_RTC_M0_INTENSET
{
  uint8_t cmp0 : 1;
  uint8_t  : 5;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M0_INTFLAG	MMIO_REG(0x40001408, uint8_t)
#define RTC_M0_INTFLAG_CMP0	(1 << 0)
#define RTC_M0_INTFLAG_SYNCRDY	(1 << 6)
#define RTC_M0_INTFLAG_OVF	(1 << 7)

#define RTC_M0_INTFLAG_s    MMIO_REG(0x40001408, struct __struct_RTC_M0_INTFLAG)
struct __struct_RTC_M0_INTFLAG
{
  uint8_t cmp0 : 1;
  uint8_t  : 5;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M0_STATUS	MMIO_REG(0x4000140a, uint8_t)
#define RTC_M0_STATUS_SYNCBUSY	(1 << 7)

#define RTC_M0_STATUS_s    MMIO_REG(0x4000140a, struct __struct_RTC_M0_STATUS)
struct __struct_RTC_M0_STATUS
{
  uint8_t  : 7;
  uint8_t syncbusy : 1;
};

#define RTC_M0_DBGCTRL	MMIO_REG(0x4000140b, uint8_t)
#define RTC_M0_DBGCTRL_DBGRUN	(1 << 0)

#define RTC_M0_DBGCTRL_s    MMIO_REG(0x4000140b, struct __struct_RTC_M0_DBGCTRL)
struct __struct_RTC_M0_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define RTC_M0_FREQCORR	MMIO_REG(0x4000140c, uint8_t)
#define RTC_M0_FREQCORR_VALUE(x)	((x) << 0)
#define RTC_M0_FREQCORR_VALUE_MSK	0x0000007f
#define RTC_M0_FREQCORR_VALUE_VAL(x)	(((x) >> 0) & 0x7f)
#define RTC_M0_FREQCORR_SIGN	(1 << 7)

#define RTC_M0_FREQCORR_s    MMIO_REG(0x4000140c, struct __struct_RTC_M0_FREQCORR)
struct __struct_RTC_M0_FREQCORR
{
  uint8_t value : 7;
  uint8_t sign : 1;
};

#define RTC_M0_COUNT	MMIO_REG(0x40001410, uint32_t)
#define RTC_M0_COUNT_COUNT(x)	((x) << 0)
#define RTC_M0_COUNT_COUNT_MSK	0xffffffff
#define RTC_M0_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define RTC_M0_COUNT_s    MMIO_REG(0x40001410, struct __struct_RTC_M0_COUNT)
struct __struct_RTC_M0_COUNT
{
  uint32_t count : 32;
};

#define RTC_M0_COMP0	MMIO_REG(0x40001418, uint32_t)
#define RTC_M0_COMP0_COMP(x)	((x) << 0)
#define RTC_M0_COMP0_COMP_MSK	0xffffffff
#define RTC_M0_COMP0_COMP_VAL(x)	(((x) >> 0) & 0xffffffff)

#define RTC_M0_COMP0_s    MMIO_REG(0x40001418, struct __struct_RTC_M0_COMP0)
struct __struct_RTC_M0_COMP0
{
  uint32_t comp : 32;
};

// 0x40001400 RTC_M1

#define RTC_M1_CTRL	MMIO_REG(0x40001400, uint16_t)
#define RTC_M1_CTRL_SWRST	(1 << 0)
#define RTC_M1_CTRL_ENABLE	(1 << 1)
#define RTC_M1_CTRL_MODE(x)	((x) << 2)
#define RTC_M1_CTRL_MODE_MSK	0x0000000c
#define RTC_M1_CTRL_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define RTC_M1_CTRL_CLKREP	(1 << 6)
#define RTC_M1_CTRL_MATCHCLR	(1 << 7)
#define RTC_M1_CTRL_PRESCALER(x)	((x) << 8)
#define RTC_M1_CTRL_PRESCALER_MSK	0x00000f00
#define RTC_M1_CTRL_PRESCALER_VAL(x)	(((x) >> 8) & 0xf)

#define RTC_M1_CTRL_s    MMIO_REG(0x40001400, struct __struct_RTC_M1_CTRL)
struct __struct_RTC_M1_CTRL
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 2;
  uint16_t clkrep : 1;
  uint16_t matchclr : 1;
  uint16_t prescaler : 4;
  uint16_t  : 4;
};

#define RTC_M1_READREQ	MMIO_REG(0x40001402, uint16_t)
#define RTC_M1_READREQ_ADDR(x)	((x) << 0)
#define RTC_M1_READREQ_ADDR_MSK	0x0000003f
#define RTC_M1_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x3f)
#define RTC_M1_READREQ_RCONT	(1 << 14)
#define RTC_M1_READREQ_RREQ	(1 << 15)

#define RTC_M1_READREQ_s    MMIO_REG(0x40001402, struct __struct_RTC_M1_READREQ)
struct __struct_RTC_M1_READREQ
{
  uint16_t addr : 6;
  uint16_t  : 8;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define RTC_M1_EVCTRL	MMIO_REG(0x40001404, uint16_t)
#define RTC_M1_EVCTRL_PEREO0	(1 << 0)
#define RTC_M1_EVCTRL_PEREO1	(1 << 1)
#define RTC_M1_EVCTRL_PEREO2	(1 << 2)
#define RTC_M1_EVCTRL_PEREO3	(1 << 3)
#define RTC_M1_EVCTRL_PEREO4	(1 << 4)
#define RTC_M1_EVCTRL_PEREO5	(1 << 5)
#define RTC_M1_EVCTRL_PEREO6	(1 << 6)
#define RTC_M1_EVCTRL_PEREO7	(1 << 7)
#define RTC_M1_EVCTRL_CMPEO0	(1 << 8)
#define RTC_M1_EVCTRL_CMPEO1	(1 << 9)
#define RTC_M1_EVCTRL_OVFEO	(1 << 15)

#define RTC_M1_EVCTRL_s    MMIO_REG(0x40001404, struct __struct_RTC_M1_EVCTRL)
struct __struct_RTC_M1_EVCTRL
{
  uint16_t pereo0 : 1;
  uint16_t pereo1 : 1;
  uint16_t pereo2 : 1;
  uint16_t pereo3 : 1;
  uint16_t pereo4 : 1;
  uint16_t pereo5 : 1;
  uint16_t pereo6 : 1;
  uint16_t pereo7 : 1;
  uint16_t cmpeo0 : 1;
  uint16_t cmpeo1 : 1;
  uint16_t  : 5;
  uint16_t ovfeo : 1;
};

#define RTC_M1_INTENCLR	MMIO_REG(0x40001406, uint8_t)
#define RTC_M1_INTENCLR_CMP0	(1 << 0)
#define RTC_M1_INTENCLR_CMP1	(1 << 1)
#define RTC_M1_INTENCLR_SYNCRDY	(1 << 6)
#define RTC_M1_INTENCLR_OVF	(1 << 7)

#define RTC_M1_INTENCLR_s    MMIO_REG(0x40001406, struct __struct_RTC_M1_INTENCLR)
struct __struct_RTC_M1_INTENCLR
{
  uint8_t cmp0 : 1;
  uint8_t cmp1 : 1;
  uint8_t  : 4;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M1_INTENSET	MMIO_REG(0x40001407, uint8_t)
#define RTC_M1_INTENSET_CMP0	(1 << 0)
#define RTC_M1_INTENSET_CMP1	(1 << 1)
#define RTC_M1_INTENSET_SYNCRDY	(1 << 6)
#define RTC_M1_INTENSET_OVF	(1 << 7)

#define RTC_M1_INTENSET_s    MMIO_REG(0x40001407, struct __struct_RTC_M1_INTENSET)
struct __struct_RTC_M1_INTENSET
{
  uint8_t cmp0 : 1;
  uint8_t cmp1 : 1;
  uint8_t  : 4;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M1_INTFLAG	MMIO_REG(0x40001408, uint8_t)
#define RTC_M1_INTFLAG_CMP0	(1 << 0)
#define RTC_M1_INTFLAG_CMP1	(1 << 1)
#define RTC_M1_INTFLAG_SYNCRDY	(1 << 6)
#define RTC_M1_INTFLAG_OVF	(1 << 7)

#define RTC_M1_INTFLAG_s    MMIO_REG(0x40001408, struct __struct_RTC_M1_INTFLAG)
struct __struct_RTC_M1_INTFLAG
{
  uint8_t cmp0 : 1;
  uint8_t cmp1 : 1;
  uint8_t  : 4;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M1_STATUS	MMIO_REG(0x4000140a, uint8_t)
#define RTC_M1_STATUS_SYNCBUSY	(1 << 7)

#define RTC_M1_STATUS_s    MMIO_REG(0x4000140a, struct __struct_RTC_M1_STATUS)
struct __struct_RTC_M1_STATUS
{
  uint8_t  : 7;
  uint8_t syncbusy : 1;
};

#define RTC_M1_DBGCTRL	MMIO_REG(0x4000140b, uint8_t)
#define RTC_M1_DBGCTRL_DBGRUN	(1 << 0)

#define RTC_M1_DBGCTRL_s    MMIO_REG(0x4000140b, struct __struct_RTC_M1_DBGCTRL)
struct __struct_RTC_M1_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define RTC_M1_FREQCORR	MMIO_REG(0x4000140c, uint8_t)
#define RTC_M1_FREQCORR_VALUE(x)	((x) << 0)
#define RTC_M1_FREQCORR_VALUE_MSK	0x0000007f
#define RTC_M1_FREQCORR_VALUE_VAL(x)	(((x) >> 0) & 0x7f)
#define RTC_M1_FREQCORR_SIGN	(1 << 7)

#define RTC_M1_FREQCORR_s    MMIO_REG(0x4000140c, struct __struct_RTC_M1_FREQCORR)
struct __struct_RTC_M1_FREQCORR
{
  uint8_t value : 7;
  uint8_t sign : 1;
};

#define RTC_M1_COUNT	MMIO_REG(0x40001410, uint16_t)
#define RTC_M1_COUNT_COUNT(x)	((x) << 0)
#define RTC_M1_COUNT_COUNT_MSK	0x0000ffff
#define RTC_M1_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define RTC_M1_COUNT_s    MMIO_REG(0x40001410, struct __struct_RTC_M1_COUNT)
struct __struct_RTC_M1_COUNT
{
  uint16_t count : 16;
};

#define RTC_M1_PER	MMIO_REG(0x40001414, uint16_t)
#define RTC_M1_PER_PER(x)	((x) << 0)
#define RTC_M1_PER_PER_MSK	0x0000ffff
#define RTC_M1_PER_PER_VAL(x)	(((x) >> 0) & 0xffff)

#define RTC_M1_PER_s    MMIO_REG(0x40001414, struct __struct_RTC_M1_PER)
struct __struct_RTC_M1_PER
{
  uint16_t per : 16;
};

#define RTC_M1_COMP0	MMIO_REG(0x40001418, uint16_t)
#define RTC_M1_COMP0_COMP(x)	((x) << 0)
#define RTC_M1_COMP0_COMP_MSK	0x0000ffff
#define RTC_M1_COMP0_COMP_VAL(x)	(((x) >> 0) & 0xffff)

#define RTC_M1_COMP0_s    MMIO_REG(0x40001418, struct __struct_RTC_M1_COMP0)
struct __struct_RTC_M1_COMP0
{
  uint16_t comp : 16;
};

#define RTC_M1_COMP1	MMIO_REG(0x4000141a, uint16_t)
#define RTC_M1_COMP1_COMP(x)	((x) << 0)
#define RTC_M1_COMP1_COMP_MSK	0x0000ffff
#define RTC_M1_COMP1_COMP_VAL(x)	(((x) >> 0) & 0xffff)

#define RTC_M1_COMP1_s    MMIO_REG(0x4000141a, struct __struct_RTC_M1_COMP1)
struct __struct_RTC_M1_COMP1
{
  uint16_t comp : 16;
};

// 0x40001400 RTC_M2

#define RTC_M2_CTRL	MMIO_REG(0x40001400, uint16_t)
#define RTC_M2_CTRL_SWRST	(1 << 0)
#define RTC_M2_CTRL_ENABLE	(1 << 1)
#define RTC_M2_CTRL_MODE(x)	((x) << 2)
#define RTC_M2_CTRL_MODE_MSK	0x0000000c
#define RTC_M2_CTRL_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define RTC_M2_CTRL_CLKREP	(1 << 6)
#define RTC_M2_CTRL_MATCHCLR	(1 << 7)
#define RTC_M2_CTRL_PRESCALER(x)	((x) << 8)
#define RTC_M2_CTRL_PRESCALER_MSK	0x00000f00
#define RTC_M2_CTRL_PRESCALER_VAL(x)	(((x) >> 8) & 0xf)

#define RTC_M2_CTRL_s    MMIO_REG(0x40001400, struct __struct_RTC_M2_CTRL)
struct __struct_RTC_M2_CTRL
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 2;
  uint16_t clkrep : 1;
  uint16_t matchclr : 1;
  uint16_t prescaler : 4;
  uint16_t  : 4;
};

#define RTC_M2_READREQ	MMIO_REG(0x40001402, uint16_t)
#define RTC_M2_READREQ_ADDR(x)	((x) << 0)
#define RTC_M2_READREQ_ADDR_MSK	0x0000003f
#define RTC_M2_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x3f)
#define RTC_M2_READREQ_RCONT	(1 << 14)
#define RTC_M2_READREQ_RREQ	(1 << 15)

#define RTC_M2_READREQ_s    MMIO_REG(0x40001402, struct __struct_RTC_M2_READREQ)
struct __struct_RTC_M2_READREQ
{
  uint16_t addr : 6;
  uint16_t  : 8;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define RTC_M2_EVCTRL	MMIO_REG(0x40001404, uint16_t)
#define RTC_M2_EVCTRL_PEREO0	(1 << 0)
#define RTC_M2_EVCTRL_PEREO1	(1 << 1)
#define RTC_M2_EVCTRL_PEREO2	(1 << 2)
#define RTC_M2_EVCTRL_PEREO3	(1 << 3)
#define RTC_M2_EVCTRL_PEREO4	(1 << 4)
#define RTC_M2_EVCTRL_PEREO5	(1 << 5)
#define RTC_M2_EVCTRL_PEREO6	(1 << 6)
#define RTC_M2_EVCTRL_PEREO7	(1 << 7)
#define RTC_M2_EVCTRL_ALARMEO0	(1 << 8)
#define RTC_M2_EVCTRL_OVFEO	(1 << 15)

#define RTC_M2_EVCTRL_s    MMIO_REG(0x40001404, struct __struct_RTC_M2_EVCTRL)
struct __struct_RTC_M2_EVCTRL
{
  uint16_t pereo0 : 1;
  uint16_t pereo1 : 1;
  uint16_t pereo2 : 1;
  uint16_t pereo3 : 1;
  uint16_t pereo4 : 1;
  uint16_t pereo5 : 1;
  uint16_t pereo6 : 1;
  uint16_t pereo7 : 1;
  uint16_t alarmeo0 : 1;
  uint16_t  : 6;
  uint16_t ovfeo : 1;
};

#define RTC_M2_INTENCLR	MMIO_REG(0x40001406, uint8_t)
#define RTC_M2_INTENCLR_ALARM0	(1 << 0)
#define RTC_M2_INTENCLR_SYNCRDY	(1 << 6)
#define RTC_M2_INTENCLR_OVF	(1 << 7)

#define RTC_M2_INTENCLR_s    MMIO_REG(0x40001406, struct __struct_RTC_M2_INTENCLR)
struct __struct_RTC_M2_INTENCLR
{
  uint8_t alarm0 : 1;
  uint8_t  : 5;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M2_INTENSET	MMIO_REG(0x40001407, uint8_t)
#define RTC_M2_INTENSET_ALARM0	(1 << 0)
#define RTC_M2_INTENSET_SYNCRDY	(1 << 6)
#define RTC_M2_INTENSET_OVF	(1 << 7)

#define RTC_M2_INTENSET_s    MMIO_REG(0x40001407, struct __struct_RTC_M2_INTENSET)
struct __struct_RTC_M2_INTENSET
{
  uint8_t alarm0 : 1;
  uint8_t  : 5;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M2_INTFLAG	MMIO_REG(0x40001408, uint8_t)
#define RTC_M2_INTFLAG_ALARM0	(1 << 0)
#define RTC_M2_INTFLAG_SYNCRDY	(1 << 6)
#define RTC_M2_INTFLAG_OVF	(1 << 7)

#define RTC_M2_INTFLAG_s    MMIO_REG(0x40001408, struct __struct_RTC_M2_INTFLAG)
struct __struct_RTC_M2_INTFLAG
{
  uint8_t alarm0 : 1;
  uint8_t  : 5;
  uint8_t syncrdy : 1;
  uint8_t ovf : 1;
};

#define RTC_M2_STATUS	MMIO_REG(0x4000140a, uint8_t)
#define RTC_M2_STATUS_SYNCBUSY	(1 << 7)

#define RTC_M2_STATUS_s    MMIO_REG(0x4000140a, struct __struct_RTC_M2_STATUS)
struct __struct_RTC_M2_STATUS
{
  uint8_t  : 7;
  uint8_t syncbusy : 1;
};

#define RTC_M2_DBGCTRL	MMIO_REG(0x4000140b, uint8_t)
#define RTC_M2_DBGCTRL_DBGRUN	(1 << 0)

#define RTC_M2_DBGCTRL_s    MMIO_REG(0x4000140b, struct __struct_RTC_M2_DBGCTRL)
struct __struct_RTC_M2_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define RTC_M2_FREQCORR	MMIO_REG(0x4000140c, uint8_t)
#define RTC_M2_FREQCORR_VALUE(x)	((x) << 0)
#define RTC_M2_FREQCORR_VALUE_MSK	0x0000007f
#define RTC_M2_FREQCORR_VALUE_VAL(x)	(((x) >> 0) & 0x7f)
#define RTC_M2_FREQCORR_SIGN	(1 << 7)

#define RTC_M2_FREQCORR_s    MMIO_REG(0x4000140c, struct __struct_RTC_M2_FREQCORR)
struct __struct_RTC_M2_FREQCORR
{
  uint8_t value : 7;
  uint8_t sign : 1;
};

#define RTC_M2_CLOCK	MMIO_REG(0x40001410, uint32_t)
#define RTC_M2_CLOCK_SECOND(x)	((x) << 0)
#define RTC_M2_CLOCK_SECOND_MSK	0x0000003f
#define RTC_M2_CLOCK_SECOND_VAL(x)	(((x) >> 0) & 0x3f)
#define RTC_M2_CLOCK_MINUTE(x)	((x) << 6)
#define RTC_M2_CLOCK_MINUTE_MSK	0x00000fc0
#define RTC_M2_CLOCK_MINUTE_VAL(x)	(((x) >> 6) & 0x3f)
#define RTC_M2_CLOCK_HOUR(x)	((x) << 12)
#define RTC_M2_CLOCK_HOUR_MSK	0x0001f000
#define RTC_M2_CLOCK_HOUR_VAL(x)	(((x) >> 12) & 0x1f)
#define RTC_M2_CLOCK_DAY(x)	((x) << 17)
#define RTC_M2_CLOCK_DAY_MSK	0x003e0000
#define RTC_M2_CLOCK_DAY_VAL(x)	(((x) >> 17) & 0x1f)
#define RTC_M2_CLOCK_MONTH(x)	((x) << 22)
#define RTC_M2_CLOCK_MONTH_MSK	0x03c00000
#define RTC_M2_CLOCK_MONTH_VAL(x)	(((x) >> 22) & 0xf)
#define RTC_M2_CLOCK_YEAR(x)	((x) << 26)
#define RTC_M2_CLOCK_YEAR_MSK	0xfc000000
#define RTC_M2_CLOCK_YEAR_VAL(x)	(((x) >> 26) & 0x3f)

#define RTC_M2_CLOCK_s    MMIO_REG(0x40001410, struct __struct_RTC_M2_CLOCK)
struct __struct_RTC_M2_CLOCK
{
  uint32_t second : 6;
  uint32_t minute : 6;
  uint32_t hour : 5;
  uint32_t day : 5;
  uint32_t month : 4;
  uint32_t year : 6;
};

#define RTC_M2_ALARM0	MMIO_REG(0x40001418, uint32_t)
#define RTC_M2_ALARM0_SECOND(x)	((x) << 0)
#define RTC_M2_ALARM0_SECOND_MSK	0x0000003f
#define RTC_M2_ALARM0_SECOND_VAL(x)	(((x) >> 0) & 0x3f)
#define RTC_M2_ALARM0_MINUTE(x)	((x) << 6)
#define RTC_M2_ALARM0_MINUTE_MSK	0x00000fc0
#define RTC_M2_ALARM0_MINUTE_VAL(x)	(((x) >> 6) & 0x3f)
#define RTC_M2_ALARM0_HOUR(x)	((x) << 12)
#define RTC_M2_ALARM0_HOUR_MSK	0x0001f000
#define RTC_M2_ALARM0_HOUR_VAL(x)	(((x) >> 12) & 0x1f)
#define RTC_M2_ALARM0_DAY(x)	((x) << 17)
#define RTC_M2_ALARM0_DAY_MSK	0x003e0000
#define RTC_M2_ALARM0_DAY_VAL(x)	(((x) >> 17) & 0x1f)
#define RTC_M2_ALARM0_MONTH(x)	((x) << 22)
#define RTC_M2_ALARM0_MONTH_MSK	0x03c00000
#define RTC_M2_ALARM0_MONTH_VAL(x)	(((x) >> 22) & 0xf)
#define RTC_M2_ALARM0_YEAR(x)	((x) << 26)
#define RTC_M2_ALARM0_YEAR_MSK	0xfc000000
#define RTC_M2_ALARM0_YEAR_VAL(x)	(((x) >> 26) & 0x3f)

#define RTC_M2_ALARM0_s    MMIO_REG(0x40001418, struct __struct_RTC_M2_ALARM0)
struct __struct_RTC_M2_ALARM0
{
  uint32_t second : 6;
  uint32_t minute : 6;
  uint32_t hour : 5;
  uint32_t day : 5;
  uint32_t month : 4;
  uint32_t year : 6;
};

#define RTC_M2_MASK0	MMIO_REG(0x4000141c, uint8_t)
#define RTC_M2_MASK0_SEL(x)	((x) << 0)
#define RTC_M2_MASK0_SEL_MSK	0x00000007
#define RTC_M2_MASK0_SEL_VAL(x)	(((x) >> 0) & 0x7)

#define RTC_M2_MASK0_s    MMIO_REG(0x4000141c, struct __struct_RTC_M2_MASK0)
struct __struct_RTC_M2_MASK0
{
  uint8_t sel : 3;
  uint8_t  : 5;
};

// 0x40001800 EIC

#define EIC_CTRL	MMIO_REG(0x40001800, uint8_t)
#define EIC_CTRL_SWRST	(1 << 0)
#define EIC_CTRL_ENABLE	(1 << 1)

#define EIC_CTRL_s    MMIO_REG(0x40001800, struct __struct_EIC_CTRL)
struct __struct_EIC_CTRL
{
  uint8_t swrst : 1;
  uint8_t enable : 1;
  uint8_t  : 6;
};

#define EIC_STATUS	MMIO_REG(0x40001801, uint8_t)
#define EIC_STATUS_SYNCBUSY	(1 << 7)

#define EIC_STATUS_s    MMIO_REG(0x40001801, struct __struct_EIC_STATUS)
struct __struct_EIC_STATUS
{
  uint8_t  : 7;
  uint8_t syncbusy : 1;
};

#define EIC_NMICTRL	MMIO_REG(0x40001802, uint8_t)
#define EIC_NMICTRL_NMISENSE(x)	((x) << 0)
#define EIC_NMICTRL_NMISENSE_MSK	0x00000007
#define EIC_NMICTRL_NMISENSE_VAL(x)	(((x) >> 0) & 0x7)
#define EIC_NMICTRL_NMIFLTEN	(1 << 3)

#define EIC_NMICTRL_s    MMIO_REG(0x40001802, struct __struct_EIC_NMICTRL)
struct __struct_EIC_NMICTRL
{
  uint8_t nmisense : 3;
  uint8_t nmiflten : 1;
  uint8_t  : 4;
};

#define EIC_NMIFLAG	MMIO_REG(0x40001803, uint8_t)
#define EIC_NMIFLAG_NMI	(1 << 0)

#define EIC_NMIFLAG_s    MMIO_REG(0x40001803, struct __struct_EIC_NMIFLAG)
struct __struct_EIC_NMIFLAG
{
  uint8_t nmi : 1;
  uint8_t  : 7;
};

#define EIC_EVCTRL	MMIO_REG(0x40001804, uint32_t)
#define EIC_EVCTRL_EXTINTEO(x)	((x) << 0)
#define EIC_EVCTRL_EXTINTEO_MSK	0x0000ffff
#define EIC_EVCTRL_EXTINTEO_VAL(x)	(((x) >> 0) & 0xffff)

#define EIC_EVCTRL_s    MMIO_REG(0x40001804, struct __struct_EIC_EVCTRL)
struct __struct_EIC_EVCTRL
{
  uint32_t extinteo : 16;
  uint32_t  : 16;
};

#define EIC_INTENCLR	MMIO_REG(0x40001808, uint32_t)
#define EIC_INTENCLR_EXTINT(x)	((x) << 0)
#define EIC_INTENCLR_EXTINT_MSK	0x0000ffff
#define EIC_INTENCLR_EXTINT_VAL(x)	(((x) >> 0) & 0xffff)

#define EIC_INTENCLR_s    MMIO_REG(0x40001808, struct __struct_EIC_INTENCLR)
struct __struct_EIC_INTENCLR
{
  uint32_t extint : 16;
  uint32_t  : 16;
};

#define EIC_INTENSET	MMIO_REG(0x4000180c, uint32_t)
#define EIC_INTENSET_EXTINT(x)	((x) << 0)
#define EIC_INTENSET_EXTINT_MSK	0x0000ffff
#define EIC_INTENSET_EXTINT_VAL(x)	(((x) >> 0) & 0xffff)

#define EIC_INTENSET_s    MMIO_REG(0x4000180c, struct __struct_EIC_INTENSET)
struct __struct_EIC_INTENSET
{
  uint32_t extint : 16;
  uint32_t  : 16;
};

#define EIC_INTFLAG	MMIO_REG(0x40001810, uint32_t)
#define EIC_INTFLAG_EXTINT(x)	((x) << 0)
#define EIC_INTFLAG_EXTINT_MSK	0x0000ffff
#define EIC_INTFLAG_EXTINT_VAL(x)	(((x) >> 0) & 0xffff)

#define EIC_INTFLAG_s    MMIO_REG(0x40001810, struct __struct_EIC_INTFLAG)
struct __struct_EIC_INTFLAG
{
  uint32_t extint : 16;
  uint32_t  : 16;
};

#define EIC_WAKEUP	MMIO_REG(0x40001814, uint32_t)
#define EIC_WAKEUP_WAKEUPEN(x)	((x) << 0)
#define EIC_WAKEUP_WAKEUPEN_MSK	0x0000ffff
#define EIC_WAKEUP_WAKEUPEN_VAL(x)	(((x) >> 0) & 0xffff)

#define EIC_WAKEUP_s    MMIO_REG(0x40001814, struct __struct_EIC_WAKEUP)
struct __struct_EIC_WAKEUP
{
  uint32_t wakeupen : 16;
  uint32_t  : 16;
};

#define EIC_CONFIG0	MMIO_REG(0x40001818, uint32_t)
#define EIC_CONFIG0_SENSE0(x)	((x) << 0)
#define EIC_CONFIG0_SENSE0_MSK	0x00000007
#define EIC_CONFIG0_SENSE0_VAL(x)	(((x) >> 0) & 0x7)
#define EIC_CONFIG0_FILTEN0	(1 << 3)
#define EIC_CONFIG0_SENSE1(x)	((x) << 4)
#define EIC_CONFIG0_SENSE1_MSK	0x00000070
#define EIC_CONFIG0_SENSE1_VAL(x)	(((x) >> 4) & 0x7)
#define EIC_CONFIG0_FILTEN1	(1 << 7)
#define EIC_CONFIG0_SENSE2(x)	((x) << 8)
#define EIC_CONFIG0_SENSE2_MSK	0x00000700
#define EIC_CONFIG0_SENSE2_VAL(x)	(((x) >> 8) & 0x7)
#define EIC_CONFIG0_FILTEN2	(1 << 11)
#define EIC_CONFIG0_SENSE3(x)	((x) << 12)
#define EIC_CONFIG0_SENSE3_MSK	0x00007000
#define EIC_CONFIG0_SENSE3_VAL(x)	(((x) >> 12) & 0x7)
#define EIC_CONFIG0_FILTEN3	(1 << 15)
#define EIC_CONFIG0_SENSE4(x)	((x) << 16)
#define EIC_CONFIG0_SENSE4_MSK	0x00070000
#define EIC_CONFIG0_SENSE4_VAL(x)	(((x) >> 16) & 0x7)
#define EIC_CONFIG0_FILTEN4	(1 << 19)
#define EIC_CONFIG0_SENSE5(x)	((x) << 20)
#define EIC_CONFIG0_SENSE5_MSK	0x00700000
#define EIC_CONFIG0_SENSE5_VAL(x)	(((x) >> 20) & 0x7)
#define EIC_CONFIG0_FILTEN5	(1 << 23)
#define EIC_CONFIG0_SENSE6(x)	((x) << 24)
#define EIC_CONFIG0_SENSE6_MSK	0x07000000
#define EIC_CONFIG0_SENSE6_VAL(x)	(((x) >> 24) & 0x7)
#define EIC_CONFIG0_FILTEN6	(1 << 27)
#define EIC_CONFIG0_SENSE7(x)	((x) << 28)
#define EIC_CONFIG0_SENSE7_MSK	0x70000000
#define EIC_CONFIG0_SENSE7_VAL(x)	(((x) >> 28) & 0x7)
#define EIC_CONFIG0_FILTEN7	(1 << 31)

#define EIC_CONFIG0_s    MMIO_REG(0x40001818, struct __struct_EIC_CONFIG0)
struct __struct_EIC_CONFIG0
{
  uint32_t sense0 : 3;
  uint32_t filten0 : 1;
  uint32_t sense1 : 3;
  uint32_t filten1 : 1;
  uint32_t sense2 : 3;
  uint32_t filten2 : 1;
  uint32_t sense3 : 3;
  uint32_t filten3 : 1;
  uint32_t sense4 : 3;
  uint32_t filten4 : 1;
  uint32_t sense5 : 3;
  uint32_t filten5 : 1;
  uint32_t sense6 : 3;
  uint32_t filten6 : 1;
  uint32_t sense7 : 3;
  uint32_t filten7 : 1;
};

#define EIC_CONFIG1	MMIO_REG(0x4000181c, uint32_t)
#define EIC_CONFIG1_SENSE8(x)	((x) << 0)
#define EIC_CONFIG1_SENSE8_MSK	0x00000007
#define EIC_CONFIG1_SENSE8_VAL(x)	(((x) >> 0) & 0x7)
#define EIC_CONFIG1_FILTEN8	(1 << 3)
#define EIC_CONFIG1_SENSE9(x)	((x) << 4)
#define EIC_CONFIG1_SENSE9_MSK	0x00000070
#define EIC_CONFIG1_SENSE9_VAL(x)	(((x) >> 4) & 0x7)
#define EIC_CONFIG1_FILTEN9	(1 << 7)
#define EIC_CONFIG1_SENSE10(x)	((x) << 8)
#define EIC_CONFIG1_SENSE10_MSK	0x00000700
#define EIC_CONFIG1_SENSE10_VAL(x)	(((x) >> 8) & 0x7)
#define EIC_CONFIG1_FILTEN10	(1 << 11)
#define EIC_CONFIG1_SENSE11(x)	((x) << 12)
#define EIC_CONFIG1_SENSE11_MSK	0x00007000
#define EIC_CONFIG1_SENSE11_VAL(x)	(((x) >> 12) & 0x7)
#define EIC_CONFIG1_FILTEN11	(1 << 15)
#define EIC_CONFIG1_SENSE12(x)	((x) << 16)
#define EIC_CONFIG1_SENSE12_MSK	0x00070000
#define EIC_CONFIG1_SENSE12_VAL(x)	(((x) >> 16) & 0x7)
#define EIC_CONFIG1_FILTEN12	(1 << 19)
#define EIC_CONFIG1_SENSE13(x)	((x) << 20)
#define EIC_CONFIG1_SENSE13_MSK	0x00700000
#define EIC_CONFIG1_SENSE13_VAL(x)	(((x) >> 20) & 0x7)
#define EIC_CONFIG1_FILTEN13	(1 << 23)
#define EIC_CONFIG1_SENSE14(x)	((x) << 24)
#define EIC_CONFIG1_SENSE14_MSK	0x07000000
#define EIC_CONFIG1_SENSE14_VAL(x)	(((x) >> 24) & 0x7)
#define EIC_CONFIG1_FILTEN14	(1 << 27)
#define EIC_CONFIG1_SENSE15(x)	((x) << 28)
#define EIC_CONFIG1_SENSE15_MSK	0x70000000
#define EIC_CONFIG1_SENSE15_VAL(x)	(((x) >> 28) & 0x7)
#define EIC_CONFIG1_FILTEN15	(1 << 31)

#define EIC_CONFIG1_s    MMIO_REG(0x4000181c, struct __struct_EIC_CONFIG1)
struct __struct_EIC_CONFIG1
{
  uint32_t sense8 : 3;
  uint32_t filten8 : 1;
  uint32_t sense9 : 3;
  uint32_t filten9 : 1;
  uint32_t sense10 : 3;
  uint32_t filten10 : 1;
  uint32_t sense11 : 3;
  uint32_t filten11 : 1;
  uint32_t sense12 : 3;
  uint32_t filten12 : 1;
  uint32_t sense13 : 3;
  uint32_t filten13 : 1;
  uint32_t sense14 : 3;
  uint32_t filten14 : 1;
  uint32_t sense15 : 3;
  uint32_t filten15 : 1;
};

// 0x41000000 PAC1

#define PAC1_WPCLR	MMIO_REG(0x41000000, uint32_t)
#define PAC1_WPCLR_DSU	(1 << 1)
#define PAC1_WPCLR_NVMCTRL	(1 << 2)
#define PAC1_WPCLR_PORT	(1 << 3)

#define PAC1_WPCLR_s    MMIO_REG(0x41000000, struct __struct_PAC1_WPCLR)
struct __struct_PAC1_WPCLR
{
  uint32_t  : 1;
  uint32_t dsu : 1;
  uint32_t nvmctrl : 1;
  uint32_t port : 1;
  uint32_t  : 28;
};

#define PAC1_WPSET	MMIO_REG(0x41000004, uint32_t)
#define PAC1_WPSET_DSU	(1 << 1)
#define PAC1_WPSET_NVMCTRL	(1 << 2)
#define PAC1_WPSET_PORT	(1 << 3)

#define PAC1_WPSET_s    MMIO_REG(0x41000004, struct __struct_PAC1_WPSET)
struct __struct_PAC1_WPSET
{
  uint32_t  : 1;
  uint32_t dsu : 1;
  uint32_t nvmctrl : 1;
  uint32_t port : 1;
  uint32_t  : 28;
};

// 0x41002000 DSU

#define DSU_CTRL	MMIO_REG(0x41002000, uint8_t)
#define DSU_CTRL_SWRST	(1 << 0)
#define DSU_CTRL_CRC	(1 << 2)
#define DSU_CTRL_MBIST	(1 << 3)
#define DSU_CTRL_CE	(1 << 4)

#define DSU_CTRL_s    MMIO_REG(0x41002000, struct __struct_DSU_CTRL)
struct __struct_DSU_CTRL
{
  uint8_t swrst : 1;
  uint8_t  : 1;
  uint8_t crc : 1;
  uint8_t mbist : 1;
  uint8_t ce : 1;
  uint8_t  : 3;
};

#define DSU_STATUSA	MMIO_REG(0x41002001, uint8_t)
#define DSU_STATUSA_DONE	(1 << 0)
#define DSU_STATUSA_CRSTEXT	(1 << 1)
#define DSU_STATUSA_BERR	(1 << 2)
#define DSU_STATUSA_FAIL	(1 << 3)
#define DSU_STATUSA_PERR	(1 << 4)

#define DSU_STATUSA_s    MMIO_REG(0x41002001, struct __struct_DSU_STATUSA)
struct __struct_DSU_STATUSA
{
  uint8_t done : 1;
  uint8_t crstext : 1;
  uint8_t berr : 1;
  uint8_t fail : 1;
  uint8_t perr : 1;
  uint8_t  : 3;
};

#define DSU_STATUSB	MMIO_REG(0x41002002, uint8_t)
#define DSU_STATUSB_PROT	(1 << 0)
#define DSU_STATUSB_DBGPRES	(1 << 1)
#define DSU_STATUSB_DCCD0	(1 << 2)
#define DSU_STATUSB_DCCD1	(1 << 3)
#define DSU_STATUSB_HPE	(1 << 4)

#define DSU_STATUSB_s    MMIO_REG(0x41002002, struct __struct_DSU_STATUSB)
struct __struct_DSU_STATUSB
{
  uint8_t prot : 1;
  uint8_t dbgpres : 1;
  uint8_t dccd0 : 1;
  uint8_t dccd1 : 1;
  uint8_t hpe : 1;
  uint8_t  : 3;
};

#define DSU_ADDR	MMIO_REG(0x41002004, uint32_t)
#define DSU_ADDR_ADDR(x)	((x) << 2)
#define DSU_ADDR_ADDR_MSK	0xfffffffc
#define DSU_ADDR_ADDR_VAL(x)	(((x) >> 2) & 0x3fffffff)

#define DSU_ADDR_s    MMIO_REG(0x41002004, struct __struct_DSU_ADDR)
struct __struct_DSU_ADDR
{
  uint32_t  : 2;
  uint32_t addr : 30;
};

#define DSU_LENGTH	MMIO_REG(0x41002008, uint32_t)
#define DSU_LENGTH_LENGTH(x)	((x) << 2)
#define DSU_LENGTH_LENGTH_MSK	0xfffffffc
#define DSU_LENGTH_LENGTH_VAL(x)	(((x) >> 2) & 0x3fffffff)

#define DSU_LENGTH_s    MMIO_REG(0x41002008, struct __struct_DSU_LENGTH)
struct __struct_DSU_LENGTH
{
  uint32_t  : 2;
  uint32_t length : 30;
};

#define DSU_DATA	MMIO_REG(0x4100200c, uint32_t)

#define DSU_DCC0	MMIO_REG(0x41002010, uint32_t)

#define DSU_DCC1	MMIO_REG(0x41002014, uint32_t)

#define DSU_DID	MMIO_REG(0x41002018, uint32_t)
#define DSU_DID_DVSEL(x)	((x) << 0)
#define DSU_DID_DVSEL_MSK	0x000000ff
#define DSU_DID_DVSEL_VAL(x)	(((x) >> 0) & 0xff)
#define DSU_DID_REVISION(x)	((x) << 8)
#define DSU_DID_REVISION_MSK	0x00000f00
#define DSU_DID_REVISION_VAL(x)	(((x) >> 8) & 0xf)
#define DSU_DID_DIE(x)	((x) << 12)
#define DSU_DID_DIE_MSK	0x0000f000
#define DSU_DID_DIE_VAL(x)	(((x) >> 12) & 0xf)
#define DSU_DID_SUBFAMILY(x)	((x) << 16)
#define DSU_DID_SUBFAMILY_MSK	0x00ff0000
#define DSU_DID_SUBFAMILY_VAL(x)	(((x) >> 16) & 0xff)
#define DSU_DID_FAMILY(x)	((x) << 24)
#define DSU_DID_FAMILY_MSK	0x0f000000
#define DSU_DID_FAMILY_VAL(x)	(((x) >> 24) & 0xf)
#define DSU_DID_PROCESSOR(x)	((x) << 28)
#define DSU_DID_PROCESSOR_MSK	0xf0000000
#define DSU_DID_PROCESSOR_VAL(x)	(((x) >> 28) & 0xf)

#define DSU_DID_s    MMIO_REG(0x41002018, struct __struct_DSU_DID)
struct __struct_DSU_DID
{
  uint32_t dvsel : 8;
  uint32_t revision : 4;
  uint32_t die : 4;
  uint32_t subfamily : 8;
  uint32_t family : 4;
  uint32_t processor : 4;
};

// 0x41004000 NVMCTRL

#define NVMCTRL_CTRLA	MMIO_REG(0x41004000, uint16_t)
#define NVMCTRL_CTRLA_CMD(x)	((x) << 0)
#define NVMCTRL_CTRLA_CMD_MSK	0x0000007f
#define NVMCTRL_CTRLA_CMD_VAL(x)	(((x) >> 0) & 0x7f)
#define NVMCTRL_CTRLA_CMDEX(x)	((x) << 8)
#define NVMCTRL_CTRLA_CMDEX_MSK	0x0000ff00
#define NVMCTRL_CTRLA_CMDEX_VAL(x)	(((x) >> 8) & 0xff)

#define NVMCTRL_CTRLA_s    MMIO_REG(0x41004000, struct __struct_NVMCTRL_CTRLA)
struct __struct_NVMCTRL_CTRLA
{
  uint16_t cmd : 7;
  uint16_t  : 1;
  uint16_t cmdex : 8;
};

#define NVMCTRL_CTRLB	MMIO_REG(0x41004004, uint32_t)
#define NVMCTRL_CTRLB_RWS(x)	((x) << 1)
#define NVMCTRL_CTRLB_RWS_MSK	0x0000001e
#define NVMCTRL_CTRLB_RWS_VAL(x)	(((x) >> 1) & 0xf)
#define NVMCTRL_CTRLB_MANW	(1 << 7)
#define NVMCTRL_CTRLB_SLEEPPRM(x)	((x) << 8)
#define NVMCTRL_CTRLB_SLEEPPRM_MSK	0x00000300
#define NVMCTRL_CTRLB_SLEEPPRM_VAL(x)	(((x) >> 8) & 0x3)
#define NVMCTRL_CTRLB_READMODE(x)	((x) << 16)
#define NVMCTRL_CTRLB_READMODE_MSK	0x00030000
#define NVMCTRL_CTRLB_READMODE_VAL(x)	(((x) >> 16) & 0x3)
#define NVMCTRL_CTRLB_CACHEDIS	(1 << 18)

#define NVMCTRL_CTRLB_s    MMIO_REG(0x41004004, struct __struct_NVMCTRL_CTRLB)
struct __struct_NVMCTRL_CTRLB
{
  uint32_t  : 1;
  uint32_t rws : 4;
  uint32_t  : 2;
  uint32_t manw : 1;
  uint32_t sleepprm : 2;
  uint32_t  : 6;
  uint32_t readmode : 2;
  uint32_t cachedis : 1;
  uint32_t  : 13;
};

#define NVMCTRL_PARAM	MMIO_REG(0x41004008, uint32_t)
#define NVMCTRL_PARAM_NVMP(x)	((x) << 0)
#define NVMCTRL_PARAM_NVMP_MSK	0x0000ffff
#define NVMCTRL_PARAM_NVMP_VAL(x)	(((x) >> 0) & 0xffff)
#define NVMCTRL_PARAM_PSZ(x)	((x) << 16)
#define NVMCTRL_PARAM_PSZ_MSK	0x00070000
#define NVMCTRL_PARAM_PSZ_VAL(x)	(((x) >> 16) & 0x7)

#define NVMCTRL_PARAM_s    MMIO_REG(0x41004008, struct __struct_NVMCTRL_PARAM)
struct __struct_NVMCTRL_PARAM
{
  uint32_t nvmp : 16;
  uint32_t psz : 3;
  uint32_t  : 13;
};

#define NVMCTRL_INTENCLR	MMIO_REG(0x4100400c, uint8_t)
#define NVMCTRL_INTENCLR_READY	(1 << 0)
#define NVMCTRL_INTENCLR_ERROR	(1 << 1)

#define NVMCTRL_INTENCLR_s    MMIO_REG(0x4100400c, struct __struct_NVMCTRL_INTENCLR)
struct __struct_NVMCTRL_INTENCLR
{
  uint8_t ready : 1;
  uint8_t error : 1;
  uint8_t  : 6;
};

#define NVMCTRL_INTENSET	MMIO_REG(0x41004010, uint8_t)
#define NVMCTRL_INTENSET_READY	(1 << 0)
#define NVMCTRL_INTENSET_ERROR	(1 << 1)

#define NVMCTRL_INTENSET_s    MMIO_REG(0x41004010, struct __struct_NVMCTRL_INTENSET)
struct __struct_NVMCTRL_INTENSET
{
  uint8_t ready : 1;
  uint8_t error : 1;
  uint8_t  : 6;
};

#define NVMCTRL_INTFLAG	MMIO_REG(0x41004014, uint8_t)
#define NVMCTRL_INTFLAG_READY	(1 << 0)
#define NVMCTRL_INTFLAG_ERROR	(1 << 1)

#define NVMCTRL_INTFLAG_s    MMIO_REG(0x41004014, struct __struct_NVMCTRL_INTFLAG)
struct __struct_NVMCTRL_INTFLAG
{
  uint8_t ready : 1;
  uint8_t error : 1;
  uint8_t  : 6;
};

#define NVMCTRL_STATUS	MMIO_REG(0x41004018, uint16_t)
#define NVMCTRL_STATUS_PRM	(1 << 0)
#define NVMCTRL_STATUS_LOAD	(1 << 1)
#define NVMCTRL_STATUS_PROGE	(1 << 2)
#define NVMCTRL_STATUS_LOCKE	(1 << 3)
#define NVMCTRL_STATUS_NVME	(1 << 4)
#define NVMCTRL_STATUS_SB	(1 << 8)

#define NVMCTRL_STATUS_s    MMIO_REG(0x41004018, struct __struct_NVMCTRL_STATUS)
struct __struct_NVMCTRL_STATUS
{
  uint16_t prm : 1;
  uint16_t load : 1;
  uint16_t proge : 1;
  uint16_t locke : 1;
  uint16_t nvme : 1;
  uint16_t  : 3;
  uint16_t sb : 1;
  uint16_t  : 7;
};

#define NVMCTRL_ADDR	MMIO_REG(0x4100401c, uint32_t)
#define NVMCTRL_ADDR_ADDR(x)	((x) << 0)
#define NVMCTRL_ADDR_ADDR_MSK	0x003fffff
#define NVMCTRL_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0x3fffff)

#define NVMCTRL_ADDR_s    MMIO_REG(0x4100401c, struct __struct_NVMCTRL_ADDR)
struct __struct_NVMCTRL_ADDR
{
  uint32_t addr : 22;
  uint32_t  : 10;
};

#define NVMCTRL_LOCK	MMIO_REG(0x41004020, uint16_t)
#define NVMCTRL_LOCK_LOCK(x)	((x) << 0)
#define NVMCTRL_LOCK_LOCK_MSK	0x0000ffff
#define NVMCTRL_LOCK_LOCK_VAL(x)	(((x) >> 0) & 0xffff)

#define NVMCTRL_LOCK_s    MMIO_REG(0x41004020, struct __struct_NVMCTRL_LOCK)
struct __struct_NVMCTRL_LOCK
{
  uint16_t lock : 16;
};

// 0x41004400 PORTA

#define PORTA_DIR	MMIO_REG(0x41004400, uint32_t)
#define PORTA_DIR_P0	(1 << 0)
#define PORTA_DIR_P1	(1 << 1)
#define PORTA_DIR_P2	(1 << 2)
#define PORTA_DIR_P3	(1 << 3)
#define PORTA_DIR_P4	(1 << 4)
#define PORTA_DIR_P5	(1 << 5)
#define PORTA_DIR_P6	(1 << 6)
#define PORTA_DIR_P7	(1 << 7)
#define PORTA_DIR_P8	(1 << 8)
#define PORTA_DIR_P9	(1 << 9)
#define PORTA_DIR_P10	(1 << 10)
#define PORTA_DIR_P11	(1 << 11)
#define PORTA_DIR_P12	(1 << 12)
#define PORTA_DIR_P13	(1 << 13)
#define PORTA_DIR_P14	(1 << 14)
#define PORTA_DIR_P15	(1 << 15)
#define PORTA_DIR_P16	(1 << 16)
#define PORTA_DIR_P17	(1 << 17)
#define PORTA_DIR_P18	(1 << 18)
#define PORTA_DIR_P19	(1 << 19)
#define PORTA_DIR_P20	(1 << 20)
#define PORTA_DIR_P21	(1 << 21)
#define PORTA_DIR_P22	(1 << 22)
#define PORTA_DIR_P23	(1 << 23)
#define PORTA_DIR_P24	(1 << 24)
#define PORTA_DIR_P25	(1 << 25)
#define PORTA_DIR_P26	(1 << 26)
#define PORTA_DIR_P27	(1 << 27)
#define PORTA_DIR_P28	(1 << 28)
#define PORTA_DIR_P29	(1 << 29)
#define PORTA_DIR_P30	(1 << 30)
#define PORTA_DIR_P31	(1 << 31)

#define PORTA_DIR_s    MMIO_REG(0x41004400, struct __struct_PORTA_DIR)
struct __struct_PORTA_DIR
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_DIRCLR	MMIO_REG(0x41004404, uint32_t)
#define PORTA_DIRCLR_P0	(1 << 0)
#define PORTA_DIRCLR_P1	(1 << 1)
#define PORTA_DIRCLR_P2	(1 << 2)
#define PORTA_DIRCLR_P3	(1 << 3)
#define PORTA_DIRCLR_P4	(1 << 4)
#define PORTA_DIRCLR_P5	(1 << 5)
#define PORTA_DIRCLR_P6	(1 << 6)
#define PORTA_DIRCLR_P7	(1 << 7)
#define PORTA_DIRCLR_P8	(1 << 8)
#define PORTA_DIRCLR_P9	(1 << 9)
#define PORTA_DIRCLR_P10	(1 << 10)
#define PORTA_DIRCLR_P11	(1 << 11)
#define PORTA_DIRCLR_P12	(1 << 12)
#define PORTA_DIRCLR_P13	(1 << 13)
#define PORTA_DIRCLR_P14	(1 << 14)
#define PORTA_DIRCLR_P15	(1 << 15)
#define PORTA_DIRCLR_P16	(1 << 16)
#define PORTA_DIRCLR_P17	(1 << 17)
#define PORTA_DIRCLR_P18	(1 << 18)
#define PORTA_DIRCLR_P19	(1 << 19)
#define PORTA_DIRCLR_P20	(1 << 20)
#define PORTA_DIRCLR_P21	(1 << 21)
#define PORTA_DIRCLR_P22	(1 << 22)
#define PORTA_DIRCLR_P23	(1 << 23)
#define PORTA_DIRCLR_P24	(1 << 24)
#define PORTA_DIRCLR_P25	(1 << 25)
#define PORTA_DIRCLR_P26	(1 << 26)
#define PORTA_DIRCLR_P27	(1 << 27)
#define PORTA_DIRCLR_P28	(1 << 28)
#define PORTA_DIRCLR_P29	(1 << 29)
#define PORTA_DIRCLR_P30	(1 << 30)
#define PORTA_DIRCLR_P31	(1 << 31)

#define PORTA_DIRCLR_s    MMIO_REG(0x41004404, struct __struct_PORTA_DIRCLR)
struct __struct_PORTA_DIRCLR
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_DIRSET	MMIO_REG(0x41004408, uint32_t)
#define PORTA_DIRSET_P0	(1 << 0)
#define PORTA_DIRSET_P1	(1 << 1)
#define PORTA_DIRSET_P2	(1 << 2)
#define PORTA_DIRSET_P3	(1 << 3)
#define PORTA_DIRSET_P4	(1 << 4)
#define PORTA_DIRSET_P5	(1 << 5)
#define PORTA_DIRSET_P6	(1 << 6)
#define PORTA_DIRSET_P7	(1 << 7)
#define PORTA_DIRSET_P8	(1 << 8)
#define PORTA_DIRSET_P9	(1 << 9)
#define PORTA_DIRSET_P10	(1 << 10)
#define PORTA_DIRSET_P11	(1 << 11)
#define PORTA_DIRSET_P12	(1 << 12)
#define PORTA_DIRSET_P13	(1 << 13)
#define PORTA_DIRSET_P14	(1 << 14)
#define PORTA_DIRSET_P15	(1 << 15)
#define PORTA_DIRSET_P16	(1 << 16)
#define PORTA_DIRSET_P17	(1 << 17)
#define PORTA_DIRSET_P18	(1 << 18)
#define PORTA_DIRSET_P19	(1 << 19)
#define PORTA_DIRSET_P20	(1 << 20)
#define PORTA_DIRSET_P21	(1 << 21)
#define PORTA_DIRSET_P22	(1 << 22)
#define PORTA_DIRSET_P23	(1 << 23)
#define PORTA_DIRSET_P24	(1 << 24)
#define PORTA_DIRSET_P25	(1 << 25)
#define PORTA_DIRSET_P26	(1 << 26)
#define PORTA_DIRSET_P27	(1 << 27)
#define PORTA_DIRSET_P28	(1 << 28)
#define PORTA_DIRSET_P29	(1 << 29)
#define PORTA_DIRSET_P30	(1 << 30)
#define PORTA_DIRSET_P31	(1 << 31)

#define PORTA_DIRSET_s    MMIO_REG(0x41004408, struct __struct_PORTA_DIRSET)
struct __struct_PORTA_DIRSET
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_DIRTGL	MMIO_REG(0x4100440c, uint32_t)
#define PORTA_DIRTGL_P0	(1 << 0)
#define PORTA_DIRTGL_P1	(1 << 1)
#define PORTA_DIRTGL_P2	(1 << 2)
#define PORTA_DIRTGL_P3	(1 << 3)
#define PORTA_DIRTGL_P4	(1 << 4)
#define PORTA_DIRTGL_P5	(1 << 5)
#define PORTA_DIRTGL_P6	(1 << 6)
#define PORTA_DIRTGL_P7	(1 << 7)
#define PORTA_DIRTGL_P8	(1 << 8)
#define PORTA_DIRTGL_P9	(1 << 9)
#define PORTA_DIRTGL_P10	(1 << 10)
#define PORTA_DIRTGL_P11	(1 << 11)
#define PORTA_DIRTGL_P12	(1 << 12)
#define PORTA_DIRTGL_P13	(1 << 13)
#define PORTA_DIRTGL_P14	(1 << 14)
#define PORTA_DIRTGL_P15	(1 << 15)
#define PORTA_DIRTGL_P16	(1 << 16)
#define PORTA_DIRTGL_P17	(1 << 17)
#define PORTA_DIRTGL_P18	(1 << 18)
#define PORTA_DIRTGL_P19	(1 << 19)
#define PORTA_DIRTGL_P20	(1 << 20)
#define PORTA_DIRTGL_P21	(1 << 21)
#define PORTA_DIRTGL_P22	(1 << 22)
#define PORTA_DIRTGL_P23	(1 << 23)
#define PORTA_DIRTGL_P24	(1 << 24)
#define PORTA_DIRTGL_P25	(1 << 25)
#define PORTA_DIRTGL_P26	(1 << 26)
#define PORTA_DIRTGL_P27	(1 << 27)
#define PORTA_DIRTGL_P28	(1 << 28)
#define PORTA_DIRTGL_P29	(1 << 29)
#define PORTA_DIRTGL_P30	(1 << 30)
#define PORTA_DIRTGL_P31	(1 << 31)

#define PORTA_DIRTGL_s    MMIO_REG(0x4100440c, struct __struct_PORTA_DIRTGL)
struct __struct_PORTA_DIRTGL
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_OUT	MMIO_REG(0x41004410, uint32_t)
#define PORTA_OUT_P0	(1 << 0)
#define PORTA_OUT_P1	(1 << 1)
#define PORTA_OUT_P2	(1 << 2)
#define PORTA_OUT_P3	(1 << 3)
#define PORTA_OUT_P4	(1 << 4)
#define PORTA_OUT_P5	(1 << 5)
#define PORTA_OUT_P6	(1 << 6)
#define PORTA_OUT_P7	(1 << 7)
#define PORTA_OUT_P8	(1 << 8)
#define PORTA_OUT_P9	(1 << 9)
#define PORTA_OUT_P10	(1 << 10)
#define PORTA_OUT_P11	(1 << 11)
#define PORTA_OUT_P12	(1 << 12)
#define PORTA_OUT_P13	(1 << 13)
#define PORTA_OUT_P14	(1 << 14)
#define PORTA_OUT_P15	(1 << 15)
#define PORTA_OUT_P16	(1 << 16)
#define PORTA_OUT_P17	(1 << 17)
#define PORTA_OUT_P18	(1 << 18)
#define PORTA_OUT_P19	(1 << 19)
#define PORTA_OUT_P20	(1 << 20)
#define PORTA_OUT_P21	(1 << 21)
#define PORTA_OUT_P22	(1 << 22)
#define PORTA_OUT_P23	(1 << 23)
#define PORTA_OUT_P24	(1 << 24)
#define PORTA_OUT_P25	(1 << 25)
#define PORTA_OUT_P26	(1 << 26)
#define PORTA_OUT_P27	(1 << 27)
#define PORTA_OUT_P28	(1 << 28)
#define PORTA_OUT_P29	(1 << 29)
#define PORTA_OUT_P30	(1 << 30)
#define PORTA_OUT_P31	(1 << 31)

#define PORTA_OUT_s    MMIO_REG(0x41004410, struct __struct_PORTA_OUT)
struct __struct_PORTA_OUT
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_OUTCLR	MMIO_REG(0x41004414, uint32_t)
#define PORTA_OUTCLR_P0	(1 << 0)
#define PORTA_OUTCLR_P1	(1 << 1)
#define PORTA_OUTCLR_P2	(1 << 2)
#define PORTA_OUTCLR_P3	(1 << 3)
#define PORTA_OUTCLR_P4	(1 << 4)
#define PORTA_OUTCLR_P5	(1 << 5)
#define PORTA_OUTCLR_P6	(1 << 6)
#define PORTA_OUTCLR_P7	(1 << 7)
#define PORTA_OUTCLR_P8	(1 << 8)
#define PORTA_OUTCLR_P9	(1 << 9)
#define PORTA_OUTCLR_P10	(1 << 10)
#define PORTA_OUTCLR_P11	(1 << 11)
#define PORTA_OUTCLR_P12	(1 << 12)
#define PORTA_OUTCLR_P13	(1 << 13)
#define PORTA_OUTCLR_P14	(1 << 14)
#define PORTA_OUTCLR_P15	(1 << 15)
#define PORTA_OUTCLR_P16	(1 << 16)
#define PORTA_OUTCLR_P17	(1 << 17)
#define PORTA_OUTCLR_P18	(1 << 18)
#define PORTA_OUTCLR_P19	(1 << 19)
#define PORTA_OUTCLR_P20	(1 << 20)
#define PORTA_OUTCLR_P21	(1 << 21)
#define PORTA_OUTCLR_P22	(1 << 22)
#define PORTA_OUTCLR_P23	(1 << 23)
#define PORTA_OUTCLR_P24	(1 << 24)
#define PORTA_OUTCLR_P25	(1 << 25)
#define PORTA_OUTCLR_P26	(1 << 26)
#define PORTA_OUTCLR_P27	(1 << 27)
#define PORTA_OUTCLR_P28	(1 << 28)
#define PORTA_OUTCLR_P29	(1 << 29)
#define PORTA_OUTCLR_P30	(1 << 30)
#define PORTA_OUTCLR_P31	(1 << 31)

#define PORTA_OUTCLR_s    MMIO_REG(0x41004414, struct __struct_PORTA_OUTCLR)
struct __struct_PORTA_OUTCLR
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_OUTSET	MMIO_REG(0x41004418, uint32_t)
#define PORTA_OUTSET_P0	(1 << 0)
#define PORTA_OUTSET_P1	(1 << 1)
#define PORTA_OUTSET_P2	(1 << 2)
#define PORTA_OUTSET_P3	(1 << 3)
#define PORTA_OUTSET_P4	(1 << 4)
#define PORTA_OUTSET_P5	(1 << 5)
#define PORTA_OUTSET_P6	(1 << 6)
#define PORTA_OUTSET_P7	(1 << 7)
#define PORTA_OUTSET_P8	(1 << 8)
#define PORTA_OUTSET_P9	(1 << 9)
#define PORTA_OUTSET_P10	(1 << 10)
#define PORTA_OUTSET_P11	(1 << 11)
#define PORTA_OUTSET_P12	(1 << 12)
#define PORTA_OUTSET_P13	(1 << 13)
#define PORTA_OUTSET_P14	(1 << 14)
#define PORTA_OUTSET_P15	(1 << 15)
#define PORTA_OUTSET_P16	(1 << 16)
#define PORTA_OUTSET_P17	(1 << 17)
#define PORTA_OUTSET_P18	(1 << 18)
#define PORTA_OUTSET_P19	(1 << 19)
#define PORTA_OUTSET_P20	(1 << 20)
#define PORTA_OUTSET_P21	(1 << 21)
#define PORTA_OUTSET_P22	(1 << 22)
#define PORTA_OUTSET_P23	(1 << 23)
#define PORTA_OUTSET_P24	(1 << 24)
#define PORTA_OUTSET_P25	(1 << 25)
#define PORTA_OUTSET_P26	(1 << 26)
#define PORTA_OUTSET_P27	(1 << 27)
#define PORTA_OUTSET_P28	(1 << 28)
#define PORTA_OUTSET_P29	(1 << 29)
#define PORTA_OUTSET_P30	(1 << 30)
#define PORTA_OUTSET_P31	(1 << 31)

#define PORTA_OUTSET_s    MMIO_REG(0x41004418, struct __struct_PORTA_OUTSET)
struct __struct_PORTA_OUTSET
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_OUTTGL	MMIO_REG(0x4100441c, uint32_t)
#define PORTA_OUTTGL_P0	(1 << 0)
#define PORTA_OUTTGL_P1	(1 << 1)
#define PORTA_OUTTGL_P2	(1 << 2)
#define PORTA_OUTTGL_P3	(1 << 3)
#define PORTA_OUTTGL_P4	(1 << 4)
#define PORTA_OUTTGL_P5	(1 << 5)
#define PORTA_OUTTGL_P6	(1 << 6)
#define PORTA_OUTTGL_P7	(1 << 7)
#define PORTA_OUTTGL_P8	(1 << 8)
#define PORTA_OUTTGL_P9	(1 << 9)
#define PORTA_OUTTGL_P10	(1 << 10)
#define PORTA_OUTTGL_P11	(1 << 11)
#define PORTA_OUTTGL_P12	(1 << 12)
#define PORTA_OUTTGL_P13	(1 << 13)
#define PORTA_OUTTGL_P14	(1 << 14)
#define PORTA_OUTTGL_P15	(1 << 15)
#define PORTA_OUTTGL_P16	(1 << 16)
#define PORTA_OUTTGL_P17	(1 << 17)
#define PORTA_OUTTGL_P18	(1 << 18)
#define PORTA_OUTTGL_P19	(1 << 19)
#define PORTA_OUTTGL_P20	(1 << 20)
#define PORTA_OUTTGL_P21	(1 << 21)
#define PORTA_OUTTGL_P22	(1 << 22)
#define PORTA_OUTTGL_P23	(1 << 23)
#define PORTA_OUTTGL_P24	(1 << 24)
#define PORTA_OUTTGL_P25	(1 << 25)
#define PORTA_OUTTGL_P26	(1 << 26)
#define PORTA_OUTTGL_P27	(1 << 27)
#define PORTA_OUTTGL_P28	(1 << 28)
#define PORTA_OUTTGL_P29	(1 << 29)
#define PORTA_OUTTGL_P30	(1 << 30)
#define PORTA_OUTTGL_P31	(1 << 31)

#define PORTA_OUTTGL_s    MMIO_REG(0x4100441c, struct __struct_PORTA_OUTTGL)
struct __struct_PORTA_OUTTGL
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_IN	MMIO_REG(0x41004420, uint32_t)
#define PORTA_IN_P0	(1 << 0)
#define PORTA_IN_P1	(1 << 1)
#define PORTA_IN_P2	(1 << 2)
#define PORTA_IN_P3	(1 << 3)
#define PORTA_IN_P4	(1 << 4)
#define PORTA_IN_P5	(1 << 5)
#define PORTA_IN_P6	(1 << 6)
#define PORTA_IN_P7	(1 << 7)
#define PORTA_IN_P8	(1 << 8)
#define PORTA_IN_P9	(1 << 9)
#define PORTA_IN_P10	(1 << 10)
#define PORTA_IN_P11	(1 << 11)
#define PORTA_IN_P12	(1 << 12)
#define PORTA_IN_P13	(1 << 13)
#define PORTA_IN_P14	(1 << 14)
#define PORTA_IN_P15	(1 << 15)
#define PORTA_IN_P16	(1 << 16)
#define PORTA_IN_P17	(1 << 17)
#define PORTA_IN_P18	(1 << 18)
#define PORTA_IN_P19	(1 << 19)
#define PORTA_IN_P20	(1 << 20)
#define PORTA_IN_P21	(1 << 21)
#define PORTA_IN_P22	(1 << 22)
#define PORTA_IN_P23	(1 << 23)
#define PORTA_IN_P24	(1 << 24)
#define PORTA_IN_P25	(1 << 25)
#define PORTA_IN_P26	(1 << 26)
#define PORTA_IN_P27	(1 << 27)
#define PORTA_IN_P28	(1 << 28)
#define PORTA_IN_P29	(1 << 29)
#define PORTA_IN_P30	(1 << 30)
#define PORTA_IN_P31	(1 << 31)

#define PORTA_IN_s    MMIO_REG(0x41004420, struct __struct_PORTA_IN)
struct __struct_PORTA_IN
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTA_CTRL	MMIO_REG(0x41004424, uint32_t)

#define PORTA_WRCONFIG	MMIO_REG(0x41004428, uint32_t)
#define PORTA_WRCONFIG_PINMASK(x)	((x) << 0)
#define PORTA_WRCONFIG_PINMASK_MSK	0x0000ffff
#define PORTA_WRCONFIG_PINMASK_VAL(x)	(((x) >> 0) & 0xffff)
#define PORTA_WRCONFIG_PMUXEN	(1 << 16)
#define PORTA_WRCONFIG_INEN	(1 << 17)
#define PORTA_WRCONFIG_PULLEN	(1 << 18)
#define PORTA_WRCONFIG_PMUX(x)	((x) << 24)
#define PORTA_WRCONFIG_PMUX_MSK	0x0f000000
#define PORTA_WRCONFIG_PMUX_VAL(x)	(((x) >> 24) & 0xf)
#define PORTA_WRCONFIG_WRPMUX	(1 << 28)
#define PORTA_WRCONFIG_WRPINCFG	(1 << 30)
#define PORTA_WRCONFIG_HWSEL	(1 << 31)

#define PORTA_WRCONFIG_s    MMIO_REG(0x41004428, struct __struct_PORTA_WRCONFIG)
struct __struct_PORTA_WRCONFIG
{
  uint32_t pinmask : 16;
  uint32_t pmuxen : 1;
  uint32_t inen : 1;
  uint32_t pullen : 1;
  uint32_t  : 5;
  uint32_t pmux : 4;
  uint32_t wrpmux : 1;
  uint32_t  : 1;
  uint32_t wrpincfg : 1;
  uint32_t hwsel : 1;
};

#define PORTA_PMUX0	MMIO_REG(0x41004430, uint8_t)
#define PORTA_PMUX0_PMUXE(x)	((x) << 0)
#define PORTA_PMUX0_PMUXE_MSK	0x0000000f
#define PORTA_PMUX0_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX0_PMUXO(x)	((x) << 4)
#define PORTA_PMUX0_PMUXO_MSK	0x000000f0
#define PORTA_PMUX0_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX0_s    MMIO_REG(0x41004430, struct __struct_PORTA_PMUX0)
struct __struct_PORTA_PMUX0
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX1	MMIO_REG(0x41004431, uint8_t)
#define PORTA_PMUX1_PMUXE(x)	((x) << 0)
#define PORTA_PMUX1_PMUXE_MSK	0x0000000f
#define PORTA_PMUX1_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX1_PMUXO(x)	((x) << 4)
#define PORTA_PMUX1_PMUXO_MSK	0x000000f0
#define PORTA_PMUX1_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX1_s    MMIO_REG(0x41004431, struct __struct_PORTA_PMUX1)
struct __struct_PORTA_PMUX1
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX2	MMIO_REG(0x41004432, uint8_t)
#define PORTA_PMUX2_PMUXE(x)	((x) << 0)
#define PORTA_PMUX2_PMUXE_MSK	0x0000000f
#define PORTA_PMUX2_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX2_PMUXO(x)	((x) << 4)
#define PORTA_PMUX2_PMUXO_MSK	0x000000f0
#define PORTA_PMUX2_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX2_s    MMIO_REG(0x41004432, struct __struct_PORTA_PMUX2)
struct __struct_PORTA_PMUX2
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX3	MMIO_REG(0x41004433, uint8_t)
#define PORTA_PMUX3_PMUXE(x)	((x) << 0)
#define PORTA_PMUX3_PMUXE_MSK	0x0000000f
#define PORTA_PMUX3_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX3_PMUXO(x)	((x) << 4)
#define PORTA_PMUX3_PMUXO_MSK	0x000000f0
#define PORTA_PMUX3_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX3_s    MMIO_REG(0x41004433, struct __struct_PORTA_PMUX3)
struct __struct_PORTA_PMUX3
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX4	MMIO_REG(0x41004434, uint8_t)
#define PORTA_PMUX4_PMUXE(x)	((x) << 0)
#define PORTA_PMUX4_PMUXE_MSK	0x0000000f
#define PORTA_PMUX4_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX4_PMUXO(x)	((x) << 4)
#define PORTA_PMUX4_PMUXO_MSK	0x000000f0
#define PORTA_PMUX4_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX4_s    MMIO_REG(0x41004434, struct __struct_PORTA_PMUX4)
struct __struct_PORTA_PMUX4
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX5	MMIO_REG(0x41004435, uint8_t)
#define PORTA_PMUX5_PMUXE(x)	((x) << 0)
#define PORTA_PMUX5_PMUXE_MSK	0x0000000f
#define PORTA_PMUX5_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX5_PMUXO(x)	((x) << 4)
#define PORTA_PMUX5_PMUXO_MSK	0x000000f0
#define PORTA_PMUX5_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX5_s    MMIO_REG(0x41004435, struct __struct_PORTA_PMUX5)
struct __struct_PORTA_PMUX5
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX6	MMIO_REG(0x41004436, uint8_t)
#define PORTA_PMUX6_PMUXE(x)	((x) << 0)
#define PORTA_PMUX6_PMUXE_MSK	0x0000000f
#define PORTA_PMUX6_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX6_PMUXO(x)	((x) << 4)
#define PORTA_PMUX6_PMUXO_MSK	0x000000f0
#define PORTA_PMUX6_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX6_s    MMIO_REG(0x41004436, struct __struct_PORTA_PMUX6)
struct __struct_PORTA_PMUX6
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX7	MMIO_REG(0x41004437, uint8_t)
#define PORTA_PMUX7_PMUXE(x)	((x) << 0)
#define PORTA_PMUX7_PMUXE_MSK	0x0000000f
#define PORTA_PMUX7_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX7_PMUXO(x)	((x) << 4)
#define PORTA_PMUX7_PMUXO_MSK	0x000000f0
#define PORTA_PMUX7_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX7_s    MMIO_REG(0x41004437, struct __struct_PORTA_PMUX7)
struct __struct_PORTA_PMUX7
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX8	MMIO_REG(0x41004438, uint8_t)
#define PORTA_PMUX8_PMUXE(x)	((x) << 0)
#define PORTA_PMUX8_PMUXE_MSK	0x0000000f
#define PORTA_PMUX8_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX8_PMUXO(x)	((x) << 4)
#define PORTA_PMUX8_PMUXO_MSK	0x000000f0
#define PORTA_PMUX8_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX8_s    MMIO_REG(0x41004438, struct __struct_PORTA_PMUX8)
struct __struct_PORTA_PMUX8
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX9	MMIO_REG(0x41004439, uint8_t)
#define PORTA_PMUX9_PMUXE(x)	((x) << 0)
#define PORTA_PMUX9_PMUXE_MSK	0x0000000f
#define PORTA_PMUX9_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX9_PMUXO(x)	((x) << 4)
#define PORTA_PMUX9_PMUXO_MSK	0x000000f0
#define PORTA_PMUX9_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX9_s    MMIO_REG(0x41004439, struct __struct_PORTA_PMUX9)
struct __struct_PORTA_PMUX9
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX10	MMIO_REG(0x4100443a, uint8_t)
#define PORTA_PMUX10_PMUXE(x)	((x) << 0)
#define PORTA_PMUX10_PMUXE_MSK	0x0000000f
#define PORTA_PMUX10_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX10_PMUXO(x)	((x) << 4)
#define PORTA_PMUX10_PMUXO_MSK	0x000000f0
#define PORTA_PMUX10_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX10_s    MMIO_REG(0x4100443a, struct __struct_PORTA_PMUX10)
struct __struct_PORTA_PMUX10
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX11	MMIO_REG(0x4100443b, uint8_t)
#define PORTA_PMUX11_PMUXE(x)	((x) << 0)
#define PORTA_PMUX11_PMUXE_MSK	0x0000000f
#define PORTA_PMUX11_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX11_PMUXO(x)	((x) << 4)
#define PORTA_PMUX11_PMUXO_MSK	0x000000f0
#define PORTA_PMUX11_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX11_s    MMIO_REG(0x4100443b, struct __struct_PORTA_PMUX11)
struct __struct_PORTA_PMUX11
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX12	MMIO_REG(0x4100443c, uint8_t)
#define PORTA_PMUX12_PMUXE(x)	((x) << 0)
#define PORTA_PMUX12_PMUXE_MSK	0x0000000f
#define PORTA_PMUX12_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX12_PMUXO(x)	((x) << 4)
#define PORTA_PMUX12_PMUXO_MSK	0x000000f0
#define PORTA_PMUX12_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX12_s    MMIO_REG(0x4100443c, struct __struct_PORTA_PMUX12)
struct __struct_PORTA_PMUX12
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX13	MMIO_REG(0x4100443d, uint8_t)
#define PORTA_PMUX13_PMUXE(x)	((x) << 0)
#define PORTA_PMUX13_PMUXE_MSK	0x0000000f
#define PORTA_PMUX13_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX13_PMUXO(x)	((x) << 4)
#define PORTA_PMUX13_PMUXO_MSK	0x000000f0
#define PORTA_PMUX13_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX13_s    MMIO_REG(0x4100443d, struct __struct_PORTA_PMUX13)
struct __struct_PORTA_PMUX13
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX14	MMIO_REG(0x4100443e, uint8_t)
#define PORTA_PMUX14_PMUXE(x)	((x) << 0)
#define PORTA_PMUX14_PMUXE_MSK	0x0000000f
#define PORTA_PMUX14_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX14_PMUXO(x)	((x) << 4)
#define PORTA_PMUX14_PMUXO_MSK	0x000000f0
#define PORTA_PMUX14_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX14_s    MMIO_REG(0x4100443e, struct __struct_PORTA_PMUX14)
struct __struct_PORTA_PMUX14
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PMUX15	MMIO_REG(0x4100443f, uint8_t)
#define PORTA_PMUX15_PMUXE(x)	((x) << 0)
#define PORTA_PMUX15_PMUXE_MSK	0x0000000f
#define PORTA_PMUX15_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTA_PMUX15_PMUXO(x)	((x) << 4)
#define PORTA_PMUX15_PMUXO_MSK	0x000000f0
#define PORTA_PMUX15_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTA_PMUX15_s    MMIO_REG(0x4100443f, struct __struct_PORTA_PMUX15)
struct __struct_PORTA_PMUX15
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTA_PINCFG0	MMIO_REG(0x41004440, uint8_t)
#define PORTA_PINCFG0_PMUXEN	(1 << 0)
#define PORTA_PINCFG0_INEN	(1 << 1)
#define PORTA_PINCFG0_PULLEN	(1 << 2)

#define PORTA_PINCFG0_s    MMIO_REG(0x41004440, struct __struct_PORTA_PINCFG0)
struct __struct_PORTA_PINCFG0
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG1	MMIO_REG(0x41004441, uint8_t)
#define PORTA_PINCFG1_PMUXEN	(1 << 0)
#define PORTA_PINCFG1_INEN	(1 << 1)
#define PORTA_PINCFG1_PULLEN	(1 << 2)

#define PORTA_PINCFG1_s    MMIO_REG(0x41004441, struct __struct_PORTA_PINCFG1)
struct __struct_PORTA_PINCFG1
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG2	MMIO_REG(0x41004442, uint8_t)
#define PORTA_PINCFG2_PMUXEN	(1 << 0)
#define PORTA_PINCFG2_INEN	(1 << 1)
#define PORTA_PINCFG2_PULLEN	(1 << 2)

#define PORTA_PINCFG2_s    MMIO_REG(0x41004442, struct __struct_PORTA_PINCFG2)
struct __struct_PORTA_PINCFG2
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG3	MMIO_REG(0x41004443, uint8_t)
#define PORTA_PINCFG3_PMUXEN	(1 << 0)
#define PORTA_PINCFG3_INEN	(1 << 1)
#define PORTA_PINCFG3_PULLEN	(1 << 2)

#define PORTA_PINCFG3_s    MMIO_REG(0x41004443, struct __struct_PORTA_PINCFG3)
struct __struct_PORTA_PINCFG3
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG4	MMIO_REG(0x41004444, uint8_t)
#define PORTA_PINCFG4_PMUXEN	(1 << 0)
#define PORTA_PINCFG4_INEN	(1 << 1)
#define PORTA_PINCFG4_PULLEN	(1 << 2)

#define PORTA_PINCFG4_s    MMIO_REG(0x41004444, struct __struct_PORTA_PINCFG4)
struct __struct_PORTA_PINCFG4
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG5	MMIO_REG(0x41004445, uint8_t)
#define PORTA_PINCFG5_PMUXEN	(1 << 0)
#define PORTA_PINCFG5_INEN	(1 << 1)
#define PORTA_PINCFG5_PULLEN	(1 << 2)

#define PORTA_PINCFG5_s    MMIO_REG(0x41004445, struct __struct_PORTA_PINCFG5)
struct __struct_PORTA_PINCFG5
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG6	MMIO_REG(0x41004446, uint8_t)
#define PORTA_PINCFG6_PMUXEN	(1 << 0)
#define PORTA_PINCFG6_INEN	(1 << 1)
#define PORTA_PINCFG6_PULLEN	(1 << 2)

#define PORTA_PINCFG6_s    MMIO_REG(0x41004446, struct __struct_PORTA_PINCFG6)
struct __struct_PORTA_PINCFG6
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG7	MMIO_REG(0x41004447, uint8_t)
#define PORTA_PINCFG7_PMUXEN	(1 << 0)
#define PORTA_PINCFG7_INEN	(1 << 1)
#define PORTA_PINCFG7_PULLEN	(1 << 2)

#define PORTA_PINCFG7_s    MMIO_REG(0x41004447, struct __struct_PORTA_PINCFG7)
struct __struct_PORTA_PINCFG7
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG8	MMIO_REG(0x41004448, uint8_t)
#define PORTA_PINCFG8_PMUXEN	(1 << 0)
#define PORTA_PINCFG8_INEN	(1 << 1)
#define PORTA_PINCFG8_PULLEN	(1 << 2)

#define PORTA_PINCFG8_s    MMIO_REG(0x41004448, struct __struct_PORTA_PINCFG8)
struct __struct_PORTA_PINCFG8
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG9	MMIO_REG(0x41004449, uint8_t)
#define PORTA_PINCFG9_PMUXEN	(1 << 0)
#define PORTA_PINCFG9_INEN	(1 << 1)
#define PORTA_PINCFG9_PULLEN	(1 << 2)

#define PORTA_PINCFG9_s    MMIO_REG(0x41004449, struct __struct_PORTA_PINCFG9)
struct __struct_PORTA_PINCFG9
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG10	MMIO_REG(0x4100444a, uint8_t)
#define PORTA_PINCFG10_PMUXEN	(1 << 0)
#define PORTA_PINCFG10_INEN	(1 << 1)
#define PORTA_PINCFG10_PULLEN	(1 << 2)

#define PORTA_PINCFG10_s    MMIO_REG(0x4100444a, struct __struct_PORTA_PINCFG10)
struct __struct_PORTA_PINCFG10
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG11	MMIO_REG(0x4100444b, uint8_t)
#define PORTA_PINCFG11_PMUXEN	(1 << 0)
#define PORTA_PINCFG11_INEN	(1 << 1)
#define PORTA_PINCFG11_PULLEN	(1 << 2)

#define PORTA_PINCFG11_s    MMIO_REG(0x4100444b, struct __struct_PORTA_PINCFG11)
struct __struct_PORTA_PINCFG11
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG12	MMIO_REG(0x4100444c, uint8_t)
#define PORTA_PINCFG12_PMUXEN	(1 << 0)
#define PORTA_PINCFG12_INEN	(1 << 1)
#define PORTA_PINCFG12_PULLEN	(1 << 2)

#define PORTA_PINCFG12_s    MMIO_REG(0x4100444c, struct __struct_PORTA_PINCFG12)
struct __struct_PORTA_PINCFG12
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG13	MMIO_REG(0x4100444d, uint8_t)
#define PORTA_PINCFG13_PMUXEN	(1 << 0)
#define PORTA_PINCFG13_INEN	(1 << 1)
#define PORTA_PINCFG13_PULLEN	(1 << 2)

#define PORTA_PINCFG13_s    MMIO_REG(0x4100444d, struct __struct_PORTA_PINCFG13)
struct __struct_PORTA_PINCFG13
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG14	MMIO_REG(0x4100444e, uint8_t)
#define PORTA_PINCFG14_PMUXEN	(1 << 0)
#define PORTA_PINCFG14_INEN	(1 << 1)
#define PORTA_PINCFG14_PULLEN	(1 << 2)

#define PORTA_PINCFG14_s    MMIO_REG(0x4100444e, struct __struct_PORTA_PINCFG14)
struct __struct_PORTA_PINCFG14
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG15	MMIO_REG(0x4100444f, uint8_t)
#define PORTA_PINCFG15_PMUXEN	(1 << 0)
#define PORTA_PINCFG15_INEN	(1 << 1)
#define PORTA_PINCFG15_PULLEN	(1 << 2)

#define PORTA_PINCFG15_s    MMIO_REG(0x4100444f, struct __struct_PORTA_PINCFG15)
struct __struct_PORTA_PINCFG15
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG16	MMIO_REG(0x41004450, uint8_t)
#define PORTA_PINCFG16_PMUXEN	(1 << 0)
#define PORTA_PINCFG16_INEN	(1 << 1)
#define PORTA_PINCFG16_PULLEN	(1 << 2)

#define PORTA_PINCFG16_s    MMIO_REG(0x41004450, struct __struct_PORTA_PINCFG16)
struct __struct_PORTA_PINCFG16
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG17	MMIO_REG(0x41004451, uint8_t)
#define PORTA_PINCFG17_PMUXEN	(1 << 0)
#define PORTA_PINCFG17_INEN	(1 << 1)
#define PORTA_PINCFG17_PULLEN	(1 << 2)

#define PORTA_PINCFG17_s    MMIO_REG(0x41004451, struct __struct_PORTA_PINCFG17)
struct __struct_PORTA_PINCFG17
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG18	MMIO_REG(0x41004452, uint8_t)
#define PORTA_PINCFG18_PMUXEN	(1 << 0)
#define PORTA_PINCFG18_INEN	(1 << 1)
#define PORTA_PINCFG18_PULLEN	(1 << 2)

#define PORTA_PINCFG18_s    MMIO_REG(0x41004452, struct __struct_PORTA_PINCFG18)
struct __struct_PORTA_PINCFG18
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG19	MMIO_REG(0x41004453, uint8_t)
#define PORTA_PINCFG19_PMUXEN	(1 << 0)
#define PORTA_PINCFG19_INEN	(1 << 1)
#define PORTA_PINCFG19_PULLEN	(1 << 2)

#define PORTA_PINCFG19_s    MMIO_REG(0x41004453, struct __struct_PORTA_PINCFG19)
struct __struct_PORTA_PINCFG19
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG20	MMIO_REG(0x41004454, uint8_t)
#define PORTA_PINCFG20_PMUXEN	(1 << 0)
#define PORTA_PINCFG20_INEN	(1 << 1)
#define PORTA_PINCFG20_PULLEN	(1 << 2)

#define PORTA_PINCFG20_s    MMIO_REG(0x41004454, struct __struct_PORTA_PINCFG20)
struct __struct_PORTA_PINCFG20
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG21	MMIO_REG(0x41004455, uint8_t)
#define PORTA_PINCFG21_PMUXEN	(1 << 0)
#define PORTA_PINCFG21_INEN	(1 << 1)
#define PORTA_PINCFG21_PULLEN	(1 << 2)

#define PORTA_PINCFG21_s    MMIO_REG(0x41004455, struct __struct_PORTA_PINCFG21)
struct __struct_PORTA_PINCFG21
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG22	MMIO_REG(0x41004456, uint8_t)
#define PORTA_PINCFG22_PMUXEN	(1 << 0)
#define PORTA_PINCFG22_INEN	(1 << 1)
#define PORTA_PINCFG22_PULLEN	(1 << 2)

#define PORTA_PINCFG22_s    MMIO_REG(0x41004456, struct __struct_PORTA_PINCFG22)
struct __struct_PORTA_PINCFG22
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG23	MMIO_REG(0x41004457, uint8_t)
#define PORTA_PINCFG23_PMUXEN	(1 << 0)
#define PORTA_PINCFG23_INEN	(1 << 1)
#define PORTA_PINCFG23_PULLEN	(1 << 2)

#define PORTA_PINCFG23_s    MMIO_REG(0x41004457, struct __struct_PORTA_PINCFG23)
struct __struct_PORTA_PINCFG23
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG24	MMIO_REG(0x41004458, uint8_t)
#define PORTA_PINCFG24_PMUXEN	(1 << 0)
#define PORTA_PINCFG24_INEN	(1 << 1)
#define PORTA_PINCFG24_PULLEN	(1 << 2)

#define PORTA_PINCFG24_s    MMIO_REG(0x41004458, struct __struct_PORTA_PINCFG24)
struct __struct_PORTA_PINCFG24
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG25	MMIO_REG(0x41004459, uint8_t)
#define PORTA_PINCFG25_PMUXEN	(1 << 0)
#define PORTA_PINCFG25_INEN	(1 << 1)
#define PORTA_PINCFG25_PULLEN	(1 << 2)

#define PORTA_PINCFG25_s    MMIO_REG(0x41004459, struct __struct_PORTA_PINCFG25)
struct __struct_PORTA_PINCFG25
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG26	MMIO_REG(0x4100445a, uint8_t)
#define PORTA_PINCFG26_PMUXEN	(1 << 0)
#define PORTA_PINCFG26_INEN	(1 << 1)
#define PORTA_PINCFG26_PULLEN	(1 << 2)

#define PORTA_PINCFG26_s    MMIO_REG(0x4100445a, struct __struct_PORTA_PINCFG26)
struct __struct_PORTA_PINCFG26
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG27	MMIO_REG(0x4100445b, uint8_t)
#define PORTA_PINCFG27_PMUXEN	(1 << 0)
#define PORTA_PINCFG27_INEN	(1 << 1)
#define PORTA_PINCFG27_PULLEN	(1 << 2)

#define PORTA_PINCFG27_s    MMIO_REG(0x4100445b, struct __struct_PORTA_PINCFG27)
struct __struct_PORTA_PINCFG27
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG28	MMIO_REG(0x4100445c, uint8_t)
#define PORTA_PINCFG28_PMUXEN	(1 << 0)
#define PORTA_PINCFG28_INEN	(1 << 1)
#define PORTA_PINCFG28_PULLEN	(1 << 2)

#define PORTA_PINCFG28_s    MMIO_REG(0x4100445c, struct __struct_PORTA_PINCFG28)
struct __struct_PORTA_PINCFG28
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG29	MMIO_REG(0x4100445d, uint8_t)
#define PORTA_PINCFG29_PMUXEN	(1 << 0)
#define PORTA_PINCFG29_INEN	(1 << 1)
#define PORTA_PINCFG29_PULLEN	(1 << 2)

#define PORTA_PINCFG29_s    MMIO_REG(0x4100445d, struct __struct_PORTA_PINCFG29)
struct __struct_PORTA_PINCFG29
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG30	MMIO_REG(0x4100445e, uint8_t)
#define PORTA_PINCFG30_PMUXEN	(1 << 0)
#define PORTA_PINCFG30_INEN	(1 << 1)
#define PORTA_PINCFG30_PULLEN	(1 << 2)

#define PORTA_PINCFG30_s    MMIO_REG(0x4100445e, struct __struct_PORTA_PINCFG30)
struct __struct_PORTA_PINCFG30
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTA_PINCFG31	MMIO_REG(0x4100445f, uint8_t)
#define PORTA_PINCFG31_PMUXEN	(1 << 0)
#define PORTA_PINCFG31_INEN	(1 << 1)
#define PORTA_PINCFG31_PULLEN	(1 << 2)

#define PORTA_PINCFG31_s    MMIO_REG(0x4100445f, struct __struct_PORTA_PINCFG31)
struct __struct_PORTA_PINCFG31
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

// 0x41004480 PORTB

#define PORTB_DIR	MMIO_REG(0x41004480, uint32_t)
#define PORTB_DIR_P0	(1 << 0)
#define PORTB_DIR_P1	(1 << 1)
#define PORTB_DIR_P2	(1 << 2)
#define PORTB_DIR_P3	(1 << 3)
#define PORTB_DIR_P4	(1 << 4)
#define PORTB_DIR_P5	(1 << 5)
#define PORTB_DIR_P6	(1 << 6)
#define PORTB_DIR_P7	(1 << 7)
#define PORTB_DIR_P8	(1 << 8)
#define PORTB_DIR_P9	(1 << 9)
#define PORTB_DIR_P10	(1 << 10)
#define PORTB_DIR_P11	(1 << 11)
#define PORTB_DIR_P12	(1 << 12)
#define PORTB_DIR_P13	(1 << 13)
#define PORTB_DIR_P14	(1 << 14)
#define PORTB_DIR_P15	(1 << 15)
#define PORTB_DIR_P16	(1 << 16)
#define PORTB_DIR_P17	(1 << 17)
#define PORTB_DIR_P18	(1 << 18)
#define PORTB_DIR_P19	(1 << 19)
#define PORTB_DIR_P20	(1 << 20)
#define PORTB_DIR_P21	(1 << 21)
#define PORTB_DIR_P22	(1 << 22)
#define PORTB_DIR_P23	(1 << 23)
#define PORTB_DIR_P24	(1 << 24)
#define PORTB_DIR_P25	(1 << 25)
#define PORTB_DIR_P26	(1 << 26)
#define PORTB_DIR_P27	(1 << 27)
#define PORTB_DIR_P28	(1 << 28)
#define PORTB_DIR_P29	(1 << 29)
#define PORTB_DIR_P30	(1 << 30)
#define PORTB_DIR_P31	(1 << 31)

#define PORTB_DIR_s    MMIO_REG(0x41004480, struct __struct_PORTB_DIR)
struct __struct_PORTB_DIR
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_DIRCLR	MMIO_REG(0x41004484, uint32_t)
#define PORTB_DIRCLR_P0	(1 << 0)
#define PORTB_DIRCLR_P1	(1 << 1)
#define PORTB_DIRCLR_P2	(1 << 2)
#define PORTB_DIRCLR_P3	(1 << 3)
#define PORTB_DIRCLR_P4	(1 << 4)
#define PORTB_DIRCLR_P5	(1 << 5)
#define PORTB_DIRCLR_P6	(1 << 6)
#define PORTB_DIRCLR_P7	(1 << 7)
#define PORTB_DIRCLR_P8	(1 << 8)
#define PORTB_DIRCLR_P9	(1 << 9)
#define PORTB_DIRCLR_P10	(1 << 10)
#define PORTB_DIRCLR_P11	(1 << 11)
#define PORTB_DIRCLR_P12	(1 << 12)
#define PORTB_DIRCLR_P13	(1 << 13)
#define PORTB_DIRCLR_P14	(1 << 14)
#define PORTB_DIRCLR_P15	(1 << 15)
#define PORTB_DIRCLR_P16	(1 << 16)
#define PORTB_DIRCLR_P17	(1 << 17)
#define PORTB_DIRCLR_P18	(1 << 18)
#define PORTB_DIRCLR_P19	(1 << 19)
#define PORTB_DIRCLR_P20	(1 << 20)
#define PORTB_DIRCLR_P21	(1 << 21)
#define PORTB_DIRCLR_P22	(1 << 22)
#define PORTB_DIRCLR_P23	(1 << 23)
#define PORTB_DIRCLR_P24	(1 << 24)
#define PORTB_DIRCLR_P25	(1 << 25)
#define PORTB_DIRCLR_P26	(1 << 26)
#define PORTB_DIRCLR_P27	(1 << 27)
#define PORTB_DIRCLR_P28	(1 << 28)
#define PORTB_DIRCLR_P29	(1 << 29)
#define PORTB_DIRCLR_P30	(1 << 30)
#define PORTB_DIRCLR_P31	(1 << 31)

#define PORTB_DIRCLR_s    MMIO_REG(0x41004484, struct __struct_PORTB_DIRCLR)
struct __struct_PORTB_DIRCLR
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_DIRSET	MMIO_REG(0x41004488, uint32_t)
#define PORTB_DIRSET_P0	(1 << 0)
#define PORTB_DIRSET_P1	(1 << 1)
#define PORTB_DIRSET_P2	(1 << 2)
#define PORTB_DIRSET_P3	(1 << 3)
#define PORTB_DIRSET_P4	(1 << 4)
#define PORTB_DIRSET_P5	(1 << 5)
#define PORTB_DIRSET_P6	(1 << 6)
#define PORTB_DIRSET_P7	(1 << 7)
#define PORTB_DIRSET_P8	(1 << 8)
#define PORTB_DIRSET_P9	(1 << 9)
#define PORTB_DIRSET_P10	(1 << 10)
#define PORTB_DIRSET_P11	(1 << 11)
#define PORTB_DIRSET_P12	(1 << 12)
#define PORTB_DIRSET_P13	(1 << 13)
#define PORTB_DIRSET_P14	(1 << 14)
#define PORTB_DIRSET_P15	(1 << 15)
#define PORTB_DIRSET_P16	(1 << 16)
#define PORTB_DIRSET_P17	(1 << 17)
#define PORTB_DIRSET_P18	(1 << 18)
#define PORTB_DIRSET_P19	(1 << 19)
#define PORTB_DIRSET_P20	(1 << 20)
#define PORTB_DIRSET_P21	(1 << 21)
#define PORTB_DIRSET_P22	(1 << 22)
#define PORTB_DIRSET_P23	(1 << 23)
#define PORTB_DIRSET_P24	(1 << 24)
#define PORTB_DIRSET_P25	(1 << 25)
#define PORTB_DIRSET_P26	(1 << 26)
#define PORTB_DIRSET_P27	(1 << 27)
#define PORTB_DIRSET_P28	(1 << 28)
#define PORTB_DIRSET_P29	(1 << 29)
#define PORTB_DIRSET_P30	(1 << 30)
#define PORTB_DIRSET_P31	(1 << 31)

#define PORTB_DIRSET_s    MMIO_REG(0x41004488, struct __struct_PORTB_DIRSET)
struct __struct_PORTB_DIRSET
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_DIRTGL	MMIO_REG(0x4100448c, uint32_t)
#define PORTB_DIRTGL_P0	(1 << 0)
#define PORTB_DIRTGL_P1	(1 << 1)
#define PORTB_DIRTGL_P2	(1 << 2)
#define PORTB_DIRTGL_P3	(1 << 3)
#define PORTB_DIRTGL_P4	(1 << 4)
#define PORTB_DIRTGL_P5	(1 << 5)
#define PORTB_DIRTGL_P6	(1 << 6)
#define PORTB_DIRTGL_P7	(1 << 7)
#define PORTB_DIRTGL_P8	(1 << 8)
#define PORTB_DIRTGL_P9	(1 << 9)
#define PORTB_DIRTGL_P10	(1 << 10)
#define PORTB_DIRTGL_P11	(1 << 11)
#define PORTB_DIRTGL_P12	(1 << 12)
#define PORTB_DIRTGL_P13	(1 << 13)
#define PORTB_DIRTGL_P14	(1 << 14)
#define PORTB_DIRTGL_P15	(1 << 15)
#define PORTB_DIRTGL_P16	(1 << 16)
#define PORTB_DIRTGL_P17	(1 << 17)
#define PORTB_DIRTGL_P18	(1 << 18)
#define PORTB_DIRTGL_P19	(1 << 19)
#define PORTB_DIRTGL_P20	(1 << 20)
#define PORTB_DIRTGL_P21	(1 << 21)
#define PORTB_DIRTGL_P22	(1 << 22)
#define PORTB_DIRTGL_P23	(1 << 23)
#define PORTB_DIRTGL_P24	(1 << 24)
#define PORTB_DIRTGL_P25	(1 << 25)
#define PORTB_DIRTGL_P26	(1 << 26)
#define PORTB_DIRTGL_P27	(1 << 27)
#define PORTB_DIRTGL_P28	(1 << 28)
#define PORTB_DIRTGL_P29	(1 << 29)
#define PORTB_DIRTGL_P30	(1 << 30)
#define PORTB_DIRTGL_P31	(1 << 31)

#define PORTB_DIRTGL_s    MMIO_REG(0x4100448c, struct __struct_PORTB_DIRTGL)
struct __struct_PORTB_DIRTGL
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_OUT	MMIO_REG(0x41004490, uint32_t)
#define PORTB_OUT_P0	(1 << 0)
#define PORTB_OUT_P1	(1 << 1)
#define PORTB_OUT_P2	(1 << 2)
#define PORTB_OUT_P3	(1 << 3)
#define PORTB_OUT_P4	(1 << 4)
#define PORTB_OUT_P5	(1 << 5)
#define PORTB_OUT_P6	(1 << 6)
#define PORTB_OUT_P7	(1 << 7)
#define PORTB_OUT_P8	(1 << 8)
#define PORTB_OUT_P9	(1 << 9)
#define PORTB_OUT_P10	(1 << 10)
#define PORTB_OUT_P11	(1 << 11)
#define PORTB_OUT_P12	(1 << 12)
#define PORTB_OUT_P13	(1 << 13)
#define PORTB_OUT_P14	(1 << 14)
#define PORTB_OUT_P15	(1 << 15)
#define PORTB_OUT_P16	(1 << 16)
#define PORTB_OUT_P17	(1 << 17)
#define PORTB_OUT_P18	(1 << 18)
#define PORTB_OUT_P19	(1 << 19)
#define PORTB_OUT_P20	(1 << 20)
#define PORTB_OUT_P21	(1 << 21)
#define PORTB_OUT_P22	(1 << 22)
#define PORTB_OUT_P23	(1 << 23)
#define PORTB_OUT_P24	(1 << 24)
#define PORTB_OUT_P25	(1 << 25)
#define PORTB_OUT_P26	(1 << 26)
#define PORTB_OUT_P27	(1 << 27)
#define PORTB_OUT_P28	(1 << 28)
#define PORTB_OUT_P29	(1 << 29)
#define PORTB_OUT_P30	(1 << 30)
#define PORTB_OUT_P31	(1 << 31)

#define PORTB_OUT_s    MMIO_REG(0x41004490, struct __struct_PORTB_OUT)
struct __struct_PORTB_OUT
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_OUTCLR	MMIO_REG(0x41004494, uint32_t)
#define PORTB_OUTCLR_P0	(1 << 0)
#define PORTB_OUTCLR_P1	(1 << 1)
#define PORTB_OUTCLR_P2	(1 << 2)
#define PORTB_OUTCLR_P3	(1 << 3)
#define PORTB_OUTCLR_P4	(1 << 4)
#define PORTB_OUTCLR_P5	(1 << 5)
#define PORTB_OUTCLR_P6	(1 << 6)
#define PORTB_OUTCLR_P7	(1 << 7)
#define PORTB_OUTCLR_P8	(1 << 8)
#define PORTB_OUTCLR_P9	(1 << 9)
#define PORTB_OUTCLR_P10	(1 << 10)
#define PORTB_OUTCLR_P11	(1 << 11)
#define PORTB_OUTCLR_P12	(1 << 12)
#define PORTB_OUTCLR_P13	(1 << 13)
#define PORTB_OUTCLR_P14	(1 << 14)
#define PORTB_OUTCLR_P15	(1 << 15)
#define PORTB_OUTCLR_P16	(1 << 16)
#define PORTB_OUTCLR_P17	(1 << 17)
#define PORTB_OUTCLR_P18	(1 << 18)
#define PORTB_OUTCLR_P19	(1 << 19)
#define PORTB_OUTCLR_P20	(1 << 20)
#define PORTB_OUTCLR_P21	(1 << 21)
#define PORTB_OUTCLR_P22	(1 << 22)
#define PORTB_OUTCLR_P23	(1 << 23)
#define PORTB_OUTCLR_P24	(1 << 24)
#define PORTB_OUTCLR_P25	(1 << 25)
#define PORTB_OUTCLR_P26	(1 << 26)
#define PORTB_OUTCLR_P27	(1 << 27)
#define PORTB_OUTCLR_P28	(1 << 28)
#define PORTB_OUTCLR_P29	(1 << 29)
#define PORTB_OUTCLR_P30	(1 << 30)
#define PORTB_OUTCLR_P31	(1 << 31)

#define PORTB_OUTCLR_s    MMIO_REG(0x41004494, struct __struct_PORTB_OUTCLR)
struct __struct_PORTB_OUTCLR
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_OUTSET	MMIO_REG(0x41004498, uint32_t)
#define PORTB_OUTSET_P0	(1 << 0)
#define PORTB_OUTSET_P1	(1 << 1)
#define PORTB_OUTSET_P2	(1 << 2)
#define PORTB_OUTSET_P3	(1 << 3)
#define PORTB_OUTSET_P4	(1 << 4)
#define PORTB_OUTSET_P5	(1 << 5)
#define PORTB_OUTSET_P6	(1 << 6)
#define PORTB_OUTSET_P7	(1 << 7)
#define PORTB_OUTSET_P8	(1 << 8)
#define PORTB_OUTSET_P9	(1 << 9)
#define PORTB_OUTSET_P10	(1 << 10)
#define PORTB_OUTSET_P11	(1 << 11)
#define PORTB_OUTSET_P12	(1 << 12)
#define PORTB_OUTSET_P13	(1 << 13)
#define PORTB_OUTSET_P14	(1 << 14)
#define PORTB_OUTSET_P15	(1 << 15)
#define PORTB_OUTSET_P16	(1 << 16)
#define PORTB_OUTSET_P17	(1 << 17)
#define PORTB_OUTSET_P18	(1 << 18)
#define PORTB_OUTSET_P19	(1 << 19)
#define PORTB_OUTSET_P20	(1 << 20)
#define PORTB_OUTSET_P21	(1 << 21)
#define PORTB_OUTSET_P22	(1 << 22)
#define PORTB_OUTSET_P23	(1 << 23)
#define PORTB_OUTSET_P24	(1 << 24)
#define PORTB_OUTSET_P25	(1 << 25)
#define PORTB_OUTSET_P26	(1 << 26)
#define PORTB_OUTSET_P27	(1 << 27)
#define PORTB_OUTSET_P28	(1 << 28)
#define PORTB_OUTSET_P29	(1 << 29)
#define PORTB_OUTSET_P30	(1 << 30)
#define PORTB_OUTSET_P31	(1 << 31)

#define PORTB_OUTSET_s    MMIO_REG(0x41004498, struct __struct_PORTB_OUTSET)
struct __struct_PORTB_OUTSET
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_OUTTGL	MMIO_REG(0x4100449c, uint32_t)
#define PORTB_OUTTGL_P0	(1 << 0)
#define PORTB_OUTTGL_P1	(1 << 1)
#define PORTB_OUTTGL_P2	(1 << 2)
#define PORTB_OUTTGL_P3	(1 << 3)
#define PORTB_OUTTGL_P4	(1 << 4)
#define PORTB_OUTTGL_P5	(1 << 5)
#define PORTB_OUTTGL_P6	(1 << 6)
#define PORTB_OUTTGL_P7	(1 << 7)
#define PORTB_OUTTGL_P8	(1 << 8)
#define PORTB_OUTTGL_P9	(1 << 9)
#define PORTB_OUTTGL_P10	(1 << 10)
#define PORTB_OUTTGL_P11	(1 << 11)
#define PORTB_OUTTGL_P12	(1 << 12)
#define PORTB_OUTTGL_P13	(1 << 13)
#define PORTB_OUTTGL_P14	(1 << 14)
#define PORTB_OUTTGL_P15	(1 << 15)
#define PORTB_OUTTGL_P16	(1 << 16)
#define PORTB_OUTTGL_P17	(1 << 17)
#define PORTB_OUTTGL_P18	(1 << 18)
#define PORTB_OUTTGL_P19	(1 << 19)
#define PORTB_OUTTGL_P20	(1 << 20)
#define PORTB_OUTTGL_P21	(1 << 21)
#define PORTB_OUTTGL_P22	(1 << 22)
#define PORTB_OUTTGL_P23	(1 << 23)
#define PORTB_OUTTGL_P24	(1 << 24)
#define PORTB_OUTTGL_P25	(1 << 25)
#define PORTB_OUTTGL_P26	(1 << 26)
#define PORTB_OUTTGL_P27	(1 << 27)
#define PORTB_OUTTGL_P28	(1 << 28)
#define PORTB_OUTTGL_P29	(1 << 29)
#define PORTB_OUTTGL_P30	(1 << 30)
#define PORTB_OUTTGL_P31	(1 << 31)

#define PORTB_OUTTGL_s    MMIO_REG(0x4100449c, struct __struct_PORTB_OUTTGL)
struct __struct_PORTB_OUTTGL
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_IN	MMIO_REG(0x410044a0, uint32_t)
#define PORTB_IN_P0	(1 << 0)
#define PORTB_IN_P1	(1 << 1)
#define PORTB_IN_P2	(1 << 2)
#define PORTB_IN_P3	(1 << 3)
#define PORTB_IN_P4	(1 << 4)
#define PORTB_IN_P5	(1 << 5)
#define PORTB_IN_P6	(1 << 6)
#define PORTB_IN_P7	(1 << 7)
#define PORTB_IN_P8	(1 << 8)
#define PORTB_IN_P9	(1 << 9)
#define PORTB_IN_P10	(1 << 10)
#define PORTB_IN_P11	(1 << 11)
#define PORTB_IN_P12	(1 << 12)
#define PORTB_IN_P13	(1 << 13)
#define PORTB_IN_P14	(1 << 14)
#define PORTB_IN_P15	(1 << 15)
#define PORTB_IN_P16	(1 << 16)
#define PORTB_IN_P17	(1 << 17)
#define PORTB_IN_P18	(1 << 18)
#define PORTB_IN_P19	(1 << 19)
#define PORTB_IN_P20	(1 << 20)
#define PORTB_IN_P21	(1 << 21)
#define PORTB_IN_P22	(1 << 22)
#define PORTB_IN_P23	(1 << 23)
#define PORTB_IN_P24	(1 << 24)
#define PORTB_IN_P25	(1 << 25)
#define PORTB_IN_P26	(1 << 26)
#define PORTB_IN_P27	(1 << 27)
#define PORTB_IN_P28	(1 << 28)
#define PORTB_IN_P29	(1 << 29)
#define PORTB_IN_P30	(1 << 30)
#define PORTB_IN_P31	(1 << 31)

#define PORTB_IN_s    MMIO_REG(0x410044a0, struct __struct_PORTB_IN)
struct __struct_PORTB_IN
{
  uint32_t p0 : 1;
  uint32_t p1 : 1;
  uint32_t p2 : 1;
  uint32_t p3 : 1;
  uint32_t p4 : 1;
  uint32_t p5 : 1;
  uint32_t p6 : 1;
  uint32_t p7 : 1;
  uint32_t p8 : 1;
  uint32_t p9 : 1;
  uint32_t p10 : 1;
  uint32_t p11 : 1;
  uint32_t p12 : 1;
  uint32_t p13 : 1;
  uint32_t p14 : 1;
  uint32_t p15 : 1;
  uint32_t p16 : 1;
  uint32_t p17 : 1;
  uint32_t p18 : 1;
  uint32_t p19 : 1;
  uint32_t p20 : 1;
  uint32_t p21 : 1;
  uint32_t p22 : 1;
  uint32_t p23 : 1;
  uint32_t p24 : 1;
  uint32_t p25 : 1;
  uint32_t p26 : 1;
  uint32_t p27 : 1;
  uint32_t p28 : 1;
  uint32_t p29 : 1;
  uint32_t p30 : 1;
  uint32_t p31 : 1;
};

#define PORTB_CTRL	MMIO_REG(0x410044a4, uint32_t)

#define PORTB_WRCONFIG	MMIO_REG(0x410044a8, uint32_t)
#define PORTB_WRCONFIG_PINMASK(x)	((x) << 0)
#define PORTB_WRCONFIG_PINMASK_MSK	0x0000ffff
#define PORTB_WRCONFIG_PINMASK_VAL(x)	(((x) >> 0) & 0xffff)
#define PORTB_WRCONFIG_PMUXEN	(1 << 16)
#define PORTB_WRCONFIG_INEN	(1 << 17)
#define PORTB_WRCONFIG_PULLEN	(1 << 18)
#define PORTB_WRCONFIG_PMUX(x)	((x) << 24)
#define PORTB_WRCONFIG_PMUX_MSK	0x0f000000
#define PORTB_WRCONFIG_PMUX_VAL(x)	(((x) >> 24) & 0xf)
#define PORTB_WRCONFIG_WRPMUX	(1 << 28)
#define PORTB_WRCONFIG_WRPINCFG	(1 << 30)
#define PORTB_WRCONFIG_HWSEL	(1 << 31)

#define PORTB_WRCONFIG_s    MMIO_REG(0x410044a8, struct __struct_PORTB_WRCONFIG)
struct __struct_PORTB_WRCONFIG
{
  uint32_t pinmask : 16;
  uint32_t pmuxen : 1;
  uint32_t inen : 1;
  uint32_t pullen : 1;
  uint32_t  : 5;
  uint32_t pmux : 4;
  uint32_t wrpmux : 1;
  uint32_t  : 1;
  uint32_t wrpincfg : 1;
  uint32_t hwsel : 1;
};

#define PORTB_PMUX0	MMIO_REG(0x410044b0, uint8_t)
#define PORTB_PMUX0_PMUXE(x)	((x) << 0)
#define PORTB_PMUX0_PMUXE_MSK	0x0000000f
#define PORTB_PMUX0_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX0_PMUXO(x)	((x) << 4)
#define PORTB_PMUX0_PMUXO_MSK	0x000000f0
#define PORTB_PMUX0_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX0_s    MMIO_REG(0x410044b0, struct __struct_PORTB_PMUX0)
struct __struct_PORTB_PMUX0
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX1	MMIO_REG(0x410044b1, uint8_t)
#define PORTB_PMUX1_PMUXE(x)	((x) << 0)
#define PORTB_PMUX1_PMUXE_MSK	0x0000000f
#define PORTB_PMUX1_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX1_PMUXO(x)	((x) << 4)
#define PORTB_PMUX1_PMUXO_MSK	0x000000f0
#define PORTB_PMUX1_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX1_s    MMIO_REG(0x410044b1, struct __struct_PORTB_PMUX1)
struct __struct_PORTB_PMUX1
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX2	MMIO_REG(0x410044b2, uint8_t)
#define PORTB_PMUX2_PMUXE(x)	((x) << 0)
#define PORTB_PMUX2_PMUXE_MSK	0x0000000f
#define PORTB_PMUX2_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX2_PMUXO(x)	((x) << 4)
#define PORTB_PMUX2_PMUXO_MSK	0x000000f0
#define PORTB_PMUX2_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX2_s    MMIO_REG(0x410044b2, struct __struct_PORTB_PMUX2)
struct __struct_PORTB_PMUX2
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX3	MMIO_REG(0x410044b3, uint8_t)
#define PORTB_PMUX3_PMUXE(x)	((x) << 0)
#define PORTB_PMUX3_PMUXE_MSK	0x0000000f
#define PORTB_PMUX3_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX3_PMUXO(x)	((x) << 4)
#define PORTB_PMUX3_PMUXO_MSK	0x000000f0
#define PORTB_PMUX3_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX3_s    MMIO_REG(0x410044b3, struct __struct_PORTB_PMUX3)
struct __struct_PORTB_PMUX3
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX4	MMIO_REG(0x410044b4, uint8_t)
#define PORTB_PMUX4_PMUXE(x)	((x) << 0)
#define PORTB_PMUX4_PMUXE_MSK	0x0000000f
#define PORTB_PMUX4_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX4_PMUXO(x)	((x) << 4)
#define PORTB_PMUX4_PMUXO_MSK	0x000000f0
#define PORTB_PMUX4_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX4_s    MMIO_REG(0x410044b4, struct __struct_PORTB_PMUX4)
struct __struct_PORTB_PMUX4
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX5	MMIO_REG(0x410044b5, uint8_t)
#define PORTB_PMUX5_PMUXE(x)	((x) << 0)
#define PORTB_PMUX5_PMUXE_MSK	0x0000000f
#define PORTB_PMUX5_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX5_PMUXO(x)	((x) << 4)
#define PORTB_PMUX5_PMUXO_MSK	0x000000f0
#define PORTB_PMUX5_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX5_s    MMIO_REG(0x410044b5, struct __struct_PORTB_PMUX5)
struct __struct_PORTB_PMUX5
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX6	MMIO_REG(0x410044b6, uint8_t)
#define PORTB_PMUX6_PMUXE(x)	((x) << 0)
#define PORTB_PMUX6_PMUXE_MSK	0x0000000f
#define PORTB_PMUX6_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX6_PMUXO(x)	((x) << 4)
#define PORTB_PMUX6_PMUXO_MSK	0x000000f0
#define PORTB_PMUX6_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX6_s    MMIO_REG(0x410044b6, struct __struct_PORTB_PMUX6)
struct __struct_PORTB_PMUX6
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX7	MMIO_REG(0x410044b7, uint8_t)
#define PORTB_PMUX7_PMUXE(x)	((x) << 0)
#define PORTB_PMUX7_PMUXE_MSK	0x0000000f
#define PORTB_PMUX7_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX7_PMUXO(x)	((x) << 4)
#define PORTB_PMUX7_PMUXO_MSK	0x000000f0
#define PORTB_PMUX7_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX7_s    MMIO_REG(0x410044b7, struct __struct_PORTB_PMUX7)
struct __struct_PORTB_PMUX7
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX8	MMIO_REG(0x410044b8, uint8_t)
#define PORTB_PMUX8_PMUXE(x)	((x) << 0)
#define PORTB_PMUX8_PMUXE_MSK	0x0000000f
#define PORTB_PMUX8_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX8_PMUXO(x)	((x) << 4)
#define PORTB_PMUX8_PMUXO_MSK	0x000000f0
#define PORTB_PMUX8_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX8_s    MMIO_REG(0x410044b8, struct __struct_PORTB_PMUX8)
struct __struct_PORTB_PMUX8
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX9	MMIO_REG(0x410044b9, uint8_t)
#define PORTB_PMUX9_PMUXE(x)	((x) << 0)
#define PORTB_PMUX9_PMUXE_MSK	0x0000000f
#define PORTB_PMUX9_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX9_PMUXO(x)	((x) << 4)
#define PORTB_PMUX9_PMUXO_MSK	0x000000f0
#define PORTB_PMUX9_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX9_s    MMIO_REG(0x410044b9, struct __struct_PORTB_PMUX9)
struct __struct_PORTB_PMUX9
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX10	MMIO_REG(0x410044ba, uint8_t)
#define PORTB_PMUX10_PMUXE(x)	((x) << 0)
#define PORTB_PMUX10_PMUXE_MSK	0x0000000f
#define PORTB_PMUX10_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX10_PMUXO(x)	((x) << 4)
#define PORTB_PMUX10_PMUXO_MSK	0x000000f0
#define PORTB_PMUX10_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX10_s    MMIO_REG(0x410044ba, struct __struct_PORTB_PMUX10)
struct __struct_PORTB_PMUX10
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX11	MMIO_REG(0x410044bb, uint8_t)
#define PORTB_PMUX11_PMUXE(x)	((x) << 0)
#define PORTB_PMUX11_PMUXE_MSK	0x0000000f
#define PORTB_PMUX11_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX11_PMUXO(x)	((x) << 4)
#define PORTB_PMUX11_PMUXO_MSK	0x000000f0
#define PORTB_PMUX11_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX11_s    MMIO_REG(0x410044bb, struct __struct_PORTB_PMUX11)
struct __struct_PORTB_PMUX11
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX12	MMIO_REG(0x410044bc, uint8_t)
#define PORTB_PMUX12_PMUXE(x)	((x) << 0)
#define PORTB_PMUX12_PMUXE_MSK	0x0000000f
#define PORTB_PMUX12_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX12_PMUXO(x)	((x) << 4)
#define PORTB_PMUX12_PMUXO_MSK	0x000000f0
#define PORTB_PMUX12_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX12_s    MMIO_REG(0x410044bc, struct __struct_PORTB_PMUX12)
struct __struct_PORTB_PMUX12
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX13	MMIO_REG(0x410044bd, uint8_t)
#define PORTB_PMUX13_PMUXE(x)	((x) << 0)
#define PORTB_PMUX13_PMUXE_MSK	0x0000000f
#define PORTB_PMUX13_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX13_PMUXO(x)	((x) << 4)
#define PORTB_PMUX13_PMUXO_MSK	0x000000f0
#define PORTB_PMUX13_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX13_s    MMIO_REG(0x410044bd, struct __struct_PORTB_PMUX13)
struct __struct_PORTB_PMUX13
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX14	MMIO_REG(0x410044be, uint8_t)
#define PORTB_PMUX14_PMUXE(x)	((x) << 0)
#define PORTB_PMUX14_PMUXE_MSK	0x0000000f
#define PORTB_PMUX14_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX14_PMUXO(x)	((x) << 4)
#define PORTB_PMUX14_PMUXO_MSK	0x000000f0
#define PORTB_PMUX14_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX14_s    MMIO_REG(0x410044be, struct __struct_PORTB_PMUX14)
struct __struct_PORTB_PMUX14
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PMUX15	MMIO_REG(0x410044bf, uint8_t)
#define PORTB_PMUX15_PMUXE(x)	((x) << 0)
#define PORTB_PMUX15_PMUXE_MSK	0x0000000f
#define PORTB_PMUX15_PMUXE_VAL(x)	(((x) >> 0) & 0xf)
#define PORTB_PMUX15_PMUXO(x)	((x) << 4)
#define PORTB_PMUX15_PMUXO_MSK	0x000000f0
#define PORTB_PMUX15_PMUXO_VAL(x)	(((x) >> 4) & 0xf)

#define PORTB_PMUX15_s    MMIO_REG(0x410044bf, struct __struct_PORTB_PMUX15)
struct __struct_PORTB_PMUX15
{
  uint8_t pmuxe : 4;
  uint8_t pmuxo : 4;
};

#define PORTB_PINCFG0	MMIO_REG(0x410044c0, uint8_t)
#define PORTB_PINCFG0_PMUXEN	(1 << 0)
#define PORTB_PINCFG0_INEN	(1 << 1)
#define PORTB_PINCFG0_PULLEN	(1 << 2)

#define PORTB_PINCFG0_s    MMIO_REG(0x410044c0, struct __struct_PORTB_PINCFG0)
struct __struct_PORTB_PINCFG0
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG1	MMIO_REG(0x410044c1, uint8_t)
#define PORTB_PINCFG1_PMUXEN	(1 << 0)
#define PORTB_PINCFG1_INEN	(1 << 1)
#define PORTB_PINCFG1_PULLEN	(1 << 2)

#define PORTB_PINCFG1_s    MMIO_REG(0x410044c1, struct __struct_PORTB_PINCFG1)
struct __struct_PORTB_PINCFG1
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG2	MMIO_REG(0x410044c2, uint8_t)
#define PORTB_PINCFG2_PMUXEN	(1 << 0)
#define PORTB_PINCFG2_INEN	(1 << 1)
#define PORTB_PINCFG2_PULLEN	(1 << 2)

#define PORTB_PINCFG2_s    MMIO_REG(0x410044c2, struct __struct_PORTB_PINCFG2)
struct __struct_PORTB_PINCFG2
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG3	MMIO_REG(0x410044c3, uint8_t)
#define PORTB_PINCFG3_PMUXEN	(1 << 0)
#define PORTB_PINCFG3_INEN	(1 << 1)
#define PORTB_PINCFG3_PULLEN	(1 << 2)

#define PORTB_PINCFG3_s    MMIO_REG(0x410044c3, struct __struct_PORTB_PINCFG3)
struct __struct_PORTB_PINCFG3
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG4	MMIO_REG(0x410044c4, uint8_t)
#define PORTB_PINCFG4_PMUXEN	(1 << 0)
#define PORTB_PINCFG4_INEN	(1 << 1)
#define PORTB_PINCFG4_PULLEN	(1 << 2)

#define PORTB_PINCFG4_s    MMIO_REG(0x410044c4, struct __struct_PORTB_PINCFG4)
struct __struct_PORTB_PINCFG4
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG5	MMIO_REG(0x410044c5, uint8_t)
#define PORTB_PINCFG5_PMUXEN	(1 << 0)
#define PORTB_PINCFG5_INEN	(1 << 1)
#define PORTB_PINCFG5_PULLEN	(1 << 2)

#define PORTB_PINCFG5_s    MMIO_REG(0x410044c5, struct __struct_PORTB_PINCFG5)
struct __struct_PORTB_PINCFG5
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG6	MMIO_REG(0x410044c6, uint8_t)
#define PORTB_PINCFG6_PMUXEN	(1 << 0)
#define PORTB_PINCFG6_INEN	(1 << 1)
#define PORTB_PINCFG6_PULLEN	(1 << 2)

#define PORTB_PINCFG6_s    MMIO_REG(0x410044c6, struct __struct_PORTB_PINCFG6)
struct __struct_PORTB_PINCFG6
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG7	MMIO_REG(0x410044c7, uint8_t)
#define PORTB_PINCFG7_PMUXEN	(1 << 0)
#define PORTB_PINCFG7_INEN	(1 << 1)
#define PORTB_PINCFG7_PULLEN	(1 << 2)

#define PORTB_PINCFG7_s    MMIO_REG(0x410044c7, struct __struct_PORTB_PINCFG7)
struct __struct_PORTB_PINCFG7
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG8	MMIO_REG(0x410044c8, uint8_t)
#define PORTB_PINCFG8_PMUXEN	(1 << 0)
#define PORTB_PINCFG8_INEN	(1 << 1)
#define PORTB_PINCFG8_PULLEN	(1 << 2)

#define PORTB_PINCFG8_s    MMIO_REG(0x410044c8, struct __struct_PORTB_PINCFG8)
struct __struct_PORTB_PINCFG8
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG9	MMIO_REG(0x410044c9, uint8_t)
#define PORTB_PINCFG9_PMUXEN	(1 << 0)
#define PORTB_PINCFG9_INEN	(1 << 1)
#define PORTB_PINCFG9_PULLEN	(1 << 2)

#define PORTB_PINCFG9_s    MMIO_REG(0x410044c9, struct __struct_PORTB_PINCFG9)
struct __struct_PORTB_PINCFG9
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG10	MMIO_REG(0x410044ca, uint8_t)
#define PORTB_PINCFG10_PMUXEN	(1 << 0)
#define PORTB_PINCFG10_INEN	(1 << 1)
#define PORTB_PINCFG10_PULLEN	(1 << 2)

#define PORTB_PINCFG10_s    MMIO_REG(0x410044ca, struct __struct_PORTB_PINCFG10)
struct __struct_PORTB_PINCFG10
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG11	MMIO_REG(0x410044cb, uint8_t)
#define PORTB_PINCFG11_PMUXEN	(1 << 0)
#define PORTB_PINCFG11_INEN	(1 << 1)
#define PORTB_PINCFG11_PULLEN	(1 << 2)

#define PORTB_PINCFG11_s    MMIO_REG(0x410044cb, struct __struct_PORTB_PINCFG11)
struct __struct_PORTB_PINCFG11
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG12	MMIO_REG(0x410044cc, uint8_t)
#define PORTB_PINCFG12_PMUXEN	(1 << 0)
#define PORTB_PINCFG12_INEN	(1 << 1)
#define PORTB_PINCFG12_PULLEN	(1 << 2)

#define PORTB_PINCFG12_s    MMIO_REG(0x410044cc, struct __struct_PORTB_PINCFG12)
struct __struct_PORTB_PINCFG12
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG13	MMIO_REG(0x410044cd, uint8_t)
#define PORTB_PINCFG13_PMUXEN	(1 << 0)
#define PORTB_PINCFG13_INEN	(1 << 1)
#define PORTB_PINCFG13_PULLEN	(1 << 2)

#define PORTB_PINCFG13_s    MMIO_REG(0x410044cd, struct __struct_PORTB_PINCFG13)
struct __struct_PORTB_PINCFG13
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG14	MMIO_REG(0x410044ce, uint8_t)
#define PORTB_PINCFG14_PMUXEN	(1 << 0)
#define PORTB_PINCFG14_INEN	(1 << 1)
#define PORTB_PINCFG14_PULLEN	(1 << 2)

#define PORTB_PINCFG14_s    MMIO_REG(0x410044ce, struct __struct_PORTB_PINCFG14)
struct __struct_PORTB_PINCFG14
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG15	MMIO_REG(0x410044cf, uint8_t)
#define PORTB_PINCFG15_PMUXEN	(1 << 0)
#define PORTB_PINCFG15_INEN	(1 << 1)
#define PORTB_PINCFG15_PULLEN	(1 << 2)

#define PORTB_PINCFG15_s    MMIO_REG(0x410044cf, struct __struct_PORTB_PINCFG15)
struct __struct_PORTB_PINCFG15
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG16	MMIO_REG(0x410044d0, uint8_t)
#define PORTB_PINCFG16_PMUXEN	(1 << 0)
#define PORTB_PINCFG16_INEN	(1 << 1)
#define PORTB_PINCFG16_PULLEN	(1 << 2)

#define PORTB_PINCFG16_s    MMIO_REG(0x410044d0, struct __struct_PORTB_PINCFG16)
struct __struct_PORTB_PINCFG16
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG17	MMIO_REG(0x410044d1, uint8_t)
#define PORTB_PINCFG17_PMUXEN	(1 << 0)
#define PORTB_PINCFG17_INEN	(1 << 1)
#define PORTB_PINCFG17_PULLEN	(1 << 2)

#define PORTB_PINCFG17_s    MMIO_REG(0x410044d1, struct __struct_PORTB_PINCFG17)
struct __struct_PORTB_PINCFG17
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG18	MMIO_REG(0x410044d2, uint8_t)
#define PORTB_PINCFG18_PMUXEN	(1 << 0)
#define PORTB_PINCFG18_INEN	(1 << 1)
#define PORTB_PINCFG18_PULLEN	(1 << 2)

#define PORTB_PINCFG18_s    MMIO_REG(0x410044d2, struct __struct_PORTB_PINCFG18)
struct __struct_PORTB_PINCFG18
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG19	MMIO_REG(0x410044d3, uint8_t)
#define PORTB_PINCFG19_PMUXEN	(1 << 0)
#define PORTB_PINCFG19_INEN	(1 << 1)
#define PORTB_PINCFG19_PULLEN	(1 << 2)

#define PORTB_PINCFG19_s    MMIO_REG(0x410044d3, struct __struct_PORTB_PINCFG19)
struct __struct_PORTB_PINCFG19
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG20	MMIO_REG(0x410044d4, uint8_t)
#define PORTB_PINCFG20_PMUXEN	(1 << 0)
#define PORTB_PINCFG20_INEN	(1 << 1)
#define PORTB_PINCFG20_PULLEN	(1 << 2)

#define PORTB_PINCFG20_s    MMIO_REG(0x410044d4, struct __struct_PORTB_PINCFG20)
struct __struct_PORTB_PINCFG20
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG21	MMIO_REG(0x410044d5, uint8_t)
#define PORTB_PINCFG21_PMUXEN	(1 << 0)
#define PORTB_PINCFG21_INEN	(1 << 1)
#define PORTB_PINCFG21_PULLEN	(1 << 2)

#define PORTB_PINCFG21_s    MMIO_REG(0x410044d5, struct __struct_PORTB_PINCFG21)
struct __struct_PORTB_PINCFG21
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG22	MMIO_REG(0x410044d6, uint8_t)
#define PORTB_PINCFG22_PMUXEN	(1 << 0)
#define PORTB_PINCFG22_INEN	(1 << 1)
#define PORTB_PINCFG22_PULLEN	(1 << 2)

#define PORTB_PINCFG22_s    MMIO_REG(0x410044d6, struct __struct_PORTB_PINCFG22)
struct __struct_PORTB_PINCFG22
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG23	MMIO_REG(0x410044d7, uint8_t)
#define PORTB_PINCFG23_PMUXEN	(1 << 0)
#define PORTB_PINCFG23_INEN	(1 << 1)
#define PORTB_PINCFG23_PULLEN	(1 << 2)

#define PORTB_PINCFG23_s    MMIO_REG(0x410044d7, struct __struct_PORTB_PINCFG23)
struct __struct_PORTB_PINCFG23
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG24	MMIO_REG(0x410044d8, uint8_t)
#define PORTB_PINCFG24_PMUXEN	(1 << 0)
#define PORTB_PINCFG24_INEN	(1 << 1)
#define PORTB_PINCFG24_PULLEN	(1 << 2)

#define PORTB_PINCFG24_s    MMIO_REG(0x410044d8, struct __struct_PORTB_PINCFG24)
struct __struct_PORTB_PINCFG24
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG25	MMIO_REG(0x410044d9, uint8_t)
#define PORTB_PINCFG25_PMUXEN	(1 << 0)
#define PORTB_PINCFG25_INEN	(1 << 1)
#define PORTB_PINCFG25_PULLEN	(1 << 2)

#define PORTB_PINCFG25_s    MMIO_REG(0x410044d9, struct __struct_PORTB_PINCFG25)
struct __struct_PORTB_PINCFG25
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG26	MMIO_REG(0x410044da, uint8_t)
#define PORTB_PINCFG26_PMUXEN	(1 << 0)
#define PORTB_PINCFG26_INEN	(1 << 1)
#define PORTB_PINCFG26_PULLEN	(1 << 2)

#define PORTB_PINCFG26_s    MMIO_REG(0x410044da, struct __struct_PORTB_PINCFG26)
struct __struct_PORTB_PINCFG26
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG27	MMIO_REG(0x410044db, uint8_t)
#define PORTB_PINCFG27_PMUXEN	(1 << 0)
#define PORTB_PINCFG27_INEN	(1 << 1)
#define PORTB_PINCFG27_PULLEN	(1 << 2)

#define PORTB_PINCFG27_s    MMIO_REG(0x410044db, struct __struct_PORTB_PINCFG27)
struct __struct_PORTB_PINCFG27
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG28	MMIO_REG(0x410044dc, uint8_t)
#define PORTB_PINCFG28_PMUXEN	(1 << 0)
#define PORTB_PINCFG28_INEN	(1 << 1)
#define PORTB_PINCFG28_PULLEN	(1 << 2)

#define PORTB_PINCFG28_s    MMIO_REG(0x410044dc, struct __struct_PORTB_PINCFG28)
struct __struct_PORTB_PINCFG28
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG29	MMIO_REG(0x410044dd, uint8_t)
#define PORTB_PINCFG29_PMUXEN	(1 << 0)
#define PORTB_PINCFG29_INEN	(1 << 1)
#define PORTB_PINCFG29_PULLEN	(1 << 2)

#define PORTB_PINCFG29_s    MMIO_REG(0x410044dd, struct __struct_PORTB_PINCFG29)
struct __struct_PORTB_PINCFG29
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG30	MMIO_REG(0x410044de, uint8_t)
#define PORTB_PINCFG30_PMUXEN	(1 << 0)
#define PORTB_PINCFG30_INEN	(1 << 1)
#define PORTB_PINCFG30_PULLEN	(1 << 2)

#define PORTB_PINCFG30_s    MMIO_REG(0x410044de, struct __struct_PORTB_PINCFG30)
struct __struct_PORTB_PINCFG30
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

#define PORTB_PINCFG31	MMIO_REG(0x410044df, uint8_t)
#define PORTB_PINCFG31_PMUXEN	(1 << 0)
#define PORTB_PINCFG31_INEN	(1 << 1)
#define PORTB_PINCFG31_PULLEN	(1 << 2)

#define PORTB_PINCFG31_s    MMIO_REG(0x410044df, struct __struct_PORTB_PINCFG31)
struct __struct_PORTB_PINCFG31
{
  uint8_t pmuxen : 1;
  uint8_t inen : 1;
  uint8_t pullen : 1;
  uint8_t  : 5;
};

// 0x42000000 PAC2

#define PAC2_WPCLR	MMIO_REG(0x42000000, uint32_t)
#define PAC2_WPCLR_EVSYS	(1 << 1)
#define PAC2_WPCLR_SERCOM0	(1 << 2)
#define PAC2_WPCLR_SERCOM1	(1 << 3)
#define PAC2_WPCLR_SERCOM2	(1 << 4)
#define PAC2_WPCLR_SERCOM3	(1 << 5)
#define PAC2_WPCLR_SERCOM4	(1 << 6)
#define PAC2_WPCLR_SERCOM5	(1 << 7)
#define PAC2_WPCLR_TC0	(1 << 8)
#define PAC2_WPCLR_TC1	(1 << 9)
#define PAC2_WPCLR_TC2	(1 << 10)
#define PAC2_WPCLR_TC3	(1 << 11)
#define PAC2_WPCLR_TC4	(1 << 12)
#define PAC2_WPCLR_TC5	(1 << 13)
#define PAC2_WPCLR_TC6	(1 << 14)
#define PAC2_WPCLR_TC7	(1 << 15)
#define PAC2_WPCLR_ADC	(1 << 16)
#define PAC2_WPCLR_AC	(1 << 17)
#define PAC2_WPCLR_DAC	(1 << 18)
#define PAC2_WPCLR_PTC	(1 << 19)

#define PAC2_WPCLR_s    MMIO_REG(0x42000000, struct __struct_PAC2_WPCLR)
struct __struct_PAC2_WPCLR
{
  uint32_t  : 1;
  uint32_t evsys : 1;
  uint32_t sercom0 : 1;
  uint32_t sercom1 : 1;
  uint32_t sercom2 : 1;
  uint32_t sercom3 : 1;
  uint32_t sercom4 : 1;
  uint32_t sercom5 : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t tc6 : 1;
  uint32_t tc7 : 1;
  uint32_t adc : 1;
  uint32_t ac : 1;
  uint32_t dac : 1;
  uint32_t ptc : 1;
  uint32_t  : 12;
};

#define PAC2_WPSET	MMIO_REG(0x42000004, uint32_t)
#define PAC2_WPSET_EVSYS	(1 << 1)
#define PAC2_WPSET_SERCOM0	(1 << 2)
#define PAC2_WPSET_SERCOM1	(1 << 3)
#define PAC2_WPSET_SERCOM2	(1 << 4)
#define PAC2_WPSET_SERCOM3	(1 << 5)
#define PAC2_WPSET_SERCOM4	(1 << 6)
#define PAC2_WPSET_SERCOM5	(1 << 7)
#define PAC2_WPSET_TC0	(1 << 8)
#define PAC2_WPSET_TC1	(1 << 9)
#define PAC2_WPSET_TC2	(1 << 10)
#define PAC2_WPSET_TC3	(1 << 11)
#define PAC2_WPSET_TC4	(1 << 12)
#define PAC2_WPSET_TC5	(1 << 13)
#define PAC2_WPSET_TC6	(1 << 14)
#define PAC2_WPSET_TC7	(1 << 15)
#define PAC2_WPSET_ADC	(1 << 16)
#define PAC2_WPSET_AC	(1 << 17)
#define PAC2_WPSET_DAC	(1 << 18)
#define PAC2_WPSET_PTC	(1 << 19)

#define PAC2_WPSET_s    MMIO_REG(0x42000004, struct __struct_PAC2_WPSET)
struct __struct_PAC2_WPSET
{
  uint32_t  : 1;
  uint32_t evsys : 1;
  uint32_t sercom0 : 1;
  uint32_t sercom1 : 1;
  uint32_t sercom2 : 1;
  uint32_t sercom3 : 1;
  uint32_t sercom4 : 1;
  uint32_t sercom5 : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t tc6 : 1;
  uint32_t tc7 : 1;
  uint32_t adc : 1;
  uint32_t ac : 1;
  uint32_t dac : 1;
  uint32_t ptc : 1;
  uint32_t  : 12;
};

// 0x42000400 EVSYS

#define EVSYS_CTRL	MMIO_REG(0x42000400, uint8_t)
#define EVSYS_CTRL_SWRST	(1 << 0)
#define EVSYS_CTRL_GCLKREQ	(1 << 4)

#define EVSYS_CTRL_s    MMIO_REG(0x42000400, struct __struct_EVSYS_CTRL)
struct __struct_EVSYS_CTRL
{
  uint8_t swrst : 1;
  uint8_t  : 3;
  uint8_t gclkreq : 1;
  uint8_t  : 3;
};

#define EVSYS_CHANNEL	MMIO_REG(0x42000404, uint32_t)
#define EVSYS_CHANNEL_CHANNEL(x)	((x) << 0)
#define EVSYS_CHANNEL_CHANNEL_MSK	0x000000ff
#define EVSYS_CHANNEL_CHANNEL_VAL(x)	(((x) >> 0) & 0xff)
#define EVSYS_CHANNEL_SWEVT	(1 << 8)
#define EVSYS_CHANNEL_EVGEN(x)	((x) << 16)
#define EVSYS_CHANNEL_EVGEN_MSK	0x00ff0000
#define EVSYS_CHANNEL_EVGEN_VAL(x)	(((x) >> 16) & 0xff)
#define EVSYS_CHANNEL_PATH(x)	((x) << 24)
#define EVSYS_CHANNEL_PATH_MSK	0x03000000
#define EVSYS_CHANNEL_PATH_VAL(x)	(((x) >> 24) & 0x3)
#define EVSYS_CHANNEL_EDGSEL(x)	((x) << 26)
#define EVSYS_CHANNEL_EDGSEL_MSK	0x0c000000
#define EVSYS_CHANNEL_EDGSEL_VAL(x)	(((x) >> 26) & 0x3)

#define EVSYS_CHANNEL_s    MMIO_REG(0x42000404, struct __struct_EVSYS_CHANNEL)
struct __struct_EVSYS_CHANNEL
{
  uint32_t channel : 8;
  uint32_t swevt : 1;
  uint32_t  : 7;
  uint32_t evgen : 8;
  uint32_t path : 2;
  uint32_t edgsel : 2;
  uint32_t  : 4;
};

#define EVSYS_USER	MMIO_REG(0x42000408, uint16_t)
#define EVSYS_USER_USER(x)	((x) << 0)
#define EVSYS_USER_USER_MSK	0x000000ff
#define EVSYS_USER_USER_VAL(x)	(((x) >> 0) & 0xff)
#define EVSYS_USER_CHANNEL(x)	((x) << 8)
#define EVSYS_USER_CHANNEL_MSK	0x0000ff00
#define EVSYS_USER_CHANNEL_VAL(x)	(((x) >> 8) & 0xff)

#define EVSYS_USER_s    MMIO_REG(0x42000408, struct __struct_EVSYS_USER)
struct __struct_EVSYS_USER
{
  uint16_t user : 8;
  uint16_t channel : 8;
};

#define EVSYS_CHSTATUS	MMIO_REG(0x4200040c, uint32_t)
#define EVSYS_CHSTATUS_USRRDY0	(1 << 0)
#define EVSYS_CHSTATUS_USRRDY1	(1 << 1)
#define EVSYS_CHSTATUS_USRRDY2	(1 << 2)
#define EVSYS_CHSTATUS_USRRDY3	(1 << 3)
#define EVSYS_CHSTATUS_USRRDY4	(1 << 4)
#define EVSYS_CHSTATUS_USRRDY5	(1 << 5)
#define EVSYS_CHSTATUS_USRRDY6	(1 << 6)
#define EVSYS_CHSTATUS_USRRDY7	(1 << 7)
#define EVSYS_CHSTATUS_CHBUSY0	(1 << 8)
#define EVSYS_CHSTATUS_CHBUSY1	(1 << 9)
#define EVSYS_CHSTATUS_CHBUSY2	(1 << 10)
#define EVSYS_CHSTATUS_CHBUSY3	(1 << 11)
#define EVSYS_CHSTATUS_CHBUSY4	(1 << 12)
#define EVSYS_CHSTATUS_CHBUSY5	(1 << 13)
#define EVSYS_CHSTATUS_CHBUSY6	(1 << 14)
#define EVSYS_CHSTATUS_CHBUSY7	(1 << 15)

#define EVSYS_CHSTATUS_s    MMIO_REG(0x4200040c, struct __struct_EVSYS_CHSTATUS)
struct __struct_EVSYS_CHSTATUS
{
  uint32_t usrrdy0 : 1;
  uint32_t usrrdy1 : 1;
  uint32_t usrrdy2 : 1;
  uint32_t usrrdy3 : 1;
  uint32_t usrrdy4 : 1;
  uint32_t usrrdy5 : 1;
  uint32_t usrrdy6 : 1;
  uint32_t usrrdy7 : 1;
  uint32_t chbusy0 : 1;
  uint32_t chbusy1 : 1;
  uint32_t chbusy2 : 1;
  uint32_t chbusy3 : 1;
  uint32_t chbusy4 : 1;
  uint32_t chbusy5 : 1;
  uint32_t chbusy6 : 1;
  uint32_t chbusy7 : 1;
  uint32_t  : 16;
};

#define EVSYS_INTENCLR	MMIO_REG(0x42000410, uint32_t)
#define EVSYS_INTENCLR_OVR0	(1 << 0)
#define EVSYS_INTENCLR_OVR1	(1 << 1)
#define EVSYS_INTENCLR_OVR2	(1 << 2)
#define EVSYS_INTENCLR_OVR3	(1 << 3)
#define EVSYS_INTENCLR_OVR4	(1 << 4)
#define EVSYS_INTENCLR_OVR5	(1 << 5)
#define EVSYS_INTENCLR_OVR6	(1 << 6)
#define EVSYS_INTENCLR_OVR7	(1 << 7)
#define EVSYS_INTENCLR_EVD0	(1 << 8)
#define EVSYS_INTENCLR_EVD1	(1 << 9)
#define EVSYS_INTENCLR_EVD2	(1 << 10)
#define EVSYS_INTENCLR_EVD3	(1 << 11)
#define EVSYS_INTENCLR_EVD4	(1 << 12)
#define EVSYS_INTENCLR_EVD5	(1 << 13)
#define EVSYS_INTENCLR_EVD6	(1 << 14)
#define EVSYS_INTENCLR_EVD7	(1 << 15)

#define EVSYS_INTENCLR_s    MMIO_REG(0x42000410, struct __struct_EVSYS_INTENCLR)
struct __struct_EVSYS_INTENCLR
{
  uint32_t ovr0 : 1;
  uint32_t ovr1 : 1;
  uint32_t ovr2 : 1;
  uint32_t ovr3 : 1;
  uint32_t ovr4 : 1;
  uint32_t ovr5 : 1;
  uint32_t ovr6 : 1;
  uint32_t ovr7 : 1;
  uint32_t evd0 : 1;
  uint32_t evd1 : 1;
  uint32_t evd2 : 1;
  uint32_t evd3 : 1;
  uint32_t evd4 : 1;
  uint32_t evd5 : 1;
  uint32_t evd6 : 1;
  uint32_t evd7 : 1;
  uint32_t  : 16;
};

#define EVSYS_INTENSET	MMIO_REG(0x42000414, uint32_t)
#define EVSYS_INTENSET_OVR0	(1 << 0)
#define EVSYS_INTENSET_OVR1	(1 << 1)
#define EVSYS_INTENSET_OVR2	(1 << 2)
#define EVSYS_INTENSET_OVR3	(1 << 3)
#define EVSYS_INTENSET_OVR4	(1 << 4)
#define EVSYS_INTENSET_OVR5	(1 << 5)
#define EVSYS_INTENSET_OVR6	(1 << 6)
#define EVSYS_INTENSET_OVR7	(1 << 7)
#define EVSYS_INTENSET_EVD0	(1 << 8)
#define EVSYS_INTENSET_EVD1	(1 << 9)
#define EVSYS_INTENSET_EVD2	(1 << 10)
#define EVSYS_INTENSET_EVD3	(1 << 11)
#define EVSYS_INTENSET_EVD4	(1 << 12)
#define EVSYS_INTENSET_EVD5	(1 << 13)
#define EVSYS_INTENSET_EVD6	(1 << 14)
#define EVSYS_INTENSET_EVD7	(1 << 15)

#define EVSYS_INTENSET_s    MMIO_REG(0x42000414, struct __struct_EVSYS_INTENSET)
struct __struct_EVSYS_INTENSET
{
  uint32_t ovr0 : 1;
  uint32_t ovr1 : 1;
  uint32_t ovr2 : 1;
  uint32_t ovr3 : 1;
  uint32_t ovr4 : 1;
  uint32_t ovr5 : 1;
  uint32_t ovr6 : 1;
  uint32_t ovr7 : 1;
  uint32_t evd0 : 1;
  uint32_t evd1 : 1;
  uint32_t evd2 : 1;
  uint32_t evd3 : 1;
  uint32_t evd4 : 1;
  uint32_t evd5 : 1;
  uint32_t evd6 : 1;
  uint32_t evd7 : 1;
  uint32_t  : 16;
};

#define EVSYS_INTFLAG	MMIO_REG(0x42000418, uint32_t)
#define EVSYS_INTFLAG_OVR0	(1 << 0)
#define EVSYS_INTFLAG_OVR1	(1 << 1)
#define EVSYS_INTFLAG_OVR2	(1 << 2)
#define EVSYS_INTFLAG_OVR3	(1 << 3)
#define EVSYS_INTFLAG_OVR4	(1 << 4)
#define EVSYS_INTFLAG_OVR5	(1 << 5)
#define EVSYS_INTFLAG_OVR6	(1 << 6)
#define EVSYS_INTFLAG_OVR7	(1 << 7)
#define EVSYS_INTFLAG_EVD0	(1 << 8)
#define EVSYS_INTFLAG_EVD1	(1 << 9)
#define EVSYS_INTFLAG_EVD2	(1 << 10)
#define EVSYS_INTFLAG_EVD3	(1 << 11)
#define EVSYS_INTFLAG_EVD4	(1 << 12)
#define EVSYS_INTFLAG_EVD5	(1 << 13)
#define EVSYS_INTFLAG_EVD6	(1 << 14)
#define EVSYS_INTFLAG_EVD7	(1 << 15)

#define EVSYS_INTFLAG_s    MMIO_REG(0x42000418, struct __struct_EVSYS_INTFLAG)
struct __struct_EVSYS_INTFLAG
{
  uint32_t ovr0 : 1;
  uint32_t ovr1 : 1;
  uint32_t ovr2 : 1;
  uint32_t ovr3 : 1;
  uint32_t ovr4 : 1;
  uint32_t ovr5 : 1;
  uint32_t ovr6 : 1;
  uint32_t ovr7 : 1;
  uint32_t evd0 : 1;
  uint32_t evd1 : 1;
  uint32_t evd2 : 1;
  uint32_t evd3 : 1;
  uint32_t evd4 : 1;
  uint32_t evd5 : 1;
  uint32_t evd6 : 1;
  uint32_t evd7 : 1;
  uint32_t  : 16;
};

// 0x42000800 SC0_USART

#define SC0_USART_CTRLA	MMIO_REG(0x42000800, uint32_t)
#define SC0_USART_CTRLA_SWRST	(1 << 0)
#define SC0_USART_CTRLA_ENABLE	(1 << 1)
#define SC0_USART_CTRLA_MODE(x)	((x) << 2)
#define SC0_USART_CTRLA_MODE_MSK	0x0000001c
#define SC0_USART_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC0_USART_CTRLA_RUNSTDBY	(1 << 7)
#define SC0_USART_CTRLA_TXPO	(1 << 16)
#define SC0_USART_CTRLA_RXPO(x)	((x) << 20)
#define SC0_USART_CTRLA_RXPO_MSK	0x00300000
#define SC0_USART_CTRLA_RXPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC0_USART_CTRLA_FORM(x)	((x) << 24)
#define SC0_USART_CTRLA_FORM_MSK	0x0f000000
#define SC0_USART_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC0_USART_CTRLA_CMODE	(1 << 28)
#define SC0_USART_CTRLA_CPOL	(1 << 29)
#define SC0_USART_CTRLA_DORD	(1 << 30)

#define SC0_USART_CTRLA_s    MMIO_REG(0x42000800, struct __struct_SC0_USART_CTRLA)
struct __struct_SC0_USART_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t txpo : 1;
  uint32_t  : 3;
  uint32_t rxpo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cmode : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC0_USART_CTRLB	MMIO_REG(0x42000804, uint32_t)
#define SC0_USART_CTRLB_CHSIZE(x)	((x) << 0)
#define SC0_USART_CTRLB_CHSIZE_MSK	0x00000007
#define SC0_USART_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC0_USART_CTRLB_SBMODE	(1 << 6)
#define SC0_USART_CTRLB_PMODE	(1 << 13)
#define SC0_USART_CTRLB_TXEN	(1 << 16)
#define SC0_USART_CTRLB_RXEN	(1 << 17)

#define SC0_USART_CTRLB_s    MMIO_REG(0x42000804, struct __struct_SC0_USART_CTRLB)
struct __struct_SC0_USART_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t sbmode : 1;
  uint32_t  : 6;
  uint32_t pmode : 1;
  uint32_t  : 2;
  uint32_t txen : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC0_USART_DBGCTRL	MMIO_REG(0x42000808, uint8_t)
#define SC0_USART_DBGCTRL_DBGSTOP	(1 << 0)

#define SC0_USART_DBGCTRL_s    MMIO_REG(0x42000808, struct __struct_SC0_USART_DBGCTRL)
struct __struct_SC0_USART_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC0_USART_BAUD	MMIO_REG(0x4200080a, uint16_t)
#define SC0_USART_BAUD_BAUD(x)	((x) << 0)
#define SC0_USART_BAUD_BAUD_MSK	0x0000ffff
#define SC0_USART_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xffff)

#define SC0_USART_BAUD_s    MMIO_REG(0x4200080a, struct __struct_SC0_USART_BAUD)
struct __struct_SC0_USART_BAUD
{
  uint16_t baud : 16;
};

#define SC0_USART_INTENCLR	MMIO_REG(0x4200080c, uint8_t)
#define SC0_USART_INTENCLR_DRE	(1 << 0)
#define SC0_USART_INTENCLR_TXC	(1 << 1)
#define SC0_USART_INTENCLR_RXC	(1 << 2)

#define SC0_USART_INTENCLR_s    MMIO_REG(0x4200080c, struct __struct_SC0_USART_INTENCLR)
struct __struct_SC0_USART_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC0_USART_INTENSET	MMIO_REG(0x4200080d, uint8_t)
#define SC0_USART_INTENSET_DRE	(1 << 0)
#define SC0_USART_INTENSET_TXC	(1 << 1)
#define SC0_USART_INTENSET_RXC	(1 << 2)

#define SC0_USART_INTENSET_s    MMIO_REG(0x4200080d, struct __struct_SC0_USART_INTENSET)
struct __struct_SC0_USART_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC0_USART_INTFLAG	MMIO_REG(0x4200080e, uint8_t)
#define SC0_USART_INTFLAG_DRE	(1 << 0)
#define SC0_USART_INTFLAG_TXC	(1 << 1)
#define SC0_USART_INTFLAG_RXC	(1 << 2)

#define SC0_USART_INTFLAG_s    MMIO_REG(0x4200080e, struct __struct_SC0_USART_INTFLAG)
struct __struct_SC0_USART_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC0_USART_STATUS	MMIO_REG(0x42000810, uint16_t)
#define SC0_USART_STATUS_PERR	(1 << 0)
#define SC0_USART_STATUS_FERR	(1 << 1)
#define SC0_USART_STATUS_BUFOVF	(1 << 2)
#define SC0_USART_STATUS_SYNCBUSY	(1 << 15)

#define SC0_USART_STATUS_s    MMIO_REG(0x42000810, struct __struct_SC0_USART_STATUS)
struct __struct_SC0_USART_STATUS
{
  uint16_t perr : 1;
  uint16_t ferr : 1;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC0_USART_DATA	MMIO_REG(0x42000818, uint16_t)
#define SC0_USART_DATA_DATA(x)	((x) << 0)
#define SC0_USART_DATA_DATA_MSK	0x000001ff
#define SC0_USART_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC0_USART_DATA_s    MMIO_REG(0x42000818, struct __struct_SC0_USART_DATA)
struct __struct_SC0_USART_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42000800 SC0_SPI

#define SC0_SPI_CTRLA	MMIO_REG(0x42000800, uint32_t)
#define SC0_SPI_CTRLA_SWRST	(1 << 0)
#define SC0_SPI_CTRLA_ENABLE	(1 << 1)
#define SC0_SPI_CTRLA_MODE(x)	((x) << 2)
#define SC0_SPI_CTRLA_MODE_MSK	0x0000001c
#define SC0_SPI_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC0_SPI_CTRLA_RUNSTDBY	(1 << 7)
#define SC0_SPI_CTRLA_DOPO	(1 << 16)
#define SC0_SPI_CTRLA_DIPO(x)	((x) << 20)
#define SC0_SPI_CTRLA_DIPO_MSK	0x00300000
#define SC0_SPI_CTRLA_DIPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC0_SPI_CTRLA_FORM(x)	((x) << 24)
#define SC0_SPI_CTRLA_FORM_MSK	0x0f000000
#define SC0_SPI_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC0_SPI_CTRLA_CPHA	(1 << 28)
#define SC0_SPI_CTRLA_CPOL	(1 << 29)
#define SC0_SPI_CTRLA_DORD	(1 << 30)

#define SC0_SPI_CTRLA_s    MMIO_REG(0x42000800, struct __struct_SC0_SPI_CTRLA)
struct __struct_SC0_SPI_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t dopo : 1;
  uint32_t  : 3;
  uint32_t dipo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cpha : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC0_SPI_CTRLB	MMIO_REG(0x42000804, uint32_t)
#define SC0_SPI_CTRLB_CHSIZE(x)	((x) << 0)
#define SC0_SPI_CTRLB_CHSIZE_MSK	0x00000007
#define SC0_SPI_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC0_SPI_CTRLB_PLOADEN	(1 << 6)
#define SC0_SPI_CTRLB_AMODE(x)	((x) << 14)
#define SC0_SPI_CTRLB_AMODE_MSK	0x0000c000
#define SC0_SPI_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC0_SPI_CTRLB_RXEN	(1 << 17)

#define SC0_SPI_CTRLB_s    MMIO_REG(0x42000804, struct __struct_SC0_SPI_CTRLB)
struct __struct_SC0_SPI_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t ploaden : 1;
  uint32_t  : 7;
  uint32_t amode : 2;
  uint32_t  : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC0_SPI_DBGCTRL	MMIO_REG(0x42000808, uint8_t)
#define SC0_SPI_DBGCTRL_DBGSTOP	(1 << 0)

#define SC0_SPI_DBGCTRL_s    MMIO_REG(0x42000808, struct __struct_SC0_SPI_DBGCTRL)
struct __struct_SC0_SPI_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC0_SPI_BAUD	MMIO_REG(0x4200080a, uint8_t)
#define SC0_SPI_BAUD_BAUD(x)	((x) << 0)
#define SC0_SPI_BAUD_BAUD_MSK	0x000000ff
#define SC0_SPI_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)

#define SC0_SPI_BAUD_s    MMIO_REG(0x4200080a, struct __struct_SC0_SPI_BAUD)
struct __struct_SC0_SPI_BAUD
{
  uint8_t baud : 8;
};

#define SC0_SPI_INTENCLR	MMIO_REG(0x4200080c, uint8_t)
#define SC0_SPI_INTENCLR_DRE	(1 << 0)
#define SC0_SPI_INTENCLR_TXC	(1 << 1)
#define SC0_SPI_INTENCLR_RXC	(1 << 2)

#define SC0_SPI_INTENCLR_s    MMIO_REG(0x4200080c, struct __struct_SC0_SPI_INTENCLR)
struct __struct_SC0_SPI_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC0_SPI_INTENSET	MMIO_REG(0x4200080d, uint8_t)
#define SC0_SPI_INTENSET_DRE	(1 << 0)
#define SC0_SPI_INTENSET_TXC	(1 << 1)
#define SC0_SPI_INTENSET_RXC	(1 << 2)

#define SC0_SPI_INTENSET_s    MMIO_REG(0x4200080d, struct __struct_SC0_SPI_INTENSET)
struct __struct_SC0_SPI_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC0_SPI_INTFLAG	MMIO_REG(0x4200080e, uint8_t)
#define SC0_SPI_INTFLAG_DRE	(1 << 0)
#define SC0_SPI_INTFLAG_TXC	(1 << 1)
#define SC0_SPI_INTFLAG_RXC	(1 << 2)

#define SC0_SPI_INTFLAG_s    MMIO_REG(0x4200080e, struct __struct_SC0_SPI_INTFLAG)
struct __struct_SC0_SPI_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC0_SPI_STATUS	MMIO_REG(0x42000810, uint16_t)
#define SC0_SPI_STATUS_BUFOVF	(1 << 2)
#define SC0_SPI_STATUS_SYNCBUSY	(1 << 15)

#define SC0_SPI_STATUS_s    MMIO_REG(0x42000810, struct __struct_SC0_SPI_STATUS)
struct __struct_SC0_SPI_STATUS
{
  uint16_t  : 2;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC0_SPI_ADDR	MMIO_REG(0x42000814, uint32_t)
#define SC0_SPI_ADDR_ADDR(x)	((x) << 0)
#define SC0_SPI_ADDR_ADDR_MSK	0x000000ff
#define SC0_SPI_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)
#define SC0_SPI_ADDR_ADDRMASK(x)	((x) << 16)
#define SC0_SPI_ADDR_ADDRMASK_MSK	0x00ff0000
#define SC0_SPI_ADDR_ADDRMASK_VAL(x)	(((x) >> 16) & 0xff)

#define SC0_SPI_ADDR_s    MMIO_REG(0x42000814, struct __struct_SC0_SPI_ADDR)
struct __struct_SC0_SPI_ADDR
{
  uint32_t addr : 8;
  uint32_t  : 8;
  uint32_t addrmask : 8;
  uint32_t  : 8;
};

#define SC0_SPI_DATA	MMIO_REG(0x42000818, uint16_t)
#define SC0_SPI_DATA_DATA(x)	((x) << 0)
#define SC0_SPI_DATA_DATA_MSK	0x000001ff
#define SC0_SPI_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC0_SPI_DATA_s    MMIO_REG(0x42000818, struct __struct_SC0_SPI_DATA)
struct __struct_SC0_SPI_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42000800 SC0_I2C_S

#define SC0_I2C_S_CTRLA	MMIO_REG(0x42000800, uint32_t)
#define SC0_I2C_S_CTRLA_SWRST	(1 << 0)
#define SC0_I2C_S_CTRLA_ENABLE	(1 << 1)
#define SC0_I2C_S_CTRLA_MODE(x)	((x) << 2)
#define SC0_I2C_S_CTRLA_MODE_MSK	0x0000001c
#define SC0_I2C_S_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC0_I2C_S_CTRLA_RUNSTDBY	(1 << 7)
#define SC0_I2C_S_CTRLA_PINOUT	(1 << 16)
#define SC0_I2C_S_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC0_I2C_S_CTRLA_SDAHOLD_MSK	0x00300000
#define SC0_I2C_S_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC0_I2C_S_CTRLA_LOWTOUT	(1 << 30)

#define SC0_I2C_S_CTRLA_s    MMIO_REG(0x42000800, struct __struct_SC0_I2C_S_CTRLA)
struct __struct_SC0_I2C_S_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 8;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC0_I2C_S_CTRLB	MMIO_REG(0x42000804, uint32_t)
#define SC0_I2C_S_CTRLB_SMEN	(1 << 8)
#define SC0_I2C_S_CTRLB_AMODE(x)	((x) << 14)
#define SC0_I2C_S_CTRLB_AMODE_MSK	0x0000c000
#define SC0_I2C_S_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC0_I2C_S_CTRLB_CMD(x)	((x) << 16)
#define SC0_I2C_S_CTRLB_CMD_MSK	0x00030000
#define SC0_I2C_S_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC0_I2C_S_CTRLB_ACKACT	(1 << 18)

#define SC0_I2C_S_CTRLB_s    MMIO_REG(0x42000804, struct __struct_SC0_I2C_S_CTRLB)
struct __struct_SC0_I2C_S_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t  : 5;
  uint32_t amode : 2;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC0_I2C_S_INTENCLR	MMIO_REG(0x4200080c, uint8_t)
#define SC0_I2C_S_INTENCLR_PREC	(1 << 0)
#define SC0_I2C_S_INTENCLR_AMATCH	(1 << 1)
#define SC0_I2C_S_INTENCLR_DRDY	(1 << 2)

#define SC0_I2C_S_INTENCLR_s    MMIO_REG(0x4200080c, struct __struct_SC0_I2C_S_INTENCLR)
struct __struct_SC0_I2C_S_INTENCLR
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC0_I2C_S_INTENSET	MMIO_REG(0x4200080d, uint8_t)
#define SC0_I2C_S_INTENSET_PREC	(1 << 0)
#define SC0_I2C_S_INTENSET_AMATCH	(1 << 1)
#define SC0_I2C_S_INTENSET_DRDY	(1 << 2)

#define SC0_I2C_S_INTENSET_s    MMIO_REG(0x4200080d, struct __struct_SC0_I2C_S_INTENSET)
struct __struct_SC0_I2C_S_INTENSET
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC0_I2C_S_INTFLAG	MMIO_REG(0x4200080e, uint8_t)
#define SC0_I2C_S_INTFLAG_PREC	(1 << 0)
#define SC0_I2C_S_INTFLAG_AMATCH	(1 << 1)
#define SC0_I2C_S_INTFLAG_DRDY	(1 << 2)

#define SC0_I2C_S_INTFLAG_s    MMIO_REG(0x4200080e, struct __struct_SC0_I2C_S_INTFLAG)
struct __struct_SC0_I2C_S_INTFLAG
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC0_I2C_S_STATUS	MMIO_REG(0x42000810, uint16_t)
#define SC0_I2C_S_STATUS_BUSERR	(1 << 0)
#define SC0_I2C_S_STATUS_COLL	(1 << 1)
#define SC0_I2C_S_STATUS_RXNACK	(1 << 2)
#define SC0_I2C_S_STATUS_DIR	(1 << 3)
#define SC0_I2C_S_STATUS_SR	(1 << 4)
#define SC0_I2C_S_STATUS_LOWTOUT	(1 << 6)
#define SC0_I2C_S_STATUS_CLKHOLD	(1 << 7)
#define SC0_I2C_S_STATUS_SYNCBUSY	(1 << 15)

#define SC0_I2C_S_STATUS_s    MMIO_REG(0x42000810, struct __struct_SC0_I2C_S_STATUS)
struct __struct_SC0_I2C_S_STATUS
{
  uint16_t buserr : 1;
  uint16_t coll : 1;
  uint16_t rxnack : 1;
  uint16_t dir : 1;
  uint16_t sr : 1;
  uint16_t  : 1;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC0_I2C_S_ADDR	MMIO_REG(0x42000814, uint32_t)
#define SC0_I2C_S_ADDR_GENCEN	(1 << 0)
#define SC0_I2C_S_ADDR_ADDR(x)	((x) << 1)
#define SC0_I2C_S_ADDR_ADDR_MSK	0x000000fe
#define SC0_I2C_S_ADDR_ADDR_VAL(x)	(((x) >> 1) & 0x7f)
#define SC0_I2C_S_ADDR_ADDRMASK(x)	((x) << 17)
#define SC0_I2C_S_ADDR_ADDRMASK_MSK	0x00fe0000
#define SC0_I2C_S_ADDR_ADDRMASK_VAL(x)	(((x) >> 17) & 0x7f)

#define SC0_I2C_S_ADDR_s    MMIO_REG(0x42000814, struct __struct_SC0_I2C_S_ADDR)
struct __struct_SC0_I2C_S_ADDR
{
  uint32_t gencen : 1;
  uint32_t addr : 7;
  uint32_t  : 9;
  uint32_t addrmask : 7;
  uint32_t  : 8;
};

#define SC0_I2C_S_DATA	MMIO_REG(0x42000818, uint16_t)
#define SC0_I2C_S_DATA_DATA(x)	((x) << 0)
#define SC0_I2C_S_DATA_DATA_MSK	0x000000ff
#define SC0_I2C_S_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC0_I2C_S_DATA_s    MMIO_REG(0x42000818, struct __struct_SC0_I2C_S_DATA)
struct __struct_SC0_I2C_S_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42000800 SC0_I2C_M

#define SC0_I2C_M_CTRLA	MMIO_REG(0x42000800, uint32_t)
#define SC0_I2C_M_CTRLA_SWRST	(1 << 0)
#define SC0_I2C_M_CTRLA_ENABLE	(1 << 1)
#define SC0_I2C_M_CTRLA_MODE(x)	((x) << 2)
#define SC0_I2C_M_CTRLA_MODE_MSK	0x0000001c
#define SC0_I2C_M_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC0_I2C_M_CTRLA_RUNSTDBY	(1 << 7)
#define SC0_I2C_M_CTRLA_PINOUT	(1 << 16)
#define SC0_I2C_M_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC0_I2C_M_CTRLA_SDAHOLD_MSK	0x00300000
#define SC0_I2C_M_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC0_I2C_M_CTRLA_INACTOUT(x)	((x) << 28)
#define SC0_I2C_M_CTRLA_INACTOUT_MSK	0x30000000
#define SC0_I2C_M_CTRLA_INACTOUT_VAL(x)	(((x) >> 28) & 0x3)
#define SC0_I2C_M_CTRLA_LOWTOUT	(1 << 30)

#define SC0_I2C_M_CTRLA_s    MMIO_REG(0x42000800, struct __struct_SC0_I2C_M_CTRLA)
struct __struct_SC0_I2C_M_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 6;
  uint32_t inactout : 2;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC0_I2C_M_CTRLB	MMIO_REG(0x42000804, uint32_t)
#define SC0_I2C_M_CTRLB_SMEN	(1 << 8)
#define SC0_I2C_M_CTRLB_QCEN	(1 << 9)
#define SC0_I2C_M_CTRLB_CMD(x)	((x) << 16)
#define SC0_I2C_M_CTRLB_CMD_MSK	0x00030000
#define SC0_I2C_M_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC0_I2C_M_CTRLB_ACKACT	(1 << 18)

#define SC0_I2C_M_CTRLB_s    MMIO_REG(0x42000804, struct __struct_SC0_I2C_M_CTRLB)
struct __struct_SC0_I2C_M_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t qcen : 1;
  uint32_t  : 6;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC0_I2C_M_DBGCTRL	MMIO_REG(0x42000808, uint8_t)
#define SC0_I2C_M_DBGCTRL_DBGSTOP	(1 << 0)

#define SC0_I2C_M_DBGCTRL_s    MMIO_REG(0x42000808, struct __struct_SC0_I2C_M_DBGCTRL)
struct __struct_SC0_I2C_M_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC0_I2C_M_BAUD	MMIO_REG(0x4200080a, uint16_t)
#define SC0_I2C_M_BAUD_BAUD(x)	((x) << 0)
#define SC0_I2C_M_BAUD_BAUD_MSK	0x000000ff
#define SC0_I2C_M_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)
#define SC0_I2C_M_BAUD_BAUDLOW(x)	((x) << 8)
#define SC0_I2C_M_BAUD_BAUDLOW_MSK	0x0000ff00
#define SC0_I2C_M_BAUD_BAUDLOW_VAL(x)	(((x) >> 8) & 0xff)

#define SC0_I2C_M_BAUD_s    MMIO_REG(0x4200080a, struct __struct_SC0_I2C_M_BAUD)
struct __struct_SC0_I2C_M_BAUD
{
  uint16_t baud : 8;
  uint16_t baudlow : 8;
};

#define SC0_I2C_M_INTENCLR	MMIO_REG(0x4200080c, uint8_t)
#define SC0_I2C_M_INTENCLR_MB	(1 << 0)
#define SC0_I2C_M_INTENCLR_SB	(1 << 1)

#define SC0_I2C_M_INTENCLR_s    MMIO_REG(0x4200080c, struct __struct_SC0_I2C_M_INTENCLR)
struct __struct_SC0_I2C_M_INTENCLR
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC0_I2C_M_INTENSET	MMIO_REG(0x4200080d, uint8_t)
#define SC0_I2C_M_INTENSET_MB	(1 << 0)
#define SC0_I2C_M_INTENSET_SB	(1 << 1)

#define SC0_I2C_M_INTENSET_s    MMIO_REG(0x4200080d, struct __struct_SC0_I2C_M_INTENSET)
struct __struct_SC0_I2C_M_INTENSET
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC0_I2C_M_INTFLAG	MMIO_REG(0x4200080e, uint8_t)
#define SC0_I2C_M_INTFLAG_MB	(1 << 0)
#define SC0_I2C_M_INTFLAG_SB	(1 << 1)

#define SC0_I2C_M_INTFLAG_s    MMIO_REG(0x4200080e, struct __struct_SC0_I2C_M_INTFLAG)
struct __struct_SC0_I2C_M_INTFLAG
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC0_I2C_M_STATUS	MMIO_REG(0x42000810, uint16_t)
#define SC0_I2C_M_STATUS_BUSERR	(1 << 0)
#define SC0_I2C_M_STATUS_ARBLOST	(1 << 1)
#define SC0_I2C_M_STATUS_RXNACK	(1 << 2)
#define SC0_I2C_M_STATUS_BUSSTATE(x)	((x) << 4)
#define SC0_I2C_M_STATUS_BUSSTATE_MSK	0x00000030
#define SC0_I2C_M_STATUS_BUSSTATE_VAL(x)	(((x) >> 4) & 0x3)
#define SC0_I2C_M_STATUS_LOWTOUT	(1 << 6)
#define SC0_I2C_M_STATUS_CLKHOLD	(1 << 7)
#define SC0_I2C_M_STATUS_SYNCBUSY	(1 << 15)

#define SC0_I2C_M_STATUS_s    MMIO_REG(0x42000810, struct __struct_SC0_I2C_M_STATUS)
struct __struct_SC0_I2C_M_STATUS
{
  uint16_t buserr : 1;
  uint16_t arblost : 1;
  uint16_t rxnack : 1;
  uint16_t  : 1;
  uint16_t busstate : 2;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC0_I2C_M_ADDR	MMIO_REG(0x42000814, uint16_t)
#define SC0_I2C_M_ADDR_ADDR(x)	((x) << 0)
#define SC0_I2C_M_ADDR_ADDR_MSK	0x000000ff
#define SC0_I2C_M_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)

#define SC0_I2C_M_ADDR_s    MMIO_REG(0x42000814, struct __struct_SC0_I2C_M_ADDR)
struct __struct_SC0_I2C_M_ADDR
{
  uint16_t addr : 8;
  uint16_t  : 8;
};

#define SC0_I2C_M_DATA	MMIO_REG(0x42000818, uint16_t)
#define SC0_I2C_M_DATA_DATA(x)	((x) << 0)
#define SC0_I2C_M_DATA_DATA_MSK	0x000000ff
#define SC0_I2C_M_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC0_I2C_M_DATA_s    MMIO_REG(0x42000818, struct __struct_SC0_I2C_M_DATA)
struct __struct_SC0_I2C_M_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42000c00 SC1_USART

#define SC1_USART_CTRLA	MMIO_REG(0x42000c00, uint32_t)
#define SC1_USART_CTRLA_SWRST	(1 << 0)
#define SC1_USART_CTRLA_ENABLE	(1 << 1)
#define SC1_USART_CTRLA_MODE(x)	((x) << 2)
#define SC1_USART_CTRLA_MODE_MSK	0x0000001c
#define SC1_USART_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC1_USART_CTRLA_RUNSTDBY	(1 << 7)
#define SC1_USART_CTRLA_TXPO	(1 << 16)
#define SC1_USART_CTRLA_RXPO(x)	((x) << 20)
#define SC1_USART_CTRLA_RXPO_MSK	0x00300000
#define SC1_USART_CTRLA_RXPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC1_USART_CTRLA_FORM(x)	((x) << 24)
#define SC1_USART_CTRLA_FORM_MSK	0x0f000000
#define SC1_USART_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC1_USART_CTRLA_CMODE	(1 << 28)
#define SC1_USART_CTRLA_CPOL	(1 << 29)
#define SC1_USART_CTRLA_DORD	(1 << 30)

#define SC1_USART_CTRLA_s    MMIO_REG(0x42000c00, struct __struct_SC1_USART_CTRLA)
struct __struct_SC1_USART_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t txpo : 1;
  uint32_t  : 3;
  uint32_t rxpo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cmode : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC1_USART_CTRLB	MMIO_REG(0x42000c04, uint32_t)
#define SC1_USART_CTRLB_CHSIZE(x)	((x) << 0)
#define SC1_USART_CTRLB_CHSIZE_MSK	0x00000007
#define SC1_USART_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC1_USART_CTRLB_SBMODE	(1 << 6)
#define SC1_USART_CTRLB_PMODE	(1 << 13)
#define SC1_USART_CTRLB_TXEN	(1 << 16)
#define SC1_USART_CTRLB_RXEN	(1 << 17)

#define SC1_USART_CTRLB_s    MMIO_REG(0x42000c04, struct __struct_SC1_USART_CTRLB)
struct __struct_SC1_USART_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t sbmode : 1;
  uint32_t  : 6;
  uint32_t pmode : 1;
  uint32_t  : 2;
  uint32_t txen : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC1_USART_DBGCTRL	MMIO_REG(0x42000c08, uint8_t)
#define SC1_USART_DBGCTRL_DBGSTOP	(1 << 0)

#define SC1_USART_DBGCTRL_s    MMIO_REG(0x42000c08, struct __struct_SC1_USART_DBGCTRL)
struct __struct_SC1_USART_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC1_USART_BAUD	MMIO_REG(0x42000c0a, uint16_t)
#define SC1_USART_BAUD_BAUD(x)	((x) << 0)
#define SC1_USART_BAUD_BAUD_MSK	0x0000ffff
#define SC1_USART_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xffff)

#define SC1_USART_BAUD_s    MMIO_REG(0x42000c0a, struct __struct_SC1_USART_BAUD)
struct __struct_SC1_USART_BAUD
{
  uint16_t baud : 16;
};

#define SC1_USART_INTENCLR	MMIO_REG(0x42000c0c, uint8_t)
#define SC1_USART_INTENCLR_DRE	(1 << 0)
#define SC1_USART_INTENCLR_TXC	(1 << 1)
#define SC1_USART_INTENCLR_RXC	(1 << 2)

#define SC1_USART_INTENCLR_s    MMIO_REG(0x42000c0c, struct __struct_SC1_USART_INTENCLR)
struct __struct_SC1_USART_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC1_USART_INTENSET	MMIO_REG(0x42000c0d, uint8_t)
#define SC1_USART_INTENSET_DRE	(1 << 0)
#define SC1_USART_INTENSET_TXC	(1 << 1)
#define SC1_USART_INTENSET_RXC	(1 << 2)

#define SC1_USART_INTENSET_s    MMIO_REG(0x42000c0d, struct __struct_SC1_USART_INTENSET)
struct __struct_SC1_USART_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC1_USART_INTFLAG	MMIO_REG(0x42000c0e, uint8_t)
#define SC1_USART_INTFLAG_DRE	(1 << 0)
#define SC1_USART_INTFLAG_TXC	(1 << 1)
#define SC1_USART_INTFLAG_RXC	(1 << 2)

#define SC1_USART_INTFLAG_s    MMIO_REG(0x42000c0e, struct __struct_SC1_USART_INTFLAG)
struct __struct_SC1_USART_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC1_USART_STATUS	MMIO_REG(0x42000c10, uint16_t)
#define SC1_USART_STATUS_PERR	(1 << 0)
#define SC1_USART_STATUS_FERR	(1 << 1)
#define SC1_USART_STATUS_BUFOVF	(1 << 2)
#define SC1_USART_STATUS_SYNCBUSY	(1 << 15)

#define SC1_USART_STATUS_s    MMIO_REG(0x42000c10, struct __struct_SC1_USART_STATUS)
struct __struct_SC1_USART_STATUS
{
  uint16_t perr : 1;
  uint16_t ferr : 1;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC1_USART_DATA	MMIO_REG(0x42000c18, uint16_t)
#define SC1_USART_DATA_DATA(x)	((x) << 0)
#define SC1_USART_DATA_DATA_MSK	0x000001ff
#define SC1_USART_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC1_USART_DATA_s    MMIO_REG(0x42000c18, struct __struct_SC1_USART_DATA)
struct __struct_SC1_USART_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42000c00 SC1_SPI

#define SC1_SPI_CTRLA	MMIO_REG(0x42000c00, uint32_t)
#define SC1_SPI_CTRLA_SWRST	(1 << 0)
#define SC1_SPI_CTRLA_ENABLE	(1 << 1)
#define SC1_SPI_CTRLA_MODE(x)	((x) << 2)
#define SC1_SPI_CTRLA_MODE_MSK	0x0000001c
#define SC1_SPI_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC1_SPI_CTRLA_RUNSTDBY	(1 << 7)
#define SC1_SPI_CTRLA_DOPO	(1 << 16)
#define SC1_SPI_CTRLA_DIPO(x)	((x) << 20)
#define SC1_SPI_CTRLA_DIPO_MSK	0x00300000
#define SC1_SPI_CTRLA_DIPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC1_SPI_CTRLA_FORM(x)	((x) << 24)
#define SC1_SPI_CTRLA_FORM_MSK	0x0f000000
#define SC1_SPI_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC1_SPI_CTRLA_CPHA	(1 << 28)
#define SC1_SPI_CTRLA_CPOL	(1 << 29)
#define SC1_SPI_CTRLA_DORD	(1 << 30)

#define SC1_SPI_CTRLA_s    MMIO_REG(0x42000c00, struct __struct_SC1_SPI_CTRLA)
struct __struct_SC1_SPI_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t dopo : 1;
  uint32_t  : 3;
  uint32_t dipo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cpha : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC1_SPI_CTRLB	MMIO_REG(0x42000c04, uint32_t)
#define SC1_SPI_CTRLB_CHSIZE(x)	((x) << 0)
#define SC1_SPI_CTRLB_CHSIZE_MSK	0x00000007
#define SC1_SPI_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC1_SPI_CTRLB_PLOADEN	(1 << 6)
#define SC1_SPI_CTRLB_AMODE(x)	((x) << 14)
#define SC1_SPI_CTRLB_AMODE_MSK	0x0000c000
#define SC1_SPI_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC1_SPI_CTRLB_RXEN	(1 << 17)

#define SC1_SPI_CTRLB_s    MMIO_REG(0x42000c04, struct __struct_SC1_SPI_CTRLB)
struct __struct_SC1_SPI_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t ploaden : 1;
  uint32_t  : 7;
  uint32_t amode : 2;
  uint32_t  : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC1_SPI_DBGCTRL	MMIO_REG(0x42000c08, uint8_t)
#define SC1_SPI_DBGCTRL_DBGSTOP	(1 << 0)

#define SC1_SPI_DBGCTRL_s    MMIO_REG(0x42000c08, struct __struct_SC1_SPI_DBGCTRL)
struct __struct_SC1_SPI_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC1_SPI_BAUD	MMIO_REG(0x42000c0a, uint8_t)
#define SC1_SPI_BAUD_BAUD(x)	((x) << 0)
#define SC1_SPI_BAUD_BAUD_MSK	0x000000ff
#define SC1_SPI_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)

#define SC1_SPI_BAUD_s    MMIO_REG(0x42000c0a, struct __struct_SC1_SPI_BAUD)
struct __struct_SC1_SPI_BAUD
{
  uint8_t baud : 8;
};

#define SC1_SPI_INTENCLR	MMIO_REG(0x42000c0c, uint8_t)
#define SC1_SPI_INTENCLR_DRE	(1 << 0)
#define SC1_SPI_INTENCLR_TXC	(1 << 1)
#define SC1_SPI_INTENCLR_RXC	(1 << 2)

#define SC1_SPI_INTENCLR_s    MMIO_REG(0x42000c0c, struct __struct_SC1_SPI_INTENCLR)
struct __struct_SC1_SPI_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC1_SPI_INTENSET	MMIO_REG(0x42000c0d, uint8_t)
#define SC1_SPI_INTENSET_DRE	(1 << 0)
#define SC1_SPI_INTENSET_TXC	(1 << 1)
#define SC1_SPI_INTENSET_RXC	(1 << 2)

#define SC1_SPI_INTENSET_s    MMIO_REG(0x42000c0d, struct __struct_SC1_SPI_INTENSET)
struct __struct_SC1_SPI_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC1_SPI_INTFLAG	MMIO_REG(0x42000c0e, uint8_t)
#define SC1_SPI_INTFLAG_DRE	(1 << 0)
#define SC1_SPI_INTFLAG_TXC	(1 << 1)
#define SC1_SPI_INTFLAG_RXC	(1 << 2)

#define SC1_SPI_INTFLAG_s    MMIO_REG(0x42000c0e, struct __struct_SC1_SPI_INTFLAG)
struct __struct_SC1_SPI_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC1_SPI_STATUS	MMIO_REG(0x42000c10, uint16_t)
#define SC1_SPI_STATUS_BUFOVF	(1 << 2)
#define SC1_SPI_STATUS_SYNCBUSY	(1 << 15)

#define SC1_SPI_STATUS_s    MMIO_REG(0x42000c10, struct __struct_SC1_SPI_STATUS)
struct __struct_SC1_SPI_STATUS
{
  uint16_t  : 2;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC1_SPI_ADDR	MMIO_REG(0x42000c14, uint32_t)
#define SC1_SPI_ADDR_ADDR(x)	((x) << 0)
#define SC1_SPI_ADDR_ADDR_MSK	0x000000ff
#define SC1_SPI_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)
#define SC1_SPI_ADDR_ADDRMASK(x)	((x) << 16)
#define SC1_SPI_ADDR_ADDRMASK_MSK	0x00ff0000
#define SC1_SPI_ADDR_ADDRMASK_VAL(x)	(((x) >> 16) & 0xff)

#define SC1_SPI_ADDR_s    MMIO_REG(0x42000c14, struct __struct_SC1_SPI_ADDR)
struct __struct_SC1_SPI_ADDR
{
  uint32_t addr : 8;
  uint32_t  : 8;
  uint32_t addrmask : 8;
  uint32_t  : 8;
};

#define SC1_SPI_DATA	MMIO_REG(0x42000c18, uint16_t)
#define SC1_SPI_DATA_DATA(x)	((x) << 0)
#define SC1_SPI_DATA_DATA_MSK	0x000001ff
#define SC1_SPI_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC1_SPI_DATA_s    MMIO_REG(0x42000c18, struct __struct_SC1_SPI_DATA)
struct __struct_SC1_SPI_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42000c00 SC1_I2C_S

#define SC1_I2C_S_CTRLA	MMIO_REG(0x42000c00, uint32_t)
#define SC1_I2C_S_CTRLA_SWRST	(1 << 0)
#define SC1_I2C_S_CTRLA_ENABLE	(1 << 1)
#define SC1_I2C_S_CTRLA_MODE(x)	((x) << 2)
#define SC1_I2C_S_CTRLA_MODE_MSK	0x0000001c
#define SC1_I2C_S_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC1_I2C_S_CTRLA_RUNSTDBY	(1 << 7)
#define SC1_I2C_S_CTRLA_PINOUT	(1 << 16)
#define SC1_I2C_S_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC1_I2C_S_CTRLA_SDAHOLD_MSK	0x00300000
#define SC1_I2C_S_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC1_I2C_S_CTRLA_LOWTOUT	(1 << 30)

#define SC1_I2C_S_CTRLA_s    MMIO_REG(0x42000c00, struct __struct_SC1_I2C_S_CTRLA)
struct __struct_SC1_I2C_S_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 8;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC1_I2C_S_CTRLB	MMIO_REG(0x42000c04, uint32_t)
#define SC1_I2C_S_CTRLB_SMEN	(1 << 8)
#define SC1_I2C_S_CTRLB_AMODE(x)	((x) << 14)
#define SC1_I2C_S_CTRLB_AMODE_MSK	0x0000c000
#define SC1_I2C_S_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC1_I2C_S_CTRLB_CMD(x)	((x) << 16)
#define SC1_I2C_S_CTRLB_CMD_MSK	0x00030000
#define SC1_I2C_S_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC1_I2C_S_CTRLB_ACKACT	(1 << 18)

#define SC1_I2C_S_CTRLB_s    MMIO_REG(0x42000c04, struct __struct_SC1_I2C_S_CTRLB)
struct __struct_SC1_I2C_S_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t  : 5;
  uint32_t amode : 2;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC1_I2C_S_INTENCLR	MMIO_REG(0x42000c0c, uint8_t)
#define SC1_I2C_S_INTENCLR_PREC	(1 << 0)
#define SC1_I2C_S_INTENCLR_AMATCH	(1 << 1)
#define SC1_I2C_S_INTENCLR_DRDY	(1 << 2)

#define SC1_I2C_S_INTENCLR_s    MMIO_REG(0x42000c0c, struct __struct_SC1_I2C_S_INTENCLR)
struct __struct_SC1_I2C_S_INTENCLR
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC1_I2C_S_INTENSET	MMIO_REG(0x42000c0d, uint8_t)
#define SC1_I2C_S_INTENSET_PREC	(1 << 0)
#define SC1_I2C_S_INTENSET_AMATCH	(1 << 1)
#define SC1_I2C_S_INTENSET_DRDY	(1 << 2)

#define SC1_I2C_S_INTENSET_s    MMIO_REG(0x42000c0d, struct __struct_SC1_I2C_S_INTENSET)
struct __struct_SC1_I2C_S_INTENSET
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC1_I2C_S_INTFLAG	MMIO_REG(0x42000c0e, uint8_t)
#define SC1_I2C_S_INTFLAG_PREC	(1 << 0)
#define SC1_I2C_S_INTFLAG_AMATCH	(1 << 1)
#define SC1_I2C_S_INTFLAG_DRDY	(1 << 2)

#define SC1_I2C_S_INTFLAG_s    MMIO_REG(0x42000c0e, struct __struct_SC1_I2C_S_INTFLAG)
struct __struct_SC1_I2C_S_INTFLAG
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC1_I2C_S_STATUS	MMIO_REG(0x42000c10, uint16_t)
#define SC1_I2C_S_STATUS_BUSERR	(1 << 0)
#define SC1_I2C_S_STATUS_COLL	(1 << 1)
#define SC1_I2C_S_STATUS_RXNACK	(1 << 2)
#define SC1_I2C_S_STATUS_DIR	(1 << 3)
#define SC1_I2C_S_STATUS_SR	(1 << 4)
#define SC1_I2C_S_STATUS_LOWTOUT	(1 << 6)
#define SC1_I2C_S_STATUS_CLKHOLD	(1 << 7)
#define SC1_I2C_S_STATUS_SYNCBUSY	(1 << 15)

#define SC1_I2C_S_STATUS_s    MMIO_REG(0x42000c10, struct __struct_SC1_I2C_S_STATUS)
struct __struct_SC1_I2C_S_STATUS
{
  uint16_t buserr : 1;
  uint16_t coll : 1;
  uint16_t rxnack : 1;
  uint16_t dir : 1;
  uint16_t sr : 1;
  uint16_t  : 1;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC1_I2C_S_ADDR	MMIO_REG(0x42000c14, uint32_t)
#define SC1_I2C_S_ADDR_GENCEN	(1 << 0)
#define SC1_I2C_S_ADDR_ADDR(x)	((x) << 1)
#define SC1_I2C_S_ADDR_ADDR_MSK	0x000000fe
#define SC1_I2C_S_ADDR_ADDR_VAL(x)	(((x) >> 1) & 0x7f)
#define SC1_I2C_S_ADDR_ADDRMASK(x)	((x) << 17)
#define SC1_I2C_S_ADDR_ADDRMASK_MSK	0x00fe0000
#define SC1_I2C_S_ADDR_ADDRMASK_VAL(x)	(((x) >> 17) & 0x7f)

#define SC1_I2C_S_ADDR_s    MMIO_REG(0x42000c14, struct __struct_SC1_I2C_S_ADDR)
struct __struct_SC1_I2C_S_ADDR
{
  uint32_t gencen : 1;
  uint32_t addr : 7;
  uint32_t  : 9;
  uint32_t addrmask : 7;
  uint32_t  : 8;
};

#define SC1_I2C_S_DATA	MMIO_REG(0x42000c18, uint16_t)
#define SC1_I2C_S_DATA_DATA(x)	((x) << 0)
#define SC1_I2C_S_DATA_DATA_MSK	0x000000ff
#define SC1_I2C_S_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC1_I2C_S_DATA_s    MMIO_REG(0x42000c18, struct __struct_SC1_I2C_S_DATA)
struct __struct_SC1_I2C_S_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42000c00 SC1_I2C_M

#define SC1_I2C_M_CTRLA	MMIO_REG(0x42000c00, uint32_t)
#define SC1_I2C_M_CTRLA_SWRST	(1 << 0)
#define SC1_I2C_M_CTRLA_ENABLE	(1 << 1)
#define SC1_I2C_M_CTRLA_MODE(x)	((x) << 2)
#define SC1_I2C_M_CTRLA_MODE_MSK	0x0000001c
#define SC1_I2C_M_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC1_I2C_M_CTRLA_RUNSTDBY	(1 << 7)
#define SC1_I2C_M_CTRLA_PINOUT	(1 << 16)
#define SC1_I2C_M_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC1_I2C_M_CTRLA_SDAHOLD_MSK	0x00300000
#define SC1_I2C_M_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC1_I2C_M_CTRLA_INACTOUT(x)	((x) << 28)
#define SC1_I2C_M_CTRLA_INACTOUT_MSK	0x30000000
#define SC1_I2C_M_CTRLA_INACTOUT_VAL(x)	(((x) >> 28) & 0x3)
#define SC1_I2C_M_CTRLA_LOWTOUT	(1 << 30)

#define SC1_I2C_M_CTRLA_s    MMIO_REG(0x42000c00, struct __struct_SC1_I2C_M_CTRLA)
struct __struct_SC1_I2C_M_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 6;
  uint32_t inactout : 2;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC1_I2C_M_CTRLB	MMIO_REG(0x42000c04, uint32_t)
#define SC1_I2C_M_CTRLB_SMEN	(1 << 8)
#define SC1_I2C_M_CTRLB_QCEN	(1 << 9)
#define SC1_I2C_M_CTRLB_CMD(x)	((x) << 16)
#define SC1_I2C_M_CTRLB_CMD_MSK	0x00030000
#define SC1_I2C_M_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC1_I2C_M_CTRLB_ACKACT	(1 << 18)

#define SC1_I2C_M_CTRLB_s    MMIO_REG(0x42000c04, struct __struct_SC1_I2C_M_CTRLB)
struct __struct_SC1_I2C_M_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t qcen : 1;
  uint32_t  : 6;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC1_I2C_M_DBGCTRL	MMIO_REG(0x42000c08, uint8_t)
#define SC1_I2C_M_DBGCTRL_DBGSTOP	(1 << 0)

#define SC1_I2C_M_DBGCTRL_s    MMIO_REG(0x42000c08, struct __struct_SC1_I2C_M_DBGCTRL)
struct __struct_SC1_I2C_M_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC1_I2C_M_BAUD	MMIO_REG(0x42000c0a, uint16_t)
#define SC1_I2C_M_BAUD_BAUD(x)	((x) << 0)
#define SC1_I2C_M_BAUD_BAUD_MSK	0x000000ff
#define SC1_I2C_M_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)
#define SC1_I2C_M_BAUD_BAUDLOW(x)	((x) << 8)
#define SC1_I2C_M_BAUD_BAUDLOW_MSK	0x0000ff00
#define SC1_I2C_M_BAUD_BAUDLOW_VAL(x)	(((x) >> 8) & 0xff)

#define SC1_I2C_M_BAUD_s    MMIO_REG(0x42000c0a, struct __struct_SC1_I2C_M_BAUD)
struct __struct_SC1_I2C_M_BAUD
{
  uint16_t baud : 8;
  uint16_t baudlow : 8;
};

#define SC1_I2C_M_INTENCLR	MMIO_REG(0x42000c0c, uint8_t)
#define SC1_I2C_M_INTENCLR_MB	(1 << 0)
#define SC1_I2C_M_INTENCLR_SB	(1 << 1)

#define SC1_I2C_M_INTENCLR_s    MMIO_REG(0x42000c0c, struct __struct_SC1_I2C_M_INTENCLR)
struct __struct_SC1_I2C_M_INTENCLR
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC1_I2C_M_INTENSET	MMIO_REG(0x42000c0d, uint8_t)
#define SC1_I2C_M_INTENSET_MB	(1 << 0)
#define SC1_I2C_M_INTENSET_SB	(1 << 1)

#define SC1_I2C_M_INTENSET_s    MMIO_REG(0x42000c0d, struct __struct_SC1_I2C_M_INTENSET)
struct __struct_SC1_I2C_M_INTENSET
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC1_I2C_M_INTFLAG	MMIO_REG(0x42000c0e, uint8_t)
#define SC1_I2C_M_INTFLAG_MB	(1 << 0)
#define SC1_I2C_M_INTFLAG_SB	(1 << 1)

#define SC1_I2C_M_INTFLAG_s    MMIO_REG(0x42000c0e, struct __struct_SC1_I2C_M_INTFLAG)
struct __struct_SC1_I2C_M_INTFLAG
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC1_I2C_M_STATUS	MMIO_REG(0x42000c10, uint16_t)
#define SC1_I2C_M_STATUS_BUSERR	(1 << 0)
#define SC1_I2C_M_STATUS_ARBLOST	(1 << 1)
#define SC1_I2C_M_STATUS_RXNACK	(1 << 2)
#define SC1_I2C_M_STATUS_BUSSTATE(x)	((x) << 4)
#define SC1_I2C_M_STATUS_BUSSTATE_MSK	0x00000030
#define SC1_I2C_M_STATUS_BUSSTATE_VAL(x)	(((x) >> 4) & 0x3)
#define SC1_I2C_M_STATUS_LOWTOUT	(1 << 6)
#define SC1_I2C_M_STATUS_CLKHOLD	(1 << 7)
#define SC1_I2C_M_STATUS_SYNCBUSY	(1 << 15)

#define SC1_I2C_M_STATUS_s    MMIO_REG(0x42000c10, struct __struct_SC1_I2C_M_STATUS)
struct __struct_SC1_I2C_M_STATUS
{
  uint16_t buserr : 1;
  uint16_t arblost : 1;
  uint16_t rxnack : 1;
  uint16_t  : 1;
  uint16_t busstate : 2;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC1_I2C_M_ADDR	MMIO_REG(0x42000c14, uint16_t)
#define SC1_I2C_M_ADDR_ADDR(x)	((x) << 0)
#define SC1_I2C_M_ADDR_ADDR_MSK	0x000000ff
#define SC1_I2C_M_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)

#define SC1_I2C_M_ADDR_s    MMIO_REG(0x42000c14, struct __struct_SC1_I2C_M_ADDR)
struct __struct_SC1_I2C_M_ADDR
{
  uint16_t addr : 8;
  uint16_t  : 8;
};

#define SC1_I2C_M_DATA	MMIO_REG(0x42000c18, uint16_t)
#define SC1_I2C_M_DATA_DATA(x)	((x) << 0)
#define SC1_I2C_M_DATA_DATA_MSK	0x000000ff
#define SC1_I2C_M_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC1_I2C_M_DATA_s    MMIO_REG(0x42000c18, struct __struct_SC1_I2C_M_DATA)
struct __struct_SC1_I2C_M_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42001000 SC2_USART

#define SC2_USART_CTRLA	MMIO_REG(0x42001000, uint32_t)
#define SC2_USART_CTRLA_SWRST	(1 << 0)
#define SC2_USART_CTRLA_ENABLE	(1 << 1)
#define SC2_USART_CTRLA_MODE(x)	((x) << 2)
#define SC2_USART_CTRLA_MODE_MSK	0x0000001c
#define SC2_USART_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC2_USART_CTRLA_RUNSTDBY	(1 << 7)
#define SC2_USART_CTRLA_TXPO	(1 << 16)
#define SC2_USART_CTRLA_RXPO(x)	((x) << 20)
#define SC2_USART_CTRLA_RXPO_MSK	0x00300000
#define SC2_USART_CTRLA_RXPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC2_USART_CTRLA_FORM(x)	((x) << 24)
#define SC2_USART_CTRLA_FORM_MSK	0x0f000000
#define SC2_USART_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC2_USART_CTRLA_CMODE	(1 << 28)
#define SC2_USART_CTRLA_CPOL	(1 << 29)
#define SC2_USART_CTRLA_DORD	(1 << 30)

#define SC2_USART_CTRLA_s    MMIO_REG(0x42001000, struct __struct_SC2_USART_CTRLA)
struct __struct_SC2_USART_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t txpo : 1;
  uint32_t  : 3;
  uint32_t rxpo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cmode : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC2_USART_CTRLB	MMIO_REG(0x42001004, uint32_t)
#define SC2_USART_CTRLB_CHSIZE(x)	((x) << 0)
#define SC2_USART_CTRLB_CHSIZE_MSK	0x00000007
#define SC2_USART_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC2_USART_CTRLB_SBMODE	(1 << 6)
#define SC2_USART_CTRLB_PMODE	(1 << 13)
#define SC2_USART_CTRLB_TXEN	(1 << 16)
#define SC2_USART_CTRLB_RXEN	(1 << 17)

#define SC2_USART_CTRLB_s    MMIO_REG(0x42001004, struct __struct_SC2_USART_CTRLB)
struct __struct_SC2_USART_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t sbmode : 1;
  uint32_t  : 6;
  uint32_t pmode : 1;
  uint32_t  : 2;
  uint32_t txen : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC2_USART_DBGCTRL	MMIO_REG(0x42001008, uint8_t)
#define SC2_USART_DBGCTRL_DBGSTOP	(1 << 0)

#define SC2_USART_DBGCTRL_s    MMIO_REG(0x42001008, struct __struct_SC2_USART_DBGCTRL)
struct __struct_SC2_USART_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC2_USART_BAUD	MMIO_REG(0x4200100a, uint16_t)
#define SC2_USART_BAUD_BAUD(x)	((x) << 0)
#define SC2_USART_BAUD_BAUD_MSK	0x0000ffff
#define SC2_USART_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xffff)

#define SC2_USART_BAUD_s    MMIO_REG(0x4200100a, struct __struct_SC2_USART_BAUD)
struct __struct_SC2_USART_BAUD
{
  uint16_t baud : 16;
};

#define SC2_USART_INTENCLR	MMIO_REG(0x4200100c, uint8_t)
#define SC2_USART_INTENCLR_DRE	(1 << 0)
#define SC2_USART_INTENCLR_TXC	(1 << 1)
#define SC2_USART_INTENCLR_RXC	(1 << 2)

#define SC2_USART_INTENCLR_s    MMIO_REG(0x4200100c, struct __struct_SC2_USART_INTENCLR)
struct __struct_SC2_USART_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC2_USART_INTENSET	MMIO_REG(0x4200100d, uint8_t)
#define SC2_USART_INTENSET_DRE	(1 << 0)
#define SC2_USART_INTENSET_TXC	(1 << 1)
#define SC2_USART_INTENSET_RXC	(1 << 2)

#define SC2_USART_INTENSET_s    MMIO_REG(0x4200100d, struct __struct_SC2_USART_INTENSET)
struct __struct_SC2_USART_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC2_USART_INTFLAG	MMIO_REG(0x4200100e, uint8_t)
#define SC2_USART_INTFLAG_DRE	(1 << 0)
#define SC2_USART_INTFLAG_TXC	(1 << 1)
#define SC2_USART_INTFLAG_RXC	(1 << 2)

#define SC2_USART_INTFLAG_s    MMIO_REG(0x4200100e, struct __struct_SC2_USART_INTFLAG)
struct __struct_SC2_USART_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC2_USART_STATUS	MMIO_REG(0x42001010, uint16_t)
#define SC2_USART_STATUS_PERR	(1 << 0)
#define SC2_USART_STATUS_FERR	(1 << 1)
#define SC2_USART_STATUS_BUFOVF	(1 << 2)
#define SC2_USART_STATUS_SYNCBUSY	(1 << 15)

#define SC2_USART_STATUS_s    MMIO_REG(0x42001010, struct __struct_SC2_USART_STATUS)
struct __struct_SC2_USART_STATUS
{
  uint16_t perr : 1;
  uint16_t ferr : 1;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC2_USART_DATA	MMIO_REG(0x42001018, uint16_t)
#define SC2_USART_DATA_DATA(x)	((x) << 0)
#define SC2_USART_DATA_DATA_MSK	0x000001ff
#define SC2_USART_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC2_USART_DATA_s    MMIO_REG(0x42001018, struct __struct_SC2_USART_DATA)
struct __struct_SC2_USART_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42001000 SC2_SPI

#define SC2_SPI_CTRLA	MMIO_REG(0x42001000, uint32_t)
#define SC2_SPI_CTRLA_SWRST	(1 << 0)
#define SC2_SPI_CTRLA_ENABLE	(1 << 1)
#define SC2_SPI_CTRLA_MODE(x)	((x) << 2)
#define SC2_SPI_CTRLA_MODE_MSK	0x0000001c
#define SC2_SPI_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC2_SPI_CTRLA_RUNSTDBY	(1 << 7)
#define SC2_SPI_CTRLA_DOPO	(1 << 16)
#define SC2_SPI_CTRLA_DIPO(x)	((x) << 20)
#define SC2_SPI_CTRLA_DIPO_MSK	0x00300000
#define SC2_SPI_CTRLA_DIPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC2_SPI_CTRLA_FORM(x)	((x) << 24)
#define SC2_SPI_CTRLA_FORM_MSK	0x0f000000
#define SC2_SPI_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC2_SPI_CTRLA_CPHA	(1 << 28)
#define SC2_SPI_CTRLA_CPOL	(1 << 29)
#define SC2_SPI_CTRLA_DORD	(1 << 30)

#define SC2_SPI_CTRLA_s    MMIO_REG(0x42001000, struct __struct_SC2_SPI_CTRLA)
struct __struct_SC2_SPI_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t dopo : 1;
  uint32_t  : 3;
  uint32_t dipo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cpha : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC2_SPI_CTRLB	MMIO_REG(0x42001004, uint32_t)
#define SC2_SPI_CTRLB_CHSIZE(x)	((x) << 0)
#define SC2_SPI_CTRLB_CHSIZE_MSK	0x00000007
#define SC2_SPI_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC2_SPI_CTRLB_PLOADEN	(1 << 6)
#define SC2_SPI_CTRLB_AMODE(x)	((x) << 14)
#define SC2_SPI_CTRLB_AMODE_MSK	0x0000c000
#define SC2_SPI_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC2_SPI_CTRLB_RXEN	(1 << 17)

#define SC2_SPI_CTRLB_s    MMIO_REG(0x42001004, struct __struct_SC2_SPI_CTRLB)
struct __struct_SC2_SPI_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t ploaden : 1;
  uint32_t  : 7;
  uint32_t amode : 2;
  uint32_t  : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC2_SPI_DBGCTRL	MMIO_REG(0x42001008, uint8_t)
#define SC2_SPI_DBGCTRL_DBGSTOP	(1 << 0)

#define SC2_SPI_DBGCTRL_s    MMIO_REG(0x42001008, struct __struct_SC2_SPI_DBGCTRL)
struct __struct_SC2_SPI_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC2_SPI_BAUD	MMIO_REG(0x4200100a, uint8_t)
#define SC2_SPI_BAUD_BAUD(x)	((x) << 0)
#define SC2_SPI_BAUD_BAUD_MSK	0x000000ff
#define SC2_SPI_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)

#define SC2_SPI_BAUD_s    MMIO_REG(0x4200100a, struct __struct_SC2_SPI_BAUD)
struct __struct_SC2_SPI_BAUD
{
  uint8_t baud : 8;
};

#define SC2_SPI_INTENCLR	MMIO_REG(0x4200100c, uint8_t)
#define SC2_SPI_INTENCLR_DRE	(1 << 0)
#define SC2_SPI_INTENCLR_TXC	(1 << 1)
#define SC2_SPI_INTENCLR_RXC	(1 << 2)

#define SC2_SPI_INTENCLR_s    MMIO_REG(0x4200100c, struct __struct_SC2_SPI_INTENCLR)
struct __struct_SC2_SPI_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC2_SPI_INTENSET	MMIO_REG(0x4200100d, uint8_t)
#define SC2_SPI_INTENSET_DRE	(1 << 0)
#define SC2_SPI_INTENSET_TXC	(1 << 1)
#define SC2_SPI_INTENSET_RXC	(1 << 2)

#define SC2_SPI_INTENSET_s    MMIO_REG(0x4200100d, struct __struct_SC2_SPI_INTENSET)
struct __struct_SC2_SPI_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC2_SPI_INTFLAG	MMIO_REG(0x4200100e, uint8_t)
#define SC2_SPI_INTFLAG_DRE	(1 << 0)
#define SC2_SPI_INTFLAG_TXC	(1 << 1)
#define SC2_SPI_INTFLAG_RXC	(1 << 2)

#define SC2_SPI_INTFLAG_s    MMIO_REG(0x4200100e, struct __struct_SC2_SPI_INTFLAG)
struct __struct_SC2_SPI_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC2_SPI_STATUS	MMIO_REG(0x42001010, uint16_t)
#define SC2_SPI_STATUS_BUFOVF	(1 << 2)
#define SC2_SPI_STATUS_SYNCBUSY	(1 << 15)

#define SC2_SPI_STATUS_s    MMIO_REG(0x42001010, struct __struct_SC2_SPI_STATUS)
struct __struct_SC2_SPI_STATUS
{
  uint16_t  : 2;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC2_SPI_ADDR	MMIO_REG(0x42001014, uint32_t)
#define SC2_SPI_ADDR_ADDR(x)	((x) << 0)
#define SC2_SPI_ADDR_ADDR_MSK	0x000000ff
#define SC2_SPI_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)
#define SC2_SPI_ADDR_ADDRMASK(x)	((x) << 16)
#define SC2_SPI_ADDR_ADDRMASK_MSK	0x00ff0000
#define SC2_SPI_ADDR_ADDRMASK_VAL(x)	(((x) >> 16) & 0xff)

#define SC2_SPI_ADDR_s    MMIO_REG(0x42001014, struct __struct_SC2_SPI_ADDR)
struct __struct_SC2_SPI_ADDR
{
  uint32_t addr : 8;
  uint32_t  : 8;
  uint32_t addrmask : 8;
  uint32_t  : 8;
};

#define SC2_SPI_DATA	MMIO_REG(0x42001018, uint16_t)
#define SC2_SPI_DATA_DATA(x)	((x) << 0)
#define SC2_SPI_DATA_DATA_MSK	0x000001ff
#define SC2_SPI_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC2_SPI_DATA_s    MMIO_REG(0x42001018, struct __struct_SC2_SPI_DATA)
struct __struct_SC2_SPI_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42001000 SC2_I2C_S

#define SC2_I2C_S_CTRLA	MMIO_REG(0x42001000, uint32_t)
#define SC2_I2C_S_CTRLA_SWRST	(1 << 0)
#define SC2_I2C_S_CTRLA_ENABLE	(1 << 1)
#define SC2_I2C_S_CTRLA_MODE(x)	((x) << 2)
#define SC2_I2C_S_CTRLA_MODE_MSK	0x0000001c
#define SC2_I2C_S_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC2_I2C_S_CTRLA_RUNSTDBY	(1 << 7)
#define SC2_I2C_S_CTRLA_PINOUT	(1 << 16)
#define SC2_I2C_S_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC2_I2C_S_CTRLA_SDAHOLD_MSK	0x00300000
#define SC2_I2C_S_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC2_I2C_S_CTRLA_LOWTOUT	(1 << 30)

#define SC2_I2C_S_CTRLA_s    MMIO_REG(0x42001000, struct __struct_SC2_I2C_S_CTRLA)
struct __struct_SC2_I2C_S_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 8;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC2_I2C_S_CTRLB	MMIO_REG(0x42001004, uint32_t)
#define SC2_I2C_S_CTRLB_SMEN	(1 << 8)
#define SC2_I2C_S_CTRLB_AMODE(x)	((x) << 14)
#define SC2_I2C_S_CTRLB_AMODE_MSK	0x0000c000
#define SC2_I2C_S_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC2_I2C_S_CTRLB_CMD(x)	((x) << 16)
#define SC2_I2C_S_CTRLB_CMD_MSK	0x00030000
#define SC2_I2C_S_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC2_I2C_S_CTRLB_ACKACT	(1 << 18)

#define SC2_I2C_S_CTRLB_s    MMIO_REG(0x42001004, struct __struct_SC2_I2C_S_CTRLB)
struct __struct_SC2_I2C_S_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t  : 5;
  uint32_t amode : 2;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC2_I2C_S_INTENCLR	MMIO_REG(0x4200100c, uint8_t)
#define SC2_I2C_S_INTENCLR_PREC	(1 << 0)
#define SC2_I2C_S_INTENCLR_AMATCH	(1 << 1)
#define SC2_I2C_S_INTENCLR_DRDY	(1 << 2)

#define SC2_I2C_S_INTENCLR_s    MMIO_REG(0x4200100c, struct __struct_SC2_I2C_S_INTENCLR)
struct __struct_SC2_I2C_S_INTENCLR
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC2_I2C_S_INTENSET	MMIO_REG(0x4200100d, uint8_t)
#define SC2_I2C_S_INTENSET_PREC	(1 << 0)
#define SC2_I2C_S_INTENSET_AMATCH	(1 << 1)
#define SC2_I2C_S_INTENSET_DRDY	(1 << 2)

#define SC2_I2C_S_INTENSET_s    MMIO_REG(0x4200100d, struct __struct_SC2_I2C_S_INTENSET)
struct __struct_SC2_I2C_S_INTENSET
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC2_I2C_S_INTFLAG	MMIO_REG(0x4200100e, uint8_t)
#define SC2_I2C_S_INTFLAG_PREC	(1 << 0)
#define SC2_I2C_S_INTFLAG_AMATCH	(1 << 1)
#define SC2_I2C_S_INTFLAG_DRDY	(1 << 2)

#define SC2_I2C_S_INTFLAG_s    MMIO_REG(0x4200100e, struct __struct_SC2_I2C_S_INTFLAG)
struct __struct_SC2_I2C_S_INTFLAG
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC2_I2C_S_STATUS	MMIO_REG(0x42001010, uint16_t)
#define SC2_I2C_S_STATUS_BUSERR	(1 << 0)
#define SC2_I2C_S_STATUS_COLL	(1 << 1)
#define SC2_I2C_S_STATUS_RXNACK	(1 << 2)
#define SC2_I2C_S_STATUS_DIR	(1 << 3)
#define SC2_I2C_S_STATUS_SR	(1 << 4)
#define SC2_I2C_S_STATUS_LOWTOUT	(1 << 6)
#define SC2_I2C_S_STATUS_CLKHOLD	(1 << 7)
#define SC2_I2C_S_STATUS_SYNCBUSY	(1 << 15)

#define SC2_I2C_S_STATUS_s    MMIO_REG(0x42001010, struct __struct_SC2_I2C_S_STATUS)
struct __struct_SC2_I2C_S_STATUS
{
  uint16_t buserr : 1;
  uint16_t coll : 1;
  uint16_t rxnack : 1;
  uint16_t dir : 1;
  uint16_t sr : 1;
  uint16_t  : 1;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC2_I2C_S_ADDR	MMIO_REG(0x42001014, uint32_t)
#define SC2_I2C_S_ADDR_GENCEN	(1 << 0)
#define SC2_I2C_S_ADDR_ADDR(x)	((x) << 1)
#define SC2_I2C_S_ADDR_ADDR_MSK	0x000000fe
#define SC2_I2C_S_ADDR_ADDR_VAL(x)	(((x) >> 1) & 0x7f)
#define SC2_I2C_S_ADDR_ADDRMASK(x)	((x) << 17)
#define SC2_I2C_S_ADDR_ADDRMASK_MSK	0x00fe0000
#define SC2_I2C_S_ADDR_ADDRMASK_VAL(x)	(((x) >> 17) & 0x7f)

#define SC2_I2C_S_ADDR_s    MMIO_REG(0x42001014, struct __struct_SC2_I2C_S_ADDR)
struct __struct_SC2_I2C_S_ADDR
{
  uint32_t gencen : 1;
  uint32_t addr : 7;
  uint32_t  : 9;
  uint32_t addrmask : 7;
  uint32_t  : 8;
};

#define SC2_I2C_S_DATA	MMIO_REG(0x42001018, uint16_t)
#define SC2_I2C_S_DATA_DATA(x)	((x) << 0)
#define SC2_I2C_S_DATA_DATA_MSK	0x000000ff
#define SC2_I2C_S_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC2_I2C_S_DATA_s    MMIO_REG(0x42001018, struct __struct_SC2_I2C_S_DATA)
struct __struct_SC2_I2C_S_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42001000 SC2_I2C_M

#define SC2_I2C_M_CTRLA	MMIO_REG(0x42001000, uint32_t)
#define SC2_I2C_M_CTRLA_SWRST	(1 << 0)
#define SC2_I2C_M_CTRLA_ENABLE	(1 << 1)
#define SC2_I2C_M_CTRLA_MODE(x)	((x) << 2)
#define SC2_I2C_M_CTRLA_MODE_MSK	0x0000001c
#define SC2_I2C_M_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC2_I2C_M_CTRLA_RUNSTDBY	(1 << 7)
#define SC2_I2C_M_CTRLA_PINOUT	(1 << 16)
#define SC2_I2C_M_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC2_I2C_M_CTRLA_SDAHOLD_MSK	0x00300000
#define SC2_I2C_M_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC2_I2C_M_CTRLA_INACTOUT(x)	((x) << 28)
#define SC2_I2C_M_CTRLA_INACTOUT_MSK	0x30000000
#define SC2_I2C_M_CTRLA_INACTOUT_VAL(x)	(((x) >> 28) & 0x3)
#define SC2_I2C_M_CTRLA_LOWTOUT	(1 << 30)

#define SC2_I2C_M_CTRLA_s    MMIO_REG(0x42001000, struct __struct_SC2_I2C_M_CTRLA)
struct __struct_SC2_I2C_M_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 6;
  uint32_t inactout : 2;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC2_I2C_M_CTRLB	MMIO_REG(0x42001004, uint32_t)
#define SC2_I2C_M_CTRLB_SMEN	(1 << 8)
#define SC2_I2C_M_CTRLB_QCEN	(1 << 9)
#define SC2_I2C_M_CTRLB_CMD(x)	((x) << 16)
#define SC2_I2C_M_CTRLB_CMD_MSK	0x00030000
#define SC2_I2C_M_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC2_I2C_M_CTRLB_ACKACT	(1 << 18)

#define SC2_I2C_M_CTRLB_s    MMIO_REG(0x42001004, struct __struct_SC2_I2C_M_CTRLB)
struct __struct_SC2_I2C_M_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t qcen : 1;
  uint32_t  : 6;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC2_I2C_M_DBGCTRL	MMIO_REG(0x42001008, uint8_t)
#define SC2_I2C_M_DBGCTRL_DBGSTOP	(1 << 0)

#define SC2_I2C_M_DBGCTRL_s    MMIO_REG(0x42001008, struct __struct_SC2_I2C_M_DBGCTRL)
struct __struct_SC2_I2C_M_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC2_I2C_M_BAUD	MMIO_REG(0x4200100a, uint16_t)
#define SC2_I2C_M_BAUD_BAUD(x)	((x) << 0)
#define SC2_I2C_M_BAUD_BAUD_MSK	0x000000ff
#define SC2_I2C_M_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)
#define SC2_I2C_M_BAUD_BAUDLOW(x)	((x) << 8)
#define SC2_I2C_M_BAUD_BAUDLOW_MSK	0x0000ff00
#define SC2_I2C_M_BAUD_BAUDLOW_VAL(x)	(((x) >> 8) & 0xff)

#define SC2_I2C_M_BAUD_s    MMIO_REG(0x4200100a, struct __struct_SC2_I2C_M_BAUD)
struct __struct_SC2_I2C_M_BAUD
{
  uint16_t baud : 8;
  uint16_t baudlow : 8;
};

#define SC2_I2C_M_INTENCLR	MMIO_REG(0x4200100c, uint8_t)
#define SC2_I2C_M_INTENCLR_MB	(1 << 0)
#define SC2_I2C_M_INTENCLR_SB	(1 << 1)

#define SC2_I2C_M_INTENCLR_s    MMIO_REG(0x4200100c, struct __struct_SC2_I2C_M_INTENCLR)
struct __struct_SC2_I2C_M_INTENCLR
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC2_I2C_M_INTENSET	MMIO_REG(0x4200100d, uint8_t)
#define SC2_I2C_M_INTENSET_MB	(1 << 0)
#define SC2_I2C_M_INTENSET_SB	(1 << 1)

#define SC2_I2C_M_INTENSET_s    MMIO_REG(0x4200100d, struct __struct_SC2_I2C_M_INTENSET)
struct __struct_SC2_I2C_M_INTENSET
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC2_I2C_M_INTFLAG	MMIO_REG(0x4200100e, uint8_t)
#define SC2_I2C_M_INTFLAG_MB	(1 << 0)
#define SC2_I2C_M_INTFLAG_SB	(1 << 1)

#define SC2_I2C_M_INTFLAG_s    MMIO_REG(0x4200100e, struct __struct_SC2_I2C_M_INTFLAG)
struct __struct_SC2_I2C_M_INTFLAG
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC2_I2C_M_STATUS	MMIO_REG(0x42001010, uint16_t)
#define SC2_I2C_M_STATUS_BUSERR	(1 << 0)
#define SC2_I2C_M_STATUS_ARBLOST	(1 << 1)
#define SC2_I2C_M_STATUS_RXNACK	(1 << 2)
#define SC2_I2C_M_STATUS_BUSSTATE(x)	((x) << 4)
#define SC2_I2C_M_STATUS_BUSSTATE_MSK	0x00000030
#define SC2_I2C_M_STATUS_BUSSTATE_VAL(x)	(((x) >> 4) & 0x3)
#define SC2_I2C_M_STATUS_LOWTOUT	(1 << 6)
#define SC2_I2C_M_STATUS_CLKHOLD	(1 << 7)
#define SC2_I2C_M_STATUS_SYNCBUSY	(1 << 15)

#define SC2_I2C_M_STATUS_s    MMIO_REG(0x42001010, struct __struct_SC2_I2C_M_STATUS)
struct __struct_SC2_I2C_M_STATUS
{
  uint16_t buserr : 1;
  uint16_t arblost : 1;
  uint16_t rxnack : 1;
  uint16_t  : 1;
  uint16_t busstate : 2;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC2_I2C_M_ADDR	MMIO_REG(0x42001014, uint16_t)
#define SC2_I2C_M_ADDR_ADDR(x)	((x) << 0)
#define SC2_I2C_M_ADDR_ADDR_MSK	0x000000ff
#define SC2_I2C_M_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)

#define SC2_I2C_M_ADDR_s    MMIO_REG(0x42001014, struct __struct_SC2_I2C_M_ADDR)
struct __struct_SC2_I2C_M_ADDR
{
  uint16_t addr : 8;
  uint16_t  : 8;
};

#define SC2_I2C_M_DATA	MMIO_REG(0x42001018, uint16_t)
#define SC2_I2C_M_DATA_DATA(x)	((x) << 0)
#define SC2_I2C_M_DATA_DATA_MSK	0x000000ff
#define SC2_I2C_M_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC2_I2C_M_DATA_s    MMIO_REG(0x42001018, struct __struct_SC2_I2C_M_DATA)
struct __struct_SC2_I2C_M_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42001400 SC3_USART

#define SC3_USART_CTRLA	MMIO_REG(0x42001400, uint32_t)
#define SC3_USART_CTRLA_SWRST	(1 << 0)
#define SC3_USART_CTRLA_ENABLE	(1 << 1)
#define SC3_USART_CTRLA_MODE(x)	((x) << 2)
#define SC3_USART_CTRLA_MODE_MSK	0x0000001c
#define SC3_USART_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC3_USART_CTRLA_RUNSTDBY	(1 << 7)
#define SC3_USART_CTRLA_TXPO	(1 << 16)
#define SC3_USART_CTRLA_RXPO(x)	((x) << 20)
#define SC3_USART_CTRLA_RXPO_MSK	0x00300000
#define SC3_USART_CTRLA_RXPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC3_USART_CTRLA_FORM(x)	((x) << 24)
#define SC3_USART_CTRLA_FORM_MSK	0x0f000000
#define SC3_USART_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC3_USART_CTRLA_CMODE	(1 << 28)
#define SC3_USART_CTRLA_CPOL	(1 << 29)
#define SC3_USART_CTRLA_DORD	(1 << 30)

#define SC3_USART_CTRLA_s    MMIO_REG(0x42001400, struct __struct_SC3_USART_CTRLA)
struct __struct_SC3_USART_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t txpo : 1;
  uint32_t  : 3;
  uint32_t rxpo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cmode : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC3_USART_CTRLB	MMIO_REG(0x42001404, uint32_t)
#define SC3_USART_CTRLB_CHSIZE(x)	((x) << 0)
#define SC3_USART_CTRLB_CHSIZE_MSK	0x00000007
#define SC3_USART_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC3_USART_CTRLB_SBMODE	(1 << 6)
#define SC3_USART_CTRLB_PMODE	(1 << 13)
#define SC3_USART_CTRLB_TXEN	(1 << 16)
#define SC3_USART_CTRLB_RXEN	(1 << 17)

#define SC3_USART_CTRLB_s    MMIO_REG(0x42001404, struct __struct_SC3_USART_CTRLB)
struct __struct_SC3_USART_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t sbmode : 1;
  uint32_t  : 6;
  uint32_t pmode : 1;
  uint32_t  : 2;
  uint32_t txen : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC3_USART_DBGCTRL	MMIO_REG(0x42001408, uint8_t)
#define SC3_USART_DBGCTRL_DBGSTOP	(1 << 0)

#define SC3_USART_DBGCTRL_s    MMIO_REG(0x42001408, struct __struct_SC3_USART_DBGCTRL)
struct __struct_SC3_USART_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC3_USART_BAUD	MMIO_REG(0x4200140a, uint16_t)
#define SC3_USART_BAUD_BAUD(x)	((x) << 0)
#define SC3_USART_BAUD_BAUD_MSK	0x0000ffff
#define SC3_USART_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xffff)

#define SC3_USART_BAUD_s    MMIO_REG(0x4200140a, struct __struct_SC3_USART_BAUD)
struct __struct_SC3_USART_BAUD
{
  uint16_t baud : 16;
};

#define SC3_USART_INTENCLR	MMIO_REG(0x4200140c, uint8_t)
#define SC3_USART_INTENCLR_DRE	(1 << 0)
#define SC3_USART_INTENCLR_TXC	(1 << 1)
#define SC3_USART_INTENCLR_RXC	(1 << 2)

#define SC3_USART_INTENCLR_s    MMIO_REG(0x4200140c, struct __struct_SC3_USART_INTENCLR)
struct __struct_SC3_USART_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC3_USART_INTENSET	MMIO_REG(0x4200140d, uint8_t)
#define SC3_USART_INTENSET_DRE	(1 << 0)
#define SC3_USART_INTENSET_TXC	(1 << 1)
#define SC3_USART_INTENSET_RXC	(1 << 2)

#define SC3_USART_INTENSET_s    MMIO_REG(0x4200140d, struct __struct_SC3_USART_INTENSET)
struct __struct_SC3_USART_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC3_USART_INTFLAG	MMIO_REG(0x4200140e, uint8_t)
#define SC3_USART_INTFLAG_DRE	(1 << 0)
#define SC3_USART_INTFLAG_TXC	(1 << 1)
#define SC3_USART_INTFLAG_RXC	(1 << 2)

#define SC3_USART_INTFLAG_s    MMIO_REG(0x4200140e, struct __struct_SC3_USART_INTFLAG)
struct __struct_SC3_USART_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC3_USART_STATUS	MMIO_REG(0x42001410, uint16_t)
#define SC3_USART_STATUS_PERR	(1 << 0)
#define SC3_USART_STATUS_FERR	(1 << 1)
#define SC3_USART_STATUS_BUFOVF	(1 << 2)
#define SC3_USART_STATUS_SYNCBUSY	(1 << 15)

#define SC3_USART_STATUS_s    MMIO_REG(0x42001410, struct __struct_SC3_USART_STATUS)
struct __struct_SC3_USART_STATUS
{
  uint16_t perr : 1;
  uint16_t ferr : 1;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC3_USART_DATA	MMIO_REG(0x42001418, uint16_t)
#define SC3_USART_DATA_DATA(x)	((x) << 0)
#define SC3_USART_DATA_DATA_MSK	0x000001ff
#define SC3_USART_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC3_USART_DATA_s    MMIO_REG(0x42001418, struct __struct_SC3_USART_DATA)
struct __struct_SC3_USART_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42001400 SC3_SPI

#define SC3_SPI_CTRLA	MMIO_REG(0x42001400, uint32_t)
#define SC3_SPI_CTRLA_SWRST	(1 << 0)
#define SC3_SPI_CTRLA_ENABLE	(1 << 1)
#define SC3_SPI_CTRLA_MODE(x)	((x) << 2)
#define SC3_SPI_CTRLA_MODE_MSK	0x0000001c
#define SC3_SPI_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC3_SPI_CTRLA_RUNSTDBY	(1 << 7)
#define SC3_SPI_CTRLA_DOPO	(1 << 16)
#define SC3_SPI_CTRLA_DIPO(x)	((x) << 20)
#define SC3_SPI_CTRLA_DIPO_MSK	0x00300000
#define SC3_SPI_CTRLA_DIPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC3_SPI_CTRLA_FORM(x)	((x) << 24)
#define SC3_SPI_CTRLA_FORM_MSK	0x0f000000
#define SC3_SPI_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC3_SPI_CTRLA_CPHA	(1 << 28)
#define SC3_SPI_CTRLA_CPOL	(1 << 29)
#define SC3_SPI_CTRLA_DORD	(1 << 30)

#define SC3_SPI_CTRLA_s    MMIO_REG(0x42001400, struct __struct_SC3_SPI_CTRLA)
struct __struct_SC3_SPI_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t dopo : 1;
  uint32_t  : 3;
  uint32_t dipo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cpha : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC3_SPI_CTRLB	MMIO_REG(0x42001404, uint32_t)
#define SC3_SPI_CTRLB_CHSIZE(x)	((x) << 0)
#define SC3_SPI_CTRLB_CHSIZE_MSK	0x00000007
#define SC3_SPI_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC3_SPI_CTRLB_PLOADEN	(1 << 6)
#define SC3_SPI_CTRLB_AMODE(x)	((x) << 14)
#define SC3_SPI_CTRLB_AMODE_MSK	0x0000c000
#define SC3_SPI_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC3_SPI_CTRLB_RXEN	(1 << 17)

#define SC3_SPI_CTRLB_s    MMIO_REG(0x42001404, struct __struct_SC3_SPI_CTRLB)
struct __struct_SC3_SPI_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t ploaden : 1;
  uint32_t  : 7;
  uint32_t amode : 2;
  uint32_t  : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC3_SPI_DBGCTRL	MMIO_REG(0x42001408, uint8_t)
#define SC3_SPI_DBGCTRL_DBGSTOP	(1 << 0)

#define SC3_SPI_DBGCTRL_s    MMIO_REG(0x42001408, struct __struct_SC3_SPI_DBGCTRL)
struct __struct_SC3_SPI_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC3_SPI_BAUD	MMIO_REG(0x4200140a, uint8_t)
#define SC3_SPI_BAUD_BAUD(x)	((x) << 0)
#define SC3_SPI_BAUD_BAUD_MSK	0x000000ff
#define SC3_SPI_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)

#define SC3_SPI_BAUD_s    MMIO_REG(0x4200140a, struct __struct_SC3_SPI_BAUD)
struct __struct_SC3_SPI_BAUD
{
  uint8_t baud : 8;
};

#define SC3_SPI_INTENCLR	MMIO_REG(0x4200140c, uint8_t)
#define SC3_SPI_INTENCLR_DRE	(1 << 0)
#define SC3_SPI_INTENCLR_TXC	(1 << 1)
#define SC3_SPI_INTENCLR_RXC	(1 << 2)

#define SC3_SPI_INTENCLR_s    MMIO_REG(0x4200140c, struct __struct_SC3_SPI_INTENCLR)
struct __struct_SC3_SPI_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC3_SPI_INTENSET	MMIO_REG(0x4200140d, uint8_t)
#define SC3_SPI_INTENSET_DRE	(1 << 0)
#define SC3_SPI_INTENSET_TXC	(1 << 1)
#define SC3_SPI_INTENSET_RXC	(1 << 2)

#define SC3_SPI_INTENSET_s    MMIO_REG(0x4200140d, struct __struct_SC3_SPI_INTENSET)
struct __struct_SC3_SPI_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC3_SPI_INTFLAG	MMIO_REG(0x4200140e, uint8_t)
#define SC3_SPI_INTFLAG_DRE	(1 << 0)
#define SC3_SPI_INTFLAG_TXC	(1 << 1)
#define SC3_SPI_INTFLAG_RXC	(1 << 2)

#define SC3_SPI_INTFLAG_s    MMIO_REG(0x4200140e, struct __struct_SC3_SPI_INTFLAG)
struct __struct_SC3_SPI_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC3_SPI_STATUS	MMIO_REG(0x42001410, uint16_t)
#define SC3_SPI_STATUS_BUFOVF	(1 << 2)
#define SC3_SPI_STATUS_SYNCBUSY	(1 << 15)

#define SC3_SPI_STATUS_s    MMIO_REG(0x42001410, struct __struct_SC3_SPI_STATUS)
struct __struct_SC3_SPI_STATUS
{
  uint16_t  : 2;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC3_SPI_ADDR	MMIO_REG(0x42001414, uint32_t)
#define SC3_SPI_ADDR_ADDR(x)	((x) << 0)
#define SC3_SPI_ADDR_ADDR_MSK	0x000000ff
#define SC3_SPI_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)
#define SC3_SPI_ADDR_ADDRMASK(x)	((x) << 16)
#define SC3_SPI_ADDR_ADDRMASK_MSK	0x00ff0000
#define SC3_SPI_ADDR_ADDRMASK_VAL(x)	(((x) >> 16) & 0xff)

#define SC3_SPI_ADDR_s    MMIO_REG(0x42001414, struct __struct_SC3_SPI_ADDR)
struct __struct_SC3_SPI_ADDR
{
  uint32_t addr : 8;
  uint32_t  : 8;
  uint32_t addrmask : 8;
  uint32_t  : 8;
};

#define SC3_SPI_DATA	MMIO_REG(0x42001418, uint16_t)
#define SC3_SPI_DATA_DATA(x)	((x) << 0)
#define SC3_SPI_DATA_DATA_MSK	0x000001ff
#define SC3_SPI_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC3_SPI_DATA_s    MMIO_REG(0x42001418, struct __struct_SC3_SPI_DATA)
struct __struct_SC3_SPI_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42001400 SC3_I2C_S

#define SC3_I2C_S_CTRLA	MMIO_REG(0x42001400, uint32_t)
#define SC3_I2C_S_CTRLA_SWRST	(1 << 0)
#define SC3_I2C_S_CTRLA_ENABLE	(1 << 1)
#define SC3_I2C_S_CTRLA_MODE(x)	((x) << 2)
#define SC3_I2C_S_CTRLA_MODE_MSK	0x0000001c
#define SC3_I2C_S_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC3_I2C_S_CTRLA_RUNSTDBY	(1 << 7)
#define SC3_I2C_S_CTRLA_PINOUT	(1 << 16)
#define SC3_I2C_S_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC3_I2C_S_CTRLA_SDAHOLD_MSK	0x00300000
#define SC3_I2C_S_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC3_I2C_S_CTRLA_LOWTOUT	(1 << 30)

#define SC3_I2C_S_CTRLA_s    MMIO_REG(0x42001400, struct __struct_SC3_I2C_S_CTRLA)
struct __struct_SC3_I2C_S_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 8;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC3_I2C_S_CTRLB	MMIO_REG(0x42001404, uint32_t)
#define SC3_I2C_S_CTRLB_SMEN	(1 << 8)
#define SC3_I2C_S_CTRLB_AMODE(x)	((x) << 14)
#define SC3_I2C_S_CTRLB_AMODE_MSK	0x0000c000
#define SC3_I2C_S_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC3_I2C_S_CTRLB_CMD(x)	((x) << 16)
#define SC3_I2C_S_CTRLB_CMD_MSK	0x00030000
#define SC3_I2C_S_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC3_I2C_S_CTRLB_ACKACT	(1 << 18)

#define SC3_I2C_S_CTRLB_s    MMIO_REG(0x42001404, struct __struct_SC3_I2C_S_CTRLB)
struct __struct_SC3_I2C_S_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t  : 5;
  uint32_t amode : 2;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC3_I2C_S_INTENCLR	MMIO_REG(0x4200140c, uint8_t)
#define SC3_I2C_S_INTENCLR_PREC	(1 << 0)
#define SC3_I2C_S_INTENCLR_AMATCH	(1 << 1)
#define SC3_I2C_S_INTENCLR_DRDY	(1 << 2)

#define SC3_I2C_S_INTENCLR_s    MMIO_REG(0x4200140c, struct __struct_SC3_I2C_S_INTENCLR)
struct __struct_SC3_I2C_S_INTENCLR
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC3_I2C_S_INTENSET	MMIO_REG(0x4200140d, uint8_t)
#define SC3_I2C_S_INTENSET_PREC	(1 << 0)
#define SC3_I2C_S_INTENSET_AMATCH	(1 << 1)
#define SC3_I2C_S_INTENSET_DRDY	(1 << 2)

#define SC3_I2C_S_INTENSET_s    MMIO_REG(0x4200140d, struct __struct_SC3_I2C_S_INTENSET)
struct __struct_SC3_I2C_S_INTENSET
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC3_I2C_S_INTFLAG	MMIO_REG(0x4200140e, uint8_t)
#define SC3_I2C_S_INTFLAG_PREC	(1 << 0)
#define SC3_I2C_S_INTFLAG_AMATCH	(1 << 1)
#define SC3_I2C_S_INTFLAG_DRDY	(1 << 2)

#define SC3_I2C_S_INTFLAG_s    MMIO_REG(0x4200140e, struct __struct_SC3_I2C_S_INTFLAG)
struct __struct_SC3_I2C_S_INTFLAG
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC3_I2C_S_STATUS	MMIO_REG(0x42001410, uint16_t)
#define SC3_I2C_S_STATUS_BUSERR	(1 << 0)
#define SC3_I2C_S_STATUS_COLL	(1 << 1)
#define SC3_I2C_S_STATUS_RXNACK	(1 << 2)
#define SC3_I2C_S_STATUS_DIR	(1 << 3)
#define SC3_I2C_S_STATUS_SR	(1 << 4)
#define SC3_I2C_S_STATUS_LOWTOUT	(1 << 6)
#define SC3_I2C_S_STATUS_CLKHOLD	(1 << 7)
#define SC3_I2C_S_STATUS_SYNCBUSY	(1 << 15)

#define SC3_I2C_S_STATUS_s    MMIO_REG(0x42001410, struct __struct_SC3_I2C_S_STATUS)
struct __struct_SC3_I2C_S_STATUS
{
  uint16_t buserr : 1;
  uint16_t coll : 1;
  uint16_t rxnack : 1;
  uint16_t dir : 1;
  uint16_t sr : 1;
  uint16_t  : 1;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC3_I2C_S_ADDR	MMIO_REG(0x42001414, uint32_t)
#define SC3_I2C_S_ADDR_GENCEN	(1 << 0)
#define SC3_I2C_S_ADDR_ADDR(x)	((x) << 1)
#define SC3_I2C_S_ADDR_ADDR_MSK	0x000000fe
#define SC3_I2C_S_ADDR_ADDR_VAL(x)	(((x) >> 1) & 0x7f)
#define SC3_I2C_S_ADDR_ADDRMASK(x)	((x) << 17)
#define SC3_I2C_S_ADDR_ADDRMASK_MSK	0x00fe0000
#define SC3_I2C_S_ADDR_ADDRMASK_VAL(x)	(((x) >> 17) & 0x7f)

#define SC3_I2C_S_ADDR_s    MMIO_REG(0x42001414, struct __struct_SC3_I2C_S_ADDR)
struct __struct_SC3_I2C_S_ADDR
{
  uint32_t gencen : 1;
  uint32_t addr : 7;
  uint32_t  : 9;
  uint32_t addrmask : 7;
  uint32_t  : 8;
};

#define SC3_I2C_S_DATA	MMIO_REG(0x42001418, uint16_t)
#define SC3_I2C_S_DATA_DATA(x)	((x) << 0)
#define SC3_I2C_S_DATA_DATA_MSK	0x000000ff
#define SC3_I2C_S_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC3_I2C_S_DATA_s    MMIO_REG(0x42001418, struct __struct_SC3_I2C_S_DATA)
struct __struct_SC3_I2C_S_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42001400 SC3_I2C_M

#define SC3_I2C_M_CTRLA	MMIO_REG(0x42001400, uint32_t)
#define SC3_I2C_M_CTRLA_SWRST	(1 << 0)
#define SC3_I2C_M_CTRLA_ENABLE	(1 << 1)
#define SC3_I2C_M_CTRLA_MODE(x)	((x) << 2)
#define SC3_I2C_M_CTRLA_MODE_MSK	0x0000001c
#define SC3_I2C_M_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC3_I2C_M_CTRLA_RUNSTDBY	(1 << 7)
#define SC3_I2C_M_CTRLA_PINOUT	(1 << 16)
#define SC3_I2C_M_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC3_I2C_M_CTRLA_SDAHOLD_MSK	0x00300000
#define SC3_I2C_M_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC3_I2C_M_CTRLA_INACTOUT(x)	((x) << 28)
#define SC3_I2C_M_CTRLA_INACTOUT_MSK	0x30000000
#define SC3_I2C_M_CTRLA_INACTOUT_VAL(x)	(((x) >> 28) & 0x3)
#define SC3_I2C_M_CTRLA_LOWTOUT	(1 << 30)

#define SC3_I2C_M_CTRLA_s    MMIO_REG(0x42001400, struct __struct_SC3_I2C_M_CTRLA)
struct __struct_SC3_I2C_M_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 6;
  uint32_t inactout : 2;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC3_I2C_M_CTRLB	MMIO_REG(0x42001404, uint32_t)
#define SC3_I2C_M_CTRLB_SMEN	(1 << 8)
#define SC3_I2C_M_CTRLB_QCEN	(1 << 9)
#define SC3_I2C_M_CTRLB_CMD(x)	((x) << 16)
#define SC3_I2C_M_CTRLB_CMD_MSK	0x00030000
#define SC3_I2C_M_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC3_I2C_M_CTRLB_ACKACT	(1 << 18)

#define SC3_I2C_M_CTRLB_s    MMIO_REG(0x42001404, struct __struct_SC3_I2C_M_CTRLB)
struct __struct_SC3_I2C_M_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t qcen : 1;
  uint32_t  : 6;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC3_I2C_M_DBGCTRL	MMIO_REG(0x42001408, uint8_t)
#define SC3_I2C_M_DBGCTRL_DBGSTOP	(1 << 0)

#define SC3_I2C_M_DBGCTRL_s    MMIO_REG(0x42001408, struct __struct_SC3_I2C_M_DBGCTRL)
struct __struct_SC3_I2C_M_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC3_I2C_M_BAUD	MMIO_REG(0x4200140a, uint16_t)
#define SC3_I2C_M_BAUD_BAUD(x)	((x) << 0)
#define SC3_I2C_M_BAUD_BAUD_MSK	0x000000ff
#define SC3_I2C_M_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)
#define SC3_I2C_M_BAUD_BAUDLOW(x)	((x) << 8)
#define SC3_I2C_M_BAUD_BAUDLOW_MSK	0x0000ff00
#define SC3_I2C_M_BAUD_BAUDLOW_VAL(x)	(((x) >> 8) & 0xff)

#define SC3_I2C_M_BAUD_s    MMIO_REG(0x4200140a, struct __struct_SC3_I2C_M_BAUD)
struct __struct_SC3_I2C_M_BAUD
{
  uint16_t baud : 8;
  uint16_t baudlow : 8;
};

#define SC3_I2C_M_INTENCLR	MMIO_REG(0x4200140c, uint8_t)
#define SC3_I2C_M_INTENCLR_MB	(1 << 0)
#define SC3_I2C_M_INTENCLR_SB	(1 << 1)

#define SC3_I2C_M_INTENCLR_s    MMIO_REG(0x4200140c, struct __struct_SC3_I2C_M_INTENCLR)
struct __struct_SC3_I2C_M_INTENCLR
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC3_I2C_M_INTENSET	MMIO_REG(0x4200140d, uint8_t)
#define SC3_I2C_M_INTENSET_MB	(1 << 0)
#define SC3_I2C_M_INTENSET_SB	(1 << 1)

#define SC3_I2C_M_INTENSET_s    MMIO_REG(0x4200140d, struct __struct_SC3_I2C_M_INTENSET)
struct __struct_SC3_I2C_M_INTENSET
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC3_I2C_M_INTFLAG	MMIO_REG(0x4200140e, uint8_t)
#define SC3_I2C_M_INTFLAG_MB	(1 << 0)
#define SC3_I2C_M_INTFLAG_SB	(1 << 1)

#define SC3_I2C_M_INTFLAG_s    MMIO_REG(0x4200140e, struct __struct_SC3_I2C_M_INTFLAG)
struct __struct_SC3_I2C_M_INTFLAG
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC3_I2C_M_STATUS	MMIO_REG(0x42001410, uint16_t)
#define SC3_I2C_M_STATUS_BUSERR	(1 << 0)
#define SC3_I2C_M_STATUS_ARBLOST	(1 << 1)
#define SC3_I2C_M_STATUS_RXNACK	(1 << 2)
#define SC3_I2C_M_STATUS_BUSSTATE(x)	((x) << 4)
#define SC3_I2C_M_STATUS_BUSSTATE_MSK	0x00000030
#define SC3_I2C_M_STATUS_BUSSTATE_VAL(x)	(((x) >> 4) & 0x3)
#define SC3_I2C_M_STATUS_LOWTOUT	(1 << 6)
#define SC3_I2C_M_STATUS_CLKHOLD	(1 << 7)
#define SC3_I2C_M_STATUS_SYNCBUSY	(1 << 15)

#define SC3_I2C_M_STATUS_s    MMIO_REG(0x42001410, struct __struct_SC3_I2C_M_STATUS)
struct __struct_SC3_I2C_M_STATUS
{
  uint16_t buserr : 1;
  uint16_t arblost : 1;
  uint16_t rxnack : 1;
  uint16_t  : 1;
  uint16_t busstate : 2;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC3_I2C_M_ADDR	MMIO_REG(0x42001414, uint16_t)
#define SC3_I2C_M_ADDR_ADDR(x)	((x) << 0)
#define SC3_I2C_M_ADDR_ADDR_MSK	0x000000ff
#define SC3_I2C_M_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)

#define SC3_I2C_M_ADDR_s    MMIO_REG(0x42001414, struct __struct_SC3_I2C_M_ADDR)
struct __struct_SC3_I2C_M_ADDR
{
  uint16_t addr : 8;
  uint16_t  : 8;
};

#define SC3_I2C_M_DATA	MMIO_REG(0x42001418, uint16_t)
#define SC3_I2C_M_DATA_DATA(x)	((x) << 0)
#define SC3_I2C_M_DATA_DATA_MSK	0x000000ff
#define SC3_I2C_M_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC3_I2C_M_DATA_s    MMIO_REG(0x42001418, struct __struct_SC3_I2C_M_DATA)
struct __struct_SC3_I2C_M_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42001800 SC4_USART

#define SC4_USART_CTRLA	MMIO_REG(0x42001800, uint32_t)
#define SC4_USART_CTRLA_SWRST	(1 << 0)
#define SC4_USART_CTRLA_ENABLE	(1 << 1)
#define SC4_USART_CTRLA_MODE(x)	((x) << 2)
#define SC4_USART_CTRLA_MODE_MSK	0x0000001c
#define SC4_USART_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC4_USART_CTRLA_RUNSTDBY	(1 << 7)
#define SC4_USART_CTRLA_TXPO	(1 << 16)
#define SC4_USART_CTRLA_RXPO(x)	((x) << 20)
#define SC4_USART_CTRLA_RXPO_MSK	0x00300000
#define SC4_USART_CTRLA_RXPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC4_USART_CTRLA_FORM(x)	((x) << 24)
#define SC4_USART_CTRLA_FORM_MSK	0x0f000000
#define SC4_USART_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC4_USART_CTRLA_CMODE	(1 << 28)
#define SC4_USART_CTRLA_CPOL	(1 << 29)
#define SC4_USART_CTRLA_DORD	(1 << 30)

#define SC4_USART_CTRLA_s    MMIO_REG(0x42001800, struct __struct_SC4_USART_CTRLA)
struct __struct_SC4_USART_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t txpo : 1;
  uint32_t  : 3;
  uint32_t rxpo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cmode : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC4_USART_CTRLB	MMIO_REG(0x42001804, uint32_t)
#define SC4_USART_CTRLB_CHSIZE(x)	((x) << 0)
#define SC4_USART_CTRLB_CHSIZE_MSK	0x00000007
#define SC4_USART_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC4_USART_CTRLB_SBMODE	(1 << 6)
#define SC4_USART_CTRLB_PMODE	(1 << 13)
#define SC4_USART_CTRLB_TXEN	(1 << 16)
#define SC4_USART_CTRLB_RXEN	(1 << 17)

#define SC4_USART_CTRLB_s    MMIO_REG(0x42001804, struct __struct_SC4_USART_CTRLB)
struct __struct_SC4_USART_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t sbmode : 1;
  uint32_t  : 6;
  uint32_t pmode : 1;
  uint32_t  : 2;
  uint32_t txen : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC4_USART_DBGCTRL	MMIO_REG(0x42001808, uint8_t)
#define SC4_USART_DBGCTRL_DBGSTOP	(1 << 0)

#define SC4_USART_DBGCTRL_s    MMIO_REG(0x42001808, struct __struct_SC4_USART_DBGCTRL)
struct __struct_SC4_USART_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC4_USART_BAUD	MMIO_REG(0x4200180a, uint16_t)
#define SC4_USART_BAUD_BAUD(x)	((x) << 0)
#define SC4_USART_BAUD_BAUD_MSK	0x0000ffff
#define SC4_USART_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xffff)

#define SC4_USART_BAUD_s    MMIO_REG(0x4200180a, struct __struct_SC4_USART_BAUD)
struct __struct_SC4_USART_BAUD
{
  uint16_t baud : 16;
};

#define SC4_USART_INTENCLR	MMIO_REG(0x4200180c, uint8_t)
#define SC4_USART_INTENCLR_DRE	(1 << 0)
#define SC4_USART_INTENCLR_TXC	(1 << 1)
#define SC4_USART_INTENCLR_RXC	(1 << 2)

#define SC4_USART_INTENCLR_s    MMIO_REG(0x4200180c, struct __struct_SC4_USART_INTENCLR)
struct __struct_SC4_USART_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC4_USART_INTENSET	MMIO_REG(0x4200180d, uint8_t)
#define SC4_USART_INTENSET_DRE	(1 << 0)
#define SC4_USART_INTENSET_TXC	(1 << 1)
#define SC4_USART_INTENSET_RXC	(1 << 2)

#define SC4_USART_INTENSET_s    MMIO_REG(0x4200180d, struct __struct_SC4_USART_INTENSET)
struct __struct_SC4_USART_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC4_USART_INTFLAG	MMIO_REG(0x4200180e, uint8_t)
#define SC4_USART_INTFLAG_DRE	(1 << 0)
#define SC4_USART_INTFLAG_TXC	(1 << 1)
#define SC4_USART_INTFLAG_RXC	(1 << 2)

#define SC4_USART_INTFLAG_s    MMIO_REG(0x4200180e, struct __struct_SC4_USART_INTFLAG)
struct __struct_SC4_USART_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC4_USART_STATUS	MMIO_REG(0x42001810, uint16_t)
#define SC4_USART_STATUS_PERR	(1 << 0)
#define SC4_USART_STATUS_FERR	(1 << 1)
#define SC4_USART_STATUS_BUFOVF	(1 << 2)
#define SC4_USART_STATUS_SYNCBUSY	(1 << 15)

#define SC4_USART_STATUS_s    MMIO_REG(0x42001810, struct __struct_SC4_USART_STATUS)
struct __struct_SC4_USART_STATUS
{
  uint16_t perr : 1;
  uint16_t ferr : 1;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC4_USART_DATA	MMIO_REG(0x42001818, uint16_t)
#define SC4_USART_DATA_DATA(x)	((x) << 0)
#define SC4_USART_DATA_DATA_MSK	0x000001ff
#define SC4_USART_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC4_USART_DATA_s    MMIO_REG(0x42001818, struct __struct_SC4_USART_DATA)
struct __struct_SC4_USART_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42001800 SC4_SPI

#define SC4_SPI_CTRLA	MMIO_REG(0x42001800, uint32_t)
#define SC4_SPI_CTRLA_SWRST	(1 << 0)
#define SC4_SPI_CTRLA_ENABLE	(1 << 1)
#define SC4_SPI_CTRLA_MODE(x)	((x) << 2)
#define SC4_SPI_CTRLA_MODE_MSK	0x0000001c
#define SC4_SPI_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC4_SPI_CTRLA_RUNSTDBY	(1 << 7)
#define SC4_SPI_CTRLA_DOPO	(1 << 16)
#define SC4_SPI_CTRLA_DIPO(x)	((x) << 20)
#define SC4_SPI_CTRLA_DIPO_MSK	0x00300000
#define SC4_SPI_CTRLA_DIPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC4_SPI_CTRLA_FORM(x)	((x) << 24)
#define SC4_SPI_CTRLA_FORM_MSK	0x0f000000
#define SC4_SPI_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC4_SPI_CTRLA_CPHA	(1 << 28)
#define SC4_SPI_CTRLA_CPOL	(1 << 29)
#define SC4_SPI_CTRLA_DORD	(1 << 30)

#define SC4_SPI_CTRLA_s    MMIO_REG(0x42001800, struct __struct_SC4_SPI_CTRLA)
struct __struct_SC4_SPI_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t dopo : 1;
  uint32_t  : 3;
  uint32_t dipo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cpha : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC4_SPI_CTRLB	MMIO_REG(0x42001804, uint32_t)
#define SC4_SPI_CTRLB_CHSIZE(x)	((x) << 0)
#define SC4_SPI_CTRLB_CHSIZE_MSK	0x00000007
#define SC4_SPI_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC4_SPI_CTRLB_PLOADEN	(1 << 6)
#define SC4_SPI_CTRLB_AMODE(x)	((x) << 14)
#define SC4_SPI_CTRLB_AMODE_MSK	0x0000c000
#define SC4_SPI_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC4_SPI_CTRLB_RXEN	(1 << 17)

#define SC4_SPI_CTRLB_s    MMIO_REG(0x42001804, struct __struct_SC4_SPI_CTRLB)
struct __struct_SC4_SPI_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t ploaden : 1;
  uint32_t  : 7;
  uint32_t amode : 2;
  uint32_t  : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC4_SPI_DBGCTRL	MMIO_REG(0x42001808, uint8_t)
#define SC4_SPI_DBGCTRL_DBGSTOP	(1 << 0)

#define SC4_SPI_DBGCTRL_s    MMIO_REG(0x42001808, struct __struct_SC4_SPI_DBGCTRL)
struct __struct_SC4_SPI_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC4_SPI_BAUD	MMIO_REG(0x4200180a, uint8_t)
#define SC4_SPI_BAUD_BAUD(x)	((x) << 0)
#define SC4_SPI_BAUD_BAUD_MSK	0x000000ff
#define SC4_SPI_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)

#define SC4_SPI_BAUD_s    MMIO_REG(0x4200180a, struct __struct_SC4_SPI_BAUD)
struct __struct_SC4_SPI_BAUD
{
  uint8_t baud : 8;
};

#define SC4_SPI_INTENCLR	MMIO_REG(0x4200180c, uint8_t)
#define SC4_SPI_INTENCLR_DRE	(1 << 0)
#define SC4_SPI_INTENCLR_TXC	(1 << 1)
#define SC4_SPI_INTENCLR_RXC	(1 << 2)

#define SC4_SPI_INTENCLR_s    MMIO_REG(0x4200180c, struct __struct_SC4_SPI_INTENCLR)
struct __struct_SC4_SPI_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC4_SPI_INTENSET	MMIO_REG(0x4200180d, uint8_t)
#define SC4_SPI_INTENSET_DRE	(1 << 0)
#define SC4_SPI_INTENSET_TXC	(1 << 1)
#define SC4_SPI_INTENSET_RXC	(1 << 2)

#define SC4_SPI_INTENSET_s    MMIO_REG(0x4200180d, struct __struct_SC4_SPI_INTENSET)
struct __struct_SC4_SPI_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC4_SPI_INTFLAG	MMIO_REG(0x4200180e, uint8_t)
#define SC4_SPI_INTFLAG_DRE	(1 << 0)
#define SC4_SPI_INTFLAG_TXC	(1 << 1)
#define SC4_SPI_INTFLAG_RXC	(1 << 2)

#define SC4_SPI_INTFLAG_s    MMIO_REG(0x4200180e, struct __struct_SC4_SPI_INTFLAG)
struct __struct_SC4_SPI_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC4_SPI_STATUS	MMIO_REG(0x42001810, uint16_t)
#define SC4_SPI_STATUS_BUFOVF	(1 << 2)
#define SC4_SPI_STATUS_SYNCBUSY	(1 << 15)

#define SC4_SPI_STATUS_s    MMIO_REG(0x42001810, struct __struct_SC4_SPI_STATUS)
struct __struct_SC4_SPI_STATUS
{
  uint16_t  : 2;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC4_SPI_ADDR	MMIO_REG(0x42001814, uint32_t)
#define SC4_SPI_ADDR_ADDR(x)	((x) << 0)
#define SC4_SPI_ADDR_ADDR_MSK	0x000000ff
#define SC4_SPI_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)
#define SC4_SPI_ADDR_ADDRMASK(x)	((x) << 16)
#define SC4_SPI_ADDR_ADDRMASK_MSK	0x00ff0000
#define SC4_SPI_ADDR_ADDRMASK_VAL(x)	(((x) >> 16) & 0xff)

#define SC4_SPI_ADDR_s    MMIO_REG(0x42001814, struct __struct_SC4_SPI_ADDR)
struct __struct_SC4_SPI_ADDR
{
  uint32_t addr : 8;
  uint32_t  : 8;
  uint32_t addrmask : 8;
  uint32_t  : 8;
};

#define SC4_SPI_DATA	MMIO_REG(0x42001818, uint16_t)
#define SC4_SPI_DATA_DATA(x)	((x) << 0)
#define SC4_SPI_DATA_DATA_MSK	0x000001ff
#define SC4_SPI_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC4_SPI_DATA_s    MMIO_REG(0x42001818, struct __struct_SC4_SPI_DATA)
struct __struct_SC4_SPI_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42001800 SC4_I2C_S

#define SC4_I2C_S_CTRLA	MMIO_REG(0x42001800, uint32_t)
#define SC4_I2C_S_CTRLA_SWRST	(1 << 0)
#define SC4_I2C_S_CTRLA_ENABLE	(1 << 1)
#define SC4_I2C_S_CTRLA_MODE(x)	((x) << 2)
#define SC4_I2C_S_CTRLA_MODE_MSK	0x0000001c
#define SC4_I2C_S_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC4_I2C_S_CTRLA_RUNSTDBY	(1 << 7)
#define SC4_I2C_S_CTRLA_PINOUT	(1 << 16)
#define SC4_I2C_S_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC4_I2C_S_CTRLA_SDAHOLD_MSK	0x00300000
#define SC4_I2C_S_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC4_I2C_S_CTRLA_LOWTOUT	(1 << 30)

#define SC4_I2C_S_CTRLA_s    MMIO_REG(0x42001800, struct __struct_SC4_I2C_S_CTRLA)
struct __struct_SC4_I2C_S_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 8;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC4_I2C_S_CTRLB	MMIO_REG(0x42001804, uint32_t)
#define SC4_I2C_S_CTRLB_SMEN	(1 << 8)
#define SC4_I2C_S_CTRLB_AMODE(x)	((x) << 14)
#define SC4_I2C_S_CTRLB_AMODE_MSK	0x0000c000
#define SC4_I2C_S_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC4_I2C_S_CTRLB_CMD(x)	((x) << 16)
#define SC4_I2C_S_CTRLB_CMD_MSK	0x00030000
#define SC4_I2C_S_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC4_I2C_S_CTRLB_ACKACT	(1 << 18)

#define SC4_I2C_S_CTRLB_s    MMIO_REG(0x42001804, struct __struct_SC4_I2C_S_CTRLB)
struct __struct_SC4_I2C_S_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t  : 5;
  uint32_t amode : 2;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC4_I2C_S_INTENCLR	MMIO_REG(0x4200180c, uint8_t)
#define SC4_I2C_S_INTENCLR_PREC	(1 << 0)
#define SC4_I2C_S_INTENCLR_AMATCH	(1 << 1)
#define SC4_I2C_S_INTENCLR_DRDY	(1 << 2)

#define SC4_I2C_S_INTENCLR_s    MMIO_REG(0x4200180c, struct __struct_SC4_I2C_S_INTENCLR)
struct __struct_SC4_I2C_S_INTENCLR
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC4_I2C_S_INTENSET	MMIO_REG(0x4200180d, uint8_t)
#define SC4_I2C_S_INTENSET_PREC	(1 << 0)
#define SC4_I2C_S_INTENSET_AMATCH	(1 << 1)
#define SC4_I2C_S_INTENSET_DRDY	(1 << 2)

#define SC4_I2C_S_INTENSET_s    MMIO_REG(0x4200180d, struct __struct_SC4_I2C_S_INTENSET)
struct __struct_SC4_I2C_S_INTENSET
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC4_I2C_S_INTFLAG	MMIO_REG(0x4200180e, uint8_t)
#define SC4_I2C_S_INTFLAG_PREC	(1 << 0)
#define SC4_I2C_S_INTFLAG_AMATCH	(1 << 1)
#define SC4_I2C_S_INTFLAG_DRDY	(1 << 2)

#define SC4_I2C_S_INTFLAG_s    MMIO_REG(0x4200180e, struct __struct_SC4_I2C_S_INTFLAG)
struct __struct_SC4_I2C_S_INTFLAG
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC4_I2C_S_STATUS	MMIO_REG(0x42001810, uint16_t)
#define SC4_I2C_S_STATUS_BUSERR	(1 << 0)
#define SC4_I2C_S_STATUS_COLL	(1 << 1)
#define SC4_I2C_S_STATUS_RXNACK	(1 << 2)
#define SC4_I2C_S_STATUS_DIR	(1 << 3)
#define SC4_I2C_S_STATUS_SR	(1 << 4)
#define SC4_I2C_S_STATUS_LOWTOUT	(1 << 6)
#define SC4_I2C_S_STATUS_CLKHOLD	(1 << 7)
#define SC4_I2C_S_STATUS_SYNCBUSY	(1 << 15)

#define SC4_I2C_S_STATUS_s    MMIO_REG(0x42001810, struct __struct_SC4_I2C_S_STATUS)
struct __struct_SC4_I2C_S_STATUS
{
  uint16_t buserr : 1;
  uint16_t coll : 1;
  uint16_t rxnack : 1;
  uint16_t dir : 1;
  uint16_t sr : 1;
  uint16_t  : 1;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC4_I2C_S_ADDR	MMIO_REG(0x42001814, uint32_t)
#define SC4_I2C_S_ADDR_GENCEN	(1 << 0)
#define SC4_I2C_S_ADDR_ADDR(x)	((x) << 1)
#define SC4_I2C_S_ADDR_ADDR_MSK	0x000000fe
#define SC4_I2C_S_ADDR_ADDR_VAL(x)	(((x) >> 1) & 0x7f)
#define SC4_I2C_S_ADDR_ADDRMASK(x)	((x) << 17)
#define SC4_I2C_S_ADDR_ADDRMASK_MSK	0x00fe0000
#define SC4_I2C_S_ADDR_ADDRMASK_VAL(x)	(((x) >> 17) & 0x7f)

#define SC4_I2C_S_ADDR_s    MMIO_REG(0x42001814, struct __struct_SC4_I2C_S_ADDR)
struct __struct_SC4_I2C_S_ADDR
{
  uint32_t gencen : 1;
  uint32_t addr : 7;
  uint32_t  : 9;
  uint32_t addrmask : 7;
  uint32_t  : 8;
};

#define SC4_I2C_S_DATA	MMIO_REG(0x42001818, uint16_t)
#define SC4_I2C_S_DATA_DATA(x)	((x) << 0)
#define SC4_I2C_S_DATA_DATA_MSK	0x000000ff
#define SC4_I2C_S_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC4_I2C_S_DATA_s    MMIO_REG(0x42001818, struct __struct_SC4_I2C_S_DATA)
struct __struct_SC4_I2C_S_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42001800 SC4_I2C_M

#define SC4_I2C_M_CTRLA	MMIO_REG(0x42001800, uint32_t)
#define SC4_I2C_M_CTRLA_SWRST	(1 << 0)
#define SC4_I2C_M_CTRLA_ENABLE	(1 << 1)
#define SC4_I2C_M_CTRLA_MODE(x)	((x) << 2)
#define SC4_I2C_M_CTRLA_MODE_MSK	0x0000001c
#define SC4_I2C_M_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC4_I2C_M_CTRLA_RUNSTDBY	(1 << 7)
#define SC4_I2C_M_CTRLA_PINOUT	(1 << 16)
#define SC4_I2C_M_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC4_I2C_M_CTRLA_SDAHOLD_MSK	0x00300000
#define SC4_I2C_M_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC4_I2C_M_CTRLA_INACTOUT(x)	((x) << 28)
#define SC4_I2C_M_CTRLA_INACTOUT_MSK	0x30000000
#define SC4_I2C_M_CTRLA_INACTOUT_VAL(x)	(((x) >> 28) & 0x3)
#define SC4_I2C_M_CTRLA_LOWTOUT	(1 << 30)

#define SC4_I2C_M_CTRLA_s    MMIO_REG(0x42001800, struct __struct_SC4_I2C_M_CTRLA)
struct __struct_SC4_I2C_M_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 6;
  uint32_t inactout : 2;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC4_I2C_M_CTRLB	MMIO_REG(0x42001804, uint32_t)
#define SC4_I2C_M_CTRLB_SMEN	(1 << 8)
#define SC4_I2C_M_CTRLB_QCEN	(1 << 9)
#define SC4_I2C_M_CTRLB_CMD(x)	((x) << 16)
#define SC4_I2C_M_CTRLB_CMD_MSK	0x00030000
#define SC4_I2C_M_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC4_I2C_M_CTRLB_ACKACT	(1 << 18)

#define SC4_I2C_M_CTRLB_s    MMIO_REG(0x42001804, struct __struct_SC4_I2C_M_CTRLB)
struct __struct_SC4_I2C_M_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t qcen : 1;
  uint32_t  : 6;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC4_I2C_M_DBGCTRL	MMIO_REG(0x42001808, uint8_t)
#define SC4_I2C_M_DBGCTRL_DBGSTOP	(1 << 0)

#define SC4_I2C_M_DBGCTRL_s    MMIO_REG(0x42001808, struct __struct_SC4_I2C_M_DBGCTRL)
struct __struct_SC4_I2C_M_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC4_I2C_M_BAUD	MMIO_REG(0x4200180a, uint16_t)
#define SC4_I2C_M_BAUD_BAUD(x)	((x) << 0)
#define SC4_I2C_M_BAUD_BAUD_MSK	0x000000ff
#define SC4_I2C_M_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)
#define SC4_I2C_M_BAUD_BAUDLOW(x)	((x) << 8)
#define SC4_I2C_M_BAUD_BAUDLOW_MSK	0x0000ff00
#define SC4_I2C_M_BAUD_BAUDLOW_VAL(x)	(((x) >> 8) & 0xff)

#define SC4_I2C_M_BAUD_s    MMIO_REG(0x4200180a, struct __struct_SC4_I2C_M_BAUD)
struct __struct_SC4_I2C_M_BAUD
{
  uint16_t baud : 8;
  uint16_t baudlow : 8;
};

#define SC4_I2C_M_INTENCLR	MMIO_REG(0x4200180c, uint8_t)
#define SC4_I2C_M_INTENCLR_MB	(1 << 0)
#define SC4_I2C_M_INTENCLR_SB	(1 << 1)

#define SC4_I2C_M_INTENCLR_s    MMIO_REG(0x4200180c, struct __struct_SC4_I2C_M_INTENCLR)
struct __struct_SC4_I2C_M_INTENCLR
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC4_I2C_M_INTENSET	MMIO_REG(0x4200180d, uint8_t)
#define SC4_I2C_M_INTENSET_MB	(1 << 0)
#define SC4_I2C_M_INTENSET_SB	(1 << 1)

#define SC4_I2C_M_INTENSET_s    MMIO_REG(0x4200180d, struct __struct_SC4_I2C_M_INTENSET)
struct __struct_SC4_I2C_M_INTENSET
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC4_I2C_M_INTFLAG	MMIO_REG(0x4200180e, uint8_t)
#define SC4_I2C_M_INTFLAG_MB	(1 << 0)
#define SC4_I2C_M_INTFLAG_SB	(1 << 1)

#define SC4_I2C_M_INTFLAG_s    MMIO_REG(0x4200180e, struct __struct_SC4_I2C_M_INTFLAG)
struct __struct_SC4_I2C_M_INTFLAG
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC4_I2C_M_STATUS	MMIO_REG(0x42001810, uint16_t)
#define SC4_I2C_M_STATUS_BUSERR	(1 << 0)
#define SC4_I2C_M_STATUS_ARBLOST	(1 << 1)
#define SC4_I2C_M_STATUS_RXNACK	(1 << 2)
#define SC4_I2C_M_STATUS_BUSSTATE(x)	((x) << 4)
#define SC4_I2C_M_STATUS_BUSSTATE_MSK	0x00000030
#define SC4_I2C_M_STATUS_BUSSTATE_VAL(x)	(((x) >> 4) & 0x3)
#define SC4_I2C_M_STATUS_LOWTOUT	(1 << 6)
#define SC4_I2C_M_STATUS_CLKHOLD	(1 << 7)
#define SC4_I2C_M_STATUS_SYNCBUSY	(1 << 15)

#define SC4_I2C_M_STATUS_s    MMIO_REG(0x42001810, struct __struct_SC4_I2C_M_STATUS)
struct __struct_SC4_I2C_M_STATUS
{
  uint16_t buserr : 1;
  uint16_t arblost : 1;
  uint16_t rxnack : 1;
  uint16_t  : 1;
  uint16_t busstate : 2;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC4_I2C_M_ADDR	MMIO_REG(0x42001814, uint16_t)
#define SC4_I2C_M_ADDR_ADDR(x)	((x) << 0)
#define SC4_I2C_M_ADDR_ADDR_MSK	0x000000ff
#define SC4_I2C_M_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)

#define SC4_I2C_M_ADDR_s    MMIO_REG(0x42001814, struct __struct_SC4_I2C_M_ADDR)
struct __struct_SC4_I2C_M_ADDR
{
  uint16_t addr : 8;
  uint16_t  : 8;
};

#define SC4_I2C_M_DATA	MMIO_REG(0x42001818, uint16_t)
#define SC4_I2C_M_DATA_DATA(x)	((x) << 0)
#define SC4_I2C_M_DATA_DATA_MSK	0x000000ff
#define SC4_I2C_M_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC4_I2C_M_DATA_s    MMIO_REG(0x42001818, struct __struct_SC4_I2C_M_DATA)
struct __struct_SC4_I2C_M_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42001c00 SC5_USART

#define SC5_USART_CTRLA	MMIO_REG(0x42001c00, uint32_t)
#define SC5_USART_CTRLA_SWRST	(1 << 0)
#define SC5_USART_CTRLA_ENABLE	(1 << 1)
#define SC5_USART_CTRLA_MODE(x)	((x) << 2)
#define SC5_USART_CTRLA_MODE_MSK	0x0000001c
#define SC5_USART_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC5_USART_CTRLA_RUNSTDBY	(1 << 7)
#define SC5_USART_CTRLA_TXPO	(1 << 16)
#define SC5_USART_CTRLA_RXPO(x)	((x) << 20)
#define SC5_USART_CTRLA_RXPO_MSK	0x00300000
#define SC5_USART_CTRLA_RXPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC5_USART_CTRLA_FORM(x)	((x) << 24)
#define SC5_USART_CTRLA_FORM_MSK	0x0f000000
#define SC5_USART_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC5_USART_CTRLA_CMODE	(1 << 28)
#define SC5_USART_CTRLA_CPOL	(1 << 29)
#define SC5_USART_CTRLA_DORD	(1 << 30)

#define SC5_USART_CTRLA_s    MMIO_REG(0x42001c00, struct __struct_SC5_USART_CTRLA)
struct __struct_SC5_USART_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t txpo : 1;
  uint32_t  : 3;
  uint32_t rxpo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cmode : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC5_USART_CTRLB	MMIO_REG(0x42001c04, uint32_t)
#define SC5_USART_CTRLB_CHSIZE(x)	((x) << 0)
#define SC5_USART_CTRLB_CHSIZE_MSK	0x00000007
#define SC5_USART_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC5_USART_CTRLB_SBMODE	(1 << 6)
#define SC5_USART_CTRLB_PMODE	(1 << 13)
#define SC5_USART_CTRLB_TXEN	(1 << 16)
#define SC5_USART_CTRLB_RXEN	(1 << 17)

#define SC5_USART_CTRLB_s    MMIO_REG(0x42001c04, struct __struct_SC5_USART_CTRLB)
struct __struct_SC5_USART_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t sbmode : 1;
  uint32_t  : 6;
  uint32_t pmode : 1;
  uint32_t  : 2;
  uint32_t txen : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC5_USART_DBGCTRL	MMIO_REG(0x42001c08, uint8_t)
#define SC5_USART_DBGCTRL_DBGSTOP	(1 << 0)

#define SC5_USART_DBGCTRL_s    MMIO_REG(0x42001c08, struct __struct_SC5_USART_DBGCTRL)
struct __struct_SC5_USART_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC5_USART_BAUD	MMIO_REG(0x42001c0a, uint16_t)
#define SC5_USART_BAUD_BAUD(x)	((x) << 0)
#define SC5_USART_BAUD_BAUD_MSK	0x0000ffff
#define SC5_USART_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xffff)

#define SC5_USART_BAUD_s    MMIO_REG(0x42001c0a, struct __struct_SC5_USART_BAUD)
struct __struct_SC5_USART_BAUD
{
  uint16_t baud : 16;
};

#define SC5_USART_INTENCLR	MMIO_REG(0x42001c0c, uint8_t)
#define SC5_USART_INTENCLR_DRE	(1 << 0)
#define SC5_USART_INTENCLR_TXC	(1 << 1)
#define SC5_USART_INTENCLR_RXC	(1 << 2)

#define SC5_USART_INTENCLR_s    MMIO_REG(0x42001c0c, struct __struct_SC5_USART_INTENCLR)
struct __struct_SC5_USART_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC5_USART_INTENSET	MMIO_REG(0x42001c0d, uint8_t)
#define SC5_USART_INTENSET_DRE	(1 << 0)
#define SC5_USART_INTENSET_TXC	(1 << 1)
#define SC5_USART_INTENSET_RXC	(1 << 2)

#define SC5_USART_INTENSET_s    MMIO_REG(0x42001c0d, struct __struct_SC5_USART_INTENSET)
struct __struct_SC5_USART_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC5_USART_INTFLAG	MMIO_REG(0x42001c0e, uint8_t)
#define SC5_USART_INTFLAG_DRE	(1 << 0)
#define SC5_USART_INTFLAG_TXC	(1 << 1)
#define SC5_USART_INTFLAG_RXC	(1 << 2)

#define SC5_USART_INTFLAG_s    MMIO_REG(0x42001c0e, struct __struct_SC5_USART_INTFLAG)
struct __struct_SC5_USART_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC5_USART_STATUS	MMIO_REG(0x42001c10, uint16_t)
#define SC5_USART_STATUS_PERR	(1 << 0)
#define SC5_USART_STATUS_FERR	(1 << 1)
#define SC5_USART_STATUS_BUFOVF	(1 << 2)
#define SC5_USART_STATUS_SYNCBUSY	(1 << 15)

#define SC5_USART_STATUS_s    MMIO_REG(0x42001c10, struct __struct_SC5_USART_STATUS)
struct __struct_SC5_USART_STATUS
{
  uint16_t perr : 1;
  uint16_t ferr : 1;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC5_USART_DATA	MMIO_REG(0x42001c18, uint16_t)
#define SC5_USART_DATA_DATA(x)	((x) << 0)
#define SC5_USART_DATA_DATA_MSK	0x000001ff
#define SC5_USART_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC5_USART_DATA_s    MMIO_REG(0x42001c18, struct __struct_SC5_USART_DATA)
struct __struct_SC5_USART_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42001c00 SC5_SPI

#define SC5_SPI_CTRLA	MMIO_REG(0x42001c00, uint32_t)
#define SC5_SPI_CTRLA_SWRST	(1 << 0)
#define SC5_SPI_CTRLA_ENABLE	(1 << 1)
#define SC5_SPI_CTRLA_MODE(x)	((x) << 2)
#define SC5_SPI_CTRLA_MODE_MSK	0x0000001c
#define SC5_SPI_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC5_SPI_CTRLA_RUNSTDBY	(1 << 7)
#define SC5_SPI_CTRLA_DOPO	(1 << 16)
#define SC5_SPI_CTRLA_DIPO(x)	((x) << 20)
#define SC5_SPI_CTRLA_DIPO_MSK	0x00300000
#define SC5_SPI_CTRLA_DIPO_VAL(x)	(((x) >> 20) & 0x3)
#define SC5_SPI_CTRLA_FORM(x)	((x) << 24)
#define SC5_SPI_CTRLA_FORM_MSK	0x0f000000
#define SC5_SPI_CTRLA_FORM_VAL(x)	(((x) >> 24) & 0xf)
#define SC5_SPI_CTRLA_CPHA	(1 << 28)
#define SC5_SPI_CTRLA_CPOL	(1 << 29)
#define SC5_SPI_CTRLA_DORD	(1 << 30)

#define SC5_SPI_CTRLA_s    MMIO_REG(0x42001c00, struct __struct_SC5_SPI_CTRLA)
struct __struct_SC5_SPI_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t dopo : 1;
  uint32_t  : 3;
  uint32_t dipo : 2;
  uint32_t  : 2;
  uint32_t form : 4;
  uint32_t cpha : 1;
  uint32_t cpol : 1;
  uint32_t dord : 1;
  uint32_t  : 1;
};

#define SC5_SPI_CTRLB	MMIO_REG(0x42001c04, uint32_t)
#define SC5_SPI_CTRLB_CHSIZE(x)	((x) << 0)
#define SC5_SPI_CTRLB_CHSIZE_MSK	0x00000007
#define SC5_SPI_CTRLB_CHSIZE_VAL(x)	(((x) >> 0) & 0x7)
#define SC5_SPI_CTRLB_PLOADEN	(1 << 6)
#define SC5_SPI_CTRLB_AMODE(x)	((x) << 14)
#define SC5_SPI_CTRLB_AMODE_MSK	0x0000c000
#define SC5_SPI_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC5_SPI_CTRLB_RXEN	(1 << 17)

#define SC5_SPI_CTRLB_s    MMIO_REG(0x42001c04, struct __struct_SC5_SPI_CTRLB)
struct __struct_SC5_SPI_CTRLB
{
  uint32_t chsize : 3;
  uint32_t  : 3;
  uint32_t ploaden : 1;
  uint32_t  : 7;
  uint32_t amode : 2;
  uint32_t  : 1;
  uint32_t rxen : 1;
  uint32_t  : 14;
};

#define SC5_SPI_DBGCTRL	MMIO_REG(0x42001c08, uint8_t)
#define SC5_SPI_DBGCTRL_DBGSTOP	(1 << 0)

#define SC5_SPI_DBGCTRL_s    MMIO_REG(0x42001c08, struct __struct_SC5_SPI_DBGCTRL)
struct __struct_SC5_SPI_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC5_SPI_BAUD	MMIO_REG(0x42001c0a, uint8_t)
#define SC5_SPI_BAUD_BAUD(x)	((x) << 0)
#define SC5_SPI_BAUD_BAUD_MSK	0x000000ff
#define SC5_SPI_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)

#define SC5_SPI_BAUD_s    MMIO_REG(0x42001c0a, struct __struct_SC5_SPI_BAUD)
struct __struct_SC5_SPI_BAUD
{
  uint8_t baud : 8;
};

#define SC5_SPI_INTENCLR	MMIO_REG(0x42001c0c, uint8_t)
#define SC5_SPI_INTENCLR_DRE	(1 << 0)
#define SC5_SPI_INTENCLR_TXC	(1 << 1)
#define SC5_SPI_INTENCLR_RXC	(1 << 2)

#define SC5_SPI_INTENCLR_s    MMIO_REG(0x42001c0c, struct __struct_SC5_SPI_INTENCLR)
struct __struct_SC5_SPI_INTENCLR
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC5_SPI_INTENSET	MMIO_REG(0x42001c0d, uint8_t)
#define SC5_SPI_INTENSET_DRE	(1 << 0)
#define SC5_SPI_INTENSET_TXC	(1 << 1)
#define SC5_SPI_INTENSET_RXC	(1 << 2)

#define SC5_SPI_INTENSET_s    MMIO_REG(0x42001c0d, struct __struct_SC5_SPI_INTENSET)
struct __struct_SC5_SPI_INTENSET
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC5_SPI_INTFLAG	MMIO_REG(0x42001c0e, uint8_t)
#define SC5_SPI_INTFLAG_DRE	(1 << 0)
#define SC5_SPI_INTFLAG_TXC	(1 << 1)
#define SC5_SPI_INTFLAG_RXC	(1 << 2)

#define SC5_SPI_INTFLAG_s    MMIO_REG(0x42001c0e, struct __struct_SC5_SPI_INTFLAG)
struct __struct_SC5_SPI_INTFLAG
{
  uint8_t dre : 1;
  uint8_t txc : 1;
  uint8_t rxc : 1;
  uint8_t  : 5;
};

#define SC5_SPI_STATUS	MMIO_REG(0x42001c10, uint16_t)
#define SC5_SPI_STATUS_BUFOVF	(1 << 2)
#define SC5_SPI_STATUS_SYNCBUSY	(1 << 15)

#define SC5_SPI_STATUS_s    MMIO_REG(0x42001c10, struct __struct_SC5_SPI_STATUS)
struct __struct_SC5_SPI_STATUS
{
  uint16_t  : 2;
  uint16_t bufovf : 1;
  uint16_t  : 12;
  uint16_t syncbusy : 1;
};

#define SC5_SPI_ADDR	MMIO_REG(0x42001c14, uint32_t)
#define SC5_SPI_ADDR_ADDR(x)	((x) << 0)
#define SC5_SPI_ADDR_ADDR_MSK	0x000000ff
#define SC5_SPI_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)
#define SC5_SPI_ADDR_ADDRMASK(x)	((x) << 16)
#define SC5_SPI_ADDR_ADDRMASK_MSK	0x00ff0000
#define SC5_SPI_ADDR_ADDRMASK_VAL(x)	(((x) >> 16) & 0xff)

#define SC5_SPI_ADDR_s    MMIO_REG(0x42001c14, struct __struct_SC5_SPI_ADDR)
struct __struct_SC5_SPI_ADDR
{
  uint32_t addr : 8;
  uint32_t  : 8;
  uint32_t addrmask : 8;
  uint32_t  : 8;
};

#define SC5_SPI_DATA	MMIO_REG(0x42001c18, uint16_t)
#define SC5_SPI_DATA_DATA(x)	((x) << 0)
#define SC5_SPI_DATA_DATA_MSK	0x000001ff
#define SC5_SPI_DATA_DATA_VAL(x)	(((x) >> 0) & 0x1ff)

#define SC5_SPI_DATA_s    MMIO_REG(0x42001c18, struct __struct_SC5_SPI_DATA)
struct __struct_SC5_SPI_DATA
{
  uint16_t data : 9;
  uint16_t  : 7;
};

// 0x42001c00 SC5_I2C_S

#define SC5_I2C_S_CTRLA	MMIO_REG(0x42001c00, uint32_t)
#define SC5_I2C_S_CTRLA_SWRST	(1 << 0)
#define SC5_I2C_S_CTRLA_ENABLE	(1 << 1)
#define SC5_I2C_S_CTRLA_MODE(x)	((x) << 2)
#define SC5_I2C_S_CTRLA_MODE_MSK	0x0000001c
#define SC5_I2C_S_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC5_I2C_S_CTRLA_RUNSTDBY	(1 << 7)
#define SC5_I2C_S_CTRLA_PINOUT	(1 << 16)
#define SC5_I2C_S_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC5_I2C_S_CTRLA_SDAHOLD_MSK	0x00300000
#define SC5_I2C_S_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC5_I2C_S_CTRLA_LOWTOUT	(1 << 30)

#define SC5_I2C_S_CTRLA_s    MMIO_REG(0x42001c00, struct __struct_SC5_I2C_S_CTRLA)
struct __struct_SC5_I2C_S_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 8;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC5_I2C_S_CTRLB	MMIO_REG(0x42001c04, uint32_t)
#define SC5_I2C_S_CTRLB_SMEN	(1 << 8)
#define SC5_I2C_S_CTRLB_AMODE(x)	((x) << 14)
#define SC5_I2C_S_CTRLB_AMODE_MSK	0x0000c000
#define SC5_I2C_S_CTRLB_AMODE_VAL(x)	(((x) >> 14) & 0x3)
#define SC5_I2C_S_CTRLB_CMD(x)	((x) << 16)
#define SC5_I2C_S_CTRLB_CMD_MSK	0x00030000
#define SC5_I2C_S_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC5_I2C_S_CTRLB_ACKACT	(1 << 18)

#define SC5_I2C_S_CTRLB_s    MMIO_REG(0x42001c04, struct __struct_SC5_I2C_S_CTRLB)
struct __struct_SC5_I2C_S_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t  : 5;
  uint32_t amode : 2;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC5_I2C_S_INTENCLR	MMIO_REG(0x42001c0c, uint8_t)
#define SC5_I2C_S_INTENCLR_PREC	(1 << 0)
#define SC5_I2C_S_INTENCLR_AMATCH	(1 << 1)
#define SC5_I2C_S_INTENCLR_DRDY	(1 << 2)

#define SC5_I2C_S_INTENCLR_s    MMIO_REG(0x42001c0c, struct __struct_SC5_I2C_S_INTENCLR)
struct __struct_SC5_I2C_S_INTENCLR
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC5_I2C_S_INTENSET	MMIO_REG(0x42001c0d, uint8_t)
#define SC5_I2C_S_INTENSET_PREC	(1 << 0)
#define SC5_I2C_S_INTENSET_AMATCH	(1 << 1)
#define SC5_I2C_S_INTENSET_DRDY	(1 << 2)

#define SC5_I2C_S_INTENSET_s    MMIO_REG(0x42001c0d, struct __struct_SC5_I2C_S_INTENSET)
struct __struct_SC5_I2C_S_INTENSET
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC5_I2C_S_INTFLAG	MMIO_REG(0x42001c0e, uint8_t)
#define SC5_I2C_S_INTFLAG_PREC	(1 << 0)
#define SC5_I2C_S_INTFLAG_AMATCH	(1 << 1)
#define SC5_I2C_S_INTFLAG_DRDY	(1 << 2)

#define SC5_I2C_S_INTFLAG_s    MMIO_REG(0x42001c0e, struct __struct_SC5_I2C_S_INTFLAG)
struct __struct_SC5_I2C_S_INTFLAG
{
  uint8_t prec : 1;
  uint8_t amatch : 1;
  uint8_t drdy : 1;
  uint8_t  : 5;
};

#define SC5_I2C_S_STATUS	MMIO_REG(0x42001c10, uint16_t)
#define SC5_I2C_S_STATUS_BUSERR	(1 << 0)
#define SC5_I2C_S_STATUS_COLL	(1 << 1)
#define SC5_I2C_S_STATUS_RXNACK	(1 << 2)
#define SC5_I2C_S_STATUS_DIR	(1 << 3)
#define SC5_I2C_S_STATUS_SR	(1 << 4)
#define SC5_I2C_S_STATUS_LOWTOUT	(1 << 6)
#define SC5_I2C_S_STATUS_CLKHOLD	(1 << 7)
#define SC5_I2C_S_STATUS_SYNCBUSY	(1 << 15)

#define SC5_I2C_S_STATUS_s    MMIO_REG(0x42001c10, struct __struct_SC5_I2C_S_STATUS)
struct __struct_SC5_I2C_S_STATUS
{
  uint16_t buserr : 1;
  uint16_t coll : 1;
  uint16_t rxnack : 1;
  uint16_t dir : 1;
  uint16_t sr : 1;
  uint16_t  : 1;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC5_I2C_S_ADDR	MMIO_REG(0x42001c14, uint32_t)
#define SC5_I2C_S_ADDR_GENCEN	(1 << 0)
#define SC5_I2C_S_ADDR_ADDR(x)	((x) << 1)
#define SC5_I2C_S_ADDR_ADDR_MSK	0x000000fe
#define SC5_I2C_S_ADDR_ADDR_VAL(x)	(((x) >> 1) & 0x7f)
#define SC5_I2C_S_ADDR_ADDRMASK(x)	((x) << 17)
#define SC5_I2C_S_ADDR_ADDRMASK_MSK	0x00fe0000
#define SC5_I2C_S_ADDR_ADDRMASK_VAL(x)	(((x) >> 17) & 0x7f)

#define SC5_I2C_S_ADDR_s    MMIO_REG(0x42001c14, struct __struct_SC5_I2C_S_ADDR)
struct __struct_SC5_I2C_S_ADDR
{
  uint32_t gencen : 1;
  uint32_t addr : 7;
  uint32_t  : 9;
  uint32_t addrmask : 7;
  uint32_t  : 8;
};

#define SC5_I2C_S_DATA	MMIO_REG(0x42001c18, uint16_t)
#define SC5_I2C_S_DATA_DATA(x)	((x) << 0)
#define SC5_I2C_S_DATA_DATA_MSK	0x000000ff
#define SC5_I2C_S_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC5_I2C_S_DATA_s    MMIO_REG(0x42001c18, struct __struct_SC5_I2C_S_DATA)
struct __struct_SC5_I2C_S_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42001c00 SC5_I2C_M

#define SC5_I2C_M_CTRLA	MMIO_REG(0x42001c00, uint32_t)
#define SC5_I2C_M_CTRLA_SWRST	(1 << 0)
#define SC5_I2C_M_CTRLA_ENABLE	(1 << 1)
#define SC5_I2C_M_CTRLA_MODE(x)	((x) << 2)
#define SC5_I2C_M_CTRLA_MODE_MSK	0x0000001c
#define SC5_I2C_M_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x7)
#define SC5_I2C_M_CTRLA_RUNSTDBY	(1 << 7)
#define SC5_I2C_M_CTRLA_PINOUT	(1 << 16)
#define SC5_I2C_M_CTRLA_SDAHOLD(x)	((x) << 20)
#define SC5_I2C_M_CTRLA_SDAHOLD_MSK	0x00300000
#define SC5_I2C_M_CTRLA_SDAHOLD_VAL(x)	(((x) >> 20) & 0x3)
#define SC5_I2C_M_CTRLA_INACTOUT(x)	((x) << 28)
#define SC5_I2C_M_CTRLA_INACTOUT_MSK	0x30000000
#define SC5_I2C_M_CTRLA_INACTOUT_VAL(x)	(((x) >> 28) & 0x3)
#define SC5_I2C_M_CTRLA_LOWTOUT	(1 << 30)

#define SC5_I2C_M_CTRLA_s    MMIO_REG(0x42001c00, struct __struct_SC5_I2C_M_CTRLA)
struct __struct_SC5_I2C_M_CTRLA
{
  uint32_t swrst : 1;
  uint32_t enable : 1;
  uint32_t mode : 3;
  uint32_t  : 2;
  uint32_t runstdby : 1;
  uint32_t  : 8;
  uint32_t pinout : 1;
  uint32_t  : 3;
  uint32_t sdahold : 2;
  uint32_t  : 6;
  uint32_t inactout : 2;
  uint32_t lowtout : 1;
  uint32_t  : 1;
};

#define SC5_I2C_M_CTRLB	MMIO_REG(0x42001c04, uint32_t)
#define SC5_I2C_M_CTRLB_SMEN	(1 << 8)
#define SC5_I2C_M_CTRLB_QCEN	(1 << 9)
#define SC5_I2C_M_CTRLB_CMD(x)	((x) << 16)
#define SC5_I2C_M_CTRLB_CMD_MSK	0x00030000
#define SC5_I2C_M_CTRLB_CMD_VAL(x)	(((x) >> 16) & 0x3)
#define SC5_I2C_M_CTRLB_ACKACT	(1 << 18)

#define SC5_I2C_M_CTRLB_s    MMIO_REG(0x42001c04, struct __struct_SC5_I2C_M_CTRLB)
struct __struct_SC5_I2C_M_CTRLB
{
  uint32_t  : 8;
  uint32_t smen : 1;
  uint32_t qcen : 1;
  uint32_t  : 6;
  uint32_t cmd : 2;
  uint32_t ackact : 1;
  uint32_t  : 13;
};

#define SC5_I2C_M_DBGCTRL	MMIO_REG(0x42001c08, uint8_t)
#define SC5_I2C_M_DBGCTRL_DBGSTOP	(1 << 0)

#define SC5_I2C_M_DBGCTRL_s    MMIO_REG(0x42001c08, struct __struct_SC5_I2C_M_DBGCTRL)
struct __struct_SC5_I2C_M_DBGCTRL
{
  uint8_t dbgstop : 1;
  uint8_t  : 7;
};

#define SC5_I2C_M_BAUD	MMIO_REG(0x42001c0a, uint16_t)
#define SC5_I2C_M_BAUD_BAUD(x)	((x) << 0)
#define SC5_I2C_M_BAUD_BAUD_MSK	0x000000ff
#define SC5_I2C_M_BAUD_BAUD_VAL(x)	(((x) >> 0) & 0xff)
#define SC5_I2C_M_BAUD_BAUDLOW(x)	((x) << 8)
#define SC5_I2C_M_BAUD_BAUDLOW_MSK	0x0000ff00
#define SC5_I2C_M_BAUD_BAUDLOW_VAL(x)	(((x) >> 8) & 0xff)

#define SC5_I2C_M_BAUD_s    MMIO_REG(0x42001c0a, struct __struct_SC5_I2C_M_BAUD)
struct __struct_SC5_I2C_M_BAUD
{
  uint16_t baud : 8;
  uint16_t baudlow : 8;
};

#define SC5_I2C_M_INTENCLR	MMIO_REG(0x42001c0c, uint8_t)
#define SC5_I2C_M_INTENCLR_MB	(1 << 0)
#define SC5_I2C_M_INTENCLR_SB	(1 << 1)

#define SC5_I2C_M_INTENCLR_s    MMIO_REG(0x42001c0c, struct __struct_SC5_I2C_M_INTENCLR)
struct __struct_SC5_I2C_M_INTENCLR
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC5_I2C_M_INTENSET	MMIO_REG(0x42001c0d, uint8_t)
#define SC5_I2C_M_INTENSET_MB	(1 << 0)
#define SC5_I2C_M_INTENSET_SB	(1 << 1)

#define SC5_I2C_M_INTENSET_s    MMIO_REG(0x42001c0d, struct __struct_SC5_I2C_M_INTENSET)
struct __struct_SC5_I2C_M_INTENSET
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC5_I2C_M_INTFLAG	MMIO_REG(0x42001c0e, uint8_t)
#define SC5_I2C_M_INTFLAG_MB	(1 << 0)
#define SC5_I2C_M_INTFLAG_SB	(1 << 1)

#define SC5_I2C_M_INTFLAG_s    MMIO_REG(0x42001c0e, struct __struct_SC5_I2C_M_INTFLAG)
struct __struct_SC5_I2C_M_INTFLAG
{
  uint8_t mb : 1;
  uint8_t sb : 1;
  uint8_t  : 6;
};

#define SC5_I2C_M_STATUS	MMIO_REG(0x42001c10, uint16_t)
#define SC5_I2C_M_STATUS_BUSERR	(1 << 0)
#define SC5_I2C_M_STATUS_ARBLOST	(1 << 1)
#define SC5_I2C_M_STATUS_RXNACK	(1 << 2)
#define SC5_I2C_M_STATUS_BUSSTATE(x)	((x) << 4)
#define SC5_I2C_M_STATUS_BUSSTATE_MSK	0x00000030
#define SC5_I2C_M_STATUS_BUSSTATE_VAL(x)	(((x) >> 4) & 0x3)
#define SC5_I2C_M_STATUS_LOWTOUT	(1 << 6)
#define SC5_I2C_M_STATUS_CLKHOLD	(1 << 7)
#define SC5_I2C_M_STATUS_SYNCBUSY	(1 << 15)

#define SC5_I2C_M_STATUS_s    MMIO_REG(0x42001c10, struct __struct_SC5_I2C_M_STATUS)
struct __struct_SC5_I2C_M_STATUS
{
  uint16_t buserr : 1;
  uint16_t arblost : 1;
  uint16_t rxnack : 1;
  uint16_t  : 1;
  uint16_t busstate : 2;
  uint16_t lowtout : 1;
  uint16_t clkhold : 1;
  uint16_t  : 7;
  uint16_t syncbusy : 1;
};

#define SC5_I2C_M_ADDR	MMIO_REG(0x42001c14, uint16_t)
#define SC5_I2C_M_ADDR_ADDR(x)	((x) << 0)
#define SC5_I2C_M_ADDR_ADDR_MSK	0x000000ff
#define SC5_I2C_M_ADDR_ADDR_VAL(x)	(((x) >> 0) & 0xff)

#define SC5_I2C_M_ADDR_s    MMIO_REG(0x42001c14, struct __struct_SC5_I2C_M_ADDR)
struct __struct_SC5_I2C_M_ADDR
{
  uint16_t addr : 8;
  uint16_t  : 8;
};

#define SC5_I2C_M_DATA	MMIO_REG(0x42001c18, uint16_t)
#define SC5_I2C_M_DATA_DATA(x)	((x) << 0)
#define SC5_I2C_M_DATA_DATA_MSK	0x000000ff
#define SC5_I2C_M_DATA_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define SC5_I2C_M_DATA_s    MMIO_REG(0x42001c18, struct __struct_SC5_I2C_M_DATA)
struct __struct_SC5_I2C_M_DATA
{
  uint16_t data : 8;
  uint16_t  : 8;
};

// 0x42002000 TC0_8

#define TC0_8_CTRLA	MMIO_REG(0x42002000, uint16_t)
#define TC0_8_CTRLA_SWRST	(1 << 0)
#define TC0_8_CTRLA_ENABLE	(1 << 1)
#define TC0_8_CTRLA_MODE(x)	((x) << 2)
#define TC0_8_CTRLA_MODE_MSK	0x0000000c
#define TC0_8_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC0_8_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC0_8_CTRLA_WAVEGEN_MSK	0x00000060
#define TC0_8_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC0_8_CTRLA_PRESCALER(x)	((x) << 8)
#define TC0_8_CTRLA_PRESCALER_MSK	0x00000700
#define TC0_8_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC0_8_CTRLA_RUNSTDBY	(1 << 11)
#define TC0_8_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC0_8_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC0_8_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC0_8_CTRLA_s    MMIO_REG(0x42002000, struct __struct_TC0_8_CTRLA)
struct __struct_TC0_8_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC0_8_READREQ	MMIO_REG(0x42002002, uint16_t)
#define TC0_8_READREQ_ADDR(x)	((x) << 0)
#define TC0_8_READREQ_ADDR_MSK	0x0000001f
#define TC0_8_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC0_8_READREQ_RCONT	(1 << 14)
#define TC0_8_READREQ_RREQ	(1 << 15)

#define TC0_8_READREQ_s    MMIO_REG(0x42002002, struct __struct_TC0_8_READREQ)
struct __struct_TC0_8_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC0_8_CTRLBCLR	MMIO_REG(0x42002004, uint8_t)
#define TC0_8_CTRLBCLR_DIR	(1 << 0)
#define TC0_8_CTRLBCLR_ONESHOT	(1 << 2)
#define TC0_8_CTRLBCLR_CMD(x)	((x) << 6)
#define TC0_8_CTRLBCLR_CMD_MSK	0x000000c0
#define TC0_8_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC0_8_CTRLBCLR_s    MMIO_REG(0x42002004, struct __struct_TC0_8_CTRLBCLR)
struct __struct_TC0_8_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC0_8_CTRLBSET	MMIO_REG(0x42002005, uint8_t)
#define TC0_8_CTRLBSET_DIR	(1 << 0)
#define TC0_8_CTRLBSET_ONESHOT	(1 << 2)
#define TC0_8_CTRLBSET_CMD(x)	((x) << 6)
#define TC0_8_CTRLBSET_CMD_MSK	0x000000c0
#define TC0_8_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC0_8_CTRLBSET_s    MMIO_REG(0x42002005, struct __struct_TC0_8_CTRLBSET)
struct __struct_TC0_8_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC0_8_CTRLC	MMIO_REG(0x42002006, uint8_t)
#define TC0_8_CTRLC_INVEN0	(1 << 0)
#define TC0_8_CTRLC_INVEN1	(1 << 1)
#define TC0_8_CTRLC_CPTEN0	(1 << 4)
#define TC0_8_CTRLC_CPTEN1	(1 << 5)

#define TC0_8_CTRLC_s    MMIO_REG(0x42002006, struct __struct_TC0_8_CTRLC)
struct __struct_TC0_8_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC0_8_DBGCTRL	MMIO_REG(0x42002008, uint8_t)
#define TC0_8_DBGCTRL_DBGRUN	(1 << 0)

#define TC0_8_DBGCTRL_s    MMIO_REG(0x42002008, struct __struct_TC0_8_DBGCTRL)
struct __struct_TC0_8_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC0_8_EVCTRL	MMIO_REG(0x4200200a, uint16_t)
#define TC0_8_EVCTRL_EVACT(x)	((x) << 0)
#define TC0_8_EVCTRL_EVACT_MSK	0x00000007
#define TC0_8_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_8_EVCTRL_TCINV	(1 << 4)
#define TC0_8_EVCTRL_TCEI	(1 << 5)
#define TC0_8_EVCTRL_OVFEO	(1 << 8)
#define TC0_8_EVCTRL_MCEO0	(1 << 12)
#define TC0_8_EVCTRL_MCEO1	(1 << 13)

#define TC0_8_EVCTRL_s    MMIO_REG(0x4200200a, struct __struct_TC0_8_EVCTRL)
struct __struct_TC0_8_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC0_8_INTENCLR	MMIO_REG(0x4200200c, uint8_t)
#define TC0_8_INTENCLR_OVF	(1 << 0)
#define TC0_8_INTENCLR_ERR	(1 << 1)
#define TC0_8_INTENCLR_SYNCRDY	(1 << 3)
#define TC0_8_INTENCLR_MC0	(1 << 4)
#define TC0_8_INTENCLR_MC1	(1 << 5)

#define TC0_8_INTENCLR_s    MMIO_REG(0x4200200c, struct __struct_TC0_8_INTENCLR)
struct __struct_TC0_8_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_8_INTENSET	MMIO_REG(0x4200200d, uint8_t)
#define TC0_8_INTENSET_OVF	(1 << 0)
#define TC0_8_INTENSET_ERR	(1 << 1)
#define TC0_8_INTENSET_SYNCRDY	(1 << 3)
#define TC0_8_INTENSET_MC0	(1 << 4)
#define TC0_8_INTENSET_MC1	(1 << 5)

#define TC0_8_INTENSET_s    MMIO_REG(0x4200200d, struct __struct_TC0_8_INTENSET)
struct __struct_TC0_8_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_8_INTFLAG	MMIO_REG(0x4200200e, uint8_t)
#define TC0_8_INTFLAG_OVF	(1 << 0)
#define TC0_8_INTFLAG_ERR	(1 << 1)
#define TC0_8_INTFLAG_SYNCRDY	(1 << 3)
#define TC0_8_INTFLAG_MC0	(1 << 4)
#define TC0_8_INTFLAG_MC1	(1 << 5)

#define TC0_8_INTFLAG_s    MMIO_REG(0x4200200e, struct __struct_TC0_8_INTFLAG)
struct __struct_TC0_8_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_8_STATUS	MMIO_REG(0x4200200f, uint8_t)
#define TC0_8_STATUS_STOP	(1 << 3)
#define TC0_8_STATUS_SLAVE	(1 << 4)
#define TC0_8_STATUS_SYNCBUSY	(1 << 7)

#define TC0_8_STATUS_s    MMIO_REG(0x4200200f, struct __struct_TC0_8_STATUS)
struct __struct_TC0_8_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC0_8_COUNT	MMIO_REG(0x42002010, uint8_t)
#define TC0_8_COUNT_COUNT(x)	((x) << 0)
#define TC0_8_COUNT_COUNT_MSK	0x000000ff
#define TC0_8_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xff)

#define TC0_8_COUNT_s    MMIO_REG(0x42002010, struct __struct_TC0_8_COUNT)
struct __struct_TC0_8_COUNT
{
  uint8_t count : 8;
};

#define TC0_8_PER	MMIO_REG(0x42002014, uint8_t)
#define TC0_8_PER_PER(x)	((x) << 0)
#define TC0_8_PER_PER_MSK	0x000000ff
#define TC0_8_PER_PER_VAL(x)	(((x) >> 0) & 0xff)

#define TC0_8_PER_s    MMIO_REG(0x42002014, struct __struct_TC0_8_PER)
struct __struct_TC0_8_PER
{
  uint8_t per : 8;
};

#define TC0_8_CC0	MMIO_REG(0x42002018, uint8_t)
#define TC0_8_CC0_CC(x)	((x) << 0)
#define TC0_8_CC0_CC_MSK	0x000000ff
#define TC0_8_CC0_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC0_8_CC0_s    MMIO_REG(0x42002018, struct __struct_TC0_8_CC0)
struct __struct_TC0_8_CC0
{
  uint8_t cc : 8;
};

#define TC0_8_CC1	MMIO_REG(0x42002019, uint8_t)
#define TC0_8_CC1_CC(x)	((x) << 0)
#define TC0_8_CC1_CC_MSK	0x000000ff
#define TC0_8_CC1_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC0_8_CC1_s    MMIO_REG(0x42002019, struct __struct_TC0_8_CC1)
struct __struct_TC0_8_CC1
{
  uint8_t cc : 8;
};

// 0x42002000 TC0_16

#define TC0_16_CTRLA	MMIO_REG(0x42002000, uint16_t)
#define TC0_16_CTRLA_SWRST	(1 << 0)
#define TC0_16_CTRLA_ENABLE	(1 << 1)
#define TC0_16_CTRLA_MODE(x)	((x) << 2)
#define TC0_16_CTRLA_MODE_MSK	0x0000000c
#define TC0_16_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC0_16_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC0_16_CTRLA_WAVEGEN_MSK	0x00000060
#define TC0_16_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC0_16_CTRLA_PRESCALER(x)	((x) << 8)
#define TC0_16_CTRLA_PRESCALER_MSK	0x00000700
#define TC0_16_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC0_16_CTRLA_RUNSTDBY	(1 << 11)
#define TC0_16_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC0_16_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC0_16_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC0_16_CTRLA_s    MMIO_REG(0x42002000, struct __struct_TC0_16_CTRLA)
struct __struct_TC0_16_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC0_16_READREQ	MMIO_REG(0x42002002, uint16_t)
#define TC0_16_READREQ_ADDR(x)	((x) << 0)
#define TC0_16_READREQ_ADDR_MSK	0x0000001f
#define TC0_16_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC0_16_READREQ_RCONT	(1 << 14)
#define TC0_16_READREQ_RREQ	(1 << 15)

#define TC0_16_READREQ_s    MMIO_REG(0x42002002, struct __struct_TC0_16_READREQ)
struct __struct_TC0_16_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC0_16_CTRLBCLR	MMIO_REG(0x42002004, uint8_t)
#define TC0_16_CTRLBCLR_DIR	(1 << 0)
#define TC0_16_CTRLBCLR_ONESHOT	(1 << 2)
#define TC0_16_CTRLBCLR_CMD(x)	((x) << 6)
#define TC0_16_CTRLBCLR_CMD_MSK	0x000000c0
#define TC0_16_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC0_16_CTRLBCLR_s    MMIO_REG(0x42002004, struct __struct_TC0_16_CTRLBCLR)
struct __struct_TC0_16_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC0_16_CTRLBSET	MMIO_REG(0x42002005, uint8_t)
#define TC0_16_CTRLBSET_DIR	(1 << 0)
#define TC0_16_CTRLBSET_ONESHOT	(1 << 2)
#define TC0_16_CTRLBSET_CMD(x)	((x) << 6)
#define TC0_16_CTRLBSET_CMD_MSK	0x000000c0
#define TC0_16_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC0_16_CTRLBSET_s    MMIO_REG(0x42002005, struct __struct_TC0_16_CTRLBSET)
struct __struct_TC0_16_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC0_16_CTRLC	MMIO_REG(0x42002006, uint8_t)
#define TC0_16_CTRLC_INVEN0	(1 << 0)
#define TC0_16_CTRLC_INVEN1	(1 << 1)
#define TC0_16_CTRLC_CPTEN0	(1 << 4)
#define TC0_16_CTRLC_CPTEN1	(1 << 5)

#define TC0_16_CTRLC_s    MMIO_REG(0x42002006, struct __struct_TC0_16_CTRLC)
struct __struct_TC0_16_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC0_16_DBGCTRL	MMIO_REG(0x42002008, uint8_t)
#define TC0_16_DBGCTRL_DBGRUN	(1 << 0)

#define TC0_16_DBGCTRL_s    MMIO_REG(0x42002008, struct __struct_TC0_16_DBGCTRL)
struct __struct_TC0_16_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC0_16_EVCTRL	MMIO_REG(0x4200200a, uint16_t)
#define TC0_16_EVCTRL_EVACT(x)	((x) << 0)
#define TC0_16_EVCTRL_EVACT_MSK	0x00000007
#define TC0_16_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_16_EVCTRL_TCINV	(1 << 4)
#define TC0_16_EVCTRL_TCEI	(1 << 5)
#define TC0_16_EVCTRL_OVFEO	(1 << 8)
#define TC0_16_EVCTRL_MCEO0	(1 << 12)
#define TC0_16_EVCTRL_MCEO1	(1 << 13)

#define TC0_16_EVCTRL_s    MMIO_REG(0x4200200a, struct __struct_TC0_16_EVCTRL)
struct __struct_TC0_16_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC0_16_INTENCLR	MMIO_REG(0x4200200c, uint8_t)
#define TC0_16_INTENCLR_OVF	(1 << 0)
#define TC0_16_INTENCLR_ERR	(1 << 1)
#define TC0_16_INTENCLR_SYNCRDY	(1 << 3)
#define TC0_16_INTENCLR_MC0	(1 << 4)
#define TC0_16_INTENCLR_MC1	(1 << 5)

#define TC0_16_INTENCLR_s    MMIO_REG(0x4200200c, struct __struct_TC0_16_INTENCLR)
struct __struct_TC0_16_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_16_INTENSET	MMIO_REG(0x4200200d, uint8_t)
#define TC0_16_INTENSET_OVF	(1 << 0)
#define TC0_16_INTENSET_ERR	(1 << 1)
#define TC0_16_INTENSET_SYNCRDY	(1 << 3)
#define TC0_16_INTENSET_MC0	(1 << 4)
#define TC0_16_INTENSET_MC1	(1 << 5)

#define TC0_16_INTENSET_s    MMIO_REG(0x4200200d, struct __struct_TC0_16_INTENSET)
struct __struct_TC0_16_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_16_INTFLAG	MMIO_REG(0x4200200e, uint8_t)
#define TC0_16_INTFLAG_OVF	(1 << 0)
#define TC0_16_INTFLAG_ERR	(1 << 1)
#define TC0_16_INTFLAG_SYNCRDY	(1 << 3)
#define TC0_16_INTFLAG_MC0	(1 << 4)
#define TC0_16_INTFLAG_MC1	(1 << 5)

#define TC0_16_INTFLAG_s    MMIO_REG(0x4200200e, struct __struct_TC0_16_INTFLAG)
struct __struct_TC0_16_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_16_STATUS	MMIO_REG(0x4200200f, uint8_t)
#define TC0_16_STATUS_STOP	(1 << 3)
#define TC0_16_STATUS_SLAVE	(1 << 4)
#define TC0_16_STATUS_SYNCBUSY	(1 << 7)

#define TC0_16_STATUS_s    MMIO_REG(0x4200200f, struct __struct_TC0_16_STATUS)
struct __struct_TC0_16_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC0_16_COUNT	MMIO_REG(0x42002010, uint16_t)
#define TC0_16_COUNT_COUNT(x)	((x) << 0)
#define TC0_16_COUNT_COUNT_MSK	0x0000ffff
#define TC0_16_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define TC0_16_COUNT_s    MMIO_REG(0x42002010, struct __struct_TC0_16_COUNT)
struct __struct_TC0_16_COUNT
{
  uint16_t count : 16;
};

#define TC0_16_CC0	MMIO_REG(0x42002018, uint16_t)
#define TC0_16_CC0_CC(x)	((x) << 0)
#define TC0_16_CC0_CC_MSK	0x0000ffff
#define TC0_16_CC0_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC0_16_CC0_s    MMIO_REG(0x42002018, struct __struct_TC0_16_CC0)
struct __struct_TC0_16_CC0
{
  uint16_t cc : 16;
};

#define TC0_16_CC1	MMIO_REG(0x4200201a, uint16_t)
#define TC0_16_CC1_CC(x)	((x) << 0)
#define TC0_16_CC1_CC_MSK	0x0000ffff
#define TC0_16_CC1_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC0_16_CC1_s    MMIO_REG(0x4200201a, struct __struct_TC0_16_CC1)
struct __struct_TC0_16_CC1
{
  uint16_t cc : 16;
};

// 0x42002000 TC0_32

#define TC0_32_CTRLA	MMIO_REG(0x42002000, uint16_t)
#define TC0_32_CTRLA_SWRST	(1 << 0)
#define TC0_32_CTRLA_ENABLE	(1 << 1)
#define TC0_32_CTRLA_MODE(x)	((x) << 2)
#define TC0_32_CTRLA_MODE_MSK	0x0000000c
#define TC0_32_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC0_32_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC0_32_CTRLA_WAVEGEN_MSK	0x00000060
#define TC0_32_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC0_32_CTRLA_PRESCALER(x)	((x) << 8)
#define TC0_32_CTRLA_PRESCALER_MSK	0x00000700
#define TC0_32_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC0_32_CTRLA_RUNSTDBY	(1 << 11)
#define TC0_32_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC0_32_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC0_32_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC0_32_CTRLA_s    MMIO_REG(0x42002000, struct __struct_TC0_32_CTRLA)
struct __struct_TC0_32_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC0_32_READREQ	MMIO_REG(0x42002002, uint16_t)
#define TC0_32_READREQ_ADDR(x)	((x) << 0)
#define TC0_32_READREQ_ADDR_MSK	0x0000001f
#define TC0_32_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC0_32_READREQ_RCONT	(1 << 14)
#define TC0_32_READREQ_RREQ	(1 << 15)

#define TC0_32_READREQ_s    MMIO_REG(0x42002002, struct __struct_TC0_32_READREQ)
struct __struct_TC0_32_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC0_32_CTRLBCLR	MMIO_REG(0x42002004, uint8_t)
#define TC0_32_CTRLBCLR_DIR	(1 << 0)
#define TC0_32_CTRLBCLR_ONESHOT	(1 << 2)
#define TC0_32_CTRLBCLR_CMD(x)	((x) << 6)
#define TC0_32_CTRLBCLR_CMD_MSK	0x000000c0
#define TC0_32_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC0_32_CTRLBCLR_s    MMIO_REG(0x42002004, struct __struct_TC0_32_CTRLBCLR)
struct __struct_TC0_32_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC0_32_CTRLBSET	MMIO_REG(0x42002005, uint8_t)
#define TC0_32_CTRLBSET_DIR	(1 << 0)
#define TC0_32_CTRLBSET_ONESHOT	(1 << 2)
#define TC0_32_CTRLBSET_CMD(x)	((x) << 6)
#define TC0_32_CTRLBSET_CMD_MSK	0x000000c0
#define TC0_32_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC0_32_CTRLBSET_s    MMIO_REG(0x42002005, struct __struct_TC0_32_CTRLBSET)
struct __struct_TC0_32_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC0_32_CTRLC	MMIO_REG(0x42002006, uint8_t)
#define TC0_32_CTRLC_INVEN0	(1 << 0)
#define TC0_32_CTRLC_INVEN1	(1 << 1)
#define TC0_32_CTRLC_CPTEN0	(1 << 4)
#define TC0_32_CTRLC_CPTEN1	(1 << 5)

#define TC0_32_CTRLC_s    MMIO_REG(0x42002006, struct __struct_TC0_32_CTRLC)
struct __struct_TC0_32_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC0_32_DBGCTRL	MMIO_REG(0x42002008, uint8_t)
#define TC0_32_DBGCTRL_DBGRUN	(1 << 0)

#define TC0_32_DBGCTRL_s    MMIO_REG(0x42002008, struct __struct_TC0_32_DBGCTRL)
struct __struct_TC0_32_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC0_32_EVCTRL	MMIO_REG(0x4200200a, uint16_t)
#define TC0_32_EVCTRL_EVACT(x)	((x) << 0)
#define TC0_32_EVCTRL_EVACT_MSK	0x00000007
#define TC0_32_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_32_EVCTRL_TCINV	(1 << 4)
#define TC0_32_EVCTRL_TCEI	(1 << 5)
#define TC0_32_EVCTRL_OVFEO	(1 << 8)
#define TC0_32_EVCTRL_MCEO0	(1 << 12)
#define TC0_32_EVCTRL_MCEO1	(1 << 13)

#define TC0_32_EVCTRL_s    MMIO_REG(0x4200200a, struct __struct_TC0_32_EVCTRL)
struct __struct_TC0_32_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC0_32_INTENCLR	MMIO_REG(0x4200200c, uint8_t)
#define TC0_32_INTENCLR_OVF	(1 << 0)
#define TC0_32_INTENCLR_ERR	(1 << 1)
#define TC0_32_INTENCLR_SYNCRDY	(1 << 3)
#define TC0_32_INTENCLR_MC0	(1 << 4)
#define TC0_32_INTENCLR_MC1	(1 << 5)

#define TC0_32_INTENCLR_s    MMIO_REG(0x4200200c, struct __struct_TC0_32_INTENCLR)
struct __struct_TC0_32_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_32_INTENSET	MMIO_REG(0x4200200d, uint8_t)
#define TC0_32_INTENSET_OVF	(1 << 0)
#define TC0_32_INTENSET_ERR	(1 << 1)
#define TC0_32_INTENSET_SYNCRDY	(1 << 3)
#define TC0_32_INTENSET_MC0	(1 << 4)
#define TC0_32_INTENSET_MC1	(1 << 5)

#define TC0_32_INTENSET_s    MMIO_REG(0x4200200d, struct __struct_TC0_32_INTENSET)
struct __struct_TC0_32_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_32_INTFLAG	MMIO_REG(0x4200200e, uint8_t)
#define TC0_32_INTFLAG_OVF	(1 << 0)
#define TC0_32_INTFLAG_ERR	(1 << 1)
#define TC0_32_INTFLAG_SYNCRDY	(1 << 3)
#define TC0_32_INTFLAG_MC0	(1 << 4)
#define TC0_32_INTFLAG_MC1	(1 << 5)

#define TC0_32_INTFLAG_s    MMIO_REG(0x4200200e, struct __struct_TC0_32_INTFLAG)
struct __struct_TC0_32_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC0_32_STATUS	MMIO_REG(0x4200200f, uint8_t)
#define TC0_32_STATUS_STOP	(1 << 3)
#define TC0_32_STATUS_SLAVE	(1 << 4)
#define TC0_32_STATUS_SYNCBUSY	(1 << 7)

#define TC0_32_STATUS_s    MMIO_REG(0x4200200f, struct __struct_TC0_32_STATUS)
struct __struct_TC0_32_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC0_32_COUNT	MMIO_REG(0x42002010, uint32_t)
#define TC0_32_COUNT_COUNT(x)	((x) << 0)
#define TC0_32_COUNT_COUNT_MSK	0xffffffff
#define TC0_32_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC0_32_COUNT_s    MMIO_REG(0x42002010, struct __struct_TC0_32_COUNT)
struct __struct_TC0_32_COUNT
{
  uint32_t count : 32;
};

#define TC0_32_CC0	MMIO_REG(0x42002018, uint32_t)
#define TC0_32_CC0_CC(x)	((x) << 0)
#define TC0_32_CC0_CC_MSK	0xffffffff
#define TC0_32_CC0_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC0_32_CC0_s    MMIO_REG(0x42002018, struct __struct_TC0_32_CC0)
struct __struct_TC0_32_CC0
{
  uint32_t cc : 32;
};

#define TC0_32_CC1	MMIO_REG(0x4200201c, uint32_t)
#define TC0_32_CC1_CC(x)	((x) << 0)
#define TC0_32_CC1_CC_MSK	0xffffffff
#define TC0_32_CC1_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC0_32_CC1_s    MMIO_REG(0x4200201c, struct __struct_TC0_32_CC1)
struct __struct_TC0_32_CC1
{
  uint32_t cc : 32;
};

// 0x42002400 TC1_8

#define TC1_8_CTRLA	MMIO_REG(0x42002400, uint16_t)
#define TC1_8_CTRLA_SWRST	(1 << 0)
#define TC1_8_CTRLA_ENABLE	(1 << 1)
#define TC1_8_CTRLA_MODE(x)	((x) << 2)
#define TC1_8_CTRLA_MODE_MSK	0x0000000c
#define TC1_8_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC1_8_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC1_8_CTRLA_WAVEGEN_MSK	0x00000060
#define TC1_8_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC1_8_CTRLA_PRESCALER(x)	((x) << 8)
#define TC1_8_CTRLA_PRESCALER_MSK	0x00000700
#define TC1_8_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC1_8_CTRLA_RUNSTDBY	(1 << 11)
#define TC1_8_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC1_8_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC1_8_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC1_8_CTRLA_s    MMIO_REG(0x42002400, struct __struct_TC1_8_CTRLA)
struct __struct_TC1_8_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC1_8_READREQ	MMIO_REG(0x42002402, uint16_t)
#define TC1_8_READREQ_ADDR(x)	((x) << 0)
#define TC1_8_READREQ_ADDR_MSK	0x0000001f
#define TC1_8_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC1_8_READREQ_RCONT	(1 << 14)
#define TC1_8_READREQ_RREQ	(1 << 15)

#define TC1_8_READREQ_s    MMIO_REG(0x42002402, struct __struct_TC1_8_READREQ)
struct __struct_TC1_8_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC1_8_CTRLBCLR	MMIO_REG(0x42002404, uint8_t)
#define TC1_8_CTRLBCLR_DIR	(1 << 0)
#define TC1_8_CTRLBCLR_ONESHOT	(1 << 2)
#define TC1_8_CTRLBCLR_CMD(x)	((x) << 6)
#define TC1_8_CTRLBCLR_CMD_MSK	0x000000c0
#define TC1_8_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC1_8_CTRLBCLR_s    MMIO_REG(0x42002404, struct __struct_TC1_8_CTRLBCLR)
struct __struct_TC1_8_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC1_8_CTRLBSET	MMIO_REG(0x42002405, uint8_t)
#define TC1_8_CTRLBSET_DIR	(1 << 0)
#define TC1_8_CTRLBSET_ONESHOT	(1 << 2)
#define TC1_8_CTRLBSET_CMD(x)	((x) << 6)
#define TC1_8_CTRLBSET_CMD_MSK	0x000000c0
#define TC1_8_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC1_8_CTRLBSET_s    MMIO_REG(0x42002405, struct __struct_TC1_8_CTRLBSET)
struct __struct_TC1_8_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC1_8_CTRLC	MMIO_REG(0x42002406, uint8_t)
#define TC1_8_CTRLC_INVEN0	(1 << 0)
#define TC1_8_CTRLC_INVEN1	(1 << 1)
#define TC1_8_CTRLC_CPTEN0	(1 << 4)
#define TC1_8_CTRLC_CPTEN1	(1 << 5)

#define TC1_8_CTRLC_s    MMIO_REG(0x42002406, struct __struct_TC1_8_CTRLC)
struct __struct_TC1_8_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC1_8_DBGCTRL	MMIO_REG(0x42002408, uint8_t)
#define TC1_8_DBGCTRL_DBGRUN	(1 << 0)

#define TC1_8_DBGCTRL_s    MMIO_REG(0x42002408, struct __struct_TC1_8_DBGCTRL)
struct __struct_TC1_8_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC1_8_EVCTRL	MMIO_REG(0x4200240a, uint16_t)
#define TC1_8_EVCTRL_EVACT(x)	((x) << 0)
#define TC1_8_EVCTRL_EVACT_MSK	0x00000007
#define TC1_8_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_8_EVCTRL_TCINV	(1 << 4)
#define TC1_8_EVCTRL_TCEI	(1 << 5)
#define TC1_8_EVCTRL_OVFEO	(1 << 8)
#define TC1_8_EVCTRL_MCEO0	(1 << 12)
#define TC1_8_EVCTRL_MCEO1	(1 << 13)

#define TC1_8_EVCTRL_s    MMIO_REG(0x4200240a, struct __struct_TC1_8_EVCTRL)
struct __struct_TC1_8_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC1_8_INTENCLR	MMIO_REG(0x4200240c, uint8_t)
#define TC1_8_INTENCLR_OVF	(1 << 0)
#define TC1_8_INTENCLR_ERR	(1 << 1)
#define TC1_8_INTENCLR_SYNCRDY	(1 << 3)
#define TC1_8_INTENCLR_MC0	(1 << 4)
#define TC1_8_INTENCLR_MC1	(1 << 5)

#define TC1_8_INTENCLR_s    MMIO_REG(0x4200240c, struct __struct_TC1_8_INTENCLR)
struct __struct_TC1_8_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_8_INTENSET	MMIO_REG(0x4200240d, uint8_t)
#define TC1_8_INTENSET_OVF	(1 << 0)
#define TC1_8_INTENSET_ERR	(1 << 1)
#define TC1_8_INTENSET_SYNCRDY	(1 << 3)
#define TC1_8_INTENSET_MC0	(1 << 4)
#define TC1_8_INTENSET_MC1	(1 << 5)

#define TC1_8_INTENSET_s    MMIO_REG(0x4200240d, struct __struct_TC1_8_INTENSET)
struct __struct_TC1_8_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_8_INTFLAG	MMIO_REG(0x4200240e, uint8_t)
#define TC1_8_INTFLAG_OVF	(1 << 0)
#define TC1_8_INTFLAG_ERR	(1 << 1)
#define TC1_8_INTFLAG_SYNCRDY	(1 << 3)
#define TC1_8_INTFLAG_MC0	(1 << 4)
#define TC1_8_INTFLAG_MC1	(1 << 5)

#define TC1_8_INTFLAG_s    MMIO_REG(0x4200240e, struct __struct_TC1_8_INTFLAG)
struct __struct_TC1_8_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_8_STATUS	MMIO_REG(0x4200240f, uint8_t)
#define TC1_8_STATUS_STOP	(1 << 3)
#define TC1_8_STATUS_SLAVE	(1 << 4)
#define TC1_8_STATUS_SYNCBUSY	(1 << 7)

#define TC1_8_STATUS_s    MMIO_REG(0x4200240f, struct __struct_TC1_8_STATUS)
struct __struct_TC1_8_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC1_8_COUNT	MMIO_REG(0x42002410, uint8_t)
#define TC1_8_COUNT_COUNT(x)	((x) << 0)
#define TC1_8_COUNT_COUNT_MSK	0x000000ff
#define TC1_8_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xff)

#define TC1_8_COUNT_s    MMIO_REG(0x42002410, struct __struct_TC1_8_COUNT)
struct __struct_TC1_8_COUNT
{
  uint8_t count : 8;
};

#define TC1_8_PER	MMIO_REG(0x42002414, uint8_t)
#define TC1_8_PER_PER(x)	((x) << 0)
#define TC1_8_PER_PER_MSK	0x000000ff
#define TC1_8_PER_PER_VAL(x)	(((x) >> 0) & 0xff)

#define TC1_8_PER_s    MMIO_REG(0x42002414, struct __struct_TC1_8_PER)
struct __struct_TC1_8_PER
{
  uint8_t per : 8;
};

#define TC1_8_CC0	MMIO_REG(0x42002418, uint8_t)
#define TC1_8_CC0_CC(x)	((x) << 0)
#define TC1_8_CC0_CC_MSK	0x000000ff
#define TC1_8_CC0_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC1_8_CC0_s    MMIO_REG(0x42002418, struct __struct_TC1_8_CC0)
struct __struct_TC1_8_CC0
{
  uint8_t cc : 8;
};

#define TC1_8_CC1	MMIO_REG(0x42002419, uint8_t)
#define TC1_8_CC1_CC(x)	((x) << 0)
#define TC1_8_CC1_CC_MSK	0x000000ff
#define TC1_8_CC1_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC1_8_CC1_s    MMIO_REG(0x42002419, struct __struct_TC1_8_CC1)
struct __struct_TC1_8_CC1
{
  uint8_t cc : 8;
};

// 0x42002400 TC1_16

#define TC1_16_CTRLA	MMIO_REG(0x42002400, uint16_t)
#define TC1_16_CTRLA_SWRST	(1 << 0)
#define TC1_16_CTRLA_ENABLE	(1 << 1)
#define TC1_16_CTRLA_MODE(x)	((x) << 2)
#define TC1_16_CTRLA_MODE_MSK	0x0000000c
#define TC1_16_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC1_16_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC1_16_CTRLA_WAVEGEN_MSK	0x00000060
#define TC1_16_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC1_16_CTRLA_PRESCALER(x)	((x) << 8)
#define TC1_16_CTRLA_PRESCALER_MSK	0x00000700
#define TC1_16_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC1_16_CTRLA_RUNSTDBY	(1 << 11)
#define TC1_16_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC1_16_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC1_16_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC1_16_CTRLA_s    MMIO_REG(0x42002400, struct __struct_TC1_16_CTRLA)
struct __struct_TC1_16_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC1_16_READREQ	MMIO_REG(0x42002402, uint16_t)
#define TC1_16_READREQ_ADDR(x)	((x) << 0)
#define TC1_16_READREQ_ADDR_MSK	0x0000001f
#define TC1_16_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC1_16_READREQ_RCONT	(1 << 14)
#define TC1_16_READREQ_RREQ	(1 << 15)

#define TC1_16_READREQ_s    MMIO_REG(0x42002402, struct __struct_TC1_16_READREQ)
struct __struct_TC1_16_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC1_16_CTRLBCLR	MMIO_REG(0x42002404, uint8_t)
#define TC1_16_CTRLBCLR_DIR	(1 << 0)
#define TC1_16_CTRLBCLR_ONESHOT	(1 << 2)
#define TC1_16_CTRLBCLR_CMD(x)	((x) << 6)
#define TC1_16_CTRLBCLR_CMD_MSK	0x000000c0
#define TC1_16_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC1_16_CTRLBCLR_s    MMIO_REG(0x42002404, struct __struct_TC1_16_CTRLBCLR)
struct __struct_TC1_16_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC1_16_CTRLBSET	MMIO_REG(0x42002405, uint8_t)
#define TC1_16_CTRLBSET_DIR	(1 << 0)
#define TC1_16_CTRLBSET_ONESHOT	(1 << 2)
#define TC1_16_CTRLBSET_CMD(x)	((x) << 6)
#define TC1_16_CTRLBSET_CMD_MSK	0x000000c0
#define TC1_16_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC1_16_CTRLBSET_s    MMIO_REG(0x42002405, struct __struct_TC1_16_CTRLBSET)
struct __struct_TC1_16_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC1_16_CTRLC	MMIO_REG(0x42002406, uint8_t)
#define TC1_16_CTRLC_INVEN0	(1 << 0)
#define TC1_16_CTRLC_INVEN1	(1 << 1)
#define TC1_16_CTRLC_CPTEN0	(1 << 4)
#define TC1_16_CTRLC_CPTEN1	(1 << 5)

#define TC1_16_CTRLC_s    MMIO_REG(0x42002406, struct __struct_TC1_16_CTRLC)
struct __struct_TC1_16_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC1_16_DBGCTRL	MMIO_REG(0x42002408, uint8_t)
#define TC1_16_DBGCTRL_DBGRUN	(1 << 0)

#define TC1_16_DBGCTRL_s    MMIO_REG(0x42002408, struct __struct_TC1_16_DBGCTRL)
struct __struct_TC1_16_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC1_16_EVCTRL	MMIO_REG(0x4200240a, uint16_t)
#define TC1_16_EVCTRL_EVACT(x)	((x) << 0)
#define TC1_16_EVCTRL_EVACT_MSK	0x00000007
#define TC1_16_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_16_EVCTRL_TCINV	(1 << 4)
#define TC1_16_EVCTRL_TCEI	(1 << 5)
#define TC1_16_EVCTRL_OVFEO	(1 << 8)
#define TC1_16_EVCTRL_MCEO0	(1 << 12)
#define TC1_16_EVCTRL_MCEO1	(1 << 13)

#define TC1_16_EVCTRL_s    MMIO_REG(0x4200240a, struct __struct_TC1_16_EVCTRL)
struct __struct_TC1_16_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC1_16_INTENCLR	MMIO_REG(0x4200240c, uint8_t)
#define TC1_16_INTENCLR_OVF	(1 << 0)
#define TC1_16_INTENCLR_ERR	(1 << 1)
#define TC1_16_INTENCLR_SYNCRDY	(1 << 3)
#define TC1_16_INTENCLR_MC0	(1 << 4)
#define TC1_16_INTENCLR_MC1	(1 << 5)

#define TC1_16_INTENCLR_s    MMIO_REG(0x4200240c, struct __struct_TC1_16_INTENCLR)
struct __struct_TC1_16_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_16_INTENSET	MMIO_REG(0x4200240d, uint8_t)
#define TC1_16_INTENSET_OVF	(1 << 0)
#define TC1_16_INTENSET_ERR	(1 << 1)
#define TC1_16_INTENSET_SYNCRDY	(1 << 3)
#define TC1_16_INTENSET_MC0	(1 << 4)
#define TC1_16_INTENSET_MC1	(1 << 5)

#define TC1_16_INTENSET_s    MMIO_REG(0x4200240d, struct __struct_TC1_16_INTENSET)
struct __struct_TC1_16_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_16_INTFLAG	MMIO_REG(0x4200240e, uint8_t)
#define TC1_16_INTFLAG_OVF	(1 << 0)
#define TC1_16_INTFLAG_ERR	(1 << 1)
#define TC1_16_INTFLAG_SYNCRDY	(1 << 3)
#define TC1_16_INTFLAG_MC0	(1 << 4)
#define TC1_16_INTFLAG_MC1	(1 << 5)

#define TC1_16_INTFLAG_s    MMIO_REG(0x4200240e, struct __struct_TC1_16_INTFLAG)
struct __struct_TC1_16_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_16_STATUS	MMIO_REG(0x4200240f, uint8_t)
#define TC1_16_STATUS_STOP	(1 << 3)
#define TC1_16_STATUS_SLAVE	(1 << 4)
#define TC1_16_STATUS_SYNCBUSY	(1 << 7)

#define TC1_16_STATUS_s    MMIO_REG(0x4200240f, struct __struct_TC1_16_STATUS)
struct __struct_TC1_16_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC1_16_COUNT	MMIO_REG(0x42002410, uint16_t)
#define TC1_16_COUNT_COUNT(x)	((x) << 0)
#define TC1_16_COUNT_COUNT_MSK	0x0000ffff
#define TC1_16_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define TC1_16_COUNT_s    MMIO_REG(0x42002410, struct __struct_TC1_16_COUNT)
struct __struct_TC1_16_COUNT
{
  uint16_t count : 16;
};

#define TC1_16_CC0	MMIO_REG(0x42002418, uint16_t)
#define TC1_16_CC0_CC(x)	((x) << 0)
#define TC1_16_CC0_CC_MSK	0x0000ffff
#define TC1_16_CC0_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC1_16_CC0_s    MMIO_REG(0x42002418, struct __struct_TC1_16_CC0)
struct __struct_TC1_16_CC0
{
  uint16_t cc : 16;
};

#define TC1_16_CC1	MMIO_REG(0x4200241a, uint16_t)
#define TC1_16_CC1_CC(x)	((x) << 0)
#define TC1_16_CC1_CC_MSK	0x0000ffff
#define TC1_16_CC1_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC1_16_CC1_s    MMIO_REG(0x4200241a, struct __struct_TC1_16_CC1)
struct __struct_TC1_16_CC1
{
  uint16_t cc : 16;
};

// 0x42002400 TC1_32

#define TC1_32_CTRLA	MMIO_REG(0x42002400, uint16_t)
#define TC1_32_CTRLA_SWRST	(1 << 0)
#define TC1_32_CTRLA_ENABLE	(1 << 1)
#define TC1_32_CTRLA_MODE(x)	((x) << 2)
#define TC1_32_CTRLA_MODE_MSK	0x0000000c
#define TC1_32_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC1_32_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC1_32_CTRLA_WAVEGEN_MSK	0x00000060
#define TC1_32_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC1_32_CTRLA_PRESCALER(x)	((x) << 8)
#define TC1_32_CTRLA_PRESCALER_MSK	0x00000700
#define TC1_32_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC1_32_CTRLA_RUNSTDBY	(1 << 11)
#define TC1_32_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC1_32_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC1_32_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC1_32_CTRLA_s    MMIO_REG(0x42002400, struct __struct_TC1_32_CTRLA)
struct __struct_TC1_32_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC1_32_READREQ	MMIO_REG(0x42002402, uint16_t)
#define TC1_32_READREQ_ADDR(x)	((x) << 0)
#define TC1_32_READREQ_ADDR_MSK	0x0000001f
#define TC1_32_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC1_32_READREQ_RCONT	(1 << 14)
#define TC1_32_READREQ_RREQ	(1 << 15)

#define TC1_32_READREQ_s    MMIO_REG(0x42002402, struct __struct_TC1_32_READREQ)
struct __struct_TC1_32_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC1_32_CTRLBCLR	MMIO_REG(0x42002404, uint8_t)
#define TC1_32_CTRLBCLR_DIR	(1 << 0)
#define TC1_32_CTRLBCLR_ONESHOT	(1 << 2)
#define TC1_32_CTRLBCLR_CMD(x)	((x) << 6)
#define TC1_32_CTRLBCLR_CMD_MSK	0x000000c0
#define TC1_32_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC1_32_CTRLBCLR_s    MMIO_REG(0x42002404, struct __struct_TC1_32_CTRLBCLR)
struct __struct_TC1_32_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC1_32_CTRLBSET	MMIO_REG(0x42002405, uint8_t)
#define TC1_32_CTRLBSET_DIR	(1 << 0)
#define TC1_32_CTRLBSET_ONESHOT	(1 << 2)
#define TC1_32_CTRLBSET_CMD(x)	((x) << 6)
#define TC1_32_CTRLBSET_CMD_MSK	0x000000c0
#define TC1_32_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC1_32_CTRLBSET_s    MMIO_REG(0x42002405, struct __struct_TC1_32_CTRLBSET)
struct __struct_TC1_32_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC1_32_CTRLC	MMIO_REG(0x42002406, uint8_t)
#define TC1_32_CTRLC_INVEN0	(1 << 0)
#define TC1_32_CTRLC_INVEN1	(1 << 1)
#define TC1_32_CTRLC_CPTEN0	(1 << 4)
#define TC1_32_CTRLC_CPTEN1	(1 << 5)

#define TC1_32_CTRLC_s    MMIO_REG(0x42002406, struct __struct_TC1_32_CTRLC)
struct __struct_TC1_32_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC1_32_DBGCTRL	MMIO_REG(0x42002408, uint8_t)
#define TC1_32_DBGCTRL_DBGRUN	(1 << 0)

#define TC1_32_DBGCTRL_s    MMIO_REG(0x42002408, struct __struct_TC1_32_DBGCTRL)
struct __struct_TC1_32_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC1_32_EVCTRL	MMIO_REG(0x4200240a, uint16_t)
#define TC1_32_EVCTRL_EVACT(x)	((x) << 0)
#define TC1_32_EVCTRL_EVACT_MSK	0x00000007
#define TC1_32_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_32_EVCTRL_TCINV	(1 << 4)
#define TC1_32_EVCTRL_TCEI	(1 << 5)
#define TC1_32_EVCTRL_OVFEO	(1 << 8)
#define TC1_32_EVCTRL_MCEO0	(1 << 12)
#define TC1_32_EVCTRL_MCEO1	(1 << 13)

#define TC1_32_EVCTRL_s    MMIO_REG(0x4200240a, struct __struct_TC1_32_EVCTRL)
struct __struct_TC1_32_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC1_32_INTENCLR	MMIO_REG(0x4200240c, uint8_t)
#define TC1_32_INTENCLR_OVF	(1 << 0)
#define TC1_32_INTENCLR_ERR	(1 << 1)
#define TC1_32_INTENCLR_SYNCRDY	(1 << 3)
#define TC1_32_INTENCLR_MC0	(1 << 4)
#define TC1_32_INTENCLR_MC1	(1 << 5)

#define TC1_32_INTENCLR_s    MMIO_REG(0x4200240c, struct __struct_TC1_32_INTENCLR)
struct __struct_TC1_32_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_32_INTENSET	MMIO_REG(0x4200240d, uint8_t)
#define TC1_32_INTENSET_OVF	(1 << 0)
#define TC1_32_INTENSET_ERR	(1 << 1)
#define TC1_32_INTENSET_SYNCRDY	(1 << 3)
#define TC1_32_INTENSET_MC0	(1 << 4)
#define TC1_32_INTENSET_MC1	(1 << 5)

#define TC1_32_INTENSET_s    MMIO_REG(0x4200240d, struct __struct_TC1_32_INTENSET)
struct __struct_TC1_32_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_32_INTFLAG	MMIO_REG(0x4200240e, uint8_t)
#define TC1_32_INTFLAG_OVF	(1 << 0)
#define TC1_32_INTFLAG_ERR	(1 << 1)
#define TC1_32_INTFLAG_SYNCRDY	(1 << 3)
#define TC1_32_INTFLAG_MC0	(1 << 4)
#define TC1_32_INTFLAG_MC1	(1 << 5)

#define TC1_32_INTFLAG_s    MMIO_REG(0x4200240e, struct __struct_TC1_32_INTFLAG)
struct __struct_TC1_32_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC1_32_STATUS	MMIO_REG(0x4200240f, uint8_t)
#define TC1_32_STATUS_STOP	(1 << 3)
#define TC1_32_STATUS_SLAVE	(1 << 4)
#define TC1_32_STATUS_SYNCBUSY	(1 << 7)

#define TC1_32_STATUS_s    MMIO_REG(0x4200240f, struct __struct_TC1_32_STATUS)
struct __struct_TC1_32_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC1_32_COUNT	MMIO_REG(0x42002410, uint32_t)
#define TC1_32_COUNT_COUNT(x)	((x) << 0)
#define TC1_32_COUNT_COUNT_MSK	0xffffffff
#define TC1_32_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC1_32_COUNT_s    MMIO_REG(0x42002410, struct __struct_TC1_32_COUNT)
struct __struct_TC1_32_COUNT
{
  uint32_t count : 32;
};

#define TC1_32_CC0	MMIO_REG(0x42002418, uint32_t)
#define TC1_32_CC0_CC(x)	((x) << 0)
#define TC1_32_CC0_CC_MSK	0xffffffff
#define TC1_32_CC0_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC1_32_CC0_s    MMIO_REG(0x42002418, struct __struct_TC1_32_CC0)
struct __struct_TC1_32_CC0
{
  uint32_t cc : 32;
};

#define TC1_32_CC1	MMIO_REG(0x4200241c, uint32_t)
#define TC1_32_CC1_CC(x)	((x) << 0)
#define TC1_32_CC1_CC_MSK	0xffffffff
#define TC1_32_CC1_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC1_32_CC1_s    MMIO_REG(0x4200241c, struct __struct_TC1_32_CC1)
struct __struct_TC1_32_CC1
{
  uint32_t cc : 32;
};

// 0x42002800 TC2_8

#define TC2_8_CTRLA	MMIO_REG(0x42002800, uint16_t)
#define TC2_8_CTRLA_SWRST	(1 << 0)
#define TC2_8_CTRLA_ENABLE	(1 << 1)
#define TC2_8_CTRLA_MODE(x)	((x) << 2)
#define TC2_8_CTRLA_MODE_MSK	0x0000000c
#define TC2_8_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC2_8_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC2_8_CTRLA_WAVEGEN_MSK	0x00000060
#define TC2_8_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC2_8_CTRLA_PRESCALER(x)	((x) << 8)
#define TC2_8_CTRLA_PRESCALER_MSK	0x00000700
#define TC2_8_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC2_8_CTRLA_RUNSTDBY	(1 << 11)
#define TC2_8_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC2_8_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC2_8_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC2_8_CTRLA_s    MMIO_REG(0x42002800, struct __struct_TC2_8_CTRLA)
struct __struct_TC2_8_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC2_8_READREQ	MMIO_REG(0x42002802, uint16_t)
#define TC2_8_READREQ_ADDR(x)	((x) << 0)
#define TC2_8_READREQ_ADDR_MSK	0x0000001f
#define TC2_8_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC2_8_READREQ_RCONT	(1 << 14)
#define TC2_8_READREQ_RREQ	(1 << 15)

#define TC2_8_READREQ_s    MMIO_REG(0x42002802, struct __struct_TC2_8_READREQ)
struct __struct_TC2_8_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC2_8_CTRLBCLR	MMIO_REG(0x42002804, uint8_t)
#define TC2_8_CTRLBCLR_DIR	(1 << 0)
#define TC2_8_CTRLBCLR_ONESHOT	(1 << 2)
#define TC2_8_CTRLBCLR_CMD(x)	((x) << 6)
#define TC2_8_CTRLBCLR_CMD_MSK	0x000000c0
#define TC2_8_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC2_8_CTRLBCLR_s    MMIO_REG(0x42002804, struct __struct_TC2_8_CTRLBCLR)
struct __struct_TC2_8_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC2_8_CTRLBSET	MMIO_REG(0x42002805, uint8_t)
#define TC2_8_CTRLBSET_DIR	(1 << 0)
#define TC2_8_CTRLBSET_ONESHOT	(1 << 2)
#define TC2_8_CTRLBSET_CMD(x)	((x) << 6)
#define TC2_8_CTRLBSET_CMD_MSK	0x000000c0
#define TC2_8_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC2_8_CTRLBSET_s    MMIO_REG(0x42002805, struct __struct_TC2_8_CTRLBSET)
struct __struct_TC2_8_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC2_8_CTRLC	MMIO_REG(0x42002806, uint8_t)
#define TC2_8_CTRLC_INVEN0	(1 << 0)
#define TC2_8_CTRLC_INVEN1	(1 << 1)
#define TC2_8_CTRLC_CPTEN0	(1 << 4)
#define TC2_8_CTRLC_CPTEN1	(1 << 5)

#define TC2_8_CTRLC_s    MMIO_REG(0x42002806, struct __struct_TC2_8_CTRLC)
struct __struct_TC2_8_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC2_8_DBGCTRL	MMIO_REG(0x42002808, uint8_t)
#define TC2_8_DBGCTRL_DBGRUN	(1 << 0)

#define TC2_8_DBGCTRL_s    MMIO_REG(0x42002808, struct __struct_TC2_8_DBGCTRL)
struct __struct_TC2_8_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC2_8_EVCTRL	MMIO_REG(0x4200280a, uint16_t)
#define TC2_8_EVCTRL_EVACT(x)	((x) << 0)
#define TC2_8_EVCTRL_EVACT_MSK	0x00000007
#define TC2_8_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC2_8_EVCTRL_TCINV	(1 << 4)
#define TC2_8_EVCTRL_TCEI	(1 << 5)
#define TC2_8_EVCTRL_OVFEO	(1 << 8)
#define TC2_8_EVCTRL_MCEO0	(1 << 12)
#define TC2_8_EVCTRL_MCEO1	(1 << 13)

#define TC2_8_EVCTRL_s    MMIO_REG(0x4200280a, struct __struct_TC2_8_EVCTRL)
struct __struct_TC2_8_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC2_8_INTENCLR	MMIO_REG(0x4200280c, uint8_t)
#define TC2_8_INTENCLR_OVF	(1 << 0)
#define TC2_8_INTENCLR_ERR	(1 << 1)
#define TC2_8_INTENCLR_SYNCRDY	(1 << 3)
#define TC2_8_INTENCLR_MC0	(1 << 4)
#define TC2_8_INTENCLR_MC1	(1 << 5)

#define TC2_8_INTENCLR_s    MMIO_REG(0x4200280c, struct __struct_TC2_8_INTENCLR)
struct __struct_TC2_8_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_8_INTENSET	MMIO_REG(0x4200280d, uint8_t)
#define TC2_8_INTENSET_OVF	(1 << 0)
#define TC2_8_INTENSET_ERR	(1 << 1)
#define TC2_8_INTENSET_SYNCRDY	(1 << 3)
#define TC2_8_INTENSET_MC0	(1 << 4)
#define TC2_8_INTENSET_MC1	(1 << 5)

#define TC2_8_INTENSET_s    MMIO_REG(0x4200280d, struct __struct_TC2_8_INTENSET)
struct __struct_TC2_8_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_8_INTFLAG	MMIO_REG(0x4200280e, uint8_t)
#define TC2_8_INTFLAG_OVF	(1 << 0)
#define TC2_8_INTFLAG_ERR	(1 << 1)
#define TC2_8_INTFLAG_SYNCRDY	(1 << 3)
#define TC2_8_INTFLAG_MC0	(1 << 4)
#define TC2_8_INTFLAG_MC1	(1 << 5)

#define TC2_8_INTFLAG_s    MMIO_REG(0x4200280e, struct __struct_TC2_8_INTFLAG)
struct __struct_TC2_8_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_8_STATUS	MMIO_REG(0x4200280f, uint8_t)
#define TC2_8_STATUS_STOP	(1 << 3)
#define TC2_8_STATUS_SLAVE	(1 << 4)
#define TC2_8_STATUS_SYNCBUSY	(1 << 7)

#define TC2_8_STATUS_s    MMIO_REG(0x4200280f, struct __struct_TC2_8_STATUS)
struct __struct_TC2_8_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC2_8_COUNT	MMIO_REG(0x42002810, uint8_t)
#define TC2_8_COUNT_COUNT(x)	((x) << 0)
#define TC2_8_COUNT_COUNT_MSK	0x000000ff
#define TC2_8_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xff)

#define TC2_8_COUNT_s    MMIO_REG(0x42002810, struct __struct_TC2_8_COUNT)
struct __struct_TC2_8_COUNT
{
  uint8_t count : 8;
};

#define TC2_8_PER	MMIO_REG(0x42002814, uint8_t)
#define TC2_8_PER_PER(x)	((x) << 0)
#define TC2_8_PER_PER_MSK	0x000000ff
#define TC2_8_PER_PER_VAL(x)	(((x) >> 0) & 0xff)

#define TC2_8_PER_s    MMIO_REG(0x42002814, struct __struct_TC2_8_PER)
struct __struct_TC2_8_PER
{
  uint8_t per : 8;
};

#define TC2_8_CC0	MMIO_REG(0x42002818, uint8_t)
#define TC2_8_CC0_CC(x)	((x) << 0)
#define TC2_8_CC0_CC_MSK	0x000000ff
#define TC2_8_CC0_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC2_8_CC0_s    MMIO_REG(0x42002818, struct __struct_TC2_8_CC0)
struct __struct_TC2_8_CC0
{
  uint8_t cc : 8;
};

#define TC2_8_CC1	MMIO_REG(0x42002819, uint8_t)
#define TC2_8_CC1_CC(x)	((x) << 0)
#define TC2_8_CC1_CC_MSK	0x000000ff
#define TC2_8_CC1_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC2_8_CC1_s    MMIO_REG(0x42002819, struct __struct_TC2_8_CC1)
struct __struct_TC2_8_CC1
{
  uint8_t cc : 8;
};

// 0x42002800 TC2_16

#define TC2_16_CTRLA	MMIO_REG(0x42002800, uint16_t)
#define TC2_16_CTRLA_SWRST	(1 << 0)
#define TC2_16_CTRLA_ENABLE	(1 << 1)
#define TC2_16_CTRLA_MODE(x)	((x) << 2)
#define TC2_16_CTRLA_MODE_MSK	0x0000000c
#define TC2_16_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC2_16_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC2_16_CTRLA_WAVEGEN_MSK	0x00000060
#define TC2_16_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC2_16_CTRLA_PRESCALER(x)	((x) << 8)
#define TC2_16_CTRLA_PRESCALER_MSK	0x00000700
#define TC2_16_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC2_16_CTRLA_RUNSTDBY	(1 << 11)
#define TC2_16_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC2_16_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC2_16_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC2_16_CTRLA_s    MMIO_REG(0x42002800, struct __struct_TC2_16_CTRLA)
struct __struct_TC2_16_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC2_16_READREQ	MMIO_REG(0x42002802, uint16_t)
#define TC2_16_READREQ_ADDR(x)	((x) << 0)
#define TC2_16_READREQ_ADDR_MSK	0x0000001f
#define TC2_16_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC2_16_READREQ_RCONT	(1 << 14)
#define TC2_16_READREQ_RREQ	(1 << 15)

#define TC2_16_READREQ_s    MMIO_REG(0x42002802, struct __struct_TC2_16_READREQ)
struct __struct_TC2_16_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC2_16_CTRLBCLR	MMIO_REG(0x42002804, uint8_t)
#define TC2_16_CTRLBCLR_DIR	(1 << 0)
#define TC2_16_CTRLBCLR_ONESHOT	(1 << 2)
#define TC2_16_CTRLBCLR_CMD(x)	((x) << 6)
#define TC2_16_CTRLBCLR_CMD_MSK	0x000000c0
#define TC2_16_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC2_16_CTRLBCLR_s    MMIO_REG(0x42002804, struct __struct_TC2_16_CTRLBCLR)
struct __struct_TC2_16_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC2_16_CTRLBSET	MMIO_REG(0x42002805, uint8_t)
#define TC2_16_CTRLBSET_DIR	(1 << 0)
#define TC2_16_CTRLBSET_ONESHOT	(1 << 2)
#define TC2_16_CTRLBSET_CMD(x)	((x) << 6)
#define TC2_16_CTRLBSET_CMD_MSK	0x000000c0
#define TC2_16_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC2_16_CTRLBSET_s    MMIO_REG(0x42002805, struct __struct_TC2_16_CTRLBSET)
struct __struct_TC2_16_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC2_16_CTRLC	MMIO_REG(0x42002806, uint8_t)
#define TC2_16_CTRLC_INVEN0	(1 << 0)
#define TC2_16_CTRLC_INVEN1	(1 << 1)
#define TC2_16_CTRLC_CPTEN0	(1 << 4)
#define TC2_16_CTRLC_CPTEN1	(1 << 5)

#define TC2_16_CTRLC_s    MMIO_REG(0x42002806, struct __struct_TC2_16_CTRLC)
struct __struct_TC2_16_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC2_16_DBGCTRL	MMIO_REG(0x42002808, uint8_t)
#define TC2_16_DBGCTRL_DBGRUN	(1 << 0)

#define TC2_16_DBGCTRL_s    MMIO_REG(0x42002808, struct __struct_TC2_16_DBGCTRL)
struct __struct_TC2_16_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC2_16_EVCTRL	MMIO_REG(0x4200280a, uint16_t)
#define TC2_16_EVCTRL_EVACT(x)	((x) << 0)
#define TC2_16_EVCTRL_EVACT_MSK	0x00000007
#define TC2_16_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC2_16_EVCTRL_TCINV	(1 << 4)
#define TC2_16_EVCTRL_TCEI	(1 << 5)
#define TC2_16_EVCTRL_OVFEO	(1 << 8)
#define TC2_16_EVCTRL_MCEO0	(1 << 12)
#define TC2_16_EVCTRL_MCEO1	(1 << 13)

#define TC2_16_EVCTRL_s    MMIO_REG(0x4200280a, struct __struct_TC2_16_EVCTRL)
struct __struct_TC2_16_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC2_16_INTENCLR	MMIO_REG(0x4200280c, uint8_t)
#define TC2_16_INTENCLR_OVF	(1 << 0)
#define TC2_16_INTENCLR_ERR	(1 << 1)
#define TC2_16_INTENCLR_SYNCRDY	(1 << 3)
#define TC2_16_INTENCLR_MC0	(1 << 4)
#define TC2_16_INTENCLR_MC1	(1 << 5)

#define TC2_16_INTENCLR_s    MMIO_REG(0x4200280c, struct __struct_TC2_16_INTENCLR)
struct __struct_TC2_16_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_16_INTENSET	MMIO_REG(0x4200280d, uint8_t)
#define TC2_16_INTENSET_OVF	(1 << 0)
#define TC2_16_INTENSET_ERR	(1 << 1)
#define TC2_16_INTENSET_SYNCRDY	(1 << 3)
#define TC2_16_INTENSET_MC0	(1 << 4)
#define TC2_16_INTENSET_MC1	(1 << 5)

#define TC2_16_INTENSET_s    MMIO_REG(0x4200280d, struct __struct_TC2_16_INTENSET)
struct __struct_TC2_16_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_16_INTFLAG	MMIO_REG(0x4200280e, uint8_t)
#define TC2_16_INTFLAG_OVF	(1 << 0)
#define TC2_16_INTFLAG_ERR	(1 << 1)
#define TC2_16_INTFLAG_SYNCRDY	(1 << 3)
#define TC2_16_INTFLAG_MC0	(1 << 4)
#define TC2_16_INTFLAG_MC1	(1 << 5)

#define TC2_16_INTFLAG_s    MMIO_REG(0x4200280e, struct __struct_TC2_16_INTFLAG)
struct __struct_TC2_16_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_16_STATUS	MMIO_REG(0x4200280f, uint8_t)
#define TC2_16_STATUS_STOP	(1 << 3)
#define TC2_16_STATUS_SLAVE	(1 << 4)
#define TC2_16_STATUS_SYNCBUSY	(1 << 7)

#define TC2_16_STATUS_s    MMIO_REG(0x4200280f, struct __struct_TC2_16_STATUS)
struct __struct_TC2_16_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC2_16_COUNT	MMIO_REG(0x42002810, uint16_t)
#define TC2_16_COUNT_COUNT(x)	((x) << 0)
#define TC2_16_COUNT_COUNT_MSK	0x0000ffff
#define TC2_16_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define TC2_16_COUNT_s    MMIO_REG(0x42002810, struct __struct_TC2_16_COUNT)
struct __struct_TC2_16_COUNT
{
  uint16_t count : 16;
};

#define TC2_16_CC0	MMIO_REG(0x42002818, uint16_t)
#define TC2_16_CC0_CC(x)	((x) << 0)
#define TC2_16_CC0_CC_MSK	0x0000ffff
#define TC2_16_CC0_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC2_16_CC0_s    MMIO_REG(0x42002818, struct __struct_TC2_16_CC0)
struct __struct_TC2_16_CC0
{
  uint16_t cc : 16;
};

#define TC2_16_CC1	MMIO_REG(0x4200281a, uint16_t)
#define TC2_16_CC1_CC(x)	((x) << 0)
#define TC2_16_CC1_CC_MSK	0x0000ffff
#define TC2_16_CC1_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC2_16_CC1_s    MMIO_REG(0x4200281a, struct __struct_TC2_16_CC1)
struct __struct_TC2_16_CC1
{
  uint16_t cc : 16;
};

// 0x42002800 TC2_32

#define TC2_32_CTRLA	MMIO_REG(0x42002800, uint16_t)
#define TC2_32_CTRLA_SWRST	(1 << 0)
#define TC2_32_CTRLA_ENABLE	(1 << 1)
#define TC2_32_CTRLA_MODE(x)	((x) << 2)
#define TC2_32_CTRLA_MODE_MSK	0x0000000c
#define TC2_32_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC2_32_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC2_32_CTRLA_WAVEGEN_MSK	0x00000060
#define TC2_32_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC2_32_CTRLA_PRESCALER(x)	((x) << 8)
#define TC2_32_CTRLA_PRESCALER_MSK	0x00000700
#define TC2_32_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC2_32_CTRLA_RUNSTDBY	(1 << 11)
#define TC2_32_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC2_32_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC2_32_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC2_32_CTRLA_s    MMIO_REG(0x42002800, struct __struct_TC2_32_CTRLA)
struct __struct_TC2_32_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC2_32_READREQ	MMIO_REG(0x42002802, uint16_t)
#define TC2_32_READREQ_ADDR(x)	((x) << 0)
#define TC2_32_READREQ_ADDR_MSK	0x0000001f
#define TC2_32_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC2_32_READREQ_RCONT	(1 << 14)
#define TC2_32_READREQ_RREQ	(1 << 15)

#define TC2_32_READREQ_s    MMIO_REG(0x42002802, struct __struct_TC2_32_READREQ)
struct __struct_TC2_32_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC2_32_CTRLBCLR	MMIO_REG(0x42002804, uint8_t)
#define TC2_32_CTRLBCLR_DIR	(1 << 0)
#define TC2_32_CTRLBCLR_ONESHOT	(1 << 2)
#define TC2_32_CTRLBCLR_CMD(x)	((x) << 6)
#define TC2_32_CTRLBCLR_CMD_MSK	0x000000c0
#define TC2_32_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC2_32_CTRLBCLR_s    MMIO_REG(0x42002804, struct __struct_TC2_32_CTRLBCLR)
struct __struct_TC2_32_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC2_32_CTRLBSET	MMIO_REG(0x42002805, uint8_t)
#define TC2_32_CTRLBSET_DIR	(1 << 0)
#define TC2_32_CTRLBSET_ONESHOT	(1 << 2)
#define TC2_32_CTRLBSET_CMD(x)	((x) << 6)
#define TC2_32_CTRLBSET_CMD_MSK	0x000000c0
#define TC2_32_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC2_32_CTRLBSET_s    MMIO_REG(0x42002805, struct __struct_TC2_32_CTRLBSET)
struct __struct_TC2_32_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC2_32_CTRLC	MMIO_REG(0x42002806, uint8_t)
#define TC2_32_CTRLC_INVEN0	(1 << 0)
#define TC2_32_CTRLC_INVEN1	(1 << 1)
#define TC2_32_CTRLC_CPTEN0	(1 << 4)
#define TC2_32_CTRLC_CPTEN1	(1 << 5)

#define TC2_32_CTRLC_s    MMIO_REG(0x42002806, struct __struct_TC2_32_CTRLC)
struct __struct_TC2_32_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC2_32_DBGCTRL	MMIO_REG(0x42002808, uint8_t)
#define TC2_32_DBGCTRL_DBGRUN	(1 << 0)

#define TC2_32_DBGCTRL_s    MMIO_REG(0x42002808, struct __struct_TC2_32_DBGCTRL)
struct __struct_TC2_32_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC2_32_EVCTRL	MMIO_REG(0x4200280a, uint16_t)
#define TC2_32_EVCTRL_EVACT(x)	((x) << 0)
#define TC2_32_EVCTRL_EVACT_MSK	0x00000007
#define TC2_32_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC2_32_EVCTRL_TCINV	(1 << 4)
#define TC2_32_EVCTRL_TCEI	(1 << 5)
#define TC2_32_EVCTRL_OVFEO	(1 << 8)
#define TC2_32_EVCTRL_MCEO0	(1 << 12)
#define TC2_32_EVCTRL_MCEO1	(1 << 13)

#define TC2_32_EVCTRL_s    MMIO_REG(0x4200280a, struct __struct_TC2_32_EVCTRL)
struct __struct_TC2_32_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC2_32_INTENCLR	MMIO_REG(0x4200280c, uint8_t)
#define TC2_32_INTENCLR_OVF	(1 << 0)
#define TC2_32_INTENCLR_ERR	(1 << 1)
#define TC2_32_INTENCLR_SYNCRDY	(1 << 3)
#define TC2_32_INTENCLR_MC0	(1 << 4)
#define TC2_32_INTENCLR_MC1	(1 << 5)

#define TC2_32_INTENCLR_s    MMIO_REG(0x4200280c, struct __struct_TC2_32_INTENCLR)
struct __struct_TC2_32_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_32_INTENSET	MMIO_REG(0x4200280d, uint8_t)
#define TC2_32_INTENSET_OVF	(1 << 0)
#define TC2_32_INTENSET_ERR	(1 << 1)
#define TC2_32_INTENSET_SYNCRDY	(1 << 3)
#define TC2_32_INTENSET_MC0	(1 << 4)
#define TC2_32_INTENSET_MC1	(1 << 5)

#define TC2_32_INTENSET_s    MMIO_REG(0x4200280d, struct __struct_TC2_32_INTENSET)
struct __struct_TC2_32_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_32_INTFLAG	MMIO_REG(0x4200280e, uint8_t)
#define TC2_32_INTFLAG_OVF	(1 << 0)
#define TC2_32_INTFLAG_ERR	(1 << 1)
#define TC2_32_INTFLAG_SYNCRDY	(1 << 3)
#define TC2_32_INTFLAG_MC0	(1 << 4)
#define TC2_32_INTFLAG_MC1	(1 << 5)

#define TC2_32_INTFLAG_s    MMIO_REG(0x4200280e, struct __struct_TC2_32_INTFLAG)
struct __struct_TC2_32_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC2_32_STATUS	MMIO_REG(0x4200280f, uint8_t)
#define TC2_32_STATUS_STOP	(1 << 3)
#define TC2_32_STATUS_SLAVE	(1 << 4)
#define TC2_32_STATUS_SYNCBUSY	(1 << 7)

#define TC2_32_STATUS_s    MMIO_REG(0x4200280f, struct __struct_TC2_32_STATUS)
struct __struct_TC2_32_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC2_32_COUNT	MMIO_REG(0x42002810, uint32_t)
#define TC2_32_COUNT_COUNT(x)	((x) << 0)
#define TC2_32_COUNT_COUNT_MSK	0xffffffff
#define TC2_32_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC2_32_COUNT_s    MMIO_REG(0x42002810, struct __struct_TC2_32_COUNT)
struct __struct_TC2_32_COUNT
{
  uint32_t count : 32;
};

#define TC2_32_CC0	MMIO_REG(0x42002818, uint32_t)
#define TC2_32_CC0_CC(x)	((x) << 0)
#define TC2_32_CC0_CC_MSK	0xffffffff
#define TC2_32_CC0_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC2_32_CC0_s    MMIO_REG(0x42002818, struct __struct_TC2_32_CC0)
struct __struct_TC2_32_CC0
{
  uint32_t cc : 32;
};

#define TC2_32_CC1	MMIO_REG(0x4200281c, uint32_t)
#define TC2_32_CC1_CC(x)	((x) << 0)
#define TC2_32_CC1_CC_MSK	0xffffffff
#define TC2_32_CC1_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC2_32_CC1_s    MMIO_REG(0x4200281c, struct __struct_TC2_32_CC1)
struct __struct_TC2_32_CC1
{
  uint32_t cc : 32;
};

// 0x42002c00 TC3_8

#define TC3_8_CTRLA	MMIO_REG(0x42002c00, uint16_t)
#define TC3_8_CTRLA_SWRST	(1 << 0)
#define TC3_8_CTRLA_ENABLE	(1 << 1)
#define TC3_8_CTRLA_MODE(x)	((x) << 2)
#define TC3_8_CTRLA_MODE_MSK	0x0000000c
#define TC3_8_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC3_8_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC3_8_CTRLA_WAVEGEN_MSK	0x00000060
#define TC3_8_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC3_8_CTRLA_PRESCALER(x)	((x) << 8)
#define TC3_8_CTRLA_PRESCALER_MSK	0x00000700
#define TC3_8_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC3_8_CTRLA_RUNSTDBY	(1 << 11)
#define TC3_8_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC3_8_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC3_8_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC3_8_CTRLA_s    MMIO_REG(0x42002c00, struct __struct_TC3_8_CTRLA)
struct __struct_TC3_8_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC3_8_READREQ	MMIO_REG(0x42002c02, uint16_t)
#define TC3_8_READREQ_ADDR(x)	((x) << 0)
#define TC3_8_READREQ_ADDR_MSK	0x0000001f
#define TC3_8_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC3_8_READREQ_RCONT	(1 << 14)
#define TC3_8_READREQ_RREQ	(1 << 15)

#define TC3_8_READREQ_s    MMIO_REG(0x42002c02, struct __struct_TC3_8_READREQ)
struct __struct_TC3_8_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC3_8_CTRLBCLR	MMIO_REG(0x42002c04, uint8_t)
#define TC3_8_CTRLBCLR_DIR	(1 << 0)
#define TC3_8_CTRLBCLR_ONESHOT	(1 << 2)
#define TC3_8_CTRLBCLR_CMD(x)	((x) << 6)
#define TC3_8_CTRLBCLR_CMD_MSK	0x000000c0
#define TC3_8_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC3_8_CTRLBCLR_s    MMIO_REG(0x42002c04, struct __struct_TC3_8_CTRLBCLR)
struct __struct_TC3_8_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC3_8_CTRLBSET	MMIO_REG(0x42002c05, uint8_t)
#define TC3_8_CTRLBSET_DIR	(1 << 0)
#define TC3_8_CTRLBSET_ONESHOT	(1 << 2)
#define TC3_8_CTRLBSET_CMD(x)	((x) << 6)
#define TC3_8_CTRLBSET_CMD_MSK	0x000000c0
#define TC3_8_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC3_8_CTRLBSET_s    MMIO_REG(0x42002c05, struct __struct_TC3_8_CTRLBSET)
struct __struct_TC3_8_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC3_8_CTRLC	MMIO_REG(0x42002c06, uint8_t)
#define TC3_8_CTRLC_INVEN0	(1 << 0)
#define TC3_8_CTRLC_INVEN1	(1 << 1)
#define TC3_8_CTRLC_CPTEN0	(1 << 4)
#define TC3_8_CTRLC_CPTEN1	(1 << 5)

#define TC3_8_CTRLC_s    MMIO_REG(0x42002c06, struct __struct_TC3_8_CTRLC)
struct __struct_TC3_8_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC3_8_DBGCTRL	MMIO_REG(0x42002c08, uint8_t)
#define TC3_8_DBGCTRL_DBGRUN	(1 << 0)

#define TC3_8_DBGCTRL_s    MMIO_REG(0x42002c08, struct __struct_TC3_8_DBGCTRL)
struct __struct_TC3_8_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC3_8_EVCTRL	MMIO_REG(0x42002c0a, uint16_t)
#define TC3_8_EVCTRL_EVACT(x)	((x) << 0)
#define TC3_8_EVCTRL_EVACT_MSK	0x00000007
#define TC3_8_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC3_8_EVCTRL_TCINV	(1 << 4)
#define TC3_8_EVCTRL_TCEI	(1 << 5)
#define TC3_8_EVCTRL_OVFEO	(1 << 8)
#define TC3_8_EVCTRL_MCEO0	(1 << 12)
#define TC3_8_EVCTRL_MCEO1	(1 << 13)

#define TC3_8_EVCTRL_s    MMIO_REG(0x42002c0a, struct __struct_TC3_8_EVCTRL)
struct __struct_TC3_8_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC3_8_INTENCLR	MMIO_REG(0x42002c0c, uint8_t)
#define TC3_8_INTENCLR_OVF	(1 << 0)
#define TC3_8_INTENCLR_ERR	(1 << 1)
#define TC3_8_INTENCLR_SYNCRDY	(1 << 3)
#define TC3_8_INTENCLR_MC0	(1 << 4)
#define TC3_8_INTENCLR_MC1	(1 << 5)

#define TC3_8_INTENCLR_s    MMIO_REG(0x42002c0c, struct __struct_TC3_8_INTENCLR)
struct __struct_TC3_8_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_8_INTENSET	MMIO_REG(0x42002c0d, uint8_t)
#define TC3_8_INTENSET_OVF	(1 << 0)
#define TC3_8_INTENSET_ERR	(1 << 1)
#define TC3_8_INTENSET_SYNCRDY	(1 << 3)
#define TC3_8_INTENSET_MC0	(1 << 4)
#define TC3_8_INTENSET_MC1	(1 << 5)

#define TC3_8_INTENSET_s    MMIO_REG(0x42002c0d, struct __struct_TC3_8_INTENSET)
struct __struct_TC3_8_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_8_INTFLAG	MMIO_REG(0x42002c0e, uint8_t)
#define TC3_8_INTFLAG_OVF	(1 << 0)
#define TC3_8_INTFLAG_ERR	(1 << 1)
#define TC3_8_INTFLAG_SYNCRDY	(1 << 3)
#define TC3_8_INTFLAG_MC0	(1 << 4)
#define TC3_8_INTFLAG_MC1	(1 << 5)

#define TC3_8_INTFLAG_s    MMIO_REG(0x42002c0e, struct __struct_TC3_8_INTFLAG)
struct __struct_TC3_8_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_8_STATUS	MMIO_REG(0x42002c0f, uint8_t)
#define TC3_8_STATUS_STOP	(1 << 3)
#define TC3_8_STATUS_SLAVE	(1 << 4)
#define TC3_8_STATUS_SYNCBUSY	(1 << 7)

#define TC3_8_STATUS_s    MMIO_REG(0x42002c0f, struct __struct_TC3_8_STATUS)
struct __struct_TC3_8_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC3_8_COUNT	MMIO_REG(0x42002c10, uint8_t)
#define TC3_8_COUNT_COUNT(x)	((x) << 0)
#define TC3_8_COUNT_COUNT_MSK	0x000000ff
#define TC3_8_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xff)

#define TC3_8_COUNT_s    MMIO_REG(0x42002c10, struct __struct_TC3_8_COUNT)
struct __struct_TC3_8_COUNT
{
  uint8_t count : 8;
};

#define TC3_8_PER	MMIO_REG(0x42002c14, uint8_t)
#define TC3_8_PER_PER(x)	((x) << 0)
#define TC3_8_PER_PER_MSK	0x000000ff
#define TC3_8_PER_PER_VAL(x)	(((x) >> 0) & 0xff)

#define TC3_8_PER_s    MMIO_REG(0x42002c14, struct __struct_TC3_8_PER)
struct __struct_TC3_8_PER
{
  uint8_t per : 8;
};

#define TC3_8_CC0	MMIO_REG(0x42002c18, uint8_t)
#define TC3_8_CC0_CC(x)	((x) << 0)
#define TC3_8_CC0_CC_MSK	0x000000ff
#define TC3_8_CC0_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC3_8_CC0_s    MMIO_REG(0x42002c18, struct __struct_TC3_8_CC0)
struct __struct_TC3_8_CC0
{
  uint8_t cc : 8;
};

#define TC3_8_CC1	MMIO_REG(0x42002c19, uint8_t)
#define TC3_8_CC1_CC(x)	((x) << 0)
#define TC3_8_CC1_CC_MSK	0x000000ff
#define TC3_8_CC1_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC3_8_CC1_s    MMIO_REG(0x42002c19, struct __struct_TC3_8_CC1)
struct __struct_TC3_8_CC1
{
  uint8_t cc : 8;
};

// 0x42002c00 TC3_16

#define TC3_16_CTRLA	MMIO_REG(0x42002c00, uint16_t)
#define TC3_16_CTRLA_SWRST	(1 << 0)
#define TC3_16_CTRLA_ENABLE	(1 << 1)
#define TC3_16_CTRLA_MODE(x)	((x) << 2)
#define TC3_16_CTRLA_MODE_MSK	0x0000000c
#define TC3_16_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC3_16_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC3_16_CTRLA_WAVEGEN_MSK	0x00000060
#define TC3_16_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC3_16_CTRLA_PRESCALER(x)	((x) << 8)
#define TC3_16_CTRLA_PRESCALER_MSK	0x00000700
#define TC3_16_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC3_16_CTRLA_RUNSTDBY	(1 << 11)
#define TC3_16_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC3_16_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC3_16_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC3_16_CTRLA_s    MMIO_REG(0x42002c00, struct __struct_TC3_16_CTRLA)
struct __struct_TC3_16_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC3_16_READREQ	MMIO_REG(0x42002c02, uint16_t)
#define TC3_16_READREQ_ADDR(x)	((x) << 0)
#define TC3_16_READREQ_ADDR_MSK	0x0000001f
#define TC3_16_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC3_16_READREQ_RCONT	(1 << 14)
#define TC3_16_READREQ_RREQ	(1 << 15)

#define TC3_16_READREQ_s    MMIO_REG(0x42002c02, struct __struct_TC3_16_READREQ)
struct __struct_TC3_16_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC3_16_CTRLBCLR	MMIO_REG(0x42002c04, uint8_t)
#define TC3_16_CTRLBCLR_DIR	(1 << 0)
#define TC3_16_CTRLBCLR_ONESHOT	(1 << 2)
#define TC3_16_CTRLBCLR_CMD(x)	((x) << 6)
#define TC3_16_CTRLBCLR_CMD_MSK	0x000000c0
#define TC3_16_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC3_16_CTRLBCLR_s    MMIO_REG(0x42002c04, struct __struct_TC3_16_CTRLBCLR)
struct __struct_TC3_16_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC3_16_CTRLBSET	MMIO_REG(0x42002c05, uint8_t)
#define TC3_16_CTRLBSET_DIR	(1 << 0)
#define TC3_16_CTRLBSET_ONESHOT	(1 << 2)
#define TC3_16_CTRLBSET_CMD(x)	((x) << 6)
#define TC3_16_CTRLBSET_CMD_MSK	0x000000c0
#define TC3_16_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC3_16_CTRLBSET_s    MMIO_REG(0x42002c05, struct __struct_TC3_16_CTRLBSET)
struct __struct_TC3_16_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC3_16_CTRLC	MMIO_REG(0x42002c06, uint8_t)
#define TC3_16_CTRLC_INVEN0	(1 << 0)
#define TC3_16_CTRLC_INVEN1	(1 << 1)
#define TC3_16_CTRLC_CPTEN0	(1 << 4)
#define TC3_16_CTRLC_CPTEN1	(1 << 5)

#define TC3_16_CTRLC_s    MMIO_REG(0x42002c06, struct __struct_TC3_16_CTRLC)
struct __struct_TC3_16_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC3_16_DBGCTRL	MMIO_REG(0x42002c08, uint8_t)
#define TC3_16_DBGCTRL_DBGRUN	(1 << 0)

#define TC3_16_DBGCTRL_s    MMIO_REG(0x42002c08, struct __struct_TC3_16_DBGCTRL)
struct __struct_TC3_16_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC3_16_EVCTRL	MMIO_REG(0x42002c0a, uint16_t)
#define TC3_16_EVCTRL_EVACT(x)	((x) << 0)
#define TC3_16_EVCTRL_EVACT_MSK	0x00000007
#define TC3_16_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC3_16_EVCTRL_TCINV	(1 << 4)
#define TC3_16_EVCTRL_TCEI	(1 << 5)
#define TC3_16_EVCTRL_OVFEO	(1 << 8)
#define TC3_16_EVCTRL_MCEO0	(1 << 12)
#define TC3_16_EVCTRL_MCEO1	(1 << 13)

#define TC3_16_EVCTRL_s    MMIO_REG(0x42002c0a, struct __struct_TC3_16_EVCTRL)
struct __struct_TC3_16_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC3_16_INTENCLR	MMIO_REG(0x42002c0c, uint8_t)
#define TC3_16_INTENCLR_OVF	(1 << 0)
#define TC3_16_INTENCLR_ERR	(1 << 1)
#define TC3_16_INTENCLR_SYNCRDY	(1 << 3)
#define TC3_16_INTENCLR_MC0	(1 << 4)
#define TC3_16_INTENCLR_MC1	(1 << 5)

#define TC3_16_INTENCLR_s    MMIO_REG(0x42002c0c, struct __struct_TC3_16_INTENCLR)
struct __struct_TC3_16_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_16_INTENSET	MMIO_REG(0x42002c0d, uint8_t)
#define TC3_16_INTENSET_OVF	(1 << 0)
#define TC3_16_INTENSET_ERR	(1 << 1)
#define TC3_16_INTENSET_SYNCRDY	(1 << 3)
#define TC3_16_INTENSET_MC0	(1 << 4)
#define TC3_16_INTENSET_MC1	(1 << 5)

#define TC3_16_INTENSET_s    MMIO_REG(0x42002c0d, struct __struct_TC3_16_INTENSET)
struct __struct_TC3_16_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_16_INTFLAG	MMIO_REG(0x42002c0e, uint8_t)
#define TC3_16_INTFLAG_OVF	(1 << 0)
#define TC3_16_INTFLAG_ERR	(1 << 1)
#define TC3_16_INTFLAG_SYNCRDY	(1 << 3)
#define TC3_16_INTFLAG_MC0	(1 << 4)
#define TC3_16_INTFLAG_MC1	(1 << 5)

#define TC3_16_INTFLAG_s    MMIO_REG(0x42002c0e, struct __struct_TC3_16_INTFLAG)
struct __struct_TC3_16_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_16_STATUS	MMIO_REG(0x42002c0f, uint8_t)
#define TC3_16_STATUS_STOP	(1 << 3)
#define TC3_16_STATUS_SLAVE	(1 << 4)
#define TC3_16_STATUS_SYNCBUSY	(1 << 7)

#define TC3_16_STATUS_s    MMIO_REG(0x42002c0f, struct __struct_TC3_16_STATUS)
struct __struct_TC3_16_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC3_16_COUNT	MMIO_REG(0x42002c10, uint16_t)
#define TC3_16_COUNT_COUNT(x)	((x) << 0)
#define TC3_16_COUNT_COUNT_MSK	0x0000ffff
#define TC3_16_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define TC3_16_COUNT_s    MMIO_REG(0x42002c10, struct __struct_TC3_16_COUNT)
struct __struct_TC3_16_COUNT
{
  uint16_t count : 16;
};

#define TC3_16_CC0	MMIO_REG(0x42002c18, uint16_t)
#define TC3_16_CC0_CC(x)	((x) << 0)
#define TC3_16_CC0_CC_MSK	0x0000ffff
#define TC3_16_CC0_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC3_16_CC0_s    MMIO_REG(0x42002c18, struct __struct_TC3_16_CC0)
struct __struct_TC3_16_CC0
{
  uint16_t cc : 16;
};

#define TC3_16_CC1	MMIO_REG(0x42002c1a, uint16_t)
#define TC3_16_CC1_CC(x)	((x) << 0)
#define TC3_16_CC1_CC_MSK	0x0000ffff
#define TC3_16_CC1_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC3_16_CC1_s    MMIO_REG(0x42002c1a, struct __struct_TC3_16_CC1)
struct __struct_TC3_16_CC1
{
  uint16_t cc : 16;
};

// 0x42002c00 TC3_32

#define TC3_32_CTRLA	MMIO_REG(0x42002c00, uint16_t)
#define TC3_32_CTRLA_SWRST	(1 << 0)
#define TC3_32_CTRLA_ENABLE	(1 << 1)
#define TC3_32_CTRLA_MODE(x)	((x) << 2)
#define TC3_32_CTRLA_MODE_MSK	0x0000000c
#define TC3_32_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC3_32_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC3_32_CTRLA_WAVEGEN_MSK	0x00000060
#define TC3_32_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC3_32_CTRLA_PRESCALER(x)	((x) << 8)
#define TC3_32_CTRLA_PRESCALER_MSK	0x00000700
#define TC3_32_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC3_32_CTRLA_RUNSTDBY	(1 << 11)
#define TC3_32_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC3_32_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC3_32_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC3_32_CTRLA_s    MMIO_REG(0x42002c00, struct __struct_TC3_32_CTRLA)
struct __struct_TC3_32_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC3_32_READREQ	MMIO_REG(0x42002c02, uint16_t)
#define TC3_32_READREQ_ADDR(x)	((x) << 0)
#define TC3_32_READREQ_ADDR_MSK	0x0000001f
#define TC3_32_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC3_32_READREQ_RCONT	(1 << 14)
#define TC3_32_READREQ_RREQ	(1 << 15)

#define TC3_32_READREQ_s    MMIO_REG(0x42002c02, struct __struct_TC3_32_READREQ)
struct __struct_TC3_32_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC3_32_CTRLBCLR	MMIO_REG(0x42002c04, uint8_t)
#define TC3_32_CTRLBCLR_DIR	(1 << 0)
#define TC3_32_CTRLBCLR_ONESHOT	(1 << 2)
#define TC3_32_CTRLBCLR_CMD(x)	((x) << 6)
#define TC3_32_CTRLBCLR_CMD_MSK	0x000000c0
#define TC3_32_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC3_32_CTRLBCLR_s    MMIO_REG(0x42002c04, struct __struct_TC3_32_CTRLBCLR)
struct __struct_TC3_32_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC3_32_CTRLBSET	MMIO_REG(0x42002c05, uint8_t)
#define TC3_32_CTRLBSET_DIR	(1 << 0)
#define TC3_32_CTRLBSET_ONESHOT	(1 << 2)
#define TC3_32_CTRLBSET_CMD(x)	((x) << 6)
#define TC3_32_CTRLBSET_CMD_MSK	0x000000c0
#define TC3_32_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC3_32_CTRLBSET_s    MMIO_REG(0x42002c05, struct __struct_TC3_32_CTRLBSET)
struct __struct_TC3_32_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC3_32_CTRLC	MMIO_REG(0x42002c06, uint8_t)
#define TC3_32_CTRLC_INVEN0	(1 << 0)
#define TC3_32_CTRLC_INVEN1	(1 << 1)
#define TC3_32_CTRLC_CPTEN0	(1 << 4)
#define TC3_32_CTRLC_CPTEN1	(1 << 5)

#define TC3_32_CTRLC_s    MMIO_REG(0x42002c06, struct __struct_TC3_32_CTRLC)
struct __struct_TC3_32_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC3_32_DBGCTRL	MMIO_REG(0x42002c08, uint8_t)
#define TC3_32_DBGCTRL_DBGRUN	(1 << 0)

#define TC3_32_DBGCTRL_s    MMIO_REG(0x42002c08, struct __struct_TC3_32_DBGCTRL)
struct __struct_TC3_32_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC3_32_EVCTRL	MMIO_REG(0x42002c0a, uint16_t)
#define TC3_32_EVCTRL_EVACT(x)	((x) << 0)
#define TC3_32_EVCTRL_EVACT_MSK	0x00000007
#define TC3_32_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC3_32_EVCTRL_TCINV	(1 << 4)
#define TC3_32_EVCTRL_TCEI	(1 << 5)
#define TC3_32_EVCTRL_OVFEO	(1 << 8)
#define TC3_32_EVCTRL_MCEO0	(1 << 12)
#define TC3_32_EVCTRL_MCEO1	(1 << 13)

#define TC3_32_EVCTRL_s    MMIO_REG(0x42002c0a, struct __struct_TC3_32_EVCTRL)
struct __struct_TC3_32_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC3_32_INTENCLR	MMIO_REG(0x42002c0c, uint8_t)
#define TC3_32_INTENCLR_OVF	(1 << 0)
#define TC3_32_INTENCLR_ERR	(1 << 1)
#define TC3_32_INTENCLR_SYNCRDY	(1 << 3)
#define TC3_32_INTENCLR_MC0	(1 << 4)
#define TC3_32_INTENCLR_MC1	(1 << 5)

#define TC3_32_INTENCLR_s    MMIO_REG(0x42002c0c, struct __struct_TC3_32_INTENCLR)
struct __struct_TC3_32_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_32_INTENSET	MMIO_REG(0x42002c0d, uint8_t)
#define TC3_32_INTENSET_OVF	(1 << 0)
#define TC3_32_INTENSET_ERR	(1 << 1)
#define TC3_32_INTENSET_SYNCRDY	(1 << 3)
#define TC3_32_INTENSET_MC0	(1 << 4)
#define TC3_32_INTENSET_MC1	(1 << 5)

#define TC3_32_INTENSET_s    MMIO_REG(0x42002c0d, struct __struct_TC3_32_INTENSET)
struct __struct_TC3_32_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_32_INTFLAG	MMIO_REG(0x42002c0e, uint8_t)
#define TC3_32_INTFLAG_OVF	(1 << 0)
#define TC3_32_INTFLAG_ERR	(1 << 1)
#define TC3_32_INTFLAG_SYNCRDY	(1 << 3)
#define TC3_32_INTFLAG_MC0	(1 << 4)
#define TC3_32_INTFLAG_MC1	(1 << 5)

#define TC3_32_INTFLAG_s    MMIO_REG(0x42002c0e, struct __struct_TC3_32_INTFLAG)
struct __struct_TC3_32_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC3_32_STATUS	MMIO_REG(0x42002c0f, uint8_t)
#define TC3_32_STATUS_STOP	(1 << 3)
#define TC3_32_STATUS_SLAVE	(1 << 4)
#define TC3_32_STATUS_SYNCBUSY	(1 << 7)

#define TC3_32_STATUS_s    MMIO_REG(0x42002c0f, struct __struct_TC3_32_STATUS)
struct __struct_TC3_32_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC3_32_COUNT	MMIO_REG(0x42002c10, uint32_t)
#define TC3_32_COUNT_COUNT(x)	((x) << 0)
#define TC3_32_COUNT_COUNT_MSK	0xffffffff
#define TC3_32_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC3_32_COUNT_s    MMIO_REG(0x42002c10, struct __struct_TC3_32_COUNT)
struct __struct_TC3_32_COUNT
{
  uint32_t count : 32;
};

#define TC3_32_CC0	MMIO_REG(0x42002c18, uint32_t)
#define TC3_32_CC0_CC(x)	((x) << 0)
#define TC3_32_CC0_CC_MSK	0xffffffff
#define TC3_32_CC0_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC3_32_CC0_s    MMIO_REG(0x42002c18, struct __struct_TC3_32_CC0)
struct __struct_TC3_32_CC0
{
  uint32_t cc : 32;
};

#define TC3_32_CC1	MMIO_REG(0x42002c1c, uint32_t)
#define TC3_32_CC1_CC(x)	((x) << 0)
#define TC3_32_CC1_CC_MSK	0xffffffff
#define TC3_32_CC1_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC3_32_CC1_s    MMIO_REG(0x42002c1c, struct __struct_TC3_32_CC1)
struct __struct_TC3_32_CC1
{
  uint32_t cc : 32;
};

// 0x42003000 TC4_8

#define TC4_8_CTRLA	MMIO_REG(0x42003000, uint16_t)
#define TC4_8_CTRLA_SWRST	(1 << 0)
#define TC4_8_CTRLA_ENABLE	(1 << 1)
#define TC4_8_CTRLA_MODE(x)	((x) << 2)
#define TC4_8_CTRLA_MODE_MSK	0x0000000c
#define TC4_8_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC4_8_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC4_8_CTRLA_WAVEGEN_MSK	0x00000060
#define TC4_8_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC4_8_CTRLA_PRESCALER(x)	((x) << 8)
#define TC4_8_CTRLA_PRESCALER_MSK	0x00000700
#define TC4_8_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC4_8_CTRLA_RUNSTDBY	(1 << 11)
#define TC4_8_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC4_8_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC4_8_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC4_8_CTRLA_s    MMIO_REG(0x42003000, struct __struct_TC4_8_CTRLA)
struct __struct_TC4_8_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC4_8_READREQ	MMIO_REG(0x42003002, uint16_t)
#define TC4_8_READREQ_ADDR(x)	((x) << 0)
#define TC4_8_READREQ_ADDR_MSK	0x0000001f
#define TC4_8_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC4_8_READREQ_RCONT	(1 << 14)
#define TC4_8_READREQ_RREQ	(1 << 15)

#define TC4_8_READREQ_s    MMIO_REG(0x42003002, struct __struct_TC4_8_READREQ)
struct __struct_TC4_8_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC4_8_CTRLBCLR	MMIO_REG(0x42003004, uint8_t)
#define TC4_8_CTRLBCLR_DIR	(1 << 0)
#define TC4_8_CTRLBCLR_ONESHOT	(1 << 2)
#define TC4_8_CTRLBCLR_CMD(x)	((x) << 6)
#define TC4_8_CTRLBCLR_CMD_MSK	0x000000c0
#define TC4_8_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC4_8_CTRLBCLR_s    MMIO_REG(0x42003004, struct __struct_TC4_8_CTRLBCLR)
struct __struct_TC4_8_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC4_8_CTRLBSET	MMIO_REG(0x42003005, uint8_t)
#define TC4_8_CTRLBSET_DIR	(1 << 0)
#define TC4_8_CTRLBSET_ONESHOT	(1 << 2)
#define TC4_8_CTRLBSET_CMD(x)	((x) << 6)
#define TC4_8_CTRLBSET_CMD_MSK	0x000000c0
#define TC4_8_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC4_8_CTRLBSET_s    MMIO_REG(0x42003005, struct __struct_TC4_8_CTRLBSET)
struct __struct_TC4_8_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC4_8_CTRLC	MMIO_REG(0x42003006, uint8_t)
#define TC4_8_CTRLC_INVEN0	(1 << 0)
#define TC4_8_CTRLC_INVEN1	(1 << 1)
#define TC4_8_CTRLC_CPTEN0	(1 << 4)
#define TC4_8_CTRLC_CPTEN1	(1 << 5)

#define TC4_8_CTRLC_s    MMIO_REG(0x42003006, struct __struct_TC4_8_CTRLC)
struct __struct_TC4_8_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC4_8_DBGCTRL	MMIO_REG(0x42003008, uint8_t)
#define TC4_8_DBGCTRL_DBGRUN	(1 << 0)

#define TC4_8_DBGCTRL_s    MMIO_REG(0x42003008, struct __struct_TC4_8_DBGCTRL)
struct __struct_TC4_8_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC4_8_EVCTRL	MMIO_REG(0x4200300a, uint16_t)
#define TC4_8_EVCTRL_EVACT(x)	((x) << 0)
#define TC4_8_EVCTRL_EVACT_MSK	0x00000007
#define TC4_8_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC4_8_EVCTRL_TCINV	(1 << 4)
#define TC4_8_EVCTRL_TCEI	(1 << 5)
#define TC4_8_EVCTRL_OVFEO	(1 << 8)
#define TC4_8_EVCTRL_MCEO0	(1 << 12)
#define TC4_8_EVCTRL_MCEO1	(1 << 13)

#define TC4_8_EVCTRL_s    MMIO_REG(0x4200300a, struct __struct_TC4_8_EVCTRL)
struct __struct_TC4_8_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC4_8_INTENCLR	MMIO_REG(0x4200300c, uint8_t)
#define TC4_8_INTENCLR_OVF	(1 << 0)
#define TC4_8_INTENCLR_ERR	(1 << 1)
#define TC4_8_INTENCLR_SYNCRDY	(1 << 3)
#define TC4_8_INTENCLR_MC0	(1 << 4)
#define TC4_8_INTENCLR_MC1	(1 << 5)

#define TC4_8_INTENCLR_s    MMIO_REG(0x4200300c, struct __struct_TC4_8_INTENCLR)
struct __struct_TC4_8_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_8_INTENSET	MMIO_REG(0x4200300d, uint8_t)
#define TC4_8_INTENSET_OVF	(1 << 0)
#define TC4_8_INTENSET_ERR	(1 << 1)
#define TC4_8_INTENSET_SYNCRDY	(1 << 3)
#define TC4_8_INTENSET_MC0	(1 << 4)
#define TC4_8_INTENSET_MC1	(1 << 5)

#define TC4_8_INTENSET_s    MMIO_REG(0x4200300d, struct __struct_TC4_8_INTENSET)
struct __struct_TC4_8_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_8_INTFLAG	MMIO_REG(0x4200300e, uint8_t)
#define TC4_8_INTFLAG_OVF	(1 << 0)
#define TC4_8_INTFLAG_ERR	(1 << 1)
#define TC4_8_INTFLAG_SYNCRDY	(1 << 3)
#define TC4_8_INTFLAG_MC0	(1 << 4)
#define TC4_8_INTFLAG_MC1	(1 << 5)

#define TC4_8_INTFLAG_s    MMIO_REG(0x4200300e, struct __struct_TC4_8_INTFLAG)
struct __struct_TC4_8_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_8_STATUS	MMIO_REG(0x4200300f, uint8_t)
#define TC4_8_STATUS_STOP	(1 << 3)
#define TC4_8_STATUS_SLAVE	(1 << 4)
#define TC4_8_STATUS_SYNCBUSY	(1 << 7)

#define TC4_8_STATUS_s    MMIO_REG(0x4200300f, struct __struct_TC4_8_STATUS)
struct __struct_TC4_8_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC4_8_COUNT	MMIO_REG(0x42003010, uint8_t)
#define TC4_8_COUNT_COUNT(x)	((x) << 0)
#define TC4_8_COUNT_COUNT_MSK	0x000000ff
#define TC4_8_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xff)

#define TC4_8_COUNT_s    MMIO_REG(0x42003010, struct __struct_TC4_8_COUNT)
struct __struct_TC4_8_COUNT
{
  uint8_t count : 8;
};

#define TC4_8_PER	MMIO_REG(0x42003014, uint8_t)
#define TC4_8_PER_PER(x)	((x) << 0)
#define TC4_8_PER_PER_MSK	0x000000ff
#define TC4_8_PER_PER_VAL(x)	(((x) >> 0) & 0xff)

#define TC4_8_PER_s    MMIO_REG(0x42003014, struct __struct_TC4_8_PER)
struct __struct_TC4_8_PER
{
  uint8_t per : 8;
};

#define TC4_8_CC0	MMIO_REG(0x42003018, uint8_t)
#define TC4_8_CC0_CC(x)	((x) << 0)
#define TC4_8_CC0_CC_MSK	0x000000ff
#define TC4_8_CC0_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC4_8_CC0_s    MMIO_REG(0x42003018, struct __struct_TC4_8_CC0)
struct __struct_TC4_8_CC0
{
  uint8_t cc : 8;
};

#define TC4_8_CC1	MMIO_REG(0x42003019, uint8_t)
#define TC4_8_CC1_CC(x)	((x) << 0)
#define TC4_8_CC1_CC_MSK	0x000000ff
#define TC4_8_CC1_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC4_8_CC1_s    MMIO_REG(0x42003019, struct __struct_TC4_8_CC1)
struct __struct_TC4_8_CC1
{
  uint8_t cc : 8;
};

// 0x42003000 TC4_16

#define TC4_16_CTRLA	MMIO_REG(0x42003000, uint16_t)
#define TC4_16_CTRLA_SWRST	(1 << 0)
#define TC4_16_CTRLA_ENABLE	(1 << 1)
#define TC4_16_CTRLA_MODE(x)	((x) << 2)
#define TC4_16_CTRLA_MODE_MSK	0x0000000c
#define TC4_16_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC4_16_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC4_16_CTRLA_WAVEGEN_MSK	0x00000060
#define TC4_16_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC4_16_CTRLA_PRESCALER(x)	((x) << 8)
#define TC4_16_CTRLA_PRESCALER_MSK	0x00000700
#define TC4_16_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC4_16_CTRLA_RUNSTDBY	(1 << 11)
#define TC4_16_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC4_16_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC4_16_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC4_16_CTRLA_s    MMIO_REG(0x42003000, struct __struct_TC4_16_CTRLA)
struct __struct_TC4_16_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC4_16_READREQ	MMIO_REG(0x42003002, uint16_t)
#define TC4_16_READREQ_ADDR(x)	((x) << 0)
#define TC4_16_READREQ_ADDR_MSK	0x0000001f
#define TC4_16_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC4_16_READREQ_RCONT	(1 << 14)
#define TC4_16_READREQ_RREQ	(1 << 15)

#define TC4_16_READREQ_s    MMIO_REG(0x42003002, struct __struct_TC4_16_READREQ)
struct __struct_TC4_16_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC4_16_CTRLBCLR	MMIO_REG(0x42003004, uint8_t)
#define TC4_16_CTRLBCLR_DIR	(1 << 0)
#define TC4_16_CTRLBCLR_ONESHOT	(1 << 2)
#define TC4_16_CTRLBCLR_CMD(x)	((x) << 6)
#define TC4_16_CTRLBCLR_CMD_MSK	0x000000c0
#define TC4_16_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC4_16_CTRLBCLR_s    MMIO_REG(0x42003004, struct __struct_TC4_16_CTRLBCLR)
struct __struct_TC4_16_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC4_16_CTRLBSET	MMIO_REG(0x42003005, uint8_t)
#define TC4_16_CTRLBSET_DIR	(1 << 0)
#define TC4_16_CTRLBSET_ONESHOT	(1 << 2)
#define TC4_16_CTRLBSET_CMD(x)	((x) << 6)
#define TC4_16_CTRLBSET_CMD_MSK	0x000000c0
#define TC4_16_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC4_16_CTRLBSET_s    MMIO_REG(0x42003005, struct __struct_TC4_16_CTRLBSET)
struct __struct_TC4_16_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC4_16_CTRLC	MMIO_REG(0x42003006, uint8_t)
#define TC4_16_CTRLC_INVEN0	(1 << 0)
#define TC4_16_CTRLC_INVEN1	(1 << 1)
#define TC4_16_CTRLC_CPTEN0	(1 << 4)
#define TC4_16_CTRLC_CPTEN1	(1 << 5)

#define TC4_16_CTRLC_s    MMIO_REG(0x42003006, struct __struct_TC4_16_CTRLC)
struct __struct_TC4_16_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC4_16_DBGCTRL	MMIO_REG(0x42003008, uint8_t)
#define TC4_16_DBGCTRL_DBGRUN	(1 << 0)

#define TC4_16_DBGCTRL_s    MMIO_REG(0x42003008, struct __struct_TC4_16_DBGCTRL)
struct __struct_TC4_16_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC4_16_EVCTRL	MMIO_REG(0x4200300a, uint16_t)
#define TC4_16_EVCTRL_EVACT(x)	((x) << 0)
#define TC4_16_EVCTRL_EVACT_MSK	0x00000007
#define TC4_16_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC4_16_EVCTRL_TCINV	(1 << 4)
#define TC4_16_EVCTRL_TCEI	(1 << 5)
#define TC4_16_EVCTRL_OVFEO	(1 << 8)
#define TC4_16_EVCTRL_MCEO0	(1 << 12)
#define TC4_16_EVCTRL_MCEO1	(1 << 13)

#define TC4_16_EVCTRL_s    MMIO_REG(0x4200300a, struct __struct_TC4_16_EVCTRL)
struct __struct_TC4_16_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC4_16_INTENCLR	MMIO_REG(0x4200300c, uint8_t)
#define TC4_16_INTENCLR_OVF	(1 << 0)
#define TC4_16_INTENCLR_ERR	(1 << 1)
#define TC4_16_INTENCLR_SYNCRDY	(1 << 3)
#define TC4_16_INTENCLR_MC0	(1 << 4)
#define TC4_16_INTENCLR_MC1	(1 << 5)

#define TC4_16_INTENCLR_s    MMIO_REG(0x4200300c, struct __struct_TC4_16_INTENCLR)
struct __struct_TC4_16_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_16_INTENSET	MMIO_REG(0x4200300d, uint8_t)
#define TC4_16_INTENSET_OVF	(1 << 0)
#define TC4_16_INTENSET_ERR	(1 << 1)
#define TC4_16_INTENSET_SYNCRDY	(1 << 3)
#define TC4_16_INTENSET_MC0	(1 << 4)
#define TC4_16_INTENSET_MC1	(1 << 5)

#define TC4_16_INTENSET_s    MMIO_REG(0x4200300d, struct __struct_TC4_16_INTENSET)
struct __struct_TC4_16_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_16_INTFLAG	MMIO_REG(0x4200300e, uint8_t)
#define TC4_16_INTFLAG_OVF	(1 << 0)
#define TC4_16_INTFLAG_ERR	(1 << 1)
#define TC4_16_INTFLAG_SYNCRDY	(1 << 3)
#define TC4_16_INTFLAG_MC0	(1 << 4)
#define TC4_16_INTFLAG_MC1	(1 << 5)

#define TC4_16_INTFLAG_s    MMIO_REG(0x4200300e, struct __struct_TC4_16_INTFLAG)
struct __struct_TC4_16_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_16_STATUS	MMIO_REG(0x4200300f, uint8_t)
#define TC4_16_STATUS_STOP	(1 << 3)
#define TC4_16_STATUS_SLAVE	(1 << 4)
#define TC4_16_STATUS_SYNCBUSY	(1 << 7)

#define TC4_16_STATUS_s    MMIO_REG(0x4200300f, struct __struct_TC4_16_STATUS)
struct __struct_TC4_16_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC4_16_COUNT	MMIO_REG(0x42003010, uint16_t)
#define TC4_16_COUNT_COUNT(x)	((x) << 0)
#define TC4_16_COUNT_COUNT_MSK	0x0000ffff
#define TC4_16_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define TC4_16_COUNT_s    MMIO_REG(0x42003010, struct __struct_TC4_16_COUNT)
struct __struct_TC4_16_COUNT
{
  uint16_t count : 16;
};

#define TC4_16_CC0	MMIO_REG(0x42003018, uint16_t)
#define TC4_16_CC0_CC(x)	((x) << 0)
#define TC4_16_CC0_CC_MSK	0x0000ffff
#define TC4_16_CC0_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC4_16_CC0_s    MMIO_REG(0x42003018, struct __struct_TC4_16_CC0)
struct __struct_TC4_16_CC0
{
  uint16_t cc : 16;
};

#define TC4_16_CC1	MMIO_REG(0x4200301a, uint16_t)
#define TC4_16_CC1_CC(x)	((x) << 0)
#define TC4_16_CC1_CC_MSK	0x0000ffff
#define TC4_16_CC1_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC4_16_CC1_s    MMIO_REG(0x4200301a, struct __struct_TC4_16_CC1)
struct __struct_TC4_16_CC1
{
  uint16_t cc : 16;
};

// 0x42003000 TC4_32

#define TC4_32_CTRLA	MMIO_REG(0x42003000, uint16_t)
#define TC4_32_CTRLA_SWRST	(1 << 0)
#define TC4_32_CTRLA_ENABLE	(1 << 1)
#define TC4_32_CTRLA_MODE(x)	((x) << 2)
#define TC4_32_CTRLA_MODE_MSK	0x0000000c
#define TC4_32_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC4_32_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC4_32_CTRLA_WAVEGEN_MSK	0x00000060
#define TC4_32_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC4_32_CTRLA_PRESCALER(x)	((x) << 8)
#define TC4_32_CTRLA_PRESCALER_MSK	0x00000700
#define TC4_32_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC4_32_CTRLA_RUNSTDBY	(1 << 11)
#define TC4_32_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC4_32_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC4_32_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC4_32_CTRLA_s    MMIO_REG(0x42003000, struct __struct_TC4_32_CTRLA)
struct __struct_TC4_32_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC4_32_READREQ	MMIO_REG(0x42003002, uint16_t)
#define TC4_32_READREQ_ADDR(x)	((x) << 0)
#define TC4_32_READREQ_ADDR_MSK	0x0000001f
#define TC4_32_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC4_32_READREQ_RCONT	(1 << 14)
#define TC4_32_READREQ_RREQ	(1 << 15)

#define TC4_32_READREQ_s    MMIO_REG(0x42003002, struct __struct_TC4_32_READREQ)
struct __struct_TC4_32_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC4_32_CTRLBCLR	MMIO_REG(0x42003004, uint8_t)
#define TC4_32_CTRLBCLR_DIR	(1 << 0)
#define TC4_32_CTRLBCLR_ONESHOT	(1 << 2)
#define TC4_32_CTRLBCLR_CMD(x)	((x) << 6)
#define TC4_32_CTRLBCLR_CMD_MSK	0x000000c0
#define TC4_32_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC4_32_CTRLBCLR_s    MMIO_REG(0x42003004, struct __struct_TC4_32_CTRLBCLR)
struct __struct_TC4_32_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC4_32_CTRLBSET	MMIO_REG(0x42003005, uint8_t)
#define TC4_32_CTRLBSET_DIR	(1 << 0)
#define TC4_32_CTRLBSET_ONESHOT	(1 << 2)
#define TC4_32_CTRLBSET_CMD(x)	((x) << 6)
#define TC4_32_CTRLBSET_CMD_MSK	0x000000c0
#define TC4_32_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC4_32_CTRLBSET_s    MMIO_REG(0x42003005, struct __struct_TC4_32_CTRLBSET)
struct __struct_TC4_32_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC4_32_CTRLC	MMIO_REG(0x42003006, uint8_t)
#define TC4_32_CTRLC_INVEN0	(1 << 0)
#define TC4_32_CTRLC_INVEN1	(1 << 1)
#define TC4_32_CTRLC_CPTEN0	(1 << 4)
#define TC4_32_CTRLC_CPTEN1	(1 << 5)

#define TC4_32_CTRLC_s    MMIO_REG(0x42003006, struct __struct_TC4_32_CTRLC)
struct __struct_TC4_32_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC4_32_DBGCTRL	MMIO_REG(0x42003008, uint8_t)
#define TC4_32_DBGCTRL_DBGRUN	(1 << 0)

#define TC4_32_DBGCTRL_s    MMIO_REG(0x42003008, struct __struct_TC4_32_DBGCTRL)
struct __struct_TC4_32_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC4_32_EVCTRL	MMIO_REG(0x4200300a, uint16_t)
#define TC4_32_EVCTRL_EVACT(x)	((x) << 0)
#define TC4_32_EVCTRL_EVACT_MSK	0x00000007
#define TC4_32_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC4_32_EVCTRL_TCINV	(1 << 4)
#define TC4_32_EVCTRL_TCEI	(1 << 5)
#define TC4_32_EVCTRL_OVFEO	(1 << 8)
#define TC4_32_EVCTRL_MCEO0	(1 << 12)
#define TC4_32_EVCTRL_MCEO1	(1 << 13)

#define TC4_32_EVCTRL_s    MMIO_REG(0x4200300a, struct __struct_TC4_32_EVCTRL)
struct __struct_TC4_32_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC4_32_INTENCLR	MMIO_REG(0x4200300c, uint8_t)
#define TC4_32_INTENCLR_OVF	(1 << 0)
#define TC4_32_INTENCLR_ERR	(1 << 1)
#define TC4_32_INTENCLR_SYNCRDY	(1 << 3)
#define TC4_32_INTENCLR_MC0	(1 << 4)
#define TC4_32_INTENCLR_MC1	(1 << 5)

#define TC4_32_INTENCLR_s    MMIO_REG(0x4200300c, struct __struct_TC4_32_INTENCLR)
struct __struct_TC4_32_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_32_INTENSET	MMIO_REG(0x4200300d, uint8_t)
#define TC4_32_INTENSET_OVF	(1 << 0)
#define TC4_32_INTENSET_ERR	(1 << 1)
#define TC4_32_INTENSET_SYNCRDY	(1 << 3)
#define TC4_32_INTENSET_MC0	(1 << 4)
#define TC4_32_INTENSET_MC1	(1 << 5)

#define TC4_32_INTENSET_s    MMIO_REG(0x4200300d, struct __struct_TC4_32_INTENSET)
struct __struct_TC4_32_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_32_INTFLAG	MMIO_REG(0x4200300e, uint8_t)
#define TC4_32_INTFLAG_OVF	(1 << 0)
#define TC4_32_INTFLAG_ERR	(1 << 1)
#define TC4_32_INTFLAG_SYNCRDY	(1 << 3)
#define TC4_32_INTFLAG_MC0	(1 << 4)
#define TC4_32_INTFLAG_MC1	(1 << 5)

#define TC4_32_INTFLAG_s    MMIO_REG(0x4200300e, struct __struct_TC4_32_INTFLAG)
struct __struct_TC4_32_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC4_32_STATUS	MMIO_REG(0x4200300f, uint8_t)
#define TC4_32_STATUS_STOP	(1 << 3)
#define TC4_32_STATUS_SLAVE	(1 << 4)
#define TC4_32_STATUS_SYNCBUSY	(1 << 7)

#define TC4_32_STATUS_s    MMIO_REG(0x4200300f, struct __struct_TC4_32_STATUS)
struct __struct_TC4_32_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC4_32_COUNT	MMIO_REG(0x42003010, uint32_t)
#define TC4_32_COUNT_COUNT(x)	((x) << 0)
#define TC4_32_COUNT_COUNT_MSK	0xffffffff
#define TC4_32_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC4_32_COUNT_s    MMIO_REG(0x42003010, struct __struct_TC4_32_COUNT)
struct __struct_TC4_32_COUNT
{
  uint32_t count : 32;
};

#define TC4_32_CC0	MMIO_REG(0x42003018, uint32_t)
#define TC4_32_CC0_CC(x)	((x) << 0)
#define TC4_32_CC0_CC_MSK	0xffffffff
#define TC4_32_CC0_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC4_32_CC0_s    MMIO_REG(0x42003018, struct __struct_TC4_32_CC0)
struct __struct_TC4_32_CC0
{
  uint32_t cc : 32;
};

#define TC4_32_CC1	MMIO_REG(0x4200301c, uint32_t)
#define TC4_32_CC1_CC(x)	((x) << 0)
#define TC4_32_CC1_CC_MSK	0xffffffff
#define TC4_32_CC1_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC4_32_CC1_s    MMIO_REG(0x4200301c, struct __struct_TC4_32_CC1)
struct __struct_TC4_32_CC1
{
  uint32_t cc : 32;
};

// 0x42003400 TC5_8

#define TC5_8_CTRLA	MMIO_REG(0x42003400, uint16_t)
#define TC5_8_CTRLA_SWRST	(1 << 0)
#define TC5_8_CTRLA_ENABLE	(1 << 1)
#define TC5_8_CTRLA_MODE(x)	((x) << 2)
#define TC5_8_CTRLA_MODE_MSK	0x0000000c
#define TC5_8_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC5_8_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC5_8_CTRLA_WAVEGEN_MSK	0x00000060
#define TC5_8_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC5_8_CTRLA_PRESCALER(x)	((x) << 8)
#define TC5_8_CTRLA_PRESCALER_MSK	0x00000700
#define TC5_8_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC5_8_CTRLA_RUNSTDBY	(1 << 11)
#define TC5_8_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC5_8_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC5_8_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC5_8_CTRLA_s    MMIO_REG(0x42003400, struct __struct_TC5_8_CTRLA)
struct __struct_TC5_8_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC5_8_READREQ	MMIO_REG(0x42003402, uint16_t)
#define TC5_8_READREQ_ADDR(x)	((x) << 0)
#define TC5_8_READREQ_ADDR_MSK	0x0000001f
#define TC5_8_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC5_8_READREQ_RCONT	(1 << 14)
#define TC5_8_READREQ_RREQ	(1 << 15)

#define TC5_8_READREQ_s    MMIO_REG(0x42003402, struct __struct_TC5_8_READREQ)
struct __struct_TC5_8_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC5_8_CTRLBCLR	MMIO_REG(0x42003404, uint8_t)
#define TC5_8_CTRLBCLR_DIR	(1 << 0)
#define TC5_8_CTRLBCLR_ONESHOT	(1 << 2)
#define TC5_8_CTRLBCLR_CMD(x)	((x) << 6)
#define TC5_8_CTRLBCLR_CMD_MSK	0x000000c0
#define TC5_8_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC5_8_CTRLBCLR_s    MMIO_REG(0x42003404, struct __struct_TC5_8_CTRLBCLR)
struct __struct_TC5_8_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC5_8_CTRLBSET	MMIO_REG(0x42003405, uint8_t)
#define TC5_8_CTRLBSET_DIR	(1 << 0)
#define TC5_8_CTRLBSET_ONESHOT	(1 << 2)
#define TC5_8_CTRLBSET_CMD(x)	((x) << 6)
#define TC5_8_CTRLBSET_CMD_MSK	0x000000c0
#define TC5_8_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC5_8_CTRLBSET_s    MMIO_REG(0x42003405, struct __struct_TC5_8_CTRLBSET)
struct __struct_TC5_8_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC5_8_CTRLC	MMIO_REG(0x42003406, uint8_t)
#define TC5_8_CTRLC_INVEN0	(1 << 0)
#define TC5_8_CTRLC_INVEN1	(1 << 1)
#define TC5_8_CTRLC_CPTEN0	(1 << 4)
#define TC5_8_CTRLC_CPTEN1	(1 << 5)

#define TC5_8_CTRLC_s    MMIO_REG(0x42003406, struct __struct_TC5_8_CTRLC)
struct __struct_TC5_8_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC5_8_DBGCTRL	MMIO_REG(0x42003408, uint8_t)
#define TC5_8_DBGCTRL_DBGRUN	(1 << 0)

#define TC5_8_DBGCTRL_s    MMIO_REG(0x42003408, struct __struct_TC5_8_DBGCTRL)
struct __struct_TC5_8_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC5_8_EVCTRL	MMIO_REG(0x4200340a, uint16_t)
#define TC5_8_EVCTRL_EVACT(x)	((x) << 0)
#define TC5_8_EVCTRL_EVACT_MSK	0x00000007
#define TC5_8_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC5_8_EVCTRL_TCINV	(1 << 4)
#define TC5_8_EVCTRL_TCEI	(1 << 5)
#define TC5_8_EVCTRL_OVFEO	(1 << 8)
#define TC5_8_EVCTRL_MCEO0	(1 << 12)
#define TC5_8_EVCTRL_MCEO1	(1 << 13)

#define TC5_8_EVCTRL_s    MMIO_REG(0x4200340a, struct __struct_TC5_8_EVCTRL)
struct __struct_TC5_8_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC5_8_INTENCLR	MMIO_REG(0x4200340c, uint8_t)
#define TC5_8_INTENCLR_OVF	(1 << 0)
#define TC5_8_INTENCLR_ERR	(1 << 1)
#define TC5_8_INTENCLR_SYNCRDY	(1 << 3)
#define TC5_8_INTENCLR_MC0	(1 << 4)
#define TC5_8_INTENCLR_MC1	(1 << 5)

#define TC5_8_INTENCLR_s    MMIO_REG(0x4200340c, struct __struct_TC5_8_INTENCLR)
struct __struct_TC5_8_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_8_INTENSET	MMIO_REG(0x4200340d, uint8_t)
#define TC5_8_INTENSET_OVF	(1 << 0)
#define TC5_8_INTENSET_ERR	(1 << 1)
#define TC5_8_INTENSET_SYNCRDY	(1 << 3)
#define TC5_8_INTENSET_MC0	(1 << 4)
#define TC5_8_INTENSET_MC1	(1 << 5)

#define TC5_8_INTENSET_s    MMIO_REG(0x4200340d, struct __struct_TC5_8_INTENSET)
struct __struct_TC5_8_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_8_INTFLAG	MMIO_REG(0x4200340e, uint8_t)
#define TC5_8_INTFLAG_OVF	(1 << 0)
#define TC5_8_INTFLAG_ERR	(1 << 1)
#define TC5_8_INTFLAG_SYNCRDY	(1 << 3)
#define TC5_8_INTFLAG_MC0	(1 << 4)
#define TC5_8_INTFLAG_MC1	(1 << 5)

#define TC5_8_INTFLAG_s    MMIO_REG(0x4200340e, struct __struct_TC5_8_INTFLAG)
struct __struct_TC5_8_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_8_STATUS	MMIO_REG(0x4200340f, uint8_t)
#define TC5_8_STATUS_STOP	(1 << 3)
#define TC5_8_STATUS_SLAVE	(1 << 4)
#define TC5_8_STATUS_SYNCBUSY	(1 << 7)

#define TC5_8_STATUS_s    MMIO_REG(0x4200340f, struct __struct_TC5_8_STATUS)
struct __struct_TC5_8_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC5_8_COUNT	MMIO_REG(0x42003410, uint8_t)
#define TC5_8_COUNT_COUNT(x)	((x) << 0)
#define TC5_8_COUNT_COUNT_MSK	0x000000ff
#define TC5_8_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xff)

#define TC5_8_COUNT_s    MMIO_REG(0x42003410, struct __struct_TC5_8_COUNT)
struct __struct_TC5_8_COUNT
{
  uint8_t count : 8;
};

#define TC5_8_PER	MMIO_REG(0x42003414, uint8_t)
#define TC5_8_PER_PER(x)	((x) << 0)
#define TC5_8_PER_PER_MSK	0x000000ff
#define TC5_8_PER_PER_VAL(x)	(((x) >> 0) & 0xff)

#define TC5_8_PER_s    MMIO_REG(0x42003414, struct __struct_TC5_8_PER)
struct __struct_TC5_8_PER
{
  uint8_t per : 8;
};

#define TC5_8_CC0	MMIO_REG(0x42003418, uint8_t)
#define TC5_8_CC0_CC(x)	((x) << 0)
#define TC5_8_CC0_CC_MSK	0x000000ff
#define TC5_8_CC0_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC5_8_CC0_s    MMIO_REG(0x42003418, struct __struct_TC5_8_CC0)
struct __struct_TC5_8_CC0
{
  uint8_t cc : 8;
};

#define TC5_8_CC1	MMIO_REG(0x42003419, uint8_t)
#define TC5_8_CC1_CC(x)	((x) << 0)
#define TC5_8_CC1_CC_MSK	0x000000ff
#define TC5_8_CC1_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC5_8_CC1_s    MMIO_REG(0x42003419, struct __struct_TC5_8_CC1)
struct __struct_TC5_8_CC1
{
  uint8_t cc : 8;
};

// 0x42003400 TC5_16

#define TC5_16_CTRLA	MMIO_REG(0x42003400, uint16_t)
#define TC5_16_CTRLA_SWRST	(1 << 0)
#define TC5_16_CTRLA_ENABLE	(1 << 1)
#define TC5_16_CTRLA_MODE(x)	((x) << 2)
#define TC5_16_CTRLA_MODE_MSK	0x0000000c
#define TC5_16_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC5_16_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC5_16_CTRLA_WAVEGEN_MSK	0x00000060
#define TC5_16_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC5_16_CTRLA_PRESCALER(x)	((x) << 8)
#define TC5_16_CTRLA_PRESCALER_MSK	0x00000700
#define TC5_16_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC5_16_CTRLA_RUNSTDBY	(1 << 11)
#define TC5_16_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC5_16_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC5_16_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC5_16_CTRLA_s    MMIO_REG(0x42003400, struct __struct_TC5_16_CTRLA)
struct __struct_TC5_16_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC5_16_READREQ	MMIO_REG(0x42003402, uint16_t)
#define TC5_16_READREQ_ADDR(x)	((x) << 0)
#define TC5_16_READREQ_ADDR_MSK	0x0000001f
#define TC5_16_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC5_16_READREQ_RCONT	(1 << 14)
#define TC5_16_READREQ_RREQ	(1 << 15)

#define TC5_16_READREQ_s    MMIO_REG(0x42003402, struct __struct_TC5_16_READREQ)
struct __struct_TC5_16_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC5_16_CTRLBCLR	MMIO_REG(0x42003404, uint8_t)
#define TC5_16_CTRLBCLR_DIR	(1 << 0)
#define TC5_16_CTRLBCLR_ONESHOT	(1 << 2)
#define TC5_16_CTRLBCLR_CMD(x)	((x) << 6)
#define TC5_16_CTRLBCLR_CMD_MSK	0x000000c0
#define TC5_16_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC5_16_CTRLBCLR_s    MMIO_REG(0x42003404, struct __struct_TC5_16_CTRLBCLR)
struct __struct_TC5_16_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC5_16_CTRLBSET	MMIO_REG(0x42003405, uint8_t)
#define TC5_16_CTRLBSET_DIR	(1 << 0)
#define TC5_16_CTRLBSET_ONESHOT	(1 << 2)
#define TC5_16_CTRLBSET_CMD(x)	((x) << 6)
#define TC5_16_CTRLBSET_CMD_MSK	0x000000c0
#define TC5_16_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC5_16_CTRLBSET_s    MMIO_REG(0x42003405, struct __struct_TC5_16_CTRLBSET)
struct __struct_TC5_16_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC5_16_CTRLC	MMIO_REG(0x42003406, uint8_t)
#define TC5_16_CTRLC_INVEN0	(1 << 0)
#define TC5_16_CTRLC_INVEN1	(1 << 1)
#define TC5_16_CTRLC_CPTEN0	(1 << 4)
#define TC5_16_CTRLC_CPTEN1	(1 << 5)

#define TC5_16_CTRLC_s    MMIO_REG(0x42003406, struct __struct_TC5_16_CTRLC)
struct __struct_TC5_16_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC5_16_DBGCTRL	MMIO_REG(0x42003408, uint8_t)
#define TC5_16_DBGCTRL_DBGRUN	(1 << 0)

#define TC5_16_DBGCTRL_s    MMIO_REG(0x42003408, struct __struct_TC5_16_DBGCTRL)
struct __struct_TC5_16_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC5_16_EVCTRL	MMIO_REG(0x4200340a, uint16_t)
#define TC5_16_EVCTRL_EVACT(x)	((x) << 0)
#define TC5_16_EVCTRL_EVACT_MSK	0x00000007
#define TC5_16_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC5_16_EVCTRL_TCINV	(1 << 4)
#define TC5_16_EVCTRL_TCEI	(1 << 5)
#define TC5_16_EVCTRL_OVFEO	(1 << 8)
#define TC5_16_EVCTRL_MCEO0	(1 << 12)
#define TC5_16_EVCTRL_MCEO1	(1 << 13)

#define TC5_16_EVCTRL_s    MMIO_REG(0x4200340a, struct __struct_TC5_16_EVCTRL)
struct __struct_TC5_16_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC5_16_INTENCLR	MMIO_REG(0x4200340c, uint8_t)
#define TC5_16_INTENCLR_OVF	(1 << 0)
#define TC5_16_INTENCLR_ERR	(1 << 1)
#define TC5_16_INTENCLR_SYNCRDY	(1 << 3)
#define TC5_16_INTENCLR_MC0	(1 << 4)
#define TC5_16_INTENCLR_MC1	(1 << 5)

#define TC5_16_INTENCLR_s    MMIO_REG(0x4200340c, struct __struct_TC5_16_INTENCLR)
struct __struct_TC5_16_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_16_INTENSET	MMIO_REG(0x4200340d, uint8_t)
#define TC5_16_INTENSET_OVF	(1 << 0)
#define TC5_16_INTENSET_ERR	(1 << 1)
#define TC5_16_INTENSET_SYNCRDY	(1 << 3)
#define TC5_16_INTENSET_MC0	(1 << 4)
#define TC5_16_INTENSET_MC1	(1 << 5)

#define TC5_16_INTENSET_s    MMIO_REG(0x4200340d, struct __struct_TC5_16_INTENSET)
struct __struct_TC5_16_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_16_INTFLAG	MMIO_REG(0x4200340e, uint8_t)
#define TC5_16_INTFLAG_OVF	(1 << 0)
#define TC5_16_INTFLAG_ERR	(1 << 1)
#define TC5_16_INTFLAG_SYNCRDY	(1 << 3)
#define TC5_16_INTFLAG_MC0	(1 << 4)
#define TC5_16_INTFLAG_MC1	(1 << 5)

#define TC5_16_INTFLAG_s    MMIO_REG(0x4200340e, struct __struct_TC5_16_INTFLAG)
struct __struct_TC5_16_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_16_STATUS	MMIO_REG(0x4200340f, uint8_t)
#define TC5_16_STATUS_STOP	(1 << 3)
#define TC5_16_STATUS_SLAVE	(1 << 4)
#define TC5_16_STATUS_SYNCBUSY	(1 << 7)

#define TC5_16_STATUS_s    MMIO_REG(0x4200340f, struct __struct_TC5_16_STATUS)
struct __struct_TC5_16_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC5_16_COUNT	MMIO_REG(0x42003410, uint16_t)
#define TC5_16_COUNT_COUNT(x)	((x) << 0)
#define TC5_16_COUNT_COUNT_MSK	0x0000ffff
#define TC5_16_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define TC5_16_COUNT_s    MMIO_REG(0x42003410, struct __struct_TC5_16_COUNT)
struct __struct_TC5_16_COUNT
{
  uint16_t count : 16;
};

#define TC5_16_CC0	MMIO_REG(0x42003418, uint16_t)
#define TC5_16_CC0_CC(x)	((x) << 0)
#define TC5_16_CC0_CC_MSK	0x0000ffff
#define TC5_16_CC0_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC5_16_CC0_s    MMIO_REG(0x42003418, struct __struct_TC5_16_CC0)
struct __struct_TC5_16_CC0
{
  uint16_t cc : 16;
};

#define TC5_16_CC1	MMIO_REG(0x4200341a, uint16_t)
#define TC5_16_CC1_CC(x)	((x) << 0)
#define TC5_16_CC1_CC_MSK	0x0000ffff
#define TC5_16_CC1_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC5_16_CC1_s    MMIO_REG(0x4200341a, struct __struct_TC5_16_CC1)
struct __struct_TC5_16_CC1
{
  uint16_t cc : 16;
};

// 0x42003400 TC5_32

#define TC5_32_CTRLA	MMIO_REG(0x42003400, uint16_t)
#define TC5_32_CTRLA_SWRST	(1 << 0)
#define TC5_32_CTRLA_ENABLE	(1 << 1)
#define TC5_32_CTRLA_MODE(x)	((x) << 2)
#define TC5_32_CTRLA_MODE_MSK	0x0000000c
#define TC5_32_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC5_32_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC5_32_CTRLA_WAVEGEN_MSK	0x00000060
#define TC5_32_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC5_32_CTRLA_PRESCALER(x)	((x) << 8)
#define TC5_32_CTRLA_PRESCALER_MSK	0x00000700
#define TC5_32_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC5_32_CTRLA_RUNSTDBY	(1 << 11)
#define TC5_32_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC5_32_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC5_32_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC5_32_CTRLA_s    MMIO_REG(0x42003400, struct __struct_TC5_32_CTRLA)
struct __struct_TC5_32_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC5_32_READREQ	MMIO_REG(0x42003402, uint16_t)
#define TC5_32_READREQ_ADDR(x)	((x) << 0)
#define TC5_32_READREQ_ADDR_MSK	0x0000001f
#define TC5_32_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC5_32_READREQ_RCONT	(1 << 14)
#define TC5_32_READREQ_RREQ	(1 << 15)

#define TC5_32_READREQ_s    MMIO_REG(0x42003402, struct __struct_TC5_32_READREQ)
struct __struct_TC5_32_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC5_32_CTRLBCLR	MMIO_REG(0x42003404, uint8_t)
#define TC5_32_CTRLBCLR_DIR	(1 << 0)
#define TC5_32_CTRLBCLR_ONESHOT	(1 << 2)
#define TC5_32_CTRLBCLR_CMD(x)	((x) << 6)
#define TC5_32_CTRLBCLR_CMD_MSK	0x000000c0
#define TC5_32_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC5_32_CTRLBCLR_s    MMIO_REG(0x42003404, struct __struct_TC5_32_CTRLBCLR)
struct __struct_TC5_32_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC5_32_CTRLBSET	MMIO_REG(0x42003405, uint8_t)
#define TC5_32_CTRLBSET_DIR	(1 << 0)
#define TC5_32_CTRLBSET_ONESHOT	(1 << 2)
#define TC5_32_CTRLBSET_CMD(x)	((x) << 6)
#define TC5_32_CTRLBSET_CMD_MSK	0x000000c0
#define TC5_32_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC5_32_CTRLBSET_s    MMIO_REG(0x42003405, struct __struct_TC5_32_CTRLBSET)
struct __struct_TC5_32_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC5_32_CTRLC	MMIO_REG(0x42003406, uint8_t)
#define TC5_32_CTRLC_INVEN0	(1 << 0)
#define TC5_32_CTRLC_INVEN1	(1 << 1)
#define TC5_32_CTRLC_CPTEN0	(1 << 4)
#define TC5_32_CTRLC_CPTEN1	(1 << 5)

#define TC5_32_CTRLC_s    MMIO_REG(0x42003406, struct __struct_TC5_32_CTRLC)
struct __struct_TC5_32_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC5_32_DBGCTRL	MMIO_REG(0x42003408, uint8_t)
#define TC5_32_DBGCTRL_DBGRUN	(1 << 0)

#define TC5_32_DBGCTRL_s    MMIO_REG(0x42003408, struct __struct_TC5_32_DBGCTRL)
struct __struct_TC5_32_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC5_32_EVCTRL	MMIO_REG(0x4200340a, uint16_t)
#define TC5_32_EVCTRL_EVACT(x)	((x) << 0)
#define TC5_32_EVCTRL_EVACT_MSK	0x00000007
#define TC5_32_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC5_32_EVCTRL_TCINV	(1 << 4)
#define TC5_32_EVCTRL_TCEI	(1 << 5)
#define TC5_32_EVCTRL_OVFEO	(1 << 8)
#define TC5_32_EVCTRL_MCEO0	(1 << 12)
#define TC5_32_EVCTRL_MCEO1	(1 << 13)

#define TC5_32_EVCTRL_s    MMIO_REG(0x4200340a, struct __struct_TC5_32_EVCTRL)
struct __struct_TC5_32_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC5_32_INTENCLR	MMIO_REG(0x4200340c, uint8_t)
#define TC5_32_INTENCLR_OVF	(1 << 0)
#define TC5_32_INTENCLR_ERR	(1 << 1)
#define TC5_32_INTENCLR_SYNCRDY	(1 << 3)
#define TC5_32_INTENCLR_MC0	(1 << 4)
#define TC5_32_INTENCLR_MC1	(1 << 5)

#define TC5_32_INTENCLR_s    MMIO_REG(0x4200340c, struct __struct_TC5_32_INTENCLR)
struct __struct_TC5_32_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_32_INTENSET	MMIO_REG(0x4200340d, uint8_t)
#define TC5_32_INTENSET_OVF	(1 << 0)
#define TC5_32_INTENSET_ERR	(1 << 1)
#define TC5_32_INTENSET_SYNCRDY	(1 << 3)
#define TC5_32_INTENSET_MC0	(1 << 4)
#define TC5_32_INTENSET_MC1	(1 << 5)

#define TC5_32_INTENSET_s    MMIO_REG(0x4200340d, struct __struct_TC5_32_INTENSET)
struct __struct_TC5_32_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_32_INTFLAG	MMIO_REG(0x4200340e, uint8_t)
#define TC5_32_INTFLAG_OVF	(1 << 0)
#define TC5_32_INTFLAG_ERR	(1 << 1)
#define TC5_32_INTFLAG_SYNCRDY	(1 << 3)
#define TC5_32_INTFLAG_MC0	(1 << 4)
#define TC5_32_INTFLAG_MC1	(1 << 5)

#define TC5_32_INTFLAG_s    MMIO_REG(0x4200340e, struct __struct_TC5_32_INTFLAG)
struct __struct_TC5_32_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC5_32_STATUS	MMIO_REG(0x4200340f, uint8_t)
#define TC5_32_STATUS_STOP	(1 << 3)
#define TC5_32_STATUS_SLAVE	(1 << 4)
#define TC5_32_STATUS_SYNCBUSY	(1 << 7)

#define TC5_32_STATUS_s    MMIO_REG(0x4200340f, struct __struct_TC5_32_STATUS)
struct __struct_TC5_32_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC5_32_COUNT	MMIO_REG(0x42003410, uint32_t)
#define TC5_32_COUNT_COUNT(x)	((x) << 0)
#define TC5_32_COUNT_COUNT_MSK	0xffffffff
#define TC5_32_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC5_32_COUNT_s    MMIO_REG(0x42003410, struct __struct_TC5_32_COUNT)
struct __struct_TC5_32_COUNT
{
  uint32_t count : 32;
};

#define TC5_32_CC0	MMIO_REG(0x42003418, uint32_t)
#define TC5_32_CC0_CC(x)	((x) << 0)
#define TC5_32_CC0_CC_MSK	0xffffffff
#define TC5_32_CC0_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC5_32_CC0_s    MMIO_REG(0x42003418, struct __struct_TC5_32_CC0)
struct __struct_TC5_32_CC0
{
  uint32_t cc : 32;
};

#define TC5_32_CC1	MMIO_REG(0x4200341c, uint32_t)
#define TC5_32_CC1_CC(x)	((x) << 0)
#define TC5_32_CC1_CC_MSK	0xffffffff
#define TC5_32_CC1_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC5_32_CC1_s    MMIO_REG(0x4200341c, struct __struct_TC5_32_CC1)
struct __struct_TC5_32_CC1
{
  uint32_t cc : 32;
};

// 0x42003800 TC6_8

#define TC6_8_CTRLA	MMIO_REG(0x42003800, uint16_t)
#define TC6_8_CTRLA_SWRST	(1 << 0)
#define TC6_8_CTRLA_ENABLE	(1 << 1)
#define TC6_8_CTRLA_MODE(x)	((x) << 2)
#define TC6_8_CTRLA_MODE_MSK	0x0000000c
#define TC6_8_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC6_8_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC6_8_CTRLA_WAVEGEN_MSK	0x00000060
#define TC6_8_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC6_8_CTRLA_PRESCALER(x)	((x) << 8)
#define TC6_8_CTRLA_PRESCALER_MSK	0x00000700
#define TC6_8_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC6_8_CTRLA_RUNSTDBY	(1 << 11)
#define TC6_8_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC6_8_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC6_8_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC6_8_CTRLA_s    MMIO_REG(0x42003800, struct __struct_TC6_8_CTRLA)
struct __struct_TC6_8_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC6_8_READREQ	MMIO_REG(0x42003802, uint16_t)
#define TC6_8_READREQ_ADDR(x)	((x) << 0)
#define TC6_8_READREQ_ADDR_MSK	0x0000001f
#define TC6_8_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC6_8_READREQ_RCONT	(1 << 14)
#define TC6_8_READREQ_RREQ	(1 << 15)

#define TC6_8_READREQ_s    MMIO_REG(0x42003802, struct __struct_TC6_8_READREQ)
struct __struct_TC6_8_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC6_8_CTRLBCLR	MMIO_REG(0x42003804, uint8_t)
#define TC6_8_CTRLBCLR_DIR	(1 << 0)
#define TC6_8_CTRLBCLR_ONESHOT	(1 << 2)
#define TC6_8_CTRLBCLR_CMD(x)	((x) << 6)
#define TC6_8_CTRLBCLR_CMD_MSK	0x000000c0
#define TC6_8_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC6_8_CTRLBCLR_s    MMIO_REG(0x42003804, struct __struct_TC6_8_CTRLBCLR)
struct __struct_TC6_8_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC6_8_CTRLBSET	MMIO_REG(0x42003805, uint8_t)
#define TC6_8_CTRLBSET_DIR	(1 << 0)
#define TC6_8_CTRLBSET_ONESHOT	(1 << 2)
#define TC6_8_CTRLBSET_CMD(x)	((x) << 6)
#define TC6_8_CTRLBSET_CMD_MSK	0x000000c0
#define TC6_8_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC6_8_CTRLBSET_s    MMIO_REG(0x42003805, struct __struct_TC6_8_CTRLBSET)
struct __struct_TC6_8_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC6_8_CTRLC	MMIO_REG(0x42003806, uint8_t)
#define TC6_8_CTRLC_INVEN0	(1 << 0)
#define TC6_8_CTRLC_INVEN1	(1 << 1)
#define TC6_8_CTRLC_CPTEN0	(1 << 4)
#define TC6_8_CTRLC_CPTEN1	(1 << 5)

#define TC6_8_CTRLC_s    MMIO_REG(0x42003806, struct __struct_TC6_8_CTRLC)
struct __struct_TC6_8_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC6_8_DBGCTRL	MMIO_REG(0x42003808, uint8_t)
#define TC6_8_DBGCTRL_DBGRUN	(1 << 0)

#define TC6_8_DBGCTRL_s    MMIO_REG(0x42003808, struct __struct_TC6_8_DBGCTRL)
struct __struct_TC6_8_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC6_8_EVCTRL	MMIO_REG(0x4200380a, uint16_t)
#define TC6_8_EVCTRL_EVACT(x)	((x) << 0)
#define TC6_8_EVCTRL_EVACT_MSK	0x00000007
#define TC6_8_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC6_8_EVCTRL_TCINV	(1 << 4)
#define TC6_8_EVCTRL_TCEI	(1 << 5)
#define TC6_8_EVCTRL_OVFEO	(1 << 8)
#define TC6_8_EVCTRL_MCEO0	(1 << 12)
#define TC6_8_EVCTRL_MCEO1	(1 << 13)

#define TC6_8_EVCTRL_s    MMIO_REG(0x4200380a, struct __struct_TC6_8_EVCTRL)
struct __struct_TC6_8_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC6_8_INTENCLR	MMIO_REG(0x4200380c, uint8_t)
#define TC6_8_INTENCLR_OVF	(1 << 0)
#define TC6_8_INTENCLR_ERR	(1 << 1)
#define TC6_8_INTENCLR_SYNCRDY	(1 << 3)
#define TC6_8_INTENCLR_MC0	(1 << 4)
#define TC6_8_INTENCLR_MC1	(1 << 5)

#define TC6_8_INTENCLR_s    MMIO_REG(0x4200380c, struct __struct_TC6_8_INTENCLR)
struct __struct_TC6_8_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_8_INTENSET	MMIO_REG(0x4200380d, uint8_t)
#define TC6_8_INTENSET_OVF	(1 << 0)
#define TC6_8_INTENSET_ERR	(1 << 1)
#define TC6_8_INTENSET_SYNCRDY	(1 << 3)
#define TC6_8_INTENSET_MC0	(1 << 4)
#define TC6_8_INTENSET_MC1	(1 << 5)

#define TC6_8_INTENSET_s    MMIO_REG(0x4200380d, struct __struct_TC6_8_INTENSET)
struct __struct_TC6_8_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_8_INTFLAG	MMIO_REG(0x4200380e, uint8_t)
#define TC6_8_INTFLAG_OVF	(1 << 0)
#define TC6_8_INTFLAG_ERR	(1 << 1)
#define TC6_8_INTFLAG_SYNCRDY	(1 << 3)
#define TC6_8_INTFLAG_MC0	(1 << 4)
#define TC6_8_INTFLAG_MC1	(1 << 5)

#define TC6_8_INTFLAG_s    MMIO_REG(0x4200380e, struct __struct_TC6_8_INTFLAG)
struct __struct_TC6_8_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_8_STATUS	MMIO_REG(0x4200380f, uint8_t)
#define TC6_8_STATUS_STOP	(1 << 3)
#define TC6_8_STATUS_SLAVE	(1 << 4)
#define TC6_8_STATUS_SYNCBUSY	(1 << 7)

#define TC6_8_STATUS_s    MMIO_REG(0x4200380f, struct __struct_TC6_8_STATUS)
struct __struct_TC6_8_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC6_8_COUNT	MMIO_REG(0x42003810, uint8_t)
#define TC6_8_COUNT_COUNT(x)	((x) << 0)
#define TC6_8_COUNT_COUNT_MSK	0x000000ff
#define TC6_8_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xff)

#define TC6_8_COUNT_s    MMIO_REG(0x42003810, struct __struct_TC6_8_COUNT)
struct __struct_TC6_8_COUNT
{
  uint8_t count : 8;
};

#define TC6_8_PER	MMIO_REG(0x42003814, uint8_t)
#define TC6_8_PER_PER(x)	((x) << 0)
#define TC6_8_PER_PER_MSK	0x000000ff
#define TC6_8_PER_PER_VAL(x)	(((x) >> 0) & 0xff)

#define TC6_8_PER_s    MMIO_REG(0x42003814, struct __struct_TC6_8_PER)
struct __struct_TC6_8_PER
{
  uint8_t per : 8;
};

#define TC6_8_CC0	MMIO_REG(0x42003818, uint8_t)
#define TC6_8_CC0_CC(x)	((x) << 0)
#define TC6_8_CC0_CC_MSK	0x000000ff
#define TC6_8_CC0_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC6_8_CC0_s    MMIO_REG(0x42003818, struct __struct_TC6_8_CC0)
struct __struct_TC6_8_CC0
{
  uint8_t cc : 8;
};

#define TC6_8_CC1	MMIO_REG(0x42003819, uint8_t)
#define TC6_8_CC1_CC(x)	((x) << 0)
#define TC6_8_CC1_CC_MSK	0x000000ff
#define TC6_8_CC1_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC6_8_CC1_s    MMIO_REG(0x42003819, struct __struct_TC6_8_CC1)
struct __struct_TC6_8_CC1
{
  uint8_t cc : 8;
};

// 0x42003800 TC6_16

#define TC6_16_CTRLA	MMIO_REG(0x42003800, uint16_t)
#define TC6_16_CTRLA_SWRST	(1 << 0)
#define TC6_16_CTRLA_ENABLE	(1 << 1)
#define TC6_16_CTRLA_MODE(x)	((x) << 2)
#define TC6_16_CTRLA_MODE_MSK	0x0000000c
#define TC6_16_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC6_16_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC6_16_CTRLA_WAVEGEN_MSK	0x00000060
#define TC6_16_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC6_16_CTRLA_PRESCALER(x)	((x) << 8)
#define TC6_16_CTRLA_PRESCALER_MSK	0x00000700
#define TC6_16_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC6_16_CTRLA_RUNSTDBY	(1 << 11)
#define TC6_16_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC6_16_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC6_16_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC6_16_CTRLA_s    MMIO_REG(0x42003800, struct __struct_TC6_16_CTRLA)
struct __struct_TC6_16_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC6_16_READREQ	MMIO_REG(0x42003802, uint16_t)
#define TC6_16_READREQ_ADDR(x)	((x) << 0)
#define TC6_16_READREQ_ADDR_MSK	0x0000001f
#define TC6_16_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC6_16_READREQ_RCONT	(1 << 14)
#define TC6_16_READREQ_RREQ	(1 << 15)

#define TC6_16_READREQ_s    MMIO_REG(0x42003802, struct __struct_TC6_16_READREQ)
struct __struct_TC6_16_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC6_16_CTRLBCLR	MMIO_REG(0x42003804, uint8_t)
#define TC6_16_CTRLBCLR_DIR	(1 << 0)
#define TC6_16_CTRLBCLR_ONESHOT	(1 << 2)
#define TC6_16_CTRLBCLR_CMD(x)	((x) << 6)
#define TC6_16_CTRLBCLR_CMD_MSK	0x000000c0
#define TC6_16_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC6_16_CTRLBCLR_s    MMIO_REG(0x42003804, struct __struct_TC6_16_CTRLBCLR)
struct __struct_TC6_16_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC6_16_CTRLBSET	MMIO_REG(0x42003805, uint8_t)
#define TC6_16_CTRLBSET_DIR	(1 << 0)
#define TC6_16_CTRLBSET_ONESHOT	(1 << 2)
#define TC6_16_CTRLBSET_CMD(x)	((x) << 6)
#define TC6_16_CTRLBSET_CMD_MSK	0x000000c0
#define TC6_16_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC6_16_CTRLBSET_s    MMIO_REG(0x42003805, struct __struct_TC6_16_CTRLBSET)
struct __struct_TC6_16_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC6_16_CTRLC	MMIO_REG(0x42003806, uint8_t)
#define TC6_16_CTRLC_INVEN0	(1 << 0)
#define TC6_16_CTRLC_INVEN1	(1 << 1)
#define TC6_16_CTRLC_CPTEN0	(1 << 4)
#define TC6_16_CTRLC_CPTEN1	(1 << 5)

#define TC6_16_CTRLC_s    MMIO_REG(0x42003806, struct __struct_TC6_16_CTRLC)
struct __struct_TC6_16_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC6_16_DBGCTRL	MMIO_REG(0x42003808, uint8_t)
#define TC6_16_DBGCTRL_DBGRUN	(1 << 0)

#define TC6_16_DBGCTRL_s    MMIO_REG(0x42003808, struct __struct_TC6_16_DBGCTRL)
struct __struct_TC6_16_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC6_16_EVCTRL	MMIO_REG(0x4200380a, uint16_t)
#define TC6_16_EVCTRL_EVACT(x)	((x) << 0)
#define TC6_16_EVCTRL_EVACT_MSK	0x00000007
#define TC6_16_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC6_16_EVCTRL_TCINV	(1 << 4)
#define TC6_16_EVCTRL_TCEI	(1 << 5)
#define TC6_16_EVCTRL_OVFEO	(1 << 8)
#define TC6_16_EVCTRL_MCEO0	(1 << 12)
#define TC6_16_EVCTRL_MCEO1	(1 << 13)

#define TC6_16_EVCTRL_s    MMIO_REG(0x4200380a, struct __struct_TC6_16_EVCTRL)
struct __struct_TC6_16_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC6_16_INTENCLR	MMIO_REG(0x4200380c, uint8_t)
#define TC6_16_INTENCLR_OVF	(1 << 0)
#define TC6_16_INTENCLR_ERR	(1 << 1)
#define TC6_16_INTENCLR_SYNCRDY	(1 << 3)
#define TC6_16_INTENCLR_MC0	(1 << 4)
#define TC6_16_INTENCLR_MC1	(1 << 5)

#define TC6_16_INTENCLR_s    MMIO_REG(0x4200380c, struct __struct_TC6_16_INTENCLR)
struct __struct_TC6_16_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_16_INTENSET	MMIO_REG(0x4200380d, uint8_t)
#define TC6_16_INTENSET_OVF	(1 << 0)
#define TC6_16_INTENSET_ERR	(1 << 1)
#define TC6_16_INTENSET_SYNCRDY	(1 << 3)
#define TC6_16_INTENSET_MC0	(1 << 4)
#define TC6_16_INTENSET_MC1	(1 << 5)

#define TC6_16_INTENSET_s    MMIO_REG(0x4200380d, struct __struct_TC6_16_INTENSET)
struct __struct_TC6_16_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_16_INTFLAG	MMIO_REG(0x4200380e, uint8_t)
#define TC6_16_INTFLAG_OVF	(1 << 0)
#define TC6_16_INTFLAG_ERR	(1 << 1)
#define TC6_16_INTFLAG_SYNCRDY	(1 << 3)
#define TC6_16_INTFLAG_MC0	(1 << 4)
#define TC6_16_INTFLAG_MC1	(1 << 5)

#define TC6_16_INTFLAG_s    MMIO_REG(0x4200380e, struct __struct_TC6_16_INTFLAG)
struct __struct_TC6_16_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_16_STATUS	MMIO_REG(0x4200380f, uint8_t)
#define TC6_16_STATUS_STOP	(1 << 3)
#define TC6_16_STATUS_SLAVE	(1 << 4)
#define TC6_16_STATUS_SYNCBUSY	(1 << 7)

#define TC6_16_STATUS_s    MMIO_REG(0x4200380f, struct __struct_TC6_16_STATUS)
struct __struct_TC6_16_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC6_16_COUNT	MMIO_REG(0x42003810, uint16_t)
#define TC6_16_COUNT_COUNT(x)	((x) << 0)
#define TC6_16_COUNT_COUNT_MSK	0x0000ffff
#define TC6_16_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define TC6_16_COUNT_s    MMIO_REG(0x42003810, struct __struct_TC6_16_COUNT)
struct __struct_TC6_16_COUNT
{
  uint16_t count : 16;
};

#define TC6_16_CC0	MMIO_REG(0x42003818, uint16_t)
#define TC6_16_CC0_CC(x)	((x) << 0)
#define TC6_16_CC0_CC_MSK	0x0000ffff
#define TC6_16_CC0_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC6_16_CC0_s    MMIO_REG(0x42003818, struct __struct_TC6_16_CC0)
struct __struct_TC6_16_CC0
{
  uint16_t cc : 16;
};

#define TC6_16_CC1	MMIO_REG(0x4200381a, uint16_t)
#define TC6_16_CC1_CC(x)	((x) << 0)
#define TC6_16_CC1_CC_MSK	0x0000ffff
#define TC6_16_CC1_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC6_16_CC1_s    MMIO_REG(0x4200381a, struct __struct_TC6_16_CC1)
struct __struct_TC6_16_CC1
{
  uint16_t cc : 16;
};

// 0x42003800 TC6_32

#define TC6_32_CTRLA	MMIO_REG(0x42003800, uint16_t)
#define TC6_32_CTRLA_SWRST	(1 << 0)
#define TC6_32_CTRLA_ENABLE	(1 << 1)
#define TC6_32_CTRLA_MODE(x)	((x) << 2)
#define TC6_32_CTRLA_MODE_MSK	0x0000000c
#define TC6_32_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC6_32_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC6_32_CTRLA_WAVEGEN_MSK	0x00000060
#define TC6_32_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC6_32_CTRLA_PRESCALER(x)	((x) << 8)
#define TC6_32_CTRLA_PRESCALER_MSK	0x00000700
#define TC6_32_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC6_32_CTRLA_RUNSTDBY	(1 << 11)
#define TC6_32_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC6_32_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC6_32_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC6_32_CTRLA_s    MMIO_REG(0x42003800, struct __struct_TC6_32_CTRLA)
struct __struct_TC6_32_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC6_32_READREQ	MMIO_REG(0x42003802, uint16_t)
#define TC6_32_READREQ_ADDR(x)	((x) << 0)
#define TC6_32_READREQ_ADDR_MSK	0x0000001f
#define TC6_32_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC6_32_READREQ_RCONT	(1 << 14)
#define TC6_32_READREQ_RREQ	(1 << 15)

#define TC6_32_READREQ_s    MMIO_REG(0x42003802, struct __struct_TC6_32_READREQ)
struct __struct_TC6_32_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC6_32_CTRLBCLR	MMIO_REG(0x42003804, uint8_t)
#define TC6_32_CTRLBCLR_DIR	(1 << 0)
#define TC6_32_CTRLBCLR_ONESHOT	(1 << 2)
#define TC6_32_CTRLBCLR_CMD(x)	((x) << 6)
#define TC6_32_CTRLBCLR_CMD_MSK	0x000000c0
#define TC6_32_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC6_32_CTRLBCLR_s    MMIO_REG(0x42003804, struct __struct_TC6_32_CTRLBCLR)
struct __struct_TC6_32_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC6_32_CTRLBSET	MMIO_REG(0x42003805, uint8_t)
#define TC6_32_CTRLBSET_DIR	(1 << 0)
#define TC6_32_CTRLBSET_ONESHOT	(1 << 2)
#define TC6_32_CTRLBSET_CMD(x)	((x) << 6)
#define TC6_32_CTRLBSET_CMD_MSK	0x000000c0
#define TC6_32_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC6_32_CTRLBSET_s    MMIO_REG(0x42003805, struct __struct_TC6_32_CTRLBSET)
struct __struct_TC6_32_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC6_32_CTRLC	MMIO_REG(0x42003806, uint8_t)
#define TC6_32_CTRLC_INVEN0	(1 << 0)
#define TC6_32_CTRLC_INVEN1	(1 << 1)
#define TC6_32_CTRLC_CPTEN0	(1 << 4)
#define TC6_32_CTRLC_CPTEN1	(1 << 5)

#define TC6_32_CTRLC_s    MMIO_REG(0x42003806, struct __struct_TC6_32_CTRLC)
struct __struct_TC6_32_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC6_32_DBGCTRL	MMIO_REG(0x42003808, uint8_t)
#define TC6_32_DBGCTRL_DBGRUN	(1 << 0)

#define TC6_32_DBGCTRL_s    MMIO_REG(0x42003808, struct __struct_TC6_32_DBGCTRL)
struct __struct_TC6_32_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC6_32_EVCTRL	MMIO_REG(0x4200380a, uint16_t)
#define TC6_32_EVCTRL_EVACT(x)	((x) << 0)
#define TC6_32_EVCTRL_EVACT_MSK	0x00000007
#define TC6_32_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC6_32_EVCTRL_TCINV	(1 << 4)
#define TC6_32_EVCTRL_TCEI	(1 << 5)
#define TC6_32_EVCTRL_OVFEO	(1 << 8)
#define TC6_32_EVCTRL_MCEO0	(1 << 12)
#define TC6_32_EVCTRL_MCEO1	(1 << 13)

#define TC6_32_EVCTRL_s    MMIO_REG(0x4200380a, struct __struct_TC6_32_EVCTRL)
struct __struct_TC6_32_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC6_32_INTENCLR	MMIO_REG(0x4200380c, uint8_t)
#define TC6_32_INTENCLR_OVF	(1 << 0)
#define TC6_32_INTENCLR_ERR	(1 << 1)
#define TC6_32_INTENCLR_SYNCRDY	(1 << 3)
#define TC6_32_INTENCLR_MC0	(1 << 4)
#define TC6_32_INTENCLR_MC1	(1 << 5)

#define TC6_32_INTENCLR_s    MMIO_REG(0x4200380c, struct __struct_TC6_32_INTENCLR)
struct __struct_TC6_32_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_32_INTENSET	MMIO_REG(0x4200380d, uint8_t)
#define TC6_32_INTENSET_OVF	(1 << 0)
#define TC6_32_INTENSET_ERR	(1 << 1)
#define TC6_32_INTENSET_SYNCRDY	(1 << 3)
#define TC6_32_INTENSET_MC0	(1 << 4)
#define TC6_32_INTENSET_MC1	(1 << 5)

#define TC6_32_INTENSET_s    MMIO_REG(0x4200380d, struct __struct_TC6_32_INTENSET)
struct __struct_TC6_32_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_32_INTFLAG	MMIO_REG(0x4200380e, uint8_t)
#define TC6_32_INTFLAG_OVF	(1 << 0)
#define TC6_32_INTFLAG_ERR	(1 << 1)
#define TC6_32_INTFLAG_SYNCRDY	(1 << 3)
#define TC6_32_INTFLAG_MC0	(1 << 4)
#define TC6_32_INTFLAG_MC1	(1 << 5)

#define TC6_32_INTFLAG_s    MMIO_REG(0x4200380e, struct __struct_TC6_32_INTFLAG)
struct __struct_TC6_32_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC6_32_STATUS	MMIO_REG(0x4200380f, uint8_t)
#define TC6_32_STATUS_STOP	(1 << 3)
#define TC6_32_STATUS_SLAVE	(1 << 4)
#define TC6_32_STATUS_SYNCBUSY	(1 << 7)

#define TC6_32_STATUS_s    MMIO_REG(0x4200380f, struct __struct_TC6_32_STATUS)
struct __struct_TC6_32_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC6_32_COUNT	MMIO_REG(0x42003810, uint32_t)
#define TC6_32_COUNT_COUNT(x)	((x) << 0)
#define TC6_32_COUNT_COUNT_MSK	0xffffffff
#define TC6_32_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC6_32_COUNT_s    MMIO_REG(0x42003810, struct __struct_TC6_32_COUNT)
struct __struct_TC6_32_COUNT
{
  uint32_t count : 32;
};

#define TC6_32_CC0	MMIO_REG(0x42003818, uint32_t)
#define TC6_32_CC0_CC(x)	((x) << 0)
#define TC6_32_CC0_CC_MSK	0xffffffff
#define TC6_32_CC0_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC6_32_CC0_s    MMIO_REG(0x42003818, struct __struct_TC6_32_CC0)
struct __struct_TC6_32_CC0
{
  uint32_t cc : 32;
};

#define TC6_32_CC1	MMIO_REG(0x4200381c, uint32_t)
#define TC6_32_CC1_CC(x)	((x) << 0)
#define TC6_32_CC1_CC_MSK	0xffffffff
#define TC6_32_CC1_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC6_32_CC1_s    MMIO_REG(0x4200381c, struct __struct_TC6_32_CC1)
struct __struct_TC6_32_CC1
{
  uint32_t cc : 32;
};

// 0x42003c00 TC7_8

#define TC7_8_CTRLA	MMIO_REG(0x42003c00, uint16_t)
#define TC7_8_CTRLA_SWRST	(1 << 0)
#define TC7_8_CTRLA_ENABLE	(1 << 1)
#define TC7_8_CTRLA_MODE(x)	((x) << 2)
#define TC7_8_CTRLA_MODE_MSK	0x0000000c
#define TC7_8_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC7_8_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC7_8_CTRLA_WAVEGEN_MSK	0x00000060
#define TC7_8_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC7_8_CTRLA_PRESCALER(x)	((x) << 8)
#define TC7_8_CTRLA_PRESCALER_MSK	0x00000700
#define TC7_8_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC7_8_CTRLA_RUNSTDBY	(1 << 11)
#define TC7_8_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC7_8_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC7_8_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC7_8_CTRLA_s    MMIO_REG(0x42003c00, struct __struct_TC7_8_CTRLA)
struct __struct_TC7_8_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC7_8_READREQ	MMIO_REG(0x42003c02, uint16_t)
#define TC7_8_READREQ_ADDR(x)	((x) << 0)
#define TC7_8_READREQ_ADDR_MSK	0x0000001f
#define TC7_8_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC7_8_READREQ_RCONT	(1 << 14)
#define TC7_8_READREQ_RREQ	(1 << 15)

#define TC7_8_READREQ_s    MMIO_REG(0x42003c02, struct __struct_TC7_8_READREQ)
struct __struct_TC7_8_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC7_8_CTRLBCLR	MMIO_REG(0x42003c04, uint8_t)
#define TC7_8_CTRLBCLR_DIR	(1 << 0)
#define TC7_8_CTRLBCLR_ONESHOT	(1 << 2)
#define TC7_8_CTRLBCLR_CMD(x)	((x) << 6)
#define TC7_8_CTRLBCLR_CMD_MSK	0x000000c0
#define TC7_8_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC7_8_CTRLBCLR_s    MMIO_REG(0x42003c04, struct __struct_TC7_8_CTRLBCLR)
struct __struct_TC7_8_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC7_8_CTRLBSET	MMIO_REG(0x42003c05, uint8_t)
#define TC7_8_CTRLBSET_DIR	(1 << 0)
#define TC7_8_CTRLBSET_ONESHOT	(1 << 2)
#define TC7_8_CTRLBSET_CMD(x)	((x) << 6)
#define TC7_8_CTRLBSET_CMD_MSK	0x000000c0
#define TC7_8_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC7_8_CTRLBSET_s    MMIO_REG(0x42003c05, struct __struct_TC7_8_CTRLBSET)
struct __struct_TC7_8_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC7_8_CTRLC	MMIO_REG(0x42003c06, uint8_t)
#define TC7_8_CTRLC_INVEN0	(1 << 0)
#define TC7_8_CTRLC_INVEN1	(1 << 1)
#define TC7_8_CTRLC_CPTEN0	(1 << 4)
#define TC7_8_CTRLC_CPTEN1	(1 << 5)

#define TC7_8_CTRLC_s    MMIO_REG(0x42003c06, struct __struct_TC7_8_CTRLC)
struct __struct_TC7_8_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC7_8_DBGCTRL	MMIO_REG(0x42003c08, uint8_t)
#define TC7_8_DBGCTRL_DBGRUN	(1 << 0)

#define TC7_8_DBGCTRL_s    MMIO_REG(0x42003c08, struct __struct_TC7_8_DBGCTRL)
struct __struct_TC7_8_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC7_8_EVCTRL	MMIO_REG(0x42003c0a, uint16_t)
#define TC7_8_EVCTRL_EVACT(x)	((x) << 0)
#define TC7_8_EVCTRL_EVACT_MSK	0x00000007
#define TC7_8_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC7_8_EVCTRL_TCINV	(1 << 4)
#define TC7_8_EVCTRL_TCEI	(1 << 5)
#define TC7_8_EVCTRL_OVFEO	(1 << 8)
#define TC7_8_EVCTRL_MCEO0	(1 << 12)
#define TC7_8_EVCTRL_MCEO1	(1 << 13)

#define TC7_8_EVCTRL_s    MMIO_REG(0x42003c0a, struct __struct_TC7_8_EVCTRL)
struct __struct_TC7_8_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC7_8_INTENCLR	MMIO_REG(0x42003c0c, uint8_t)
#define TC7_8_INTENCLR_OVF	(1 << 0)
#define TC7_8_INTENCLR_ERR	(1 << 1)
#define TC7_8_INTENCLR_SYNCRDY	(1 << 3)
#define TC7_8_INTENCLR_MC0	(1 << 4)
#define TC7_8_INTENCLR_MC1	(1 << 5)

#define TC7_8_INTENCLR_s    MMIO_REG(0x42003c0c, struct __struct_TC7_8_INTENCLR)
struct __struct_TC7_8_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_8_INTENSET	MMIO_REG(0x42003c0d, uint8_t)
#define TC7_8_INTENSET_OVF	(1 << 0)
#define TC7_8_INTENSET_ERR	(1 << 1)
#define TC7_8_INTENSET_SYNCRDY	(1 << 3)
#define TC7_8_INTENSET_MC0	(1 << 4)
#define TC7_8_INTENSET_MC1	(1 << 5)

#define TC7_8_INTENSET_s    MMIO_REG(0x42003c0d, struct __struct_TC7_8_INTENSET)
struct __struct_TC7_8_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_8_INTFLAG	MMIO_REG(0x42003c0e, uint8_t)
#define TC7_8_INTFLAG_OVF	(1 << 0)
#define TC7_8_INTFLAG_ERR	(1 << 1)
#define TC7_8_INTFLAG_SYNCRDY	(1 << 3)
#define TC7_8_INTFLAG_MC0	(1 << 4)
#define TC7_8_INTFLAG_MC1	(1 << 5)

#define TC7_8_INTFLAG_s    MMIO_REG(0x42003c0e, struct __struct_TC7_8_INTFLAG)
struct __struct_TC7_8_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_8_STATUS	MMIO_REG(0x42003c0f, uint8_t)
#define TC7_8_STATUS_STOP	(1 << 3)
#define TC7_8_STATUS_SLAVE	(1 << 4)
#define TC7_8_STATUS_SYNCBUSY	(1 << 7)

#define TC7_8_STATUS_s    MMIO_REG(0x42003c0f, struct __struct_TC7_8_STATUS)
struct __struct_TC7_8_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC7_8_COUNT	MMIO_REG(0x42003c10, uint8_t)
#define TC7_8_COUNT_COUNT(x)	((x) << 0)
#define TC7_8_COUNT_COUNT_MSK	0x000000ff
#define TC7_8_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xff)

#define TC7_8_COUNT_s    MMIO_REG(0x42003c10, struct __struct_TC7_8_COUNT)
struct __struct_TC7_8_COUNT
{
  uint8_t count : 8;
};

#define TC7_8_PER	MMIO_REG(0x42003c14, uint8_t)
#define TC7_8_PER_PER(x)	((x) << 0)
#define TC7_8_PER_PER_MSK	0x000000ff
#define TC7_8_PER_PER_VAL(x)	(((x) >> 0) & 0xff)

#define TC7_8_PER_s    MMIO_REG(0x42003c14, struct __struct_TC7_8_PER)
struct __struct_TC7_8_PER
{
  uint8_t per : 8;
};

#define TC7_8_CC0	MMIO_REG(0x42003c18, uint8_t)
#define TC7_8_CC0_CC(x)	((x) << 0)
#define TC7_8_CC0_CC_MSK	0x000000ff
#define TC7_8_CC0_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC7_8_CC0_s    MMIO_REG(0x42003c18, struct __struct_TC7_8_CC0)
struct __struct_TC7_8_CC0
{
  uint8_t cc : 8;
};

#define TC7_8_CC1	MMIO_REG(0x42003c19, uint8_t)
#define TC7_8_CC1_CC(x)	((x) << 0)
#define TC7_8_CC1_CC_MSK	0x000000ff
#define TC7_8_CC1_CC_VAL(x)	(((x) >> 0) & 0xff)

#define TC7_8_CC1_s    MMIO_REG(0x42003c19, struct __struct_TC7_8_CC1)
struct __struct_TC7_8_CC1
{
  uint8_t cc : 8;
};

// 0x42003c00 TC7_16

#define TC7_16_CTRLA	MMIO_REG(0x42003c00, uint16_t)
#define TC7_16_CTRLA_SWRST	(1 << 0)
#define TC7_16_CTRLA_ENABLE	(1 << 1)
#define TC7_16_CTRLA_MODE(x)	((x) << 2)
#define TC7_16_CTRLA_MODE_MSK	0x0000000c
#define TC7_16_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC7_16_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC7_16_CTRLA_WAVEGEN_MSK	0x00000060
#define TC7_16_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC7_16_CTRLA_PRESCALER(x)	((x) << 8)
#define TC7_16_CTRLA_PRESCALER_MSK	0x00000700
#define TC7_16_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC7_16_CTRLA_RUNSTDBY	(1 << 11)
#define TC7_16_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC7_16_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC7_16_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC7_16_CTRLA_s    MMIO_REG(0x42003c00, struct __struct_TC7_16_CTRLA)
struct __struct_TC7_16_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC7_16_READREQ	MMIO_REG(0x42003c02, uint16_t)
#define TC7_16_READREQ_ADDR(x)	((x) << 0)
#define TC7_16_READREQ_ADDR_MSK	0x0000001f
#define TC7_16_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC7_16_READREQ_RCONT	(1 << 14)
#define TC7_16_READREQ_RREQ	(1 << 15)

#define TC7_16_READREQ_s    MMIO_REG(0x42003c02, struct __struct_TC7_16_READREQ)
struct __struct_TC7_16_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC7_16_CTRLBCLR	MMIO_REG(0x42003c04, uint8_t)
#define TC7_16_CTRLBCLR_DIR	(1 << 0)
#define TC7_16_CTRLBCLR_ONESHOT	(1 << 2)
#define TC7_16_CTRLBCLR_CMD(x)	((x) << 6)
#define TC7_16_CTRLBCLR_CMD_MSK	0x000000c0
#define TC7_16_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC7_16_CTRLBCLR_s    MMIO_REG(0x42003c04, struct __struct_TC7_16_CTRLBCLR)
struct __struct_TC7_16_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC7_16_CTRLBSET	MMIO_REG(0x42003c05, uint8_t)
#define TC7_16_CTRLBSET_DIR	(1 << 0)
#define TC7_16_CTRLBSET_ONESHOT	(1 << 2)
#define TC7_16_CTRLBSET_CMD(x)	((x) << 6)
#define TC7_16_CTRLBSET_CMD_MSK	0x000000c0
#define TC7_16_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC7_16_CTRLBSET_s    MMIO_REG(0x42003c05, struct __struct_TC7_16_CTRLBSET)
struct __struct_TC7_16_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC7_16_CTRLC	MMIO_REG(0x42003c06, uint8_t)
#define TC7_16_CTRLC_INVEN0	(1 << 0)
#define TC7_16_CTRLC_INVEN1	(1 << 1)
#define TC7_16_CTRLC_CPTEN0	(1 << 4)
#define TC7_16_CTRLC_CPTEN1	(1 << 5)

#define TC7_16_CTRLC_s    MMIO_REG(0x42003c06, struct __struct_TC7_16_CTRLC)
struct __struct_TC7_16_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC7_16_DBGCTRL	MMIO_REG(0x42003c08, uint8_t)
#define TC7_16_DBGCTRL_DBGRUN	(1 << 0)

#define TC7_16_DBGCTRL_s    MMIO_REG(0x42003c08, struct __struct_TC7_16_DBGCTRL)
struct __struct_TC7_16_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC7_16_EVCTRL	MMIO_REG(0x42003c0a, uint16_t)
#define TC7_16_EVCTRL_EVACT(x)	((x) << 0)
#define TC7_16_EVCTRL_EVACT_MSK	0x00000007
#define TC7_16_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC7_16_EVCTRL_TCINV	(1 << 4)
#define TC7_16_EVCTRL_TCEI	(1 << 5)
#define TC7_16_EVCTRL_OVFEO	(1 << 8)
#define TC7_16_EVCTRL_MCEO0	(1 << 12)
#define TC7_16_EVCTRL_MCEO1	(1 << 13)

#define TC7_16_EVCTRL_s    MMIO_REG(0x42003c0a, struct __struct_TC7_16_EVCTRL)
struct __struct_TC7_16_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC7_16_INTENCLR	MMIO_REG(0x42003c0c, uint8_t)
#define TC7_16_INTENCLR_OVF	(1 << 0)
#define TC7_16_INTENCLR_ERR	(1 << 1)
#define TC7_16_INTENCLR_SYNCRDY	(1 << 3)
#define TC7_16_INTENCLR_MC0	(1 << 4)
#define TC7_16_INTENCLR_MC1	(1 << 5)

#define TC7_16_INTENCLR_s    MMIO_REG(0x42003c0c, struct __struct_TC7_16_INTENCLR)
struct __struct_TC7_16_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_16_INTENSET	MMIO_REG(0x42003c0d, uint8_t)
#define TC7_16_INTENSET_OVF	(1 << 0)
#define TC7_16_INTENSET_ERR	(1 << 1)
#define TC7_16_INTENSET_SYNCRDY	(1 << 3)
#define TC7_16_INTENSET_MC0	(1 << 4)
#define TC7_16_INTENSET_MC1	(1 << 5)

#define TC7_16_INTENSET_s    MMIO_REG(0x42003c0d, struct __struct_TC7_16_INTENSET)
struct __struct_TC7_16_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_16_INTFLAG	MMIO_REG(0x42003c0e, uint8_t)
#define TC7_16_INTFLAG_OVF	(1 << 0)
#define TC7_16_INTFLAG_ERR	(1 << 1)
#define TC7_16_INTFLAG_SYNCRDY	(1 << 3)
#define TC7_16_INTFLAG_MC0	(1 << 4)
#define TC7_16_INTFLAG_MC1	(1 << 5)

#define TC7_16_INTFLAG_s    MMIO_REG(0x42003c0e, struct __struct_TC7_16_INTFLAG)
struct __struct_TC7_16_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_16_STATUS	MMIO_REG(0x42003c0f, uint8_t)
#define TC7_16_STATUS_STOP	(1 << 3)
#define TC7_16_STATUS_SLAVE	(1 << 4)
#define TC7_16_STATUS_SYNCBUSY	(1 << 7)

#define TC7_16_STATUS_s    MMIO_REG(0x42003c0f, struct __struct_TC7_16_STATUS)
struct __struct_TC7_16_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC7_16_COUNT	MMIO_REG(0x42003c10, uint16_t)
#define TC7_16_COUNT_COUNT(x)	((x) << 0)
#define TC7_16_COUNT_COUNT_MSK	0x0000ffff
#define TC7_16_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffff)

#define TC7_16_COUNT_s    MMIO_REG(0x42003c10, struct __struct_TC7_16_COUNT)
struct __struct_TC7_16_COUNT
{
  uint16_t count : 16;
};

#define TC7_16_CC0	MMIO_REG(0x42003c18, uint16_t)
#define TC7_16_CC0_CC(x)	((x) << 0)
#define TC7_16_CC0_CC_MSK	0x0000ffff
#define TC7_16_CC0_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC7_16_CC0_s    MMIO_REG(0x42003c18, struct __struct_TC7_16_CC0)
struct __struct_TC7_16_CC0
{
  uint16_t cc : 16;
};

#define TC7_16_CC1	MMIO_REG(0x42003c1a, uint16_t)
#define TC7_16_CC1_CC(x)	((x) << 0)
#define TC7_16_CC1_CC_MSK	0x0000ffff
#define TC7_16_CC1_CC_VAL(x)	(((x) >> 0) & 0xffff)

#define TC7_16_CC1_s    MMIO_REG(0x42003c1a, struct __struct_TC7_16_CC1)
struct __struct_TC7_16_CC1
{
  uint16_t cc : 16;
};

// 0x42003c00 TC7_32

#define TC7_32_CTRLA	MMIO_REG(0x42003c00, uint16_t)
#define TC7_32_CTRLA_SWRST	(1 << 0)
#define TC7_32_CTRLA_ENABLE	(1 << 1)
#define TC7_32_CTRLA_MODE(x)	((x) << 2)
#define TC7_32_CTRLA_MODE_MSK	0x0000000c
#define TC7_32_CTRLA_MODE_VAL(x)	(((x) >> 2) & 0x3)
#define TC7_32_CTRLA_WAVEGEN(x)	((x) << 5)
#define TC7_32_CTRLA_WAVEGEN_MSK	0x00000060
#define TC7_32_CTRLA_WAVEGEN_VAL(x)	(((x) >> 5) & 0x3)
#define TC7_32_CTRLA_PRESCALER(x)	((x) << 8)
#define TC7_32_CTRLA_PRESCALER_MSK	0x00000700
#define TC7_32_CTRLA_PRESCALER_VAL(x)	(((x) >> 8) & 0x7)
#define TC7_32_CTRLA_RUNSTDBY	(1 << 11)
#define TC7_32_CTRLA_PRESCSYNC(x)	((x) << 12)
#define TC7_32_CTRLA_PRESCSYNC_MSK	0x00003000
#define TC7_32_CTRLA_PRESCSYNC_VAL(x)	(((x) >> 12) & 0x3)

#define TC7_32_CTRLA_s    MMIO_REG(0x42003c00, struct __struct_TC7_32_CTRLA)
struct __struct_TC7_32_CTRLA
{
  uint16_t swrst : 1;
  uint16_t enable : 1;
  uint16_t mode : 2;
  uint16_t  : 1;
  uint16_t wavegen : 2;
  uint16_t  : 1;
  uint16_t prescaler : 3;
  uint16_t runstdby : 1;
  uint16_t prescsync : 2;
  uint16_t  : 2;
};

#define TC7_32_READREQ	MMIO_REG(0x42003c02, uint16_t)
#define TC7_32_READREQ_ADDR(x)	((x) << 0)
#define TC7_32_READREQ_ADDR_MSK	0x0000001f
#define TC7_32_READREQ_ADDR_VAL(x)	(((x) >> 0) & 0x1f)
#define TC7_32_READREQ_RCONT	(1 << 14)
#define TC7_32_READREQ_RREQ	(1 << 15)

#define TC7_32_READREQ_s    MMIO_REG(0x42003c02, struct __struct_TC7_32_READREQ)
struct __struct_TC7_32_READREQ
{
  uint16_t addr : 5;
  uint16_t  : 9;
  uint16_t rcont : 1;
  uint16_t rreq : 1;
};

#define TC7_32_CTRLBCLR	MMIO_REG(0x42003c04, uint8_t)
#define TC7_32_CTRLBCLR_DIR	(1 << 0)
#define TC7_32_CTRLBCLR_ONESHOT	(1 << 2)
#define TC7_32_CTRLBCLR_CMD(x)	((x) << 6)
#define TC7_32_CTRLBCLR_CMD_MSK	0x000000c0
#define TC7_32_CTRLBCLR_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC7_32_CTRLBCLR_s    MMIO_REG(0x42003c04, struct __struct_TC7_32_CTRLBCLR)
struct __struct_TC7_32_CTRLBCLR
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC7_32_CTRLBSET	MMIO_REG(0x42003c05, uint8_t)
#define TC7_32_CTRLBSET_DIR	(1 << 0)
#define TC7_32_CTRLBSET_ONESHOT	(1 << 2)
#define TC7_32_CTRLBSET_CMD(x)	((x) << 6)
#define TC7_32_CTRLBSET_CMD_MSK	0x000000c0
#define TC7_32_CTRLBSET_CMD_VAL(x)	(((x) >> 6) & 0x3)

#define TC7_32_CTRLBSET_s    MMIO_REG(0x42003c05, struct __struct_TC7_32_CTRLBSET)
struct __struct_TC7_32_CTRLBSET
{
  uint8_t dir : 1;
  uint8_t  : 1;
  uint8_t oneshot : 1;
  uint8_t  : 3;
  uint8_t cmd : 2;
};

#define TC7_32_CTRLC	MMIO_REG(0x42003c06, uint8_t)
#define TC7_32_CTRLC_INVEN0	(1 << 0)
#define TC7_32_CTRLC_INVEN1	(1 << 1)
#define TC7_32_CTRLC_CPTEN0	(1 << 4)
#define TC7_32_CTRLC_CPTEN1	(1 << 5)

#define TC7_32_CTRLC_s    MMIO_REG(0x42003c06, struct __struct_TC7_32_CTRLC)
struct __struct_TC7_32_CTRLC
{
  uint8_t inven0 : 1;
  uint8_t inven1 : 1;
  uint8_t  : 2;
  uint8_t cpten0 : 1;
  uint8_t cpten1 : 1;
  uint8_t  : 2;
};

#define TC7_32_DBGCTRL	MMIO_REG(0x42003c08, uint8_t)
#define TC7_32_DBGCTRL_DBGRUN	(1 << 0)

#define TC7_32_DBGCTRL_s    MMIO_REG(0x42003c08, struct __struct_TC7_32_DBGCTRL)
struct __struct_TC7_32_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

#define TC7_32_EVCTRL	MMIO_REG(0x42003c0a, uint16_t)
#define TC7_32_EVCTRL_EVACT(x)	((x) << 0)
#define TC7_32_EVCTRL_EVACT_MSK	0x00000007
#define TC7_32_EVCTRL_EVACT_VAL(x)	(((x) >> 0) & 0x7)
#define TC7_32_EVCTRL_TCINV	(1 << 4)
#define TC7_32_EVCTRL_TCEI	(1 << 5)
#define TC7_32_EVCTRL_OVFEO	(1 << 8)
#define TC7_32_EVCTRL_MCEO0	(1 << 12)
#define TC7_32_EVCTRL_MCEO1	(1 << 13)

#define TC7_32_EVCTRL_s    MMIO_REG(0x42003c0a, struct __struct_TC7_32_EVCTRL)
struct __struct_TC7_32_EVCTRL
{
  uint16_t evact : 3;
  uint16_t  : 1;
  uint16_t tcinv : 1;
  uint16_t tcei : 1;
  uint16_t  : 2;
  uint16_t ovfeo : 1;
  uint16_t  : 3;
  uint16_t mceo0 : 1;
  uint16_t mceo1 : 1;
  uint16_t  : 2;
};

#define TC7_32_INTENCLR	MMIO_REG(0x42003c0c, uint8_t)
#define TC7_32_INTENCLR_OVF	(1 << 0)
#define TC7_32_INTENCLR_ERR	(1 << 1)
#define TC7_32_INTENCLR_SYNCRDY	(1 << 3)
#define TC7_32_INTENCLR_MC0	(1 << 4)
#define TC7_32_INTENCLR_MC1	(1 << 5)

#define TC7_32_INTENCLR_s    MMIO_REG(0x42003c0c, struct __struct_TC7_32_INTENCLR)
struct __struct_TC7_32_INTENCLR
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_32_INTENSET	MMIO_REG(0x42003c0d, uint8_t)
#define TC7_32_INTENSET_OVF	(1 << 0)
#define TC7_32_INTENSET_ERR	(1 << 1)
#define TC7_32_INTENSET_SYNCRDY	(1 << 3)
#define TC7_32_INTENSET_MC0	(1 << 4)
#define TC7_32_INTENSET_MC1	(1 << 5)

#define TC7_32_INTENSET_s    MMIO_REG(0x42003c0d, struct __struct_TC7_32_INTENSET)
struct __struct_TC7_32_INTENSET
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_32_INTFLAG	MMIO_REG(0x42003c0e, uint8_t)
#define TC7_32_INTFLAG_OVF	(1 << 0)
#define TC7_32_INTFLAG_ERR	(1 << 1)
#define TC7_32_INTFLAG_SYNCRDY	(1 << 3)
#define TC7_32_INTFLAG_MC0	(1 << 4)
#define TC7_32_INTFLAG_MC1	(1 << 5)

#define TC7_32_INTFLAG_s    MMIO_REG(0x42003c0e, struct __struct_TC7_32_INTFLAG)
struct __struct_TC7_32_INTFLAG
{
  uint8_t ovf : 1;
  uint8_t err : 1;
  uint8_t  : 1;
  uint8_t syncrdy : 1;
  uint8_t mc0 : 1;
  uint8_t mc1 : 1;
  uint8_t  : 2;
};

#define TC7_32_STATUS	MMIO_REG(0x42003c0f, uint8_t)
#define TC7_32_STATUS_STOP	(1 << 3)
#define TC7_32_STATUS_SLAVE	(1 << 4)
#define TC7_32_STATUS_SYNCBUSY	(1 << 7)

#define TC7_32_STATUS_s    MMIO_REG(0x42003c0f, struct __struct_TC7_32_STATUS)
struct __struct_TC7_32_STATUS
{
  uint8_t  : 3;
  uint8_t stop : 1;
  uint8_t slave : 1;
  uint8_t  : 2;
  uint8_t syncbusy : 1;
};

#define TC7_32_COUNT	MMIO_REG(0x42003c10, uint32_t)
#define TC7_32_COUNT_COUNT(x)	((x) << 0)
#define TC7_32_COUNT_COUNT_MSK	0xffffffff
#define TC7_32_COUNT_COUNT_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC7_32_COUNT_s    MMIO_REG(0x42003c10, struct __struct_TC7_32_COUNT)
struct __struct_TC7_32_COUNT
{
  uint32_t count : 32;
};

#define TC7_32_CC0	MMIO_REG(0x42003c18, uint32_t)
#define TC7_32_CC0_CC(x)	((x) << 0)
#define TC7_32_CC0_CC_MSK	0xffffffff
#define TC7_32_CC0_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC7_32_CC0_s    MMIO_REG(0x42003c18, struct __struct_TC7_32_CC0)
struct __struct_TC7_32_CC0
{
  uint32_t cc : 32;
};

#define TC7_32_CC1	MMIO_REG(0x42003c1c, uint32_t)
#define TC7_32_CC1_CC(x)	((x) << 0)
#define TC7_32_CC1_CC_MSK	0xffffffff
#define TC7_32_CC1_CC_VAL(x)	(((x) >> 0) & 0xffffffff)

#define TC7_32_CC1_s    MMIO_REG(0x42003c1c, struct __struct_TC7_32_CC1)
struct __struct_TC7_32_CC1
{
  uint32_t cc : 32;
};

// 0x42004000 ADC

#define ADC_CTRLA	MMIO_REG(0x42004000, uint8_t)
#define ADC_CTRLA_SWRST	(1 << 0)
#define ADC_CTRLA_ENABLE	(1 << 1)
#define ADC_CTRLA_RUNSTDBY	(1 << 2)

#define ADC_CTRLA_s    MMIO_REG(0x42004000, struct __struct_ADC_CTRLA)
struct __struct_ADC_CTRLA
{
  uint8_t swrst : 1;
  uint8_t enable : 1;
  uint8_t runstdby : 1;
  uint8_t  : 5;
};

#define ADC_REFCTRL	MMIO_REG(0x42004001, uint8_t)
#define ADC_REFCTRL_REFSEL(x)	((x) << 0)
#define ADC_REFCTRL_REFSEL_MSK	0x0000000f
#define ADC_REFCTRL_REFSEL_VAL(x)	(((x) >> 0) & 0xf)
#define ADC_REFCTRL_REFCOMP	(1 << 7)

#define ADC_REFCTRL_s    MMIO_REG(0x42004001, struct __struct_ADC_REFCTRL)
struct __struct_ADC_REFCTRL
{
  uint8_t refsel : 4;
  uint8_t  : 3;
  uint8_t refcomp : 1;
};

#define ADC_AVGCTRL	MMIO_REG(0x42004002, uint8_t)
#define ADC_AVGCTRL_SAMPLENUM(x)	((x) << 0)
#define ADC_AVGCTRL_SAMPLENUM_MSK	0x0000000f
#define ADC_AVGCTRL_SAMPLENUM_VAL(x)	(((x) >> 0) & 0xf)
#define ADC_AVGCTRL_ADJRES(x)	((x) << 4)
#define ADC_AVGCTRL_ADJRES_MSK	0x00000070
#define ADC_AVGCTRL_ADJRES_VAL(x)	(((x) >> 4) & 0x7)

#define ADC_AVGCTRL_s    MMIO_REG(0x42004002, struct __struct_ADC_AVGCTRL)
struct __struct_ADC_AVGCTRL
{
  uint8_t samplenum : 4;
  uint8_t adjres : 3;
  uint8_t  : 1;
};

#define ADC_SAMPCTRL	MMIO_REG(0x42004003, uint8_t)
#define ADC_SAMPCTRL_SAMPLEN(x)	((x) << 0)
#define ADC_SAMPCTRL_SAMPLEN_MSK	0x0000003f
#define ADC_SAMPCTRL_SAMPLEN_VAL(x)	(((x) >> 0) & 0x3f)

#define ADC_SAMPCTRL_s    MMIO_REG(0x42004003, struct __struct_ADC_SAMPCTRL)
struct __struct_ADC_SAMPCTRL
{
  uint8_t samplen : 6;
  uint8_t  : 2;
};

#define ADC_CTRLB	MMIO_REG(0x42004004, uint8_t)
#define ADC_CTRLB_DIFFMODE	(1 << 0)
#define ADC_CTRLB_LEFTADJ	(1 << 1)
#define ADC_CTRLB_FREERUN	(1 << 2)
#define ADC_CTRLB_CORREN	(1 << 3)
#define ADC_CTRLB_RESSEL(x)	((x) << 4)
#define ADC_CTRLB_RESSEL_MSK	0x00000030
#define ADC_CTRLB_RESSEL_VAL(x)	(((x) >> 4) & 0x3)

#define ADC_CTRLB_s    MMIO_REG(0x42004004, struct __struct_ADC_CTRLB)
struct __struct_ADC_CTRLB
{
  uint8_t diffmode : 1;
  uint8_t leftadj : 1;
  uint8_t freerun : 1;
  uint8_t corren : 1;
  uint8_t ressel : 2;
  uint8_t  : 2;
};

#define ADC_WINCTRL	MMIO_REG(0x42004008, uint8_t)
#define ADC_WINCTRL_WINMODE(x)	((x) << 0)
#define ADC_WINCTRL_WINMODE_MSK	0x00000007
#define ADC_WINCTRL_WINMODE_VAL(x)	(((x) >> 0) & 0x7)

#define ADC_WINCTRL_s    MMIO_REG(0x42004008, struct __struct_ADC_WINCTRL)
struct __struct_ADC_WINCTRL
{
  uint8_t winmode : 3;
  uint8_t  : 5;
};

#define ADC_SWTRIG	MMIO_REG(0x4200400c, uint8_t)
#define ADC_SWTRIG_FLUSH	(1 << 0)
#define ADC_SWTRIG_START	(1 << 1)

#define ADC_SWTRIG_s    MMIO_REG(0x4200400c, struct __struct_ADC_SWTRIG)
struct __struct_ADC_SWTRIG
{
  uint8_t flush : 1;
  uint8_t start : 1;
  uint8_t  : 6;
};

#define ADC_INPUTCTRL	MMIO_REG(0x42004010, uint32_t)
#define ADC_INPUTCTRL_MUXPOS(x)	((x) << 0)
#define ADC_INPUTCTRL_MUXPOS_MSK	0x0000001f
#define ADC_INPUTCTRL_MUXPOS_VAL(x)	(((x) >> 0) & 0x1f)
#define ADC_INPUTCTRL_MUXNEG(x)	((x) << 8)
#define ADC_INPUTCTRL_MUXNEG_MSK	0x00001f00
#define ADC_INPUTCTRL_MUXNEG_VAL(x)	(((x) >> 8) & 0x1f)
#define ADC_INPUTCTRL_INPUTSCAN(x)	((x) << 16)
#define ADC_INPUTCTRL_INPUTSCAN_MSK	0x000f0000
#define ADC_INPUTCTRL_INPUTSCAN_VAL(x)	(((x) >> 16) & 0xf)
#define ADC_INPUTCTRL_INPUTOFFSET(x)	((x) << 20)
#define ADC_INPUTCTRL_INPUTOFFSET_MSK	0x00f00000
#define ADC_INPUTCTRL_INPUTOFFSET_VAL(x)	(((x) >> 20) & 0xf)
#define ADC_INPUTCTRL_GAIN(x)	((x) << 24)
#define ADC_INPUTCTRL_GAIN_MSK	0x0f000000
#define ADC_INPUTCTRL_GAIN_VAL(x)	(((x) >> 24) & 0xf)

#define ADC_INPUTCTRL_s    MMIO_REG(0x42004010, struct __struct_ADC_INPUTCTRL)
struct __struct_ADC_INPUTCTRL
{
  uint32_t muxpos : 5;
  uint32_t  : 3;
  uint32_t muxneg : 5;
  uint32_t  : 3;
  uint32_t inputscan : 4;
  uint32_t inputoffset : 4;
  uint32_t gain : 4;
  uint32_t  : 4;
};

#define ADC_EVCTRL	MMIO_REG(0x42004014, uint8_t)
#define ADC_EVCTRL_STARTEI	(1 << 0)
#define ADC_EVCTRL_SYNCEI	(1 << 1)
#define ADC_EVCTRL_RESDRYEO	(1 << 4)
#define ADC_EVCTRL_WINMONEO	(1 << 5)

#define ADC_EVCTRL_s    MMIO_REG(0x42004014, struct __struct_ADC_EVCTRL)
struct __struct_ADC_EVCTRL
{
  uint8_t startei : 1;
  uint8_t syncei : 1;
  uint8_t  : 2;
  uint8_t resdryeo : 1;
  uint8_t winmoneo : 1;
  uint8_t  : 2;
};

#define ADC_INTENCLR	MMIO_REG(0x42004016, uint8_t)
#define ADC_INTENCLR_RESRDY	(1 << 0)
#define ADC_INTENCLR_OVERRUN	(1 << 1)
#define ADC_INTENCLR_WINMON	(1 << 2)
#define ADC_INTENCLR_SYNCRDY	(1 << 3)

#define ADC_INTENCLR_s    MMIO_REG(0x42004016, struct __struct_ADC_INTENCLR)
struct __struct_ADC_INTENCLR
{
  uint8_t resrdy : 1;
  uint8_t overrun : 1;
  uint8_t winmon : 1;
  uint8_t syncrdy : 1;
  uint8_t  : 4;
};

#define ADC_INTENSET	MMIO_REG(0x42004017, uint8_t)
#define ADC_INTENSET_RESRDY	(1 << 0)
#define ADC_INTENSET_OVERRUN	(1 << 1)
#define ADC_INTENSET_WINMON	(1 << 2)
#define ADC_INTENSET_SYNCRDY	(1 << 3)

#define ADC_INTENSET_s    MMIO_REG(0x42004017, struct __struct_ADC_INTENSET)
struct __struct_ADC_INTENSET
{
  uint8_t resrdy : 1;
  uint8_t overrun : 1;
  uint8_t winmon : 1;
  uint8_t syncrdy : 1;
  uint8_t  : 4;
};

#define ADC_INTFLAG	MMIO_REG(0x42004018, uint8_t)
#define ADC_INTFLAG_RESRDY	(1 << 0)
#define ADC_INTFLAG_OVERRUN	(1 << 1)
#define ADC_INTFLAG_WINMON	(1 << 2)
#define ADC_INTFLAG_SYNCRDY	(1 << 3)

#define ADC_INTFLAG_s    MMIO_REG(0x42004018, struct __struct_ADC_INTFLAG)
struct __struct_ADC_INTFLAG
{
  uint8_t resrdy : 1;
  uint8_t overrun : 1;
  uint8_t winmon : 1;
  uint8_t syncrdy : 1;
  uint8_t  : 4;
};

#define ADC_STATUS	MMIO_REG(0x42004019, uint8_t)
#define ADC_STATUS_SYNCBUSY	(1 << 7)

#define ADC_STATUS_s    MMIO_REG(0x42004019, struct __struct_ADC_STATUS)
struct __struct_ADC_STATUS
{
  uint8_t  : 7;
  uint8_t syncbusy : 1;
};

#define ADC_RESULT	MMIO_REG(0x4200401a, uint16_t)
#define ADC_RESULT_RESULT(x)	((x) << 0)
#define ADC_RESULT_RESULT_MSK	0x0000ffff
#define ADC_RESULT_RESULT_VAL(x)	(((x) >> 0) & 0xffff)

#define ADC_RESULT_s    MMIO_REG(0x4200401a, struct __struct_ADC_RESULT)
struct __struct_ADC_RESULT
{
  uint16_t result : 16;
};

#define ADC_WINLT	MMIO_REG(0x4200401c, uint16_t)
#define ADC_WINLT_WINLT(x)	((x) << 0)
#define ADC_WINLT_WINLT_MSK	0x0000ffff
#define ADC_WINLT_WINLT_VAL(x)	(((x) >> 0) & 0xffff)

#define ADC_WINLT_s    MMIO_REG(0x4200401c, struct __struct_ADC_WINLT)
struct __struct_ADC_WINLT
{
  uint16_t winlt : 16;
};

#define ADC_WINUT	MMIO_REG(0x42004020, uint16_t)
#define ADC_WINUT_WINUT(x)	((x) << 0)
#define ADC_WINUT_WINUT_MSK	0x0000ffff
#define ADC_WINUT_WINUT_VAL(x)	(((x) >> 0) & 0xffff)

#define ADC_WINUT_s    MMIO_REG(0x42004020, struct __struct_ADC_WINUT)
struct __struct_ADC_WINUT
{
  uint16_t winut : 16;
};

#define ADC_GAINCORR	MMIO_REG(0x42004024, uint16_t)
#define ADC_GAINCORR_GAINCORR(x)	((x) << 0)
#define ADC_GAINCORR_GAINCORR_MSK	0x00000fff
#define ADC_GAINCORR_GAINCORR_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_GAINCORR_s    MMIO_REG(0x42004024, struct __struct_ADC_GAINCORR)
struct __struct_ADC_GAINCORR
{
  uint16_t gaincorr : 12;
  uint16_t  : 4;
};

#define ADC_OFFSETCORR	MMIO_REG(0x42004026, uint16_t)
#define ADC_OFFSETCORR_OFFSETCORR(x)	((x) << 0)
#define ADC_OFFSETCORR_OFFSETCORR_MSK	0x00000fff
#define ADC_OFFSETCORR_OFFSETCORR_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_OFFSETCORR_s    MMIO_REG(0x42004026, struct __struct_ADC_OFFSETCORR)
struct __struct_ADC_OFFSETCORR
{
  uint16_t offsetcorr : 12;
  uint16_t  : 4;
};

#define ADC_CALIB	MMIO_REG(0x42004028, uint16_t)
#define ADC_CALIB_LINEARITY_CAL(x)	((x) << 0)
#define ADC_CALIB_LINEARITY_CAL_MSK	0x000000ff
#define ADC_CALIB_LINEARITY_CAL_VAL(x)	(((x) >> 0) & 0xff)
#define ADC_CALIB_BIAS_CAL(x)	((x) << 8)
#define ADC_CALIB_BIAS_CAL_MSK	0x00000700
#define ADC_CALIB_BIAS_CAL_VAL(x)	(((x) >> 8) & 0x7)

#define ADC_CALIB_s    MMIO_REG(0x42004028, struct __struct_ADC_CALIB)
struct __struct_ADC_CALIB
{
  uint16_t linearity_cal : 8;
  uint16_t bias_cal : 3;
  uint16_t  : 5;
};

#define ADC_DBGCTRL	MMIO_REG(0x4200402a, uint8_t)
#define ADC_DBGCTRL_DBGRUN	(1 << 0)

#define ADC_DBGCTRL_s    MMIO_REG(0x4200402a, struct __struct_ADC_DBGCTRL)
struct __struct_ADC_DBGCTRL
{
  uint8_t dbgrun : 1;
  uint8_t  : 7;
};

// 0x42004400 AC

#define AC_CTRLA	MMIO_REG(0x42004400, uint8_t)
#define AC_CTRLA_SWRST	(1 << 0)
#define AC_CTRLA_ENABLE	(1 << 1)
#define AC_CTRLA_RUNSTDBY	(1 << 2)

#define AC_CTRLA_s    MMIO_REG(0x42004400, struct __struct_AC_CTRLA)
struct __struct_AC_CTRLA
{
  uint8_t swrst : 1;
  uint8_t enable : 1;
  uint8_t runstdby : 1;
  uint8_t  : 5;
};

#define AC_CTRLB	MMIO_REG(0x42004401, uint8_t)
#define AC_CTRLB_START0	(1 << 0)
#define AC_CTRLB_START1	(1 << 1)

#define AC_CTRLB_s    MMIO_REG(0x42004401, struct __struct_AC_CTRLB)
struct __struct_AC_CTRLB
{
  uint8_t start0 : 1;
  uint8_t start1 : 1;
  uint8_t  : 6;
};

#define AC_EVCTRL	MMIO_REG(0x42004402, uint16_t)
#define AC_EVCTRL_COMPEO0	(1 << 0)
#define AC_EVCTRL_COMPEO1	(1 << 1)
#define AC_EVCTRL_WINEO0	(1 << 4)
#define AC_EVCTRL_COMPEI0	(1 << 8)
#define AC_EVCTRL_COMPEI1	(1 << 9)

#define AC_EVCTRL_s    MMIO_REG(0x42004402, struct __struct_AC_EVCTRL)
struct __struct_AC_EVCTRL
{
  uint16_t compeo0 : 1;
  uint16_t compeo1 : 1;
  uint16_t  : 2;
  uint16_t wineo0 : 1;
  uint16_t  : 3;
  uint16_t compei0 : 1;
  uint16_t compei1 : 1;
  uint16_t  : 6;
};

#define AC_INTENCLR	MMIO_REG(0x42004404, uint8_t)
#define AC_INTENCLR_COMP0	(1 << 0)
#define AC_INTENCLR_COMP1	(1 << 1)
#define AC_INTENCLR_WIN	(1 << 4)

#define AC_INTENCLR_s    MMIO_REG(0x42004404, struct __struct_AC_INTENCLR)
struct __struct_AC_INTENCLR
{
  uint8_t comp0 : 1;
  uint8_t comp1 : 1;
  uint8_t  : 2;
  uint8_t win : 1;
  uint8_t  : 3;
};

#define AC_INTENSET	MMIO_REG(0x42004405, uint8_t)
#define AC_INTENSET_COMP0	(1 << 0)
#define AC_INTENSET_COMP1	(1 << 1)
#define AC_INTENSET_WIN	(1 << 4)

#define AC_INTENSET_s    MMIO_REG(0x42004405, struct __struct_AC_INTENSET)
struct __struct_AC_INTENSET
{
  uint8_t comp0 : 1;
  uint8_t comp1 : 1;
  uint8_t  : 2;
  uint8_t win : 1;
  uint8_t  : 3;
};

#define AC_INTFLAG	MMIO_REG(0x42004406, uint8_t)
#define AC_INTFLAG_COMP0	(1 << 0)
#define AC_INTFLAG_COMP1	(1 << 1)
#define AC_INTFLAG_WIN	(1 << 4)

#define AC_INTFLAG_s    MMIO_REG(0x42004406, struct __struct_AC_INTFLAG)
struct __struct_AC_INTFLAG
{
  uint8_t comp0 : 1;
  uint8_t comp1 : 1;
  uint8_t  : 2;
  uint8_t win : 1;
  uint8_t  : 3;
};

#define AC_STATUSA	MMIO_REG(0x42004408, uint8_t)
#define AC_STATUSA_STATE0	(1 << 0)
#define AC_STATUSA_STATE1	(1 << 1)
#define AC_STATUSA_WSTATE0(x)	((x) << 4)
#define AC_STATUSA_WSTATE0_MSK	0x00000030
#define AC_STATUSA_WSTATE0_VAL(x)	(((x) >> 4) & 0x3)

#define AC_STATUSA_s    MMIO_REG(0x42004408, struct __struct_AC_STATUSA)
struct __struct_AC_STATUSA
{
  uint8_t state0 : 1;
  uint8_t state1 : 1;
  uint8_t  : 2;
  uint8_t wstate0 : 2;
  uint8_t  : 2;
};

#define AC_STATUSB	MMIO_REG(0x42004409, uint8_t)
#define AC_STATUSB_READY0	(1 << 0)
#define AC_STATUSB_READY1	(1 << 1)
#define AC_STATUSB_SYNCBUSY	(1 << 7)

#define AC_STATUSB_s    MMIO_REG(0x42004409, struct __struct_AC_STATUSB)
struct __struct_AC_STATUSB
{
  uint8_t ready0 : 1;
  uint8_t ready1 : 1;
  uint8_t  : 5;
  uint8_t syncbusy : 1;
};

#define AC_STATUSC	MMIO_REG(0x4200440a, uint8_t)
#define AC_STATUSC_STATE0	(1 << 0)
#define AC_STATUSC_STATE1	(1 << 1)
#define AC_STATUSC_WSTATE0(x)	((x) << 4)
#define AC_STATUSC_WSTATE0_MSK	0x00000030
#define AC_STATUSC_WSTATE0_VAL(x)	(((x) >> 4) & 0x3)

#define AC_STATUSC_s    MMIO_REG(0x4200440a, struct __struct_AC_STATUSC)
struct __struct_AC_STATUSC
{
  uint8_t state0 : 1;
  uint8_t state1 : 1;
  uint8_t  : 2;
  uint8_t wstate0 : 2;
  uint8_t  : 2;
};

#define AC_WINCTRL	MMIO_REG(0x4200440c, uint8_t)
#define AC_WINCTRL_WEN0	(1 << 0)
#define AC_WINCTRL_WINTSEL0(x)	((x) << 1)
#define AC_WINCTRL_WINTSEL0_MSK	0x00000006
#define AC_WINCTRL_WINTSEL0_VAL(x)	(((x) >> 1) & 0x3)

#define AC_WINCTRL_s    MMIO_REG(0x4200440c, struct __struct_AC_WINCTRL)
struct __struct_AC_WINCTRL
{
  uint8_t wen0 : 1;
  uint8_t wintsel0 : 2;
  uint8_t  : 5;
};

#define AC_COMPCTRL0	MMIO_REG(0x42004410, uint32_t)
#define AC_COMPCTRL0_ENABLE	(1 << 0)
#define AC_COMPCTRL0_SINGLE	(1 << 1)
#define AC_COMPCTRL0_SPEED(x)	((x) << 2)
#define AC_COMPCTRL0_SPEED_MSK	0x0000000c
#define AC_COMPCTRL0_SPEED_VAL(x)	(((x) >> 2) & 0x3)
#define AC_COMPCTRL0_INTSEL(x)	((x) << 5)
#define AC_COMPCTRL0_INTSEL_MSK	0x00000060
#define AC_COMPCTRL0_INTSEL_VAL(x)	(((x) >> 5) & 0x3)
#define AC_COMPCTRL0_MUXNEG(x)	((x) << 8)
#define AC_COMPCTRL0_MUXNEG_MSK	0x00000700
#define AC_COMPCTRL0_MUXNEG_VAL(x)	(((x) >> 8) & 0x7)
#define AC_COMPCTRL0_MUXPOS(x)	((x) << 12)
#define AC_COMPCTRL0_MUXPOS_MSK	0x00003000
#define AC_COMPCTRL0_MUXPOS_VAL(x)	(((x) >> 12) & 0x3)
#define AC_COMPCTRL0_SWAP	(1 << 15)
#define AC_COMPCTRL0_OUT(x)	((x) << 16)
#define AC_COMPCTRL0_OUT_MSK	0x00030000
#define AC_COMPCTRL0_OUT_VAL(x)	(((x) >> 16) & 0x3)
#define AC_COMPCTRL0_HYST	(1 << 19)
#define AC_COMPCTRL0_FLEN(x)	((x) << 24)
#define AC_COMPCTRL0_FLEN_MSK	0x07000000
#define AC_COMPCTRL0_FLEN_VAL(x)	(((x) >> 24) & 0x7)

#define AC_COMPCTRL0_s    MMIO_REG(0x42004410, struct __struct_AC_COMPCTRL0)
struct __struct_AC_COMPCTRL0
{
  uint32_t enable : 1;
  uint32_t single : 1;
  uint32_t speed : 2;
  uint32_t  : 1;
  uint32_t intsel : 2;
  uint32_t  : 1;
  uint32_t muxneg : 3;
  uint32_t  : 1;
  uint32_t muxpos : 2;
  uint32_t  : 1;
  uint32_t swap : 1;
  uint32_t out : 2;
  uint32_t  : 1;
  uint32_t hyst : 1;
  uint32_t  : 4;
  uint32_t flen : 3;
  uint32_t  : 5;
};

#define AC_COMPCTRL1	MMIO_REG(0x42004414, uint32_t)
#define AC_COMPCTRL1_ENABLE	(1 << 0)
#define AC_COMPCTRL1_SINGLE	(1 << 1)
#define AC_COMPCTRL1_SPEED(x)	((x) << 2)
#define AC_COMPCTRL1_SPEED_MSK	0x0000000c
#define AC_COMPCTRL1_SPEED_VAL(x)	(((x) >> 2) & 0x3)
#define AC_COMPCTRL1_INTSEL(x)	((x) << 5)
#define AC_COMPCTRL1_INTSEL_MSK	0x00000060
#define AC_COMPCTRL1_INTSEL_VAL(x)	(((x) >> 5) & 0x3)
#define AC_COMPCTRL1_MUXNEG(x)	((x) << 8)
#define AC_COMPCTRL1_MUXNEG_MSK	0x00000700
#define AC_COMPCTRL1_MUXNEG_VAL(x)	(((x) >> 8) & 0x7)
#define AC_COMPCTRL1_MUXPOS(x)	((x) << 12)
#define AC_COMPCTRL1_MUXPOS_MSK	0x00003000
#define AC_COMPCTRL1_MUXPOS_VAL(x)	(((x) >> 12) & 0x3)
#define AC_COMPCTRL1_SWAP	(1 << 15)
#define AC_COMPCTRL1_OUT(x)	((x) << 16)
#define AC_COMPCTRL1_OUT_MSK	0x00030000
#define AC_COMPCTRL1_OUT_VAL(x)	(((x) >> 16) & 0x3)
#define AC_COMPCTRL1_HYST	(1 << 19)
#define AC_COMPCTRL1_FLEN(x)	((x) << 24)
#define AC_COMPCTRL1_FLEN_MSK	0x07000000
#define AC_COMPCTRL1_FLEN_VAL(x)	(((x) >> 24) & 0x7)

#define AC_COMPCTRL1_s    MMIO_REG(0x42004414, struct __struct_AC_COMPCTRL1)
struct __struct_AC_COMPCTRL1
{
  uint32_t enable : 1;
  uint32_t single : 1;
  uint32_t speed : 2;
  uint32_t  : 1;
  uint32_t intsel : 2;
  uint32_t  : 1;
  uint32_t muxneg : 3;
  uint32_t  : 1;
  uint32_t muxpos : 2;
  uint32_t  : 1;
  uint32_t swap : 1;
  uint32_t out : 2;
  uint32_t  : 1;
  uint32_t hyst : 1;
  uint32_t  : 4;
  uint32_t flen : 3;
  uint32_t  : 5;
};

#define AC_SCALER0	MMIO_REG(0x42004420, uint8_t)
#define AC_SCALER0_VALUE(x)	((x) << 0)
#define AC_SCALER0_VALUE_MSK	0x0000001f
#define AC_SCALER0_VALUE_VAL(x)	(((x) >> 0) & 0x1f)

#define AC_SCALER0_s    MMIO_REG(0x42004420, struct __struct_AC_SCALER0)
struct __struct_AC_SCALER0
{
  uint8_t value : 5;
  uint8_t  : 3;
};

#define AC_SCALER1	MMIO_REG(0x42004421, uint8_t)
#define AC_SCALER1_VALUE(x)	((x) << 0)
#define AC_SCALER1_VALUE_MSK	0x0000001f
#define AC_SCALER1_VALUE_VAL(x)	(((x) >> 0) & 0x1f)

#define AC_SCALER1_s    MMIO_REG(0x42004421, struct __struct_AC_SCALER1)
struct __struct_AC_SCALER1
{
  uint8_t value : 5;
  uint8_t  : 3;
};

// 0x42004800 DAC

#define DAC_CTRLA	MMIO_REG(0x42004800, uint8_t)
#define DAC_CTRLA_SWRST	(1 << 0)
#define DAC_CTRLA_ENABLE	(1 << 1)
#define DAC_CTRLA_RUNSTDBY	(1 << 2)

#define DAC_CTRLA_s    MMIO_REG(0x42004800, struct __struct_DAC_CTRLA)
struct __struct_DAC_CTRLA
{
  uint8_t swrst : 1;
  uint8_t enable : 1;
  uint8_t runstdby : 1;
  uint8_t  : 5;
};

#define DAC_CTRLB	MMIO_REG(0x42004801, uint8_t)
#define DAC_CTRLB_EOEN	(1 << 0)
#define DAC_CTRLB_IOEN	(1 << 1)
#define DAC_CTRLB_LEFTADJ	(1 << 2)
#define DAC_CTRLB_VPD	(1 << 3)
#define DAC_CTRLB_REFSEL(x)	((x) << 6)
#define DAC_CTRLB_REFSEL_MSK	0x000000c0
#define DAC_CTRLB_REFSEL_VAL(x)	(((x) >> 6) & 0x3)

#define DAC_CTRLB_s    MMIO_REG(0x42004801, struct __struct_DAC_CTRLB)
struct __struct_DAC_CTRLB
{
  uint8_t eoen : 1;
  uint8_t ioen : 1;
  uint8_t leftadj : 1;
  uint8_t vpd : 1;
  uint8_t  : 2;
  uint8_t refsel : 2;
};

#define DAC_EVCTRL	MMIO_REG(0x42004802, uint8_t)
#define DAC_EVCTRL_STARTEI	(1 << 0)
#define DAC_EVCTRL_EMPTYEO	(1 << 1)

#define DAC_EVCTRL_s    MMIO_REG(0x42004802, struct __struct_DAC_EVCTRL)
struct __struct_DAC_EVCTRL
{
  uint8_t startei : 1;
  uint8_t emptyeo : 1;
  uint8_t  : 6;
};

#define DAC_TEST	MMIO_REG(0x42004803, uint8_t)
#define DAC_TEST_TESTEN	(1 << 0)

#define DAC_TEST_s    MMIO_REG(0x42004803, struct __struct_DAC_TEST)
struct __struct_DAC_TEST
{
  uint8_t testen : 1;
  uint8_t  : 7;
};

#define DAC_INTENCLR	MMIO_REG(0x42004804, uint8_t)
#define DAC_INTENCLR_UNDERRUN	(1 << 0)
#define DAC_INTENCLR_EMPTY	(1 << 1)
#define DAC_INTENCLR_SYNCRDY	(1 << 2)

#define DAC_INTENCLR_s    MMIO_REG(0x42004804, struct __struct_DAC_INTENCLR)
struct __struct_DAC_INTENCLR
{
  uint8_t underrun : 1;
  uint8_t empty : 1;
  uint8_t syncrdy : 1;
  uint8_t  : 5;
};

#define DAC_INTENSET	MMIO_REG(0x42004805, uint8_t)
#define DAC_INTENSET_UNDERRUN	(1 << 0)
#define DAC_INTENSET_EMPTY	(1 << 1)
#define DAC_INTENSET_SYNCRDY	(1 << 2)

#define DAC_INTENSET_s    MMIO_REG(0x42004805, struct __struct_DAC_INTENSET)
struct __struct_DAC_INTENSET
{
  uint8_t underrun : 1;
  uint8_t empty : 1;
  uint8_t syncrdy : 1;
  uint8_t  : 5;
};

#define DAC_INTFLAG	MMIO_REG(0x42004806, uint8_t)
#define DAC_INTFLAG_UNDERRUN	(1 << 0)
#define DAC_INTFLAG_EMPTY	(1 << 1)
#define DAC_INTFLAG_SYNCRDY	(1 << 2)

#define DAC_INTFLAG_s    MMIO_REG(0x42004806, struct __struct_DAC_INTFLAG)
struct __struct_DAC_INTFLAG
{
  uint8_t underrun : 1;
  uint8_t empty : 1;
  uint8_t syncrdy : 1;
  uint8_t  : 5;
};

#define DAC_STATUS	MMIO_REG(0x42004807, uint8_t)
#define DAC_STATUS_SYNCBUSY	(1 << 7)

#define DAC_STATUS_s    MMIO_REG(0x42004807, struct __struct_DAC_STATUS)
struct __struct_DAC_STATUS
{
  uint8_t  : 7;
  uint8_t syncbusy : 1;
};

#define DAC_DATA	MMIO_REG(0x42004808, uint16_t)
#define DAC_DATA_DATA(x)	((x) << 0)
#define DAC_DATA_DATA_MSK	0x000003ff
#define DAC_DATA_DATA_VAL(x)	(((x) >> 0) & 0x3ff)

#define DAC_DATA_s    MMIO_REG(0x42004808, struct __struct_DAC_DATA)
struct __struct_DAC_DATA
{
  uint16_t data : 10;
  uint16_t  : 6;
};

#define DAC_DATABUF	MMIO_REG(0x4200480c, uint16_t)
#define DAC_DATABUF_DATABUF(x)	((x) << 0)
#define DAC_DATABUF_DATABUF_MSK	0x000003ff
#define DAC_DATABUF_DATABUF_VAL(x)	(((x) >> 0) & 0x3ff)

#define DAC_DATABUF_s    MMIO_REG(0x4200480c, struct __struct_DAC_DATABUF)
struct __struct_DAC_DATABUF
{
  uint16_t databuf : 10;
  uint16_t  : 6;
};

// 0x42004c00 PTC

// 0xe000e010 SYSTICK

#define SYSTICK_CSR	MMIO_REG(0xe000e010, uint32_t)
#define SYSTICK_CSR_ENABLE	(1 << 0)
#define SYSTICK_CSR_TICKINT	(1 << 1)
#define SYSTICK_CSR_CLKSOURCE	(1 << 2)
#define SYSTICK_CSR_COUNTFLAG	(1 << 16)

#define SYSTICK_CSR_s    MMIO_REG(0xe000e010, struct __struct_SYSTICK_CSR)
struct __struct_SYSTICK_CSR
{
  uint32_t enable : 1;
  uint32_t tickint : 1;
  uint32_t clksource : 1;
  uint32_t  : 13;
  uint32_t countflag : 1;
  uint32_t  : 15;
};

#define SYSTICK_RVR	MMIO_REG(0xe000e014, uint32_t)
#define SYSTICK_RVR_RELOAD(x)	((x) << 0)
#define SYSTICK_RVR_RELOAD_MSK	0x00ffffff
#define SYSTICK_RVR_RELOAD_VAL(x)	(((x) >> 0) & 0xffffff)

#define SYSTICK_RVR_s    MMIO_REG(0xe000e014, struct __struct_SYSTICK_RVR)
struct __struct_SYSTICK_RVR
{
  uint32_t reload : 24;
  uint32_t  : 8;
};

#define SYSTICK_CVR	MMIO_REG(0xe000e018, uint32_t)
#define SYSTICK_CVR_CURRENT(x)	((x) << 0)
#define SYSTICK_CVR_CURRENT_MSK	0x00ffffff
#define SYSTICK_CVR_CURRENT_VAL(x)	(((x) >> 0) & 0xffffff)

#define SYSTICK_CVR_s    MMIO_REG(0xe000e018, struct __struct_SYSTICK_CVR)
struct __struct_SYSTICK_CVR
{
  uint32_t current : 24;
  uint32_t  : 8;
};

#define SYSTICK_CALIB	MMIO_REG(0xe000e01c, uint32_t)
#define SYSTICK_CALIB_TENMS(x)	((x) << 0)
#define SYSTICK_CALIB_TENMS_MSK	0x00ffffff
#define SYSTICK_CALIB_TENMS_VAL(x)	(((x) >> 0) & 0xffffff)
#define SYSTICK_CALIB_SCEW	(1 << 30)
#define SYSTICK_CALIB_NOREF	(1 << 31)

#define SYSTICK_CALIB_s    MMIO_REG(0xe000e01c, struct __struct_SYSTICK_CALIB)
struct __struct_SYSTICK_CALIB
{
  uint32_t tenms : 24;
  uint32_t  : 6;
  uint32_t scew : 1;
  uint32_t noref : 1;
};

// 0xe000e100 NVIC

#define NVIC_ISER	MMIO_REG(0xe000e100, uint32_t)
#define NVIC_ISER_PM	(1 << 0)
#define NVIC_ISER_SYSCTRL	(1 << 1)
#define NVIC_ISER_WDT	(1 << 2)
#define NVIC_ISER_RTC	(1 << 3)
#define NVIC_ISER_EIC	(1 << 4)
#define NVIC_ISER_NVMCTRL	(1 << 5)
#define NVIC_ISER_EVSYS	(1 << 6)
#define NVIC_ISER_SERCOM0	(1 << 7)
#define NVIC_ISER_SERCOM1	(1 << 8)
#define NVIC_ISER_SERCOM2	(1 << 9)
#define NVIC_ISER_SERCOM3	(1 << 10)
#define NVIC_ISER_SERCOM4	(1 << 11)
#define NVIC_ISER_SERCOM5	(1 << 12)
#define NVIC_ISER_TC0	(1 << 13)
#define NVIC_ISER_TC1	(1 << 14)
#define NVIC_ISER_TC2	(1 << 15)
#define NVIC_ISER_TC3	(1 << 16)
#define NVIC_ISER_TC4	(1 << 17)
#define NVIC_ISER_TC5	(1 << 18)
#define NVIC_ISER_TC6	(1 << 19)
#define NVIC_ISER_TC7	(1 << 20)
#define NVIC_ISER_ADC	(1 << 21)
#define NVIC_ISER_AC	(1 << 22)
#define NVIC_ISER_DAC	(1 << 23)
#define NVIC_ISER_PTC	(1 << 24)

#define NVIC_ISER_s    MMIO_REG(0xe000e100, struct __struct_NVIC_ISER)
struct __struct_NVIC_ISER
{
  uint32_t pm : 1;
  uint32_t sysctrl : 1;
  uint32_t wdt : 1;
  uint32_t rtc : 1;
  uint32_t eic : 1;
  uint32_t nvmctrl : 1;
  uint32_t evsys : 1;
  uint32_t sercom0 : 1;
  uint32_t sercom1 : 1;
  uint32_t sercom2 : 1;
  uint32_t sercom3 : 1;
  uint32_t sercom4 : 1;
  uint32_t sercom5 : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t tc6 : 1;
  uint32_t tc7 : 1;
  uint32_t adc : 1;
  uint32_t ac : 1;
  uint32_t dac : 1;
  uint32_t ptc : 1;
  uint32_t  : 7;
};

#define NVIC_ICER	MMIO_REG(0xe000e180, uint32_t)
#define NVIC_ICER_PM	(1 << 0)
#define NVIC_ICER_SYSCTRL	(1 << 1)
#define NVIC_ICER_WDT	(1 << 2)
#define NVIC_ICER_RTC	(1 << 3)
#define NVIC_ICER_EIC	(1 << 4)
#define NVIC_ICER_NVMCTRL	(1 << 5)
#define NVIC_ICER_EVSYS	(1 << 6)
#define NVIC_ICER_SERCOM0	(1 << 7)
#define NVIC_ICER_SERCOM1	(1 << 8)
#define NVIC_ICER_SERCOM2	(1 << 9)
#define NVIC_ICER_SERCOM3	(1 << 10)
#define NVIC_ICER_SERCOM4	(1 << 11)
#define NVIC_ICER_SERCOM5	(1 << 12)
#define NVIC_ICER_TC0	(1 << 13)
#define NVIC_ICER_TC1	(1 << 14)
#define NVIC_ICER_TC2	(1 << 15)
#define NVIC_ICER_TC3	(1 << 16)
#define NVIC_ICER_TC4	(1 << 17)
#define NVIC_ICER_TC5	(1 << 18)
#define NVIC_ICER_TC6	(1 << 19)
#define NVIC_ICER_TC7	(1 << 20)
#define NVIC_ICER_ADC	(1 << 21)
#define NVIC_ICER_AC	(1 << 22)
#define NVIC_ICER_DAC	(1 << 23)
#define NVIC_ICER_PTC	(1 << 24)

#define NVIC_ICER_s    MMIO_REG(0xe000e180, struct __struct_NVIC_ICER)
struct __struct_NVIC_ICER
{
  uint32_t pm : 1;
  uint32_t sysctrl : 1;
  uint32_t wdt : 1;
  uint32_t rtc : 1;
  uint32_t eic : 1;
  uint32_t nvmctrl : 1;
  uint32_t evsys : 1;
  uint32_t sercom0 : 1;
  uint32_t sercom1 : 1;
  uint32_t sercom2 : 1;
  uint32_t sercom3 : 1;
  uint32_t sercom4 : 1;
  uint32_t sercom5 : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t tc6 : 1;
  uint32_t tc7 : 1;
  uint32_t adc : 1;
  uint32_t ac : 1;
  uint32_t dac : 1;
  uint32_t ptc : 1;
  uint32_t  : 7;
};

#define NVIC_ISPR	MMIO_REG(0xe000e200, uint32_t)
#define NVIC_ISPR_PM	(1 << 0)
#define NVIC_ISPR_SYSCTRL	(1 << 1)
#define NVIC_ISPR_WDT	(1 << 2)
#define NVIC_ISPR_RTC	(1 << 3)
#define NVIC_ISPR_EIC	(1 << 4)
#define NVIC_ISPR_NVMCTRL	(1 << 5)
#define NVIC_ISPR_EVSYS	(1 << 6)
#define NVIC_ISPR_SERCOM0	(1 << 7)
#define NVIC_ISPR_SERCOM1	(1 << 8)
#define NVIC_ISPR_SERCOM2	(1 << 9)
#define NVIC_ISPR_SERCOM3	(1 << 10)
#define NVIC_ISPR_SERCOM4	(1 << 11)
#define NVIC_ISPR_SERCOM5	(1 << 12)
#define NVIC_ISPR_TC0	(1 << 13)
#define NVIC_ISPR_TC1	(1 << 14)
#define NVIC_ISPR_TC2	(1 << 15)
#define NVIC_ISPR_TC3	(1 << 16)
#define NVIC_ISPR_TC4	(1 << 17)
#define NVIC_ISPR_TC5	(1 << 18)
#define NVIC_ISPR_TC6	(1 << 19)
#define NVIC_ISPR_TC7	(1 << 20)
#define NVIC_ISPR_ADC	(1 << 21)
#define NVIC_ISPR_AC	(1 << 22)
#define NVIC_ISPR_DAC	(1 << 23)
#define NVIC_ISPR_PTC	(1 << 24)

#define NVIC_ISPR_s    MMIO_REG(0xe000e200, struct __struct_NVIC_ISPR)
struct __struct_NVIC_ISPR
{
  uint32_t pm : 1;
  uint32_t sysctrl : 1;
  uint32_t wdt : 1;
  uint32_t rtc : 1;
  uint32_t eic : 1;
  uint32_t nvmctrl : 1;
  uint32_t evsys : 1;
  uint32_t sercom0 : 1;
  uint32_t sercom1 : 1;
  uint32_t sercom2 : 1;
  uint32_t sercom3 : 1;
  uint32_t sercom4 : 1;
  uint32_t sercom5 : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t tc6 : 1;
  uint32_t tc7 : 1;
  uint32_t adc : 1;
  uint32_t ac : 1;
  uint32_t dac : 1;
  uint32_t ptc : 1;
  uint32_t  : 7;
};

#define NVIC_ICPR	MMIO_REG(0xe000e280, uint32_t)
#define NVIC_ICPR_PM	(1 << 0)
#define NVIC_ICPR_SYSCTRL	(1 << 1)
#define NVIC_ICPR_WDT	(1 << 2)
#define NVIC_ICPR_RTC	(1 << 3)
#define NVIC_ICPR_EIC	(1 << 4)
#define NVIC_ICPR_NVMCTRL	(1 << 5)
#define NVIC_ICPR_EVSYS	(1 << 6)
#define NVIC_ICPR_SERCOM0	(1 << 7)
#define NVIC_ICPR_SERCOM1	(1 << 8)
#define NVIC_ICPR_SERCOM2	(1 << 9)
#define NVIC_ICPR_SERCOM3	(1 << 10)
#define NVIC_ICPR_SERCOM4	(1 << 11)
#define NVIC_ICPR_SERCOM5	(1 << 12)
#define NVIC_ICPR_TC0	(1 << 13)
#define NVIC_ICPR_TC1	(1 << 14)
#define NVIC_ICPR_TC2	(1 << 15)
#define NVIC_ICPR_TC3	(1 << 16)
#define NVIC_ICPR_TC4	(1 << 17)
#define NVIC_ICPR_TC5	(1 << 18)
#define NVIC_ICPR_TC6	(1 << 19)
#define NVIC_ICPR_TC7	(1 << 20)
#define NVIC_ICPR_ADC	(1 << 21)
#define NVIC_ICPR_AC	(1 << 22)
#define NVIC_ICPR_DAC	(1 << 23)
#define NVIC_ICPR_PTC	(1 << 24)

#define NVIC_ICPR_s    MMIO_REG(0xe000e280, struct __struct_NVIC_ICPR)
struct __struct_NVIC_ICPR
{
  uint32_t pm : 1;
  uint32_t sysctrl : 1;
  uint32_t wdt : 1;
  uint32_t rtc : 1;
  uint32_t eic : 1;
  uint32_t nvmctrl : 1;
  uint32_t evsys : 1;
  uint32_t sercom0 : 1;
  uint32_t sercom1 : 1;
  uint32_t sercom2 : 1;
  uint32_t sercom3 : 1;
  uint32_t sercom4 : 1;
  uint32_t sercom5 : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t tc6 : 1;
  uint32_t tc7 : 1;
  uint32_t adc : 1;
  uint32_t ac : 1;
  uint32_t dac : 1;
  uint32_t ptc : 1;
  uint32_t  : 7;
};

#define NVIC_IPR0	MMIO_REG(0xe000e400, uint32_t)
#define NVIC_IPR0_PM(x)	((x) << 6)
#define NVIC_IPR0_PM_MSK	0x000000c0
#define NVIC_IPR0_PM_VAL(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR0_SYSCTRL(x)	((x) << 14)
#define NVIC_IPR0_SYSCTRL_MSK	0x0000c000
#define NVIC_IPR0_SYSCTRL_VAL(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR0_WDT(x)	((x) << 22)
#define NVIC_IPR0_WDT_MSK	0x00c00000
#define NVIC_IPR0_WDT_VAL(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR0_RTC(x)	((x) << 30)
#define NVIC_IPR0_RTC_MSK	0xc0000000
#define NVIC_IPR0_RTC_VAL(x)	(((x) >> 30) & 0x3)

#define NVIC_IPR0_s    MMIO_REG(0xe000e400, struct __struct_NVIC_IPR0)
struct __struct_NVIC_IPR0
{
  uint32_t  : 6;
  uint32_t pm : 2;
  uint32_t  : 6;
  uint32_t sysctrl : 2;
  uint32_t  : 6;
  uint32_t wdt : 2;
  uint32_t  : 6;
  uint32_t rtc : 2;
};

#define NVIC_IPR1	MMIO_REG(0xe000e404, uint32_t)
#define NVIC_IPR1_EIC(x)	((x) << 6)
#define NVIC_IPR1_EIC_MSK	0x000000c0
#define NVIC_IPR1_EIC_VAL(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR1_NVMCTRL(x)	((x) << 14)
#define NVIC_IPR1_NVMCTRL_MSK	0x0000c000
#define NVIC_IPR1_NVMCTRL_VAL(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR1_EVSYS(x)	((x) << 22)
#define NVIC_IPR1_EVSYS_MSK	0x00c00000
#define NVIC_IPR1_EVSYS_VAL(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR1_SERCOM0(x)	((x) << 30)
#define NVIC_IPR1_SERCOM0_MSK	0xc0000000
#define NVIC_IPR1_SERCOM0_VAL(x)	(((x) >> 30) & 0x3)

#define NVIC_IPR1_s    MMIO_REG(0xe000e404, struct __struct_NVIC_IPR1)
struct __struct_NVIC_IPR1
{
  uint32_t  : 6;
  uint32_t eic : 2;
  uint32_t  : 6;
  uint32_t nvmctrl : 2;
  uint32_t  : 6;
  uint32_t evsys : 2;
  uint32_t  : 6;
  uint32_t sercom0 : 2;
};

#define NVIC_IPR2	MMIO_REG(0xe000e408, uint32_t)
#define NVIC_IPR2_SERCOM1(x)	((x) << 6)
#define NVIC_IPR2_SERCOM1_MSK	0x000000c0
#define NVIC_IPR2_SERCOM1_VAL(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR2_SERCOM2(x)	((x) << 14)
#define NVIC_IPR2_SERCOM2_MSK	0x0000c000
#define NVIC_IPR2_SERCOM2_VAL(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR2_SERCOM3(x)	((x) << 22)
#define NVIC_IPR2_SERCOM3_MSK	0x00c00000
#define NVIC_IPR2_SERCOM3_VAL(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR2_SERCOM4(x)	((x) << 30)
#define NVIC_IPR2_SERCOM4_MSK	0xc0000000
#define NVIC_IPR2_SERCOM4_VAL(x)	(((x) >> 30) & 0x3)

#define NVIC_IPR2_s    MMIO_REG(0xe000e408, struct __struct_NVIC_IPR2)
struct __struct_NVIC_IPR2
{
  uint32_t  : 6;
  uint32_t sercom1 : 2;
  uint32_t  : 6;
  uint32_t sercom2 : 2;
  uint32_t  : 6;
  uint32_t sercom3 : 2;
  uint32_t  : 6;
  uint32_t sercom4 : 2;
};

#define NVIC_IPR3	MMIO_REG(0xe000e40c, uint32_t)
#define NVIC_IPR3_SERCOM5(x)	((x) << 6)
#define NVIC_IPR3_SERCOM5_MSK	0x000000c0
#define NVIC_IPR3_SERCOM5_VAL(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR3_TC0(x)	((x) << 14)
#define NVIC_IPR3_TC0_MSK	0x0000c000
#define NVIC_IPR3_TC0_VAL(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR3_TC1(x)	((x) << 22)
#define NVIC_IPR3_TC1_MSK	0x00c00000
#define NVIC_IPR3_TC1_VAL(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR3_TC2(x)	((x) << 30)
#define NVIC_IPR3_TC2_MSK	0xc0000000
#define NVIC_IPR3_TC2_VAL(x)	(((x) >> 30) & 0x3)

#define NVIC_IPR3_s    MMIO_REG(0xe000e40c, struct __struct_NVIC_IPR3)
struct __struct_NVIC_IPR3
{
  uint32_t  : 6;
  uint32_t sercom5 : 2;
  uint32_t  : 6;
  uint32_t tc0 : 2;
  uint32_t  : 6;
  uint32_t tc1 : 2;
  uint32_t  : 6;
  uint32_t tc2 : 2;
};

#define NVIC_IPR4	MMIO_REG(0xe000e410, uint32_t)
#define NVIC_IPR4_TC3(x)	((x) << 6)
#define NVIC_IPR4_TC3_MSK	0x000000c0
#define NVIC_IPR4_TC3_VAL(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR4_TC4(x)	((x) << 14)
#define NVIC_IPR4_TC4_MSK	0x0000c000
#define NVIC_IPR4_TC4_VAL(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR4_TC5(x)	((x) << 22)
#define NVIC_IPR4_TC5_MSK	0x00c00000
#define NVIC_IPR4_TC5_VAL(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR4_TC6(x)	((x) << 30)
#define NVIC_IPR4_TC6_MSK	0xc0000000
#define NVIC_IPR4_TC6_VAL(x)	(((x) >> 30) & 0x3)

#define NVIC_IPR4_s    MMIO_REG(0xe000e410, struct __struct_NVIC_IPR4)
struct __struct_NVIC_IPR4
{
  uint32_t  : 6;
  uint32_t tc3 : 2;
  uint32_t  : 6;
  uint32_t tc4 : 2;
  uint32_t  : 6;
  uint32_t tc5 : 2;
  uint32_t  : 6;
  uint32_t tc6 : 2;
};

#define NVIC_IPR5	MMIO_REG(0xe000e414, uint32_t)
#define NVIC_IPR5_TC7(x)	((x) << 6)
#define NVIC_IPR5_TC7_MSK	0x000000c0
#define NVIC_IPR5_TC7_VAL(x)	(((x) >> 6) & 0x3)
#define NVIC_IPR5_ADC(x)	((x) << 14)
#define NVIC_IPR5_ADC_MSK	0x0000c000
#define NVIC_IPR5_ADC_VAL(x)	(((x) >> 14) & 0x3)
#define NVIC_IPR5_AC(x)	((x) << 22)
#define NVIC_IPR5_AC_MSK	0x00c00000
#define NVIC_IPR5_AC_VAL(x)	(((x) >> 22) & 0x3)
#define NVIC_IPR5_DAC(x)	((x) << 30)
#define NVIC_IPR5_DAC_MSK	0xc0000000
#define NVIC_IPR5_DAC_VAL(x)	(((x) >> 30) & 0x3)

#define NVIC_IPR5_s    MMIO_REG(0xe000e414, struct __struct_NVIC_IPR5)
struct __struct_NVIC_IPR5
{
  uint32_t  : 6;
  uint32_t tc7 : 2;
  uint32_t  : 6;
  uint32_t adc : 2;
  uint32_t  : 6;
  uint32_t ac : 2;
  uint32_t  : 6;
  uint32_t dac : 2;
};

#define NVIC_IPR6	MMIO_REG(0xe000e418, uint32_t)
#define NVIC_IPR6_PTC(x)	((x) << 6)
#define NVIC_IPR6_PTC_MSK	0x000000c0
#define NVIC_IPR6_PTC_VAL(x)	(((x) >> 6) & 0x3)

#define NVIC_IPR6_s    MMIO_REG(0xe000e418, struct __struct_NVIC_IPR6)
struct __struct_NVIC_IPR6
{
  uint32_t  : 6;
  uint32_t ptc : 2;
  uint32_t  : 6;
  uint32_t  : 2;
  uint32_t  : 6;
  uint32_t  : 2;
  uint32_t  : 6;
  uint32_t  : 2;
};

// 0xe000ed00 SCB

#define SCB_CPUID	MMIO_REG(0xe000ed00, uint32_t)
#define SCB_CPUID_REVISION(x)	((x) << 0)
#define SCB_CPUID_REVISION_MSK	0x0000000f
#define SCB_CPUID_REVISION_VAL(x)	(((x) >> 0) & 0xf)
#define SCB_CPUID_PARTNO(x)	((x) << 4)
#define SCB_CPUID_PARTNO_MSK	0x0000fff0
#define SCB_CPUID_PARTNO_VAL(x)	(((x) >> 4) & 0xfff)
#define SCB_CPUID__1100(x)	((x) << 16)
#define SCB_CPUID__1100_MSK	0x000f0000
#define SCB_CPUID__1100_VAL(x)	(((x) >> 16) & 0xf)
#define SCB_CPUID_VARIANT(x)	((x) << 20)
#define SCB_CPUID_VARIANT_MSK	0x00f00000
#define SCB_CPUID_VARIANT_VAL(x)	(((x) >> 20) & 0xf)
#define SCB_CPUID_IMPLEMENTER(x)	((x) << 24)
#define SCB_CPUID_IMPLEMENTER_MSK	0xff000000
#define SCB_CPUID_IMPLEMENTER_VAL(x)	(((x) >> 24) & 0xff)

#define SCB_CPUID_s    MMIO_REG(0xe000ed00, struct __struct_SCB_CPUID)
struct __struct_SCB_CPUID
{
  uint32_t revision : 4;
  uint32_t partno : 12;
  uint32_t _1100 : 4;
  uint32_t variant : 4;
  uint32_t implementer : 8;
};

#define SCB_ICSR	MMIO_REG(0xe000ed04, uint32_t)
#define SCB_ICSR_VECTACTIVE(x)	((x) << 0)
#define SCB_ICSR_VECTACTIVE_MSK	0x000001ff
#define SCB_ICSR_VECTACTIVE_VAL(x)	(((x) >> 0) & 0x1ff)
#define SCB_ICSR_VECTPENDING(x)	((x) << 12)
#define SCB_ICSR_VECTPENDING_MSK	0x001ff000
#define SCB_ICSR_VECTPENDING_VAL(x)	(((x) >> 12) & 0x1ff)
#define SCB_ICSR_ISRPENDING	(1 << 22)
#define SCB_ICSR_ISRPREEMPT	(1 << 23)
#define SCB_ICSR_PENDSTCLR	(1 << 25)
#define SCB_ICSR_PENDSTSET	(1 << 26)
#define SCB_ICSR_PENDSVCLR	(1 << 27)
#define SCB_ICSR_PENDSVSET	(1 << 28)
#define SCB_ICSR_NMIPENDSET	(1 << 31)

#define SCB_ICSR_s    MMIO_REG(0xe000ed04, struct __struct_SCB_ICSR)
struct __struct_SCB_ICSR
{
  uint32_t vectactive : 9;
  uint32_t  : 3;
  uint32_t vectpending : 9;
  uint32_t  : 1;
  uint32_t isrpending : 1;
  uint32_t isrpreempt : 1;
  uint32_t  : 1;
  uint32_t pendstclr : 1;
  uint32_t pendstset : 1;
  uint32_t pendsvclr : 1;
  uint32_t pendsvset : 1;
  uint32_t  : 2;
  uint32_t nmipendset : 1;
};

#define SCB_VTOR	MMIO_REG(0xe000ed08, uint32_t)
#define SCB_VTOR_TBLOFF(x)	((x) << 7)
#define SCB_VTOR_TBLOFF_MSK	0xffffff80
#define SCB_VTOR_TBLOFF_VAL(x)	(((x) >> 7) & 0x1ffffff)

#define SCB_VTOR_s    MMIO_REG(0xe000ed08, struct __struct_SCB_VTOR)
struct __struct_SCB_VTOR
{
  uint32_t  : 7;
  uint32_t tbloff : 25;
};

#define SCB_AIRCR	MMIO_REG(0xe000ed0c, uint32_t)
#define SCB_AIRCR_VECTCLRACTIVE	(1 << 1)
#define SCB_AIRCR_SYSRESETREQ	(1 << 2)
#define SCB_AIRCR_ENDIANESS	(1 << 15)
#define SCB_AIRCR_VECTKEY(x)	((x) << 16)
#define SCB_AIRCR_VECTKEY_MSK	0xffff0000
#define SCB_AIRCR_VECTKEY_VAL(x)	(((x) >> 16) & 0xffff)

#define SCB_AIRCR_s    MMIO_REG(0xe000ed0c, struct __struct_SCB_AIRCR)
struct __struct_SCB_AIRCR
{
  uint32_t  : 1;
  uint32_t vectclractive : 1;
  uint32_t sysresetreq : 1;
  uint32_t  : 12;
  uint32_t endianess : 1;
  uint32_t vectkey : 16;
};

#define SCB_SCR	MMIO_REG(0xe000ed10, uint32_t)
#define SCB_SCR_SLEEPONEXIT	(1 << 1)
#define SCB_SCR_SLEEPDEEP	(1 << 2)
#define SCB_SCR_SEVONPEND	(1 << 4)

#define SCB_SCR_s    MMIO_REG(0xe000ed10, struct __struct_SCB_SCR)
struct __struct_SCB_SCR
{
  uint32_t  : 1;
  uint32_t sleeponexit : 1;
  uint32_t sleepdeep : 1;
  uint32_t  : 1;
  uint32_t sevonpend : 1;
  uint32_t  : 27;
};

#define SCB_CCR	MMIO_REG(0xe000ed14, uint32_t)
#define SCB_CCR_UNALIGN_TRP	(1 << 3)
#define SCB_CCR_STKALIGN	(1 << 9)

#define SCB_CCR_s    MMIO_REG(0xe000ed14, struct __struct_SCB_CCR)
struct __struct_SCB_CCR
{
  uint32_t  : 3;
  uint32_t unalign_trp : 1;
  uint32_t  : 5;
  uint32_t stkalign : 1;
  uint32_t  : 22;
};

#define SCB_SHPR2	MMIO_REG(0xe000ed1c, uint32_t)
#define SCB_SHPR2_PRI_11(x)	((x) << 30)
#define SCB_SHPR2_PRI_11_MSK	0xc0000000
#define SCB_SHPR2_PRI_11_VAL(x)	(((x) >> 30) & 0x3)

#define SCB_SHPR2_s    MMIO_REG(0xe000ed1c, struct __struct_SCB_SHPR2)
struct __struct_SCB_SHPR2
{
  uint32_t  : 30;
  uint32_t pri_11 : 2;
};

#define SCB_SHPR3	MMIO_REG(0xe000ed20, uint32_t)
#define SCB_SHPR3_PRI_14(x)	((x) << 22)
#define SCB_SHPR3_PRI_14_MSK	0x00c00000
#define SCB_SHPR3_PRI_14_VAL(x)	(((x) >> 22) & 0x3)
#define SCB_SHPR3_PRI_15(x)	((x) << 30)
#define SCB_SHPR3_PRI_15_MSK	0xc0000000
#define SCB_SHPR3_PRI_15_VAL(x)	(((x) >> 30) & 0x3)

#define SCB_SHPR3_s    MMIO_REG(0xe000ed20, struct __struct_SCB_SHPR3)
struct __struct_SCB_SHPR3
{
  uint32_t  : 22;
  uint32_t pri_14 : 2;
  uint32_t  : 6;
  uint32_t pri_15 : 2;
};

#define SCB_SHCSR	MMIO_REG(0xe000ed24, uint32_t)
#define SCB_SHCSR_SVCALLPENDED	(1 << 15)

#define SCB_SHCSR_s    MMIO_REG(0xe000ed24, struct __struct_SCB_SHCSR)
struct __struct_SCB_SHCSR
{
  uint32_t  : 15;
  uint32_t svcallpended : 1;
  uint32_t  : 16;
};

#define SCB_DFSR	MMIO_REG(0xe000ed30, uint32_t)
#define SCB_DFSR_HALTED	(1 << 0)
#define SCB_DFSR_BKPT	(1 << 1)
#define SCB_DFSR_DWTTRAP	(1 << 2)
#define SCB_DFSR_VCATCH	(1 << 3)
#define SCB_DFSR_EXTERNAL	(1 << 4)

#define SCB_DFSR_s    MMIO_REG(0xe000ed30, struct __struct_SCB_DFSR)
struct __struct_SCB_DFSR
{
  uint32_t halted : 1;
  uint32_t bkpt : 1;
  uint32_t dwttrap : 1;
  uint32_t vcatch : 1;
  uint32_t external : 1;
  uint32_t  : 27;
};

#endif // _SAMD20_H_
