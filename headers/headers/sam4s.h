// This file was generated automatically. Visit https://github.com/ataradov/embedded to get the source.
#ifndef _SAM4S_H_
#define _SAM4S_H_
#include <stdint.h>
#define MMIO_REG(mem_addr, type) (*(volatile type *)(mem_addr))

// 0xe000e100 NVIC

#define NVIC_ISER0	MMIO_REG(0xe000e100, uint32_t)
#define NVIC_ISER0_SUPC	(1 << 0)
#define NVIC_ISER0_RSTC	(1 << 1)
#define NVIC_ISER0_RTC	(1 << 2)
#define NVIC_ISER0_RTT	(1 << 3)
#define NVIC_ISER0_WDT	(1 << 4)
#define NVIC_ISER0_PMC	(1 << 5)
#define NVIC_ISER0_EEFC0	(1 << 6)
#define NVIC_ISER0_EEFC1	(1 << 7)
#define NVIC_ISER0_UART0	(1 << 8)
#define NVIC_ISER0_UART1	(1 << 9)
#define NVIC_ISER0_SMC	(1 << 10)
#define NVIC_ISER0_PIOA	(1 << 11)
#define NVIC_ISER0_PIOB	(1 << 12)
#define NVIC_ISER0_PIOC	(1 << 13)
#define NVIC_ISER0_USART0	(1 << 14)
#define NVIC_ISER0_USART1	(1 << 15)
#define NVIC_ISER0_HSMCI	(1 << 18)
#define NVIC_ISER0_TWI0	(1 << 19)
#define NVIC_ISER0_TWI1	(1 << 20)
#define NVIC_ISER0_SPI	(1 << 21)
#define NVIC_ISER0_SSC	(1 << 22)
#define NVIC_ISER0_TC0	(1 << 23)
#define NVIC_ISER0_TC1	(1 << 24)
#define NVIC_ISER0_TC2	(1 << 25)
#define NVIC_ISER0_TC3	(1 << 26)
#define NVIC_ISER0_TC4	(1 << 27)
#define NVIC_ISER0_TC5	(1 << 28)
#define NVIC_ISER0_ADC	(1 << 29)
#define NVIC_ISER0_DACC	(1 << 30)
#define NVIC_ISER0_PWM	(1 << 31)

#define NVIC_ISER0_s	MMIO_REG(0xe000e100, struct __struct_NVIC_ISER0)
struct __struct_NVIC_ISER0
{
  uint32_t supc : 1;
  uint32_t rstc : 1;
  uint32_t rtc : 1;
  uint32_t rtt : 1;
  uint32_t wdt : 1;
  uint32_t pmc : 1;
  uint32_t eefc0 : 1;
  uint32_t eefc1 : 1;
  uint32_t uart0 : 1;
  uint32_t uart1 : 1;
  uint32_t smc : 1;
  uint32_t pioa : 1;
  uint32_t piob : 1;
  uint32_t pioc : 1;
  uint32_t usart0 : 1;
  uint32_t usart1 : 1;
  uint32_t  : 2;
  uint32_t hsmci : 1;
  uint32_t twi0 : 1;
  uint32_t twi1 : 1;
  uint32_t spi : 1;
  uint32_t ssc : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t adc : 1;
  uint32_t dacc : 1;
  uint32_t pwm : 1;
};

#define NVIC_ISER1	MMIO_REG(0xe000e104, uint32_t)
#define NVIC_ISER1_CRCCU	(1 << 0)
#define NVIC_ISER1_ACC	(1 << 1)
#define NVIC_ISER1_UDP	(1 << 2)

#define NVIC_ISER1_s	MMIO_REG(0xe000e104, struct __struct_NVIC_ISER1)
struct __struct_NVIC_ISER1
{
  uint32_t crccu : 1;
  uint32_t acc : 1;
  uint32_t udp : 1;
  uint32_t  : 29;
};

#define NVIC_ICER0	MMIO_REG(0xe000e180, uint32_t)
#define NVIC_ICER0_SUPC	(1 << 0)
#define NVIC_ICER0_RSTC	(1 << 1)
#define NVIC_ICER0_RTC	(1 << 2)
#define NVIC_ICER0_RTT	(1 << 3)
#define NVIC_ICER0_WDT	(1 << 4)
#define NVIC_ICER0_PMC	(1 << 5)
#define NVIC_ICER0_EEFC0	(1 << 6)
#define NVIC_ICER0_EEFC1	(1 << 7)
#define NVIC_ICER0_UART0	(1 << 8)
#define NVIC_ICER0_UART1	(1 << 9)
#define NVIC_ICER0_SMC	(1 << 10)
#define NVIC_ICER0_PIOA	(1 << 11)
#define NVIC_ICER0_PIOB	(1 << 12)
#define NVIC_ICER0_PIOC	(1 << 13)
#define NVIC_ICER0_USART0	(1 << 14)
#define NVIC_ICER0_USART1	(1 << 15)
#define NVIC_ICER0_HSMCI	(1 << 18)
#define NVIC_ICER0_TWI0	(1 << 19)
#define NVIC_ICER0_TWI1	(1 << 20)
#define NVIC_ICER0_SPI	(1 << 21)
#define NVIC_ICER0_SSC	(1 << 22)
#define NVIC_ICER0_TC0	(1 << 23)
#define NVIC_ICER0_TC1	(1 << 24)
#define NVIC_ICER0_TC2	(1 << 25)
#define NVIC_ICER0_TC3	(1 << 26)
#define NVIC_ICER0_TC4	(1 << 27)
#define NVIC_ICER0_TC5	(1 << 28)
#define NVIC_ICER0_ADC	(1 << 29)
#define NVIC_ICER0_DACC	(1 << 30)
#define NVIC_ICER0_PWM	(1 << 31)

#define NVIC_ICER0_s	MMIO_REG(0xe000e180, struct __struct_NVIC_ICER0)
struct __struct_NVIC_ICER0
{
  uint32_t supc : 1;
  uint32_t rstc : 1;
  uint32_t rtc : 1;
  uint32_t rtt : 1;
  uint32_t wdt : 1;
  uint32_t pmc : 1;
  uint32_t eefc0 : 1;
  uint32_t eefc1 : 1;
  uint32_t uart0 : 1;
  uint32_t uart1 : 1;
  uint32_t smc : 1;
  uint32_t pioa : 1;
  uint32_t piob : 1;
  uint32_t pioc : 1;
  uint32_t usart0 : 1;
  uint32_t usart1 : 1;
  uint32_t  : 2;
  uint32_t hsmci : 1;
  uint32_t twi0 : 1;
  uint32_t twi1 : 1;
  uint32_t spi : 1;
  uint32_t ssc : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t adc : 1;
  uint32_t dacc : 1;
  uint32_t pwm : 1;
};

#define NVIC_ICER1	MMIO_REG(0xe000e184, uint32_t)
#define NVIC_ICER1_CRCCU	(1 << 0)
#define NVIC_ICER1_ACC	(1 << 1)
#define NVIC_ICER1_UDP	(1 << 2)

#define NVIC_ICER1_s	MMIO_REG(0xe000e184, struct __struct_NVIC_ICER1)
struct __struct_NVIC_ICER1
{
  uint32_t crccu : 1;
  uint32_t acc : 1;
  uint32_t udp : 1;
  uint32_t  : 29;
};

#define NVIC_ISPR0	MMIO_REG(0xe000e200, uint32_t)
#define NVIC_ISPR0_SUPC	(1 << 0)
#define NVIC_ISPR0_RSTC	(1 << 1)
#define NVIC_ISPR0_RTC	(1 << 2)
#define NVIC_ISPR0_RTT	(1 << 3)
#define NVIC_ISPR0_WDT	(1 << 4)
#define NVIC_ISPR0_PMC	(1 << 5)
#define NVIC_ISPR0_EEFC0	(1 << 6)
#define NVIC_ISPR0_EEFC1	(1 << 7)
#define NVIC_ISPR0_UART0	(1 << 8)
#define NVIC_ISPR0_UART1	(1 << 9)
#define NVIC_ISPR0_SMC	(1 << 10)
#define NVIC_ISPR0_PIOA	(1 << 11)
#define NVIC_ISPR0_PIOB	(1 << 12)
#define NVIC_ISPR0_PIOC	(1 << 13)
#define NVIC_ISPR0_USART0	(1 << 14)
#define NVIC_ISPR0_USART1	(1 << 15)
#define NVIC_ISPR0_HSMCI	(1 << 18)
#define NVIC_ISPR0_TWI0	(1 << 19)
#define NVIC_ISPR0_TWI1	(1 << 20)
#define NVIC_ISPR0_SPI	(1 << 21)
#define NVIC_ISPR0_SSC	(1 << 22)
#define NVIC_ISPR0_TC0	(1 << 23)
#define NVIC_ISPR0_TC1	(1 << 24)
#define NVIC_ISPR0_TC2	(1 << 25)
#define NVIC_ISPR0_TC3	(1 << 26)
#define NVIC_ISPR0_TC4	(1 << 27)
#define NVIC_ISPR0_TC5	(1 << 28)
#define NVIC_ISPR0_ADC	(1 << 29)
#define NVIC_ISPR0_DACC	(1 << 30)
#define NVIC_ISPR0_PWM	(1 << 31)

#define NVIC_ISPR0_s	MMIO_REG(0xe000e200, struct __struct_NVIC_ISPR0)
struct __struct_NVIC_ISPR0
{
  uint32_t supc : 1;
  uint32_t rstc : 1;
  uint32_t rtc : 1;
  uint32_t rtt : 1;
  uint32_t wdt : 1;
  uint32_t pmc : 1;
  uint32_t eefc0 : 1;
  uint32_t eefc1 : 1;
  uint32_t uart0 : 1;
  uint32_t uart1 : 1;
  uint32_t smc : 1;
  uint32_t pioa : 1;
  uint32_t piob : 1;
  uint32_t pioc : 1;
  uint32_t usart0 : 1;
  uint32_t usart1 : 1;
  uint32_t  : 2;
  uint32_t hsmci : 1;
  uint32_t twi0 : 1;
  uint32_t twi1 : 1;
  uint32_t spi : 1;
  uint32_t ssc : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t adc : 1;
  uint32_t dacc : 1;
  uint32_t pwm : 1;
};

#define NVIC_ISPR1	MMIO_REG(0xe000e204, uint32_t)
#define NVIC_ISPR1_CRCCU	(1 << 0)
#define NVIC_ISPR1_ACC	(1 << 1)
#define NVIC_ISPR1_UDP	(1 << 2)

#define NVIC_ISPR1_s	MMIO_REG(0xe000e204, struct __struct_NVIC_ISPR1)
struct __struct_NVIC_ISPR1
{
  uint32_t crccu : 1;
  uint32_t acc : 1;
  uint32_t udp : 1;
  uint32_t  : 29;
};

#define NVIC_ICPR0	MMIO_REG(0xe000e280, uint32_t)
#define NVIC_ICPR0_SUPC	(1 << 0)
#define NVIC_ICPR0_RSTC	(1 << 1)
#define NVIC_ICPR0_RTC	(1 << 2)
#define NVIC_ICPR0_RTT	(1 << 3)
#define NVIC_ICPR0_WDT	(1 << 4)
#define NVIC_ICPR0_PMC	(1 << 5)
#define NVIC_ICPR0_EEFC0	(1 << 6)
#define NVIC_ICPR0_EEFC1	(1 << 7)
#define NVIC_ICPR0_UART0	(1 << 8)
#define NVIC_ICPR0_UART1	(1 << 9)
#define NVIC_ICPR0_SMC	(1 << 10)
#define NVIC_ICPR0_PIOA	(1 << 11)
#define NVIC_ICPR0_PIOB	(1 << 12)
#define NVIC_ICPR0_PIOC	(1 << 13)
#define NVIC_ICPR0_USART0	(1 << 14)
#define NVIC_ICPR0_USART1	(1 << 15)
#define NVIC_ICPR0_HSMCI	(1 << 18)
#define NVIC_ICPR0_TWI0	(1 << 19)
#define NVIC_ICPR0_TWI1	(1 << 20)
#define NVIC_ICPR0_SPI	(1 << 21)
#define NVIC_ICPR0_SSC	(1 << 22)
#define NVIC_ICPR0_TC0	(1 << 23)
#define NVIC_ICPR0_TC1	(1 << 24)
#define NVIC_ICPR0_TC2	(1 << 25)
#define NVIC_ICPR0_TC3	(1 << 26)
#define NVIC_ICPR0_TC4	(1 << 27)
#define NVIC_ICPR0_TC5	(1 << 28)
#define NVIC_ICPR0_ADC	(1 << 29)
#define NVIC_ICPR0_DACC	(1 << 30)
#define NVIC_ICPR0_PWM	(1 << 31)

#define NVIC_ICPR0_s	MMIO_REG(0xe000e280, struct __struct_NVIC_ICPR0)
struct __struct_NVIC_ICPR0
{
  uint32_t supc : 1;
  uint32_t rstc : 1;
  uint32_t rtc : 1;
  uint32_t rtt : 1;
  uint32_t wdt : 1;
  uint32_t pmc : 1;
  uint32_t eefc0 : 1;
  uint32_t eefc1 : 1;
  uint32_t uart0 : 1;
  uint32_t uart1 : 1;
  uint32_t smc : 1;
  uint32_t pioa : 1;
  uint32_t piob : 1;
  uint32_t pioc : 1;
  uint32_t usart0 : 1;
  uint32_t usart1 : 1;
  uint32_t  : 2;
  uint32_t hsmci : 1;
  uint32_t twi0 : 1;
  uint32_t twi1 : 1;
  uint32_t spi : 1;
  uint32_t ssc : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t adc : 1;
  uint32_t dacc : 1;
  uint32_t pwm : 1;
};

#define NVIC_ICPR1	MMIO_REG(0xe000e284, uint32_t)
#define NVIC_ICPR1_CRCCU	(1 << 0)
#define NVIC_ICPR1_ACC	(1 << 1)
#define NVIC_ICPR1_UDP	(1 << 2)

#define NVIC_ICPR1_s	MMIO_REG(0xe000e284, struct __struct_NVIC_ICPR1)
struct __struct_NVIC_ICPR1
{
  uint32_t crccu : 1;
  uint32_t acc : 1;
  uint32_t udp : 1;
  uint32_t  : 29;
};

#define NVIC_IABR0	MMIO_REG(0xe000e300, uint32_t)
#define NVIC_IABR0_SUPC	(1 << 0)
#define NVIC_IABR0_RSTC	(1 << 1)
#define NVIC_IABR0_RTC	(1 << 2)
#define NVIC_IABR0_RTT	(1 << 3)
#define NVIC_IABR0_WDT	(1 << 4)
#define NVIC_IABR0_PMC	(1 << 5)
#define NVIC_IABR0_EEFC0	(1 << 6)
#define NVIC_IABR0_EEFC1	(1 << 7)
#define NVIC_IABR0_UART0	(1 << 8)
#define NVIC_IABR0_UART1	(1 << 9)
#define NVIC_IABR0_SMC	(1 << 10)
#define NVIC_IABR0_PIOA	(1 << 11)
#define NVIC_IABR0_PIOB	(1 << 12)
#define NVIC_IABR0_PIOC	(1 << 13)
#define NVIC_IABR0_USART0	(1 << 14)
#define NVIC_IABR0_USART1	(1 << 15)
#define NVIC_IABR0_HSMCI	(1 << 18)
#define NVIC_IABR0_TWI0	(1 << 19)
#define NVIC_IABR0_TWI1	(1 << 20)
#define NVIC_IABR0_SPI	(1 << 21)
#define NVIC_IABR0_SSC	(1 << 22)
#define NVIC_IABR0_TC0	(1 << 23)
#define NVIC_IABR0_TC1	(1 << 24)
#define NVIC_IABR0_TC2	(1 << 25)
#define NVIC_IABR0_TC3	(1 << 26)
#define NVIC_IABR0_TC4	(1 << 27)
#define NVIC_IABR0_TC5	(1 << 28)
#define NVIC_IABR0_ADC	(1 << 29)
#define NVIC_IABR0_DACC	(1 << 30)
#define NVIC_IABR0_PWM	(1 << 31)

#define NVIC_IABR0_s	MMIO_REG(0xe000e300, struct __struct_NVIC_IABR0)
struct __struct_NVIC_IABR0
{
  uint32_t supc : 1;
  uint32_t rstc : 1;
  uint32_t rtc : 1;
  uint32_t rtt : 1;
  uint32_t wdt : 1;
  uint32_t pmc : 1;
  uint32_t eefc0 : 1;
  uint32_t eefc1 : 1;
  uint32_t uart0 : 1;
  uint32_t uart1 : 1;
  uint32_t smc : 1;
  uint32_t pioa : 1;
  uint32_t piob : 1;
  uint32_t pioc : 1;
  uint32_t usart0 : 1;
  uint32_t usart1 : 1;
  uint32_t  : 2;
  uint32_t hsmci : 1;
  uint32_t twi0 : 1;
  uint32_t twi1 : 1;
  uint32_t spi : 1;
  uint32_t ssc : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t adc : 1;
  uint32_t dacc : 1;
  uint32_t pwm : 1;
};

#define NVIC_IABR1	MMIO_REG(0xe000e304, uint32_t)
#define NVIC_IABR1_CRCCU	(1 << 0)
#define NVIC_IABR1_ACC	(1 << 1)
#define NVIC_IABR1_UDP	(1 << 2)

#define NVIC_IABR1_s	MMIO_REG(0xe000e304, struct __struct_NVIC_IABR1)
struct __struct_NVIC_IABR1
{
  uint32_t crccu : 1;
  uint32_t acc : 1;
  uint32_t udp : 1;
  uint32_t  : 29;
};

#define NVIC_IPR0	MMIO_REG(0xe000e400, uint32_t)
#define NVIC_IPR0_SUPC(x)	((x) << 0)
#define NVIC_IPR0_SUPC_MSK	0x000000ff
#define NVIC_IPR0_SUPC_VAL(x)	(((x) >> 0) & 0xff)
#define NVIC_IPR0_RSTC(x)	((x) << 8)
#define NVIC_IPR0_RSTC_MSK	0x0000ff00
#define NVIC_IPR0_RSTC_VAL(x)	(((x) >> 8) & 0xff)
#define NVIC_IPR0_RTC(x)	((x) << 16)
#define NVIC_IPR0_RTC_MSK	0x00ff0000
#define NVIC_IPR0_RTC_VAL(x)	(((x) >> 16) & 0xff)
#define NVIC_IPR0_RTT(x)	((x) << 24)
#define NVIC_IPR0_RTT_MSK	0xff000000
#define NVIC_IPR0_RTT_VAL(x)	(((x) >> 24) & 0xff)

#define NVIC_IPR0_s	MMIO_REG(0xe000e400, struct __struct_NVIC_IPR0)
struct __struct_NVIC_IPR0
{
  uint32_t supc : 8;
  uint32_t rstc : 8;
  uint32_t rtc : 8;
  uint32_t rtt : 8;
};

#define NVIC_IPR1	MMIO_REG(0xe000e404, uint32_t)
#define NVIC_IPR1_WDT(x)	((x) << 0)
#define NVIC_IPR1_WDT_MSK	0x000000ff
#define NVIC_IPR1_WDT_VAL(x)	(((x) >> 0) & 0xff)
#define NVIC_IPR1_PMC(x)	((x) << 8)
#define NVIC_IPR1_PMC_MSK	0x0000ff00
#define NVIC_IPR1_PMC_VAL(x)	(((x) >> 8) & 0xff)
#define NVIC_IPR1_EEFC0(x)	((x) << 16)
#define NVIC_IPR1_EEFC0_MSK	0x00ff0000
#define NVIC_IPR1_EEFC0_VAL(x)	(((x) >> 16) & 0xff)
#define NVIC_IPR1_EEFC1(x)	((x) << 24)
#define NVIC_IPR1_EEFC1_MSK	0xff000000
#define NVIC_IPR1_EEFC1_VAL(x)	(((x) >> 24) & 0xff)

#define NVIC_IPR1_s	MMIO_REG(0xe000e404, struct __struct_NVIC_IPR1)
struct __struct_NVIC_IPR1
{
  uint32_t wdt : 8;
  uint32_t pmc : 8;
  uint32_t eefc0 : 8;
  uint32_t eefc1 : 8;
};

#define NVIC_IPR2	MMIO_REG(0xe000e408, uint32_t)
#define NVIC_IPR2_UART0(x)	((x) << 0)
#define NVIC_IPR2_UART0_MSK	0x000000ff
#define NVIC_IPR2_UART0_VAL(x)	(((x) >> 0) & 0xff)
#define NVIC_IPR2_UART1(x)	((x) << 8)
#define NVIC_IPR2_UART1_MSK	0x0000ff00
#define NVIC_IPR2_UART1_VAL(x)	(((x) >> 8) & 0xff)
#define NVIC_IPR2_SMC(x)	((x) << 16)
#define NVIC_IPR2_SMC_MSK	0x00ff0000
#define NVIC_IPR2_SMC_VAL(x)	(((x) >> 16) & 0xff)
#define NVIC_IPR2_PIOA(x)	((x) << 24)
#define NVIC_IPR2_PIOA_MSK	0xff000000
#define NVIC_IPR2_PIOA_VAL(x)	(((x) >> 24) & 0xff)

#define NVIC_IPR2_s	MMIO_REG(0xe000e408, struct __struct_NVIC_IPR2)
struct __struct_NVIC_IPR2
{
  uint32_t uart0 : 8;
  uint32_t uart1 : 8;
  uint32_t smc : 8;
  uint32_t pioa : 8;
};

#define NVIC_IPR3	MMIO_REG(0xe000e40c, uint32_t)
#define NVIC_IPR3_PIOB(x)	((x) << 0)
#define NVIC_IPR3_PIOB_MSK	0x000000ff
#define NVIC_IPR3_PIOB_VAL(x)	(((x) >> 0) & 0xff)
#define NVIC_IPR3_PIOC(x)	((x) << 8)
#define NVIC_IPR3_PIOC_MSK	0x0000ff00
#define NVIC_IPR3_PIOC_VAL(x)	(((x) >> 8) & 0xff)
#define NVIC_IPR3_USART0(x)	((x) << 16)
#define NVIC_IPR3_USART0_MSK	0x00ff0000
#define NVIC_IPR3_USART0_VAL(x)	(((x) >> 16) & 0xff)
#define NVIC_IPR3_USART1(x)	((x) << 24)
#define NVIC_IPR3_USART1_MSK	0xff000000
#define NVIC_IPR3_USART1_VAL(x)	(((x) >> 24) & 0xff)

#define NVIC_IPR3_s	MMIO_REG(0xe000e40c, struct __struct_NVIC_IPR3)
struct __struct_NVIC_IPR3
{
  uint32_t piob : 8;
  uint32_t pioc : 8;
  uint32_t usart0 : 8;
  uint32_t usart1 : 8;
};

#define NVIC_IPR4	MMIO_REG(0xe000e410, uint32_t)
#define NVIC_IPR4_HSMCI(x)	((x) << 16)
#define NVIC_IPR4_HSMCI_MSK	0x00ff0000
#define NVIC_IPR4_HSMCI_VAL(x)	(((x) >> 16) & 0xff)
#define NVIC_IPR4_TWI0(x)	((x) << 24)
#define NVIC_IPR4_TWI0_MSK	0xff000000
#define NVIC_IPR4_TWI0_VAL(x)	(((x) >> 24) & 0xff)

#define NVIC_IPR4_s	MMIO_REG(0xe000e410, struct __struct_NVIC_IPR4)
struct __struct_NVIC_IPR4
{
  uint32_t  : 8;
  uint32_t  : 8;
  uint32_t hsmci : 8;
  uint32_t twi0 : 8;
};

#define NVIC_IPR5	MMIO_REG(0xe000e414, uint32_t)
#define NVIC_IPR5_TWI1(x)	((x) << 0)
#define NVIC_IPR5_TWI1_MSK	0x000000ff
#define NVIC_IPR5_TWI1_VAL(x)	(((x) >> 0) & 0xff)
#define NVIC_IPR5_SPI(x)	((x) << 8)
#define NVIC_IPR5_SPI_MSK	0x0000ff00
#define NVIC_IPR5_SPI_VAL(x)	(((x) >> 8) & 0xff)
#define NVIC_IPR5_SSC(x)	((x) << 16)
#define NVIC_IPR5_SSC_MSK	0x00ff0000
#define NVIC_IPR5_SSC_VAL(x)	(((x) >> 16) & 0xff)
#define NVIC_IPR5_TC0(x)	((x) << 24)
#define NVIC_IPR5_TC0_MSK	0xff000000
#define NVIC_IPR5_TC0_VAL(x)	(((x) >> 24) & 0xff)

#define NVIC_IPR5_s	MMIO_REG(0xe000e414, struct __struct_NVIC_IPR5)
struct __struct_NVIC_IPR5
{
  uint32_t twi1 : 8;
  uint32_t spi : 8;
  uint32_t ssc : 8;
  uint32_t tc0 : 8;
};

#define NVIC_IPR6	MMIO_REG(0xe000e418, uint32_t)
#define NVIC_IPR6_TC1(x)	((x) << 0)
#define NVIC_IPR6_TC1_MSK	0x000000ff
#define NVIC_IPR6_TC1_VAL(x)	(((x) >> 0) & 0xff)
#define NVIC_IPR6_TC2(x)	((x) << 8)
#define NVIC_IPR6_TC2_MSK	0x0000ff00
#define NVIC_IPR6_TC2_VAL(x)	(((x) >> 8) & 0xff)
#define NVIC_IPR6_TC3(x)	((x) << 16)
#define NVIC_IPR6_TC3_MSK	0x00ff0000
#define NVIC_IPR6_TC3_VAL(x)	(((x) >> 16) & 0xff)
#define NVIC_IPR6_TC4(x)	((x) << 24)
#define NVIC_IPR6_TC4_MSK	0xff000000
#define NVIC_IPR6_TC4_VAL(x)	(((x) >> 24) & 0xff)

#define NVIC_IPR6_s	MMIO_REG(0xe000e418, struct __struct_NVIC_IPR6)
struct __struct_NVIC_IPR6
{
  uint32_t tc1 : 8;
  uint32_t tc2 : 8;
  uint32_t tc3 : 8;
  uint32_t tc4 : 8;
};

#define NVIC_IPR7	MMIO_REG(0xe000e41c, uint32_t)
#define NVIC_IPR7_TC5(x)	((x) << 0)
#define NVIC_IPR7_TC5_MSK	0x000000ff
#define NVIC_IPR7_TC5_VAL(x)	(((x) >> 0) & 0xff)
#define NVIC_IPR7_ADC(x)	((x) << 8)
#define NVIC_IPR7_ADC_MSK	0x0000ff00
#define NVIC_IPR7_ADC_VAL(x)	(((x) >> 8) & 0xff)
#define NVIC_IPR7_DACC(x)	((x) << 16)
#define NVIC_IPR7_DACC_MSK	0x00ff0000
#define NVIC_IPR7_DACC_VAL(x)	(((x) >> 16) & 0xff)
#define NVIC_IPR7_PWM(x)	((x) << 24)
#define NVIC_IPR7_PWM_MSK	0xff000000
#define NVIC_IPR7_PWM_VAL(x)	(((x) >> 24) & 0xff)

#define NVIC_IPR7_s	MMIO_REG(0xe000e41c, struct __struct_NVIC_IPR7)
struct __struct_NVIC_IPR7
{
  uint32_t tc5 : 8;
  uint32_t adc : 8;
  uint32_t dacc : 8;
  uint32_t pwm : 8;
};

#define NVIC_IPR8	MMIO_REG(0xe000e420, uint32_t)
#define NVIC_IPR8_CRCCU(x)	((x) << 0)
#define NVIC_IPR8_CRCCU_MSK	0x000000ff
#define NVIC_IPR8_CRCCU_VAL(x)	(((x) >> 0) & 0xff)
#define NVIC_IPR8_ACC(x)	((x) << 8)
#define NVIC_IPR8_ACC_MSK	0x0000ff00
#define NVIC_IPR8_ACC_VAL(x)	(((x) >> 8) & 0xff)
#define NVIC_IPR8_UDP(x)	((x) << 16)
#define NVIC_IPR8_UDP_MSK	0x00ff0000
#define NVIC_IPR8_UDP_VAL(x)	(((x) >> 16) & 0xff)

#define NVIC_IPR8_s	MMIO_REG(0xe000e420, struct __struct_NVIC_IPR8)
struct __struct_NVIC_IPR8
{
  uint32_t crccu : 8;
  uint32_t acc : 8;
  uint32_t udp : 8;
  uint32_t  : 8;
};

#define NVIC_STIR	MMIO_REG(0xe000ef00, uint32_t)
#define NVIC_STIR_INTID(x)	((x) << 0)
#define NVIC_STIR_INTID_MSK	0x000001ff
#define NVIC_STIR_INTID_VAL(x)	(((x) >> 0) & 0x1ff)

#define NVIC_STIR_s	MMIO_REG(0xe000ef00, struct __struct_NVIC_STIR)
struct __struct_NVIC_STIR
{
  uint32_t intid : 9;
  uint32_t  : 23;
};

// 0xe000e000 SCB

#define SCB_ACTLR	MMIO_REG(0xe000e008, uint32_t)
#define SCB_ACTLR_DISMCYCINT	(1 << 0)
#define SCB_ACTLR_DISDEFWBUF	(1 << 1)
#define SCB_ACTLR_DISFOLD	(1 << 2)
#define SCB_ACTLR_DISFPCA	(1 << 8)
#define SCB_ACTLR_DISOOFP	(1 << 9)

#define SCB_ACTLR_s	MMIO_REG(0xe000e008, struct __struct_SCB_ACTLR)
struct __struct_SCB_ACTLR
{
  uint32_t dismcycint : 1;
  uint32_t disdefwbuf : 1;
  uint32_t disfold : 1;
  uint32_t  : 5;
  uint32_t disfpca : 1;
  uint32_t disoofp : 1;
  uint32_t  : 22;
};

#define SCB_CPUID	MMIO_REG(0xe000ed00, uint32_t)
#define SCB_CPUID_REVISION(x)	((x) << 0)
#define SCB_CPUID_REVISION_MSK	0x0000000f
#define SCB_CPUID_REVISION_VAL(x)	(((x) >> 0) & 0xf)
#define SCB_CPUID_PARTNO(x)	((x) << 4)
#define SCB_CPUID_PARTNO_MSK	0x0000fff0
#define SCB_CPUID_PARTNO_VAL(x)	(((x) >> 4) & 0xfff)
#define SCB_CPUID_CONSTANT(x)	((x) << 16)
#define SCB_CPUID_CONSTANT_MSK	0x000f0000
#define SCB_CPUID_CONSTANT_VAL(x)	(((x) >> 16) & 0xf)
#define SCB_CPUID_VARIANT(x)	((x) << 20)
#define SCB_CPUID_VARIANT_MSK	0x00f00000
#define SCB_CPUID_VARIANT_VAL(x)	(((x) >> 20) & 0xf)
#define SCB_CPUID_IMPLEMENTER(x)	((x) << 24)
#define SCB_CPUID_IMPLEMENTER_MSK	0xff000000
#define SCB_CPUID_IMPLEMENTER_VAL(x)	(((x) >> 24) & 0xff)

#define SCB_CPUID_s	MMIO_REG(0xe000ed00, struct __struct_SCB_CPUID)
struct __struct_SCB_CPUID
{
  uint32_t revision : 4;
  uint32_t partno : 12;
  uint32_t constant : 4;
  uint32_t variant : 4;
  uint32_t implementer : 8;
};

#define SCB_ICSR	MMIO_REG(0xe000ed04, uint32_t)
#define SCB_ICSR_VECTACTIVE(x)	((x) << 0)
#define SCB_ICSR_VECTACTIVE_MSK	0x000001ff
#define SCB_ICSR_VECTACTIVE_VAL(x)	(((x) >> 0) & 0x1ff)
#define SCB_ICSR_RETTOBASE	(1 << 11)
#define SCB_ICSR_VECTPENDING(x)	((x) << 12)
#define SCB_ICSR_VECTPENDING_MSK	0x003ff000
#define SCB_ICSR_VECTPENDING_VAL(x)	(((x) >> 12) & 0x3ff)
#define SCB_ICSR_ISRPENDING	(1 << 22)
#define SCB_ICSR_PENDSTCLR	(1 << 25)
#define SCB_ICSR_PENDSTSET	(1 << 26)
#define SCB_ICSR_PENDSVCLR	(1 << 27)
#define SCB_ICSR_PENDSVSET	(1 << 28)
#define SCB_ICSR_NMIPENDSET	(1 << 31)

#define SCB_ICSR_s	MMIO_REG(0xe000ed04, struct __struct_SCB_ICSR)
struct __struct_SCB_ICSR
{
  uint32_t vectactive : 9;
  uint32_t  : 2;
  uint32_t rettobase : 1;
  uint32_t vectpending : 10;
  uint32_t isrpending : 1;
  uint32_t  : 2;
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

#define SCB_VTOR_s	MMIO_REG(0xe000ed08, struct __struct_SCB_VTOR)
struct __struct_SCB_VTOR
{
  uint32_t  : 7;
  uint32_t tbloff : 25;
};

#define SCB_AIRCR	MMIO_REG(0xe000ed0c, uint32_t)
#define SCB_AIRCR_VECTRESET	(1 << 0)
#define SCB_AIRCR_VECTCLRACTIVE	(1 << 1)
#define SCB_AIRCR_SYSRESETREQ	(1 << 2)
#define SCB_AIRCR_PRIGROUP(x)	((x) << 8)
#define SCB_AIRCR_PRIGROUP_MSK	0x00000700
#define SCB_AIRCR_PRIGROUP_VAL(x)	(((x) >> 8) & 0x7)
#define SCB_AIRCR_ENDIANNESS	(1 << 15)
#define SCB_AIRCR_VECTKEY(x)	((x) << 16)
#define SCB_AIRCR_VECTKEY_MSK	0xffff0000
#define SCB_AIRCR_VECTKEY_VAL(x)	(((x) >> 16) & 0xffff)

#define SCB_AIRCR_s	MMIO_REG(0xe000ed0c, struct __struct_SCB_AIRCR)
struct __struct_SCB_AIRCR
{
  uint32_t vectreset : 1;
  uint32_t vectclractive : 1;
  uint32_t sysresetreq : 1;
  uint32_t  : 5;
  uint32_t prigroup : 3;
  uint32_t  : 4;
  uint32_t endianness : 1;
  uint32_t vectkey : 16;
};

#define SCB_SCR	MMIO_REG(0xe000ed10, uint32_t)
#define SCB_SCR_SLEEPONEXIT	(1 << 1)
#define SCB_SCR_SLEEPDEEP	(1 << 2)
#define SCB_SCR_SEVONPEND	(1 << 4)

#define SCB_SCR_s	MMIO_REG(0xe000ed10, struct __struct_SCB_SCR)
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
#define SCB_CCR_NONEBASETHRDENA	(1 << 0)
#define SCB_CCR_USERSETMPEND	(1 << 1)
#define SCB_CCR_UNALIGN_TRP	(1 << 3)
#define SCB_CCR_DIV_0_TRP	(1 << 4)
#define SCB_CCR_BFHFNMIGN	(1 << 8)
#define SCB_CCR_STKALIGN	(1 << 9)

#define SCB_CCR_s	MMIO_REG(0xe000ed14, struct __struct_SCB_CCR)
struct __struct_SCB_CCR
{
  uint32_t nonebasethrdena : 1;
  uint32_t usersetmpend : 1;
  uint32_t  : 1;
  uint32_t unalign_trp : 1;
  uint32_t div_0_trp : 1;
  uint32_t  : 3;
  uint32_t bfhfnmign : 1;
  uint32_t stkalign : 1;
  uint32_t  : 22;
};

#define SCB_SHPR1	MMIO_REG(0xe000ed18, uint32_t)
#define SCB_SHPR1_PRI_4(x)	((x) << 0)
#define SCB_SHPR1_PRI_4_MSK	0x000000ff
#define SCB_SHPR1_PRI_4_VAL(x)	(((x) >> 0) & 0xff)
#define SCB_SHPR1_PRI_5(x)	((x) << 8)
#define SCB_SHPR1_PRI_5_MSK	0x0000ff00
#define SCB_SHPR1_PRI_5_VAL(x)	(((x) >> 8) & 0xff)
#define SCB_SHPR1_PRI_6(x)	((x) << 16)
#define SCB_SHPR1_PRI_6_MSK	0x00ff0000
#define SCB_SHPR1_PRI_6_VAL(x)	(((x) >> 16) & 0xff)

#define SCB_SHPR1_s	MMIO_REG(0xe000ed18, struct __struct_SCB_SHPR1)
struct __struct_SCB_SHPR1
{
  uint32_t pri_4 : 8;
  uint32_t pri_5 : 8;
  uint32_t pri_6 : 8;
  uint32_t  : 8;
};

#define SCB_SHPR2	MMIO_REG(0xe000ed1c, uint32_t)
#define SCB_SHPR2_PRI_11(x)	((x) << 24)
#define SCB_SHPR2_PRI_11_MSK	0xff000000
#define SCB_SHPR2_PRI_11_VAL(x)	(((x) >> 24) & 0xff)

#define SCB_SHPR2_s	MMIO_REG(0xe000ed1c, struct __struct_SCB_SHPR2)
struct __struct_SCB_SHPR2
{
  uint32_t  : 24;
  uint32_t pri_11 : 8;
};

#define SCB_SHPR3	MMIO_REG(0xe000ed20, uint32_t)
#define SCB_SHPR3_PRI_14(x)	((x) << 16)
#define SCB_SHPR3_PRI_14_MSK	0x00ff0000
#define SCB_SHPR3_PRI_14_VAL(x)	(((x) >> 16) & 0xff)
#define SCB_SHPR3_PRI_15(x)	((x) << 24)
#define SCB_SHPR3_PRI_15_MSK	0xff000000
#define SCB_SHPR3_PRI_15_VAL(x)	(((x) >> 24) & 0xff)

#define SCB_SHPR3_s	MMIO_REG(0xe000ed20, struct __struct_SCB_SHPR3)
struct __struct_SCB_SHPR3
{
  uint32_t  : 16;
  uint32_t pri_14 : 8;
  uint32_t pri_15 : 8;
};

#define SCB_SHCSR	MMIO_REG(0xe000ed24, uint32_t)
#define SCB_SHCSR_MEMFAULTACT	(1 << 0)
#define SCB_SHCSR_BUSFAULTACT	(1 << 1)
#define SCB_SHCSR_USGFAULTACT	(1 << 3)
#define SCB_SHCSR_SVCALLAVCT	(1 << 7)
#define SCB_SHCSR_MONITORACT	(1 << 8)
#define SCB_SHCSR_PENDSVACT	(1 << 10)
#define SCB_SHCSR_SYSTICKACT	(1 << 11)
#define SCB_SHCSR_USGFAULTPENDED	(1 << 12)
#define SCB_SHCSR_MEMFAULTPENDED	(1 << 13)
#define SCB_SHCSR_BUSFAULTPENDED	(1 << 14)
#define SCB_SHCSR_SVCALLPENDED	(1 << 15)
#define SCB_SHCSR_MEMFAULTENA	(1 << 16)
#define SCB_SHCSR_BUSFAULTENA	(1 << 17)
#define SCB_SHCSR_USGFAULTENA	(1 << 18)

#define SCB_SHCSR_s	MMIO_REG(0xe000ed24, struct __struct_SCB_SHCSR)
struct __struct_SCB_SHCSR
{
  uint32_t memfaultact : 1;
  uint32_t busfaultact : 1;
  uint32_t  : 1;
  uint32_t usgfaultact : 1;
  uint32_t  : 3;
  uint32_t svcallavct : 1;
  uint32_t monitoract : 1;
  uint32_t  : 1;
  uint32_t pendsvact : 1;
  uint32_t systickact : 1;
  uint32_t usgfaultpended : 1;
  uint32_t memfaultpended : 1;
  uint32_t busfaultpended : 1;
  uint32_t svcallpended : 1;
  uint32_t memfaultena : 1;
  uint32_t busfaultena : 1;
  uint32_t usgfaultena : 1;
  uint32_t  : 13;
};

#define SCB_CFSR	MMIO_REG(0xe000ed28, uint32_t)
#define SCB_CFSR_IACCVIOL	(1 << 0)
#define SCB_CFSR_DACCVIOL	(1 << 1)
#define SCB_CFSR_MUNSTKERR	(1 << 3)
#define SCB_CFSR_MSTKERR	(1 << 4)
#define SCB_CFSR_MLSPERR	(1 << 5)
#define SCB_CFSR_MMARVALID	(1 << 7)
#define SCB_CFSR_IBUSERR	(1 << 8)
#define SCB_CFSR_PRECISERR	(1 << 9)
#define SCB_CFSR_IMPRECISERR	(1 << 10)
#define SCB_CFSR_UNSTKERR	(1 << 11)
#define SCB_CFSR_STKERR	(1 << 12)
#define SCB_CFSR_BFRVALID	(1 << 15)
#define SCB_CFSR_UNDEFINSTR	(1 << 16)
#define SCB_CFSR_INVSTATE	(1 << 17)
#define SCB_CFSR_INVPC	(1 << 18)
#define SCB_CFSR_NOCP	(1 << 19)
#define SCB_CFSR_UNALIGNED	(1 << 24)
#define SCB_CFSR_DIVBYZERO	(1 << 25)

#define SCB_CFSR_s	MMIO_REG(0xe000ed28, struct __struct_SCB_CFSR)
struct __struct_SCB_CFSR
{
  uint32_t iaccviol : 1;
  uint32_t daccviol : 1;
  uint32_t  : 1;
  uint32_t munstkerr : 1;
  uint32_t mstkerr : 1;
  uint32_t mlsperr : 1;
  uint32_t  : 1;
  uint32_t mmarvalid : 1;
  uint32_t ibuserr : 1;
  uint32_t preciserr : 1;
  uint32_t impreciserr : 1;
  uint32_t unstkerr : 1;
  uint32_t stkerr : 1;
  uint32_t  : 2;
  uint32_t bfrvalid : 1;
  uint32_t undefinstr : 1;
  uint32_t invstate : 1;
  uint32_t invpc : 1;
  uint32_t nocp : 1;
  uint32_t  : 4;
  uint32_t unaligned : 1;
  uint32_t divbyzero : 1;
  uint32_t  : 6;
};

#define SCB_HFSR	MMIO_REG(0xe000ed2c, uint32_t)
#define SCB_HFSR_VECTTBL	(1 << 1)
#define SCB_HFSR_FORCED	(1 << 30)
#define SCB_HFSR_DEBUGEVT	(1 << 31)

#define SCB_HFSR_s	MMIO_REG(0xe000ed2c, struct __struct_SCB_HFSR)
struct __struct_SCB_HFSR
{
  uint32_t  : 1;
  uint32_t VECTTBL : 1;
  uint32_t  : 28;
  uint32_t FORCED : 1;
  uint32_t DEBUGEVT : 1;
};

#define SCB_MMFAR	MMIO_REG(0xe000ed34, uint32_t)

#define SCB_BFAR	MMIO_REG(0xe000ed38, uint32_t)

#define SCB_AFSR	MMIO_REG(0xe000ed3c, uint32_t)

// 0xe000e010 SYST

#define SYST_CSR	MMIO_REG(0xe000e010, uint32_t)
#define SYST_CSR_ENABLE	(1 << 0)
#define SYST_CSR_TICKINT	(1 << 1)
#define SYST_CSR_CLKSOURCE	(1 << 2)
#define SYST_CSR_COUNTFLAG	(1 << 16)

#define SYST_CSR_s	MMIO_REG(0xe000e010, struct __struct_SYST_CSR)
struct __struct_SYST_CSR
{
  uint32_t enable : 1;
  uint32_t tickint : 1;
  uint32_t clksource : 1;
  uint32_t  : 13;
  uint32_t countflag : 1;
  uint32_t  : 15;
};

#define SYST_RVR	MMIO_REG(0xe000e014, uint32_t)
#define SYST_RVR_RELOAD(x)	((x) << 0)
#define SYST_RVR_RELOAD_MSK	0x00ffffff
#define SYST_RVR_RELOAD_VAL(x)	(((x) >> 0) & 0xffffff)

#define SYST_RVR_s	MMIO_REG(0xe000e014, struct __struct_SYST_RVR)
struct __struct_SYST_RVR
{
  uint32_t reload : 24;
  uint32_t  : 8;
};

#define SYST_CVR	MMIO_REG(0xe000e018, uint32_t)
#define SYST_CVR_CURRENT(x)	((x) << 0)
#define SYST_CVR_CURRENT_MSK	0x00ffffff
#define SYST_CVR_CURRENT_VAL(x)	(((x) >> 0) & 0xffffff)

#define SYST_CVR_s	MMIO_REG(0xe000e018, struct __struct_SYST_CVR)
struct __struct_SYST_CVR
{
  uint32_t current : 24;
  uint32_t  : 8;
};

#define SYST_CALIB	MMIO_REG(0xe000e01c, uint32_t)
#define SYST_CALIB_TENMS(x)	((x) << 0)
#define SYST_CALIB_TENMS_MSK	0x00ffffff
#define SYST_CALIB_TENMS_VAL(x)	(((x) >> 0) & 0xffffff)
#define SYST_CALIB_SKEW	(1 << 30)
#define SYST_CALIB_NOREF	(1 << 31)

#define SYST_CALIB_s	MMIO_REG(0xe000e01c, struct __struct_SYST_CALIB)
struct __struct_SYST_CALIB
{
  uint32_t tenms : 24;
  uint32_t  : 6;
  uint32_t skew : 1;
  uint32_t noref : 1;
};

// 0xe000ed90 MPU

#define MPU_TYPE	MMIO_REG(0xe000ed90, uint32_t)
#define MPU_TYPE_SEPARATE	(1 << 0)
#define MPU_TYPE_DREGION(x)	((x) << 8)
#define MPU_TYPE_DREGION_MSK	0x0000ff00
#define MPU_TYPE_DREGION_VAL(x)	(((x) >> 8) & 0xff)
#define MPU_TYPE_IREGION(x)	((x) << 16)
#define MPU_TYPE_IREGION_MSK	0x00ff0000
#define MPU_TYPE_IREGION_VAL(x)	(((x) >> 16) & 0xff)

#define MPU_TYPE_s	MMIO_REG(0xe000ed90, struct __struct_MPU_TYPE)
struct __struct_MPU_TYPE
{
  uint32_t separate : 1;
  uint32_t  : 7;
  uint32_t dregion : 8;
  uint32_t iregion : 8;
  uint32_t  : 8;
};

#define MPU_CTRL	MMIO_REG(0xe000ed94, uint32_t)
#define MPU_CTRL_ENABLE	(1 << 0)
#define MPU_CTRL_HFNMIENA	(1 << 1)
#define MPU_CTRL_PRIVDEFENA	(1 << 2)

#define MPU_CTRL_s	MMIO_REG(0xe000ed94, struct __struct_MPU_CTRL)
struct __struct_MPU_CTRL
{
  uint32_t enable : 1;
  uint32_t hfnmiena : 1;
  uint32_t privdefena : 1;
  uint32_t  : 29;
};

#define MPU_RNR	MMIO_REG(0xe000ed98, uint32_t)
#define MPU_RNR_REGION(x)	((x) << 0)
#define MPU_RNR_REGION_MSK	0x000000ff
#define MPU_RNR_REGION_VAL(x)	(((x) >> 0) & 0xff)

#define MPU_RNR_s	MMIO_REG(0xe000ed98, struct __struct_MPU_RNR)
struct __struct_MPU_RNR
{
  uint32_t region : 8;
  uint32_t  : 24;
};

#define MPU_RBAR	MMIO_REG(0xe000ed9c, uint32_t)
#define MPU_RBAR_REGION(x)	((x) << 0)
#define MPU_RBAR_REGION_MSK	0x0000000f
#define MPU_RBAR_REGION_VAL(x)	(((x) >> 0) & 0xf)
#define MPU_RBAR_VALID	(1 << 4)
#define MPU_RBAR_ADDR(x)	((x) << 8)
#define MPU_RBAR_ADDR_MSK	0xffffff00
#define MPU_RBAR_ADDR_VAL(x)	(((x) >> 8) & 0xffffff)

#define MPU_RBAR_s	MMIO_REG(0xe000ed9c, struct __struct_MPU_RBAR)
struct __struct_MPU_RBAR
{
  uint32_t region : 4;
  uint32_t valid : 1;
  uint32_t  : 3;
  uint32_t addr : 24;
};

#define MPU_RASR	MMIO_REG(0xe000eda0, uint32_t)
#define MPU_RASR_ENABLE	(1 << 0)
#define MPU_RASR_SIZE(x)	((x) << 1)
#define MPU_RASR_SIZE_MSK	0x0000003e
#define MPU_RASR_SIZE_VAL(x)	(((x) >> 1) & 0x1f)
#define MPU_RASR_SRD(x)	((x) << 8)
#define MPU_RASR_SRD_MSK	0x0000ff00
#define MPU_RASR_SRD_VAL(x)	(((x) >> 8) & 0xff)
#define MPU_RASR_B	(1 << 16)
#define MPU_RASR_C	(1 << 17)
#define MPU_RASR_S	(1 << 18)
#define MPU_RASR_TEX(x)	((x) << 19)
#define MPU_RASR_TEX_MSK	0x00380000
#define MPU_RASR_TEX_VAL(x)	(((x) >> 19) & 0x7)
#define MPU_RASR_AP(x)	((x) << 24)
#define MPU_RASR_AP_MSK	0x07000000
#define MPU_RASR_AP_VAL(x)	(((x) >> 24) & 0x7)
#define MPU_RASR_XN	(1 << 28)

#define MPU_RASR_s	MMIO_REG(0xe000eda0, struct __struct_MPU_RASR)
struct __struct_MPU_RASR
{
  uint32_t enable : 1;
  uint32_t size : 5;
  uint32_t  : 2;
  uint32_t srd : 8;
  uint32_t b : 1;
  uint32_t c : 1;
  uint32_t s : 1;
  uint32_t tex : 3;
  uint32_t  : 2;
  uint32_t ap : 3;
  uint32_t  : 1;
  uint32_t xn : 1;
  uint32_t  : 3;
};

#define MPU_RBAR_A1	MMIO_REG(0xe000eda4, uint32_t)
#define MPU_RBAR_A1_REGION(x)	((x) << 0)
#define MPU_RBAR_A1_REGION_MSK	0x0000000f
#define MPU_RBAR_A1_REGION_VAL(x)	(((x) >> 0) & 0xf)
#define MPU_RBAR_A1_VALID	(1 << 4)
#define MPU_RBAR_A1_ADDR(x)	((x) << 8)
#define MPU_RBAR_A1_ADDR_MSK	0xffffff00
#define MPU_RBAR_A1_ADDR_VAL(x)	(((x) >> 8) & 0xffffff)

#define MPU_RBAR_A1_s	MMIO_REG(0xe000eda4, struct __struct_MPU_RBAR_A1)
struct __struct_MPU_RBAR_A1
{
  uint32_t region : 4;
  uint32_t valid : 1;
  uint32_t  : 3;
  uint32_t addr : 24;
};

#define MPU_RASR_A1	MMIO_REG(0xe000eda8, uint32_t)
#define MPU_RASR_A1_ENABLE	(1 << 0)
#define MPU_RASR_A1_SIZE(x)	((x) << 1)
#define MPU_RASR_A1_SIZE_MSK	0x0000003e
#define MPU_RASR_A1_SIZE_VAL(x)	(((x) >> 1) & 0x1f)
#define MPU_RASR_A1_SRD(x)	((x) << 8)
#define MPU_RASR_A1_SRD_MSK	0x0000ff00
#define MPU_RASR_A1_SRD_VAL(x)	(((x) >> 8) & 0xff)
#define MPU_RASR_A1_B	(1 << 16)
#define MPU_RASR_A1_C	(1 << 17)
#define MPU_RASR_A1_S	(1 << 18)
#define MPU_RASR_A1_TEX(x)	((x) << 19)
#define MPU_RASR_A1_TEX_MSK	0x00380000
#define MPU_RASR_A1_TEX_VAL(x)	(((x) >> 19) & 0x7)
#define MPU_RASR_A1_AP(x)	((x) << 24)
#define MPU_RASR_A1_AP_MSK	0x07000000
#define MPU_RASR_A1_AP_VAL(x)	(((x) >> 24) & 0x7)
#define MPU_RASR_A1_XN	(1 << 28)

#define MPU_RASR_A1_s	MMIO_REG(0xe000eda8, struct __struct_MPU_RASR_A1)
struct __struct_MPU_RASR_A1
{
  uint32_t enable : 1;
  uint32_t size : 5;
  uint32_t  : 2;
  uint32_t srd : 8;
  uint32_t b : 1;
  uint32_t c : 1;
  uint32_t s : 1;
  uint32_t tex : 3;
  uint32_t  : 2;
  uint32_t ap : 3;
  uint32_t  : 1;
  uint32_t xn : 1;
  uint32_t  : 3;
};

#define MPU_RBAR_A2	MMIO_REG(0xe000edac, uint32_t)
#define MPU_RBAR_A2_REGION(x)	((x) << 0)
#define MPU_RBAR_A2_REGION_MSK	0x0000000f
#define MPU_RBAR_A2_REGION_VAL(x)	(((x) >> 0) & 0xf)
#define MPU_RBAR_A2_VALID	(1 << 4)
#define MPU_RBAR_A2_ADDR(x)	((x) << 8)
#define MPU_RBAR_A2_ADDR_MSK	0xffffff00
#define MPU_RBAR_A2_ADDR_VAL(x)	(((x) >> 8) & 0xffffff)

#define MPU_RBAR_A2_s	MMIO_REG(0xe000edac, struct __struct_MPU_RBAR_A2)
struct __struct_MPU_RBAR_A2
{
  uint32_t region : 4;
  uint32_t valid : 1;
  uint32_t  : 3;
  uint32_t addr : 24;
};

#define MPU_RASR_A2	MMIO_REG(0xe000edb0, uint32_t)
#define MPU_RASR_A2_ENABLE	(1 << 0)
#define MPU_RASR_A2_SIZE(x)	((x) << 1)
#define MPU_RASR_A2_SIZE_MSK	0x0000003e
#define MPU_RASR_A2_SIZE_VAL(x)	(((x) >> 1) & 0x1f)
#define MPU_RASR_A2_SRD(x)	((x) << 8)
#define MPU_RASR_A2_SRD_MSK	0x0000ff00
#define MPU_RASR_A2_SRD_VAL(x)	(((x) >> 8) & 0xff)
#define MPU_RASR_A2_B	(1 << 16)
#define MPU_RASR_A2_C	(1 << 17)
#define MPU_RASR_A2_S	(1 << 18)
#define MPU_RASR_A2_TEX(x)	((x) << 19)
#define MPU_RASR_A2_TEX_MSK	0x00380000
#define MPU_RASR_A2_TEX_VAL(x)	(((x) >> 19) & 0x7)
#define MPU_RASR_A2_AP(x)	((x) << 24)
#define MPU_RASR_A2_AP_MSK	0x07000000
#define MPU_RASR_A2_AP_VAL(x)	(((x) >> 24) & 0x7)
#define MPU_RASR_A2_XN	(1 << 28)

#define MPU_RASR_A2_s	MMIO_REG(0xe000edb0, struct __struct_MPU_RASR_A2)
struct __struct_MPU_RASR_A2
{
  uint32_t enable : 1;
  uint32_t size : 5;
  uint32_t  : 2;
  uint32_t srd : 8;
  uint32_t b : 1;
  uint32_t c : 1;
  uint32_t s : 1;
  uint32_t tex : 3;
  uint32_t  : 2;
  uint32_t ap : 3;
  uint32_t  : 1;
  uint32_t xn : 1;
  uint32_t  : 3;
};

#define MPU_RBAR_A3	MMIO_REG(0xe000edb4, uint32_t)
#define MPU_RBAR_A3_REGION(x)	((x) << 0)
#define MPU_RBAR_A3_REGION_MSK	0x0000000f
#define MPU_RBAR_A3_REGION_VAL(x)	(((x) >> 0) & 0xf)
#define MPU_RBAR_A3_VALID	(1 << 4)
#define MPU_RBAR_A3_ADDR(x)	((x) << 8)
#define MPU_RBAR_A3_ADDR_MSK	0xffffff00
#define MPU_RBAR_A3_ADDR_VAL(x)	(((x) >> 8) & 0xffffff)

#define MPU_RBAR_A3_s	MMIO_REG(0xe000edb4, struct __struct_MPU_RBAR_A3)
struct __struct_MPU_RBAR_A3
{
  uint32_t region : 4;
  uint32_t valid : 1;
  uint32_t  : 3;
  uint32_t addr : 24;
};

#define MPU_RASR_A3	MMIO_REG(0xe000edb8, uint32_t)
#define MPU_RASR_A3_ENABLE	(1 << 0)
#define MPU_RASR_A3_SIZE(x)	((x) << 1)
#define MPU_RASR_A3_SIZE_MSK	0x0000003e
#define MPU_RASR_A3_SIZE_VAL(x)	(((x) >> 1) & 0x1f)
#define MPU_RASR_A3_SRD(x)	((x) << 8)
#define MPU_RASR_A3_SRD_MSK	0x0000ff00
#define MPU_RASR_A3_SRD_VAL(x)	(((x) >> 8) & 0xff)
#define MPU_RASR_A3_B	(1 << 16)
#define MPU_RASR_A3_C	(1 << 17)
#define MPU_RASR_A3_S	(1 << 18)
#define MPU_RASR_A3_TEX(x)	((x) << 19)
#define MPU_RASR_A3_TEX_MSK	0x00380000
#define MPU_RASR_A3_TEX_VAL(x)	(((x) >> 19) & 0x7)
#define MPU_RASR_A3_AP(x)	((x) << 24)
#define MPU_RASR_A3_AP_MSK	0x07000000
#define MPU_RASR_A3_AP_VAL(x)	(((x) >> 24) & 0x7)
#define MPU_RASR_A3_XN	(1 << 28)

#define MPU_RASR_A3_s	MMIO_REG(0xe000edb8, struct __struct_MPU_RASR_A3)
struct __struct_MPU_RASR_A3
{
  uint32_t enable : 1;
  uint32_t size : 5;
  uint32_t  : 2;
  uint32_t srd : 8;
  uint32_t b : 1;
  uint32_t c : 1;
  uint32_t s : 1;
  uint32_t tex : 3;
  uint32_t  : 2;
  uint32_t ap : 3;
  uint32_t  : 1;
  uint32_t xn : 1;
  uint32_t  : 3;
};

// 0x40000000 HSMCI

// 0x40000100 HSMCI_PDC

#define HSMCI_PDC_RPR	MMIO_REG(0x40000100, uint32_t)

#define HSMCI_PDC_RCR	MMIO_REG(0x40000104, uint32_t)

#define HSMCI_PDC_TPR	MMIO_REG(0x40000108, uint32_t)

#define HSMCI_PDC_TCR	MMIO_REG(0x4000010c, uint32_t)

#define HSMCI_PDC_RNPR	MMIO_REG(0x40000110, uint32_t)

#define HSMCI_PDC_RNCR	MMIO_REG(0x40000114, uint32_t)

#define HSMCI_PDC_TNPR	MMIO_REG(0x40000118, uint32_t)

#define HSMCI_PDC_TNCR	MMIO_REG(0x4000011c, uint32_t)

#define HSMCI_PDC_PTCR	MMIO_REG(0x40000120, uint32_t)
#define HSMCI_PDC_PTCR_RXTEN	(1 << 0)
#define HSMCI_PDC_PTCR_RXTDIS	(1 << 1)
#define HSMCI_PDC_PTCR_TXTEN	(1 << 8)
#define HSMCI_PDC_PTCR_TXTDIS	(1 << 9)

#define HSMCI_PDC_PTCR_s	MMIO_REG(0x40000120, struct __struct_HSMCI_PDC_PTCR)
struct __struct_HSMCI_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define HSMCI_PDC_PTSR	MMIO_REG(0x40000124, uint32_t)
#define HSMCI_PDC_PTSR_RXTEN	(1 << 0)
#define HSMCI_PDC_PTSR_TXTEN	(1 << 8)

#define HSMCI_PDC_PTSR_s	MMIO_REG(0x40000124, struct __struct_HSMCI_PDC_PTSR)
struct __struct_HSMCI_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x40004000 SSC

#define SSC_CR	MMIO_REG(0x40004000, uint32_t)

#define SSC_CMR	MMIO_REG(0x40004004, uint32_t)

#define SSC_RCMR	MMIO_REG(0x40004010, uint32_t)

#define SSC_RFMR	MMIO_REG(0x40004014, uint32_t)

#define SSC_TCMR	MMIO_REG(0x40004018, uint32_t)

#define SSC_TFMR	MMIO_REG(0x4000401c, uint32_t)

#define SSC_RHR	MMIO_REG(0x40004020, uint32_t)

#define SSC_THR	MMIO_REG(0x40004024, uint32_t)

#define SSC_RSHR	MMIO_REG(0x40004030, uint32_t)

#define SSC_TSHR	MMIO_REG(0x40004034, uint32_t)

#define SSC_RC0R	MMIO_REG(0x40004038, uint32_t)

#define SSC_RC1R	MMIO_REG(0x4000403c, uint32_t)

#define SSC_SR	MMIO_REG(0x40004040, uint32_t)

#define SSC_IER	MMIO_REG(0x40004044, uint32_t)

#define SSC_IDR	MMIO_REG(0x40004048, uint32_t)

#define SSC_IMR	MMIO_REG(0x4000404c, uint32_t)

#define SSC_WPMR	MMIO_REG(0x400040e4, uint32_t)

#define SSC_WPSR	MMIO_REG(0x400040e8, uint32_t)

// 0x40004100 SSC_PDC

#define SSC_PDC_RPR	MMIO_REG(0x40004100, uint32_t)

#define SSC_PDC_RCR	MMIO_REG(0x40004104, uint32_t)

#define SSC_PDC_TPR	MMIO_REG(0x40004108, uint32_t)

#define SSC_PDC_TCR	MMIO_REG(0x4000410c, uint32_t)

#define SSC_PDC_RNPR	MMIO_REG(0x40004110, uint32_t)

#define SSC_PDC_RNCR	MMIO_REG(0x40004114, uint32_t)

#define SSC_PDC_TNPR	MMIO_REG(0x40004118, uint32_t)

#define SSC_PDC_TNCR	MMIO_REG(0x4000411c, uint32_t)

#define SSC_PDC_PTCR	MMIO_REG(0x40004120, uint32_t)
#define SSC_PDC_PTCR_RXTEN	(1 << 0)
#define SSC_PDC_PTCR_RXTDIS	(1 << 1)
#define SSC_PDC_PTCR_TXTEN	(1 << 8)
#define SSC_PDC_PTCR_TXTDIS	(1 << 9)

#define SSC_PDC_PTCR_s	MMIO_REG(0x40004120, struct __struct_SSC_PDC_PTCR)
struct __struct_SSC_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define SSC_PDC_PTSR	MMIO_REG(0x40004124, uint32_t)
#define SSC_PDC_PTSR_RXTEN	(1 << 0)
#define SSC_PDC_PTSR_TXTEN	(1 << 8)

#define SSC_PDC_PTSR_s	MMIO_REG(0x40004124, struct __struct_SSC_PDC_PTSR)
struct __struct_SSC_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x40008000 SPI

#define SPI_CR	MMIO_REG(0x40008000, uint32_t)

#define SPI_MR	MMIO_REG(0x40008004, uint32_t)

#define SPI_RDR	MMIO_REG(0x40008008, uint32_t)

#define SPI_TDR	MMIO_REG(0x4000800c, uint32_t)

#define SPI_SR	MMIO_REG(0x40008010, uint32_t)

#define SPI_IER	MMIO_REG(0x40008014, uint32_t)

#define SPI_IDR	MMIO_REG(0x40008018, uint32_t)

#define SPI_IMR	MMIO_REG(0x4000801c, uint32_t)

#define SPI_CSR0	MMIO_REG(0x40008030, uint32_t)

#define SPI_CSR1	MMIO_REG(0x40008034, uint32_t)

#define SPI_CSR2	MMIO_REG(0x40008038, uint32_t)

#define SPI_CSR3	MMIO_REG(0x4000803c, uint32_t)

#define SPI_WPMR	MMIO_REG(0x400080e4, uint32_t)

#define SPI_WPSR	MMIO_REG(0x400080e8, uint32_t)

// 0x40008100 SPI_PDC

#define SPI_PDC_RPR	MMIO_REG(0x40008100, uint32_t)

#define SPI_PDC_RCR	MMIO_REG(0x40008104, uint32_t)

#define SPI_PDC_TPR	MMIO_REG(0x40008108, uint32_t)

#define SPI_PDC_TCR	MMIO_REG(0x4000810c, uint32_t)

#define SPI_PDC_RNPR	MMIO_REG(0x40008110, uint32_t)

#define SPI_PDC_RNCR	MMIO_REG(0x40008114, uint32_t)

#define SPI_PDC_TNPR	MMIO_REG(0x40008118, uint32_t)

#define SPI_PDC_TNCR	MMIO_REG(0x4000811c, uint32_t)

#define SPI_PDC_PTCR	MMIO_REG(0x40008120, uint32_t)
#define SPI_PDC_PTCR_RXTEN	(1 << 0)
#define SPI_PDC_PTCR_RXTDIS	(1 << 1)
#define SPI_PDC_PTCR_TXTEN	(1 << 8)
#define SPI_PDC_PTCR_TXTDIS	(1 << 9)

#define SPI_PDC_PTCR_s	MMIO_REG(0x40008120, struct __struct_SPI_PDC_PTCR)
struct __struct_SPI_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define SPI_PDC_PTSR	MMIO_REG(0x40008124, uint32_t)
#define SPI_PDC_PTSR_RXTEN	(1 << 0)
#define SPI_PDC_PTSR_TXTEN	(1 << 8)

#define SPI_PDC_PTSR_s	MMIO_REG(0x40008124, struct __struct_SPI_PDC_PTSR)
struct __struct_SPI_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x40010000 TC0

#define TC0_CCR0	MMIO_REG(0x40010000, uint32_t)
#define TC0_CCR0_CLKEN	(1 << 0)
#define TC0_CCR0_CLKDIS	(1 << 1)
#define TC0_CCR0_SWTRG	(1 << 2)

#define TC0_CCR0_s	MMIO_REG(0x40010000, struct __struct_TC0_CCR0)
struct __struct_TC0_CCR0
{
  uint32_t clken : 1;
  uint32_t clkdis : 1;
  uint32_t swtrg : 1;
  uint32_t  : 29;
};

#define TC0_CMR0	MMIO_REG(0x40010004, uint32_t)
#define TC0_CMR0_TCCLKS(x)	((x) << 0)
#define TC0_CMR0_TCCLKS_MSK	0x00000007
#define TC0_CMR0_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_CMR0_CLKI	(1 << 3)
#define TC0_CMR0_BURST(x)	((x) << 4)
#define TC0_CMR0_BURST_MSK	0x00000030
#define TC0_CMR0_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC0_CMR0_CPCSTOP	(1 << 6)
#define TC0_CMR0_CPCDIS	(1 << 7)
#define TC0_CMR0_EEVTEDG(x)	((x) << 8)
#define TC0_CMR0_EEVTEDG_MSK	0x00000300
#define TC0_CMR0_EEVTEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC0_CMR0_EEVT(x)	((x) << 10)
#define TC0_CMR0_EEVT_MSK	0x00000c00
#define TC0_CMR0_EEVT_VAL(x)	(((x) >> 10) & 0x3)
#define TC0_CMR0_ENETRG	(1 << 12)
#define TC0_CMR0_WAVSEL(x)	((x) << 13)
#define TC0_CMR0_WAVSEL_MSK	0x00006000
#define TC0_CMR0_WAVSEL_VAL(x)	(((x) >> 13) & 0x3)
#define TC0_CMR0_WAVE	(1 << 15)
#define TC0_CMR0_ACPA(x)	((x) << 16)
#define TC0_CMR0_ACPA_MSK	0x00030000
#define TC0_CMR0_ACPA_VAL(x)	(((x) >> 16) & 0x3)
#define TC0_CMR0_ACPC(x)	((x) << 18)
#define TC0_CMR0_ACPC_MSK	0x000c0000
#define TC0_CMR0_ACPC_VAL(x)	(((x) >> 18) & 0x3)
#define TC0_CMR0_AEEVT(x)	((x) << 20)
#define TC0_CMR0_AEEVT_MSK	0x00300000
#define TC0_CMR0_AEEVT_VAL(x)	(((x) >> 20) & 0x3)
#define TC0_CMR0_ASWTRG(x)	((x) << 22)
#define TC0_CMR0_ASWTRG_MSK	0x00c00000
#define TC0_CMR0_ASWTRG_VAL(x)	(((x) >> 22) & 0x3)
#define TC0_CMR0_BCPB(x)	((x) << 24)
#define TC0_CMR0_BCPB_MSK	0x03000000
#define TC0_CMR0_BCPB_VAL(x)	(((x) >> 24) & 0x3)
#define TC0_CMR0_BCPC(x)	((x) << 26)
#define TC0_CMR0_BCPC_MSK	0x0c000000
#define TC0_CMR0_BCPC_VAL(x)	(((x) >> 26) & 0x3)
#define TC0_CMR0_BEEVT(x)	((x) << 28)
#define TC0_CMR0_BEEVT_MSK	0x30000000
#define TC0_CMR0_BEEVT_VAL(x)	(((x) >> 28) & 0x3)
#define TC0_CMR0_BSWTRG(x)	((x) << 30)
#define TC0_CMR0_BSWTRG_MSK	0xc0000000
#define TC0_CMR0_BSWTRG_VAL(x)	(((x) >> 30) & 0x3)

#define TC0_CMR0_s	MMIO_REG(0x40010004, struct __struct_TC0_CMR0)
struct __struct_TC0_CMR0
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t cpcstop : 1;
  uint32_t cpcdis : 1;
  uint32_t eevtedg : 2;
  uint32_t eevt : 2;
  uint32_t enetrg : 1;
  uint32_t wavsel : 2;
  uint32_t wave : 1;
  uint32_t acpa : 2;
  uint32_t acpc : 2;
  uint32_t aeevt : 2;
  uint32_t aswtrg : 2;
  uint32_t bcpb : 2;
  uint32_t bcpc : 2;
  uint32_t beevt : 2;
  uint32_t bswtrg : 2;
};

#define TC0_CMR0W	MMIO_REG(0x40010004, uint32_t)
#define TC0_CMR0W_TCCLKS(x)	((x) << 0)
#define TC0_CMR0W_TCCLKS_MSK	0x00000007
#define TC0_CMR0W_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_CMR0W_CLKI	(1 << 3)
#define TC0_CMR0W_BURST(x)	((x) << 4)
#define TC0_CMR0W_BURST_MSK	0x00000030
#define TC0_CMR0W_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC0_CMR0W_LDBSTOP	(1 << 6)
#define TC0_CMR0W_LDBDIS	(1 << 7)
#define TC0_CMR0W_ETRGEDG(x)	((x) << 8)
#define TC0_CMR0W_ETRGEDG_MSK	0x00000300
#define TC0_CMR0W_ETRGEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC0_CMR0W_ABETRG	(1 << 10)
#define TC0_CMR0W_CPCTRG	(1 << 14)
#define TC0_CMR0W_WAVE	(1 << 15)
#define TC0_CMR0W_LDRA(x)	((x) << 16)
#define TC0_CMR0W_LDRA_MSK	0x00030000
#define TC0_CMR0W_LDRA_VAL(x)	(((x) >> 16) & 0x3)
#define TC0_CMR0W_LDRB(x)	((x) << 18)
#define TC0_CMR0W_LDRB_MSK	0x000c0000
#define TC0_CMR0W_LDRB_VAL(x)	(((x) >> 18) & 0x3)

#define TC0_CMR0W_s	MMIO_REG(0x40010004, struct __struct_TC0_CMR0W)
struct __struct_TC0_CMR0W
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t ldbstop : 1;
  uint32_t ldbdis : 1;
  uint32_t etrgedg : 2;
  uint32_t abetrg : 1;
  uint32_t  : 3;
  uint32_t cpctrg : 1;
  uint32_t wave : 1;
  uint32_t ldra : 2;
  uint32_t ldrb : 2;
  uint32_t  : 12;
};

#define TC0_SMMR0	MMIO_REG(0x40010008, uint32_t)
#define TC0_SMMR0_GCEN	(1 << 0)
#define TC0_SMMR0_DOWN	(1 << 1)

#define TC0_SMMR0_s	MMIO_REG(0x40010008, struct __struct_TC0_SMMR0)
struct __struct_TC0_SMMR0
{
  uint32_t gcen : 1;
  uint32_t down : 1;
  uint32_t  : 30;
};

#define TC0_CV0	MMIO_REG(0x40010010, uint32_t)

#define TC0_RA0	MMIO_REG(0x40010014, uint32_t)

#define TC0_RB0	MMIO_REG(0x40010018, uint32_t)

#define TC0_RC0	MMIO_REG(0x4001001c, uint32_t)

#define TC0_SR0	MMIO_REG(0x40010020, uint32_t)
#define TC0_SR0_COVFS	(1 << 0)
#define TC0_SR0_LOVRS	(1 << 1)
#define TC0_SR0_CPAS	(1 << 2)
#define TC0_SR0_CPBS	(1 << 3)
#define TC0_SR0_CPCS	(1 << 4)
#define TC0_SR0_LDRAS	(1 << 5)
#define TC0_SR0_LDRBS	(1 << 6)
#define TC0_SR0_ETRGS	(1 << 7)
#define TC0_SR0_CLKSTA	(1 << 16)
#define TC0_SR0_MTIOA	(1 << 17)
#define TC0_SR0_MTIOB	(1 << 18)

#define TC0_SR0_s	MMIO_REG(0x40010020, struct __struct_TC0_SR0)
struct __struct_TC0_SR0
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 8;
  uint32_t clksta : 1;
  uint32_t mtioa : 1;
  uint32_t mtiob : 1;
  uint32_t  : 13;
};

#define TC0_IER0	MMIO_REG(0x40010024, uint32_t)
#define TC0_IER0_COVFS	(1 << 0)
#define TC0_IER0_LOVRS	(1 << 1)
#define TC0_IER0_CPAS	(1 << 2)
#define TC0_IER0_CPBS	(1 << 3)
#define TC0_IER0_CPCS	(1 << 4)
#define TC0_IER0_LDRAS	(1 << 5)
#define TC0_IER0_LDRBS	(1 << 6)
#define TC0_IER0_ETRGS	(1 << 7)

#define TC0_IER0_s	MMIO_REG(0x40010024, struct __struct_TC0_IER0)
struct __struct_TC0_IER0
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_IDR0	MMIO_REG(0x40010028, uint32_t)
#define TC0_IDR0_COVFS	(1 << 0)
#define TC0_IDR0_LOVRS	(1 << 1)
#define TC0_IDR0_CPAS	(1 << 2)
#define TC0_IDR0_CPBS	(1 << 3)
#define TC0_IDR0_CPCS	(1 << 4)
#define TC0_IDR0_LDRAS	(1 << 5)
#define TC0_IDR0_LDRBS	(1 << 6)
#define TC0_IDR0_ETRGS	(1 << 7)

#define TC0_IDR0_s	MMIO_REG(0x40010028, struct __struct_TC0_IDR0)
struct __struct_TC0_IDR0
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_IMR0	MMIO_REG(0x4001002c, uint32_t)
#define TC0_IMR0_COVFS	(1 << 0)
#define TC0_IMR0_LOVRS	(1 << 1)
#define TC0_IMR0_CPAS	(1 << 2)
#define TC0_IMR0_CPBS	(1 << 3)
#define TC0_IMR0_CPCS	(1 << 4)
#define TC0_IMR0_LDRAS	(1 << 5)
#define TC0_IMR0_LDRBS	(1 << 6)
#define TC0_IMR0_ETRGS	(1 << 7)

#define TC0_IMR0_s	MMIO_REG(0x4001002c, struct __struct_TC0_IMR0)
struct __struct_TC0_IMR0
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_CCR1	MMIO_REG(0x40010040, uint32_t)
#define TC0_CCR1_CLKEN	(1 << 0)
#define TC0_CCR1_CLKDIS	(1 << 1)
#define TC0_CCR1_SWTRG	(1 << 2)

#define TC0_CCR1_s	MMIO_REG(0x40010040, struct __struct_TC0_CCR1)
struct __struct_TC0_CCR1
{
  uint32_t clken : 1;
  uint32_t clkdis : 1;
  uint32_t swtrg : 1;
  uint32_t  : 29;
};

#define TC0_CMR1	MMIO_REG(0x40010044, uint32_t)
#define TC0_CMR1_TCCLKS(x)	((x) << 0)
#define TC0_CMR1_TCCLKS_MSK	0x00000007
#define TC0_CMR1_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_CMR1_CLKI	(1 << 3)
#define TC0_CMR1_BURST(x)	((x) << 4)
#define TC0_CMR1_BURST_MSK	0x00000030
#define TC0_CMR1_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC0_CMR1_CPCSTOP	(1 << 6)
#define TC0_CMR1_CPCDIS	(1 << 7)
#define TC0_CMR1_EEVTEDG(x)	((x) << 8)
#define TC0_CMR1_EEVTEDG_MSK	0x00000300
#define TC0_CMR1_EEVTEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC0_CMR1_EEVT(x)	((x) << 10)
#define TC0_CMR1_EEVT_MSK	0x00000c00
#define TC0_CMR1_EEVT_VAL(x)	(((x) >> 10) & 0x3)
#define TC0_CMR1_ENETRG	(1 << 12)
#define TC0_CMR1_WAVSEL(x)	((x) << 13)
#define TC0_CMR1_WAVSEL_MSK	0x00006000
#define TC0_CMR1_WAVSEL_VAL(x)	(((x) >> 13) & 0x3)
#define TC0_CMR1_WAVE	(1 << 15)
#define TC0_CMR1_ACPA(x)	((x) << 16)
#define TC0_CMR1_ACPA_MSK	0x00030000
#define TC0_CMR1_ACPA_VAL(x)	(((x) >> 16) & 0x3)
#define TC0_CMR1_ACPC(x)	((x) << 18)
#define TC0_CMR1_ACPC_MSK	0x000c0000
#define TC0_CMR1_ACPC_VAL(x)	(((x) >> 18) & 0x3)
#define TC0_CMR1_AEEVT(x)	((x) << 20)
#define TC0_CMR1_AEEVT_MSK	0x00300000
#define TC0_CMR1_AEEVT_VAL(x)	(((x) >> 20) & 0x3)
#define TC0_CMR1_ASWTRG(x)	((x) << 22)
#define TC0_CMR1_ASWTRG_MSK	0x00c00000
#define TC0_CMR1_ASWTRG_VAL(x)	(((x) >> 22) & 0x3)
#define TC0_CMR1_BCPB(x)	((x) << 24)
#define TC0_CMR1_BCPB_MSK	0x03000000
#define TC0_CMR1_BCPB_VAL(x)	(((x) >> 24) & 0x3)
#define TC0_CMR1_BCPC(x)	((x) << 26)
#define TC0_CMR1_BCPC_MSK	0x0c000000
#define TC0_CMR1_BCPC_VAL(x)	(((x) >> 26) & 0x3)
#define TC0_CMR1_BEEVT(x)	((x) << 28)
#define TC0_CMR1_BEEVT_MSK	0x30000000
#define TC0_CMR1_BEEVT_VAL(x)	(((x) >> 28) & 0x3)
#define TC0_CMR1_BSWTRG(x)	((x) << 30)
#define TC0_CMR1_BSWTRG_MSK	0xc0000000
#define TC0_CMR1_BSWTRG_VAL(x)	(((x) >> 30) & 0x3)

#define TC0_CMR1_s	MMIO_REG(0x40010044, struct __struct_TC0_CMR1)
struct __struct_TC0_CMR1
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t cpcstop : 1;
  uint32_t cpcdis : 1;
  uint32_t eevtedg : 2;
  uint32_t eevt : 2;
  uint32_t enetrg : 1;
  uint32_t wavsel : 2;
  uint32_t wave : 1;
  uint32_t acpa : 2;
  uint32_t acpc : 2;
  uint32_t aeevt : 2;
  uint32_t aswtrg : 2;
  uint32_t bcpb : 2;
  uint32_t bcpc : 2;
  uint32_t beevt : 2;
  uint32_t bswtrg : 2;
};

#define TC0_CMR1W	MMIO_REG(0x40010044, uint32_t)
#define TC0_CMR1W_TCCLKS(x)	((x) << 0)
#define TC0_CMR1W_TCCLKS_MSK	0x00000007
#define TC0_CMR1W_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_CMR1W_CLKI	(1 << 3)
#define TC0_CMR1W_BURST(x)	((x) << 4)
#define TC0_CMR1W_BURST_MSK	0x00000030
#define TC0_CMR1W_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC0_CMR1W_LDBSTOP	(1 << 6)
#define TC0_CMR1W_LDBDIS	(1 << 7)
#define TC0_CMR1W_ETRGEDG(x)	((x) << 8)
#define TC0_CMR1W_ETRGEDG_MSK	0x00000300
#define TC0_CMR1W_ETRGEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC0_CMR1W_ABETRG	(1 << 10)
#define TC0_CMR1W_CPCTRG	(1 << 14)
#define TC0_CMR1W_WAVE	(1 << 15)
#define TC0_CMR1W_LDRA(x)	((x) << 16)
#define TC0_CMR1W_LDRA_MSK	0x00030000
#define TC0_CMR1W_LDRA_VAL(x)	(((x) >> 16) & 0x3)
#define TC0_CMR1W_LDRB(x)	((x) << 18)
#define TC0_CMR1W_LDRB_MSK	0x000c0000
#define TC0_CMR1W_LDRB_VAL(x)	(((x) >> 18) & 0x3)

#define TC0_CMR1W_s	MMIO_REG(0x40010044, struct __struct_TC0_CMR1W)
struct __struct_TC0_CMR1W
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t ldbstop : 1;
  uint32_t ldbdis : 1;
  uint32_t etrgedg : 2;
  uint32_t abetrg : 1;
  uint32_t  : 3;
  uint32_t cpctrg : 1;
  uint32_t wave : 1;
  uint32_t ldra : 2;
  uint32_t ldrb : 2;
  uint32_t  : 12;
};

#define TC0_SMMR1	MMIO_REG(0x40010048, uint32_t)
#define TC0_SMMR1_GCEN	(1 << 0)
#define TC0_SMMR1_DOWN	(1 << 1)

#define TC0_SMMR1_s	MMIO_REG(0x40010048, struct __struct_TC0_SMMR1)
struct __struct_TC0_SMMR1
{
  uint32_t gcen : 1;
  uint32_t down : 1;
  uint32_t  : 30;
};

#define TC0_CV1	MMIO_REG(0x40010050, uint32_t)

#define TC0_RA1	MMIO_REG(0x40010054, uint32_t)

#define TC0_RB1	MMIO_REG(0x40010058, uint32_t)

#define TC0_RC1	MMIO_REG(0x4001005c, uint32_t)

#define TC0_SR1	MMIO_REG(0x40010060, uint32_t)
#define TC0_SR1_COVFS	(1 << 0)
#define TC0_SR1_LOVRS	(1 << 1)
#define TC0_SR1_CPAS	(1 << 2)
#define TC0_SR1_CPBS	(1 << 3)
#define TC0_SR1_CPCS	(1 << 4)
#define TC0_SR1_LDRAS	(1 << 5)
#define TC0_SR1_LDRBS	(1 << 6)
#define TC0_SR1_ETRGS	(1 << 7)
#define TC0_SR1_CLKSTA	(1 << 16)
#define TC0_SR1_MTIOA	(1 << 17)
#define TC0_SR1_MTIOB	(1 << 18)

#define TC0_SR1_s	MMIO_REG(0x40010060, struct __struct_TC0_SR1)
struct __struct_TC0_SR1
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 8;
  uint32_t clksta : 1;
  uint32_t mtioa : 1;
  uint32_t mtiob : 1;
  uint32_t  : 13;
};

#define TC0_IER1	MMIO_REG(0x40010064, uint32_t)
#define TC0_IER1_COVFS	(1 << 0)
#define TC0_IER1_LOVRS	(1 << 1)
#define TC0_IER1_CPAS	(1 << 2)
#define TC0_IER1_CPBS	(1 << 3)
#define TC0_IER1_CPCS	(1 << 4)
#define TC0_IER1_LDRAS	(1 << 5)
#define TC0_IER1_LDRBS	(1 << 6)
#define TC0_IER1_ETRGS	(1 << 7)

#define TC0_IER1_s	MMIO_REG(0x40010064, struct __struct_TC0_IER1)
struct __struct_TC0_IER1
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_IDR1	MMIO_REG(0x40010068, uint32_t)
#define TC0_IDR1_COVFS	(1 << 0)
#define TC0_IDR1_LOVRS	(1 << 1)
#define TC0_IDR1_CPAS	(1 << 2)
#define TC0_IDR1_CPBS	(1 << 3)
#define TC0_IDR1_CPCS	(1 << 4)
#define TC0_IDR1_LDRAS	(1 << 5)
#define TC0_IDR1_LDRBS	(1 << 6)
#define TC0_IDR1_ETRGS	(1 << 7)

#define TC0_IDR1_s	MMIO_REG(0x40010068, struct __struct_TC0_IDR1)
struct __struct_TC0_IDR1
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_IMR1	MMIO_REG(0x4001006c, uint32_t)
#define TC0_IMR1_COVFS	(1 << 0)
#define TC0_IMR1_LOVRS	(1 << 1)
#define TC0_IMR1_CPAS	(1 << 2)
#define TC0_IMR1_CPBS	(1 << 3)
#define TC0_IMR1_CPCS	(1 << 4)
#define TC0_IMR1_LDRAS	(1 << 5)
#define TC0_IMR1_LDRBS	(1 << 6)
#define TC0_IMR1_ETRGS	(1 << 7)

#define TC0_IMR1_s	MMIO_REG(0x4001006c, struct __struct_TC0_IMR1)
struct __struct_TC0_IMR1
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_CCR2	MMIO_REG(0x40010080, uint32_t)
#define TC0_CCR2_CLKEN	(1 << 0)
#define TC0_CCR2_CLKDIS	(1 << 1)
#define TC0_CCR2_SWTRG	(1 << 2)

#define TC0_CCR2_s	MMIO_REG(0x40010080, struct __struct_TC0_CCR2)
struct __struct_TC0_CCR2
{
  uint32_t clken : 1;
  uint32_t clkdis : 1;
  uint32_t swtrg : 1;
  uint32_t  : 29;
};

#define TC0_CMR2	MMIO_REG(0x40010084, uint32_t)
#define TC0_CMR2_TCCLKS(x)	((x) << 0)
#define TC0_CMR2_TCCLKS_MSK	0x00000007
#define TC0_CMR2_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_CMR2_CLKI	(1 << 3)
#define TC0_CMR2_BURST(x)	((x) << 4)
#define TC0_CMR2_BURST_MSK	0x00000030
#define TC0_CMR2_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC0_CMR2_CPCSTOP	(1 << 6)
#define TC0_CMR2_CPCDIS	(1 << 7)
#define TC0_CMR2_EEVTEDG(x)	((x) << 8)
#define TC0_CMR2_EEVTEDG_MSK	0x00000300
#define TC0_CMR2_EEVTEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC0_CMR2_EEVT(x)	((x) << 10)
#define TC0_CMR2_EEVT_MSK	0x00000c00
#define TC0_CMR2_EEVT_VAL(x)	(((x) >> 10) & 0x3)
#define TC0_CMR2_ENETRG	(1 << 12)
#define TC0_CMR2_WAVSEL(x)	((x) << 13)
#define TC0_CMR2_WAVSEL_MSK	0x00006000
#define TC0_CMR2_WAVSEL_VAL(x)	(((x) >> 13) & 0x3)
#define TC0_CMR2_WAVE	(1 << 15)
#define TC0_CMR2_ACPA(x)	((x) << 16)
#define TC0_CMR2_ACPA_MSK	0x00030000
#define TC0_CMR2_ACPA_VAL(x)	(((x) >> 16) & 0x3)
#define TC0_CMR2_ACPC(x)	((x) << 18)
#define TC0_CMR2_ACPC_MSK	0x000c0000
#define TC0_CMR2_ACPC_VAL(x)	(((x) >> 18) & 0x3)
#define TC0_CMR2_AEEVT(x)	((x) << 20)
#define TC0_CMR2_AEEVT_MSK	0x00300000
#define TC0_CMR2_AEEVT_VAL(x)	(((x) >> 20) & 0x3)
#define TC0_CMR2_ASWTRG(x)	((x) << 22)
#define TC0_CMR2_ASWTRG_MSK	0x00c00000
#define TC0_CMR2_ASWTRG_VAL(x)	(((x) >> 22) & 0x3)
#define TC0_CMR2_BCPB(x)	((x) << 24)
#define TC0_CMR2_BCPB_MSK	0x03000000
#define TC0_CMR2_BCPB_VAL(x)	(((x) >> 24) & 0x3)
#define TC0_CMR2_BCPC(x)	((x) << 26)
#define TC0_CMR2_BCPC_MSK	0x0c000000
#define TC0_CMR2_BCPC_VAL(x)	(((x) >> 26) & 0x3)
#define TC0_CMR2_BEEVT(x)	((x) << 28)
#define TC0_CMR2_BEEVT_MSK	0x30000000
#define TC0_CMR2_BEEVT_VAL(x)	(((x) >> 28) & 0x3)
#define TC0_CMR2_BSWTRG(x)	((x) << 30)
#define TC0_CMR2_BSWTRG_MSK	0xc0000000
#define TC0_CMR2_BSWTRG_VAL(x)	(((x) >> 30) & 0x3)

#define TC0_CMR2_s	MMIO_REG(0x40010084, struct __struct_TC0_CMR2)
struct __struct_TC0_CMR2
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t cpcstop : 1;
  uint32_t cpcdis : 1;
  uint32_t eevtedg : 2;
  uint32_t eevt : 2;
  uint32_t enetrg : 1;
  uint32_t wavsel : 2;
  uint32_t wave : 1;
  uint32_t acpa : 2;
  uint32_t acpc : 2;
  uint32_t aeevt : 2;
  uint32_t aswtrg : 2;
  uint32_t bcpb : 2;
  uint32_t bcpc : 2;
  uint32_t beevt : 2;
  uint32_t bswtrg : 2;
};

#define TC0_CMR2W	MMIO_REG(0x40010084, uint32_t)
#define TC0_CMR2W_TCCLKS(x)	((x) << 0)
#define TC0_CMR2W_TCCLKS_MSK	0x00000007
#define TC0_CMR2W_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC0_CMR2W_CLKI	(1 << 3)
#define TC0_CMR2W_BURST(x)	((x) << 4)
#define TC0_CMR2W_BURST_MSK	0x00000030
#define TC0_CMR2W_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC0_CMR2W_LDBSTOP	(1 << 6)
#define TC0_CMR2W_LDBDIS	(1 << 7)
#define TC0_CMR2W_ETRGEDG(x)	((x) << 8)
#define TC0_CMR2W_ETRGEDG_MSK	0x00000300
#define TC0_CMR2W_ETRGEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC0_CMR2W_ABETRG	(1 << 10)
#define TC0_CMR2W_CPCTRG	(1 << 14)
#define TC0_CMR2W_WAVE	(1 << 15)
#define TC0_CMR2W_LDRA(x)	((x) << 16)
#define TC0_CMR2W_LDRA_MSK	0x00030000
#define TC0_CMR2W_LDRA_VAL(x)	(((x) >> 16) & 0x3)
#define TC0_CMR2W_LDRB(x)	((x) << 18)
#define TC0_CMR2W_LDRB_MSK	0x000c0000
#define TC0_CMR2W_LDRB_VAL(x)	(((x) >> 18) & 0x3)

#define TC0_CMR2W_s	MMIO_REG(0x40010084, struct __struct_TC0_CMR2W)
struct __struct_TC0_CMR2W
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t ldbstop : 1;
  uint32_t ldbdis : 1;
  uint32_t etrgedg : 2;
  uint32_t abetrg : 1;
  uint32_t  : 3;
  uint32_t cpctrg : 1;
  uint32_t wave : 1;
  uint32_t ldra : 2;
  uint32_t ldrb : 2;
  uint32_t  : 12;
};

#define TC0_SMMR2	MMIO_REG(0x40010088, uint32_t)
#define TC0_SMMR2_GCEN	(1 << 0)
#define TC0_SMMR2_DOWN	(1 << 1)

#define TC0_SMMR2_s	MMIO_REG(0x40010088, struct __struct_TC0_SMMR2)
struct __struct_TC0_SMMR2
{
  uint32_t gcen : 1;
  uint32_t down : 1;
  uint32_t  : 30;
};

#define TC0_CV2	MMIO_REG(0x40010090, uint32_t)

#define TC0_RA2	MMIO_REG(0x40010094, uint32_t)

#define TC0_RB2	MMIO_REG(0x40010098, uint32_t)

#define TC0_RC2	MMIO_REG(0x4001009c, uint32_t)

#define TC0_SR2	MMIO_REG(0x400100a0, uint32_t)
#define TC0_SR2_COVFS	(1 << 0)
#define TC0_SR2_LOVRS	(1 << 1)
#define TC0_SR2_CPAS	(1 << 2)
#define TC0_SR2_CPBS	(1 << 3)
#define TC0_SR2_CPCS	(1 << 4)
#define TC0_SR2_LDRAS	(1 << 5)
#define TC0_SR2_LDRBS	(1 << 6)
#define TC0_SR2_ETRGS	(1 << 7)
#define TC0_SR2_CLKSTA	(1 << 16)
#define TC0_SR2_MTIOA	(1 << 17)
#define TC0_SR2_MTIOB	(1 << 18)

#define TC0_SR2_s	MMIO_REG(0x400100a0, struct __struct_TC0_SR2)
struct __struct_TC0_SR2
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 8;
  uint32_t clksta : 1;
  uint32_t mtioa : 1;
  uint32_t mtiob : 1;
  uint32_t  : 13;
};

#define TC0_IER2	MMIO_REG(0x400100a4, uint32_t)
#define TC0_IER2_COVFS	(1 << 0)
#define TC0_IER2_LOVRS	(1 << 1)
#define TC0_IER2_CPAS	(1 << 2)
#define TC0_IER2_CPBS	(1 << 3)
#define TC0_IER2_CPCS	(1 << 4)
#define TC0_IER2_LDRAS	(1 << 5)
#define TC0_IER2_LDRBS	(1 << 6)
#define TC0_IER2_ETRGS	(1 << 7)

#define TC0_IER2_s	MMIO_REG(0x400100a4, struct __struct_TC0_IER2)
struct __struct_TC0_IER2
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_IDR2	MMIO_REG(0x400100a8, uint32_t)
#define TC0_IDR2_COVFS	(1 << 0)
#define TC0_IDR2_LOVRS	(1 << 1)
#define TC0_IDR2_CPAS	(1 << 2)
#define TC0_IDR2_CPBS	(1 << 3)
#define TC0_IDR2_CPCS	(1 << 4)
#define TC0_IDR2_LDRAS	(1 << 5)
#define TC0_IDR2_LDRBS	(1 << 6)
#define TC0_IDR2_ETRGS	(1 << 7)

#define TC0_IDR2_s	MMIO_REG(0x400100a8, struct __struct_TC0_IDR2)
struct __struct_TC0_IDR2
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_IMR2	MMIO_REG(0x400100ac, uint32_t)
#define TC0_IMR2_COVFS	(1 << 0)
#define TC0_IMR2_LOVRS	(1 << 1)
#define TC0_IMR2_CPAS	(1 << 2)
#define TC0_IMR2_CPBS	(1 << 3)
#define TC0_IMR2_CPCS	(1 << 4)
#define TC0_IMR2_LDRAS	(1 << 5)
#define TC0_IMR2_LDRBS	(1 << 6)
#define TC0_IMR2_ETRGS	(1 << 7)

#define TC0_IMR2_s	MMIO_REG(0x400100ac, struct __struct_TC0_IMR2)
struct __struct_TC0_IMR2
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC0_BCR	MMIO_REG(0x400100c0, uint32_t)
#define TC0_BCR_SYNC	(1 << 0)

#define TC0_BCR_s	MMIO_REG(0x400100c0, struct __struct_TC0_BCR)
struct __struct_TC0_BCR
{
  uint32_t sync : 1;
  uint32_t  : 31;
};

#define TC0_BMR	MMIO_REG(0x400100c4, uint32_t)
#define TC0_BMR_TC0XC0S(x)	((x) << 0)
#define TC0_BMR_TC0XC0S_MSK	0x00000003
#define TC0_BMR_TC0XC0S_VAL(x)	(((x) >> 0) & 0x3)
#define TC0_BMR_TC1XC1S(x)	((x) << 2)
#define TC0_BMR_TC1XC1S_MSK	0x0000000c
#define TC0_BMR_TC1XC1S_VAL(x)	(((x) >> 2) & 0x3)
#define TC0_BMR_TC2XC2S(x)	((x) << 4)
#define TC0_BMR_TC2XC2S_MSK	0x00000030
#define TC0_BMR_TC2XC2S_VAL(x)	(((x) >> 4) & 0x3)
#define TC0_BMR_QDEN	(1 << 8)
#define TC0_BMR_POSEN	(1 << 9)
#define TC0_BMR_SPEEDEN	(1 << 10)
#define TC0_BMR_QDTRANS	(1 << 11)
#define TC0_BMR_EDGPHA	(1 << 12)
#define TC0_BMR_INVA	(1 << 13)
#define TC0_BMR_INVB	(1 << 14)
#define TC0_BMR_INVIDX	(1 << 15)
#define TC0_BMR_SWAP	(1 << 16)
#define TC0_BMR_IDXPHB	(1 << 17)
#define TC0_BMR_FILTER	(1 << 19)
#define TC0_BMR_MAXFILT(x)	((x) << 20)
#define TC0_BMR_MAXFILT_MSK	0x03f00000
#define TC0_BMR_MAXFILT_VAL(x)	(((x) >> 20) & 0x3f)

#define TC0_BMR_s	MMIO_REG(0x400100c4, struct __struct_TC0_BMR)
struct __struct_TC0_BMR
{
  uint32_t tc0xc0s : 2;
  uint32_t tc1xc1s : 2;
  uint32_t tc2xc2s : 2;
  uint32_t  : 2;
  uint32_t qden : 1;
  uint32_t posen : 1;
  uint32_t speeden : 1;
  uint32_t qdtrans : 1;
  uint32_t edgpha : 1;
  uint32_t inva : 1;
  uint32_t invb : 1;
  uint32_t invidx : 1;
  uint32_t swap : 1;
  uint32_t idxphb : 1;
  uint32_t  : 1;
  uint32_t filter : 1;
  uint32_t maxfilt : 6;
  uint32_t  : 6;
};

#define TC0_QIER	MMIO_REG(0x400100c8, uint32_t)
#define TC0_QIER_IDX	(1 << 0)
#define TC0_QIER_DIRCHG	(1 << 1)
#define TC0_QIER_QERR	(1 << 2)

#define TC0_QIER_s	MMIO_REG(0x400100c8, struct __struct_TC0_QIER)
struct __struct_TC0_QIER
{
  uint32_t idx : 1;
  uint32_t dirchg : 1;
  uint32_t qerr : 1;
  uint32_t  : 29;
};

#define TC0_QIDR	MMIO_REG(0x400100cc, uint32_t)
#define TC0_QIDR_IDX	(1 << 0)
#define TC0_QIDR_DIRCHG	(1 << 1)
#define TC0_QIDR_QERR	(1 << 2)

#define TC0_QIDR_s	MMIO_REG(0x400100cc, struct __struct_TC0_QIDR)
struct __struct_TC0_QIDR
{
  uint32_t idx : 1;
  uint32_t dirchg : 1;
  uint32_t qerr : 1;
  uint32_t  : 29;
};

#define TC0_QIMR	MMIO_REG(0x400100d0, uint32_t)
#define TC0_QIMR_IDX	(1 << 0)
#define TC0_QIMR_DIRCHG	(1 << 1)
#define TC0_QIMR_QERR	(1 << 2)

#define TC0_QIMR_s	MMIO_REG(0x400100d0, struct __struct_TC0_QIMR)
struct __struct_TC0_QIMR
{
  uint32_t idx : 1;
  uint32_t dirchg : 1;
  uint32_t qerr : 1;
  uint32_t  : 29;
};

#define TC0_QISR	MMIO_REG(0x400100d4, uint32_t)
#define TC0_QISR_IDX	(1 << 0)
#define TC0_QISR_DIRCHG	(1 << 1)
#define TC0_QISR_QERR	(1 << 2)
#define TC0_QISR_DIR	(1 << 8)

#define TC0_QISR_s	MMIO_REG(0x400100d4, struct __struct_TC0_QISR)
struct __struct_TC0_QISR
{
  uint32_t idx : 1;
  uint32_t dirchg : 1;
  uint32_t qerr : 1;
  uint32_t  : 5;
  uint32_t dir : 1;
  uint32_t  : 23;
};

#define TC0_FMR	MMIO_REG(0x400100d8, uint32_t)
#define TC0_FMR_ENCF0	(1 << 0)
#define TC0_FMR_ENCF1	(1 << 1)

#define TC0_FMR_s	MMIO_REG(0x400100d8, struct __struct_TC0_FMR)
struct __struct_TC0_FMR
{
  uint32_t encf0 : 1;
  uint32_t encf1 : 1;
  uint32_t  : 30;
};

#define TC0_WPMR	MMIO_REG(0x400100e4, uint32_t)
#define TC0_WPMR_WPEN	(1 << 0)
#define TC0_WPMR_WPKEY(x)	((x) << 8)
#define TC0_WPMR_WPKEY_MSK	0xffffff00
#define TC0_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define TC0_WPMR_s	MMIO_REG(0x400100e4, struct __struct_TC0_WPMR)
struct __struct_TC0_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

// 0x40014000 TC1

#define TC1_CCR0	MMIO_REG(0x40014000, uint32_t)
#define TC1_CCR0_CLKEN	(1 << 0)
#define TC1_CCR0_CLKDIS	(1 << 1)
#define TC1_CCR0_SWTRG	(1 << 2)

#define TC1_CCR0_s	MMIO_REG(0x40014000, struct __struct_TC1_CCR0)
struct __struct_TC1_CCR0
{
  uint32_t clken : 1;
  uint32_t clkdis : 1;
  uint32_t swtrg : 1;
  uint32_t  : 29;
};

#define TC1_CMR0	MMIO_REG(0x40014004, uint32_t)
#define TC1_CMR0_TCCLKS(x)	((x) << 0)
#define TC1_CMR0_TCCLKS_MSK	0x00000007
#define TC1_CMR0_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_CMR0_CLKI	(1 << 3)
#define TC1_CMR0_BURST(x)	((x) << 4)
#define TC1_CMR0_BURST_MSK	0x00000030
#define TC1_CMR0_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC1_CMR0_CPCSTOP	(1 << 6)
#define TC1_CMR0_CPCDIS	(1 << 7)
#define TC1_CMR0_EEVTEDG(x)	((x) << 8)
#define TC1_CMR0_EEVTEDG_MSK	0x00000300
#define TC1_CMR0_EEVTEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC1_CMR0_EEVT(x)	((x) << 10)
#define TC1_CMR0_EEVT_MSK	0x00000c00
#define TC1_CMR0_EEVT_VAL(x)	(((x) >> 10) & 0x3)
#define TC1_CMR0_ENETRG	(1 << 12)
#define TC1_CMR0_WAVSEL(x)	((x) << 13)
#define TC1_CMR0_WAVSEL_MSK	0x00006000
#define TC1_CMR0_WAVSEL_VAL(x)	(((x) >> 13) & 0x3)
#define TC1_CMR0_WAVE	(1 << 15)
#define TC1_CMR0_ACPA(x)	((x) << 16)
#define TC1_CMR0_ACPA_MSK	0x00030000
#define TC1_CMR0_ACPA_VAL(x)	(((x) >> 16) & 0x3)
#define TC1_CMR0_ACPC(x)	((x) << 18)
#define TC1_CMR0_ACPC_MSK	0x000c0000
#define TC1_CMR0_ACPC_VAL(x)	(((x) >> 18) & 0x3)
#define TC1_CMR0_AEEVT(x)	((x) << 20)
#define TC1_CMR0_AEEVT_MSK	0x00300000
#define TC1_CMR0_AEEVT_VAL(x)	(((x) >> 20) & 0x3)
#define TC1_CMR0_ASWTRG(x)	((x) << 22)
#define TC1_CMR0_ASWTRG_MSK	0x00c00000
#define TC1_CMR0_ASWTRG_VAL(x)	(((x) >> 22) & 0x3)
#define TC1_CMR0_BCPB(x)	((x) << 24)
#define TC1_CMR0_BCPB_MSK	0x03000000
#define TC1_CMR0_BCPB_VAL(x)	(((x) >> 24) & 0x3)
#define TC1_CMR0_BCPC(x)	((x) << 26)
#define TC1_CMR0_BCPC_MSK	0x0c000000
#define TC1_CMR0_BCPC_VAL(x)	(((x) >> 26) & 0x3)
#define TC1_CMR0_BEEVT(x)	((x) << 28)
#define TC1_CMR0_BEEVT_MSK	0x30000000
#define TC1_CMR0_BEEVT_VAL(x)	(((x) >> 28) & 0x3)
#define TC1_CMR0_BSWTRG(x)	((x) << 30)
#define TC1_CMR0_BSWTRG_MSK	0xc0000000
#define TC1_CMR0_BSWTRG_VAL(x)	(((x) >> 30) & 0x3)

#define TC1_CMR0_s	MMIO_REG(0x40014004, struct __struct_TC1_CMR0)
struct __struct_TC1_CMR0
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t cpcstop : 1;
  uint32_t cpcdis : 1;
  uint32_t eevtedg : 2;
  uint32_t eevt : 2;
  uint32_t enetrg : 1;
  uint32_t wavsel : 2;
  uint32_t wave : 1;
  uint32_t acpa : 2;
  uint32_t acpc : 2;
  uint32_t aeevt : 2;
  uint32_t aswtrg : 2;
  uint32_t bcpb : 2;
  uint32_t bcpc : 2;
  uint32_t beevt : 2;
  uint32_t bswtrg : 2;
};

#define TC1_CMR0W	MMIO_REG(0x40014004, uint32_t)
#define TC1_CMR0W_TCCLKS(x)	((x) << 0)
#define TC1_CMR0W_TCCLKS_MSK	0x00000007
#define TC1_CMR0W_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_CMR0W_CLKI	(1 << 3)
#define TC1_CMR0W_BURST(x)	((x) << 4)
#define TC1_CMR0W_BURST_MSK	0x00000030
#define TC1_CMR0W_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC1_CMR0W_LDBSTOP	(1 << 6)
#define TC1_CMR0W_LDBDIS	(1 << 7)
#define TC1_CMR0W_ETRGEDG(x)	((x) << 8)
#define TC1_CMR0W_ETRGEDG_MSK	0x00000300
#define TC1_CMR0W_ETRGEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC1_CMR0W_ABETRG	(1 << 10)
#define TC1_CMR0W_CPCTRG	(1 << 14)
#define TC1_CMR0W_WAVE	(1 << 15)
#define TC1_CMR0W_LDRA(x)	((x) << 16)
#define TC1_CMR0W_LDRA_MSK	0x00030000
#define TC1_CMR0W_LDRA_VAL(x)	(((x) >> 16) & 0x3)
#define TC1_CMR0W_LDRB(x)	((x) << 18)
#define TC1_CMR0W_LDRB_MSK	0x000c0000
#define TC1_CMR0W_LDRB_VAL(x)	(((x) >> 18) & 0x3)

#define TC1_CMR0W_s	MMIO_REG(0x40014004, struct __struct_TC1_CMR0W)
struct __struct_TC1_CMR0W
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t ldbstop : 1;
  uint32_t ldbdis : 1;
  uint32_t etrgedg : 2;
  uint32_t abetrg : 1;
  uint32_t  : 3;
  uint32_t cpctrg : 1;
  uint32_t wave : 1;
  uint32_t ldra : 2;
  uint32_t ldrb : 2;
  uint32_t  : 12;
};

#define TC1_SMMR0	MMIO_REG(0x40014008, uint32_t)
#define TC1_SMMR0_GCEN	(1 << 0)
#define TC1_SMMR0_DOWN	(1 << 1)

#define TC1_SMMR0_s	MMIO_REG(0x40014008, struct __struct_TC1_SMMR0)
struct __struct_TC1_SMMR0
{
  uint32_t gcen : 1;
  uint32_t down : 1;
  uint32_t  : 30;
};

#define TC1_CV0	MMIO_REG(0x40014010, uint32_t)

#define TC1_RA0	MMIO_REG(0x40014014, uint32_t)

#define TC1_RB0	MMIO_REG(0x40014018, uint32_t)

#define TC1_RC0	MMIO_REG(0x4001401c, uint32_t)

#define TC1_SR0	MMIO_REG(0x40014020, uint32_t)
#define TC1_SR0_COVFS	(1 << 0)
#define TC1_SR0_LOVRS	(1 << 1)
#define TC1_SR0_CPAS	(1 << 2)
#define TC1_SR0_CPBS	(1 << 3)
#define TC1_SR0_CPCS	(1 << 4)
#define TC1_SR0_LDRAS	(1 << 5)
#define TC1_SR0_LDRBS	(1 << 6)
#define TC1_SR0_ETRGS	(1 << 7)
#define TC1_SR0_CLKSTA	(1 << 16)
#define TC1_SR0_MTIOA	(1 << 17)
#define TC1_SR0_MTIOB	(1 << 18)

#define TC1_SR0_s	MMIO_REG(0x40014020, struct __struct_TC1_SR0)
struct __struct_TC1_SR0
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 8;
  uint32_t clksta : 1;
  uint32_t mtioa : 1;
  uint32_t mtiob : 1;
  uint32_t  : 13;
};

#define TC1_IER0	MMIO_REG(0x40014024, uint32_t)
#define TC1_IER0_COVFS	(1 << 0)
#define TC1_IER0_LOVRS	(1 << 1)
#define TC1_IER0_CPAS	(1 << 2)
#define TC1_IER0_CPBS	(1 << 3)
#define TC1_IER0_CPCS	(1 << 4)
#define TC1_IER0_LDRAS	(1 << 5)
#define TC1_IER0_LDRBS	(1 << 6)
#define TC1_IER0_ETRGS	(1 << 7)

#define TC1_IER0_s	MMIO_REG(0x40014024, struct __struct_TC1_IER0)
struct __struct_TC1_IER0
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_IDR0	MMIO_REG(0x40014028, uint32_t)
#define TC1_IDR0_COVFS	(1 << 0)
#define TC1_IDR0_LOVRS	(1 << 1)
#define TC1_IDR0_CPAS	(1 << 2)
#define TC1_IDR0_CPBS	(1 << 3)
#define TC1_IDR0_CPCS	(1 << 4)
#define TC1_IDR0_LDRAS	(1 << 5)
#define TC1_IDR0_LDRBS	(1 << 6)
#define TC1_IDR0_ETRGS	(1 << 7)

#define TC1_IDR0_s	MMIO_REG(0x40014028, struct __struct_TC1_IDR0)
struct __struct_TC1_IDR0
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_IMR0	MMIO_REG(0x4001402c, uint32_t)
#define TC1_IMR0_COVFS	(1 << 0)
#define TC1_IMR0_LOVRS	(1 << 1)
#define TC1_IMR0_CPAS	(1 << 2)
#define TC1_IMR0_CPBS	(1 << 3)
#define TC1_IMR0_CPCS	(1 << 4)
#define TC1_IMR0_LDRAS	(1 << 5)
#define TC1_IMR0_LDRBS	(1 << 6)
#define TC1_IMR0_ETRGS	(1 << 7)

#define TC1_IMR0_s	MMIO_REG(0x4001402c, struct __struct_TC1_IMR0)
struct __struct_TC1_IMR0
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_CCR1	MMIO_REG(0x40014040, uint32_t)
#define TC1_CCR1_CLKEN	(1 << 0)
#define TC1_CCR1_CLKDIS	(1 << 1)
#define TC1_CCR1_SWTRG	(1 << 2)

#define TC1_CCR1_s	MMIO_REG(0x40014040, struct __struct_TC1_CCR1)
struct __struct_TC1_CCR1
{
  uint32_t clken : 1;
  uint32_t clkdis : 1;
  uint32_t swtrg : 1;
  uint32_t  : 29;
};

#define TC1_CMR1	MMIO_REG(0x40014044, uint32_t)
#define TC1_CMR1_TCCLKS(x)	((x) << 0)
#define TC1_CMR1_TCCLKS_MSK	0x00000007
#define TC1_CMR1_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_CMR1_CLKI	(1 << 3)
#define TC1_CMR1_BURST(x)	((x) << 4)
#define TC1_CMR1_BURST_MSK	0x00000030
#define TC1_CMR1_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC1_CMR1_CPCSTOP	(1 << 6)
#define TC1_CMR1_CPCDIS	(1 << 7)
#define TC1_CMR1_EEVTEDG(x)	((x) << 8)
#define TC1_CMR1_EEVTEDG_MSK	0x00000300
#define TC1_CMR1_EEVTEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC1_CMR1_EEVT(x)	((x) << 10)
#define TC1_CMR1_EEVT_MSK	0x00000c00
#define TC1_CMR1_EEVT_VAL(x)	(((x) >> 10) & 0x3)
#define TC1_CMR1_ENETRG	(1 << 12)
#define TC1_CMR1_WAVSEL(x)	((x) << 13)
#define TC1_CMR1_WAVSEL_MSK	0x00006000
#define TC1_CMR1_WAVSEL_VAL(x)	(((x) >> 13) & 0x3)
#define TC1_CMR1_WAVE	(1 << 15)
#define TC1_CMR1_ACPA(x)	((x) << 16)
#define TC1_CMR1_ACPA_MSK	0x00030000
#define TC1_CMR1_ACPA_VAL(x)	(((x) >> 16) & 0x3)
#define TC1_CMR1_ACPC(x)	((x) << 18)
#define TC1_CMR1_ACPC_MSK	0x000c0000
#define TC1_CMR1_ACPC_VAL(x)	(((x) >> 18) & 0x3)
#define TC1_CMR1_AEEVT(x)	((x) << 20)
#define TC1_CMR1_AEEVT_MSK	0x00300000
#define TC1_CMR1_AEEVT_VAL(x)	(((x) >> 20) & 0x3)
#define TC1_CMR1_ASWTRG(x)	((x) << 22)
#define TC1_CMR1_ASWTRG_MSK	0x00c00000
#define TC1_CMR1_ASWTRG_VAL(x)	(((x) >> 22) & 0x3)
#define TC1_CMR1_BCPB(x)	((x) << 24)
#define TC1_CMR1_BCPB_MSK	0x03000000
#define TC1_CMR1_BCPB_VAL(x)	(((x) >> 24) & 0x3)
#define TC1_CMR1_BCPC(x)	((x) << 26)
#define TC1_CMR1_BCPC_MSK	0x0c000000
#define TC1_CMR1_BCPC_VAL(x)	(((x) >> 26) & 0x3)
#define TC1_CMR1_BEEVT(x)	((x) << 28)
#define TC1_CMR1_BEEVT_MSK	0x30000000
#define TC1_CMR1_BEEVT_VAL(x)	(((x) >> 28) & 0x3)
#define TC1_CMR1_BSWTRG(x)	((x) << 30)
#define TC1_CMR1_BSWTRG_MSK	0xc0000000
#define TC1_CMR1_BSWTRG_VAL(x)	(((x) >> 30) & 0x3)

#define TC1_CMR1_s	MMIO_REG(0x40014044, struct __struct_TC1_CMR1)
struct __struct_TC1_CMR1
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t cpcstop : 1;
  uint32_t cpcdis : 1;
  uint32_t eevtedg : 2;
  uint32_t eevt : 2;
  uint32_t enetrg : 1;
  uint32_t wavsel : 2;
  uint32_t wave : 1;
  uint32_t acpa : 2;
  uint32_t acpc : 2;
  uint32_t aeevt : 2;
  uint32_t aswtrg : 2;
  uint32_t bcpb : 2;
  uint32_t bcpc : 2;
  uint32_t beevt : 2;
  uint32_t bswtrg : 2;
};

#define TC1_CMR1W	MMIO_REG(0x40014044, uint32_t)
#define TC1_CMR1W_TCCLKS(x)	((x) << 0)
#define TC1_CMR1W_TCCLKS_MSK	0x00000007
#define TC1_CMR1W_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_CMR1W_CLKI	(1 << 3)
#define TC1_CMR1W_BURST(x)	((x) << 4)
#define TC1_CMR1W_BURST_MSK	0x00000030
#define TC1_CMR1W_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC1_CMR1W_LDBSTOP	(1 << 6)
#define TC1_CMR1W_LDBDIS	(1 << 7)
#define TC1_CMR1W_ETRGEDG(x)	((x) << 8)
#define TC1_CMR1W_ETRGEDG_MSK	0x00000300
#define TC1_CMR1W_ETRGEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC1_CMR1W_ABETRG	(1 << 10)
#define TC1_CMR1W_CPCTRG	(1 << 14)
#define TC1_CMR1W_WAVE	(1 << 15)
#define TC1_CMR1W_LDRA(x)	((x) << 16)
#define TC1_CMR1W_LDRA_MSK	0x00030000
#define TC1_CMR1W_LDRA_VAL(x)	(((x) >> 16) & 0x3)
#define TC1_CMR1W_LDRB(x)	((x) << 18)
#define TC1_CMR1W_LDRB_MSK	0x000c0000
#define TC1_CMR1W_LDRB_VAL(x)	(((x) >> 18) & 0x3)

#define TC1_CMR1W_s	MMIO_REG(0x40014044, struct __struct_TC1_CMR1W)
struct __struct_TC1_CMR1W
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t ldbstop : 1;
  uint32_t ldbdis : 1;
  uint32_t etrgedg : 2;
  uint32_t abetrg : 1;
  uint32_t  : 3;
  uint32_t cpctrg : 1;
  uint32_t wave : 1;
  uint32_t ldra : 2;
  uint32_t ldrb : 2;
  uint32_t  : 12;
};

#define TC1_SMMR1	MMIO_REG(0x40014048, uint32_t)
#define TC1_SMMR1_GCEN	(1 << 0)
#define TC1_SMMR1_DOWN	(1 << 1)

#define TC1_SMMR1_s	MMIO_REG(0x40014048, struct __struct_TC1_SMMR1)
struct __struct_TC1_SMMR1
{
  uint32_t gcen : 1;
  uint32_t down : 1;
  uint32_t  : 30;
};

#define TC1_CV1	MMIO_REG(0x40014050, uint32_t)

#define TC1_RA1	MMIO_REG(0x40014054, uint32_t)

#define TC1_RB1	MMIO_REG(0x40014058, uint32_t)

#define TC1_RC1	MMIO_REG(0x4001405c, uint32_t)

#define TC1_SR1	MMIO_REG(0x40014060, uint32_t)
#define TC1_SR1_COVFS	(1 << 0)
#define TC1_SR1_LOVRS	(1 << 1)
#define TC1_SR1_CPAS	(1 << 2)
#define TC1_SR1_CPBS	(1 << 3)
#define TC1_SR1_CPCS	(1 << 4)
#define TC1_SR1_LDRAS	(1 << 5)
#define TC1_SR1_LDRBS	(1 << 6)
#define TC1_SR1_ETRGS	(1 << 7)
#define TC1_SR1_CLKSTA	(1 << 16)
#define TC1_SR1_MTIOA	(1 << 17)
#define TC1_SR1_MTIOB	(1 << 18)

#define TC1_SR1_s	MMIO_REG(0x40014060, struct __struct_TC1_SR1)
struct __struct_TC1_SR1
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 8;
  uint32_t clksta : 1;
  uint32_t mtioa : 1;
  uint32_t mtiob : 1;
  uint32_t  : 13;
};

#define TC1_IER1	MMIO_REG(0x40014064, uint32_t)
#define TC1_IER1_COVFS	(1 << 0)
#define TC1_IER1_LOVRS	(1 << 1)
#define TC1_IER1_CPAS	(1 << 2)
#define TC1_IER1_CPBS	(1 << 3)
#define TC1_IER1_CPCS	(1 << 4)
#define TC1_IER1_LDRAS	(1 << 5)
#define TC1_IER1_LDRBS	(1 << 6)
#define TC1_IER1_ETRGS	(1 << 7)

#define TC1_IER1_s	MMIO_REG(0x40014064, struct __struct_TC1_IER1)
struct __struct_TC1_IER1
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_IDR1	MMIO_REG(0x40014068, uint32_t)
#define TC1_IDR1_COVFS	(1 << 0)
#define TC1_IDR1_LOVRS	(1 << 1)
#define TC1_IDR1_CPAS	(1 << 2)
#define TC1_IDR1_CPBS	(1 << 3)
#define TC1_IDR1_CPCS	(1 << 4)
#define TC1_IDR1_LDRAS	(1 << 5)
#define TC1_IDR1_LDRBS	(1 << 6)
#define TC1_IDR1_ETRGS	(1 << 7)

#define TC1_IDR1_s	MMIO_REG(0x40014068, struct __struct_TC1_IDR1)
struct __struct_TC1_IDR1
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_IMR1	MMIO_REG(0x4001406c, uint32_t)
#define TC1_IMR1_COVFS	(1 << 0)
#define TC1_IMR1_LOVRS	(1 << 1)
#define TC1_IMR1_CPAS	(1 << 2)
#define TC1_IMR1_CPBS	(1 << 3)
#define TC1_IMR1_CPCS	(1 << 4)
#define TC1_IMR1_LDRAS	(1 << 5)
#define TC1_IMR1_LDRBS	(1 << 6)
#define TC1_IMR1_ETRGS	(1 << 7)

#define TC1_IMR1_s	MMIO_REG(0x4001406c, struct __struct_TC1_IMR1)
struct __struct_TC1_IMR1
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_CCR2	MMIO_REG(0x40014080, uint32_t)
#define TC1_CCR2_CLKEN	(1 << 0)
#define TC1_CCR2_CLKDIS	(1 << 1)
#define TC1_CCR2_SWTRG	(1 << 2)

#define TC1_CCR2_s	MMIO_REG(0x40014080, struct __struct_TC1_CCR2)
struct __struct_TC1_CCR2
{
  uint32_t clken : 1;
  uint32_t clkdis : 1;
  uint32_t swtrg : 1;
  uint32_t  : 29;
};

#define TC1_CMR2	MMIO_REG(0x40014084, uint32_t)
#define TC1_CMR2_TCCLKS(x)	((x) << 0)
#define TC1_CMR2_TCCLKS_MSK	0x00000007
#define TC1_CMR2_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_CMR2_CLKI	(1 << 3)
#define TC1_CMR2_BURST(x)	((x) << 4)
#define TC1_CMR2_BURST_MSK	0x00000030
#define TC1_CMR2_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC1_CMR2_CPCSTOP	(1 << 6)
#define TC1_CMR2_CPCDIS	(1 << 7)
#define TC1_CMR2_EEVTEDG(x)	((x) << 8)
#define TC1_CMR2_EEVTEDG_MSK	0x00000300
#define TC1_CMR2_EEVTEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC1_CMR2_EEVT(x)	((x) << 10)
#define TC1_CMR2_EEVT_MSK	0x00000c00
#define TC1_CMR2_EEVT_VAL(x)	(((x) >> 10) & 0x3)
#define TC1_CMR2_ENETRG	(1 << 12)
#define TC1_CMR2_WAVSEL(x)	((x) << 13)
#define TC1_CMR2_WAVSEL_MSK	0x00006000
#define TC1_CMR2_WAVSEL_VAL(x)	(((x) >> 13) & 0x3)
#define TC1_CMR2_WAVE	(1 << 15)
#define TC1_CMR2_ACPA(x)	((x) << 16)
#define TC1_CMR2_ACPA_MSK	0x00030000
#define TC1_CMR2_ACPA_VAL(x)	(((x) >> 16) & 0x3)
#define TC1_CMR2_ACPC(x)	((x) << 18)
#define TC1_CMR2_ACPC_MSK	0x000c0000
#define TC1_CMR2_ACPC_VAL(x)	(((x) >> 18) & 0x3)
#define TC1_CMR2_AEEVT(x)	((x) << 20)
#define TC1_CMR2_AEEVT_MSK	0x00300000
#define TC1_CMR2_AEEVT_VAL(x)	(((x) >> 20) & 0x3)
#define TC1_CMR2_ASWTRG(x)	((x) << 22)
#define TC1_CMR2_ASWTRG_MSK	0x00c00000
#define TC1_CMR2_ASWTRG_VAL(x)	(((x) >> 22) & 0x3)
#define TC1_CMR2_BCPB(x)	((x) << 24)
#define TC1_CMR2_BCPB_MSK	0x03000000
#define TC1_CMR2_BCPB_VAL(x)	(((x) >> 24) & 0x3)
#define TC1_CMR2_BCPC(x)	((x) << 26)
#define TC1_CMR2_BCPC_MSK	0x0c000000
#define TC1_CMR2_BCPC_VAL(x)	(((x) >> 26) & 0x3)
#define TC1_CMR2_BEEVT(x)	((x) << 28)
#define TC1_CMR2_BEEVT_MSK	0x30000000
#define TC1_CMR2_BEEVT_VAL(x)	(((x) >> 28) & 0x3)
#define TC1_CMR2_BSWTRG(x)	((x) << 30)
#define TC1_CMR2_BSWTRG_MSK	0xc0000000
#define TC1_CMR2_BSWTRG_VAL(x)	(((x) >> 30) & 0x3)

#define TC1_CMR2_s	MMIO_REG(0x40014084, struct __struct_TC1_CMR2)
struct __struct_TC1_CMR2
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t cpcstop : 1;
  uint32_t cpcdis : 1;
  uint32_t eevtedg : 2;
  uint32_t eevt : 2;
  uint32_t enetrg : 1;
  uint32_t wavsel : 2;
  uint32_t wave : 1;
  uint32_t acpa : 2;
  uint32_t acpc : 2;
  uint32_t aeevt : 2;
  uint32_t aswtrg : 2;
  uint32_t bcpb : 2;
  uint32_t bcpc : 2;
  uint32_t beevt : 2;
  uint32_t bswtrg : 2;
};

#define TC1_CMR2W	MMIO_REG(0x40014084, uint32_t)
#define TC1_CMR2W_TCCLKS(x)	((x) << 0)
#define TC1_CMR2W_TCCLKS_MSK	0x00000007
#define TC1_CMR2W_TCCLKS_VAL(x)	(((x) >> 0) & 0x7)
#define TC1_CMR2W_CLKI	(1 << 3)
#define TC1_CMR2W_BURST(x)	((x) << 4)
#define TC1_CMR2W_BURST_MSK	0x00000030
#define TC1_CMR2W_BURST_VAL(x)	(((x) >> 4) & 0x3)
#define TC1_CMR2W_LDBSTOP	(1 << 6)
#define TC1_CMR2W_LDBDIS	(1 << 7)
#define TC1_CMR2W_ETRGEDG(x)	((x) << 8)
#define TC1_CMR2W_ETRGEDG_MSK	0x00000300
#define TC1_CMR2W_ETRGEDG_VAL(x)	(((x) >> 8) & 0x3)
#define TC1_CMR2W_ABETRG	(1 << 10)
#define TC1_CMR2W_CPCTRG	(1 << 14)
#define TC1_CMR2W_WAVE	(1 << 15)
#define TC1_CMR2W_LDRA(x)	((x) << 16)
#define TC1_CMR2W_LDRA_MSK	0x00030000
#define TC1_CMR2W_LDRA_VAL(x)	(((x) >> 16) & 0x3)
#define TC1_CMR2W_LDRB(x)	((x) << 18)
#define TC1_CMR2W_LDRB_MSK	0x000c0000
#define TC1_CMR2W_LDRB_VAL(x)	(((x) >> 18) & 0x3)

#define TC1_CMR2W_s	MMIO_REG(0x40014084, struct __struct_TC1_CMR2W)
struct __struct_TC1_CMR2W
{
  uint32_t tcclks : 3;
  uint32_t clki : 1;
  uint32_t burst : 2;
  uint32_t ldbstop : 1;
  uint32_t ldbdis : 1;
  uint32_t etrgedg : 2;
  uint32_t abetrg : 1;
  uint32_t  : 3;
  uint32_t cpctrg : 1;
  uint32_t wave : 1;
  uint32_t ldra : 2;
  uint32_t ldrb : 2;
  uint32_t  : 12;
};

#define TC1_SMMR2	MMIO_REG(0x40014088, uint32_t)
#define TC1_SMMR2_GCEN	(1 << 0)
#define TC1_SMMR2_DOWN	(1 << 1)

#define TC1_SMMR2_s	MMIO_REG(0x40014088, struct __struct_TC1_SMMR2)
struct __struct_TC1_SMMR2
{
  uint32_t gcen : 1;
  uint32_t down : 1;
  uint32_t  : 30;
};

#define TC1_CV2	MMIO_REG(0x40014090, uint32_t)

#define TC1_RA2	MMIO_REG(0x40014094, uint32_t)

#define TC1_RB2	MMIO_REG(0x40014098, uint32_t)

#define TC1_RC2	MMIO_REG(0x4001409c, uint32_t)

#define TC1_SR2	MMIO_REG(0x400140a0, uint32_t)
#define TC1_SR2_COVFS	(1 << 0)
#define TC1_SR2_LOVRS	(1 << 1)
#define TC1_SR2_CPAS	(1 << 2)
#define TC1_SR2_CPBS	(1 << 3)
#define TC1_SR2_CPCS	(1 << 4)
#define TC1_SR2_LDRAS	(1 << 5)
#define TC1_SR2_LDRBS	(1 << 6)
#define TC1_SR2_ETRGS	(1 << 7)
#define TC1_SR2_CLKSTA	(1 << 16)
#define TC1_SR2_MTIOA	(1 << 17)
#define TC1_SR2_MTIOB	(1 << 18)

#define TC1_SR2_s	MMIO_REG(0x400140a0, struct __struct_TC1_SR2)
struct __struct_TC1_SR2
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 8;
  uint32_t clksta : 1;
  uint32_t mtioa : 1;
  uint32_t mtiob : 1;
  uint32_t  : 13;
};

#define TC1_IER2	MMIO_REG(0x400140a4, uint32_t)
#define TC1_IER2_COVFS	(1 << 0)
#define TC1_IER2_LOVRS	(1 << 1)
#define TC1_IER2_CPAS	(1 << 2)
#define TC1_IER2_CPBS	(1 << 3)
#define TC1_IER2_CPCS	(1 << 4)
#define TC1_IER2_LDRAS	(1 << 5)
#define TC1_IER2_LDRBS	(1 << 6)
#define TC1_IER2_ETRGS	(1 << 7)

#define TC1_IER2_s	MMIO_REG(0x400140a4, struct __struct_TC1_IER2)
struct __struct_TC1_IER2
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_IDR2	MMIO_REG(0x400140a8, uint32_t)
#define TC1_IDR2_COVFS	(1 << 0)
#define TC1_IDR2_LOVRS	(1 << 1)
#define TC1_IDR2_CPAS	(1 << 2)
#define TC1_IDR2_CPBS	(1 << 3)
#define TC1_IDR2_CPCS	(1 << 4)
#define TC1_IDR2_LDRAS	(1 << 5)
#define TC1_IDR2_LDRBS	(1 << 6)
#define TC1_IDR2_ETRGS	(1 << 7)

#define TC1_IDR2_s	MMIO_REG(0x400140a8, struct __struct_TC1_IDR2)
struct __struct_TC1_IDR2
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_IMR2	MMIO_REG(0x400140ac, uint32_t)
#define TC1_IMR2_COVFS	(1 << 0)
#define TC1_IMR2_LOVRS	(1 << 1)
#define TC1_IMR2_CPAS	(1 << 2)
#define TC1_IMR2_CPBS	(1 << 3)
#define TC1_IMR2_CPCS	(1 << 4)
#define TC1_IMR2_LDRAS	(1 << 5)
#define TC1_IMR2_LDRBS	(1 << 6)
#define TC1_IMR2_ETRGS	(1 << 7)

#define TC1_IMR2_s	MMIO_REG(0x400140ac, struct __struct_TC1_IMR2)
struct __struct_TC1_IMR2
{
  uint32_t covfs : 1;
  uint32_t lovrs : 1;
  uint32_t cpas : 1;
  uint32_t cpbs : 1;
  uint32_t cpcs : 1;
  uint32_t ldras : 1;
  uint32_t ldrbs : 1;
  uint32_t etrgs : 1;
  uint32_t  : 24;
};

#define TC1_BCR	MMIO_REG(0x400140c0, uint32_t)
#define TC1_BCR_SYNC	(1 << 0)

#define TC1_BCR_s	MMIO_REG(0x400140c0, struct __struct_TC1_BCR)
struct __struct_TC1_BCR
{
  uint32_t sync : 1;
  uint32_t  : 31;
};

#define TC1_BMR	MMIO_REG(0x400140c4, uint32_t)
#define TC1_BMR_TC0XC0S(x)	((x) << 0)
#define TC1_BMR_TC0XC0S_MSK	0x00000003
#define TC1_BMR_TC0XC0S_VAL(x)	(((x) >> 0) & 0x3)
#define TC1_BMR_TC1XC1S(x)	((x) << 2)
#define TC1_BMR_TC1XC1S_MSK	0x0000000c
#define TC1_BMR_TC1XC1S_VAL(x)	(((x) >> 2) & 0x3)
#define TC1_BMR_TC2XC2S(x)	((x) << 4)
#define TC1_BMR_TC2XC2S_MSK	0x00000030
#define TC1_BMR_TC2XC2S_VAL(x)	(((x) >> 4) & 0x3)
#define TC1_BMR_QDEN	(1 << 8)
#define TC1_BMR_POSEN	(1 << 9)
#define TC1_BMR_SPEEDEN	(1 << 10)
#define TC1_BMR_QDTRANS	(1 << 11)
#define TC1_BMR_EDGPHA	(1 << 12)
#define TC1_BMR_INVA	(1 << 13)
#define TC1_BMR_INVB	(1 << 14)
#define TC1_BMR_INVIDX	(1 << 15)
#define TC1_BMR_SWAP	(1 << 16)
#define TC1_BMR_IDXPHB	(1 << 17)
#define TC1_BMR_FILTER	(1 << 19)
#define TC1_BMR_MAXFILT(x)	((x) << 20)
#define TC1_BMR_MAXFILT_MSK	0x03f00000
#define TC1_BMR_MAXFILT_VAL(x)	(((x) >> 20) & 0x3f)

#define TC1_BMR_s	MMIO_REG(0x400140c4, struct __struct_TC1_BMR)
struct __struct_TC1_BMR
{
  uint32_t tc0xc0s : 2;
  uint32_t tc1xc1s : 2;
  uint32_t tc2xc2s : 2;
  uint32_t  : 2;
  uint32_t qden : 1;
  uint32_t posen : 1;
  uint32_t speeden : 1;
  uint32_t qdtrans : 1;
  uint32_t edgpha : 1;
  uint32_t inva : 1;
  uint32_t invb : 1;
  uint32_t invidx : 1;
  uint32_t swap : 1;
  uint32_t idxphb : 1;
  uint32_t  : 1;
  uint32_t filter : 1;
  uint32_t maxfilt : 6;
  uint32_t  : 6;
};

#define TC1_QIER	MMIO_REG(0x400140c8, uint32_t)
#define TC1_QIER_IDX	(1 << 0)
#define TC1_QIER_DIRCHG	(1 << 1)
#define TC1_QIER_QERR	(1 << 2)

#define TC1_QIER_s	MMIO_REG(0x400140c8, struct __struct_TC1_QIER)
struct __struct_TC1_QIER
{
  uint32_t idx : 1;
  uint32_t dirchg : 1;
  uint32_t qerr : 1;
  uint32_t  : 29;
};

#define TC1_QIDR	MMIO_REG(0x400140cc, uint32_t)
#define TC1_QIDR_IDX	(1 << 0)
#define TC1_QIDR_DIRCHG	(1 << 1)
#define TC1_QIDR_QERR	(1 << 2)

#define TC1_QIDR_s	MMIO_REG(0x400140cc, struct __struct_TC1_QIDR)
struct __struct_TC1_QIDR
{
  uint32_t idx : 1;
  uint32_t dirchg : 1;
  uint32_t qerr : 1;
  uint32_t  : 29;
};

#define TC1_QIMR	MMIO_REG(0x400140d0, uint32_t)
#define TC1_QIMR_IDX	(1 << 0)
#define TC1_QIMR_DIRCHG	(1 << 1)
#define TC1_QIMR_QERR	(1 << 2)

#define TC1_QIMR_s	MMIO_REG(0x400140d0, struct __struct_TC1_QIMR)
struct __struct_TC1_QIMR
{
  uint32_t idx : 1;
  uint32_t dirchg : 1;
  uint32_t qerr : 1;
  uint32_t  : 29;
};

#define TC1_QISR	MMIO_REG(0x400140d4, uint32_t)
#define TC1_QISR_IDX	(1 << 0)
#define TC1_QISR_DIRCHG	(1 << 1)
#define TC1_QISR_QERR	(1 << 2)
#define TC1_QISR_DIR	(1 << 8)

#define TC1_QISR_s	MMIO_REG(0x400140d4, struct __struct_TC1_QISR)
struct __struct_TC1_QISR
{
  uint32_t idx : 1;
  uint32_t dirchg : 1;
  uint32_t qerr : 1;
  uint32_t  : 5;
  uint32_t dir : 1;
  uint32_t  : 23;
};

#define TC1_FMR	MMIO_REG(0x400140d8, uint32_t)
#define TC1_FMR_ENCF0	(1 << 0)
#define TC1_FMR_ENCF1	(1 << 1)

#define TC1_FMR_s	MMIO_REG(0x400140d8, struct __struct_TC1_FMR)
struct __struct_TC1_FMR
{
  uint32_t encf0 : 1;
  uint32_t encf1 : 1;
  uint32_t  : 30;
};

#define TC1_WPMR	MMIO_REG(0x400140e4, uint32_t)
#define TC1_WPMR_WPEN	(1 << 0)
#define TC1_WPMR_WPKEY(x)	((x) << 8)
#define TC1_WPMR_WPKEY_MSK	0xffffff00
#define TC1_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define TC1_WPMR_s	MMIO_REG(0x400140e4, struct __struct_TC1_WPMR)
struct __struct_TC1_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

// 0x40018000 TWI0

#define TWI0_CR	MMIO_REG(0x40018000, uint32_t)
#define TWI0_CR_START	(1 << 0)
#define TWI0_CR_STOP	(1 << 1)
#define TWI0_CR_MSEN	(1 << 2)
#define TWI0_CR_MSDIS	(1 << 3)
#define TWI0_CR_SVEN	(1 << 4)
#define TWI0_CR_SVDIS	(1 << 5)
#define TWI0_CR_QUICK	(1 << 6)
#define TWI0_CR_SWRST	(1 << 7)

#define TWI0_CR_s	MMIO_REG(0x40018000, struct __struct_TWI0_CR)
struct __struct_TWI0_CR
{
  uint32_t start : 1;
  uint32_t stop : 1;
  uint32_t msen : 1;
  uint32_t msdis : 1;
  uint32_t sven : 1;
  uint32_t svdis : 1;
  uint32_t quick : 1;
  uint32_t swrst : 1;
  uint32_t  : 24;
};

#define TWI0_MMR	MMIO_REG(0x40018004, uint32_t)
#define TWI0_MMR_IADRSZ(x)	((x) << 8)
#define TWI0_MMR_IADRSZ_MSK	0x00000300
#define TWI0_MMR_IADRSZ_VAL(x)	(((x) >> 8) & 0x3)
#define TWI0_MMR_MREAD	(1 << 12)
#define TWI0_MMR_DADDR(x)	((x) << 16)
#define TWI0_MMR_DADDR_MSK	0x007f0000
#define TWI0_MMR_DADDR_VAL(x)	(((x) >> 16) & 0x7f)

#define TWI0_MMR_s	MMIO_REG(0x40018004, struct __struct_TWI0_MMR)
struct __struct_TWI0_MMR
{
  uint32_t  : 8;
  uint32_t iadrsz : 2;
  uint32_t  : 2;
  uint32_t mread : 1;
  uint32_t  : 3;
  uint32_t daddr : 7;
  uint32_t  : 9;
};

#define TWI0_SMR	MMIO_REG(0x40018008, uint32_t)
#define TWI0_SMR_SADR(x)	((x) << 16)
#define TWI0_SMR_SADR_MSK	0x007f0000
#define TWI0_SMR_SADR_VAL(x)	(((x) >> 16) & 0x7f)

#define TWI0_SMR_s	MMIO_REG(0x40018008, struct __struct_TWI0_SMR)
struct __struct_TWI0_SMR
{
  uint32_t  : 16;
  uint32_t sadr : 7;
  uint32_t  : 9;
};

#define TWI0_IADR	MMIO_REG(0x4001800c, uint32_t)
#define TWI0_IADR_IADR(x)	((x) << 0)
#define TWI0_IADR_IADR_MSK	0x00ffffff
#define TWI0_IADR_IADR_VAL(x)	(((x) >> 0) & 0xffffff)

#define TWI0_IADR_s	MMIO_REG(0x4001800c, struct __struct_TWI0_IADR)
struct __struct_TWI0_IADR
{
  uint32_t iadr : 24;
  uint32_t  : 8;
};

#define TWI0_CWGR	MMIO_REG(0x40018010, uint32_t)
#define TWI0_CWGR_CLDIV(x)	((x) << 0)
#define TWI0_CWGR_CLDIV_MSK	0x000000ff
#define TWI0_CWGR_CLDIV_VAL(x)	(((x) >> 0) & 0xff)
#define TWI0_CWGR_CHDIV(x)	((x) << 8)
#define TWI0_CWGR_CHDIV_MSK	0x0000ff00
#define TWI0_CWGR_CHDIV_VAL(x)	(((x) >> 8) & 0xff)
#define TWI0_CWGR_CKDIV(x)	((x) << 16)
#define TWI0_CWGR_CKDIV_MSK	0x00070000
#define TWI0_CWGR_CKDIV_VAL(x)	(((x) >> 16) & 0x7)

#define TWI0_CWGR_s	MMIO_REG(0x40018010, struct __struct_TWI0_CWGR)
struct __struct_TWI0_CWGR
{
  uint32_t cldiv : 8;
  uint32_t chdiv : 8;
  uint32_t ckdiv : 3;
  uint32_t  : 13;
};

#define TWI0_SR	MMIO_REG(0x40018020, uint32_t)
#define TWI0_SR_TXCOMP	(1 << 0)
#define TWI0_SR_RXRDY	(1 << 1)
#define TWI0_SR_TXRDY	(1 << 2)
#define TWI0_SR_SVREAD	(1 << 3)
#define TWI0_SR_SVACC	(1 << 4)
#define TWI0_SR_GACC	(1 << 5)
#define TWI0_SR_OVRE	(1 << 6)
#define TWI0_SR_NACK	(1 << 8)
#define TWI0_SR_ARBLST	(1 << 9)
#define TWI0_SR_SCLWS	(1 << 10)
#define TWI0_SR_EOSACC	(1 << 11)
#define TWI0_SR_ENDRX	(1 << 12)
#define TWI0_SR_ENDTX	(1 << 13)
#define TWI0_SR_RXBUFF	(1 << 14)
#define TWI0_SR_TXBUFE	(1 << 15)

#define TWI0_SR_s	MMIO_REG(0x40018020, struct __struct_TWI0_SR)
struct __struct_TWI0_SR
{
  uint32_t txcomp : 1;
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t svread : 1;
  uint32_t svacc : 1;
  uint32_t gacc : 1;
  uint32_t ovre : 1;
  uint32_t  : 1;
  uint32_t nack : 1;
  uint32_t arblst : 1;
  uint32_t sclws : 1;
  uint32_t eosacc : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t rxbuff : 1;
  uint32_t txbufe : 1;
  uint32_t  : 16;
};

#define TWI0_IER	MMIO_REG(0x40018024, uint32_t)
#define TWI0_IER_TXCOMP	(1 << 0)
#define TWI0_IER_RXRDY	(1 << 1)
#define TWI0_IER_TXRDY	(1 << 2)
#define TWI0_IER_SVACC	(1 << 4)
#define TWI0_IER_GACC	(1 << 5)
#define TWI0_IER_OVRE	(1 << 6)
#define TWI0_IER_NACK	(1 << 8)
#define TWI0_IER_ARBLST	(1 << 9)
#define TWI0_IER_SCLWS	(1 << 10)
#define TWI0_IER_EOSACC	(1 << 11)
#define TWI0_IER_ENDRX	(1 << 12)
#define TWI0_IER_ENDTX	(1 << 13)
#define TWI0_IER_RXBUFF	(1 << 14)
#define TWI0_IER_TXBUFE	(1 << 15)

#define TWI0_IER_s	MMIO_REG(0x40018024, struct __struct_TWI0_IER)
struct __struct_TWI0_IER
{
  uint32_t txcomp : 1;
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t svacc : 1;
  uint32_t gacc : 1;
  uint32_t ovre : 1;
  uint32_t  : 1;
  uint32_t nack : 1;
  uint32_t arblst : 1;
  uint32_t sclws : 1;
  uint32_t eosacc : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t rxbuff : 1;
  uint32_t txbufe : 1;
  uint32_t  : 16;
};

#define TWI0_IDR	MMIO_REG(0x40018028, uint32_t)
#define TWI0_IDR_TXCOMP	(1 << 0)
#define TWI0_IDR_RXRDY	(1 << 1)
#define TWI0_IDR_TXRDY	(1 << 2)
#define TWI0_IDR_SVACC	(1 << 4)
#define TWI0_IDR_GACC	(1 << 5)
#define TWI0_IDR_OVRE	(1 << 6)
#define TWI0_IDR_NACK	(1 << 8)
#define TWI0_IDR_ARBLST	(1 << 9)
#define TWI0_IDR_SCLWS	(1 << 10)
#define TWI0_IDR_EOSACC	(1 << 11)
#define TWI0_IDR_ENDRX	(1 << 12)
#define TWI0_IDR_ENDTX	(1 << 13)
#define TWI0_IDR_RXBUFF	(1 << 14)
#define TWI0_IDR_TXBUFE	(1 << 15)

#define TWI0_IDR_s	MMIO_REG(0x40018028, struct __struct_TWI0_IDR)
struct __struct_TWI0_IDR
{
  uint32_t txcomp : 1;
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t svacc : 1;
  uint32_t gacc : 1;
  uint32_t ovre : 1;
  uint32_t  : 1;
  uint32_t nack : 1;
  uint32_t arblst : 1;
  uint32_t sclws : 1;
  uint32_t eosacc : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t rxbuff : 1;
  uint32_t txbufe : 1;
  uint32_t  : 16;
};

#define TWI0_IMR	MMIO_REG(0x4001802c, uint32_t)
#define TWI0_IMR_TXCOMP	(1 << 0)
#define TWI0_IMR_RXRDY	(1 << 1)
#define TWI0_IMR_TXRDY	(1 << 2)
#define TWI0_IMR_SVACC	(1 << 4)
#define TWI0_IMR_GACC	(1 << 5)
#define TWI0_IMR_OVRE	(1 << 6)
#define TWI0_IMR_NACK	(1 << 8)
#define TWI0_IMR_ARBLST	(1 << 9)
#define TWI0_IMR_SCLWS	(1 << 10)
#define TWI0_IMR_EOSACC	(1 << 11)
#define TWI0_IMR_ENDRX	(1 << 12)
#define TWI0_IMR_ENDTX	(1 << 13)
#define TWI0_IMR_RXBUFF	(1 << 14)
#define TWI0_IMR_TXBUFE	(1 << 15)

#define TWI0_IMR_s	MMIO_REG(0x4001802c, struct __struct_TWI0_IMR)
struct __struct_TWI0_IMR
{
  uint32_t txcomp : 1;
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t svacc : 1;
  uint32_t gacc : 1;
  uint32_t ovre : 1;
  uint32_t  : 1;
  uint32_t nack : 1;
  uint32_t arblst : 1;
  uint32_t sclws : 1;
  uint32_t eosacc : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t rxbuff : 1;
  uint32_t txbufe : 1;
  uint32_t  : 16;
};

#define TWI0_RHR	MMIO_REG(0x40018030, uint32_t)
#define TWI0_RHR_RXDATA(x)	((x) << 0)
#define TWI0_RHR_RXDATA_MSK	0x000000ff
#define TWI0_RHR_RXDATA_VAL(x)	(((x) >> 0) & 0xff)

#define TWI0_RHR_s	MMIO_REG(0x40018030, struct __struct_TWI0_RHR)
struct __struct_TWI0_RHR
{
  uint32_t rxdata : 8;
  uint32_t  : 24;
};

#define TWI0_THR	MMIO_REG(0x40018034, uint32_t)
#define TWI0_THR_TXDATA(x)	((x) << 0)
#define TWI0_THR_TXDATA_MSK	0x000000ff
#define TWI0_THR_TXDATA_VAL(x)	(((x) >> 0) & 0xff)

#define TWI0_THR_s	MMIO_REG(0x40018034, struct __struct_TWI0_THR)
struct __struct_TWI0_THR
{
  uint32_t txdata : 8;
  uint32_t  : 24;
};

// 0x40018100 TWI0_PDC

#define TWI0_PDC_RPR	MMIO_REG(0x40018100, uint32_t)

#define TWI0_PDC_RCR	MMIO_REG(0x40018104, uint32_t)

#define TWI0_PDC_TPR	MMIO_REG(0x40018108, uint32_t)

#define TWI0_PDC_TCR	MMIO_REG(0x4001810c, uint32_t)

#define TWI0_PDC_RNPR	MMIO_REG(0x40018110, uint32_t)

#define TWI0_PDC_RNCR	MMIO_REG(0x40018114, uint32_t)

#define TWI0_PDC_TNPR	MMIO_REG(0x40018118, uint32_t)

#define TWI0_PDC_TNCR	MMIO_REG(0x4001811c, uint32_t)

#define TWI0_PDC_PTCR	MMIO_REG(0x40018120, uint32_t)
#define TWI0_PDC_PTCR_RXTEN	(1 << 0)
#define TWI0_PDC_PTCR_RXTDIS	(1 << 1)
#define TWI0_PDC_PTCR_TXTEN	(1 << 8)
#define TWI0_PDC_PTCR_TXTDIS	(1 << 9)

#define TWI0_PDC_PTCR_s	MMIO_REG(0x40018120, struct __struct_TWI0_PDC_PTCR)
struct __struct_TWI0_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define TWI0_PDC_PTSR	MMIO_REG(0x40018124, uint32_t)
#define TWI0_PDC_PTSR_RXTEN	(1 << 0)
#define TWI0_PDC_PTSR_TXTEN	(1 << 8)

#define TWI0_PDC_PTSR_s	MMIO_REG(0x40018124, struct __struct_TWI0_PDC_PTSR)
struct __struct_TWI0_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x4001c000 TWI1

#define TWI1_CR	MMIO_REG(0x4001c000, uint32_t)
#define TWI1_CR_START	(1 << 0)
#define TWI1_CR_STOP	(1 << 1)
#define TWI1_CR_MSEN	(1 << 2)
#define TWI1_CR_MSDIS	(1 << 3)
#define TWI1_CR_SVEN	(1 << 4)
#define TWI1_CR_SVDIS	(1 << 5)
#define TWI1_CR_QUICK	(1 << 6)
#define TWI1_CR_SWRST	(1 << 7)

#define TWI1_CR_s	MMIO_REG(0x4001c000, struct __struct_TWI1_CR)
struct __struct_TWI1_CR
{
  uint32_t start : 1;
  uint32_t stop : 1;
  uint32_t msen : 1;
  uint32_t msdis : 1;
  uint32_t sven : 1;
  uint32_t svdis : 1;
  uint32_t quick : 1;
  uint32_t swrst : 1;
  uint32_t  : 24;
};

#define TWI1_MMR	MMIO_REG(0x4001c004, uint32_t)
#define TWI1_MMR_IADRSZ(x)	((x) << 8)
#define TWI1_MMR_IADRSZ_MSK	0x00000300
#define TWI1_MMR_IADRSZ_VAL(x)	(((x) >> 8) & 0x3)
#define TWI1_MMR_MREAD	(1 << 12)
#define TWI1_MMR_DADDR(x)	((x) << 16)
#define TWI1_MMR_DADDR_MSK	0x007f0000
#define TWI1_MMR_DADDR_VAL(x)	(((x) >> 16) & 0x7f)

#define TWI1_MMR_s	MMIO_REG(0x4001c004, struct __struct_TWI1_MMR)
struct __struct_TWI1_MMR
{
  uint32_t  : 8;
  uint32_t iadrsz : 2;
  uint32_t  : 2;
  uint32_t mread : 1;
  uint32_t  : 3;
  uint32_t daddr : 7;
  uint32_t  : 9;
};

#define TWI1_SMR	MMIO_REG(0x4001c008, uint32_t)
#define TWI1_SMR_SADR(x)	((x) << 16)
#define TWI1_SMR_SADR_MSK	0x007f0000
#define TWI1_SMR_SADR_VAL(x)	(((x) >> 16) & 0x7f)

#define TWI1_SMR_s	MMIO_REG(0x4001c008, struct __struct_TWI1_SMR)
struct __struct_TWI1_SMR
{
  uint32_t  : 16;
  uint32_t sadr : 7;
  uint32_t  : 9;
};

#define TWI1_IADR	MMIO_REG(0x4001c00c, uint32_t)
#define TWI1_IADR_IADR(x)	((x) << 0)
#define TWI1_IADR_IADR_MSK	0x00ffffff
#define TWI1_IADR_IADR_VAL(x)	(((x) >> 0) & 0xffffff)

#define TWI1_IADR_s	MMIO_REG(0x4001c00c, struct __struct_TWI1_IADR)
struct __struct_TWI1_IADR
{
  uint32_t iadr : 24;
  uint32_t  : 8;
};

#define TWI1_CWGR	MMIO_REG(0x4001c010, uint32_t)
#define TWI1_CWGR_CLDIV(x)	((x) << 0)
#define TWI1_CWGR_CLDIV_MSK	0x000000ff
#define TWI1_CWGR_CLDIV_VAL(x)	(((x) >> 0) & 0xff)
#define TWI1_CWGR_CHDIV(x)	((x) << 8)
#define TWI1_CWGR_CHDIV_MSK	0x0000ff00
#define TWI1_CWGR_CHDIV_VAL(x)	(((x) >> 8) & 0xff)
#define TWI1_CWGR_CKDIV(x)	((x) << 16)
#define TWI1_CWGR_CKDIV_MSK	0x00070000
#define TWI1_CWGR_CKDIV_VAL(x)	(((x) >> 16) & 0x7)

#define TWI1_CWGR_s	MMIO_REG(0x4001c010, struct __struct_TWI1_CWGR)
struct __struct_TWI1_CWGR
{
  uint32_t cldiv : 8;
  uint32_t chdiv : 8;
  uint32_t ckdiv : 3;
  uint32_t  : 13;
};

#define TWI1_SR	MMIO_REG(0x4001c020, uint32_t)
#define TWI1_SR_TXCOMP	(1 << 0)
#define TWI1_SR_RXRDY	(1 << 1)
#define TWI1_SR_TXRDY	(1 << 2)
#define TWI1_SR_SVREAD	(1 << 3)
#define TWI1_SR_SVACC	(1 << 4)
#define TWI1_SR_GACC	(1 << 5)
#define TWI1_SR_OVRE	(1 << 6)
#define TWI1_SR_NACK	(1 << 8)
#define TWI1_SR_ARBLST	(1 << 9)
#define TWI1_SR_SCLWS	(1 << 10)
#define TWI1_SR_EOSACC	(1 << 11)
#define TWI1_SR_ENDRX	(1 << 12)
#define TWI1_SR_ENDTX	(1 << 13)
#define TWI1_SR_RXBUFF	(1 << 14)
#define TWI1_SR_TXBUFE	(1 << 15)

#define TWI1_SR_s	MMIO_REG(0x4001c020, struct __struct_TWI1_SR)
struct __struct_TWI1_SR
{
  uint32_t txcomp : 1;
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t svread : 1;
  uint32_t svacc : 1;
  uint32_t gacc : 1;
  uint32_t ovre : 1;
  uint32_t  : 1;
  uint32_t nack : 1;
  uint32_t arblst : 1;
  uint32_t sclws : 1;
  uint32_t eosacc : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t rxbuff : 1;
  uint32_t txbufe : 1;
  uint32_t  : 16;
};

#define TWI1_IER	MMIO_REG(0x4001c024, uint32_t)
#define TWI1_IER_TXCOMP	(1 << 0)
#define TWI1_IER_RXRDY	(1 << 1)
#define TWI1_IER_TXRDY	(1 << 2)
#define TWI1_IER_SVACC	(1 << 4)
#define TWI1_IER_GACC	(1 << 5)
#define TWI1_IER_OVRE	(1 << 6)
#define TWI1_IER_NACK	(1 << 8)
#define TWI1_IER_ARBLST	(1 << 9)
#define TWI1_IER_SCLWS	(1 << 10)
#define TWI1_IER_EOSACC	(1 << 11)
#define TWI1_IER_ENDRX	(1 << 12)
#define TWI1_IER_ENDTX	(1 << 13)
#define TWI1_IER_RXBUFF	(1 << 14)
#define TWI1_IER_TXBUFE	(1 << 15)

#define TWI1_IER_s	MMIO_REG(0x4001c024, struct __struct_TWI1_IER)
struct __struct_TWI1_IER
{
  uint32_t txcomp : 1;
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t svacc : 1;
  uint32_t gacc : 1;
  uint32_t ovre : 1;
  uint32_t  : 1;
  uint32_t nack : 1;
  uint32_t arblst : 1;
  uint32_t sclws : 1;
  uint32_t eosacc : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t rxbuff : 1;
  uint32_t txbufe : 1;
  uint32_t  : 16;
};

#define TWI1_IDR	MMIO_REG(0x4001c028, uint32_t)
#define TWI1_IDR_TXCOMP	(1 << 0)
#define TWI1_IDR_RXRDY	(1 << 1)
#define TWI1_IDR_TXRDY	(1 << 2)
#define TWI1_IDR_SVACC	(1 << 4)
#define TWI1_IDR_GACC	(1 << 5)
#define TWI1_IDR_OVRE	(1 << 6)
#define TWI1_IDR_NACK	(1 << 8)
#define TWI1_IDR_ARBLST	(1 << 9)
#define TWI1_IDR_SCLWS	(1 << 10)
#define TWI1_IDR_EOSACC	(1 << 11)
#define TWI1_IDR_ENDRX	(1 << 12)
#define TWI1_IDR_ENDTX	(1 << 13)
#define TWI1_IDR_RXBUFF	(1 << 14)
#define TWI1_IDR_TXBUFE	(1 << 15)

#define TWI1_IDR_s	MMIO_REG(0x4001c028, struct __struct_TWI1_IDR)
struct __struct_TWI1_IDR
{
  uint32_t txcomp : 1;
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t svacc : 1;
  uint32_t gacc : 1;
  uint32_t ovre : 1;
  uint32_t  : 1;
  uint32_t nack : 1;
  uint32_t arblst : 1;
  uint32_t sclws : 1;
  uint32_t eosacc : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t rxbuff : 1;
  uint32_t txbufe : 1;
  uint32_t  : 16;
};

#define TWI1_IMR	MMIO_REG(0x4001c02c, uint32_t)
#define TWI1_IMR_TXCOMP	(1 << 0)
#define TWI1_IMR_RXRDY	(1 << 1)
#define TWI1_IMR_TXRDY	(1 << 2)
#define TWI1_IMR_SVACC	(1 << 4)
#define TWI1_IMR_GACC	(1 << 5)
#define TWI1_IMR_OVRE	(1 << 6)
#define TWI1_IMR_NACK	(1 << 8)
#define TWI1_IMR_ARBLST	(1 << 9)
#define TWI1_IMR_SCLWS	(1 << 10)
#define TWI1_IMR_EOSACC	(1 << 11)
#define TWI1_IMR_ENDRX	(1 << 12)
#define TWI1_IMR_ENDTX	(1 << 13)
#define TWI1_IMR_RXBUFF	(1 << 14)
#define TWI1_IMR_TXBUFE	(1 << 15)

#define TWI1_IMR_s	MMIO_REG(0x4001c02c, struct __struct_TWI1_IMR)
struct __struct_TWI1_IMR
{
  uint32_t txcomp : 1;
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t svacc : 1;
  uint32_t gacc : 1;
  uint32_t ovre : 1;
  uint32_t  : 1;
  uint32_t nack : 1;
  uint32_t arblst : 1;
  uint32_t sclws : 1;
  uint32_t eosacc : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t rxbuff : 1;
  uint32_t txbufe : 1;
  uint32_t  : 16;
};

#define TWI1_RHR	MMIO_REG(0x4001c030, uint32_t)
#define TWI1_RHR_RXDATA(x)	((x) << 0)
#define TWI1_RHR_RXDATA_MSK	0x000000ff
#define TWI1_RHR_RXDATA_VAL(x)	(((x) >> 0) & 0xff)

#define TWI1_RHR_s	MMIO_REG(0x4001c030, struct __struct_TWI1_RHR)
struct __struct_TWI1_RHR
{
  uint32_t rxdata : 8;
  uint32_t  : 24;
};

#define TWI1_THR	MMIO_REG(0x4001c034, uint32_t)
#define TWI1_THR_TXDATA(x)	((x) << 0)
#define TWI1_THR_TXDATA_MSK	0x000000ff
#define TWI1_THR_TXDATA_VAL(x)	(((x) >> 0) & 0xff)

#define TWI1_THR_s	MMIO_REG(0x4001c034, struct __struct_TWI1_THR)
struct __struct_TWI1_THR
{
  uint32_t txdata : 8;
  uint32_t  : 24;
};

// 0x4001c100 TWI1_PDC

#define TWI1_PDC_RPR	MMIO_REG(0x4001c100, uint32_t)

#define TWI1_PDC_RCR	MMIO_REG(0x4001c104, uint32_t)

#define TWI1_PDC_TPR	MMIO_REG(0x4001c108, uint32_t)

#define TWI1_PDC_TCR	MMIO_REG(0x4001c10c, uint32_t)

#define TWI1_PDC_RNPR	MMIO_REG(0x4001c110, uint32_t)

#define TWI1_PDC_RNCR	MMIO_REG(0x4001c114, uint32_t)

#define TWI1_PDC_TNPR	MMIO_REG(0x4001c118, uint32_t)

#define TWI1_PDC_TNCR	MMIO_REG(0x4001c11c, uint32_t)

#define TWI1_PDC_PTCR	MMIO_REG(0x4001c120, uint32_t)
#define TWI1_PDC_PTCR_RXTEN	(1 << 0)
#define TWI1_PDC_PTCR_RXTDIS	(1 << 1)
#define TWI1_PDC_PTCR_TXTEN	(1 << 8)
#define TWI1_PDC_PTCR_TXTDIS	(1 << 9)

#define TWI1_PDC_PTCR_s	MMIO_REG(0x4001c120, struct __struct_TWI1_PDC_PTCR)
struct __struct_TWI1_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define TWI1_PDC_PTSR	MMIO_REG(0x4001c124, uint32_t)
#define TWI1_PDC_PTSR_RXTEN	(1 << 0)
#define TWI1_PDC_PTSR_TXTEN	(1 << 8)

#define TWI1_PDC_PTSR_s	MMIO_REG(0x4001c124, struct __struct_TWI1_PDC_PTSR)
struct __struct_TWI1_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x40020000 PWM

#define PWM_CLK	MMIO_REG(0x40020000, uint32_t)
#define PWM_CLK_DIVA(x)	((x) << 0)
#define PWM_CLK_DIVA_MSK	0x000000ff
#define PWM_CLK_DIVA_VAL(x)	(((x) >> 0) & 0xff)
#define PWM_CLK_PREA(x)	((x) << 8)
#define PWM_CLK_PREA_MSK	0x00000f00
#define PWM_CLK_PREA_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CLK_DIVB(x)	((x) << 16)
#define PWM_CLK_DIVB_MSK	0x00ff0000
#define PWM_CLK_DIVB_VAL(x)	(((x) >> 16) & 0xff)
#define PWM_CLK_PREB(x)	((x) << 24)
#define PWM_CLK_PREB_MSK	0x0f000000
#define PWM_CLK_PREB_VAL(x)	(((x) >> 24) & 0xf)

#define PWM_CLK_s	MMIO_REG(0x40020000, struct __struct_PWM_CLK)
struct __struct_PWM_CLK
{
  uint32_t diva : 8;
  uint32_t prea : 4;
  uint32_t  : 4;
  uint32_t divb : 8;
  uint32_t preb : 4;
  uint32_t  : 4;
};

#define PWM_ENA	MMIO_REG(0x40020004, uint32_t)
#define PWM_ENA_CHID0	(1 << 0)
#define PWM_ENA_CHID1	(1 << 1)
#define PWM_ENA_CHID2	(1 << 2)
#define PWM_ENA_CHID3	(1 << 3)

#define PWM_ENA_s	MMIO_REG(0x40020004, struct __struct_PWM_ENA)
struct __struct_PWM_ENA
{
  uint32_t chid0 : 1;
  uint32_t chid1 : 1;
  uint32_t chid2 : 1;
  uint32_t chid3 : 1;
  uint32_t  : 28;
};

#define PWM_DIS	MMIO_REG(0x40020008, uint32_t)
#define PWM_DIS_CHID0	(1 << 0)
#define PWM_DIS_CHID1	(1 << 1)
#define PWM_DIS_CHID2	(1 << 2)
#define PWM_DIS_CHID3	(1 << 3)

#define PWM_DIS_s	MMIO_REG(0x40020008, struct __struct_PWM_DIS)
struct __struct_PWM_DIS
{
  uint32_t chid0 : 1;
  uint32_t chid1 : 1;
  uint32_t chid2 : 1;
  uint32_t chid3 : 1;
  uint32_t  : 28;
};

#define PWM_SR	MMIO_REG(0x4002000c, uint32_t)
#define PWM_SR_CHID0	(1 << 0)
#define PWM_SR_CHID1	(1 << 1)
#define PWM_SR_CHID2	(1 << 2)
#define PWM_SR_CHID3	(1 << 3)

#define PWM_SR_s	MMIO_REG(0x4002000c, struct __struct_PWM_SR)
struct __struct_PWM_SR
{
  uint32_t chid0 : 1;
  uint32_t chid1 : 1;
  uint32_t chid2 : 1;
  uint32_t chid3 : 1;
  uint32_t  : 28;
};

#define PWM_IER1	MMIO_REG(0x40020010, uint32_t)
#define PWM_IER1_CHID0	(1 << 0)
#define PWM_IER1_CHID1	(1 << 1)
#define PWM_IER1_CHID2	(1 << 2)
#define PWM_IER1_CHID3	(1 << 3)
#define PWM_IER1_FCHID0	(1 << 16)
#define PWM_IER1_FCHID1	(1 << 17)
#define PWM_IER1_FCHID2	(1 << 18)
#define PWM_IER1_FCHID3	(1 << 19)

#define PWM_IER1_s	MMIO_REG(0x40020010, struct __struct_PWM_IER1)
struct __struct_PWM_IER1
{
  uint32_t chid0 : 1;
  uint32_t chid1 : 1;
  uint32_t chid2 : 1;
  uint32_t chid3 : 1;
  uint32_t  : 12;
  uint32_t fchid0 : 1;
  uint32_t fchid1 : 1;
  uint32_t fchid2 : 1;
  uint32_t fchid3 : 1;
  uint32_t  : 12;
};

#define PWM_IDR1	MMIO_REG(0x40020014, uint32_t)
#define PWM_IDR1_CHID0	(1 << 0)
#define PWM_IDR1_CHID1	(1 << 1)
#define PWM_IDR1_CHID2	(1 << 2)
#define PWM_IDR1_CHID3	(1 << 3)
#define PWM_IDR1_FCHID0	(1 << 16)
#define PWM_IDR1_FCHID1	(1 << 17)
#define PWM_IDR1_FCHID2	(1 << 18)
#define PWM_IDR1_FCHID3	(1 << 19)

#define PWM_IDR1_s	MMIO_REG(0x40020014, struct __struct_PWM_IDR1)
struct __struct_PWM_IDR1
{
  uint32_t chid0 : 1;
  uint32_t chid1 : 1;
  uint32_t chid2 : 1;
  uint32_t chid3 : 1;
  uint32_t  : 12;
  uint32_t fchid0 : 1;
  uint32_t fchid1 : 1;
  uint32_t fchid2 : 1;
  uint32_t fchid3 : 1;
  uint32_t  : 12;
};

#define PWM_IMR1	MMIO_REG(0x40020018, uint32_t)
#define PWM_IMR1_CHID0	(1 << 0)
#define PWM_IMR1_CHID1	(1 << 1)
#define PWM_IMR1_CHID2	(1 << 2)
#define PWM_IMR1_CHID3	(1 << 3)
#define PWM_IMR1_FCHID0	(1 << 16)
#define PWM_IMR1_FCHID1	(1 << 17)
#define PWM_IMR1_FCHID2	(1 << 18)
#define PWM_IMR1_FCHID3	(1 << 19)

#define PWM_IMR1_s	MMIO_REG(0x40020018, struct __struct_PWM_IMR1)
struct __struct_PWM_IMR1
{
  uint32_t chid0 : 1;
  uint32_t chid1 : 1;
  uint32_t chid2 : 1;
  uint32_t chid3 : 1;
  uint32_t  : 12;
  uint32_t fchid0 : 1;
  uint32_t fchid1 : 1;
  uint32_t fchid2 : 1;
  uint32_t fchid3 : 1;
  uint32_t  : 12;
};

#define PWM_ISR1	MMIO_REG(0x4002001c, uint32_t)
#define PWM_ISR1_CHID0	(1 << 0)
#define PWM_ISR1_CHID1	(1 << 1)
#define PWM_ISR1_CHID2	(1 << 2)
#define PWM_ISR1_CHID3	(1 << 3)
#define PWM_ISR1_FCHID0	(1 << 16)
#define PWM_ISR1_FCHID1	(1 << 17)
#define PWM_ISR1_FCHID2	(1 << 18)
#define PWM_ISR1_FCHID3	(1 << 19)

#define PWM_ISR1_s	MMIO_REG(0x4002001c, struct __struct_PWM_ISR1)
struct __struct_PWM_ISR1
{
  uint32_t chid0 : 1;
  uint32_t chid1 : 1;
  uint32_t chid2 : 1;
  uint32_t chid3 : 1;
  uint32_t  : 12;
  uint32_t fchid0 : 1;
  uint32_t fchid1 : 1;
  uint32_t fchid2 : 1;
  uint32_t fchid3 : 1;
  uint32_t  : 12;
};

#define PWM_SCM	MMIO_REG(0x40020020, uint32_t)
#define PWM_SCM_SYNC0	(1 << 0)
#define PWM_SCM_SYNC1	(1 << 1)
#define PWM_SCM_SYNC2	(1 << 2)
#define PWM_SCM_SYNC3	(1 << 3)
#define PWM_SCM_UPDM(x)	((x) << 16)
#define PWM_SCM_UPDM_MSK	0x00030000
#define PWM_SCM_UPDM_VAL(x)	(((x) >> 16) & 0x3)
#define PWM_SCM_PTRM	(1 << 20)
#define PWM_SCM_PTRCS(x)	((x) << 21)
#define PWM_SCM_PTRCS_MSK	0x00e00000
#define PWM_SCM_PTRCS_VAL(x)	(((x) >> 21) & 0x7)

#define PWM_SCM_s	MMIO_REG(0x40020020, struct __struct_PWM_SCM)
struct __struct_PWM_SCM
{
  uint32_t sync0 : 1;
  uint32_t sync1 : 1;
  uint32_t sync2 : 1;
  uint32_t sync3 : 1;
  uint32_t  : 12;
  uint32_t updm : 2;
  uint32_t  : 2;
  uint32_t ptrm : 1;
  uint32_t ptrcs : 3;
  uint32_t  : 8;
};

#define PWM_SCUC	MMIO_REG(0x40020028, uint32_t)
#define PWM_SCUC_UPDULOCK	(1 << 0)

#define PWM_SCUC_s	MMIO_REG(0x40020028, struct __struct_PWM_SCUC)
struct __struct_PWM_SCUC
{
  uint32_t updulock : 1;
  uint32_t  : 31;
};

#define PWM_SCUP	MMIO_REG(0x4002002c, uint32_t)
#define PWM_SCUP_UPR(x)	((x) << 0)
#define PWM_SCUP_UPR_MSK	0x0000000f
#define PWM_SCUP_UPR_VAL(x)	(((x) >> 0) & 0xf)
#define PWM_SCUP_UPRCNT(x)	((x) << 4)
#define PWM_SCUP_UPRCNT_MSK	0x000000f0
#define PWM_SCUP_UPRCNT_VAL(x)	(((x) >> 4) & 0xf)

#define PWM_SCUP_s	MMIO_REG(0x4002002c, struct __struct_PWM_SCUP)
struct __struct_PWM_SCUP
{
  uint32_t upr : 4;
  uint32_t uprcnt : 4;
  uint32_t  : 24;
};

#define PWM_SCUPUPD	MMIO_REG(0x40020030, uint32_t)
#define PWM_SCUPUPD_UPRUPD(x)	((x) << 0)
#define PWM_SCUPUPD_UPRUPD_MSK	0x0000000f
#define PWM_SCUPUPD_UPRUPD_VAL(x)	(((x) >> 0) & 0xf)

#define PWM_SCUPUPD_s	MMIO_REG(0x40020030, struct __struct_PWM_SCUPUPD)
struct __struct_PWM_SCUPUPD
{
  uint32_t uprupd : 4;
  uint32_t  : 28;
};

#define PWM_IER2	MMIO_REG(0x40020034, uint32_t)
#define PWM_IER2_WRDY	(1 << 0)
#define PWM_IER2_ENDTX	(1 << 1)
#define PWM_IER2_TXBUFE	(1 << 2)
#define PWM_IER2_UNRE	(1 << 3)
#define PWM_IER2_CMPM0	(1 << 8)
#define PWM_IER2_CMPM1	(1 << 9)
#define PWM_IER2_CMPM2	(1 << 10)
#define PWM_IER2_CMPM3	(1 << 11)
#define PWM_IER2_CMPM4	(1 << 12)
#define PWM_IER2_CMPM5	(1 << 13)
#define PWM_IER2_CMPM6	(1 << 14)
#define PWM_IER2_CMPM7	(1 << 15)
#define PWM_IER2_CMPU0	(1 << 16)
#define PWM_IER2_CMPU1	(1 << 17)
#define PWM_IER2_CMPU2	(1 << 18)
#define PWM_IER2_CMPU3	(1 << 19)
#define PWM_IER2_CMPU4	(1 << 20)
#define PWM_IER2_CMPU5	(1 << 21)
#define PWM_IER2_CMPU6	(1 << 22)
#define PWM_IER2_CMPU7	(1 << 23)

#define PWM_IER2_s	MMIO_REG(0x40020034, struct __struct_PWM_IER2)
struct __struct_PWM_IER2
{
  uint32_t wrdy : 1;
  uint32_t endtx : 1;
  uint32_t txbufe : 1;
  uint32_t unre : 1;
  uint32_t  : 4;
  uint32_t cmpm0 : 1;
  uint32_t cmpm1 : 1;
  uint32_t cmpm2 : 1;
  uint32_t cmpm3 : 1;
  uint32_t cmpm4 : 1;
  uint32_t cmpm5 : 1;
  uint32_t cmpm6 : 1;
  uint32_t cmpm7 : 1;
  uint32_t cmpu0 : 1;
  uint32_t cmpu1 : 1;
  uint32_t cmpu2 : 1;
  uint32_t cmpu3 : 1;
  uint32_t cmpu4 : 1;
  uint32_t cmpu5 : 1;
  uint32_t cmpu6 : 1;
  uint32_t cmpu7 : 1;
  uint32_t  : 8;
};

#define PWM_IDR2	MMIO_REG(0x40020038, uint32_t)
#define PWM_IDR2_WRDY	(1 << 0)
#define PWM_IDR2_ENDTX	(1 << 1)
#define PWM_IDR2_TXBUFE	(1 << 2)
#define PWM_IDR2_UNRE	(1 << 3)
#define PWM_IDR2_CMPM0	(1 << 8)
#define PWM_IDR2_CMPM1	(1 << 9)
#define PWM_IDR2_CMPM2	(1 << 10)
#define PWM_IDR2_CMPM3	(1 << 11)
#define PWM_IDR2_CMPM4	(1 << 12)
#define PWM_IDR2_CMPM5	(1 << 13)
#define PWM_IDR2_CMPM6	(1 << 14)
#define PWM_IDR2_CMPM7	(1 << 15)
#define PWM_IDR2_CMPU0	(1 << 16)
#define PWM_IDR2_CMPU1	(1 << 17)
#define PWM_IDR2_CMPU2	(1 << 18)
#define PWM_IDR2_CMPU3	(1 << 19)
#define PWM_IDR2_CMPU4	(1 << 20)
#define PWM_IDR2_CMPU5	(1 << 21)
#define PWM_IDR2_CMPU6	(1 << 22)
#define PWM_IDR2_CMPU7	(1 << 23)

#define PWM_IDR2_s	MMIO_REG(0x40020038, struct __struct_PWM_IDR2)
struct __struct_PWM_IDR2
{
  uint32_t wrdy : 1;
  uint32_t endtx : 1;
  uint32_t txbufe : 1;
  uint32_t unre : 1;
  uint32_t  : 4;
  uint32_t cmpm0 : 1;
  uint32_t cmpm1 : 1;
  uint32_t cmpm2 : 1;
  uint32_t cmpm3 : 1;
  uint32_t cmpm4 : 1;
  uint32_t cmpm5 : 1;
  uint32_t cmpm6 : 1;
  uint32_t cmpm7 : 1;
  uint32_t cmpu0 : 1;
  uint32_t cmpu1 : 1;
  uint32_t cmpu2 : 1;
  uint32_t cmpu3 : 1;
  uint32_t cmpu4 : 1;
  uint32_t cmpu5 : 1;
  uint32_t cmpu6 : 1;
  uint32_t cmpu7 : 1;
  uint32_t  : 8;
};

#define PWM_IMR2	MMIO_REG(0x4002003c, uint32_t)
#define PWM_IMR2_WRDY	(1 << 0)
#define PWM_IMR2_ENDTX	(1 << 1)
#define PWM_IMR2_TXBUFE	(1 << 2)
#define PWM_IMR2_UNRE	(1 << 3)
#define PWM_IMR2_CMPM0	(1 << 8)
#define PWM_IMR2_CMPM1	(1 << 9)
#define PWM_IMR2_CMPM2	(1 << 10)
#define PWM_IMR2_CMPM3	(1 << 11)
#define PWM_IMR2_CMPM4	(1 << 12)
#define PWM_IMR2_CMPM5	(1 << 13)
#define PWM_IMR2_CMPM6	(1 << 14)
#define PWM_IMR2_CMPM7	(1 << 15)
#define PWM_IMR2_CMPU0	(1 << 16)
#define PWM_IMR2_CMPU1	(1 << 17)
#define PWM_IMR2_CMPU2	(1 << 18)
#define PWM_IMR2_CMPU3	(1 << 19)
#define PWM_IMR2_CMPU4	(1 << 20)
#define PWM_IMR2_CMPU5	(1 << 21)
#define PWM_IMR2_CMPU6	(1 << 22)
#define PWM_IMR2_CMPU7	(1 << 23)

#define PWM_IMR2_s	MMIO_REG(0x4002003c, struct __struct_PWM_IMR2)
struct __struct_PWM_IMR2
{
  uint32_t wrdy : 1;
  uint32_t endtx : 1;
  uint32_t txbufe : 1;
  uint32_t unre : 1;
  uint32_t  : 4;
  uint32_t cmpm0 : 1;
  uint32_t cmpm1 : 1;
  uint32_t cmpm2 : 1;
  uint32_t cmpm3 : 1;
  uint32_t cmpm4 : 1;
  uint32_t cmpm5 : 1;
  uint32_t cmpm6 : 1;
  uint32_t cmpm7 : 1;
  uint32_t cmpu0 : 1;
  uint32_t cmpu1 : 1;
  uint32_t cmpu2 : 1;
  uint32_t cmpu3 : 1;
  uint32_t cmpu4 : 1;
  uint32_t cmpu5 : 1;
  uint32_t cmpu6 : 1;
  uint32_t cmpu7 : 1;
  uint32_t  : 8;
};

#define PWM_ISR2	MMIO_REG(0x40020040, uint32_t)
#define PWM_ISR2_WRDY	(1 << 0)
#define PWM_ISR2_ENDTX	(1 << 1)
#define PWM_ISR2_TXBUFE	(1 << 2)
#define PWM_ISR2_UNRE	(1 << 3)
#define PWM_ISR2_CMPM0	(1 << 8)
#define PWM_ISR2_CMPM1	(1 << 9)
#define PWM_ISR2_CMPM2	(1 << 10)
#define PWM_ISR2_CMPM3	(1 << 11)
#define PWM_ISR2_CMPM4	(1 << 12)
#define PWM_ISR2_CMPM5	(1 << 13)
#define PWM_ISR2_CMPM6	(1 << 14)
#define PWM_ISR2_CMPM7	(1 << 15)
#define PWM_ISR2_CMPU0	(1 << 16)
#define PWM_ISR2_CMPU1	(1 << 17)
#define PWM_ISR2_CMPU2	(1 << 18)
#define PWM_ISR2_CMPU3	(1 << 19)
#define PWM_ISR2_CMPU4	(1 << 20)
#define PWM_ISR2_CMPU5	(1 << 21)
#define PWM_ISR2_CMPU6	(1 << 22)
#define PWM_ISR2_CMPU7	(1 << 23)

#define PWM_ISR2_s	MMIO_REG(0x40020040, struct __struct_PWM_ISR2)
struct __struct_PWM_ISR2
{
  uint32_t wrdy : 1;
  uint32_t endtx : 1;
  uint32_t txbufe : 1;
  uint32_t unre : 1;
  uint32_t  : 4;
  uint32_t cmpm0 : 1;
  uint32_t cmpm1 : 1;
  uint32_t cmpm2 : 1;
  uint32_t cmpm3 : 1;
  uint32_t cmpm4 : 1;
  uint32_t cmpm5 : 1;
  uint32_t cmpm6 : 1;
  uint32_t cmpm7 : 1;
  uint32_t cmpu0 : 1;
  uint32_t cmpu1 : 1;
  uint32_t cmpu2 : 1;
  uint32_t cmpu3 : 1;
  uint32_t cmpu4 : 1;
  uint32_t cmpu5 : 1;
  uint32_t cmpu6 : 1;
  uint32_t cmpu7 : 1;
  uint32_t  : 8;
};

#define PWM_OOV	MMIO_REG(0x40020044, uint32_t)
#define PWM_OOV_OOVH0	(1 << 0)
#define PWM_OOV_OOVH1	(1 << 1)
#define PWM_OOV_OOVH2	(1 << 2)
#define PWM_OOV_OOVH3	(1 << 3)
#define PWM_OOV_OOVL0	(1 << 16)
#define PWM_OOV_OOVL1	(1 << 17)
#define PWM_OOV_OOVL2	(1 << 18)
#define PWM_OOV_OOVL3	(1 << 19)

#define PWM_OOV_s	MMIO_REG(0x40020044, struct __struct_PWM_OOV)
struct __struct_PWM_OOV
{
  uint32_t oovh0 : 1;
  uint32_t oovh1 : 1;
  uint32_t oovh2 : 1;
  uint32_t oovh3 : 1;
  uint32_t  : 12;
  uint32_t oovl0 : 1;
  uint32_t oovl1 : 1;
  uint32_t oovl2 : 1;
  uint32_t oovl3 : 1;
  uint32_t  : 12;
};

#define PWM_OS	MMIO_REG(0x40020048, uint32_t)
#define PWM_OS_OSH0	(1 << 0)
#define PWM_OS_OSH1	(1 << 1)
#define PWM_OS_OSH2	(1 << 2)
#define PWM_OS_OSH3	(1 << 3)
#define PWM_OS_OSL0	(1 << 16)
#define PWM_OS_OSL1	(1 << 17)
#define PWM_OS_OSL2	(1 << 18)
#define PWM_OS_OSL3	(1 << 19)

#define PWM_OS_s	MMIO_REG(0x40020048, struct __struct_PWM_OS)
struct __struct_PWM_OS
{
  uint32_t osh0 : 1;
  uint32_t osh1 : 1;
  uint32_t osh2 : 1;
  uint32_t osh3 : 1;
  uint32_t  : 12;
  uint32_t osl0 : 1;
  uint32_t osl1 : 1;
  uint32_t osl2 : 1;
  uint32_t osl3 : 1;
  uint32_t  : 12;
};

#define PWM_OSS	MMIO_REG(0x4002004c, uint32_t)
#define PWM_OSS_OSSH0	(1 << 0)
#define PWM_OSS_OSSH1	(1 << 1)
#define PWM_OSS_OSSH2	(1 << 2)
#define PWM_OSS_OSSH3	(1 << 3)
#define PWM_OSS_OSSL0	(1 << 16)
#define PWM_OSS_OSSL1	(1 << 17)
#define PWM_OSS_OSSL2	(1 << 18)
#define PWM_OSS_OSSL3	(1 << 19)

#define PWM_OSS_s	MMIO_REG(0x4002004c, struct __struct_PWM_OSS)
struct __struct_PWM_OSS
{
  uint32_t ossh0 : 1;
  uint32_t ossh1 : 1;
  uint32_t ossh2 : 1;
  uint32_t ossh3 : 1;
  uint32_t  : 12;
  uint32_t ossl0 : 1;
  uint32_t ossl1 : 1;
  uint32_t ossl2 : 1;
  uint32_t ossl3 : 1;
  uint32_t  : 12;
};

#define PWM_OSC	MMIO_REG(0x40020050, uint32_t)
#define PWM_OSC_OSCH0	(1 << 0)
#define PWM_OSC_OSCH1	(1 << 1)
#define PWM_OSC_OSCH2	(1 << 2)
#define PWM_OSC_OSCH3	(1 << 3)
#define PWM_OSC_OSCL0	(1 << 16)
#define PWM_OSC_OSCL1	(1 << 17)
#define PWM_OSC_OSCL2	(1 << 18)
#define PWM_OSC_OSCL3	(1 << 19)

#define PWM_OSC_s	MMIO_REG(0x40020050, struct __struct_PWM_OSC)
struct __struct_PWM_OSC
{
  uint32_t osch0 : 1;
  uint32_t osch1 : 1;
  uint32_t osch2 : 1;
  uint32_t osch3 : 1;
  uint32_t  : 12;
  uint32_t oscl0 : 1;
  uint32_t oscl1 : 1;
  uint32_t oscl2 : 1;
  uint32_t oscl3 : 1;
  uint32_t  : 12;
};

#define PWM_OSSUPD	MMIO_REG(0x40020054, uint32_t)
#define PWM_OSSUPD_OSSUPH0	(1 << 0)
#define PWM_OSSUPD_OSSUPH1	(1 << 1)
#define PWM_OSSUPD_OSSUPH2	(1 << 2)
#define PWM_OSSUPD_OSSUPH3	(1 << 3)
#define PWM_OSSUPD_OSSUPL0	(1 << 16)
#define PWM_OSSUPD_OSSUPL1	(1 << 17)
#define PWM_OSSUPD_OSSUPL2	(1 << 18)
#define PWM_OSSUPD_OSSUPL3	(1 << 19)

#define PWM_OSSUPD_s	MMIO_REG(0x40020054, struct __struct_PWM_OSSUPD)
struct __struct_PWM_OSSUPD
{
  uint32_t ossuph0 : 1;
  uint32_t ossuph1 : 1;
  uint32_t ossuph2 : 1;
  uint32_t ossuph3 : 1;
  uint32_t  : 12;
  uint32_t ossupl0 : 1;
  uint32_t ossupl1 : 1;
  uint32_t ossupl2 : 1;
  uint32_t ossupl3 : 1;
  uint32_t  : 12;
};

#define PWM_OSCUPD	MMIO_REG(0x40020058, uint32_t)
#define PWM_OSCUPD_OSCUPH0	(1 << 0)
#define PWM_OSCUPD_OSCUPH1	(1 << 1)
#define PWM_OSCUPD_OSCUPH2	(1 << 2)
#define PWM_OSCUPD_OSCUPH3	(1 << 3)
#define PWM_OSCUPD_OSCUPL0	(1 << 16)
#define PWM_OSCUPD_OSCUPL1	(1 << 17)
#define PWM_OSCUPD_OSCUPL2	(1 << 18)
#define PWM_OSCUPD_OSCUPL3	(1 << 19)

#define PWM_OSCUPD_s	MMIO_REG(0x40020058, struct __struct_PWM_OSCUPD)
struct __struct_PWM_OSCUPD
{
  uint32_t oscuph0 : 1;
  uint32_t oscuph1 : 1;
  uint32_t oscuph2 : 1;
  uint32_t oscuph3 : 1;
  uint32_t  : 12;
  uint32_t oscupl0 : 1;
  uint32_t oscupl1 : 1;
  uint32_t oscupl2 : 1;
  uint32_t oscupl3 : 1;
  uint32_t  : 12;
};

#define PWM_FMR	MMIO_REG(0x4002005c, uint32_t)
#define PWM_FMR_FPOL(x)	((x) << 0)
#define PWM_FMR_FPOL_MSK	0x000000ff
#define PWM_FMR_FPOL_VAL(x)	(((x) >> 0) & 0xff)
#define PWM_FMR_FMOD(x)	((x) << 8)
#define PWM_FMR_FMOD_MSK	0x0000ff00
#define PWM_FMR_FMOD_VAL(x)	(((x) >> 8) & 0xff)
#define PWM_FMR_FFIL(x)	((x) << 16)
#define PWM_FMR_FFIL_MSK	0x00ff0000
#define PWM_FMR_FFIL_VAL(x)	(((x) >> 16) & 0xff)

#define PWM_FMR_s	MMIO_REG(0x4002005c, struct __struct_PWM_FMR)
struct __struct_PWM_FMR
{
  uint32_t fpol : 8;
  uint32_t fmod : 8;
  uint32_t ffil : 8;
  uint32_t  : 8;
};

#define PWM_FSR	MMIO_REG(0x40020060, uint32_t)
#define PWM_FSR_FIV(x)	((x) << 0)
#define PWM_FSR_FIV_MSK	0x000000ff
#define PWM_FSR_FIV_VAL(x)	(((x) >> 0) & 0xff)
#define PWM_FSR_FS(x)	((x) << 8)
#define PWM_FSR_FS_MSK	0x0000ff00
#define PWM_FSR_FS_VAL(x)	(((x) >> 8) & 0xff)

#define PWM_FSR_s	MMIO_REG(0x40020060, struct __struct_PWM_FSR)
struct __struct_PWM_FSR
{
  uint32_t fiv : 8;
  uint32_t fs : 8;
  uint32_t  : 16;
};

#define PWM_FCR	MMIO_REG(0x40020064, uint32_t)
#define PWM_FCR_FCLR(x)	((x) << 0)
#define PWM_FCR_FCLR_MSK	0x000000ff
#define PWM_FCR_FCLR_VAL(x)	(((x) >> 0) & 0xff)

#define PWM_FCR_s	MMIO_REG(0x40020064, struct __struct_PWM_FCR)
struct __struct_PWM_FCR
{
  uint32_t fclr : 8;
  uint32_t  : 24;
};

#define PWM_FPV	MMIO_REG(0x40020068, uint32_t)
#define PWM_FPV_FPVH0	(1 << 0)
#define PWM_FPV_FPVH1	(1 << 1)
#define PWM_FPV_FPVH2	(1 << 2)
#define PWM_FPV_FPVH3	(1 << 3)
#define PWM_FPV_FPVL0	(1 << 16)
#define PWM_FPV_FPVL1	(1 << 17)
#define PWM_FPV_FPVL2	(1 << 18)
#define PWM_FPV_FPVL3	(1 << 19)

#define PWM_FPV_s	MMIO_REG(0x40020068, struct __struct_PWM_FPV)
struct __struct_PWM_FPV
{
  uint32_t fpvh0 : 1;
  uint32_t fpvh1 : 1;
  uint32_t fpvh2 : 1;
  uint32_t fpvh3 : 1;
  uint32_t  : 12;
  uint32_t fpvl0 : 1;
  uint32_t fpvl1 : 1;
  uint32_t fpvl2 : 1;
  uint32_t fpvl3 : 1;
  uint32_t  : 12;
};

#define PWM_FPE	MMIO_REG(0x4002006c, uint32_t)
#define PWM_FPE_FPE0(x)	((x) << 0)
#define PWM_FPE_FPE0_MSK	0x000000ff
#define PWM_FPE_FPE0_VAL(x)	(((x) >> 0) & 0xff)
#define PWM_FPE_FPE1(x)	((x) << 8)
#define PWM_FPE_FPE1_MSK	0x0000ff00
#define PWM_FPE_FPE1_VAL(x)	(((x) >> 8) & 0xff)
#define PWM_FPE_FPE2(x)	((x) << 16)
#define PWM_FPE_FPE2_MSK	0x00ff0000
#define PWM_FPE_FPE2_VAL(x)	(((x) >> 16) & 0xff)
#define PWM_FPE_FPE3(x)	((x) << 24)
#define PWM_FPE_FPE3_MSK	0xff000000
#define PWM_FPE_FPE3_VAL(x)	(((x) >> 24) & 0xff)

#define PWM_FPE_s	MMIO_REG(0x4002006c, struct __struct_PWM_FPE)
struct __struct_PWM_FPE
{
  uint32_t fpe0 : 8;
  uint32_t fpe1 : 8;
  uint32_t fpe2 : 8;
  uint32_t fpe3 : 8;
};

#define PWM_ELMR0	MMIO_REG(0x4002007c, uint32_t)
#define PWM_ELMR0_CSEL0	(1 << 0)
#define PWM_ELMR0_CSEL1	(1 << 1)
#define PWM_ELMR0_CSEL2	(1 << 2)
#define PWM_ELMR0_CSEL3	(1 << 3)
#define PWM_ELMR0_CSEL4	(1 << 4)
#define PWM_ELMR0_CSEL5	(1 << 5)
#define PWM_ELMR0_CSEL6	(1 << 6)
#define PWM_ELMR0_CSEL7	(1 << 7)

#define PWM_ELMR0_s	MMIO_REG(0x4002007c, struct __struct_PWM_ELMR0)
struct __struct_PWM_ELMR0
{
  uint32_t csel0 : 1;
  uint32_t csel1 : 1;
  uint32_t csel2 : 1;
  uint32_t csel3 : 1;
  uint32_t csel4 : 1;
  uint32_t csel5 : 1;
  uint32_t csel6 : 1;
  uint32_t csel7 : 1;
  uint32_t  : 24;
};

#define PWM_ELMR1	MMIO_REG(0x40020080, uint32_t)
#define PWM_ELMR1_CSEL0	(1 << 0)
#define PWM_ELMR1_CSEL1	(1 << 1)
#define PWM_ELMR1_CSEL2	(1 << 2)
#define PWM_ELMR1_CSEL3	(1 << 3)
#define PWM_ELMR1_CSEL4	(1 << 4)
#define PWM_ELMR1_CSEL5	(1 << 5)
#define PWM_ELMR1_CSEL6	(1 << 6)
#define PWM_ELMR1_CSEL7	(1 << 7)

#define PWM_ELMR1_s	MMIO_REG(0x40020080, struct __struct_PWM_ELMR1)
struct __struct_PWM_ELMR1
{
  uint32_t csel0 : 1;
  uint32_t csel1 : 1;
  uint32_t csel2 : 1;
  uint32_t csel3 : 1;
  uint32_t csel4 : 1;
  uint32_t csel5 : 1;
  uint32_t csel6 : 1;
  uint32_t csel7 : 1;
  uint32_t  : 24;
};

#define PWM_SMMR	MMIO_REG(0x400200b0, uint32_t)
#define PWM_SMMR_GCEN0	(1 << 0)
#define PWM_SMMR_GCEN1	(1 << 1)
#define PWM_SMMR_DOWN0	(1 << 16)
#define PWM_SMMR_DOWN1	(1 << 17)

#define PWM_SMMR_s	MMIO_REG(0x400200b0, struct __struct_PWM_SMMR)
struct __struct_PWM_SMMR
{
  uint32_t gcen0 : 1;
  uint32_t gcen1 : 1;
  uint32_t  : 14;
  uint32_t down0 : 1;
  uint32_t down1 : 1;
  uint32_t  : 14;
};

#define PWM_WPCR	MMIO_REG(0x400200e4, uint32_t)
#define PWM_WPCR_WPCMD(x)	((x) << 0)
#define PWM_WPCR_WPCMD_MSK	0x00000003
#define PWM_WPCR_WPCMD_VAL(x)	(((x) >> 0) & 0x3)
#define PWM_WPCR_WPRG0	(1 << 2)
#define PWM_WPCR_WPRG1	(1 << 3)
#define PWM_WPCR_WPRG2	(1 << 4)
#define PWM_WPCR_WPRG3	(1 << 5)
#define PWM_WPCR_WPRG4	(1 << 6)
#define PWM_WPCR_WPRG5	(1 << 7)
#define PWM_WPCR_WPKEY(x)	((x) << 8)
#define PWM_WPCR_WPKEY_MSK	0xffffff00
#define PWM_WPCR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define PWM_WPCR_s	MMIO_REG(0x400200e4, struct __struct_PWM_WPCR)
struct __struct_PWM_WPCR
{
  uint32_t wpcmd : 2;
  uint32_t wprg0 : 1;
  uint32_t wprg1 : 1;
  uint32_t wprg2 : 1;
  uint32_t wprg3 : 1;
  uint32_t wprg4 : 1;
  uint32_t wprg5 : 1;
  uint32_t wpkey : 24;
};

#define PWM_WPSR	MMIO_REG(0x400200e8, uint32_t)
#define PWM_WPSR_WPSWS0	(1 << 0)
#define PWM_WPSR_WPSWS1	(1 << 1)
#define PWM_WPSR_WPSWS2	(1 << 2)
#define PWM_WPSR_WPSWS3	(1 << 3)
#define PWM_WPSR_WPSWS4	(1 << 4)
#define PWM_WPSR_WPSWS5	(1 << 5)
#define PWM_WPSR_WPVS	(1 << 7)
#define PWM_WPSR_WPHWS0	(1 << 8)
#define PWM_WPSR_WPHWS1	(1 << 9)
#define PWM_WPSR_WPHWS2	(1 << 10)
#define PWM_WPSR_WPHWS3	(1 << 11)
#define PWM_WPSR_WPHWS4	(1 << 12)
#define PWM_WPSR_WPHWS5	(1 << 13)
#define PWM_WPSR_WPVSRC(x)	((x) << 16)
#define PWM_WPSR_WPVSRC_MSK	0xffff0000
#define PWM_WPSR_WPVSRC_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_WPSR_s	MMIO_REG(0x400200e8, struct __struct_PWM_WPSR)
struct __struct_PWM_WPSR
{
  uint32_t wpsws0 : 1;
  uint32_t wpsws1 : 1;
  uint32_t wpsws2 : 1;
  uint32_t wpsws3 : 1;
  uint32_t wpsws4 : 1;
  uint32_t wpsws5 : 1;
  uint32_t  : 1;
  uint32_t wpvs : 1;
  uint32_t wphws0 : 1;
  uint32_t wphws1 : 1;
  uint32_t wphws2 : 1;
  uint32_t wphws3 : 1;
  uint32_t wphws4 : 1;
  uint32_t wphws5 : 1;
  uint32_t  : 2;
  uint32_t wpvsrc : 16;
};

#define PWM_CMPV0	MMIO_REG(0x40020130, uint32_t)
#define PWM_CMPV0_CV(x)	((x) << 0)
#define PWM_CMPV0_CV_MSK	0x00ffffff
#define PWM_CMPV0_CV_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV0_CVM	(1 << 24)

#define PWM_CMPV0_s	MMIO_REG(0x40020130, struct __struct_PWM_CMPV0)
struct __struct_PWM_CMPV0
{
  uint32_t cv : 24;
  uint32_t cvm : 1;
  uint32_t  : 7;
};

#define PWM_CMPVUPD0	MMIO_REG(0x40020134, uint32_t)
#define PWM_CMPVUPD0_CVUPD(x)	((x) << 0)
#define PWM_CMPVUPD0_CVUPD_MSK	0x00ffffff
#define PWM_CMPVUPD0_CVUPD_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD0_CVMUPD	(1 << 24)

#define PWM_CMPVUPD0_s	MMIO_REG(0x40020134, struct __struct_PWM_CMPVUPD0)
struct __struct_PWM_CMPVUPD0
{
  uint32_t cvupd : 24;
  uint32_t cvmupd : 1;
  uint32_t  : 7;
};

#define PWM_CMPM0	MMIO_REG(0x40020138, uint32_t)
#define PWM_CMPM0_CEN	(1 << 0)
#define PWM_CMPM0_CTR(x)	((x) << 4)
#define PWM_CMPM0_CTR_MSK	0x000000f0
#define PWM_CMPM0_CTR_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM0_CPR(x)	((x) << 8)
#define PWM_CMPM0_CPR_MSK	0x00000f00
#define PWM_CMPM0_CPR_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM0_CPRCNT(x)	((x) << 12)
#define PWM_CMPM0_CPRCNT_MSK	0x0000f000
#define PWM_CMPM0_CPRCNT_VAL(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM0_CUPR(x)	((x) << 16)
#define PWM_CMPM0_CUPR_MSK	0x000f0000
#define PWM_CMPM0_CUPR_VAL(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM0_CUPRCNT(x)	((x) << 20)
#define PWM_CMPM0_CUPRCNT_MSK	0x00f00000
#define PWM_CMPM0_CUPRCNT_VAL(x)	(((x) >> 20) & 0xf)

#define PWM_CMPM0_s	MMIO_REG(0x40020138, struct __struct_PWM_CMPM0)
struct __struct_PWM_CMPM0
{
  uint32_t cen : 1;
  uint32_t  : 3;
  uint32_t ctr : 4;
  uint32_t cpr : 4;
  uint32_t cprcnt : 4;
  uint32_t cupr : 4;
  uint32_t cuprcnt : 4;
  uint32_t  : 8;
};

#define PWM_CMPMUPD0	MMIO_REG(0x4002013c, uint32_t)
#define PWM_CMPMUPD0_CENUPD	(1 << 0)
#define PWM_CMPMUPD0_CTRUPD(x)	((x) << 4)
#define PWM_CMPMUPD0_CTRUPD_MSK	0x000000f0
#define PWM_CMPMUPD0_CTRUPD_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD0_CPRUPD(x)	((x) << 8)
#define PWM_CMPMUPD0_CPRUPD_MSK	0x00000f00
#define PWM_CMPMUPD0_CPRUPD_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD0_CUPRUPD(x)	((x) << 16)
#define PWM_CMPMUPD0_CUPRUPD_MSK	0x000f0000
#define PWM_CMPMUPD0_CUPRUPD_VAL(x)	(((x) >> 16) & 0xf)

#define PWM_CMPMUPD0_s	MMIO_REG(0x4002013c, struct __struct_PWM_CMPMUPD0)
struct __struct_PWM_CMPMUPD0
{
  uint32_t cenupd : 1;
  uint32_t  : 3;
  uint32_t ctrupd : 4;
  uint32_t cprupd : 4;
  uint32_t  : 4;
  uint32_t cuprupd : 4;
  uint32_t  : 12;
};

#define PWM_CMPV1	MMIO_REG(0x40020140, uint32_t)
#define PWM_CMPV1_CV(x)	((x) << 0)
#define PWM_CMPV1_CV_MSK	0x00ffffff
#define PWM_CMPV1_CV_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV1_CVM	(1 << 24)

#define PWM_CMPV1_s	MMIO_REG(0x40020140, struct __struct_PWM_CMPV1)
struct __struct_PWM_CMPV1
{
  uint32_t cv : 24;
  uint32_t cvm : 1;
  uint32_t  : 7;
};

#define PWM_CMPVUPD1	MMIO_REG(0x40020144, uint32_t)
#define PWM_CMPVUPD1_CVUPD(x)	((x) << 0)
#define PWM_CMPVUPD1_CVUPD_MSK	0x00ffffff
#define PWM_CMPVUPD1_CVUPD_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD1_CVMUPD	(1 << 24)

#define PWM_CMPVUPD1_s	MMIO_REG(0x40020144, struct __struct_PWM_CMPVUPD1)
struct __struct_PWM_CMPVUPD1
{
  uint32_t cvupd : 24;
  uint32_t cvmupd : 1;
  uint32_t  : 7;
};

#define PWM_CMPM1	MMIO_REG(0x40020148, uint32_t)
#define PWM_CMPM1_CEN	(1 << 0)
#define PWM_CMPM1_CTR(x)	((x) << 4)
#define PWM_CMPM1_CTR_MSK	0x000000f0
#define PWM_CMPM1_CTR_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM1_CPR(x)	((x) << 8)
#define PWM_CMPM1_CPR_MSK	0x00000f00
#define PWM_CMPM1_CPR_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM1_CPRCNT(x)	((x) << 12)
#define PWM_CMPM1_CPRCNT_MSK	0x0000f000
#define PWM_CMPM1_CPRCNT_VAL(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM1_CUPR(x)	((x) << 16)
#define PWM_CMPM1_CUPR_MSK	0x000f0000
#define PWM_CMPM1_CUPR_VAL(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM1_CUPRCNT(x)	((x) << 20)
#define PWM_CMPM1_CUPRCNT_MSK	0x00f00000
#define PWM_CMPM1_CUPRCNT_VAL(x)	(((x) >> 20) & 0xf)

#define PWM_CMPM1_s	MMIO_REG(0x40020148, struct __struct_PWM_CMPM1)
struct __struct_PWM_CMPM1
{
  uint32_t cen : 1;
  uint32_t  : 3;
  uint32_t ctr : 4;
  uint32_t cpr : 4;
  uint32_t cprcnt : 4;
  uint32_t cupr : 4;
  uint32_t cuprcnt : 4;
  uint32_t  : 8;
};

#define PWM_CMPMUPD1	MMIO_REG(0x4002014c, uint32_t)
#define PWM_CMPMUPD1_CENUPD	(1 << 0)
#define PWM_CMPMUPD1_CTRUPD(x)	((x) << 4)
#define PWM_CMPMUPD1_CTRUPD_MSK	0x000000f0
#define PWM_CMPMUPD1_CTRUPD_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD1_CPRUPD(x)	((x) << 8)
#define PWM_CMPMUPD1_CPRUPD_MSK	0x00000f00
#define PWM_CMPMUPD1_CPRUPD_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD1_CUPRUPD(x)	((x) << 16)
#define PWM_CMPMUPD1_CUPRUPD_MSK	0x000f0000
#define PWM_CMPMUPD1_CUPRUPD_VAL(x)	(((x) >> 16) & 0xf)

#define PWM_CMPMUPD1_s	MMIO_REG(0x4002014c, struct __struct_PWM_CMPMUPD1)
struct __struct_PWM_CMPMUPD1
{
  uint32_t cenupd : 1;
  uint32_t  : 3;
  uint32_t ctrupd : 4;
  uint32_t cprupd : 4;
  uint32_t  : 4;
  uint32_t cuprupd : 4;
  uint32_t  : 12;
};

#define PWM_CMPV2	MMIO_REG(0x40020150, uint32_t)
#define PWM_CMPV2_CV(x)	((x) << 0)
#define PWM_CMPV2_CV_MSK	0x00ffffff
#define PWM_CMPV2_CV_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV2_CVM	(1 << 24)

#define PWM_CMPV2_s	MMIO_REG(0x40020150, struct __struct_PWM_CMPV2)
struct __struct_PWM_CMPV2
{
  uint32_t cv : 24;
  uint32_t cvm : 1;
  uint32_t  : 7;
};

#define PWM_CMPVUPD2	MMIO_REG(0x40020154, uint32_t)
#define PWM_CMPVUPD2_CVUPD(x)	((x) << 0)
#define PWM_CMPVUPD2_CVUPD_MSK	0x00ffffff
#define PWM_CMPVUPD2_CVUPD_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD2_CVMUPD	(1 << 24)

#define PWM_CMPVUPD2_s	MMIO_REG(0x40020154, struct __struct_PWM_CMPVUPD2)
struct __struct_PWM_CMPVUPD2
{
  uint32_t cvupd : 24;
  uint32_t cvmupd : 1;
  uint32_t  : 7;
};

#define PWM_CMPM2	MMIO_REG(0x40020158, uint32_t)
#define PWM_CMPM2_CEN	(1 << 0)
#define PWM_CMPM2_CTR(x)	((x) << 4)
#define PWM_CMPM2_CTR_MSK	0x000000f0
#define PWM_CMPM2_CTR_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM2_CPR(x)	((x) << 8)
#define PWM_CMPM2_CPR_MSK	0x00000f00
#define PWM_CMPM2_CPR_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM2_CPRCNT(x)	((x) << 12)
#define PWM_CMPM2_CPRCNT_MSK	0x0000f000
#define PWM_CMPM2_CPRCNT_VAL(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM2_CUPR(x)	((x) << 16)
#define PWM_CMPM2_CUPR_MSK	0x000f0000
#define PWM_CMPM2_CUPR_VAL(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM2_CUPRCNT(x)	((x) << 20)
#define PWM_CMPM2_CUPRCNT_MSK	0x00f00000
#define PWM_CMPM2_CUPRCNT_VAL(x)	(((x) >> 20) & 0xf)

#define PWM_CMPM2_s	MMIO_REG(0x40020158, struct __struct_PWM_CMPM2)
struct __struct_PWM_CMPM2
{
  uint32_t cen : 1;
  uint32_t  : 3;
  uint32_t ctr : 4;
  uint32_t cpr : 4;
  uint32_t cprcnt : 4;
  uint32_t cupr : 4;
  uint32_t cuprcnt : 4;
  uint32_t  : 8;
};

#define PWM_CMPMUPD2	MMIO_REG(0x4002015c, uint32_t)
#define PWM_CMPMUPD2_CENUPD	(1 << 0)
#define PWM_CMPMUPD2_CTRUPD(x)	((x) << 4)
#define PWM_CMPMUPD2_CTRUPD_MSK	0x000000f0
#define PWM_CMPMUPD2_CTRUPD_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD2_CPRUPD(x)	((x) << 8)
#define PWM_CMPMUPD2_CPRUPD_MSK	0x00000f00
#define PWM_CMPMUPD2_CPRUPD_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD2_CUPRUPD(x)	((x) << 16)
#define PWM_CMPMUPD2_CUPRUPD_MSK	0x000f0000
#define PWM_CMPMUPD2_CUPRUPD_VAL(x)	(((x) >> 16) & 0xf)

#define PWM_CMPMUPD2_s	MMIO_REG(0x4002015c, struct __struct_PWM_CMPMUPD2)
struct __struct_PWM_CMPMUPD2
{
  uint32_t cenupd : 1;
  uint32_t  : 3;
  uint32_t ctrupd : 4;
  uint32_t cprupd : 4;
  uint32_t  : 4;
  uint32_t cuprupd : 4;
  uint32_t  : 12;
};

#define PWM_CMPV3	MMIO_REG(0x40020160, uint32_t)
#define PWM_CMPV3_CV(x)	((x) << 0)
#define PWM_CMPV3_CV_MSK	0x00ffffff
#define PWM_CMPV3_CV_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV3_CVM	(1 << 24)

#define PWM_CMPV3_s	MMIO_REG(0x40020160, struct __struct_PWM_CMPV3)
struct __struct_PWM_CMPV3
{
  uint32_t cv : 24;
  uint32_t cvm : 1;
  uint32_t  : 7;
};

#define PWM_CMPVUPD3	MMIO_REG(0x40020164, uint32_t)
#define PWM_CMPVUPD3_CVUPD(x)	((x) << 0)
#define PWM_CMPVUPD3_CVUPD_MSK	0x00ffffff
#define PWM_CMPVUPD3_CVUPD_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD3_CVMUPD	(1 << 24)

#define PWM_CMPVUPD3_s	MMIO_REG(0x40020164, struct __struct_PWM_CMPVUPD3)
struct __struct_PWM_CMPVUPD3
{
  uint32_t cvupd : 24;
  uint32_t cvmupd : 1;
  uint32_t  : 7;
};

#define PWM_CMPM3	MMIO_REG(0x40020168, uint32_t)
#define PWM_CMPM3_CEN	(1 << 0)
#define PWM_CMPM3_CTR(x)	((x) << 4)
#define PWM_CMPM3_CTR_MSK	0x000000f0
#define PWM_CMPM3_CTR_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM3_CPR(x)	((x) << 8)
#define PWM_CMPM3_CPR_MSK	0x00000f00
#define PWM_CMPM3_CPR_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM3_CPRCNT(x)	((x) << 12)
#define PWM_CMPM3_CPRCNT_MSK	0x0000f000
#define PWM_CMPM3_CPRCNT_VAL(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM3_CUPR(x)	((x) << 16)
#define PWM_CMPM3_CUPR_MSK	0x000f0000
#define PWM_CMPM3_CUPR_VAL(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM3_CUPRCNT(x)	((x) << 20)
#define PWM_CMPM3_CUPRCNT_MSK	0x00f00000
#define PWM_CMPM3_CUPRCNT_VAL(x)	(((x) >> 20) & 0xf)

#define PWM_CMPM3_s	MMIO_REG(0x40020168, struct __struct_PWM_CMPM3)
struct __struct_PWM_CMPM3
{
  uint32_t cen : 1;
  uint32_t  : 3;
  uint32_t ctr : 4;
  uint32_t cpr : 4;
  uint32_t cprcnt : 4;
  uint32_t cupr : 4;
  uint32_t cuprcnt : 4;
  uint32_t  : 8;
};

#define PWM_CMPMUPD3	MMIO_REG(0x4002016c, uint32_t)
#define PWM_CMPMUPD3_CENUPD	(1 << 0)
#define PWM_CMPMUPD3_CTRUPD(x)	((x) << 4)
#define PWM_CMPMUPD3_CTRUPD_MSK	0x000000f0
#define PWM_CMPMUPD3_CTRUPD_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD3_CPRUPD(x)	((x) << 8)
#define PWM_CMPMUPD3_CPRUPD_MSK	0x00000f00
#define PWM_CMPMUPD3_CPRUPD_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD3_CUPRUPD(x)	((x) << 16)
#define PWM_CMPMUPD3_CUPRUPD_MSK	0x000f0000
#define PWM_CMPMUPD3_CUPRUPD_VAL(x)	(((x) >> 16) & 0xf)

#define PWM_CMPMUPD3_s	MMIO_REG(0x4002016c, struct __struct_PWM_CMPMUPD3)
struct __struct_PWM_CMPMUPD3
{
  uint32_t cenupd : 1;
  uint32_t  : 3;
  uint32_t ctrupd : 4;
  uint32_t cprupd : 4;
  uint32_t  : 4;
  uint32_t cuprupd : 4;
  uint32_t  : 12;
};

#define PWM_CMPV4	MMIO_REG(0x40020170, uint32_t)
#define PWM_CMPV4_CV(x)	((x) << 0)
#define PWM_CMPV4_CV_MSK	0x00ffffff
#define PWM_CMPV4_CV_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV4_CVM	(1 << 24)

#define PWM_CMPV4_s	MMIO_REG(0x40020170, struct __struct_PWM_CMPV4)
struct __struct_PWM_CMPV4
{
  uint32_t cv : 24;
  uint32_t cvm : 1;
  uint32_t  : 7;
};

#define PWM_CMPVUPD4	MMIO_REG(0x40020174, uint32_t)
#define PWM_CMPVUPD4_CVUPD(x)	((x) << 0)
#define PWM_CMPVUPD4_CVUPD_MSK	0x00ffffff
#define PWM_CMPVUPD4_CVUPD_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD4_CVMUPD	(1 << 24)

#define PWM_CMPVUPD4_s	MMIO_REG(0x40020174, struct __struct_PWM_CMPVUPD4)
struct __struct_PWM_CMPVUPD4
{
  uint32_t cvupd : 24;
  uint32_t cvmupd : 1;
  uint32_t  : 7;
};

#define PWM_CMPM4	MMIO_REG(0x40020178, uint32_t)
#define PWM_CMPM4_CEN	(1 << 0)
#define PWM_CMPM4_CTR(x)	((x) << 4)
#define PWM_CMPM4_CTR_MSK	0x000000f0
#define PWM_CMPM4_CTR_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM4_CPR(x)	((x) << 8)
#define PWM_CMPM4_CPR_MSK	0x00000f00
#define PWM_CMPM4_CPR_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM4_CPRCNT(x)	((x) << 12)
#define PWM_CMPM4_CPRCNT_MSK	0x0000f000
#define PWM_CMPM4_CPRCNT_VAL(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM4_CUPR(x)	((x) << 16)
#define PWM_CMPM4_CUPR_MSK	0x000f0000
#define PWM_CMPM4_CUPR_VAL(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM4_CUPRCNT(x)	((x) << 20)
#define PWM_CMPM4_CUPRCNT_MSK	0x00f00000
#define PWM_CMPM4_CUPRCNT_VAL(x)	(((x) >> 20) & 0xf)

#define PWM_CMPM4_s	MMIO_REG(0x40020178, struct __struct_PWM_CMPM4)
struct __struct_PWM_CMPM4
{
  uint32_t cen : 1;
  uint32_t  : 3;
  uint32_t ctr : 4;
  uint32_t cpr : 4;
  uint32_t cprcnt : 4;
  uint32_t cupr : 4;
  uint32_t cuprcnt : 4;
  uint32_t  : 8;
};

#define PWM_CMPMUPD4	MMIO_REG(0x4002017c, uint32_t)
#define PWM_CMPMUPD4_CENUPD	(1 << 0)
#define PWM_CMPMUPD4_CTRUPD(x)	((x) << 4)
#define PWM_CMPMUPD4_CTRUPD_MSK	0x000000f0
#define PWM_CMPMUPD4_CTRUPD_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD4_CPRUPD(x)	((x) << 8)
#define PWM_CMPMUPD4_CPRUPD_MSK	0x00000f00
#define PWM_CMPMUPD4_CPRUPD_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD4_CUPRUPD(x)	((x) << 16)
#define PWM_CMPMUPD4_CUPRUPD_MSK	0x000f0000
#define PWM_CMPMUPD4_CUPRUPD_VAL(x)	(((x) >> 16) & 0xf)

#define PWM_CMPMUPD4_s	MMIO_REG(0x4002017c, struct __struct_PWM_CMPMUPD4)
struct __struct_PWM_CMPMUPD4
{
  uint32_t cenupd : 1;
  uint32_t  : 3;
  uint32_t ctrupd : 4;
  uint32_t cprupd : 4;
  uint32_t  : 4;
  uint32_t cuprupd : 4;
  uint32_t  : 12;
};

#define PWM_CMPV5	MMIO_REG(0x40020180, uint32_t)
#define PWM_CMPV5_CV(x)	((x) << 0)
#define PWM_CMPV5_CV_MSK	0x00ffffff
#define PWM_CMPV5_CV_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV5_CVM	(1 << 24)

#define PWM_CMPV5_s	MMIO_REG(0x40020180, struct __struct_PWM_CMPV5)
struct __struct_PWM_CMPV5
{
  uint32_t cv : 24;
  uint32_t cvm : 1;
  uint32_t  : 7;
};

#define PWM_CMPVUPD5	MMIO_REG(0x40020184, uint32_t)
#define PWM_CMPVUPD5_CVUPD(x)	((x) << 0)
#define PWM_CMPVUPD5_CVUPD_MSK	0x00ffffff
#define PWM_CMPVUPD5_CVUPD_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD5_CVMUPD	(1 << 24)

#define PWM_CMPVUPD5_s	MMIO_REG(0x40020184, struct __struct_PWM_CMPVUPD5)
struct __struct_PWM_CMPVUPD5
{
  uint32_t cvupd : 24;
  uint32_t cvmupd : 1;
  uint32_t  : 7;
};

#define PWM_CMPM5	MMIO_REG(0x40020188, uint32_t)
#define PWM_CMPM5_CEN	(1 << 0)
#define PWM_CMPM5_CTR(x)	((x) << 4)
#define PWM_CMPM5_CTR_MSK	0x000000f0
#define PWM_CMPM5_CTR_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM5_CPR(x)	((x) << 8)
#define PWM_CMPM5_CPR_MSK	0x00000f00
#define PWM_CMPM5_CPR_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM5_CPRCNT(x)	((x) << 12)
#define PWM_CMPM5_CPRCNT_MSK	0x0000f000
#define PWM_CMPM5_CPRCNT_VAL(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM5_CUPR(x)	((x) << 16)
#define PWM_CMPM5_CUPR_MSK	0x000f0000
#define PWM_CMPM5_CUPR_VAL(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM5_CUPRCNT(x)	((x) << 20)
#define PWM_CMPM5_CUPRCNT_MSK	0x00f00000
#define PWM_CMPM5_CUPRCNT_VAL(x)	(((x) >> 20) & 0xf)

#define PWM_CMPM5_s	MMIO_REG(0x40020188, struct __struct_PWM_CMPM5)
struct __struct_PWM_CMPM5
{
  uint32_t cen : 1;
  uint32_t  : 3;
  uint32_t ctr : 4;
  uint32_t cpr : 4;
  uint32_t cprcnt : 4;
  uint32_t cupr : 4;
  uint32_t cuprcnt : 4;
  uint32_t  : 8;
};

#define PWM_CMPMUPD5	MMIO_REG(0x4002018c, uint32_t)
#define PWM_CMPMUPD5_CENUPD	(1 << 0)
#define PWM_CMPMUPD5_CTRUPD(x)	((x) << 4)
#define PWM_CMPMUPD5_CTRUPD_MSK	0x000000f0
#define PWM_CMPMUPD5_CTRUPD_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD5_CPRUPD(x)	((x) << 8)
#define PWM_CMPMUPD5_CPRUPD_MSK	0x00000f00
#define PWM_CMPMUPD5_CPRUPD_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD5_CUPRUPD(x)	((x) << 16)
#define PWM_CMPMUPD5_CUPRUPD_MSK	0x000f0000
#define PWM_CMPMUPD5_CUPRUPD_VAL(x)	(((x) >> 16) & 0xf)

#define PWM_CMPMUPD5_s	MMIO_REG(0x4002018c, struct __struct_PWM_CMPMUPD5)
struct __struct_PWM_CMPMUPD5
{
  uint32_t cenupd : 1;
  uint32_t  : 3;
  uint32_t ctrupd : 4;
  uint32_t cprupd : 4;
  uint32_t  : 4;
  uint32_t cuprupd : 4;
  uint32_t  : 12;
};

#define PWM_CMPV6	MMIO_REG(0x40020190, uint32_t)
#define PWM_CMPV6_CV(x)	((x) << 0)
#define PWM_CMPV6_CV_MSK	0x00ffffff
#define PWM_CMPV6_CV_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV6_CVM	(1 << 24)

#define PWM_CMPV6_s	MMIO_REG(0x40020190, struct __struct_PWM_CMPV6)
struct __struct_PWM_CMPV6
{
  uint32_t cv : 24;
  uint32_t cvm : 1;
  uint32_t  : 7;
};

#define PWM_CMPVUPD6	MMIO_REG(0x40020194, uint32_t)
#define PWM_CMPVUPD6_CVUPD(x)	((x) << 0)
#define PWM_CMPVUPD6_CVUPD_MSK	0x00ffffff
#define PWM_CMPVUPD6_CVUPD_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD6_CVMUPD	(1 << 24)

#define PWM_CMPVUPD6_s	MMIO_REG(0x40020194, struct __struct_PWM_CMPVUPD6)
struct __struct_PWM_CMPVUPD6
{
  uint32_t cvupd : 24;
  uint32_t cvmupd : 1;
  uint32_t  : 7;
};

#define PWM_CMPM6	MMIO_REG(0x40020198, uint32_t)
#define PWM_CMPM6_CEN	(1 << 0)
#define PWM_CMPM6_CTR(x)	((x) << 4)
#define PWM_CMPM6_CTR_MSK	0x000000f0
#define PWM_CMPM6_CTR_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM6_CPR(x)	((x) << 8)
#define PWM_CMPM6_CPR_MSK	0x00000f00
#define PWM_CMPM6_CPR_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM6_CPRCNT(x)	((x) << 12)
#define PWM_CMPM6_CPRCNT_MSK	0x0000f000
#define PWM_CMPM6_CPRCNT_VAL(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM6_CUPR(x)	((x) << 16)
#define PWM_CMPM6_CUPR_MSK	0x000f0000
#define PWM_CMPM6_CUPR_VAL(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM6_CUPRCNT(x)	((x) << 20)
#define PWM_CMPM6_CUPRCNT_MSK	0x00f00000
#define PWM_CMPM6_CUPRCNT_VAL(x)	(((x) >> 20) & 0xf)

#define PWM_CMPM6_s	MMIO_REG(0x40020198, struct __struct_PWM_CMPM6)
struct __struct_PWM_CMPM6
{
  uint32_t cen : 1;
  uint32_t  : 3;
  uint32_t ctr : 4;
  uint32_t cpr : 4;
  uint32_t cprcnt : 4;
  uint32_t cupr : 4;
  uint32_t cuprcnt : 4;
  uint32_t  : 8;
};

#define PWM_CMPMUPD6	MMIO_REG(0x4002019c, uint32_t)
#define PWM_CMPMUPD6_CENUPD	(1 << 0)
#define PWM_CMPMUPD6_CTRUPD(x)	((x) << 4)
#define PWM_CMPMUPD6_CTRUPD_MSK	0x000000f0
#define PWM_CMPMUPD6_CTRUPD_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD6_CPRUPD(x)	((x) << 8)
#define PWM_CMPMUPD6_CPRUPD_MSK	0x00000f00
#define PWM_CMPMUPD6_CPRUPD_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD6_CUPRUPD(x)	((x) << 16)
#define PWM_CMPMUPD6_CUPRUPD_MSK	0x000f0000
#define PWM_CMPMUPD6_CUPRUPD_VAL(x)	(((x) >> 16) & 0xf)

#define PWM_CMPMUPD6_s	MMIO_REG(0x4002019c, struct __struct_PWM_CMPMUPD6)
struct __struct_PWM_CMPMUPD6
{
  uint32_t cenupd : 1;
  uint32_t  : 3;
  uint32_t ctrupd : 4;
  uint32_t cprupd : 4;
  uint32_t  : 4;
  uint32_t cuprupd : 4;
  uint32_t  : 12;
};

#define PWM_CMPV7	MMIO_REG(0x400201a0, uint32_t)
#define PWM_CMPV7_CV(x)	((x) << 0)
#define PWM_CMPV7_CV_MSK	0x00ffffff
#define PWM_CMPV7_CV_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPV7_CVM	(1 << 24)

#define PWM_CMPV7_s	MMIO_REG(0x400201a0, struct __struct_PWM_CMPV7)
struct __struct_PWM_CMPV7
{
  uint32_t cv : 24;
  uint32_t cvm : 1;
  uint32_t  : 7;
};

#define PWM_CMPVUPD7	MMIO_REG(0x400201a4, uint32_t)
#define PWM_CMPVUPD7_CVUPD(x)	((x) << 0)
#define PWM_CMPVUPD7_CVUPD_MSK	0x00ffffff
#define PWM_CMPVUPD7_CVUPD_VAL(x)	(((x) >> 0) & 0xffffff)
#define PWM_CMPVUPD7_CVMUPD	(1 << 24)

#define PWM_CMPVUPD7_s	MMIO_REG(0x400201a4, struct __struct_PWM_CMPVUPD7)
struct __struct_PWM_CMPVUPD7
{
  uint32_t cvupd : 24;
  uint32_t cvmupd : 1;
  uint32_t  : 7;
};

#define PWM_CMPM7	MMIO_REG(0x400201a8, uint32_t)
#define PWM_CMPM7_CEN	(1 << 0)
#define PWM_CMPM7_CTR(x)	((x) << 4)
#define PWM_CMPM7_CTR_MSK	0x000000f0
#define PWM_CMPM7_CTR_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPM7_CPR(x)	((x) << 8)
#define PWM_CMPM7_CPR_MSK	0x00000f00
#define PWM_CMPM7_CPR_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPM7_CPRCNT(x)	((x) << 12)
#define PWM_CMPM7_CPRCNT_MSK	0x0000f000
#define PWM_CMPM7_CPRCNT_VAL(x)	(((x) >> 12) & 0xf)
#define PWM_CMPM7_CUPR(x)	((x) << 16)
#define PWM_CMPM7_CUPR_MSK	0x000f0000
#define PWM_CMPM7_CUPR_VAL(x)	(((x) >> 16) & 0xf)
#define PWM_CMPM7_CUPRCNT(x)	((x) << 20)
#define PWM_CMPM7_CUPRCNT_MSK	0x00f00000
#define PWM_CMPM7_CUPRCNT_VAL(x)	(((x) >> 20) & 0xf)

#define PWM_CMPM7_s	MMIO_REG(0x400201a8, struct __struct_PWM_CMPM7)
struct __struct_PWM_CMPM7
{
  uint32_t cen : 1;
  uint32_t  : 3;
  uint32_t ctr : 4;
  uint32_t cpr : 4;
  uint32_t cprcnt : 4;
  uint32_t cupr : 4;
  uint32_t cuprcnt : 4;
  uint32_t  : 8;
};

#define PWM_CMPMUPD7	MMIO_REG(0x400201ac, uint32_t)
#define PWM_CMPMUPD7_CENUPD	(1 << 0)
#define PWM_CMPMUPD7_CTRUPD(x)	((x) << 4)
#define PWM_CMPMUPD7_CTRUPD_MSK	0x000000f0
#define PWM_CMPMUPD7_CTRUPD_VAL(x)	(((x) >> 4) & 0xf)
#define PWM_CMPMUPD7_CPRUPD(x)	((x) << 8)
#define PWM_CMPMUPD7_CPRUPD_MSK	0x00000f00
#define PWM_CMPMUPD7_CPRUPD_VAL(x)	(((x) >> 8) & 0xf)
#define PWM_CMPMUPD7_CUPRUPD(x)	((x) << 16)
#define PWM_CMPMUPD7_CUPRUPD_MSK	0x000f0000
#define PWM_CMPMUPD7_CUPRUPD_VAL(x)	(((x) >> 16) & 0xf)

#define PWM_CMPMUPD7_s	MMIO_REG(0x400201ac, struct __struct_PWM_CMPMUPD7)
struct __struct_PWM_CMPMUPD7
{
  uint32_t cenupd : 1;
  uint32_t  : 3;
  uint32_t ctrupd : 4;
  uint32_t cprupd : 4;
  uint32_t  : 4;
  uint32_t cuprupd : 4;
  uint32_t  : 12;
};

#define PWM_CMR0	MMIO_REG(0x40020200, uint32_t)
#define PWM_CMR0_CPRE(x)	((x) << 0)
#define PWM_CMR0_CPRE_MSK	0x0000000f
#define PWM_CMR0_CPRE_VAL(x)	(((x) >> 0) & 0xf)
#define PWM_CMR0_CALG	(1 << 8)
#define PWM_CMR0_CPOL	(1 << 9)
#define PWM_CMR0_CES	(1 << 10)
#define PWM_CMR0_DTE	(1 << 16)
#define PWM_CMR0_DTHI	(1 << 17)
#define PWM_CMR0_DTLI	(1 << 18)

#define PWM_CMR0_s	MMIO_REG(0x40020200, struct __struct_PWM_CMR0)
struct __struct_PWM_CMR0
{
  uint32_t cpre : 4;
  uint32_t  : 4;
  uint32_t calg : 1;
  uint32_t cpol : 1;
  uint32_t ces : 1;
  uint32_t  : 5;
  uint32_t dte : 1;
  uint32_t dthi : 1;
  uint32_t dtli : 1;
  uint32_t  : 13;
};

#define PWM_CDTY0	MMIO_REG(0x40020204, uint32_t)
#define PWM_CDTY0_CDTY(x)	((x) << 0)
#define PWM_CDTY0_CDTY_MSK	0x00ffffff
#define PWM_CDTY0_CDTY_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CDTY0_s	MMIO_REG(0x40020204, struct __struct_PWM_CDTY0)
struct __struct_PWM_CDTY0
{
  uint32_t cdty : 24;
  uint32_t  : 8;
};

#define PWM_CDTYUPD0	MMIO_REG(0x40020208, uint32_t)
#define PWM_CDTYUPD0_CDTYUPD(x)	((x) << 0)
#define PWM_CDTYUPD0_CDTYUPD_MSK	0x00ffffff
#define PWM_CDTYUPD0_CDTYUPD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CDTYUPD0_s	MMIO_REG(0x40020208, struct __struct_PWM_CDTYUPD0)
struct __struct_PWM_CDTYUPD0
{
  uint32_t cdtyupd : 24;
  uint32_t  : 8;
};

#define PWM_CPRD0	MMIO_REG(0x4002020c, uint32_t)
#define PWM_CPRD0_CPRD(x)	((x) << 0)
#define PWM_CPRD0_CPRD_MSK	0x00ffffff
#define PWM_CPRD0_CPRD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CPRD0_s	MMIO_REG(0x4002020c, struct __struct_PWM_CPRD0)
struct __struct_PWM_CPRD0
{
  uint32_t cprd : 24;
  uint32_t  : 8;
};

#define PWM_CPRDUPD0	MMIO_REG(0x40020210, uint32_t)
#define PWM_CPRDUPD0_CPRDUPD(x)	((x) << 0)
#define PWM_CPRDUPD0_CPRDUPD_MSK	0x00ffffff
#define PWM_CPRDUPD0_CPRDUPD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CPRDUPD0_s	MMIO_REG(0x40020210, struct __struct_PWM_CPRDUPD0)
struct __struct_PWM_CPRDUPD0
{
  uint32_t cprdupd : 24;
  uint32_t  : 8;
};

#define PWM_CCNT0	MMIO_REG(0x40020214, uint32_t)
#define PWM_CCNT0_CNT(x)	((x) << 0)
#define PWM_CCNT0_CNT_MSK	0x00ffffff
#define PWM_CCNT0_CNT_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CCNT0_s	MMIO_REG(0x40020214, struct __struct_PWM_CCNT0)
struct __struct_PWM_CCNT0
{
  uint32_t cnt : 24;
  uint32_t  : 8;
};

#define PWM_DT0	MMIO_REG(0x40020218, uint32_t)
#define PWM_DT0_DTH(x)	((x) << 0)
#define PWM_DT0_DTH_MSK	0x0000ffff
#define PWM_DT0_DTH_VAL(x)	(((x) >> 0) & 0xffff)
#define PWM_DT0_DTL(x)	((x) << 16)
#define PWM_DT0_DTL_MSK	0xffff0000
#define PWM_DT0_DTL_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_DT0_s	MMIO_REG(0x40020218, struct __struct_PWM_DT0)
struct __struct_PWM_DT0
{
  uint32_t dth : 16;
  uint32_t dtl : 16;
};

#define PWM_DTUPD0	MMIO_REG(0x4002021c, uint32_t)
#define PWM_DTUPD0_DTHUPD(x)	((x) << 0)
#define PWM_DTUPD0_DTHUPD_MSK	0x0000ffff
#define PWM_DTUPD0_DTHUPD_VAL(x)	(((x) >> 0) & 0xffff)
#define PWM_DTUPD0_DTLUPD(x)	((x) << 16)
#define PWM_DTUPD0_DTLUPD_MSK	0xffff0000
#define PWM_DTUPD0_DTLUPD_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_DTUPD0_s	MMIO_REG(0x4002021c, struct __struct_PWM_DTUPD0)
struct __struct_PWM_DTUPD0
{
  uint32_t dthupd : 16;
  uint32_t dtlupd : 16;
};

#define PWM_CMR1	MMIO_REG(0x40020220, uint32_t)
#define PWM_CMR1_CPRE(x)	((x) << 0)
#define PWM_CMR1_CPRE_MSK	0x0000000f
#define PWM_CMR1_CPRE_VAL(x)	(((x) >> 0) & 0xf)
#define PWM_CMR1_CALG	(1 << 8)
#define PWM_CMR1_CPOL	(1 << 9)
#define PWM_CMR1_CES	(1 << 10)
#define PWM_CMR1_DTE	(1 << 16)
#define PWM_CMR1_DTHI	(1 << 17)
#define PWM_CMR1_DTLI	(1 << 18)

#define PWM_CMR1_s	MMIO_REG(0x40020220, struct __struct_PWM_CMR1)
struct __struct_PWM_CMR1
{
  uint32_t cpre : 4;
  uint32_t  : 4;
  uint32_t calg : 1;
  uint32_t cpol : 1;
  uint32_t ces : 1;
  uint32_t  : 5;
  uint32_t dte : 1;
  uint32_t dthi : 1;
  uint32_t dtli : 1;
  uint32_t  : 13;
};

#define PWM_CDTY1	MMIO_REG(0x40020224, uint32_t)
#define PWM_CDTY1_CDTY(x)	((x) << 0)
#define PWM_CDTY1_CDTY_MSK	0x00ffffff
#define PWM_CDTY1_CDTY_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CDTY1_s	MMIO_REG(0x40020224, struct __struct_PWM_CDTY1)
struct __struct_PWM_CDTY1
{
  uint32_t cdty : 24;
  uint32_t  : 8;
};

#define PWM_CDTYUPD1	MMIO_REG(0x40020228, uint32_t)
#define PWM_CDTYUPD1_CDTYUPD(x)	((x) << 0)
#define PWM_CDTYUPD1_CDTYUPD_MSK	0x00ffffff
#define PWM_CDTYUPD1_CDTYUPD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CDTYUPD1_s	MMIO_REG(0x40020228, struct __struct_PWM_CDTYUPD1)
struct __struct_PWM_CDTYUPD1
{
  uint32_t cdtyupd : 24;
  uint32_t  : 8;
};

#define PWM_CPRD1	MMIO_REG(0x4002022c, uint32_t)
#define PWM_CPRD1_CPRD(x)	((x) << 0)
#define PWM_CPRD1_CPRD_MSK	0x00ffffff
#define PWM_CPRD1_CPRD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CPRD1_s	MMIO_REG(0x4002022c, struct __struct_PWM_CPRD1)
struct __struct_PWM_CPRD1
{
  uint32_t cprd : 24;
  uint32_t  : 8;
};

#define PWM_CPRDUPD1	MMIO_REG(0x40020230, uint32_t)
#define PWM_CPRDUPD1_CPRDUPD(x)	((x) << 0)
#define PWM_CPRDUPD1_CPRDUPD_MSK	0x00ffffff
#define PWM_CPRDUPD1_CPRDUPD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CPRDUPD1_s	MMIO_REG(0x40020230, struct __struct_PWM_CPRDUPD1)
struct __struct_PWM_CPRDUPD1
{
  uint32_t cprdupd : 24;
  uint32_t  : 8;
};

#define PWM_CCNT1	MMIO_REG(0x40020234, uint32_t)
#define PWM_CCNT1_CNT(x)	((x) << 0)
#define PWM_CCNT1_CNT_MSK	0x00ffffff
#define PWM_CCNT1_CNT_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CCNT1_s	MMIO_REG(0x40020234, struct __struct_PWM_CCNT1)
struct __struct_PWM_CCNT1
{
  uint32_t cnt : 24;
  uint32_t  : 8;
};

#define PWM_DT1	MMIO_REG(0x40020238, uint32_t)
#define PWM_DT1_DTH(x)	((x) << 0)
#define PWM_DT1_DTH_MSK	0x0000ffff
#define PWM_DT1_DTH_VAL(x)	(((x) >> 0) & 0xffff)
#define PWM_DT1_DTL(x)	((x) << 16)
#define PWM_DT1_DTL_MSK	0xffff0000
#define PWM_DT1_DTL_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_DT1_s	MMIO_REG(0x40020238, struct __struct_PWM_DT1)
struct __struct_PWM_DT1
{
  uint32_t dth : 16;
  uint32_t dtl : 16;
};

#define PWM_DTUPD1	MMIO_REG(0x4002023c, uint32_t)
#define PWM_DTUPD1_DTHUPD(x)	((x) << 0)
#define PWM_DTUPD1_DTHUPD_MSK	0x0000ffff
#define PWM_DTUPD1_DTHUPD_VAL(x)	(((x) >> 0) & 0xffff)
#define PWM_DTUPD1_DTLUPD(x)	((x) << 16)
#define PWM_DTUPD1_DTLUPD_MSK	0xffff0000
#define PWM_DTUPD1_DTLUPD_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_DTUPD1_s	MMIO_REG(0x4002023c, struct __struct_PWM_DTUPD1)
struct __struct_PWM_DTUPD1
{
  uint32_t dthupd : 16;
  uint32_t dtlupd : 16;
};

#define PWM_CMR2	MMIO_REG(0x40020240, uint32_t)
#define PWM_CMR2_CPRE(x)	((x) << 0)
#define PWM_CMR2_CPRE_MSK	0x0000000f
#define PWM_CMR2_CPRE_VAL(x)	(((x) >> 0) & 0xf)
#define PWM_CMR2_CALG	(1 << 8)
#define PWM_CMR2_CPOL	(1 << 9)
#define PWM_CMR2_CES	(1 << 10)
#define PWM_CMR2_DTE	(1 << 16)
#define PWM_CMR2_DTHI	(1 << 17)
#define PWM_CMR2_DTLI	(1 << 18)

#define PWM_CMR2_s	MMIO_REG(0x40020240, struct __struct_PWM_CMR2)
struct __struct_PWM_CMR2
{
  uint32_t cpre : 4;
  uint32_t  : 4;
  uint32_t calg : 1;
  uint32_t cpol : 1;
  uint32_t ces : 1;
  uint32_t  : 5;
  uint32_t dte : 1;
  uint32_t dthi : 1;
  uint32_t dtli : 1;
  uint32_t  : 13;
};

#define PWM_CDTY2	MMIO_REG(0x40020244, uint32_t)
#define PWM_CDTY2_CDTY(x)	((x) << 0)
#define PWM_CDTY2_CDTY_MSK	0x00ffffff
#define PWM_CDTY2_CDTY_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CDTY2_s	MMIO_REG(0x40020244, struct __struct_PWM_CDTY2)
struct __struct_PWM_CDTY2
{
  uint32_t cdty : 24;
  uint32_t  : 8;
};

#define PWM_CDTYUPD2	MMIO_REG(0x40020248, uint32_t)
#define PWM_CDTYUPD2_CDTYUPD(x)	((x) << 0)
#define PWM_CDTYUPD2_CDTYUPD_MSK	0x00ffffff
#define PWM_CDTYUPD2_CDTYUPD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CDTYUPD2_s	MMIO_REG(0x40020248, struct __struct_PWM_CDTYUPD2)
struct __struct_PWM_CDTYUPD2
{
  uint32_t cdtyupd : 24;
  uint32_t  : 8;
};

#define PWM_CPRD2	MMIO_REG(0x4002024c, uint32_t)
#define PWM_CPRD2_CPRD(x)	((x) << 0)
#define PWM_CPRD2_CPRD_MSK	0x00ffffff
#define PWM_CPRD2_CPRD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CPRD2_s	MMIO_REG(0x4002024c, struct __struct_PWM_CPRD2)
struct __struct_PWM_CPRD2
{
  uint32_t cprd : 24;
  uint32_t  : 8;
};

#define PWM_CPRDUPD2	MMIO_REG(0x40020250, uint32_t)
#define PWM_CPRDUPD2_CPRDUPD(x)	((x) << 0)
#define PWM_CPRDUPD2_CPRDUPD_MSK	0x00ffffff
#define PWM_CPRDUPD2_CPRDUPD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CPRDUPD2_s	MMIO_REG(0x40020250, struct __struct_PWM_CPRDUPD2)
struct __struct_PWM_CPRDUPD2
{
  uint32_t cprdupd : 24;
  uint32_t  : 8;
};

#define PWM_CCNT2	MMIO_REG(0x40020254, uint32_t)
#define PWM_CCNT2_CNT(x)	((x) << 0)
#define PWM_CCNT2_CNT_MSK	0x00ffffff
#define PWM_CCNT2_CNT_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CCNT2_s	MMIO_REG(0x40020254, struct __struct_PWM_CCNT2)
struct __struct_PWM_CCNT2
{
  uint32_t cnt : 24;
  uint32_t  : 8;
};

#define PWM_DT2	MMIO_REG(0x40020258, uint32_t)
#define PWM_DT2_DTH(x)	((x) << 0)
#define PWM_DT2_DTH_MSK	0x0000ffff
#define PWM_DT2_DTH_VAL(x)	(((x) >> 0) & 0xffff)
#define PWM_DT2_DTL(x)	((x) << 16)
#define PWM_DT2_DTL_MSK	0xffff0000
#define PWM_DT2_DTL_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_DT2_s	MMIO_REG(0x40020258, struct __struct_PWM_DT2)
struct __struct_PWM_DT2
{
  uint32_t dth : 16;
  uint32_t dtl : 16;
};

#define PWM_DTUPD2	MMIO_REG(0x4002025c, uint32_t)
#define PWM_DTUPD2_DTHUPD(x)	((x) << 0)
#define PWM_DTUPD2_DTHUPD_MSK	0x0000ffff
#define PWM_DTUPD2_DTHUPD_VAL(x)	(((x) >> 0) & 0xffff)
#define PWM_DTUPD2_DTLUPD(x)	((x) << 16)
#define PWM_DTUPD2_DTLUPD_MSK	0xffff0000
#define PWM_DTUPD2_DTLUPD_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_DTUPD2_s	MMIO_REG(0x4002025c, struct __struct_PWM_DTUPD2)
struct __struct_PWM_DTUPD2
{
  uint32_t dthupd : 16;
  uint32_t dtlupd : 16;
};

#define PWM_CMR3	MMIO_REG(0x40020260, uint32_t)
#define PWM_CMR3_CPRE(x)	((x) << 0)
#define PWM_CMR3_CPRE_MSK	0x0000000f
#define PWM_CMR3_CPRE_VAL(x)	(((x) >> 0) & 0xf)
#define PWM_CMR3_CALG	(1 << 8)
#define PWM_CMR3_CPOL	(1 << 9)
#define PWM_CMR3_CES	(1 << 10)
#define PWM_CMR3_DTE	(1 << 16)
#define PWM_CMR3_DTHI	(1 << 17)
#define PWM_CMR3_DTLI	(1 << 18)

#define PWM_CMR3_s	MMIO_REG(0x40020260, struct __struct_PWM_CMR3)
struct __struct_PWM_CMR3
{
  uint32_t cpre : 4;
  uint32_t  : 4;
  uint32_t calg : 1;
  uint32_t cpol : 1;
  uint32_t ces : 1;
  uint32_t  : 5;
  uint32_t dte : 1;
  uint32_t dthi : 1;
  uint32_t dtli : 1;
  uint32_t  : 13;
};

#define PWM_CDTY3	MMIO_REG(0x40020264, uint32_t)
#define PWM_CDTY3_CDTY(x)	((x) << 0)
#define PWM_CDTY3_CDTY_MSK	0x00ffffff
#define PWM_CDTY3_CDTY_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CDTY3_s	MMIO_REG(0x40020264, struct __struct_PWM_CDTY3)
struct __struct_PWM_CDTY3
{
  uint32_t cdty : 24;
  uint32_t  : 8;
};

#define PWM_CDTYUPD3	MMIO_REG(0x40020268, uint32_t)
#define PWM_CDTYUPD3_CDTYUPD(x)	((x) << 0)
#define PWM_CDTYUPD3_CDTYUPD_MSK	0x00ffffff
#define PWM_CDTYUPD3_CDTYUPD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CDTYUPD3_s	MMIO_REG(0x40020268, struct __struct_PWM_CDTYUPD3)
struct __struct_PWM_CDTYUPD3
{
  uint32_t cdtyupd : 24;
  uint32_t  : 8;
};

#define PWM_CPRD3	MMIO_REG(0x4002026c, uint32_t)
#define PWM_CPRD3_CPRD(x)	((x) << 0)
#define PWM_CPRD3_CPRD_MSK	0x00ffffff
#define PWM_CPRD3_CPRD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CPRD3_s	MMIO_REG(0x4002026c, struct __struct_PWM_CPRD3)
struct __struct_PWM_CPRD3
{
  uint32_t cprd : 24;
  uint32_t  : 8;
};

#define PWM_CPRDUPD3	MMIO_REG(0x40020270, uint32_t)
#define PWM_CPRDUPD3_CPRDUPD(x)	((x) << 0)
#define PWM_CPRDUPD3_CPRDUPD_MSK	0x00ffffff
#define PWM_CPRDUPD3_CPRDUPD_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CPRDUPD3_s	MMIO_REG(0x40020270, struct __struct_PWM_CPRDUPD3)
struct __struct_PWM_CPRDUPD3
{
  uint32_t cprdupd : 24;
  uint32_t  : 8;
};

#define PWM_CCNT3	MMIO_REG(0x40020274, uint32_t)
#define PWM_CCNT3_CNT(x)	((x) << 0)
#define PWM_CCNT3_CNT_MSK	0x00ffffff
#define PWM_CCNT3_CNT_VAL(x)	(((x) >> 0) & 0xffffff)

#define PWM_CCNT3_s	MMIO_REG(0x40020274, struct __struct_PWM_CCNT3)
struct __struct_PWM_CCNT3
{
  uint32_t cnt : 24;
  uint32_t  : 8;
};

#define PWM_DT3	MMIO_REG(0x40020278, uint32_t)
#define PWM_DT3_DTH(x)	((x) << 0)
#define PWM_DT3_DTH_MSK	0x0000ffff
#define PWM_DT3_DTH_VAL(x)	(((x) >> 0) & 0xffff)
#define PWM_DT3_DTL(x)	((x) << 16)
#define PWM_DT3_DTL_MSK	0xffff0000
#define PWM_DT3_DTL_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_DT3_s	MMIO_REG(0x40020278, struct __struct_PWM_DT3)
struct __struct_PWM_DT3
{
  uint32_t dth : 16;
  uint32_t dtl : 16;
};

#define PWM_DTUPD3	MMIO_REG(0x4002027c, uint32_t)
#define PWM_DTUPD3_DTHUPD(x)	((x) << 0)
#define PWM_DTUPD3_DTHUPD_MSK	0x0000ffff
#define PWM_DTUPD3_DTHUPD_VAL(x)	(((x) >> 0) & 0xffff)
#define PWM_DTUPD3_DTLUPD(x)	((x) << 16)
#define PWM_DTUPD3_DTLUPD_MSK	0xffff0000
#define PWM_DTUPD3_DTLUPD_VAL(x)	(((x) >> 16) & 0xffff)

#define PWM_DTUPD3_s	MMIO_REG(0x4002027c, struct __struct_PWM_DTUPD3)
struct __struct_PWM_DTUPD3
{
  uint32_t dthupd : 16;
  uint32_t dtlupd : 16;
};

// 0x40020100 PWM_PDC

#define PWM_PDC_RPR	MMIO_REG(0x40020100, uint32_t)

#define PWM_PDC_RCR	MMIO_REG(0x40020104, uint32_t)

#define PWM_PDC_TPR	MMIO_REG(0x40020108, uint32_t)

#define PWM_PDC_TCR	MMIO_REG(0x4002010c, uint32_t)

#define PWM_PDC_RNPR	MMIO_REG(0x40020110, uint32_t)

#define PWM_PDC_RNCR	MMIO_REG(0x40020114, uint32_t)

#define PWM_PDC_TNPR	MMIO_REG(0x40020118, uint32_t)

#define PWM_PDC_TNCR	MMIO_REG(0x4002011c, uint32_t)

#define PWM_PDC_PTCR	MMIO_REG(0x40020120, uint32_t)
#define PWM_PDC_PTCR_RXTEN	(1 << 0)
#define PWM_PDC_PTCR_RXTDIS	(1 << 1)
#define PWM_PDC_PTCR_TXTEN	(1 << 8)
#define PWM_PDC_PTCR_TXTDIS	(1 << 9)

#define PWM_PDC_PTCR_s	MMIO_REG(0x40020120, struct __struct_PWM_PDC_PTCR)
struct __struct_PWM_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define PWM_PDC_PTSR	MMIO_REG(0x40020124, uint32_t)
#define PWM_PDC_PTSR_RXTEN	(1 << 0)
#define PWM_PDC_PTSR_TXTEN	(1 << 8)

#define PWM_PDC_PTSR_s	MMIO_REG(0x40020124, struct __struct_PWM_PDC_PTSR)
struct __struct_PWM_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x40024000 USART0

#define USART0_CR	MMIO_REG(0x40024000, uint32_t)
#define USART0_CR_RSTRX	(1 << 2)
#define USART0_CR_RSTTX	(1 << 3)
#define USART0_CR_RXEN	(1 << 4)
#define USART0_CR_RXDIS	(1 << 5)
#define USART0_CR_TXEN	(1 << 6)
#define USART0_CR_TXDIS	(1 << 7)
#define USART0_CR_RSTSTA	(1 << 8)
#define USART0_CR_STTBRK	(1 << 9)
#define USART0_CR_STPBRK	(1 << 10)
#define USART0_CR_STTTO	(1 << 11)
#define USART0_CR_SENDA	(1 << 12)
#define USART0_CR_RSTIT	(1 << 13)
#define USART0_CR_RSTNACK	(1 << 14)
#define USART0_CR_RETTO	(1 << 15)
#define USART0_CR_DTREN	(1 << 16)
#define USART0_CR_DTRDIS	(1 << 17)
#define USART0_CR_RTSEN	(1 << 18)
#define USART0_CR_RTSDIS	(1 << 19)

#define USART0_CR_s	MMIO_REG(0x40024000, struct __struct_USART0_CR)
struct __struct_USART0_CR
{
  uint32_t  : 2;
  uint32_t rstrx : 1;
  uint32_t rsttx : 1;
  uint32_t rxen : 1;
  uint32_t rxdis : 1;
  uint32_t txen : 1;
  uint32_t txdis : 1;
  uint32_t rststa : 1;
  uint32_t sttbrk : 1;
  uint32_t stpbrk : 1;
  uint32_t sttto : 1;
  uint32_t senda : 1;
  uint32_t rstit : 1;
  uint32_t rstnack : 1;
  uint32_t retto : 1;
  uint32_t dtren : 1;
  uint32_t dtrdis : 1;
  uint32_t rtsen : 1;
  uint32_t rtsdis : 1;
  uint32_t  : 12;
};

#define USART0_CR_SPI	MMIO_REG(0x40024000, uint32_t)
#define USART0_CR_SPI_RSTRX	(1 << 2)
#define USART0_CR_SPI_RSTTX	(1 << 3)
#define USART0_CR_SPI_RXEN	(1 << 4)
#define USART0_CR_SPI_RXDIS	(1 << 5)
#define USART0_CR_SPI_TXEN	(1 << 6)
#define USART0_CR_SPI_TXDIS	(1 << 7)
#define USART0_CR_SPI_RSTSTA	(1 << 8)
#define USART0_CR_SPI_FCS	(1 << 18)
#define USART0_CR_SPI_RCS	(1 << 19)

#define USART0_CR_SPI_s	MMIO_REG(0x40024000, struct __struct_USART0_CR_SPI)
struct __struct_USART0_CR_SPI
{
  uint32_t  : 2;
  uint32_t rstrx : 1;
  uint32_t rsttx : 1;
  uint32_t rxen : 1;
  uint32_t rxdis : 1;
  uint32_t txen : 1;
  uint32_t txdis : 1;
  uint32_t rststa : 1;
  uint32_t  : 9;
  uint32_t fcs : 1;
  uint32_t rcs : 1;
  uint32_t  : 12;
};

#define USART0_MR	MMIO_REG(0x40024004, uint32_t)
#define USART0_MR_USART_MODE(x)	((x) << 0)
#define USART0_MR_USART_MODE_MSK	0x0000000f
#define USART0_MR_USART_MODE_VAL(x)	(((x) >> 0) & 0xf)
#define USART0_MR_USCLKS(x)	((x) << 4)
#define USART0_MR_USCLKS_MSK	0x00000030
#define USART0_MR_USCLKS_VAL(x)	(((x) >> 4) & 0x3)
#define USART0_MR_CHRL(x)	((x) << 6)
#define USART0_MR_CHRL_MSK	0x000000c0
#define USART0_MR_CHRL_VAL(x)	(((x) >> 6) & 0x3)
#define USART0_MR_SYNC	(1 << 8)
#define USART0_MR_PAR(x)	((x) << 9)
#define USART0_MR_PAR_MSK	0x00000e00
#define USART0_MR_PAR_VAL(x)	(((x) >> 9) & 0x7)
#define USART0_MR_NBSTOP(x)	((x) << 12)
#define USART0_MR_NBSTOP_MSK	0x00003000
#define USART0_MR_NBSTOP_VAL(x)	(((x) >> 12) & 0x3)
#define USART0_MR_CHMODE(x)	((x) << 14)
#define USART0_MR_CHMODE_MSK	0x0000c000
#define USART0_MR_CHMODE_VAL(x)	(((x) >> 14) & 0x3)
#define USART0_MR_MSBF	(1 << 16)
#define USART0_MR_MODE9	(1 << 17)
#define USART0_MR_CLKO	(1 << 18)
#define USART0_MR_OVER	(1 << 19)
#define USART0_MR_INACK	(1 << 20)
#define USART0_MR_DSNACK	(1 << 21)
#define USART0_MR_INVDATA	(1 << 22)
#define USART0_MR_VAR_SYNC	(1 << 23)
#define USART0_MR_MAX_ITERATION(x)	((x) << 24)
#define USART0_MR_MAX_ITERATION_MSK	0x07000000
#define USART0_MR_MAX_ITERATION_VAL(x)	(((x) >> 24) & 0x7)
#define USART0_MR_FILTER	(1 << 28)
#define USART0_MR_MAN	(1 << 29)
#define USART0_MR_MODSYNC	(1 << 30)
#define USART0_MR_ONEBIT	(1 << 31)

#define USART0_MR_s	MMIO_REG(0x40024004, struct __struct_USART0_MR)
struct __struct_USART0_MR
{
  uint32_t usart_mode : 4;
  uint32_t usclks : 2;
  uint32_t chrl : 2;
  uint32_t sync : 1;
  uint32_t par : 3;
  uint32_t nbstop : 2;
  uint32_t chmode : 2;
  uint32_t msbf : 1;
  uint32_t mode9 : 1;
  uint32_t clko : 1;
  uint32_t over : 1;
  uint32_t inack : 1;
  uint32_t dsnack : 1;
  uint32_t invdata : 1;
  uint32_t var_sync : 1;
  uint32_t max_iteration : 3;
  uint32_t  : 1;
  uint32_t filter : 1;
  uint32_t man : 1;
  uint32_t modsync : 1;
  uint32_t onebit : 1;
};

#define USART0_MR_SPI	MMIO_REG(0x40024004, uint32_t)
#define USART0_MR_SPI_USART_MODE(x)	((x) << 0)
#define USART0_MR_SPI_USART_MODE_MSK	0x0000000f
#define USART0_MR_SPI_USART_MODE_VAL(x)	(((x) >> 0) & 0xf)
#define USART0_MR_SPI_USCLKS(x)	((x) << 4)
#define USART0_MR_SPI_USCLKS_MSK	0x00000030
#define USART0_MR_SPI_USCLKS_VAL(x)	(((x) >> 4) & 0x3)
#define USART0_MR_SPI_CHRL(x)	((x) << 6)
#define USART0_MR_SPI_CHRL_MSK	0x000000c0
#define USART0_MR_SPI_CHRL_VAL(x)	(((x) >> 6) & 0x3)
#define USART0_MR_SPI_CPHA	(1 << 8)
#define USART0_MR_SPI_CPOL	(1 << 16)
#define USART0_MR_SPI_WRDBT	(1 << 20)

#define USART0_MR_SPI_s	MMIO_REG(0x40024004, struct __struct_USART0_MR_SPI)
struct __struct_USART0_MR_SPI
{
  uint32_t usart_mode : 4;
  uint32_t usclks : 2;
  uint32_t chrl : 2;
  uint32_t cpha : 1;
  uint32_t  : 7;
  uint32_t cpol : 1;
  uint32_t  : 3;
  uint32_t wrdbt : 1;
  uint32_t  : 11;
};

#define USART0_IER	MMIO_REG(0x40024008, uint32_t)
#define USART0_IER_RXRDY	(1 << 0)
#define USART0_IER_TXRDY	(1 << 1)
#define USART0_IER_RXBRK	(1 << 2)
#define USART0_IER_ENDRX	(1 << 3)
#define USART0_IER_ENDTX	(1 << 4)
#define USART0_IER_OVRE	(1 << 5)
#define USART0_IER_FRAME	(1 << 6)
#define USART0_IER_PARE	(1 << 7)
#define USART0_IER_TIMEOUT	(1 << 8)
#define USART0_IER_TXEMPTY	(1 << 9)
#define USART0_IER_ITER	(1 << 10)
#define USART0_IER_TXBUFE	(1 << 11)
#define USART0_IER_RXBUFF	(1 << 12)
#define USART0_IER_NACK	(1 << 13)
#define USART0_IER_RIIC	(1 << 16)
#define USART0_IER_DSRIC	(1 << 17)
#define USART0_IER_DCDIC	(1 << 18)
#define USART0_IER_CTSIC	(1 << 19)
#define USART0_IER_MANE	(1 << 24)

#define USART0_IER_s	MMIO_REG(0x40024008, struct __struct_USART0_IER)
struct __struct_USART0_IER
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t rxbrk : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t timeout : 1;
  uint32_t txempty : 1;
  uint32_t iter : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t nack : 1;
  uint32_t  : 2;
  uint32_t riic : 1;
  uint32_t dsric : 1;
  uint32_t dcdic : 1;
  uint32_t ctsic : 1;
  uint32_t  : 4;
  uint32_t mane : 1;
  uint32_t  : 7;
};

#define USART0_IER_SPI	MMIO_REG(0x40024008, uint32_t)
#define USART0_IER_SPI_RXRDY	(1 << 0)
#define USART0_IER_SPI_TXRDY	(1 << 1)
#define USART0_IER_SPI_OVRE	(1 << 5)
#define USART0_IER_SPI_TXEMPTY	(1 << 9)
#define USART0_IER_SPI_UNRE	(1 << 10)

#define USART0_IER_SPI_s	MMIO_REG(0x40024008, struct __struct_USART0_IER_SPI)
struct __struct_USART0_IER_SPI
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 3;
  uint32_t ovre : 1;
  uint32_t  : 3;
  uint32_t txempty : 1;
  uint32_t unre : 1;
  uint32_t  : 21;
};

#define USART0_IDR	MMIO_REG(0x4002400c, uint32_t)
#define USART0_IDR_RXRDY	(1 << 0)
#define USART0_IDR_TXRDY	(1 << 1)
#define USART0_IDR_RXBRK	(1 << 2)
#define USART0_IDR_ENDRX	(1 << 3)
#define USART0_IDR_ENDTX	(1 << 4)
#define USART0_IDR_OVRE	(1 << 5)
#define USART0_IDR_FRAME	(1 << 6)
#define USART0_IDR_PARE	(1 << 7)
#define USART0_IDR_TIMEOUT	(1 << 8)
#define USART0_IDR_TXEMPTY	(1 << 9)
#define USART0_IDR_ITER	(1 << 10)
#define USART0_IDR_TXBUFE	(1 << 11)
#define USART0_IDR_RXBUFF	(1 << 12)
#define USART0_IDR_NACK	(1 << 13)
#define USART0_IDR_RIIC	(1 << 16)
#define USART0_IDR_DSRIC	(1 << 17)
#define USART0_IDR_DCDIC	(1 << 18)
#define USART0_IDR_CTSIC	(1 << 19)
#define USART0_IDR_MANE	(1 << 24)

#define USART0_IDR_s	MMIO_REG(0x4002400c, struct __struct_USART0_IDR)
struct __struct_USART0_IDR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t rxbrk : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t timeout : 1;
  uint32_t txempty : 1;
  uint32_t iter : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t nack : 1;
  uint32_t  : 2;
  uint32_t riic : 1;
  uint32_t dsric : 1;
  uint32_t dcdic : 1;
  uint32_t ctsic : 1;
  uint32_t  : 4;
  uint32_t mane : 1;
  uint32_t  : 7;
};

#define USART0_IDR_SPI	MMIO_REG(0x4002400c, uint32_t)
#define USART0_IDR_SPI_RXRDY	(1 << 0)
#define USART0_IDR_SPI_TXRDY	(1 << 1)
#define USART0_IDR_SPI_OVRE	(1 << 5)
#define USART0_IDR_SPI_TXEMPTY	(1 << 9)
#define USART0_IDR_SPI_UNRE	(1 << 10)

#define USART0_IDR_SPI_s	MMIO_REG(0x4002400c, struct __struct_USART0_IDR_SPI)
struct __struct_USART0_IDR_SPI
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 3;
  uint32_t ovre : 1;
  uint32_t  : 3;
  uint32_t txempty : 1;
  uint32_t unre : 1;
  uint32_t  : 21;
};

#define USART0_IMR	MMIO_REG(0x40024010, uint32_t)
#define USART0_IMR_RXRDY	(1 << 0)
#define USART0_IMR_TXRDY	(1 << 1)
#define USART0_IMR_RXBRK	(1 << 2)
#define USART0_IMR_ENDRX	(1 << 3)
#define USART0_IMR_ENDTX	(1 << 4)
#define USART0_IMR_OVRE	(1 << 5)
#define USART0_IMR_FRAME	(1 << 6)
#define USART0_IMR_PARE	(1 << 7)
#define USART0_IMR_TIMEOUT	(1 << 8)
#define USART0_IMR_TXEMPTY	(1 << 9)
#define USART0_IMR_ITER	(1 << 10)
#define USART0_IMR_TXBUFE	(1 << 11)
#define USART0_IMR_RXBUFF	(1 << 12)
#define USART0_IMR_NACK	(1 << 13)
#define USART0_IMR_RIIC	(1 << 16)
#define USART0_IMR_DSRIC	(1 << 17)
#define USART0_IMR_DCDIC	(1 << 18)
#define USART0_IMR_CTSIC	(1 << 19)
#define USART0_IMR_MANE	(1 << 24)

#define USART0_IMR_s	MMIO_REG(0x40024010, struct __struct_USART0_IMR)
struct __struct_USART0_IMR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t rxbrk : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t timeout : 1;
  uint32_t txempty : 1;
  uint32_t iter : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t nack : 1;
  uint32_t  : 2;
  uint32_t riic : 1;
  uint32_t dsric : 1;
  uint32_t dcdic : 1;
  uint32_t ctsic : 1;
  uint32_t  : 4;
  uint32_t mane : 1;
  uint32_t  : 7;
};

#define USART0_IMR_SPI	MMIO_REG(0x40024010, uint32_t)
#define USART0_IMR_SPI_RXRDY	(1 << 0)
#define USART0_IMR_SPI_TXRDY	(1 << 1)
#define USART0_IMR_SPI_OVRE	(1 << 5)
#define USART0_IMR_SPI_TXEMPTY	(1 << 9)
#define USART0_IMR_SPI_UNRE	(1 << 10)

#define USART0_IMR_SPI_s	MMIO_REG(0x40024010, struct __struct_USART0_IMR_SPI)
struct __struct_USART0_IMR_SPI
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 3;
  uint32_t ovre : 1;
  uint32_t  : 3;
  uint32_t txempty : 1;
  uint32_t unre : 1;
  uint32_t  : 21;
};

#define USART0_CSR	MMIO_REG(0x40024014, uint32_t)
#define USART0_CSR_RXRDY	(1 << 0)
#define USART0_CSR_TXRDY	(1 << 1)
#define USART0_CSR_RXBRK	(1 << 2)
#define USART0_CSR_ENDRX	(1 << 3)
#define USART0_CSR_ENDTX	(1 << 4)
#define USART0_CSR_OVRE	(1 << 5)
#define USART0_CSR_FRAME	(1 << 6)
#define USART0_CSR_PARE	(1 << 7)
#define USART0_CSR_TIMEOUT	(1 << 8)
#define USART0_CSR_TXEMPTY	(1 << 9)
#define USART0_CSR_ITER	(1 << 10)
#define USART0_CSR_TXBUFE	(1 << 11)
#define USART0_CSR_RXBUFF	(1 << 12)
#define USART0_CSR_NACK	(1 << 13)
#define USART0_CSR_RIIC	(1 << 16)
#define USART0_CSR_DSRIC	(1 << 17)
#define USART0_CSR_DCDIC	(1 << 18)
#define USART0_CSR_CTSIC	(1 << 19)
#define USART0_CSR_RI	(1 << 20)
#define USART0_CSR_DSR	(1 << 21)
#define USART0_CSR_DCD	(1 << 22)
#define USART0_CSR_CTS	(1 << 23)
#define USART0_CSR_MANERR	(1 << 24)

#define USART0_CSR_s	MMIO_REG(0x40024014, struct __struct_USART0_CSR)
struct __struct_USART0_CSR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t rxbrk : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t timeout : 1;
  uint32_t txempty : 1;
  uint32_t iter : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t nack : 1;
  uint32_t  : 2;
  uint32_t riic : 1;
  uint32_t dsric : 1;
  uint32_t dcdic : 1;
  uint32_t ctsic : 1;
  uint32_t ri : 1;
  uint32_t dsr : 1;
  uint32_t dcd : 1;
  uint32_t cts : 1;
  uint32_t manerr : 1;
  uint32_t  : 7;
};

#define USART0_CSR_SPI	MMIO_REG(0x40024014, uint32_t)
#define USART0_CSR_SPI_RXRDY	(1 << 0)
#define USART0_CSR_SPI_TXRDY	(1 << 1)
#define USART0_CSR_SPI_OVRE	(1 << 5)
#define USART0_CSR_SPI_TXEMPTY	(1 << 9)
#define USART0_CSR_SPI_UNRE	(1 << 10)

#define USART0_CSR_SPI_s	MMIO_REG(0x40024014, struct __struct_USART0_CSR_SPI)
struct __struct_USART0_CSR_SPI
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 3;
  uint32_t ovre : 1;
  uint32_t  : 3;
  uint32_t txempty : 1;
  uint32_t unre : 1;
  uint32_t  : 21;
};

#define USART0_RHR	MMIO_REG(0x40024018, uint32_t)
#define USART0_RHR_RXCHR(x)	((x) << 0)
#define USART0_RHR_RXCHR_MSK	0x000001ff
#define USART0_RHR_RXCHR_VAL(x)	(((x) >> 0) & 0x1ff)
#define USART0_RHR_RXSYNH	(1 << 15)

#define USART0_RHR_s	MMIO_REG(0x40024018, struct __struct_USART0_RHR)
struct __struct_USART0_RHR
{
  uint32_t rxchr : 9;
  uint32_t  : 6;
  uint32_t rxsynh : 1;
  uint32_t  : 16;
};

#define USART0_THR	MMIO_REG(0x4002401c, uint32_t)
#define USART0_THR_TXCHR(x)	((x) << 0)
#define USART0_THR_TXCHR_MSK	0x000001ff
#define USART0_THR_TXCHR_VAL(x)	(((x) >> 0) & 0x1ff)
#define USART0_THR_TXSYNH	(1 << 15)

#define USART0_THR_s	MMIO_REG(0x4002401c, struct __struct_USART0_THR)
struct __struct_USART0_THR
{
  uint32_t txchr : 9;
  uint32_t  : 6;
  uint32_t txsynh : 1;
  uint32_t  : 16;
};

#define USART0_BRGR	MMIO_REG(0x40024020, uint32_t)
#define USART0_BRGR_CD(x)	((x) << 0)
#define USART0_BRGR_CD_MSK	0x0000ffff
#define USART0_BRGR_CD_VAL(x)	(((x) >> 0) & 0xffff)
#define USART0_BRGR_FP(x)	((x) << 16)
#define USART0_BRGR_FP_MSK	0x00070000
#define USART0_BRGR_FP_VAL(x)	(((x) >> 16) & 0x7)

#define USART0_BRGR_s	MMIO_REG(0x40024020, struct __struct_USART0_BRGR)
struct __struct_USART0_BRGR
{
  uint32_t cd : 16;
  uint32_t fp : 3;
  uint32_t  : 13;
};

#define USART0_RTOR	MMIO_REG(0x40024024, uint32_t)
#define USART0_RTOR_TO(x)	((x) << 0)
#define USART0_RTOR_TO_MSK	0x0000ffff
#define USART0_RTOR_TO_VAL(x)	(((x) >> 0) & 0xffff)

#define USART0_RTOR_s	MMIO_REG(0x40024024, struct __struct_USART0_RTOR)
struct __struct_USART0_RTOR
{
  uint32_t to : 16;
  uint32_t  : 16;
};

#define USART0_TTGR	MMIO_REG(0x40024028, uint32_t)
#define USART0_TTGR_TG(x)	((x) << 0)
#define USART0_TTGR_TG_MSK	0x000000ff
#define USART0_TTGR_TG_VAL(x)	(((x) >> 0) & 0xff)

#define USART0_TTGR_s	MMIO_REG(0x40024028, struct __struct_USART0_TTGR)
struct __struct_USART0_TTGR
{
  uint32_t tg : 8;
  uint32_t  : 24;
};

#define USART0_FIDI	MMIO_REG(0x40024040, uint32_t)
#define USART0_FIDI_FI_DI_RATIO(x)	((x) << 0)
#define USART0_FIDI_FI_DI_RATIO_MSK	0x000007ff
#define USART0_FIDI_FI_DI_RATIO_VAL(x)	(((x) >> 0) & 0x7ff)

#define USART0_FIDI_s	MMIO_REG(0x40024040, struct __struct_USART0_FIDI)
struct __struct_USART0_FIDI
{
  uint32_t fi_di_ratio : 11;
  uint32_t  : 21;
};

#define USART0_NER	MMIO_REG(0x40024044, uint32_t)
#define USART0_NER_NB_ERRORS(x)	((x) << 0)
#define USART0_NER_NB_ERRORS_MSK	0x000000ff
#define USART0_NER_NB_ERRORS_VAL(x)	(((x) >> 0) & 0xff)

#define USART0_NER_s	MMIO_REG(0x40024044, struct __struct_USART0_NER)
struct __struct_USART0_NER
{
  uint32_t nb_errors : 8;
  uint32_t  : 24;
};

#define USART0_IF	MMIO_REG(0x4002404c, uint32_t)
#define USART0_IF_IRDA_FILTER(x)	((x) << 0)
#define USART0_IF_IRDA_FILTER_MSK	0x000000ff
#define USART0_IF_IRDA_FILTER_VAL(x)	(((x) >> 0) & 0xff)

#define USART0_IF_s	MMIO_REG(0x4002404c, struct __struct_USART0_IF)
struct __struct_USART0_IF
{
  uint32_t irda_filter : 8;
  uint32_t  : 24;
};

#define USART0_MAN	MMIO_REG(0x40024050, uint32_t)
#define USART0_MAN_TX_PL(x)	((x) << 0)
#define USART0_MAN_TX_PL_MSK	0x0000000f
#define USART0_MAN_TX_PL_VAL(x)	(((x) >> 0) & 0xf)
#define USART0_MAN_TX_PP(x)	((x) << 8)
#define USART0_MAN_TX_PP_MSK	0x00000300
#define USART0_MAN_TX_PP_VAL(x)	(((x) >> 8) & 0x3)
#define USART0_MAN_TX_MPOL	(1 << 12)
#define USART0_MAN_RX_PL(x)	((x) << 16)
#define USART0_MAN_RX_PL_MSK	0x000f0000
#define USART0_MAN_RX_PL_VAL(x)	(((x) >> 16) & 0xf)
#define USART0_MAN_RX_PP(x)	((x) << 24)
#define USART0_MAN_RX_PP_MSK	0x03000000
#define USART0_MAN_RX_PP_VAL(x)	(((x) >> 24) & 0x3)
#define USART0_MAN_RX_MPOL	(1 << 28)
#define USART0_MAN_ONE	(1 << 29)
#define USART0_MAN_DRIFT	(1 << 30)

#define USART0_MAN_s	MMIO_REG(0x40024050, struct __struct_USART0_MAN)
struct __struct_USART0_MAN
{
  uint32_t tx_pl : 4;
  uint32_t  : 4;
  uint32_t tx_pp : 2;
  uint32_t  : 2;
  uint32_t tx_mpol : 1;
  uint32_t  : 3;
  uint32_t rx_pl : 4;
  uint32_t  : 4;
  uint32_t rx_pp : 2;
  uint32_t  : 2;
  uint32_t rx_mpol : 1;
  uint32_t one : 1;
  uint32_t drift : 1;
  uint32_t  : 1;
};

#define USART0_WPMR	MMIO_REG(0x400240e4, uint32_t)
#define USART0_WPMR_WPEN	(1 << 0)
#define USART0_WPMR_WPKEY(x)	((x) << 8)
#define USART0_WPMR_WPKEY_MSK	0xffffff00
#define USART0_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define USART0_WPMR_s	MMIO_REG(0x400240e4, struct __struct_USART0_WPMR)
struct __struct_USART0_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define USART0_WPSR	MMIO_REG(0x400240e8, uint32_t)
#define USART0_WPSR_WPVS	(1 << 0)
#define USART0_WPSR_WPVSRC(x)	((x) << 8)
#define USART0_WPSR_WPVSRC_MSK	0x00ffff00
#define USART0_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define USART0_WPSR_s	MMIO_REG(0x400240e8, struct __struct_USART0_WPSR)
struct __struct_USART0_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

// 0x40024100 USART0_PDC

#define USART0_PDC_RPR	MMIO_REG(0x40024100, uint32_t)

#define USART0_PDC_RCR	MMIO_REG(0x40024104, uint32_t)

#define USART0_PDC_TPR	MMIO_REG(0x40024108, uint32_t)

#define USART0_PDC_TCR	MMIO_REG(0x4002410c, uint32_t)

#define USART0_PDC_RNPR	MMIO_REG(0x40024110, uint32_t)

#define USART0_PDC_RNCR	MMIO_REG(0x40024114, uint32_t)

#define USART0_PDC_TNPR	MMIO_REG(0x40024118, uint32_t)

#define USART0_PDC_TNCR	MMIO_REG(0x4002411c, uint32_t)

#define USART0_PDC_PTCR	MMIO_REG(0x40024120, uint32_t)
#define USART0_PDC_PTCR_RXTEN	(1 << 0)
#define USART0_PDC_PTCR_RXTDIS	(1 << 1)
#define USART0_PDC_PTCR_TXTEN	(1 << 8)
#define USART0_PDC_PTCR_TXTDIS	(1 << 9)

#define USART0_PDC_PTCR_s	MMIO_REG(0x40024120, struct __struct_USART0_PDC_PTCR)
struct __struct_USART0_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define USART0_PDC_PTSR	MMIO_REG(0x40024124, uint32_t)
#define USART0_PDC_PTSR_RXTEN	(1 << 0)
#define USART0_PDC_PTSR_TXTEN	(1 << 8)

#define USART0_PDC_PTSR_s	MMIO_REG(0x40024124, struct __struct_USART0_PDC_PTSR)
struct __struct_USART0_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x40028000 USART1

#define USART1_CR	MMIO_REG(0x40028000, uint32_t)
#define USART1_CR_RSTRX	(1 << 2)
#define USART1_CR_RSTTX	(1 << 3)
#define USART1_CR_RXEN	(1 << 4)
#define USART1_CR_RXDIS	(1 << 5)
#define USART1_CR_TXEN	(1 << 6)
#define USART1_CR_TXDIS	(1 << 7)
#define USART1_CR_RSTSTA	(1 << 8)
#define USART1_CR_STTBRK	(1 << 9)
#define USART1_CR_STPBRK	(1 << 10)
#define USART1_CR_STTTO	(1 << 11)
#define USART1_CR_SENDA	(1 << 12)
#define USART1_CR_RSTIT	(1 << 13)
#define USART1_CR_RSTNACK	(1 << 14)
#define USART1_CR_RETTO	(1 << 15)
#define USART1_CR_DTREN	(1 << 16)
#define USART1_CR_DTRDIS	(1 << 17)
#define USART1_CR_RTSEN	(1 << 18)
#define USART1_CR_RTSDIS	(1 << 19)

#define USART1_CR_s	MMIO_REG(0x40028000, struct __struct_USART1_CR)
struct __struct_USART1_CR
{
  uint32_t  : 2;
  uint32_t rstrx : 1;
  uint32_t rsttx : 1;
  uint32_t rxen : 1;
  uint32_t rxdis : 1;
  uint32_t txen : 1;
  uint32_t txdis : 1;
  uint32_t rststa : 1;
  uint32_t sttbrk : 1;
  uint32_t stpbrk : 1;
  uint32_t sttto : 1;
  uint32_t senda : 1;
  uint32_t rstit : 1;
  uint32_t rstnack : 1;
  uint32_t retto : 1;
  uint32_t dtren : 1;
  uint32_t dtrdis : 1;
  uint32_t rtsen : 1;
  uint32_t rtsdis : 1;
  uint32_t  : 12;
};

#define USART1_CR_SPI	MMIO_REG(0x40028000, uint32_t)
#define USART1_CR_SPI_RSTRX	(1 << 2)
#define USART1_CR_SPI_RSTTX	(1 << 3)
#define USART1_CR_SPI_RXEN	(1 << 4)
#define USART1_CR_SPI_RXDIS	(1 << 5)
#define USART1_CR_SPI_TXEN	(1 << 6)
#define USART1_CR_SPI_TXDIS	(1 << 7)
#define USART1_CR_SPI_RSTSTA	(1 << 8)
#define USART1_CR_SPI_FCS	(1 << 18)
#define USART1_CR_SPI_RCS	(1 << 19)

#define USART1_CR_SPI_s	MMIO_REG(0x40028000, struct __struct_USART1_CR_SPI)
struct __struct_USART1_CR_SPI
{
  uint32_t  : 2;
  uint32_t rstrx : 1;
  uint32_t rsttx : 1;
  uint32_t rxen : 1;
  uint32_t rxdis : 1;
  uint32_t txen : 1;
  uint32_t txdis : 1;
  uint32_t rststa : 1;
  uint32_t  : 9;
  uint32_t fcs : 1;
  uint32_t rcs : 1;
  uint32_t  : 12;
};

#define USART1_MR	MMIO_REG(0x40028004, uint32_t)
#define USART1_MR_USART_MODE(x)	((x) << 0)
#define USART1_MR_USART_MODE_MSK	0x0000000f
#define USART1_MR_USART_MODE_VAL(x)	(((x) >> 0) & 0xf)
#define USART1_MR_USCLKS(x)	((x) << 4)
#define USART1_MR_USCLKS_MSK	0x00000030
#define USART1_MR_USCLKS_VAL(x)	(((x) >> 4) & 0x3)
#define USART1_MR_CHRL(x)	((x) << 6)
#define USART1_MR_CHRL_MSK	0x000000c0
#define USART1_MR_CHRL_VAL(x)	(((x) >> 6) & 0x3)
#define USART1_MR_SYNC	(1 << 8)
#define USART1_MR_PAR(x)	((x) << 9)
#define USART1_MR_PAR_MSK	0x00000e00
#define USART1_MR_PAR_VAL(x)	(((x) >> 9) & 0x7)
#define USART1_MR_NBSTOP(x)	((x) << 12)
#define USART1_MR_NBSTOP_MSK	0x00003000
#define USART1_MR_NBSTOP_VAL(x)	(((x) >> 12) & 0x3)
#define USART1_MR_CHMODE(x)	((x) << 14)
#define USART1_MR_CHMODE_MSK	0x0000c000
#define USART1_MR_CHMODE_VAL(x)	(((x) >> 14) & 0x3)
#define USART1_MR_MSBF	(1 << 16)
#define USART1_MR_MODE9	(1 << 17)
#define USART1_MR_CLKO	(1 << 18)
#define USART1_MR_OVER	(1 << 19)
#define USART1_MR_INACK	(1 << 20)
#define USART1_MR_DSNACK	(1 << 21)
#define USART1_MR_INVDATA	(1 << 22)
#define USART1_MR_VAR_SYNC	(1 << 23)
#define USART1_MR_MAX_ITERATION(x)	((x) << 24)
#define USART1_MR_MAX_ITERATION_MSK	0x07000000
#define USART1_MR_MAX_ITERATION_VAL(x)	(((x) >> 24) & 0x7)
#define USART1_MR_FILTER	(1 << 28)
#define USART1_MR_MAN	(1 << 29)
#define USART1_MR_MODSYNC	(1 << 30)
#define USART1_MR_ONEBIT	(1 << 31)

#define USART1_MR_s	MMIO_REG(0x40028004, struct __struct_USART1_MR)
struct __struct_USART1_MR
{
  uint32_t usart_mode : 4;
  uint32_t usclks : 2;
  uint32_t chrl : 2;
  uint32_t sync : 1;
  uint32_t par : 3;
  uint32_t nbstop : 2;
  uint32_t chmode : 2;
  uint32_t msbf : 1;
  uint32_t mode9 : 1;
  uint32_t clko : 1;
  uint32_t over : 1;
  uint32_t inack : 1;
  uint32_t dsnack : 1;
  uint32_t invdata : 1;
  uint32_t var_sync : 1;
  uint32_t max_iteration : 3;
  uint32_t  : 1;
  uint32_t filter : 1;
  uint32_t man : 1;
  uint32_t modsync : 1;
  uint32_t onebit : 1;
};

#define USART1_MR_SPI	MMIO_REG(0x40028004, uint32_t)
#define USART1_MR_SPI_USART_MODE(x)	((x) << 0)
#define USART1_MR_SPI_USART_MODE_MSK	0x0000000f
#define USART1_MR_SPI_USART_MODE_VAL(x)	(((x) >> 0) & 0xf)
#define USART1_MR_SPI_USCLKS(x)	((x) << 4)
#define USART1_MR_SPI_USCLKS_MSK	0x00000030
#define USART1_MR_SPI_USCLKS_VAL(x)	(((x) >> 4) & 0x3)
#define USART1_MR_SPI_CHRL(x)	((x) << 6)
#define USART1_MR_SPI_CHRL_MSK	0x000000c0
#define USART1_MR_SPI_CHRL_VAL(x)	(((x) >> 6) & 0x3)
#define USART1_MR_SPI_CPHA	(1 << 8)
#define USART1_MR_SPI_CPOL	(1 << 16)
#define USART1_MR_SPI_WRDBT	(1 << 20)

#define USART1_MR_SPI_s	MMIO_REG(0x40028004, struct __struct_USART1_MR_SPI)
struct __struct_USART1_MR_SPI
{
  uint32_t usart_mode : 4;
  uint32_t usclks : 2;
  uint32_t chrl : 2;
  uint32_t cpha : 1;
  uint32_t  : 7;
  uint32_t cpol : 1;
  uint32_t  : 3;
  uint32_t wrdbt : 1;
  uint32_t  : 11;
};

#define USART1_IER	MMIO_REG(0x40028008, uint32_t)
#define USART1_IER_RXRDY	(1 << 0)
#define USART1_IER_TXRDY	(1 << 1)
#define USART1_IER_RXBRK	(1 << 2)
#define USART1_IER_ENDRX	(1 << 3)
#define USART1_IER_ENDTX	(1 << 4)
#define USART1_IER_OVRE	(1 << 5)
#define USART1_IER_FRAME	(1 << 6)
#define USART1_IER_PARE	(1 << 7)
#define USART1_IER_TIMEOUT	(1 << 8)
#define USART1_IER_TXEMPTY	(1 << 9)
#define USART1_IER_ITER	(1 << 10)
#define USART1_IER_TXBUFE	(1 << 11)
#define USART1_IER_RXBUFF	(1 << 12)
#define USART1_IER_NACK	(1 << 13)
#define USART1_IER_RIIC	(1 << 16)
#define USART1_IER_DSRIC	(1 << 17)
#define USART1_IER_DCDIC	(1 << 18)
#define USART1_IER_CTSIC	(1 << 19)
#define USART1_IER_MANE	(1 << 24)

#define USART1_IER_s	MMIO_REG(0x40028008, struct __struct_USART1_IER)
struct __struct_USART1_IER
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t rxbrk : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t timeout : 1;
  uint32_t txempty : 1;
  uint32_t iter : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t nack : 1;
  uint32_t  : 2;
  uint32_t riic : 1;
  uint32_t dsric : 1;
  uint32_t dcdic : 1;
  uint32_t ctsic : 1;
  uint32_t  : 4;
  uint32_t mane : 1;
  uint32_t  : 7;
};

#define USART1_IER_SPI	MMIO_REG(0x40028008, uint32_t)
#define USART1_IER_SPI_RXRDY	(1 << 0)
#define USART1_IER_SPI_TXRDY	(1 << 1)
#define USART1_IER_SPI_OVRE	(1 << 5)
#define USART1_IER_SPI_TXEMPTY	(1 << 9)
#define USART1_IER_SPI_UNRE	(1 << 10)

#define USART1_IER_SPI_s	MMIO_REG(0x40028008, struct __struct_USART1_IER_SPI)
struct __struct_USART1_IER_SPI
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 3;
  uint32_t ovre : 1;
  uint32_t  : 3;
  uint32_t txempty : 1;
  uint32_t unre : 1;
  uint32_t  : 21;
};

#define USART1_IDR	MMIO_REG(0x4002800c, uint32_t)
#define USART1_IDR_RXRDY	(1 << 0)
#define USART1_IDR_TXRDY	(1 << 1)
#define USART1_IDR_RXBRK	(1 << 2)
#define USART1_IDR_ENDRX	(1 << 3)
#define USART1_IDR_ENDTX	(1 << 4)
#define USART1_IDR_OVRE	(1 << 5)
#define USART1_IDR_FRAME	(1 << 6)
#define USART1_IDR_PARE	(1 << 7)
#define USART1_IDR_TIMEOUT	(1 << 8)
#define USART1_IDR_TXEMPTY	(1 << 9)
#define USART1_IDR_ITER	(1 << 10)
#define USART1_IDR_TXBUFE	(1 << 11)
#define USART1_IDR_RXBUFF	(1 << 12)
#define USART1_IDR_NACK	(1 << 13)
#define USART1_IDR_RIIC	(1 << 16)
#define USART1_IDR_DSRIC	(1 << 17)
#define USART1_IDR_DCDIC	(1 << 18)
#define USART1_IDR_CTSIC	(1 << 19)
#define USART1_IDR_MANE	(1 << 24)

#define USART1_IDR_s	MMIO_REG(0x4002800c, struct __struct_USART1_IDR)
struct __struct_USART1_IDR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t rxbrk : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t timeout : 1;
  uint32_t txempty : 1;
  uint32_t iter : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t nack : 1;
  uint32_t  : 2;
  uint32_t riic : 1;
  uint32_t dsric : 1;
  uint32_t dcdic : 1;
  uint32_t ctsic : 1;
  uint32_t  : 4;
  uint32_t mane : 1;
  uint32_t  : 7;
};

#define USART1_IDR_SPI	MMIO_REG(0x4002800c, uint32_t)
#define USART1_IDR_SPI_RXRDY	(1 << 0)
#define USART1_IDR_SPI_TXRDY	(1 << 1)
#define USART1_IDR_SPI_OVRE	(1 << 5)
#define USART1_IDR_SPI_TXEMPTY	(1 << 9)
#define USART1_IDR_SPI_UNRE	(1 << 10)

#define USART1_IDR_SPI_s	MMIO_REG(0x4002800c, struct __struct_USART1_IDR_SPI)
struct __struct_USART1_IDR_SPI
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 3;
  uint32_t ovre : 1;
  uint32_t  : 3;
  uint32_t txempty : 1;
  uint32_t unre : 1;
  uint32_t  : 21;
};

#define USART1_IMR	MMIO_REG(0x40028010, uint32_t)
#define USART1_IMR_RXRDY	(1 << 0)
#define USART1_IMR_TXRDY	(1 << 1)
#define USART1_IMR_RXBRK	(1 << 2)
#define USART1_IMR_ENDRX	(1 << 3)
#define USART1_IMR_ENDTX	(1 << 4)
#define USART1_IMR_OVRE	(1 << 5)
#define USART1_IMR_FRAME	(1 << 6)
#define USART1_IMR_PARE	(1 << 7)
#define USART1_IMR_TIMEOUT	(1 << 8)
#define USART1_IMR_TXEMPTY	(1 << 9)
#define USART1_IMR_ITER	(1 << 10)
#define USART1_IMR_TXBUFE	(1 << 11)
#define USART1_IMR_RXBUFF	(1 << 12)
#define USART1_IMR_NACK	(1 << 13)
#define USART1_IMR_RIIC	(1 << 16)
#define USART1_IMR_DSRIC	(1 << 17)
#define USART1_IMR_DCDIC	(1 << 18)
#define USART1_IMR_CTSIC	(1 << 19)
#define USART1_IMR_MANE	(1 << 24)

#define USART1_IMR_s	MMIO_REG(0x40028010, struct __struct_USART1_IMR)
struct __struct_USART1_IMR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t rxbrk : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t timeout : 1;
  uint32_t txempty : 1;
  uint32_t iter : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t nack : 1;
  uint32_t  : 2;
  uint32_t riic : 1;
  uint32_t dsric : 1;
  uint32_t dcdic : 1;
  uint32_t ctsic : 1;
  uint32_t  : 4;
  uint32_t mane : 1;
  uint32_t  : 7;
};

#define USART1_IMR_SPI	MMIO_REG(0x40028010, uint32_t)
#define USART1_IMR_SPI_RXRDY	(1 << 0)
#define USART1_IMR_SPI_TXRDY	(1 << 1)
#define USART1_IMR_SPI_OVRE	(1 << 5)
#define USART1_IMR_SPI_TXEMPTY	(1 << 9)
#define USART1_IMR_SPI_UNRE	(1 << 10)

#define USART1_IMR_SPI_s	MMIO_REG(0x40028010, struct __struct_USART1_IMR_SPI)
struct __struct_USART1_IMR_SPI
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 3;
  uint32_t ovre : 1;
  uint32_t  : 3;
  uint32_t txempty : 1;
  uint32_t unre : 1;
  uint32_t  : 21;
};

#define USART1_CSR	MMIO_REG(0x40028014, uint32_t)
#define USART1_CSR_RXRDY	(1 << 0)
#define USART1_CSR_TXRDY	(1 << 1)
#define USART1_CSR_RXBRK	(1 << 2)
#define USART1_CSR_ENDRX	(1 << 3)
#define USART1_CSR_ENDTX	(1 << 4)
#define USART1_CSR_OVRE	(1 << 5)
#define USART1_CSR_FRAME	(1 << 6)
#define USART1_CSR_PARE	(1 << 7)
#define USART1_CSR_TIMEOUT	(1 << 8)
#define USART1_CSR_TXEMPTY	(1 << 9)
#define USART1_CSR_ITER	(1 << 10)
#define USART1_CSR_TXBUFE	(1 << 11)
#define USART1_CSR_RXBUFF	(1 << 12)
#define USART1_CSR_NACK	(1 << 13)
#define USART1_CSR_RIIC	(1 << 16)
#define USART1_CSR_DSRIC	(1 << 17)
#define USART1_CSR_DCDIC	(1 << 18)
#define USART1_CSR_CTSIC	(1 << 19)
#define USART1_CSR_RI	(1 << 20)
#define USART1_CSR_DSR	(1 << 21)
#define USART1_CSR_DCD	(1 << 22)
#define USART1_CSR_CTS	(1 << 23)
#define USART1_CSR_MANERR	(1 << 24)

#define USART1_CSR_s	MMIO_REG(0x40028014, struct __struct_USART1_CSR)
struct __struct_USART1_CSR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t rxbrk : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t timeout : 1;
  uint32_t txempty : 1;
  uint32_t iter : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t nack : 1;
  uint32_t  : 2;
  uint32_t riic : 1;
  uint32_t dsric : 1;
  uint32_t dcdic : 1;
  uint32_t ctsic : 1;
  uint32_t ri : 1;
  uint32_t dsr : 1;
  uint32_t dcd : 1;
  uint32_t cts : 1;
  uint32_t manerr : 1;
  uint32_t  : 7;
};

#define USART1_CSR_SPI	MMIO_REG(0x40028014, uint32_t)
#define USART1_CSR_SPI_RXRDY	(1 << 0)
#define USART1_CSR_SPI_TXRDY	(1 << 1)
#define USART1_CSR_SPI_OVRE	(1 << 5)
#define USART1_CSR_SPI_TXEMPTY	(1 << 9)
#define USART1_CSR_SPI_UNRE	(1 << 10)

#define USART1_CSR_SPI_s	MMIO_REG(0x40028014, struct __struct_USART1_CSR_SPI)
struct __struct_USART1_CSR_SPI
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 3;
  uint32_t ovre : 1;
  uint32_t  : 3;
  uint32_t txempty : 1;
  uint32_t unre : 1;
  uint32_t  : 21;
};

#define USART1_RHR	MMIO_REG(0x40028018, uint32_t)
#define USART1_RHR_RXCHR(x)	((x) << 0)
#define USART1_RHR_RXCHR_MSK	0x000001ff
#define USART1_RHR_RXCHR_VAL(x)	(((x) >> 0) & 0x1ff)
#define USART1_RHR_RXSYNH	(1 << 15)

#define USART1_RHR_s	MMIO_REG(0x40028018, struct __struct_USART1_RHR)
struct __struct_USART1_RHR
{
  uint32_t rxchr : 9;
  uint32_t  : 6;
  uint32_t rxsynh : 1;
  uint32_t  : 16;
};

#define USART1_THR	MMIO_REG(0x4002801c, uint32_t)
#define USART1_THR_TXCHR(x)	((x) << 0)
#define USART1_THR_TXCHR_MSK	0x000001ff
#define USART1_THR_TXCHR_VAL(x)	(((x) >> 0) & 0x1ff)
#define USART1_THR_TXSYNH	(1 << 15)

#define USART1_THR_s	MMIO_REG(0x4002801c, struct __struct_USART1_THR)
struct __struct_USART1_THR
{
  uint32_t txchr : 9;
  uint32_t  : 6;
  uint32_t txsynh : 1;
  uint32_t  : 16;
};

#define USART1_BRGR	MMIO_REG(0x40028020, uint32_t)
#define USART1_BRGR_CD(x)	((x) << 0)
#define USART1_BRGR_CD_MSK	0x0000ffff
#define USART1_BRGR_CD_VAL(x)	(((x) >> 0) & 0xffff)
#define USART1_BRGR_FP(x)	((x) << 16)
#define USART1_BRGR_FP_MSK	0x00070000
#define USART1_BRGR_FP_VAL(x)	(((x) >> 16) & 0x7)

#define USART1_BRGR_s	MMIO_REG(0x40028020, struct __struct_USART1_BRGR)
struct __struct_USART1_BRGR
{
  uint32_t cd : 16;
  uint32_t fp : 3;
  uint32_t  : 13;
};

#define USART1_RTOR	MMIO_REG(0x40028024, uint32_t)
#define USART1_RTOR_TO(x)	((x) << 0)
#define USART1_RTOR_TO_MSK	0x0000ffff
#define USART1_RTOR_TO_VAL(x)	(((x) >> 0) & 0xffff)

#define USART1_RTOR_s	MMIO_REG(0x40028024, struct __struct_USART1_RTOR)
struct __struct_USART1_RTOR
{
  uint32_t to : 16;
  uint32_t  : 16;
};

#define USART1_TTGR	MMIO_REG(0x40028028, uint32_t)
#define USART1_TTGR_TG(x)	((x) << 0)
#define USART1_TTGR_TG_MSK	0x000000ff
#define USART1_TTGR_TG_VAL(x)	(((x) >> 0) & 0xff)

#define USART1_TTGR_s	MMIO_REG(0x40028028, struct __struct_USART1_TTGR)
struct __struct_USART1_TTGR
{
  uint32_t tg : 8;
  uint32_t  : 24;
};

#define USART1_FIDI	MMIO_REG(0x40028040, uint32_t)
#define USART1_FIDI_FI_DI_RATIO(x)	((x) << 0)
#define USART1_FIDI_FI_DI_RATIO_MSK	0x000007ff
#define USART1_FIDI_FI_DI_RATIO_VAL(x)	(((x) >> 0) & 0x7ff)

#define USART1_FIDI_s	MMIO_REG(0x40028040, struct __struct_USART1_FIDI)
struct __struct_USART1_FIDI
{
  uint32_t fi_di_ratio : 11;
  uint32_t  : 21;
};

#define USART1_NER	MMIO_REG(0x40028044, uint32_t)
#define USART1_NER_NB_ERRORS(x)	((x) << 0)
#define USART1_NER_NB_ERRORS_MSK	0x000000ff
#define USART1_NER_NB_ERRORS_VAL(x)	(((x) >> 0) & 0xff)

#define USART1_NER_s	MMIO_REG(0x40028044, struct __struct_USART1_NER)
struct __struct_USART1_NER
{
  uint32_t nb_errors : 8;
  uint32_t  : 24;
};

#define USART1_IF	MMIO_REG(0x4002804c, uint32_t)
#define USART1_IF_IRDA_FILTER(x)	((x) << 0)
#define USART1_IF_IRDA_FILTER_MSK	0x000000ff
#define USART1_IF_IRDA_FILTER_VAL(x)	(((x) >> 0) & 0xff)

#define USART1_IF_s	MMIO_REG(0x4002804c, struct __struct_USART1_IF)
struct __struct_USART1_IF
{
  uint32_t irda_filter : 8;
  uint32_t  : 24;
};

#define USART1_MAN	MMIO_REG(0x40028050, uint32_t)
#define USART1_MAN_TX_PL(x)	((x) << 0)
#define USART1_MAN_TX_PL_MSK	0x0000000f
#define USART1_MAN_TX_PL_VAL(x)	(((x) >> 0) & 0xf)
#define USART1_MAN_TX_PP(x)	((x) << 8)
#define USART1_MAN_TX_PP_MSK	0x00000300
#define USART1_MAN_TX_PP_VAL(x)	(((x) >> 8) & 0x3)
#define USART1_MAN_TX_MPOL	(1 << 12)
#define USART1_MAN_RX_PL(x)	((x) << 16)
#define USART1_MAN_RX_PL_MSK	0x000f0000
#define USART1_MAN_RX_PL_VAL(x)	(((x) >> 16) & 0xf)
#define USART1_MAN_RX_PP(x)	((x) << 24)
#define USART1_MAN_RX_PP_MSK	0x03000000
#define USART1_MAN_RX_PP_VAL(x)	(((x) >> 24) & 0x3)
#define USART1_MAN_RX_MPOL	(1 << 28)
#define USART1_MAN_ONE	(1 << 29)
#define USART1_MAN_DRIFT	(1 << 30)

#define USART1_MAN_s	MMIO_REG(0x40028050, struct __struct_USART1_MAN)
struct __struct_USART1_MAN
{
  uint32_t tx_pl : 4;
  uint32_t  : 4;
  uint32_t tx_pp : 2;
  uint32_t  : 2;
  uint32_t tx_mpol : 1;
  uint32_t  : 3;
  uint32_t rx_pl : 4;
  uint32_t  : 4;
  uint32_t rx_pp : 2;
  uint32_t  : 2;
  uint32_t rx_mpol : 1;
  uint32_t one : 1;
  uint32_t drift : 1;
  uint32_t  : 1;
};

#define USART1_WPMR	MMIO_REG(0x400280e4, uint32_t)
#define USART1_WPMR_WPEN	(1 << 0)
#define USART1_WPMR_WPKEY(x)	((x) << 8)
#define USART1_WPMR_WPKEY_MSK	0xffffff00
#define USART1_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define USART1_WPMR_s	MMIO_REG(0x400280e4, struct __struct_USART1_WPMR)
struct __struct_USART1_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define USART1_WPSR	MMIO_REG(0x400280e8, uint32_t)
#define USART1_WPSR_WPVS	(1 << 0)
#define USART1_WPSR_WPVSRC(x)	((x) << 8)
#define USART1_WPSR_WPVSRC_MSK	0x00ffff00
#define USART1_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define USART1_WPSR_s	MMIO_REG(0x400280e8, struct __struct_USART1_WPSR)
struct __struct_USART1_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

// 0x40028100 USART1_PDC

#define USART1_PDC_RPR	MMIO_REG(0x40028100, uint32_t)

#define USART1_PDC_RCR	MMIO_REG(0x40028104, uint32_t)

#define USART1_PDC_TPR	MMIO_REG(0x40028108, uint32_t)

#define USART1_PDC_TCR	MMIO_REG(0x4002810c, uint32_t)

#define USART1_PDC_RNPR	MMIO_REG(0x40028110, uint32_t)

#define USART1_PDC_RNCR	MMIO_REG(0x40028114, uint32_t)

#define USART1_PDC_TNPR	MMIO_REG(0x40028118, uint32_t)

#define USART1_PDC_TNCR	MMIO_REG(0x4002811c, uint32_t)

#define USART1_PDC_PTCR	MMIO_REG(0x40028120, uint32_t)
#define USART1_PDC_PTCR_RXTEN	(1 << 0)
#define USART1_PDC_PTCR_RXTDIS	(1 << 1)
#define USART1_PDC_PTCR_TXTEN	(1 << 8)
#define USART1_PDC_PTCR_TXTDIS	(1 << 9)

#define USART1_PDC_PTCR_s	MMIO_REG(0x40028120, struct __struct_USART1_PDC_PTCR)
struct __struct_USART1_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define USART1_PDC_PTSR	MMIO_REG(0x40028124, uint32_t)
#define USART1_PDC_PTSR_RXTEN	(1 << 0)
#define USART1_PDC_PTSR_TXTEN	(1 << 8)

#define USART1_PDC_PTSR_s	MMIO_REG(0x40028124, struct __struct_USART1_PDC_PTSR)
struct __struct_USART1_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x40034000 UDP

#define UDP_FRM_NUM	MMIO_REG(0x40034000, uint32_t)
#define UDP_FRM_NUM_FRM_NUM(x)	((x) << 0)
#define UDP_FRM_NUM_FRM_NUM_MSK	0x000007ff
#define UDP_FRM_NUM_FRM_NUM_VAL(x)	(((x) >> 0) & 0x7ff)
#define UDP_FRM_NUM_FRM_ERR	(1 << 16)
#define UDP_FRM_NUM_FRM_OK	(1 << 17)

#define UDP_FRM_NUM_s	MMIO_REG(0x40034000, struct __struct_UDP_FRM_NUM)
struct __struct_UDP_FRM_NUM
{
  uint32_t frm_num : 11;
  uint32_t  : 5;
  uint32_t frm_err : 1;
  uint32_t frm_ok : 1;
  uint32_t  : 14;
};

#define UDP_GLB_STAT	MMIO_REG(0x40034004, uint32_t)
#define UDP_GLB_STAT_FADDEN	(1 << 0)
#define UDP_GLB_STAT_CONFG	(1 << 1)
#define UDP_GLB_STAT_ESR	(1 << 2)
#define UDP_GLB_STAT_RSMINPR	(1 << 3)
#define UDP_GLB_STAT_RMWUPE	(1 << 4)

#define UDP_GLB_STAT_s	MMIO_REG(0x40034004, struct __struct_UDP_GLB_STAT)
struct __struct_UDP_GLB_STAT
{
  uint32_t fadden : 1;
  uint32_t confg : 1;
  uint32_t esr : 1;
  uint32_t rsminpr : 1;
  uint32_t rmwupe : 1;
  uint32_t  : 27;
};

#define UDP_FADDR	MMIO_REG(0x40034008, uint32_t)
#define UDP_FADDR_FADD(x)	((x) << 0)
#define UDP_FADDR_FADD_MSK	0x0000007f
#define UDP_FADDR_FADD_VAL(x)	(((x) >> 0) & 0x7f)
#define UDP_FADDR_FEN	(1 << 8)

#define UDP_FADDR_s	MMIO_REG(0x40034008, struct __struct_UDP_FADDR)
struct __struct_UDP_FADDR
{
  uint32_t fadd : 7;
  uint32_t  : 1;
  uint32_t fen : 1;
  uint32_t  : 23;
};

#define UDP_IER	MMIO_REG(0x40034010, uint32_t)
#define UDP_IER_EP0INT	(1 << 0)
#define UDP_IER_EP1INT	(1 << 1)
#define UDP_IER_EP2INT	(1 << 2)
#define UDP_IER_EP3INT	(1 << 3)
#define UDP_IER_EP4INT	(1 << 4)
#define UDP_IER_EP5INT	(1 << 5)
#define UDP_IER_EP6INT	(1 << 6)
#define UDP_IER_EP7INT	(1 << 7)
#define UDP_IER_RXSUSP	(1 << 8)
#define UDP_IER_RXRSM	(1 << 9)
#define UDP_IER_EXTRSM	(1 << 10)
#define UDP_IER_SOFINT	(1 << 11)
#define UDP_IER_WAKEUP	(1 << 13)

#define UDP_IER_s	MMIO_REG(0x40034010, struct __struct_UDP_IER)
struct __struct_UDP_IER
{
  uint32_t ep0int : 1;
  uint32_t ep1int : 1;
  uint32_t ep2int : 1;
  uint32_t ep3int : 1;
  uint32_t ep4int : 1;
  uint32_t ep5int : 1;
  uint32_t ep6int : 1;
  uint32_t ep7int : 1;
  uint32_t rxsusp : 1;
  uint32_t rxrsm : 1;
  uint32_t extrsm : 1;
  uint32_t sofint : 1;
  uint32_t  : 1;
  uint32_t wakeup : 1;
  uint32_t  : 18;
};

#define UDP_IDR	MMIO_REG(0x40034014, uint32_t)
#define UDP_IDR_EP0INT	(1 << 0)
#define UDP_IDR_EP1INT	(1 << 1)
#define UDP_IDR_EP2INT	(1 << 2)
#define UDP_IDR_EP3INT	(1 << 3)
#define UDP_IDR_EP4INT	(1 << 4)
#define UDP_IDR_EP5INT	(1 << 5)
#define UDP_IDR_EP6INT	(1 << 6)
#define UDP_IDR_EP7INT	(1 << 7)
#define UDP_IDR_RXSUSP	(1 << 8)
#define UDP_IDR_RXRSM	(1 << 9)
#define UDP_IDR_EXTRSM	(1 << 10)
#define UDP_IDR_SOFINT	(1 << 11)
#define UDP_IDR_WAKEUP	(1 << 13)

#define UDP_IDR_s	MMIO_REG(0x40034014, struct __struct_UDP_IDR)
struct __struct_UDP_IDR
{
  uint32_t ep0int : 1;
  uint32_t ep1int : 1;
  uint32_t ep2int : 1;
  uint32_t ep3int : 1;
  uint32_t ep4int : 1;
  uint32_t ep5int : 1;
  uint32_t ep6int : 1;
  uint32_t ep7int : 1;
  uint32_t rxsusp : 1;
  uint32_t rxrsm : 1;
  uint32_t extrsm : 1;
  uint32_t sofint : 1;
  uint32_t  : 1;
  uint32_t wakeup : 1;
  uint32_t  : 18;
};

#define UDP_IMR	MMIO_REG(0x40034018, uint32_t)
#define UDP_IMR_EP0INT	(1 << 0)
#define UDP_IMR_EP1INT	(1 << 1)
#define UDP_IMR_EP2INT	(1 << 2)
#define UDP_IMR_EP3INT	(1 << 3)
#define UDP_IMR_EP4INT	(1 << 4)
#define UDP_IMR_EP5INT	(1 << 5)
#define UDP_IMR_EP6INT	(1 << 6)
#define UDP_IMR_EP7INT	(1 << 7)
#define UDP_IMR_RXSUSP	(1 << 8)
#define UDP_IMR_RXRSM	(1 << 9)
#define UDP_IMR_EXTRSM	(1 << 10)
#define UDP_IMR_SOFINT	(1 << 11)
#define UDP_IMR_BIT12	(1 << 12)
#define UDP_IMR_WAKEUP	(1 << 13)

#define UDP_IMR_s	MMIO_REG(0x40034018, struct __struct_UDP_IMR)
struct __struct_UDP_IMR
{
  uint32_t ep0int : 1;
  uint32_t ep1int : 1;
  uint32_t ep2int : 1;
  uint32_t ep3int : 1;
  uint32_t ep4int : 1;
  uint32_t ep5int : 1;
  uint32_t ep6int : 1;
  uint32_t ep7int : 1;
  uint32_t rxsusp : 1;
  uint32_t rxrsm : 1;
  uint32_t extrsm : 1;
  uint32_t sofint : 1;
  uint32_t bit12 : 1;
  uint32_t wakeup : 1;
  uint32_t  : 18;
};

#define UDP_ISR	MMIO_REG(0x4003401c, uint32_t)
#define UDP_ISR_EP0INT	(1 << 0)
#define UDP_ISR_EP1INT	(1 << 1)
#define UDP_ISR_EP2INT	(1 << 2)
#define UDP_ISR_EP3INT	(1 << 3)
#define UDP_ISR_EP4INT	(1 << 4)
#define UDP_ISR_EP5INT	(1 << 5)
#define UDP_ISR_EP6INT	(1 << 6)
#define UDP_ISR_EP7INT	(1 << 7)
#define UDP_ISR_RXSUSP	(1 << 8)
#define UDP_ISR_RXRSM	(1 << 9)
#define UDP_ISR_EXTRSM	(1 << 10)
#define UDP_ISR_SOFINT	(1 << 11)
#define UDP_ISR_ENDBUSRES	(1 << 12)
#define UDP_ISR_WAKEUP	(1 << 13)

#define UDP_ISR_s	MMIO_REG(0x4003401c, struct __struct_UDP_ISR)
struct __struct_UDP_ISR
{
  uint32_t ep0int : 1;
  uint32_t ep1int : 1;
  uint32_t ep2int : 1;
  uint32_t ep3int : 1;
  uint32_t ep4int : 1;
  uint32_t ep5int : 1;
  uint32_t ep6int : 1;
  uint32_t ep7int : 1;
  uint32_t rxsusp : 1;
  uint32_t rxrsm : 1;
  uint32_t extrsm : 1;
  uint32_t sofint : 1;
  uint32_t endbusres : 1;
  uint32_t wakeup : 1;
  uint32_t  : 18;
};

#define UDP_ICR	MMIO_REG(0x40034020, uint32_t)
#define UDP_ICR_RXSUSP	(1 << 8)
#define UDP_ICR_RXRSM	(1 << 9)
#define UDP_ICR_EXTRSM	(1 << 10)
#define UDP_ICR_SOFINT	(1 << 11)
#define UDP_ICR_ENDBUSRES	(1 << 12)
#define UDP_ICR_WAKEUP	(1 << 13)

#define UDP_ICR_s	MMIO_REG(0x40034020, struct __struct_UDP_ICR)
struct __struct_UDP_ICR
{
  uint32_t  : 8;
  uint32_t rxsusp : 1;
  uint32_t rxrsm : 1;
  uint32_t extrsm : 1;
  uint32_t sofint : 1;
  uint32_t endbusres : 1;
  uint32_t wakeup : 1;
  uint32_t  : 18;
};

#define UDP_RST_EP	MMIO_REG(0x40034028, uint32_t)
#define UDP_RST_EP_EP0	(1 << 0)
#define UDP_RST_EP_EP1	(1 << 1)
#define UDP_RST_EP_EP2	(1 << 2)
#define UDP_RST_EP_EP3	(1 << 3)
#define UDP_RST_EP_EP4	(1 << 4)
#define UDP_RST_EP_EP5	(1 << 5)
#define UDP_RST_EP_EP6	(1 << 6)
#define UDP_RST_EP_EP7	(1 << 7)

#define UDP_RST_EP_s	MMIO_REG(0x40034028, struct __struct_UDP_RST_EP)
struct __struct_UDP_RST_EP
{
  uint32_t ep0 : 1;
  uint32_t ep1 : 1;
  uint32_t ep2 : 1;
  uint32_t ep3 : 1;
  uint32_t ep4 : 1;
  uint32_t ep5 : 1;
  uint32_t ep6 : 1;
  uint32_t ep7 : 1;
  uint32_t  : 24;
};

#define UDP_CSR(n)	MMIO_REG(0x40034030 + n*4, uint32_t)
#define UDP_CSR_TXCOMP	(1 << 0)
#define UDP_CSR_RX_DATA_BK0	(1 << 1)
#define UDP_CSR_RXSETUP	(1 << 2)
#define UDP_CSR_STALLSENT	(1 << 3)
#define UDP_CSR_TXPKTRDY	(1 << 4)
#define UDP_CSR_FORCESTALL	(1 << 5)
#define UDP_CSR_RX_DATA_BK1	(1 << 6)
#define UDP_CSR_DIR	(1 << 7)
#define UDP_CSR_EPTYPE(x)	((x) << 8)
#define UDP_CSR_EPTYPE_MSK	0x00000700
#define UDP_CSR_EPTYPE_VAL(x)	(((x) >> 8) & 0x7)
#define UDP_CSR_DTGLE	(1 << 11)
#define UDP_CSR_EPEDS	(1 << 15)
#define UDP_CSR_RXBYTECNT(x)	((x) << 16)
#define UDP_CSR_RXBYTECNT_MSK	0x07ff0000
#define UDP_CSR_RXBYTECNT_VAL(x)	(((x) >> 16) & 0x7ff)

#define UDP_CSR_s(n)	MMIO_REG(0x40034030 + n*4, struct __struct_UDP_CSR)
struct __struct_UDP_CSR
{
  uint32_t txcomp : 1;
  uint32_t rx_data_bk0 : 1;
  uint32_t rxsetup : 1;
  uint32_t stallsent : 1;
  uint32_t txpktrdy : 1;
  uint32_t forcestall : 1;
  uint32_t rx_data_bk1 : 1;
  uint32_t dir : 1;
  uint32_t eptype : 3;
  uint32_t dtgle : 1;
  uint32_t  : 3;
  uint32_t epeds : 1;
  uint32_t rxbytecnt : 11;
  uint32_t  : 5;
};

#define UDP_FDR(n)	MMIO_REG(0x40034050 + n*4, uint32_t)
#define UDP_FDR_FIFO_DATA(x)	((x) << 0)
#define UDP_FDR_FIFO_DATA_MSK	0x000000ff
#define UDP_FDR_FIFO_DATA_VAL(x)	(((x) >> 0) & 0xff)

#define UDP_FDR_s(n)	MMIO_REG(0x40034050 + n*4, struct __struct_UDP_FDR)
struct __struct_UDP_FDR
{
  uint32_t fifo_data : 8;
  uint32_t  : 24;
};

#define UDP_TXVC	MMIO_REG(0x40034074, uint32_t)
#define UDP_TXVC_TXVDIS	(1 << 8)
#define UDP_TXVC_PUON	(1 << 9)

#define UDP_TXVC_s	MMIO_REG(0x40034074, struct __struct_UDP_TXVC)
struct __struct_UDP_TXVC
{
  uint32_t  : 8;
  uint32_t txvdis : 1;
  uint32_t puon : 1;
  uint32_t  : 22;
};

// 0x40038000 ADC

#define ADC_CR	MMIO_REG(0x40038000, uint32_t)
#define ADC_CR_SWRST	(1 << 0)
#define ADC_CR_START	(1 << 1)
#define ADC_CR_AUTOCAL	(1 << 3)

#define ADC_CR_s	MMIO_REG(0x40038000, struct __struct_ADC_CR)
struct __struct_ADC_CR
{
  uint32_t swrst : 1;
  uint32_t start : 1;
  uint32_t  : 1;
  uint32_t autocal : 1;
  uint32_t  : 28;
};

#define ADC_MR	MMIO_REG(0x40038004, uint32_t)
#define ADC_MR_TRGEN	(1 << 0)
#define ADC_MR_TRGSEL(x)	((x) << 1)
#define ADC_MR_TRGSEL_MSK	0x0000000e
#define ADC_MR_TRGSEL_VAL(x)	(((x) >> 1) & 0x7)
#define ADC_MR_LOWRES	(1 << 4)
#define ADC_MR_SLEEP	(1 << 5)
#define ADC_MR_FWUP	(1 << 6)
#define ADC_MR_FREERUN	(1 << 7)
#define ADC_MR_PRESCAL(x)	((x) << 8)
#define ADC_MR_PRESCAL_MSK	0x0000ff00
#define ADC_MR_PRESCAL_VAL(x)	(((x) >> 8) & 0xff)
#define ADC_MR_STARTUP(x)	((x) << 16)
#define ADC_MR_STARTUP_MSK	0x000f0000
#define ADC_MR_STARTUP_VAL(x)	(((x) >> 16) & 0xf)
#define ADC_MR_SETTLING(x)	((x) << 20)
#define ADC_MR_SETTLING_MSK	0x00300000
#define ADC_MR_SETTLING_VAL(x)	(((x) >> 20) & 0x3)
#define ADC_MR_ANACH	(1 << 23)
#define ADC_MR_TRACKTIM(x)	((x) << 24)
#define ADC_MR_TRACKTIM_MSK	0x0f000000
#define ADC_MR_TRACKTIM_VAL(x)	(((x) >> 24) & 0xf)
#define ADC_MR_TRANSFER(x)	((x) << 28)
#define ADC_MR_TRANSFER_MSK	0x30000000
#define ADC_MR_TRANSFER_VAL(x)	(((x) >> 28) & 0x3)
#define ADC_MR_USEQ	(1 << 31)

#define ADC_MR_s	MMIO_REG(0x40038004, struct __struct_ADC_MR)
struct __struct_ADC_MR
{
  uint32_t trgen : 1;
  uint32_t trgsel : 3;
  uint32_t lowres : 1;
  uint32_t sleep : 1;
  uint32_t fwup : 1;
  uint32_t freerun : 1;
  uint32_t prescal : 8;
  uint32_t startup : 4;
  uint32_t settling : 2;
  uint32_t  : 1;
  uint32_t anach : 1;
  uint32_t tracktim : 4;
  uint32_t transfer : 2;
  uint32_t  : 1;
  uint32_t useq : 1;
};

#define ADC_SEQR1	MMIO_REG(0x40038008, uint32_t)
#define ADC_SEQR1_USCH1(x)	((x) << 0)
#define ADC_SEQR1_USCH1_MSK	0x00000007
#define ADC_SEQR1_USCH1_VAL(x)	(((x) >> 0) & 0x7)
#define ADC_SEQR1_USCH2(x)	((x) << 4)
#define ADC_SEQR1_USCH2_MSK	0x00000070
#define ADC_SEQR1_USCH2_VAL(x)	(((x) >> 4) & 0x7)
#define ADC_SEQR1_USCH3(x)	((x) << 8)
#define ADC_SEQR1_USCH3_MSK	0x00000700
#define ADC_SEQR1_USCH3_VAL(x)	(((x) >> 8) & 0x7)
#define ADC_SEQR1_USCH4(x)	((x) << 12)
#define ADC_SEQR1_USCH4_MSK	0x00007000
#define ADC_SEQR1_USCH4_VAL(x)	(((x) >> 12) & 0x7)
#define ADC_SEQR1_USCH5(x)	((x) << 16)
#define ADC_SEQR1_USCH5_MSK	0x00070000
#define ADC_SEQR1_USCH5_VAL(x)	(((x) >> 16) & 0x7)
#define ADC_SEQR1_USCH6(x)	((x) << 20)
#define ADC_SEQR1_USCH6_MSK	0x00700000
#define ADC_SEQR1_USCH6_VAL(x)	(((x) >> 20) & 0x7)
#define ADC_SEQR1_USCH7(x)	((x) << 24)
#define ADC_SEQR1_USCH7_MSK	0x07000000
#define ADC_SEQR1_USCH7_VAL(x)	(((x) >> 24) & 0x7)
#define ADC_SEQR1_USCH8(x)	((x) << 28)
#define ADC_SEQR1_USCH8_MSK	0x70000000
#define ADC_SEQR1_USCH8_VAL(x)	(((x) >> 28) & 0x7)

#define ADC_SEQR1_s	MMIO_REG(0x40038008, struct __struct_ADC_SEQR1)
struct __struct_ADC_SEQR1
{
  uint32_t usch1 : 3;
  uint32_t  : 1;
  uint32_t usch2 : 3;
  uint32_t  : 1;
  uint32_t usch3 : 3;
  uint32_t  : 1;
  uint32_t usch4 : 3;
  uint32_t  : 1;
  uint32_t usch5 : 3;
  uint32_t  : 1;
  uint32_t usch6 : 3;
  uint32_t  : 1;
  uint32_t usch7 : 3;
  uint32_t  : 1;
  uint32_t usch8 : 3;
  uint32_t  : 1;
};

#define ADC_SEQR2	MMIO_REG(0x4003800c, uint32_t)
#define ADC_SEQR2_USCH9(x)	((x) << 0)
#define ADC_SEQR2_USCH9_MSK	0x00000007
#define ADC_SEQR2_USCH9_VAL(x)	(((x) >> 0) & 0x7)
#define ADC_SEQR2_USCH10(x)	((x) << 4)
#define ADC_SEQR2_USCH10_MSK	0x00000070
#define ADC_SEQR2_USCH10_VAL(x)	(((x) >> 4) & 0x7)
#define ADC_SEQR2_USCH11(x)	((x) << 8)
#define ADC_SEQR2_USCH11_MSK	0x00000700
#define ADC_SEQR2_USCH11_VAL(x)	(((x) >> 8) & 0x7)
#define ADC_SEQR2_USCH12(x)	((x) << 12)
#define ADC_SEQR2_USCH12_MSK	0x00007000
#define ADC_SEQR2_USCH12_VAL(x)	(((x) >> 12) & 0x7)
#define ADC_SEQR2_USCH13(x)	((x) << 16)
#define ADC_SEQR2_USCH13_MSK	0x00070000
#define ADC_SEQR2_USCH13_VAL(x)	(((x) >> 16) & 0x7)
#define ADC_SEQR2_USCH14(x)	((x) << 20)
#define ADC_SEQR2_USCH14_MSK	0x00700000
#define ADC_SEQR2_USCH14_VAL(x)	(((x) >> 20) & 0x7)
#define ADC_SEQR2_USCH15(x)	((x) << 24)
#define ADC_SEQR2_USCH15_MSK	0x07000000
#define ADC_SEQR2_USCH15_VAL(x)	(((x) >> 24) & 0x7)
#define ADC_SEQR2_USCH16(x)	((x) << 28)
#define ADC_SEQR2_USCH16_MSK	0x70000000
#define ADC_SEQR2_USCH16_VAL(x)	(((x) >> 28) & 0x7)

#define ADC_SEQR2_s	MMIO_REG(0x4003800c, struct __struct_ADC_SEQR2)
struct __struct_ADC_SEQR2
{
  uint32_t usch9 : 3;
  uint32_t  : 1;
  uint32_t usch10 : 3;
  uint32_t  : 1;
  uint32_t usch11 : 3;
  uint32_t  : 1;
  uint32_t usch12 : 3;
  uint32_t  : 1;
  uint32_t usch13 : 3;
  uint32_t  : 1;
  uint32_t usch14 : 3;
  uint32_t  : 1;
  uint32_t usch15 : 3;
  uint32_t  : 1;
  uint32_t usch16 : 3;
  uint32_t  : 1;
};

#define ADC_CHER	MMIO_REG(0x40038010, uint32_t)
#define ADC_CHER_CH0	(1 << 0)
#define ADC_CHER_CH1	(1 << 1)
#define ADC_CHER_CH2	(1 << 2)
#define ADC_CHER_CH3	(1 << 3)
#define ADC_CHER_CH4	(1 << 4)
#define ADC_CHER_CH5	(1 << 5)
#define ADC_CHER_CH6	(1 << 6)
#define ADC_CHER_CH7	(1 << 7)
#define ADC_CHER_CH8	(1 << 8)
#define ADC_CHER_CH9	(1 << 9)
#define ADC_CHER_CH10	(1 << 10)
#define ADC_CHER_CH11	(1 << 11)
#define ADC_CHER_CH12	(1 << 12)
#define ADC_CHER_CH13	(1 << 13)
#define ADC_CHER_CH14	(1 << 14)
#define ADC_CHER_CH15	(1 << 15)

#define ADC_CHER_s	MMIO_REG(0x40038010, struct __struct_ADC_CHER)
struct __struct_ADC_CHER
{
  uint32_t ch0 : 1;
  uint32_t ch1 : 1;
  uint32_t ch2 : 1;
  uint32_t ch3 : 1;
  uint32_t ch4 : 1;
  uint32_t ch5 : 1;
  uint32_t ch6 : 1;
  uint32_t ch7 : 1;
  uint32_t ch8 : 1;
  uint32_t ch9 : 1;
  uint32_t ch10 : 1;
  uint32_t ch11 : 1;
  uint32_t ch12 : 1;
  uint32_t ch13 : 1;
  uint32_t ch14 : 1;
  uint32_t ch15 : 1;
  uint32_t  : 16;
};

#define ADC_CHDR	MMIO_REG(0x40038014, uint32_t)
#define ADC_CHDR_CH0	(1 << 0)
#define ADC_CHDR_CH1	(1 << 1)
#define ADC_CHDR_CH2	(1 << 2)
#define ADC_CHDR_CH3	(1 << 3)
#define ADC_CHDR_CH4	(1 << 4)
#define ADC_CHDR_CH5	(1 << 5)
#define ADC_CHDR_CH6	(1 << 6)
#define ADC_CHDR_CH7	(1 << 7)
#define ADC_CHDR_CH8	(1 << 8)
#define ADC_CHDR_CH9	(1 << 9)
#define ADC_CHDR_CH10	(1 << 10)
#define ADC_CHDR_CH11	(1 << 11)
#define ADC_CHDR_CH12	(1 << 12)
#define ADC_CHDR_CH13	(1 << 13)
#define ADC_CHDR_CH14	(1 << 14)
#define ADC_CHDR_CH15	(1 << 15)

#define ADC_CHDR_s	MMIO_REG(0x40038014, struct __struct_ADC_CHDR)
struct __struct_ADC_CHDR
{
  uint32_t ch0 : 1;
  uint32_t ch1 : 1;
  uint32_t ch2 : 1;
  uint32_t ch3 : 1;
  uint32_t ch4 : 1;
  uint32_t ch5 : 1;
  uint32_t ch6 : 1;
  uint32_t ch7 : 1;
  uint32_t ch8 : 1;
  uint32_t ch9 : 1;
  uint32_t ch10 : 1;
  uint32_t ch11 : 1;
  uint32_t ch12 : 1;
  uint32_t ch13 : 1;
  uint32_t ch14 : 1;
  uint32_t ch15 : 1;
  uint32_t  : 16;
};

#define ADC_CHSR	MMIO_REG(0x40038018, uint32_t)
#define ADC_CHSR_CH0	(1 << 0)
#define ADC_CHSR_CH1	(1 << 1)
#define ADC_CHSR_CH2	(1 << 2)
#define ADC_CHSR_CH3	(1 << 3)
#define ADC_CHSR_CH4	(1 << 4)
#define ADC_CHSR_CH5	(1 << 5)
#define ADC_CHSR_CH6	(1 << 6)
#define ADC_CHSR_CH7	(1 << 7)
#define ADC_CHSR_CH8	(1 << 8)
#define ADC_CHSR_CH9	(1 << 9)
#define ADC_CHSR_CH10	(1 << 10)
#define ADC_CHSR_CH11	(1 << 11)
#define ADC_CHSR_CH12	(1 << 12)
#define ADC_CHSR_CH13	(1 << 13)
#define ADC_CHSR_CH14	(1 << 14)
#define ADC_CHSR_CH15	(1 << 15)

#define ADC_CHSR_s	MMIO_REG(0x40038018, struct __struct_ADC_CHSR)
struct __struct_ADC_CHSR
{
  uint32_t ch0 : 1;
  uint32_t ch1 : 1;
  uint32_t ch2 : 1;
  uint32_t ch3 : 1;
  uint32_t ch4 : 1;
  uint32_t ch5 : 1;
  uint32_t ch6 : 1;
  uint32_t ch7 : 1;
  uint32_t ch8 : 1;
  uint32_t ch9 : 1;
  uint32_t ch10 : 1;
  uint32_t ch11 : 1;
  uint32_t ch12 : 1;
  uint32_t ch13 : 1;
  uint32_t ch14 : 1;
  uint32_t ch15 : 1;
  uint32_t  : 16;
};

#define ADC_LCDR	MMIO_REG(0x40038020, uint32_t)
#define ADC_LCDR_LDATA(x)	((x) << 0)
#define ADC_LCDR_LDATA_MSK	0x00000fff
#define ADC_LCDR_LDATA_VAL(x)	(((x) >> 0) & 0xfff)
#define ADC_LCDR_CHNB(x)	((x) << 12)
#define ADC_LCDR_CHNB_MSK	0x0000f000
#define ADC_LCDR_CHNB_VAL(x)	(((x) >> 12) & 0xf)

#define ADC_LCDR_s	MMIO_REG(0x40038020, struct __struct_ADC_LCDR)
struct __struct_ADC_LCDR
{
  uint32_t ldata : 12;
  uint32_t chnb : 4;
  uint32_t  : 16;
};

#define ADC_IER	MMIO_REG(0x40038024, uint32_t)
#define ADC_IER_EOC0	(1 << 0)
#define ADC_IER_EOC1	(1 << 1)
#define ADC_IER_EOC2	(1 << 2)
#define ADC_IER_EOC3	(1 << 3)
#define ADC_IER_EOC4	(1 << 4)
#define ADC_IER_EOC5	(1 << 5)
#define ADC_IER_EOC6	(1 << 6)
#define ADC_IER_EOC7	(1 << 7)
#define ADC_IER_EOC8	(1 << 8)
#define ADC_IER_EOC9	(1 << 9)
#define ADC_IER_EOC10	(1 << 10)
#define ADC_IER_EOC11	(1 << 11)
#define ADC_IER_EOC12	(1 << 12)
#define ADC_IER_EOC13	(1 << 13)
#define ADC_IER_EOC14	(1 << 14)
#define ADC_IER_EOC15	(1 << 15)
#define ADC_IER_EOCAL	(1 << 23)
#define ADC_IER_DRDY	(1 << 24)
#define ADC_IER_GOVRE	(1 << 25)
#define ADC_IER_COMPE	(1 << 26)
#define ADC_IER_ENDRX	(1 << 27)
#define ADC_IER_RXBUFF	(1 << 28)

#define ADC_IER_s	MMIO_REG(0x40038024, struct __struct_ADC_IER)
struct __struct_ADC_IER
{
  uint32_t eoc0 : 1;
  uint32_t eoc1 : 1;
  uint32_t eoc2 : 1;
  uint32_t eoc3 : 1;
  uint32_t eoc4 : 1;
  uint32_t eoc5 : 1;
  uint32_t eoc6 : 1;
  uint32_t eoc7 : 1;
  uint32_t eoc8 : 1;
  uint32_t eoc9 : 1;
  uint32_t eoc10 : 1;
  uint32_t eoc11 : 1;
  uint32_t eoc12 : 1;
  uint32_t eoc13 : 1;
  uint32_t eoc14 : 1;
  uint32_t eoc15 : 1;
  uint32_t  : 7;
  uint32_t eocal : 1;
  uint32_t drdy : 1;
  uint32_t govre : 1;
  uint32_t compe : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 3;
};

#define ADC_IDR	MMIO_REG(0x40038028, uint32_t)
#define ADC_IDR_EOC0	(1 << 0)
#define ADC_IDR_EOC1	(1 << 1)
#define ADC_IDR_EOC2	(1 << 2)
#define ADC_IDR_EOC3	(1 << 3)
#define ADC_IDR_EOC4	(1 << 4)
#define ADC_IDR_EOC5	(1 << 5)
#define ADC_IDR_EOC6	(1 << 6)
#define ADC_IDR_EOC7	(1 << 7)
#define ADC_IDR_EOC8	(1 << 8)
#define ADC_IDR_EOC9	(1 << 9)
#define ADC_IDR_EOC10	(1 << 10)
#define ADC_IDR_EOC11	(1 << 11)
#define ADC_IDR_EOC12	(1 << 12)
#define ADC_IDR_EOC13	(1 << 13)
#define ADC_IDR_EOC14	(1 << 14)
#define ADC_IDR_EOC15	(1 << 15)
#define ADC_IDR_EOCAL	(1 << 23)
#define ADC_IDR_DRDY	(1 << 24)
#define ADC_IDR_GOVRE	(1 << 25)
#define ADC_IDR_COMPE	(1 << 26)
#define ADC_IDR_ENDRX	(1 << 27)
#define ADC_IDR_RXBUFF	(1 << 28)

#define ADC_IDR_s	MMIO_REG(0x40038028, struct __struct_ADC_IDR)
struct __struct_ADC_IDR
{
  uint32_t eoc0 : 1;
  uint32_t eoc1 : 1;
  uint32_t eoc2 : 1;
  uint32_t eoc3 : 1;
  uint32_t eoc4 : 1;
  uint32_t eoc5 : 1;
  uint32_t eoc6 : 1;
  uint32_t eoc7 : 1;
  uint32_t eoc8 : 1;
  uint32_t eoc9 : 1;
  uint32_t eoc10 : 1;
  uint32_t eoc11 : 1;
  uint32_t eoc12 : 1;
  uint32_t eoc13 : 1;
  uint32_t eoc14 : 1;
  uint32_t eoc15 : 1;
  uint32_t  : 7;
  uint32_t eocal : 1;
  uint32_t drdy : 1;
  uint32_t govre : 1;
  uint32_t compe : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 3;
};

#define ADC_IMR	MMIO_REG(0x4003802c, uint32_t)
#define ADC_IMR_EOC0	(1 << 0)
#define ADC_IMR_EOC1	(1 << 1)
#define ADC_IMR_EOC2	(1 << 2)
#define ADC_IMR_EOC3	(1 << 3)
#define ADC_IMR_EOC4	(1 << 4)
#define ADC_IMR_EOC5	(1 << 5)
#define ADC_IMR_EOC6	(1 << 6)
#define ADC_IMR_EOC7	(1 << 7)
#define ADC_IMR_EOC8	(1 << 8)
#define ADC_IMR_EOC9	(1 << 9)
#define ADC_IMR_EOC10	(1 << 10)
#define ADC_IMR_EOC11	(1 << 11)
#define ADC_IMR_EOC12	(1 << 12)
#define ADC_IMR_EOC13	(1 << 13)
#define ADC_IMR_EOC14	(1 << 14)
#define ADC_IMR_EOC15	(1 << 15)
#define ADC_IMR_EOCAL	(1 << 23)
#define ADC_IMR_DRDY	(1 << 24)
#define ADC_IMR_GOVRE	(1 << 25)
#define ADC_IMR_COMPE	(1 << 26)
#define ADC_IMR_ENDRX	(1 << 27)
#define ADC_IMR_RXBUFF	(1 << 28)

#define ADC_IMR_s	MMIO_REG(0x4003802c, struct __struct_ADC_IMR)
struct __struct_ADC_IMR
{
  uint32_t eoc0 : 1;
  uint32_t eoc1 : 1;
  uint32_t eoc2 : 1;
  uint32_t eoc3 : 1;
  uint32_t eoc4 : 1;
  uint32_t eoc5 : 1;
  uint32_t eoc6 : 1;
  uint32_t eoc7 : 1;
  uint32_t eoc8 : 1;
  uint32_t eoc9 : 1;
  uint32_t eoc10 : 1;
  uint32_t eoc11 : 1;
  uint32_t eoc12 : 1;
  uint32_t eoc13 : 1;
  uint32_t eoc14 : 1;
  uint32_t eoc15 : 1;
  uint32_t  : 7;
  uint32_t eocal : 1;
  uint32_t drdy : 1;
  uint32_t govre : 1;
  uint32_t compe : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 3;
};

#define ADC_ISR	MMIO_REG(0x40038030, uint32_t)
#define ADC_ISR_EOC0	(1 << 0)
#define ADC_ISR_EOC1	(1 << 1)
#define ADC_ISR_EOC2	(1 << 2)
#define ADC_ISR_EOC3	(1 << 3)
#define ADC_ISR_EOC4	(1 << 4)
#define ADC_ISR_EOC5	(1 << 5)
#define ADC_ISR_EOC6	(1 << 6)
#define ADC_ISR_EOC7	(1 << 7)
#define ADC_ISR_EOC8	(1 << 8)
#define ADC_ISR_EOC9	(1 << 9)
#define ADC_ISR_EOC10	(1 << 10)
#define ADC_ISR_EOC11	(1 << 11)
#define ADC_ISR_EOC12	(1 << 12)
#define ADC_ISR_EOC13	(1 << 13)
#define ADC_ISR_EOC14	(1 << 14)
#define ADC_ISR_EOC15	(1 << 15)
#define ADC_ISR_EOCAL	(1 << 23)
#define ADC_ISR_DRDY	(1 << 24)
#define ADC_ISR_GOVRE	(1 << 25)
#define ADC_ISR_COMPE	(1 << 26)
#define ADC_ISR_ENDRX	(1 << 27)
#define ADC_ISR_RXBUFF	(1 << 28)

#define ADC_ISR_s	MMIO_REG(0x40038030, struct __struct_ADC_ISR)
struct __struct_ADC_ISR
{
  uint32_t eoc0 : 1;
  uint32_t eoc1 : 1;
  uint32_t eoc2 : 1;
  uint32_t eoc3 : 1;
  uint32_t eoc4 : 1;
  uint32_t eoc5 : 1;
  uint32_t eoc6 : 1;
  uint32_t eoc7 : 1;
  uint32_t eoc8 : 1;
  uint32_t eoc9 : 1;
  uint32_t eoc10 : 1;
  uint32_t eoc11 : 1;
  uint32_t eoc12 : 1;
  uint32_t eoc13 : 1;
  uint32_t eoc14 : 1;
  uint32_t eoc15 : 1;
  uint32_t  : 7;
  uint32_t eocal : 1;
  uint32_t drdy : 1;
  uint32_t govre : 1;
  uint32_t compe : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 3;
};

#define ADC_OVER	MMIO_REG(0x4003803c, uint32_t)
#define ADC_OVER_OVRE0	(1 << 0)
#define ADC_OVER_OVRE1	(1 << 1)
#define ADC_OVER_OVRE2	(1 << 2)
#define ADC_OVER_OVRE3	(1 << 3)
#define ADC_OVER_OVRE4	(1 << 4)
#define ADC_OVER_OVRE5	(1 << 5)
#define ADC_OVER_OVRE6	(1 << 6)
#define ADC_OVER_OVRE7	(1 << 7)
#define ADC_OVER_OVRE8	(1 << 8)
#define ADC_OVER_OVRE9	(1 << 9)
#define ADC_OVER_OVRE10	(1 << 10)
#define ADC_OVER_OVRE11	(1 << 11)
#define ADC_OVER_OVRE12	(1 << 12)
#define ADC_OVER_OVRE13	(1 << 13)
#define ADC_OVER_OVRE14	(1 << 14)
#define ADC_OVER_OVRE15	(1 << 15)

#define ADC_OVER_s	MMIO_REG(0x4003803c, struct __struct_ADC_OVER)
struct __struct_ADC_OVER
{
  uint32_t ovre0 : 1;
  uint32_t ovre1 : 1;
  uint32_t ovre2 : 1;
  uint32_t ovre3 : 1;
  uint32_t ovre4 : 1;
  uint32_t ovre5 : 1;
  uint32_t ovre6 : 1;
  uint32_t ovre7 : 1;
  uint32_t ovre8 : 1;
  uint32_t ovre9 : 1;
  uint32_t ovre10 : 1;
  uint32_t ovre11 : 1;
  uint32_t ovre12 : 1;
  uint32_t ovre13 : 1;
  uint32_t ovre14 : 1;
  uint32_t ovre15 : 1;
  uint32_t  : 16;
};

#define ADC_EMR	MMIO_REG(0x40038040, uint32_t)
#define ADC_EMR_CMPMODE(x)	((x) << 0)
#define ADC_EMR_CMPMODE_MSK	0x00000003
#define ADC_EMR_CMPMODE_VAL(x)	(((x) >> 0) & 0x3)
#define ADC_EMR_CMPSEL(x)	((x) << 4)
#define ADC_EMR_CMPSEL_MSK	0x000000f0
#define ADC_EMR_CMPSEL_VAL(x)	(((x) >> 4) & 0xf)
#define ADC_EMR_CMPALL	(1 << 9)
#define ADC_EMR_TAG	(1 << 24)

#define ADC_EMR_s	MMIO_REG(0x40038040, struct __struct_ADC_EMR)
struct __struct_ADC_EMR
{
  uint32_t cmpmode : 2;
  uint32_t  : 2;
  uint32_t cmpsel : 4;
  uint32_t  : 1;
  uint32_t cmpall : 1;
  uint32_t  : 14;
  uint32_t tag : 1;
  uint32_t  : 7;
};

#define ADC_CWR	MMIO_REG(0x40038044, uint32_t)
#define ADC_CWR_LOWTHRES(x)	((x) << 0)
#define ADC_CWR_LOWTHRES_MSK	0x00000fff
#define ADC_CWR_LOWTHRES_VAL(x)	(((x) >> 0) & 0xfff)
#define ADC_CWR_HIGHTHRES(x)	((x) << 16)
#define ADC_CWR_HIGHTHRES_MSK	0x0fff0000
#define ADC_CWR_HIGHTHRES_VAL(x)	(((x) >> 16) & 0xfff)

#define ADC_CWR_s	MMIO_REG(0x40038044, struct __struct_ADC_CWR)
struct __struct_ADC_CWR
{
  uint32_t lowthres : 12;
  uint32_t  : 4;
  uint32_t highthres : 12;
  uint32_t  : 4;
};

#define ADC_CGR	MMIO_REG(0x40038048, uint32_t)
#define ADC_CGR_GAIN0(x)	((x) << 0)
#define ADC_CGR_GAIN0_MSK	0x00000003
#define ADC_CGR_GAIN0_VAL(x)	(((x) >> 0) & 0x3)
#define ADC_CGR_GAIN1(x)	((x) << 2)
#define ADC_CGR_GAIN1_MSK	0x0000000c
#define ADC_CGR_GAIN1_VAL(x)	(((x) >> 2) & 0x3)
#define ADC_CGR_GAIN2(x)	((x) << 4)
#define ADC_CGR_GAIN2_MSK	0x00000030
#define ADC_CGR_GAIN2_VAL(x)	(((x) >> 4) & 0x3)
#define ADC_CGR_GAIN3(x)	((x) << 6)
#define ADC_CGR_GAIN3_MSK	0x000000c0
#define ADC_CGR_GAIN3_VAL(x)	(((x) >> 6) & 0x3)
#define ADC_CGR_GAIN4(x)	((x) << 8)
#define ADC_CGR_GAIN4_MSK	0x00000300
#define ADC_CGR_GAIN4_VAL(x)	(((x) >> 8) & 0x3)
#define ADC_CGR_GAIN5(x)	((x) << 10)
#define ADC_CGR_GAIN5_MSK	0x00000c00
#define ADC_CGR_GAIN5_VAL(x)	(((x) >> 10) & 0x3)
#define ADC_CGR_GAIN6(x)	((x) << 12)
#define ADC_CGR_GAIN6_MSK	0x00003000
#define ADC_CGR_GAIN6_VAL(x)	(((x) >> 12) & 0x3)
#define ADC_CGR_GAIN7(x)	((x) << 14)
#define ADC_CGR_GAIN7_MSK	0x0000c000
#define ADC_CGR_GAIN7_VAL(x)	(((x) >> 14) & 0x3)
#define ADC_CGR_GAIN8(x)	((x) << 16)
#define ADC_CGR_GAIN8_MSK	0x00030000
#define ADC_CGR_GAIN8_VAL(x)	(((x) >> 16) & 0x3)
#define ADC_CGR_GAIN9(x)	((x) << 18)
#define ADC_CGR_GAIN9_MSK	0x000c0000
#define ADC_CGR_GAIN9_VAL(x)	(((x) >> 18) & 0x3)
#define ADC_CGR_GAIN10(x)	((x) << 20)
#define ADC_CGR_GAIN10_MSK	0x00300000
#define ADC_CGR_GAIN10_VAL(x)	(((x) >> 20) & 0x3)
#define ADC_CGR_GAIN11(x)	((x) << 22)
#define ADC_CGR_GAIN11_MSK	0x00c00000
#define ADC_CGR_GAIN11_VAL(x)	(((x) >> 22) & 0x3)
#define ADC_CGR_GAIN12(x)	((x) << 24)
#define ADC_CGR_GAIN12_MSK	0x03000000
#define ADC_CGR_GAIN12_VAL(x)	(((x) >> 24) & 0x3)
#define ADC_CGR_GAIN13(x)	((x) << 26)
#define ADC_CGR_GAIN13_MSK	0x0c000000
#define ADC_CGR_GAIN13_VAL(x)	(((x) >> 26) & 0x3)
#define ADC_CGR_GAIN14(x)	((x) << 28)
#define ADC_CGR_GAIN14_MSK	0x30000000
#define ADC_CGR_GAIN14_VAL(x)	(((x) >> 28) & 0x3)
#define ADC_CGR_GAIN15(x)	((x) << 30)
#define ADC_CGR_GAIN15_MSK	0xc0000000
#define ADC_CGR_GAIN15_VAL(x)	(((x) >> 30) & 0x3)

#define ADC_CGR_s	MMIO_REG(0x40038048, struct __struct_ADC_CGR)
struct __struct_ADC_CGR
{
  uint32_t gain0 : 2;
  uint32_t gain1 : 2;
  uint32_t gain2 : 2;
  uint32_t gain3 : 2;
  uint32_t gain4 : 2;
  uint32_t gain5 : 2;
  uint32_t gain6 : 2;
  uint32_t gain7 : 2;
  uint32_t gain8 : 2;
  uint32_t gain9 : 2;
  uint32_t gain10 : 2;
  uint32_t gain11 : 2;
  uint32_t gain12 : 2;
  uint32_t gain13 : 2;
  uint32_t gain14 : 2;
  uint32_t gain15 : 2;
};

#define ADC_COR	MMIO_REG(0x4003804c, uint32_t)
#define ADC_COR_OFF0	(1 << 0)
#define ADC_COR_OFF1	(1 << 1)
#define ADC_COR_OFF2	(1 << 2)
#define ADC_COR_OFF3	(1 << 3)
#define ADC_COR_OFF4	(1 << 4)
#define ADC_COR_OFF5	(1 << 5)
#define ADC_COR_OFF6	(1 << 6)
#define ADC_COR_OFF7	(1 << 7)
#define ADC_COR_OFF8	(1 << 8)
#define ADC_COR_OFF9	(1 << 9)
#define ADC_COR_OFF10	(1 << 10)
#define ADC_COR_OFF11	(1 << 11)
#define ADC_COR_OFF12	(1 << 12)
#define ADC_COR_OFF13	(1 << 13)
#define ADC_COR_OFF14	(1 << 14)
#define ADC_COR_OFF15	(1 << 15)
#define ADC_COR_DIFF0	(1 << 16)
#define ADC_COR_DIFF1	(1 << 17)
#define ADC_COR_DIFF2	(1 << 18)
#define ADC_COR_DIFF3	(1 << 19)
#define ADC_COR_DIFF4	(1 << 20)
#define ADC_COR_DIFF5	(1 << 21)
#define ADC_COR_DIFF6	(1 << 22)
#define ADC_COR_DIFF7	(1 << 23)
#define ADC_COR_DIFF8	(1 << 24)
#define ADC_COR_DIFF9	(1 << 25)
#define ADC_COR_DIFF10	(1 << 26)
#define ADC_COR_DIFF11	(1 << 27)
#define ADC_COR_DIFF12	(1 << 28)
#define ADC_COR_DIFF13	(1 << 29)
#define ADC_COR_DIFF14	(1 << 30)
#define ADC_COR_DIFF15	(1 << 31)

#define ADC_COR_s	MMIO_REG(0x4003804c, struct __struct_ADC_COR)
struct __struct_ADC_COR
{
  uint32_t off0 : 1;
  uint32_t off1 : 1;
  uint32_t off2 : 1;
  uint32_t off3 : 1;
  uint32_t off4 : 1;
  uint32_t off5 : 1;
  uint32_t off6 : 1;
  uint32_t off7 : 1;
  uint32_t off8 : 1;
  uint32_t off9 : 1;
  uint32_t off10 : 1;
  uint32_t off11 : 1;
  uint32_t off12 : 1;
  uint32_t off13 : 1;
  uint32_t off14 : 1;
  uint32_t off15 : 1;
  uint32_t diff0 : 1;
  uint32_t diff1 : 1;
  uint32_t diff2 : 1;
  uint32_t diff3 : 1;
  uint32_t diff4 : 1;
  uint32_t diff5 : 1;
  uint32_t diff6 : 1;
  uint32_t diff7 : 1;
  uint32_t diff8 : 1;
  uint32_t diff9 : 1;
  uint32_t diff10 : 1;
  uint32_t diff11 : 1;
  uint32_t diff12 : 1;
  uint32_t diff13 : 1;
  uint32_t diff14 : 1;
  uint32_t diff15 : 1;
};

#define ADC_CDR0	MMIO_REG(0x40038050, uint32_t)
#define ADC_CDR0_DATA(x)	((x) << 0)
#define ADC_CDR0_DATA_MSK	0x00000fff
#define ADC_CDR0_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR0_s	MMIO_REG(0x40038050, struct __struct_ADC_CDR0)
struct __struct_ADC_CDR0
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR1	MMIO_REG(0x40038054, uint32_t)
#define ADC_CDR1_DATA(x)	((x) << 0)
#define ADC_CDR1_DATA_MSK	0x00000fff
#define ADC_CDR1_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR1_s	MMIO_REG(0x40038054, struct __struct_ADC_CDR1)
struct __struct_ADC_CDR1
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR2	MMIO_REG(0x40038058, uint32_t)
#define ADC_CDR2_DATA(x)	((x) << 0)
#define ADC_CDR2_DATA_MSK	0x00000fff
#define ADC_CDR2_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR2_s	MMIO_REG(0x40038058, struct __struct_ADC_CDR2)
struct __struct_ADC_CDR2
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR3	MMIO_REG(0x4003805c, uint32_t)
#define ADC_CDR3_DATA(x)	((x) << 0)
#define ADC_CDR3_DATA_MSK	0x00000fff
#define ADC_CDR3_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR3_s	MMIO_REG(0x4003805c, struct __struct_ADC_CDR3)
struct __struct_ADC_CDR3
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR4	MMIO_REG(0x40038060, uint32_t)
#define ADC_CDR4_DATA(x)	((x) << 0)
#define ADC_CDR4_DATA_MSK	0x00000fff
#define ADC_CDR4_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR4_s	MMIO_REG(0x40038060, struct __struct_ADC_CDR4)
struct __struct_ADC_CDR4
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR5	MMIO_REG(0x40038064, uint32_t)
#define ADC_CDR5_DATA(x)	((x) << 0)
#define ADC_CDR5_DATA_MSK	0x00000fff
#define ADC_CDR5_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR5_s	MMIO_REG(0x40038064, struct __struct_ADC_CDR5)
struct __struct_ADC_CDR5
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR6	MMIO_REG(0x40038068, uint32_t)
#define ADC_CDR6_DATA(x)	((x) << 0)
#define ADC_CDR6_DATA_MSK	0x00000fff
#define ADC_CDR6_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR6_s	MMIO_REG(0x40038068, struct __struct_ADC_CDR6)
struct __struct_ADC_CDR6
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR7	MMIO_REG(0x4003806c, uint32_t)
#define ADC_CDR7_DATA(x)	((x) << 0)
#define ADC_CDR7_DATA_MSK	0x00000fff
#define ADC_CDR7_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR7_s	MMIO_REG(0x4003806c, struct __struct_ADC_CDR7)
struct __struct_ADC_CDR7
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR8	MMIO_REG(0x40038070, uint32_t)
#define ADC_CDR8_DATA(x)	((x) << 0)
#define ADC_CDR8_DATA_MSK	0x00000fff
#define ADC_CDR8_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR8_s	MMIO_REG(0x40038070, struct __struct_ADC_CDR8)
struct __struct_ADC_CDR8
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR9	MMIO_REG(0x40038074, uint32_t)
#define ADC_CDR9_DATA(x)	((x) << 0)
#define ADC_CDR9_DATA_MSK	0x00000fff
#define ADC_CDR9_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR9_s	MMIO_REG(0x40038074, struct __struct_ADC_CDR9)
struct __struct_ADC_CDR9
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR10	MMIO_REG(0x40038078, uint32_t)
#define ADC_CDR10_DATA(x)	((x) << 0)
#define ADC_CDR10_DATA_MSK	0x00000fff
#define ADC_CDR10_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR10_s	MMIO_REG(0x40038078, struct __struct_ADC_CDR10)
struct __struct_ADC_CDR10
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR11	MMIO_REG(0x4003807c, uint32_t)
#define ADC_CDR11_DATA(x)	((x) << 0)
#define ADC_CDR11_DATA_MSK	0x00000fff
#define ADC_CDR11_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR11_s	MMIO_REG(0x4003807c, struct __struct_ADC_CDR11)
struct __struct_ADC_CDR11
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR12	MMIO_REG(0x40038080, uint32_t)
#define ADC_CDR12_DATA(x)	((x) << 0)
#define ADC_CDR12_DATA_MSK	0x00000fff
#define ADC_CDR12_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR12_s	MMIO_REG(0x40038080, struct __struct_ADC_CDR12)
struct __struct_ADC_CDR12
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR13	MMIO_REG(0x40038084, uint32_t)
#define ADC_CDR13_DATA(x)	((x) << 0)
#define ADC_CDR13_DATA_MSK	0x00000fff
#define ADC_CDR13_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR13_s	MMIO_REG(0x40038084, struct __struct_ADC_CDR13)
struct __struct_ADC_CDR13
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR14	MMIO_REG(0x40038088, uint32_t)
#define ADC_CDR14_DATA(x)	((x) << 0)
#define ADC_CDR14_DATA_MSK	0x00000fff
#define ADC_CDR14_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR14_s	MMIO_REG(0x40038088, struct __struct_ADC_CDR14)
struct __struct_ADC_CDR14
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_CDR15	MMIO_REG(0x4003808c, uint32_t)
#define ADC_CDR15_DATA(x)	((x) << 0)
#define ADC_CDR15_DATA_MSK	0x00000fff
#define ADC_CDR15_DATA_VAL(x)	(((x) >> 0) & 0xfff)

#define ADC_CDR15_s	MMIO_REG(0x4003808c, struct __struct_ADC_CDR15)
struct __struct_ADC_CDR15
{
  uint32_t data : 12;
  uint32_t  : 20;
};

#define ADC_ACR	MMIO_REG(0x40038094, uint32_t)
#define ADC_ACR_TSON	(1 << 4)
#define ADC_ACR_IBCTL(x)	((x) << 8)
#define ADC_ACR_IBCTL_MSK	0x00000300
#define ADC_ACR_IBCTL_VAL(x)	(((x) >> 8) & 0x3)

#define ADC_ACR_s	MMIO_REG(0x40038094, struct __struct_ADC_ACR)
struct __struct_ADC_ACR
{
  uint32_t  : 4;
  uint32_t tson : 1;
  uint32_t  : 3;
  uint32_t ibctl : 2;
  uint32_t  : 22;
};

#define ADC_WPMR	MMIO_REG(0x400380e4, uint32_t)
#define ADC_WPMR_WPEN	(1 << 0)
#define ADC_WPMR_WPKEY(x)	((x) << 8)
#define ADC_WPMR_WPKEY_MSK	0xffffff00
#define ADC_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define ADC_WPMR_s	MMIO_REG(0x400380e4, struct __struct_ADC_WPMR)
struct __struct_ADC_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define ADC_WPSR	MMIO_REG(0x400380e8, uint32_t)
#define ADC_WPSR_WPVS	(1 << 0)
#define ADC_WPSR_WPVSRC(x)	((x) << 8)
#define ADC_WPSR_WPVSRC_MSK	0x00ffff00
#define ADC_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define ADC_WPSR_s	MMIO_REG(0x400380e8, struct __struct_ADC_WPSR)
struct __struct_ADC_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

// 0x40038100 ADC_PDC

#define ADC_PDC_RPR	MMIO_REG(0x40038100, uint32_t)

#define ADC_PDC_RCR	MMIO_REG(0x40038104, uint32_t)

#define ADC_PDC_TPR	MMIO_REG(0x40038108, uint32_t)

#define ADC_PDC_TCR	MMIO_REG(0x4003810c, uint32_t)

#define ADC_PDC_RNPR	MMIO_REG(0x40038110, uint32_t)

#define ADC_PDC_RNCR	MMIO_REG(0x40038114, uint32_t)

#define ADC_PDC_TNPR	MMIO_REG(0x40038118, uint32_t)

#define ADC_PDC_TNCR	MMIO_REG(0x4003811c, uint32_t)

#define ADC_PDC_PTCR	MMIO_REG(0x40038120, uint32_t)
#define ADC_PDC_PTCR_RXTEN	(1 << 0)
#define ADC_PDC_PTCR_RXTDIS	(1 << 1)
#define ADC_PDC_PTCR_TXTEN	(1 << 8)
#define ADC_PDC_PTCR_TXTDIS	(1 << 9)

#define ADC_PDC_PTCR_s	MMIO_REG(0x40038120, struct __struct_ADC_PDC_PTCR)
struct __struct_ADC_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define ADC_PDC_PTSR	MMIO_REG(0x40038124, uint32_t)
#define ADC_PDC_PTSR_RXTEN	(1 << 0)
#define ADC_PDC_PTSR_TXTEN	(1 << 8)

#define ADC_PDC_PTSR_s	MMIO_REG(0x40038124, struct __struct_ADC_PDC_PTSR)
struct __struct_ADC_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x4003c000 DACC

#define DACC_CR	MMIO_REG(0x4003c000, uint32_t)
#define DACC_CR_SWRST	(1 << 0)

#define DACC_CR_s	MMIO_REG(0x4003c000, struct __struct_DACC_CR)
struct __struct_DACC_CR
{
  uint32_t swrst : 1;
  uint32_t  : 31;
};

#define DACC_MR	MMIO_REG(0x4003c004, uint32_t)
#define DACC_MR_TRGEN	(1 << 0)
#define DACC_MR_TRGSEL(x)	((x) << 1)
#define DACC_MR_TRGSEL_MSK	0x0000000e
#define DACC_MR_TRGSEL_VAL(x)	(((x) >> 1) & 0x7)
#define DACC_MR_WORD	(1 << 4)
#define DACC_MR_SLEEP	(1 << 5)
#define DACC_MR_FASTWKUP	(1 << 6)
#define DACC_MR_REFRESH(x)	((x) << 8)
#define DACC_MR_REFRESH_MSK	0x0000ff00
#define DACC_MR_REFRESH_VAL(x)	(((x) >> 8) & 0xff)
#define DACC_MR_USER_SEL(x)	((x) << 16)
#define DACC_MR_USER_SEL_MSK	0x00030000
#define DACC_MR_USER_SEL_VAL(x)	(((x) >> 16) & 0x3)
#define DACC_MR_TAG	(1 << 20)
#define DACC_MR_MAXS	(1 << 21)
#define DACC_MR_STARTUP(x)	((x) << 24)
#define DACC_MR_STARTUP_MSK	0x3f000000
#define DACC_MR_STARTUP_VAL(x)	(((x) >> 24) & 0x3f)

#define DACC_MR_s	MMIO_REG(0x4003c004, struct __struct_DACC_MR)
struct __struct_DACC_MR
{
  uint32_t trgen : 1;
  uint32_t trgsel : 3;
  uint32_t word : 1;
  uint32_t sleep : 1;
  uint32_t fastwkup : 1;
  uint32_t  : 1;
  uint32_t refresh : 8;
  uint32_t user_sel : 2;
  uint32_t  : 2;
  uint32_t tag : 1;
  uint32_t maxs : 1;
  uint32_t  : 2;
  uint32_t startup : 6;
  uint32_t  : 2;
};

#define DACC_CHER	MMIO_REG(0x4003c010, uint32_t)
#define DACC_CHER_CH0	(1 << 0)
#define DACC_CHER_CH1	(1 << 1)

#define DACC_CHER_s	MMIO_REG(0x4003c010, struct __struct_DACC_CHER)
struct __struct_DACC_CHER
{
  uint32_t ch0 : 1;
  uint32_t ch1 : 1;
  uint32_t  : 30;
};

#define DACC_CHDR	MMIO_REG(0x4003c014, uint32_t)
#define DACC_CHDR_CH0	(1 << 0)
#define DACC_CHDR_CH1	(1 << 1)

#define DACC_CHDR_s	MMIO_REG(0x4003c014, struct __struct_DACC_CHDR)
struct __struct_DACC_CHDR
{
  uint32_t ch0 : 1;
  uint32_t ch1 : 1;
  uint32_t  : 30;
};

#define DACC_CHSR	MMIO_REG(0x4003c018, uint32_t)
#define DACC_CHSR_CH0	(1 << 0)
#define DACC_CHSR_CH1	(1 << 1)

#define DACC_CHSR_s	MMIO_REG(0x4003c018, struct __struct_DACC_CHSR)
struct __struct_DACC_CHSR
{
  uint32_t ch0 : 1;
  uint32_t ch1 : 1;
  uint32_t  : 30;
};

#define DACC_CDR	MMIO_REG(0x4003c020, uint32_t)

#define DACC_IER	MMIO_REG(0x4003c024, uint32_t)
#define DACC_IER_TXRDY	(1 << 0)
#define DACC_IER_EOC	(1 << 1)
#define DACC_IER_ENDTX	(1 << 2)
#define DACC_IER_TXBUFE	(1 << 3)

#define DACC_IER_s	MMIO_REG(0x4003c024, struct __struct_DACC_IER)
struct __struct_DACC_IER
{
  uint32_t txrdy : 1;
  uint32_t eoc : 1;
  uint32_t endtx : 1;
  uint32_t txbufe : 1;
  uint32_t  : 28;
};

#define DACC_IDR	MMIO_REG(0x4003c028, uint32_t)
#define DACC_IDR_TXRDY	(1 << 0)
#define DACC_IDR_EOC	(1 << 1)
#define DACC_IDR_ENDTX	(1 << 2)
#define DACC_IDR_TXBUFE	(1 << 3)

#define DACC_IDR_s	MMIO_REG(0x4003c028, struct __struct_DACC_IDR)
struct __struct_DACC_IDR
{
  uint32_t txrdy : 1;
  uint32_t eoc : 1;
  uint32_t endtx : 1;
  uint32_t txbufe : 1;
  uint32_t  : 28;
};

#define DACC_IMR	MMIO_REG(0x4003c02c, uint32_t)
#define DACC_IMR_TXRDY	(1 << 0)
#define DACC_IMR_EOC	(1 << 1)
#define DACC_IMR_ENDTX	(1 << 2)
#define DACC_IMR_TXBUFE	(1 << 3)

#define DACC_IMR_s	MMIO_REG(0x4003c02c, struct __struct_DACC_IMR)
struct __struct_DACC_IMR
{
  uint32_t txrdy : 1;
  uint32_t eoc : 1;
  uint32_t endtx : 1;
  uint32_t txbufe : 1;
  uint32_t  : 28;
};

#define DACC_ISR	MMIO_REG(0x4003c030, uint32_t)
#define DACC_ISR_TXRDY	(1 << 0)
#define DACC_ISR_EOC	(1 << 1)
#define DACC_ISR_ENDTX	(1 << 2)
#define DACC_ISR_TXBUFE	(1 << 3)

#define DACC_ISR_s	MMIO_REG(0x4003c030, struct __struct_DACC_ISR)
struct __struct_DACC_ISR
{
  uint32_t txrdy : 1;
  uint32_t eoc : 1;
  uint32_t endtx : 1;
  uint32_t txbufe : 1;
  uint32_t  : 28;
};

#define DACC_ACR	MMIO_REG(0x4003c094, uint32_t)
#define DACC_ACR_IBCTLCH0(x)	((x) << 0)
#define DACC_ACR_IBCTLCH0_MSK	0x00000003
#define DACC_ACR_IBCTLCH0_VAL(x)	(((x) >> 0) & 0x3)
#define DACC_ACR_IBCTLCH1(x)	((x) << 2)
#define DACC_ACR_IBCTLCH1_MSK	0x0000000c
#define DACC_ACR_IBCTLCH1_VAL(x)	(((x) >> 2) & 0x3)
#define DACC_ACR_IBCTLDACCORE(x)	((x) << 8)
#define DACC_ACR_IBCTLDACCORE_MSK	0x00000300
#define DACC_ACR_IBCTLDACCORE_VAL(x)	(((x) >> 8) & 0x3)

#define DACC_ACR_s	MMIO_REG(0x4003c094, struct __struct_DACC_ACR)
struct __struct_DACC_ACR
{
  uint32_t ibctlch0 : 2;
  uint32_t ibctlch1 : 2;
  uint32_t  : 4;
  uint32_t ibctldaccore : 2;
  uint32_t  : 22;
};

#define DACC_WPMR	MMIO_REG(0x4003c0e4, uint32_t)
#define DACC_WPMR_WPEN	(1 << 0)
#define DACC_WPMR_WPKEY(x)	((x) << 8)
#define DACC_WPMR_WPKEY_MSK	0xffffff00
#define DACC_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define DACC_WPMR_s	MMIO_REG(0x4003c0e4, struct __struct_DACC_WPMR)
struct __struct_DACC_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define DACC_WPSR	MMIO_REG(0x4003c0e8, uint32_t)
#define DACC_WPSR_WPVS	(1 << 0)
#define DACC_WPSR_WPVSRC(x)	((x) << 8)
#define DACC_WPSR_WPVSRC_MSK	0x00ffff00
#define DACC_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define DACC_WPSR_s	MMIO_REG(0x4003c0e8, struct __struct_DACC_WPSR)
struct __struct_DACC_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

// 0x4003c100 DACC_PDC

#define DACC_PDC_RPR	MMIO_REG(0x4003c100, uint32_t)

#define DACC_PDC_RCR	MMIO_REG(0x4003c104, uint32_t)

#define DACC_PDC_TPR	MMIO_REG(0x4003c108, uint32_t)

#define DACC_PDC_TCR	MMIO_REG(0x4003c10c, uint32_t)

#define DACC_PDC_RNPR	MMIO_REG(0x4003c110, uint32_t)

#define DACC_PDC_RNCR	MMIO_REG(0x4003c114, uint32_t)

#define DACC_PDC_TNPR	MMIO_REG(0x4003c118, uint32_t)

#define DACC_PDC_TNCR	MMIO_REG(0x4003c11c, uint32_t)

#define DACC_PDC_PTCR	MMIO_REG(0x4003c120, uint32_t)
#define DACC_PDC_PTCR_RXTEN	(1 << 0)
#define DACC_PDC_PTCR_RXTDIS	(1 << 1)
#define DACC_PDC_PTCR_TXTEN	(1 << 8)
#define DACC_PDC_PTCR_TXTDIS	(1 << 9)

#define DACC_PDC_PTCR_s	MMIO_REG(0x4003c120, struct __struct_DACC_PDC_PTCR)
struct __struct_DACC_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define DACC_PDC_PTSR	MMIO_REG(0x4003c124, uint32_t)
#define DACC_PDC_PTSR_RXTEN	(1 << 0)
#define DACC_PDC_PTSR_TXTEN	(1 << 8)

#define DACC_PDC_PTSR_s	MMIO_REG(0x4003c124, struct __struct_DACC_PDC_PTSR)
struct __struct_DACC_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x40040000 ACC

#define ACC_CR	MMIO_REG(0x40040000, uint32_t)
#define ACC_CR_SWRST	(1 << 0)

#define ACC_CR_s	MMIO_REG(0x40040000, struct __struct_ACC_CR)
struct __struct_ACC_CR
{
  uint32_t swrst : 1;
  uint32_t  : 31;
};

#define ACC_MR	MMIO_REG(0x40040004, uint32_t)
#define ACC_MR_SELMINUS(x)	((x) << 0)
#define ACC_MR_SELMINUS_MSK	0x00000007
#define ACC_MR_SELMINUS_VAL(x)	(((x) >> 0) & 0x7)
#define ACC_MR_SELPLUS(x)	((x) << 4)
#define ACC_MR_SELPLUS_MSK	0x00000070
#define ACC_MR_SELPLUS_VAL(x)	(((x) >> 4) & 0x7)
#define ACC_MR_ACEN	(1 << 8)
#define ACC_MR_EDGETYP(x)	((x) << 9)
#define ACC_MR_EDGETYP_MSK	0x00000600
#define ACC_MR_EDGETYP_VAL(x)	(((x) >> 9) & 0x3)
#define ACC_MR_INV	(1 << 12)
#define ACC_MR_SELFS	(1 << 13)
#define ACC_MR_FE	(1 << 14)

#define ACC_MR_s	MMIO_REG(0x40040004, struct __struct_ACC_MR)
struct __struct_ACC_MR
{
  uint32_t selminus : 3;
  uint32_t  : 1;
  uint32_t selplus : 3;
  uint32_t  : 1;
  uint32_t acen : 1;
  uint32_t edgetyp : 2;
  uint32_t  : 1;
  uint32_t inv : 1;
  uint32_t selfs : 1;
  uint32_t fe : 1;
  uint32_t  : 17;
};

#define ACC_IER	MMIO_REG(0x40040024, uint32_t)
#define ACC_IER_CE	(1 << 0)

#define ACC_IER_s	MMIO_REG(0x40040024, struct __struct_ACC_IER)
struct __struct_ACC_IER
{
  uint32_t ce : 1;
  uint32_t  : 31;
};

#define ACC_IDR	MMIO_REG(0x40040028, uint32_t)
#define ACC_IDR_CE	(1 << 0)

#define ACC_IDR_s	MMIO_REG(0x40040028, struct __struct_ACC_IDR)
struct __struct_ACC_IDR
{
  uint32_t ce : 1;
  uint32_t  : 31;
};

#define ACC_IMR	MMIO_REG(0x4004002c, uint32_t)
#define ACC_IMR_CE	(1 << 0)

#define ACC_IMR_s	MMIO_REG(0x4004002c, struct __struct_ACC_IMR)
struct __struct_ACC_IMR
{
  uint32_t ce : 1;
  uint32_t  : 31;
};

#define ACC_ISR	MMIO_REG(0x40040030, uint32_t)
#define ACC_ISR_CE	(1 << 0)
#define ACC_ISR_SCO	(1 << 1)

#define ACC_ISR_s	MMIO_REG(0x40040030, struct __struct_ACC_ISR)
struct __struct_ACC_ISR
{
  uint32_t ce : 1;
  uint32_t sco : 1;
  uint32_t  : 30;
};

#define ACC_ACR	MMIO_REG(0x40040094, uint32_t)
#define ACC_ACR_ISEL	(1 << 0)
#define ACC_ACR_HYST(x)	((x) << 1)
#define ACC_ACR_HYST_MSK	0x00000006
#define ACC_ACR_HYST_VAL(x)	(((x) >> 1) & 0x3)

#define ACC_ACR_s	MMIO_REG(0x40040094, struct __struct_ACC_ACR)
struct __struct_ACC_ACR
{
  uint32_t isel : 1;
  uint32_t hyst : 2;
  uint32_t  : 29;
};

#define ACC_WPMR	MMIO_REG(0x400400e4, uint32_t)
#define ACC_WPMR_WPEN	(1 << 0)
#define ACC_WPMR_WPKEY(x)	((x) << 8)
#define ACC_WPMR_WPKEY_MSK	0xffffff00
#define ACC_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define ACC_WPMR_s	MMIO_REG(0x400400e4, struct __struct_ACC_WPMR)
struct __struct_ACC_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define ACC_WPSR	MMIO_REG(0x400400e8, uint32_t)
#define ACC_WPSR_WPVS	(1 << 0)
#define ACC_WPSR_WPVSRC(x)	((x) << 8)
#define ACC_WPSR_WPVSRC_MSK	0x00ffff00
#define ACC_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define ACC_WPSR_s	MMIO_REG(0x400400e8, struct __struct_ACC_WPSR)
struct __struct_ACC_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

// 0x40044000 CRCCU

#define CRCCU_DSCR	MMIO_REG(0x40044000, uint32_t)
#define CRCCU_DSCR_DSCR(x)	((x) << 9)
#define CRCCU_DSCR_DSCR_MSK	0xfffffe00
#define CRCCU_DSCR_DSCR_VAL(x)	(((x) >> 9) & 0x7fffff)

#define CRCCU_DSCR_s	MMIO_REG(0x40044000, struct __struct_CRCCU_DSCR)
struct __struct_CRCCU_DSCR
{
  uint32_t  : 9;
  uint32_t dscr : 23;
};

#define CRCCU_DMA_EN	MMIO_REG(0x40044008, uint32_t)
#define CRCCU_DMA_EN_DMAEN	(1 << 0)

#define CRCCU_DMA_EN_s	MMIO_REG(0x40044008, struct __struct_CRCCU_DMA_EN)
struct __struct_CRCCU_DMA_EN
{
  uint32_t dmaen : 1;
  uint32_t  : 31;
};

#define CRCCU_DMA_DIS	MMIO_REG(0x4004400c, uint32_t)
#define CRCCU_DMA_DIS_DMADIS	(1 << 0)

#define CRCCU_DMA_DIS_s	MMIO_REG(0x4004400c, struct __struct_CRCCU_DMA_DIS)
struct __struct_CRCCU_DMA_DIS
{
  uint32_t dmadis : 1;
  uint32_t  : 31;
};

#define CRCCU_DMA_SR	MMIO_REG(0x40044010, uint32_t)
#define CRCCU_DMA_SR_DMASR	(1 << 0)

#define CRCCU_DMA_SR_s	MMIO_REG(0x40044010, struct __struct_CRCCU_DMA_SR)
struct __struct_CRCCU_DMA_SR
{
  uint32_t dmasr : 1;
  uint32_t  : 31;
};

#define CRCCU_DMA_IER	MMIO_REG(0x40044014, uint32_t)
#define CRCCU_DMA_IER_DMAIER	(1 << 0)

#define CRCCU_DMA_IER_s	MMIO_REG(0x40044014, struct __struct_CRCCU_DMA_IER)
struct __struct_CRCCU_DMA_IER
{
  uint32_t dmaier : 1;
  uint32_t  : 31;
};

#define CRCCU_DMA_IDR	MMIO_REG(0x40044018, uint32_t)
#define CRCCU_DMA_IDR_DMAIDR	(1 << 0)

#define CRCCU_DMA_IDR_s	MMIO_REG(0x40044018, struct __struct_CRCCU_DMA_IDR)
struct __struct_CRCCU_DMA_IDR
{
  uint32_t dmaidr : 1;
  uint32_t  : 31;
};

#define CRCCU_DMA_IMR	MMIO_REG(0x4004401c, uint32_t)
#define CRCCU_DMA_IMR_DMAIMR	(1 << 0)

#define CRCCU_DMA_IMR_s	MMIO_REG(0x4004401c, struct __struct_CRCCU_DMA_IMR)
struct __struct_CRCCU_DMA_IMR
{
  uint32_t dmaimr : 1;
  uint32_t  : 31;
};

#define CRCCU_DMA_ISR	MMIO_REG(0x40044020, uint32_t)
#define CRCCU_DMA_ISR_DMAISR	(1 << 0)

#define CRCCU_DMA_ISR_s	MMIO_REG(0x40044020, struct __struct_CRCCU_DMA_ISR)
struct __struct_CRCCU_DMA_ISR
{
  uint32_t dmaisr : 1;
  uint32_t  : 31;
};

#define CRCCU_CR	MMIO_REG(0x40044034, uint32_t)
#define CRCCU_CR_RESET	(1 << 0)

#define CRCCU_CR_s	MMIO_REG(0x40044034, struct __struct_CRCCU_CR)
struct __struct_CRCCU_CR
{
  uint32_t reset : 1;
  uint32_t  : 31;
};

#define CRCCU_MR	MMIO_REG(0x40044038, uint32_t)
#define CRCCU_MR_ENABLE	(1 << 0)
#define CRCCU_MR_COMPARE	(1 << 1)
#define CRCCU_MR_PTYPE(x)	((x) << 2)
#define CRCCU_MR_PTYPE_MSK	0x0000000c
#define CRCCU_MR_PTYPE_VAL(x)	(((x) >> 2) & 0x3)
#define CRCCU_MR_DIVIDER(x)	((x) << 4)
#define CRCCU_MR_DIVIDER_MSK	0x000000f0
#define CRCCU_MR_DIVIDER_VAL(x)	(((x) >> 4) & 0xf)

#define CRCCU_MR_s	MMIO_REG(0x40044038, struct __struct_CRCCU_MR)
struct __struct_CRCCU_MR
{
  uint32_t enable : 1;
  uint32_t compare : 1;
  uint32_t ptype : 2;
  uint32_t divider : 4;
  uint32_t  : 24;
};

#define CRCCU_SR	MMIO_REG(0x4004403c, uint32_t)

#define CRCCU_IER	MMIO_REG(0x40044040, uint32_t)
#define CRCCU_IER_ERRIER	(1 << 0)

#define CRCCU_IER_s	MMIO_REG(0x40044040, struct __struct_CRCCU_IER)
struct __struct_CRCCU_IER
{
  uint32_t errier : 1;
  uint32_t  : 31;
};

#define CRCCU_IDR	MMIO_REG(0x40044044, uint32_t)
#define CRCCU_IDR_ERRIDR	(1 << 0)

#define CRCCU_IDR_s	MMIO_REG(0x40044044, struct __struct_CRCCU_IDR)
struct __struct_CRCCU_IDR
{
  uint32_t erridr : 1;
  uint32_t  : 31;
};

#define CRCCU_IMR	MMIO_REG(0x40044048, uint32_t)
#define CRCCU_IMR_ERRIMR	(1 << 0)

#define CRCCU_IMR_s	MMIO_REG(0x40044048, struct __struct_CRCCU_IMR)
struct __struct_CRCCU_IMR
{
  uint32_t errimr : 1;
  uint32_t  : 31;
};

#define CRCCU_ISR	MMIO_REG(0x4004404c, uint32_t)
#define CRCCU_ISR_ERRISR	(1 << 0)

#define CRCCU_ISR_s	MMIO_REG(0x4004404c, struct __struct_CRCCU_ISR)
struct __struct_CRCCU_ISR
{
  uint32_t errisr : 1;
  uint32_t  : 31;
};

// 0x400e0000 SMC

#define SMC_SETUP0	MMIO_REG(0x400e0000, uint32_t)
#define SMC_SETUP0_NWE_SETUP(x)	((x) << 0)
#define SMC_SETUP0_NWE_SETUP_MSK	0x0000003f
#define SMC_SETUP0_NWE_SETUP_VAL(x)	(((x) >> 0) & 0x3f)
#define SMC_SETUP0_NCS_WR_SETUP(x)	((x) << 8)
#define SMC_SETUP0_NCS_WR_SETUP_MSK	0x00003f00
#define SMC_SETUP0_NCS_WR_SETUP_VAL(x)	(((x) >> 8) & 0x3f)
#define SMC_SETUP0_NRD_SETUP(x)	((x) << 16)
#define SMC_SETUP0_NRD_SETUP_MSK	0x003f0000
#define SMC_SETUP0_NRD_SETUP_VAL(x)	(((x) >> 16) & 0x3f)
#define SMC_SETUP0_NCS_RD_SETUP(x)	((x) << 24)
#define SMC_SETUP0_NCS_RD_SETUP_MSK	0x3f000000
#define SMC_SETUP0_NCS_RD_SETUP_VAL(x)	(((x) >> 24) & 0x3f)

#define SMC_SETUP0_s	MMIO_REG(0x400e0000, struct __struct_SMC_SETUP0)
struct __struct_SMC_SETUP0
{
  uint32_t nwe_setup : 6;
  uint32_t  : 2;
  uint32_t ncs_wr_setup : 6;
  uint32_t  : 2;
  uint32_t nrd_setup : 6;
  uint32_t  : 2;
  uint32_t ncs_rd_setup : 6;
  uint32_t  : 2;
};

#define SMC_PULSE0	MMIO_REG(0x400e0004, uint32_t)
#define SMC_PULSE0_NWE_PULSE(x)	((x) << 0)
#define SMC_PULSE0_NWE_PULSE_MSK	0x0000007f
#define SMC_PULSE0_NWE_PULSE_VAL(x)	(((x) >> 0) & 0x7f)
#define SMC_PULSE0_NCS_WR_PULSE(x)	((x) << 8)
#define SMC_PULSE0_NCS_WR_PULSE_MSK	0x00007f00
#define SMC_PULSE0_NCS_WR_PULSE_VAL(x)	(((x) >> 8) & 0x7f)
#define SMC_PULSE0_NRD_PULSE(x)	((x) << 16)
#define SMC_PULSE0_NRD_PULSE_MSK	0x007f0000
#define SMC_PULSE0_NRD_PULSE_VAL(x)	(((x) >> 16) & 0x7f)
#define SMC_PULSE0_NCS_RD_PULSE(x)	((x) << 24)
#define SMC_PULSE0_NCS_RD_PULSE_MSK	0x7f000000
#define SMC_PULSE0_NCS_RD_PULSE_VAL(x)	(((x) >> 24) & 0x7f)

#define SMC_PULSE0_s	MMIO_REG(0x400e0004, struct __struct_SMC_PULSE0)
struct __struct_SMC_PULSE0
{
  uint32_t nwe_pulse : 7;
  uint32_t  : 1;
  uint32_t ncs_wr_pulse : 7;
  uint32_t  : 1;
  uint32_t nrd_pulse : 7;
  uint32_t  : 1;
  uint32_t ncs_rd_pulse : 7;
  uint32_t  : 1;
};

#define SMC_CYCLE0	MMIO_REG(0x400e0008, uint32_t)
#define SMC_CYCLE0_NWE_CYCLE(x)	((x) << 0)
#define SMC_CYCLE0_NWE_CYCLE_MSK	0x000001ff
#define SMC_CYCLE0_NWE_CYCLE_VAL(x)	(((x) >> 0) & 0x1ff)
#define SMC_CYCLE0_NRD_CYCLE(x)	((x) << 16)
#define SMC_CYCLE0_NRD_CYCLE_MSK	0x01ff0000
#define SMC_CYCLE0_NRD_CYCLE_VAL(x)	(((x) >> 16) & 0x1ff)

#define SMC_CYCLE0_s	MMIO_REG(0x400e0008, struct __struct_SMC_CYCLE0)
struct __struct_SMC_CYCLE0
{
  uint32_t nwe_cycle : 9;
  uint32_t  : 7;
  uint32_t nrd_cycle : 9;
  uint32_t  : 7;
};

#define SMC_MODE0	MMIO_REG(0x400e000c, uint32_t)
#define SMC_MODE0_READ_MODE	(1 << 0)
#define SMC_MODE0_WRITE_MODE	(1 << 1)
#define SMC_MODE0_EXNW_MODE(x)	((x) << 4)
#define SMC_MODE0_EXNW_MODE_MSK	0x00000030
#define SMC_MODE0_EXNW_MODE_VAL(x)	(((x) >> 4) & 0x3)
#define SMC_MODE0_TDF_CYCLES(x)	((x) << 15)
#define SMC_MODE0_TDF_CYCLES_MSK	0x00078000
#define SMC_MODE0_TDF_CYCLES_VAL(x)	(((x) >> 15) & 0xf)
#define SMC_MODE0_TDF_MODE	(1 << 19)
#define SMC_MODE0_PMEN	(1 << 23)
#define SMC_MODE0_PS(x)	((x) << 27)
#define SMC_MODE0_PS_MSK	0x18000000
#define SMC_MODE0_PS_VAL(x)	(((x) >> 27) & 0x3)

#define SMC_MODE0_s	MMIO_REG(0x400e000c, struct __struct_SMC_MODE0)
struct __struct_SMC_MODE0
{
  uint32_t read_mode : 1;
  uint32_t write_mode : 1;
  uint32_t  : 2;
  uint32_t exnw_mode : 2;
  uint32_t  : 9;
  uint32_t tdf_cycles : 4;
  uint32_t tdf_mode : 1;
  uint32_t  : 3;
  uint32_t pmen : 1;
  uint32_t  : 3;
  uint32_t ps : 2;
  uint32_t  : 3;
};

#define SMC_SETUP1	MMIO_REG(0x400e0010, uint32_t)
#define SMC_SETUP1_NWE_SETUP(x)	((x) << 0)
#define SMC_SETUP1_NWE_SETUP_MSK	0x0000003f
#define SMC_SETUP1_NWE_SETUP_VAL(x)	(((x) >> 0) & 0x3f)
#define SMC_SETUP1_NCS_WR_SETUP(x)	((x) << 8)
#define SMC_SETUP1_NCS_WR_SETUP_MSK	0x00003f00
#define SMC_SETUP1_NCS_WR_SETUP_VAL(x)	(((x) >> 8) & 0x3f)
#define SMC_SETUP1_NRD_SETUP(x)	((x) << 16)
#define SMC_SETUP1_NRD_SETUP_MSK	0x003f0000
#define SMC_SETUP1_NRD_SETUP_VAL(x)	(((x) >> 16) & 0x3f)
#define SMC_SETUP1_NCS_RD_SETUP(x)	((x) << 24)
#define SMC_SETUP1_NCS_RD_SETUP_MSK	0x3f000000
#define SMC_SETUP1_NCS_RD_SETUP_VAL(x)	(((x) >> 24) & 0x3f)

#define SMC_SETUP1_s	MMIO_REG(0x400e0010, struct __struct_SMC_SETUP1)
struct __struct_SMC_SETUP1
{
  uint32_t nwe_setup : 6;
  uint32_t  : 2;
  uint32_t ncs_wr_setup : 6;
  uint32_t  : 2;
  uint32_t nrd_setup : 6;
  uint32_t  : 2;
  uint32_t ncs_rd_setup : 6;
  uint32_t  : 2;
};

#define SMC_PULSE1	MMIO_REG(0x400e0014, uint32_t)
#define SMC_PULSE1_NWE_PULSE(x)	((x) << 0)
#define SMC_PULSE1_NWE_PULSE_MSK	0x0000007f
#define SMC_PULSE1_NWE_PULSE_VAL(x)	(((x) >> 0) & 0x7f)
#define SMC_PULSE1_NCS_WR_PULSE(x)	((x) << 8)
#define SMC_PULSE1_NCS_WR_PULSE_MSK	0x00007f00
#define SMC_PULSE1_NCS_WR_PULSE_VAL(x)	(((x) >> 8) & 0x7f)
#define SMC_PULSE1_NRD_PULSE(x)	((x) << 16)
#define SMC_PULSE1_NRD_PULSE_MSK	0x007f0000
#define SMC_PULSE1_NRD_PULSE_VAL(x)	(((x) >> 16) & 0x7f)
#define SMC_PULSE1_NCS_RD_PULSE(x)	((x) << 24)
#define SMC_PULSE1_NCS_RD_PULSE_MSK	0x7f000000
#define SMC_PULSE1_NCS_RD_PULSE_VAL(x)	(((x) >> 24) & 0x7f)

#define SMC_PULSE1_s	MMIO_REG(0x400e0014, struct __struct_SMC_PULSE1)
struct __struct_SMC_PULSE1
{
  uint32_t nwe_pulse : 7;
  uint32_t  : 1;
  uint32_t ncs_wr_pulse : 7;
  uint32_t  : 1;
  uint32_t nrd_pulse : 7;
  uint32_t  : 1;
  uint32_t ncs_rd_pulse : 7;
  uint32_t  : 1;
};

#define SMC_CYCLE1	MMIO_REG(0x400e0018, uint32_t)
#define SMC_CYCLE1_NWE_CYCLE(x)	((x) << 0)
#define SMC_CYCLE1_NWE_CYCLE_MSK	0x000001ff
#define SMC_CYCLE1_NWE_CYCLE_VAL(x)	(((x) >> 0) & 0x1ff)
#define SMC_CYCLE1_NRD_CYCLE(x)	((x) << 16)
#define SMC_CYCLE1_NRD_CYCLE_MSK	0x01ff0000
#define SMC_CYCLE1_NRD_CYCLE_VAL(x)	(((x) >> 16) & 0x1ff)

#define SMC_CYCLE1_s	MMIO_REG(0x400e0018, struct __struct_SMC_CYCLE1)
struct __struct_SMC_CYCLE1
{
  uint32_t nwe_cycle : 9;
  uint32_t  : 7;
  uint32_t nrd_cycle : 9;
  uint32_t  : 7;
};

#define SMC_MODE1	MMIO_REG(0x400e001c, uint32_t)
#define SMC_MODE1_READ_MODE	(1 << 0)
#define SMC_MODE1_WRITE_MODE	(1 << 1)
#define SMC_MODE1_EXNW_MODE(x)	((x) << 4)
#define SMC_MODE1_EXNW_MODE_MSK	0x00000030
#define SMC_MODE1_EXNW_MODE_VAL(x)	(((x) >> 4) & 0x3)
#define SMC_MODE1_TDF_CYCLES(x)	((x) << 15)
#define SMC_MODE1_TDF_CYCLES_MSK	0x00078000
#define SMC_MODE1_TDF_CYCLES_VAL(x)	(((x) >> 15) & 0xf)
#define SMC_MODE1_TDF_MODE	(1 << 19)
#define SMC_MODE1_PMEN	(1 << 23)
#define SMC_MODE1_PS(x)	((x) << 27)
#define SMC_MODE1_PS_MSK	0x18000000
#define SMC_MODE1_PS_VAL(x)	(((x) >> 27) & 0x3)

#define SMC_MODE1_s	MMIO_REG(0x400e001c, struct __struct_SMC_MODE1)
struct __struct_SMC_MODE1
{
  uint32_t read_mode : 1;
  uint32_t write_mode : 1;
  uint32_t  : 2;
  uint32_t exnw_mode : 2;
  uint32_t  : 9;
  uint32_t tdf_cycles : 4;
  uint32_t tdf_mode : 1;
  uint32_t  : 3;
  uint32_t pmen : 1;
  uint32_t  : 3;
  uint32_t ps : 2;
  uint32_t  : 3;
};

#define SMC_SETUP2	MMIO_REG(0x400e0020, uint32_t)
#define SMC_SETUP2_NWE_SETUP(x)	((x) << 0)
#define SMC_SETUP2_NWE_SETUP_MSK	0x0000003f
#define SMC_SETUP2_NWE_SETUP_VAL(x)	(((x) >> 0) & 0x3f)
#define SMC_SETUP2_NCS_WR_SETUP(x)	((x) << 8)
#define SMC_SETUP2_NCS_WR_SETUP_MSK	0x00003f00
#define SMC_SETUP2_NCS_WR_SETUP_VAL(x)	(((x) >> 8) & 0x3f)
#define SMC_SETUP2_NRD_SETUP(x)	((x) << 16)
#define SMC_SETUP2_NRD_SETUP_MSK	0x003f0000
#define SMC_SETUP2_NRD_SETUP_VAL(x)	(((x) >> 16) & 0x3f)
#define SMC_SETUP2_NCS_RD_SETUP(x)	((x) << 24)
#define SMC_SETUP2_NCS_RD_SETUP_MSK	0x3f000000
#define SMC_SETUP2_NCS_RD_SETUP_VAL(x)	(((x) >> 24) & 0x3f)

#define SMC_SETUP2_s	MMIO_REG(0x400e0020, struct __struct_SMC_SETUP2)
struct __struct_SMC_SETUP2
{
  uint32_t nwe_setup : 6;
  uint32_t  : 2;
  uint32_t ncs_wr_setup : 6;
  uint32_t  : 2;
  uint32_t nrd_setup : 6;
  uint32_t  : 2;
  uint32_t ncs_rd_setup : 6;
  uint32_t  : 2;
};

#define SMC_PULSE2	MMIO_REG(0x400e0024, uint32_t)
#define SMC_PULSE2_NWE_PULSE(x)	((x) << 0)
#define SMC_PULSE2_NWE_PULSE_MSK	0x0000007f
#define SMC_PULSE2_NWE_PULSE_VAL(x)	(((x) >> 0) & 0x7f)
#define SMC_PULSE2_NCS_WR_PULSE(x)	((x) << 8)
#define SMC_PULSE2_NCS_WR_PULSE_MSK	0x00007f00
#define SMC_PULSE2_NCS_WR_PULSE_VAL(x)	(((x) >> 8) & 0x7f)
#define SMC_PULSE2_NRD_PULSE(x)	((x) << 16)
#define SMC_PULSE2_NRD_PULSE_MSK	0x007f0000
#define SMC_PULSE2_NRD_PULSE_VAL(x)	(((x) >> 16) & 0x7f)
#define SMC_PULSE2_NCS_RD_PULSE(x)	((x) << 24)
#define SMC_PULSE2_NCS_RD_PULSE_MSK	0x7f000000
#define SMC_PULSE2_NCS_RD_PULSE_VAL(x)	(((x) >> 24) & 0x7f)

#define SMC_PULSE2_s	MMIO_REG(0x400e0024, struct __struct_SMC_PULSE2)
struct __struct_SMC_PULSE2
{
  uint32_t nwe_pulse : 7;
  uint32_t  : 1;
  uint32_t ncs_wr_pulse : 7;
  uint32_t  : 1;
  uint32_t nrd_pulse : 7;
  uint32_t  : 1;
  uint32_t ncs_rd_pulse : 7;
  uint32_t  : 1;
};

#define SMC_CYCLE2	MMIO_REG(0x400e0028, uint32_t)
#define SMC_CYCLE2_NWE_CYCLE(x)	((x) << 0)
#define SMC_CYCLE2_NWE_CYCLE_MSK	0x000001ff
#define SMC_CYCLE2_NWE_CYCLE_VAL(x)	(((x) >> 0) & 0x1ff)
#define SMC_CYCLE2_NRD_CYCLE(x)	((x) << 16)
#define SMC_CYCLE2_NRD_CYCLE_MSK	0x01ff0000
#define SMC_CYCLE2_NRD_CYCLE_VAL(x)	(((x) >> 16) & 0x1ff)

#define SMC_CYCLE2_s	MMIO_REG(0x400e0028, struct __struct_SMC_CYCLE2)
struct __struct_SMC_CYCLE2
{
  uint32_t nwe_cycle : 9;
  uint32_t  : 7;
  uint32_t nrd_cycle : 9;
  uint32_t  : 7;
};

#define SMC_MODE2	MMIO_REG(0x400e002c, uint32_t)
#define SMC_MODE2_READ_MODE	(1 << 0)
#define SMC_MODE2_WRITE_MODE	(1 << 1)
#define SMC_MODE2_EXNW_MODE(x)	((x) << 4)
#define SMC_MODE2_EXNW_MODE_MSK	0x00000030
#define SMC_MODE2_EXNW_MODE_VAL(x)	(((x) >> 4) & 0x3)
#define SMC_MODE2_TDF_CYCLES(x)	((x) << 15)
#define SMC_MODE2_TDF_CYCLES_MSK	0x00078000
#define SMC_MODE2_TDF_CYCLES_VAL(x)	(((x) >> 15) & 0xf)
#define SMC_MODE2_TDF_MODE	(1 << 19)
#define SMC_MODE2_PMEN	(1 << 23)
#define SMC_MODE2_PS(x)	((x) << 27)
#define SMC_MODE2_PS_MSK	0x18000000
#define SMC_MODE2_PS_VAL(x)	(((x) >> 27) & 0x3)

#define SMC_MODE2_s	MMIO_REG(0x400e002c, struct __struct_SMC_MODE2)
struct __struct_SMC_MODE2
{
  uint32_t read_mode : 1;
  uint32_t write_mode : 1;
  uint32_t  : 2;
  uint32_t exnw_mode : 2;
  uint32_t  : 9;
  uint32_t tdf_cycles : 4;
  uint32_t tdf_mode : 1;
  uint32_t  : 3;
  uint32_t pmen : 1;
  uint32_t  : 3;
  uint32_t ps : 2;
  uint32_t  : 3;
};

#define SMC_SETUP3	MMIO_REG(0x400e0030, uint32_t)
#define SMC_SETUP3_NWE_SETUP(x)	((x) << 0)
#define SMC_SETUP3_NWE_SETUP_MSK	0x0000003f
#define SMC_SETUP3_NWE_SETUP_VAL(x)	(((x) >> 0) & 0x3f)
#define SMC_SETUP3_NCS_WR_SETUP(x)	((x) << 8)
#define SMC_SETUP3_NCS_WR_SETUP_MSK	0x00003f00
#define SMC_SETUP3_NCS_WR_SETUP_VAL(x)	(((x) >> 8) & 0x3f)
#define SMC_SETUP3_NRD_SETUP(x)	((x) << 16)
#define SMC_SETUP3_NRD_SETUP_MSK	0x003f0000
#define SMC_SETUP3_NRD_SETUP_VAL(x)	(((x) >> 16) & 0x3f)
#define SMC_SETUP3_NCS_RD_SETUP(x)	((x) << 24)
#define SMC_SETUP3_NCS_RD_SETUP_MSK	0x3f000000
#define SMC_SETUP3_NCS_RD_SETUP_VAL(x)	(((x) >> 24) & 0x3f)

#define SMC_SETUP3_s	MMIO_REG(0x400e0030, struct __struct_SMC_SETUP3)
struct __struct_SMC_SETUP3
{
  uint32_t nwe_setup : 6;
  uint32_t  : 2;
  uint32_t ncs_wr_setup : 6;
  uint32_t  : 2;
  uint32_t nrd_setup : 6;
  uint32_t  : 2;
  uint32_t ncs_rd_setup : 6;
  uint32_t  : 2;
};

#define SMC_PULSE3	MMIO_REG(0x400e0034, uint32_t)
#define SMC_PULSE3_NWE_PULSE(x)	((x) << 0)
#define SMC_PULSE3_NWE_PULSE_MSK	0x0000007f
#define SMC_PULSE3_NWE_PULSE_VAL(x)	(((x) >> 0) & 0x7f)
#define SMC_PULSE3_NCS_WR_PULSE(x)	((x) << 8)
#define SMC_PULSE3_NCS_WR_PULSE_MSK	0x00007f00
#define SMC_PULSE3_NCS_WR_PULSE_VAL(x)	(((x) >> 8) & 0x7f)
#define SMC_PULSE3_NRD_PULSE(x)	((x) << 16)
#define SMC_PULSE3_NRD_PULSE_MSK	0x007f0000
#define SMC_PULSE3_NRD_PULSE_VAL(x)	(((x) >> 16) & 0x7f)
#define SMC_PULSE3_NCS_RD_PULSE(x)	((x) << 24)
#define SMC_PULSE3_NCS_RD_PULSE_MSK	0x7f000000
#define SMC_PULSE3_NCS_RD_PULSE_VAL(x)	(((x) >> 24) & 0x7f)

#define SMC_PULSE3_s	MMIO_REG(0x400e0034, struct __struct_SMC_PULSE3)
struct __struct_SMC_PULSE3
{
  uint32_t nwe_pulse : 7;
  uint32_t  : 1;
  uint32_t ncs_wr_pulse : 7;
  uint32_t  : 1;
  uint32_t nrd_pulse : 7;
  uint32_t  : 1;
  uint32_t ncs_rd_pulse : 7;
  uint32_t  : 1;
};

#define SMC_CYCLE3	MMIO_REG(0x400e0038, uint32_t)
#define SMC_CYCLE3_NWE_CYCLE(x)	((x) << 0)
#define SMC_CYCLE3_NWE_CYCLE_MSK	0x000001ff
#define SMC_CYCLE3_NWE_CYCLE_VAL(x)	(((x) >> 0) & 0x1ff)
#define SMC_CYCLE3_NRD_CYCLE(x)	((x) << 16)
#define SMC_CYCLE3_NRD_CYCLE_MSK	0x01ff0000
#define SMC_CYCLE3_NRD_CYCLE_VAL(x)	(((x) >> 16) & 0x1ff)

#define SMC_CYCLE3_s	MMIO_REG(0x400e0038, struct __struct_SMC_CYCLE3)
struct __struct_SMC_CYCLE3
{
  uint32_t nwe_cycle : 9;
  uint32_t  : 7;
  uint32_t nrd_cycle : 9;
  uint32_t  : 7;
};

#define SMC_MODE3	MMIO_REG(0x400e003c, uint32_t)
#define SMC_MODE3_READ_MODE	(1 << 0)
#define SMC_MODE3_WRITE_MODE	(1 << 1)
#define SMC_MODE3_EXNW_MODE(x)	((x) << 4)
#define SMC_MODE3_EXNW_MODE_MSK	0x00000030
#define SMC_MODE3_EXNW_MODE_VAL(x)	(((x) >> 4) & 0x3)
#define SMC_MODE3_TDF_CYCLES(x)	((x) << 15)
#define SMC_MODE3_TDF_CYCLES_MSK	0x00078000
#define SMC_MODE3_TDF_CYCLES_VAL(x)	(((x) >> 15) & 0xf)
#define SMC_MODE3_TDF_MODE	(1 << 19)
#define SMC_MODE3_PMEN	(1 << 23)
#define SMC_MODE3_PS(x)	((x) << 27)
#define SMC_MODE3_PS_MSK	0x18000000
#define SMC_MODE3_PS_VAL(x)	(((x) >> 27) & 0x3)

#define SMC_MODE3_s	MMIO_REG(0x400e003c, struct __struct_SMC_MODE3)
struct __struct_SMC_MODE3
{
  uint32_t read_mode : 1;
  uint32_t write_mode : 1;
  uint32_t  : 2;
  uint32_t exnw_mode : 2;
  uint32_t  : 9;
  uint32_t tdf_cycles : 4;
  uint32_t tdf_mode : 1;
  uint32_t  : 3;
  uint32_t pmen : 1;
  uint32_t  : 3;
  uint32_t ps : 2;
  uint32_t  : 3;
};

#define SMC_OCMS	MMIO_REG(0x400e0080, uint32_t)
#define SMC_OCMS_SMSE	(1 << 0)
#define SMC_OCMS_CS0SE	(1 << 16)
#define SMC_OCMS_CS1SE	(1 << 17)
#define SMC_OCMS_CS2SE	(1 << 18)
#define SMC_OCMS_CS3SE	(1 << 19)

#define SMC_OCMS_s	MMIO_REG(0x400e0080, struct __struct_SMC_OCMS)
struct __struct_SMC_OCMS
{
  uint32_t smse : 1;
  uint32_t  : 15;
  uint32_t cs0se : 1;
  uint32_t cs1se : 1;
  uint32_t cs2se : 1;
  uint32_t cs3se : 1;
  uint32_t  : 12;
};

#define SMC_KEY1	MMIO_REG(0x400e0084, uint32_t)

#define SMC_KEY2	MMIO_REG(0x400e0088, uint32_t)

#define SMC_WPMR	MMIO_REG(0x400e00e4, uint32_t)
#define SMC_WPMR_WPEN	(1 << 0)
#define SMC_WPMR_WPKEY(x)	((x) << 8)
#define SMC_WPMR_WPKEY_MSK	0xffffff00
#define SMC_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define SMC_WPMR_s	MMIO_REG(0x400e00e4, struct __struct_SMC_WPMR)
struct __struct_SMC_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define SMC_WPSR	MMIO_REG(0x400e00e8, uint32_t)
#define SMC_WPSR_WPVS	(1 << 0)
#define SMC_WPSR_WPVSRC(x)	((x) << 8)
#define SMC_WPSR_WPVSRC_MSK	0x00ffff00
#define SMC_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define SMC_WPSR_s	MMIO_REG(0x400e00e8, struct __struct_SMC_WPSR)
struct __struct_SMC_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

// 0x400e0200 MATRIX

#define MATRIX_MCFG0	MMIO_REG(0x400e0200, uint32_t)
#define MATRIX_MCFG0_ULBT(x)	((x) << 0)
#define MATRIX_MCFG0_ULBT_MSK	0x00000007
#define MATRIX_MCFG0_ULBT_VAL(x)	(((x) >> 0) & 0x7)

#define MATRIX_MCFG0_s	MMIO_REG(0x400e0200, struct __struct_MATRIX_MCFG0)
struct __struct_MATRIX_MCFG0
{
  uint32_t ulbt : 3;
  uint32_t  : 29;
};

#define MATRIX_MCFG1	MMIO_REG(0x400e0204, uint32_t)
#define MATRIX_MCFG1_ULBT(x)	((x) << 0)
#define MATRIX_MCFG1_ULBT_MSK	0x00000007
#define MATRIX_MCFG1_ULBT_VAL(x)	(((x) >> 0) & 0x7)

#define MATRIX_MCFG1_s	MMIO_REG(0x400e0204, struct __struct_MATRIX_MCFG1)
struct __struct_MATRIX_MCFG1
{
  uint32_t ulbt : 3;
  uint32_t  : 29;
};

#define MATRIX_MCFG2	MMIO_REG(0x400e0208, uint32_t)
#define MATRIX_MCFG2_ULBT(x)	((x) << 0)
#define MATRIX_MCFG2_ULBT_MSK	0x00000007
#define MATRIX_MCFG2_ULBT_VAL(x)	(((x) >> 0) & 0x7)

#define MATRIX_MCFG2_s	MMIO_REG(0x400e0208, struct __struct_MATRIX_MCFG2)
struct __struct_MATRIX_MCFG2
{
  uint32_t ulbt : 3;
  uint32_t  : 29;
};

#define MATRIX_MCFG3	MMIO_REG(0x400e020c, uint32_t)
#define MATRIX_MCFG3_ULBT(x)	((x) << 0)
#define MATRIX_MCFG3_ULBT_MSK	0x00000007
#define MATRIX_MCFG3_ULBT_VAL(x)	(((x) >> 0) & 0x7)

#define MATRIX_MCFG3_s	MMIO_REG(0x400e020c, struct __struct_MATRIX_MCFG3)
struct __struct_MATRIX_MCFG3
{
  uint32_t ulbt : 3;
  uint32_t  : 29;
};

#define MATRIX_SCFG0	MMIO_REG(0x400e0240, uint32_t)
#define MATRIX_SCFG0_SLOT_CYCLE(x)	((x) << 0)
#define MATRIX_SCFG0_SLOT_CYCLE_MSK	0x000000ff
#define MATRIX_SCFG0_SLOT_CYCLE_VAL(x)	(((x) >> 0) & 0xff)
#define MATRIX_SCFG0_DEFMSTR_TYPE(x)	((x) << 16)
#define MATRIX_SCFG0_DEFMSTR_TYPE_MSK	0x00030000
#define MATRIX_SCFG0_DEFMSTR_TYPE_VAL(x)	(((x) >> 16) & 0x3)
#define MATRIX_SCFG0_FIXED_DEFMSTR(x)	((x) << 18)
#define MATRIX_SCFG0_FIXED_DEFMSTR_MSK	0x001c0000
#define MATRIX_SCFG0_FIXED_DEFMSTR_VAL(x)	(((x) >> 18) & 0x7)
#define MATRIX_SCFG0_ARBT(x)	((x) << 24)
#define MATRIX_SCFG0_ARBT_MSK	0x03000000
#define MATRIX_SCFG0_ARBT_VAL(x)	(((x) >> 24) & 0x3)

#define MATRIX_SCFG0_s	MMIO_REG(0x400e0240, struct __struct_MATRIX_SCFG0)
struct __struct_MATRIX_SCFG0
{
  uint32_t slot_cycle : 8;
  uint32_t  : 8;
  uint32_t defmstr_type : 2;
  uint32_t fixed_defmstr : 3;
  uint32_t  : 3;
  uint32_t arbt : 2;
  uint32_t  : 6;
};

#define MATRIX_SCFG1	MMIO_REG(0x400e0244, uint32_t)
#define MATRIX_SCFG1_SLOT_CYCLE(x)	((x) << 0)
#define MATRIX_SCFG1_SLOT_CYCLE_MSK	0x000000ff
#define MATRIX_SCFG1_SLOT_CYCLE_VAL(x)	(((x) >> 0) & 0xff)
#define MATRIX_SCFG1_DEFMSTR_TYPE(x)	((x) << 16)
#define MATRIX_SCFG1_DEFMSTR_TYPE_MSK	0x00030000
#define MATRIX_SCFG1_DEFMSTR_TYPE_VAL(x)	(((x) >> 16) & 0x3)
#define MATRIX_SCFG1_FIXED_DEFMSTR(x)	((x) << 18)
#define MATRIX_SCFG1_FIXED_DEFMSTR_MSK	0x001c0000
#define MATRIX_SCFG1_FIXED_DEFMSTR_VAL(x)	(((x) >> 18) & 0x7)
#define MATRIX_SCFG1_ARBT(x)	((x) << 24)
#define MATRIX_SCFG1_ARBT_MSK	0x03000000
#define MATRIX_SCFG1_ARBT_VAL(x)	(((x) >> 24) & 0x3)

#define MATRIX_SCFG1_s	MMIO_REG(0x400e0244, struct __struct_MATRIX_SCFG1)
struct __struct_MATRIX_SCFG1
{
  uint32_t slot_cycle : 8;
  uint32_t  : 8;
  uint32_t defmstr_type : 2;
  uint32_t fixed_defmstr : 3;
  uint32_t  : 3;
  uint32_t arbt : 2;
  uint32_t  : 6;
};

#define MATRIX_SCFG2	MMIO_REG(0x400e0248, uint32_t)
#define MATRIX_SCFG2_SLOT_CYCLE(x)	((x) << 0)
#define MATRIX_SCFG2_SLOT_CYCLE_MSK	0x000000ff
#define MATRIX_SCFG2_SLOT_CYCLE_VAL(x)	(((x) >> 0) & 0xff)
#define MATRIX_SCFG2_DEFMSTR_TYPE(x)	((x) << 16)
#define MATRIX_SCFG2_DEFMSTR_TYPE_MSK	0x00030000
#define MATRIX_SCFG2_DEFMSTR_TYPE_VAL(x)	(((x) >> 16) & 0x3)
#define MATRIX_SCFG2_FIXED_DEFMSTR(x)	((x) << 18)
#define MATRIX_SCFG2_FIXED_DEFMSTR_MSK	0x001c0000
#define MATRIX_SCFG2_FIXED_DEFMSTR_VAL(x)	(((x) >> 18) & 0x7)
#define MATRIX_SCFG2_ARBT(x)	((x) << 24)
#define MATRIX_SCFG2_ARBT_MSK	0x03000000
#define MATRIX_SCFG2_ARBT_VAL(x)	(((x) >> 24) & 0x3)

#define MATRIX_SCFG2_s	MMIO_REG(0x400e0248, struct __struct_MATRIX_SCFG2)
struct __struct_MATRIX_SCFG2
{
  uint32_t slot_cycle : 8;
  uint32_t  : 8;
  uint32_t defmstr_type : 2;
  uint32_t fixed_defmstr : 3;
  uint32_t  : 3;
  uint32_t arbt : 2;
  uint32_t  : 6;
};

#define MATRIX_SCFG3	MMIO_REG(0x400e024c, uint32_t)
#define MATRIX_SCFG3_SLOT_CYCLE(x)	((x) << 0)
#define MATRIX_SCFG3_SLOT_CYCLE_MSK	0x000000ff
#define MATRIX_SCFG3_SLOT_CYCLE_VAL(x)	(((x) >> 0) & 0xff)
#define MATRIX_SCFG3_DEFMSTR_TYPE(x)	((x) << 16)
#define MATRIX_SCFG3_DEFMSTR_TYPE_MSK	0x00030000
#define MATRIX_SCFG3_DEFMSTR_TYPE_VAL(x)	(((x) >> 16) & 0x3)
#define MATRIX_SCFG3_FIXED_DEFMSTR(x)	((x) << 18)
#define MATRIX_SCFG3_FIXED_DEFMSTR_MSK	0x001c0000
#define MATRIX_SCFG3_FIXED_DEFMSTR_VAL(x)	(((x) >> 18) & 0x7)
#define MATRIX_SCFG3_ARBT(x)	((x) << 24)
#define MATRIX_SCFG3_ARBT_MSK	0x03000000
#define MATRIX_SCFG3_ARBT_VAL(x)	(((x) >> 24) & 0x3)

#define MATRIX_SCFG3_s	MMIO_REG(0x400e024c, struct __struct_MATRIX_SCFG3)
struct __struct_MATRIX_SCFG3
{
  uint32_t slot_cycle : 8;
  uint32_t  : 8;
  uint32_t defmstr_type : 2;
  uint32_t fixed_defmstr : 3;
  uint32_t  : 3;
  uint32_t arbt : 2;
  uint32_t  : 6;
};

#define MATRIX_SCFG4	MMIO_REG(0x400e0250, uint32_t)
#define MATRIX_SCFG4_SLOT_CYCLE(x)	((x) << 0)
#define MATRIX_SCFG4_SLOT_CYCLE_MSK	0x000000ff
#define MATRIX_SCFG4_SLOT_CYCLE_VAL(x)	(((x) >> 0) & 0xff)
#define MATRIX_SCFG4_DEFMSTR_TYPE(x)	((x) << 16)
#define MATRIX_SCFG4_DEFMSTR_TYPE_MSK	0x00030000
#define MATRIX_SCFG4_DEFMSTR_TYPE_VAL(x)	(((x) >> 16) & 0x3)
#define MATRIX_SCFG4_FIXED_DEFMSTR(x)	((x) << 18)
#define MATRIX_SCFG4_FIXED_DEFMSTR_MSK	0x001c0000
#define MATRIX_SCFG4_FIXED_DEFMSTR_VAL(x)	(((x) >> 18) & 0x7)
#define MATRIX_SCFG4_ARBT(x)	((x) << 24)
#define MATRIX_SCFG4_ARBT_MSK	0x03000000
#define MATRIX_SCFG4_ARBT_VAL(x)	(((x) >> 24) & 0x3)

#define MATRIX_SCFG4_s	MMIO_REG(0x400e0250, struct __struct_MATRIX_SCFG4)
struct __struct_MATRIX_SCFG4
{
  uint32_t slot_cycle : 8;
  uint32_t  : 8;
  uint32_t defmstr_type : 2;
  uint32_t fixed_defmstr : 3;
  uint32_t  : 3;
  uint32_t arbt : 2;
  uint32_t  : 6;
};

#define MATRIX_PRAS0	MMIO_REG(0x400e0280, uint32_t)
#define MATRIX_PRAS0_M0PR(x)	((x) << 0)
#define MATRIX_PRAS0_M0PR_MSK	0x00000003
#define MATRIX_PRAS0_M0PR_VAL(x)	(((x) >> 0) & 0x3)
#define MATRIX_PRAS0_M1PR(x)	((x) << 4)
#define MATRIX_PRAS0_M1PR_MSK	0x00000030
#define MATRIX_PRAS0_M1PR_VAL(x)	(((x) >> 4) & 0x3)
#define MATRIX_PRAS0_M2PR(x)	((x) << 8)
#define MATRIX_PRAS0_M2PR_MSK	0x00000300
#define MATRIX_PRAS0_M2PR_VAL(x)	(((x) >> 8) & 0x3)
#define MATRIX_PRAS0_M3PR(x)	((x) << 12)
#define MATRIX_PRAS0_M3PR_MSK	0x00003000
#define MATRIX_PRAS0_M3PR_VAL(x)	(((x) >> 12) & 0x3)
#define MATRIX_PRAS0_M4PR(x)	((x) << 16)
#define MATRIX_PRAS0_M4PR_MSK	0x00030000
#define MATRIX_PRAS0_M4PR_VAL(x)	(((x) >> 16) & 0x3)

#define MATRIX_PRAS0_s	MMIO_REG(0x400e0280, struct __struct_MATRIX_PRAS0)
struct __struct_MATRIX_PRAS0
{
  uint32_t m0pr : 2;
  uint32_t  : 2;
  uint32_t m1pr : 2;
  uint32_t  : 2;
  uint32_t m2pr : 2;
  uint32_t  : 2;
  uint32_t m3pr : 2;
  uint32_t  : 2;
  uint32_t m4pr : 2;
  uint32_t  : 14;
};

#define MATRIX_PRAS1	MMIO_REG(0x400e0288, uint32_t)
#define MATRIX_PRAS1_M0PR(x)	((x) << 0)
#define MATRIX_PRAS1_M0PR_MSK	0x00000003
#define MATRIX_PRAS1_M0PR_VAL(x)	(((x) >> 0) & 0x3)
#define MATRIX_PRAS1_M1PR(x)	((x) << 4)
#define MATRIX_PRAS1_M1PR_MSK	0x00000030
#define MATRIX_PRAS1_M1PR_VAL(x)	(((x) >> 4) & 0x3)
#define MATRIX_PRAS1_M2PR(x)	((x) << 8)
#define MATRIX_PRAS1_M2PR_MSK	0x00000300
#define MATRIX_PRAS1_M2PR_VAL(x)	(((x) >> 8) & 0x3)
#define MATRIX_PRAS1_M3PR(x)	((x) << 12)
#define MATRIX_PRAS1_M3PR_MSK	0x00003000
#define MATRIX_PRAS1_M3PR_VAL(x)	(((x) >> 12) & 0x3)
#define MATRIX_PRAS1_M4PR(x)	((x) << 16)
#define MATRIX_PRAS1_M4PR_MSK	0x00030000
#define MATRIX_PRAS1_M4PR_VAL(x)	(((x) >> 16) & 0x3)

#define MATRIX_PRAS1_s	MMIO_REG(0x400e0288, struct __struct_MATRIX_PRAS1)
struct __struct_MATRIX_PRAS1
{
  uint32_t m0pr : 2;
  uint32_t  : 2;
  uint32_t m1pr : 2;
  uint32_t  : 2;
  uint32_t m2pr : 2;
  uint32_t  : 2;
  uint32_t m3pr : 2;
  uint32_t  : 2;
  uint32_t m4pr : 2;
  uint32_t  : 14;
};

#define MATRIX_PRAS2	MMIO_REG(0x400e0290, uint32_t)
#define MATRIX_PRAS2_M0PR(x)	((x) << 0)
#define MATRIX_PRAS2_M0PR_MSK	0x00000003
#define MATRIX_PRAS2_M0PR_VAL(x)	(((x) >> 0) & 0x3)
#define MATRIX_PRAS2_M1PR(x)	((x) << 4)
#define MATRIX_PRAS2_M1PR_MSK	0x00000030
#define MATRIX_PRAS2_M1PR_VAL(x)	(((x) >> 4) & 0x3)
#define MATRIX_PRAS2_M2PR(x)	((x) << 8)
#define MATRIX_PRAS2_M2PR_MSK	0x00000300
#define MATRIX_PRAS2_M2PR_VAL(x)	(((x) >> 8) & 0x3)
#define MATRIX_PRAS2_M3PR(x)	((x) << 12)
#define MATRIX_PRAS2_M3PR_MSK	0x00003000
#define MATRIX_PRAS2_M3PR_VAL(x)	(((x) >> 12) & 0x3)
#define MATRIX_PRAS2_M4PR(x)	((x) << 16)
#define MATRIX_PRAS2_M4PR_MSK	0x00030000
#define MATRIX_PRAS2_M4PR_VAL(x)	(((x) >> 16) & 0x3)

#define MATRIX_PRAS2_s	MMIO_REG(0x400e0290, struct __struct_MATRIX_PRAS2)
struct __struct_MATRIX_PRAS2
{
  uint32_t m0pr : 2;
  uint32_t  : 2;
  uint32_t m1pr : 2;
  uint32_t  : 2;
  uint32_t m2pr : 2;
  uint32_t  : 2;
  uint32_t m3pr : 2;
  uint32_t  : 2;
  uint32_t m4pr : 2;
  uint32_t  : 14;
};

#define MATRIX_PRAS3	MMIO_REG(0x400e0298, uint32_t)
#define MATRIX_PRAS3_M0PR(x)	((x) << 0)
#define MATRIX_PRAS3_M0PR_MSK	0x00000003
#define MATRIX_PRAS3_M0PR_VAL(x)	(((x) >> 0) & 0x3)
#define MATRIX_PRAS3_M1PR(x)	((x) << 4)
#define MATRIX_PRAS3_M1PR_MSK	0x00000030
#define MATRIX_PRAS3_M1PR_VAL(x)	(((x) >> 4) & 0x3)
#define MATRIX_PRAS3_M2PR(x)	((x) << 8)
#define MATRIX_PRAS3_M2PR_MSK	0x00000300
#define MATRIX_PRAS3_M2PR_VAL(x)	(((x) >> 8) & 0x3)
#define MATRIX_PRAS3_M3PR(x)	((x) << 12)
#define MATRIX_PRAS3_M3PR_MSK	0x00003000
#define MATRIX_PRAS3_M3PR_VAL(x)	(((x) >> 12) & 0x3)
#define MATRIX_PRAS3_M4PR(x)	((x) << 16)
#define MATRIX_PRAS3_M4PR_MSK	0x00030000
#define MATRIX_PRAS3_M4PR_VAL(x)	(((x) >> 16) & 0x3)

#define MATRIX_PRAS3_s	MMIO_REG(0x400e0298, struct __struct_MATRIX_PRAS3)
struct __struct_MATRIX_PRAS3
{
  uint32_t m0pr : 2;
  uint32_t  : 2;
  uint32_t m1pr : 2;
  uint32_t  : 2;
  uint32_t m2pr : 2;
  uint32_t  : 2;
  uint32_t m3pr : 2;
  uint32_t  : 2;
  uint32_t m4pr : 2;
  uint32_t  : 14;
};

#define MATRIX_PRAS4	MMIO_REG(0x400e02a0, uint32_t)
#define MATRIX_PRAS4_M0PR(x)	((x) << 0)
#define MATRIX_PRAS4_M0PR_MSK	0x00000003
#define MATRIX_PRAS4_M0PR_VAL(x)	(((x) >> 0) & 0x3)
#define MATRIX_PRAS4_M1PR(x)	((x) << 4)
#define MATRIX_PRAS4_M1PR_MSK	0x00000030
#define MATRIX_PRAS4_M1PR_VAL(x)	(((x) >> 4) & 0x3)
#define MATRIX_PRAS4_M2PR(x)	((x) << 8)
#define MATRIX_PRAS4_M2PR_MSK	0x00000300
#define MATRIX_PRAS4_M2PR_VAL(x)	(((x) >> 8) & 0x3)
#define MATRIX_PRAS4_M3PR(x)	((x) << 12)
#define MATRIX_PRAS4_M3PR_MSK	0x00003000
#define MATRIX_PRAS4_M3PR_VAL(x)	(((x) >> 12) & 0x3)
#define MATRIX_PRAS4_M4PR(x)	((x) << 16)
#define MATRIX_PRAS4_M4PR_MSK	0x00030000
#define MATRIX_PRAS4_M4PR_VAL(x)	(((x) >> 16) & 0x3)

#define MATRIX_PRAS4_s	MMIO_REG(0x400e02a0, struct __struct_MATRIX_PRAS4)
struct __struct_MATRIX_PRAS4
{
  uint32_t m0pr : 2;
  uint32_t  : 2;
  uint32_t m1pr : 2;
  uint32_t  : 2;
  uint32_t m2pr : 2;
  uint32_t  : 2;
  uint32_t m3pr : 2;
  uint32_t  : 2;
  uint32_t m4pr : 2;
  uint32_t  : 14;
};

#define MATRIX_CCFG_SYSIO	MMIO_REG(0x400e0314, uint32_t)
#define MATRIX_CCFG_SYSIO_SYSIO4	(1 << 4)
#define MATRIX_CCFG_SYSIO_SYSIO5	(1 << 5)
#define MATRIX_CCFG_SYSIO_SYSIO6	(1 << 6)
#define MATRIX_CCFG_SYSIO_SYSIO7	(1 << 7)
#define MATRIX_CCFG_SYSIO_SYSIO10	(1 << 10)
#define MATRIX_CCFG_SYSIO_SYSIO11	(1 << 11)
#define MATRIX_CCFG_SYSIO_SYSIO12	(1 << 12)

#define MATRIX_CCFG_SYSIO_s	MMIO_REG(0x400e0314, struct __struct_MATRIX_CCFG_SYSIO)
struct __struct_MATRIX_CCFG_SYSIO
{
  uint32_t  : 4;
  uint32_t sysio4 : 1;
  uint32_t sysio5 : 1;
  uint32_t sysio6 : 1;
  uint32_t sysio7 : 1;
  uint32_t  : 2;
  uint32_t sysio10 : 1;
  uint32_t sysio11 : 1;
  uint32_t sysio12 : 1;
  uint32_t  : 19;
};

#define MATRIX_CCFG_SMCNFCS	MMIO_REG(0x400e031c, uint32_t)
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS0	(1 << 0)
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS1	(1 << 1)
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS2	(1 << 2)
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS3	(1 << 3)

#define MATRIX_CCFG_SMCNFCS_s	MMIO_REG(0x400e031c, struct __struct_MATRIX_CCFG_SMCNFCS)
struct __struct_MATRIX_CCFG_SMCNFCS
{
  uint32_t smc_nfcs0 : 1;
  uint32_t smc_nfcs1 : 1;
  uint32_t smc_nfcs2 : 1;
  uint32_t smc_nfcs3 : 1;
  uint32_t  : 28;
};

#define MATRIX_WPMR	MMIO_REG(0x400e03e4, uint32_t)
#define MATRIX_WPMR_WPEN	(1 << 0)
#define MATRIX_WPMR_WPKEY(x)	((x) << 8)
#define MATRIX_WPMR_WPKEY_MSK	0xffffff00
#define MATRIX_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define MATRIX_WPMR_s	MMIO_REG(0x400e03e4, struct __struct_MATRIX_WPMR)
struct __struct_MATRIX_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define MATRIX_WPSR	MMIO_REG(0x400e03e8, uint32_t)
#define MATRIX_WPSR_WPVS	(1 << 0)
#define MATRIX_WPSR_WPVSRC(x)	((x) << 8)
#define MATRIX_WPSR_WPVSRC_MSK	0x00ffff00
#define MATRIX_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define MATRIX_WPSR_s	MMIO_REG(0x400e03e8, struct __struct_MATRIX_WPSR)
struct __struct_MATRIX_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

// 0x400e0400 PMC

#define PMC_SCER	MMIO_REG(0x400e0400, uint32_t)
#define PMC_SCER_UDP	(1 << 7)
#define PMC_SCER_PCK0	(1 << 8)
#define PMC_SCER_PCK1	(1 << 9)
#define PMC_SCER_PCK2	(1 << 10)

#define PMC_SCER_s	MMIO_REG(0x400e0400, struct __struct_PMC_SCER)
struct __struct_PMC_SCER
{
  uint32_t  : 7;
  uint32_t udp : 1;
  uint32_t pck0 : 1;
  uint32_t pck1 : 1;
  uint32_t pck2 : 1;
  uint32_t  : 21;
};

#define PMC_SCDR	MMIO_REG(0x400e0404, uint32_t)
#define PMC_SCDR_UDP	(1 << 7)
#define PMC_SCDR_PCK0	(1 << 8)
#define PMC_SCDR_PCK1	(1 << 9)
#define PMC_SCDR_PCK2	(1 << 10)

#define PMC_SCDR_s	MMIO_REG(0x400e0404, struct __struct_PMC_SCDR)
struct __struct_PMC_SCDR
{
  uint32_t  : 7;
  uint32_t udp : 1;
  uint32_t pck0 : 1;
  uint32_t pck1 : 1;
  uint32_t pck2 : 1;
  uint32_t  : 21;
};

#define PMC_SCSR	MMIO_REG(0x400e0408, uint32_t)
#define PMC_SCSR_UDP	(1 << 7)
#define PMC_SCSR_PCK0	(1 << 8)
#define PMC_SCSR_PCK1	(1 << 9)
#define PMC_SCSR_PCK2	(1 << 10)

#define PMC_SCSR_s	MMIO_REG(0x400e0408, struct __struct_PMC_SCSR)
struct __struct_PMC_SCSR
{
  uint32_t  : 7;
  uint32_t udp : 1;
  uint32_t pck0 : 1;
  uint32_t pck1 : 1;
  uint32_t pck2 : 1;
  uint32_t  : 21;
};

#define PMC_PCER0	MMIO_REG(0x400e0410, uint32_t)
#define PMC_PCER0_SUPC	(1 << 0)
#define PMC_PCER0_RSTC	(1 << 1)
#define PMC_PCER0_RTC	(1 << 2)
#define PMC_PCER0_RTT	(1 << 3)
#define PMC_PCER0_WDT	(1 << 4)
#define PMC_PCER0_PMC	(1 << 5)
#define PMC_PCER0_EEFC0	(1 << 6)
#define PMC_PCER0_EEFC1	(1 << 7)
#define PMC_PCER0_UART0	(1 << 8)
#define PMC_PCER0_UART1	(1 << 9)
#define PMC_PCER0_SMC	(1 << 10)
#define PMC_PCER0_PIOA	(1 << 11)
#define PMC_PCER0_PIOB	(1 << 12)
#define PMC_PCER0_PIOC	(1 << 13)
#define PMC_PCER0_USART0	(1 << 14)
#define PMC_PCER0_USART1	(1 << 15)
#define PMC_PCER0_HSMCI	(1 << 18)
#define PMC_PCER0_TWI0	(1 << 19)
#define PMC_PCER0_TWI1	(1 << 20)
#define PMC_PCER0_SPI	(1 << 21)
#define PMC_PCER0_SSC	(1 << 22)
#define PMC_PCER0_TC0	(1 << 23)
#define PMC_PCER0_TC1	(1 << 24)
#define PMC_PCER0_TC2	(1 << 25)
#define PMC_PCER0_TC3	(1 << 26)
#define PMC_PCER0_TC4	(1 << 27)
#define PMC_PCER0_TC5	(1 << 28)
#define PMC_PCER0_ADC	(1 << 29)
#define PMC_PCER0_DACC	(1 << 30)
#define PMC_PCER0_PWM	(1 << 31)

#define PMC_PCER0_s	MMIO_REG(0x400e0410, struct __struct_PMC_PCER0)
struct __struct_PMC_PCER0
{
  uint32_t supc : 1;
  uint32_t rstc : 1;
  uint32_t rtc : 1;
  uint32_t rtt : 1;
  uint32_t wdt : 1;
  uint32_t pmc : 1;
  uint32_t eefc0 : 1;
  uint32_t eefc1 : 1;
  uint32_t uart0 : 1;
  uint32_t uart1 : 1;
  uint32_t smc : 1;
  uint32_t pioa : 1;
  uint32_t piob : 1;
  uint32_t pioc : 1;
  uint32_t usart0 : 1;
  uint32_t usart1 : 1;
  uint32_t  : 2;
  uint32_t hsmci : 1;
  uint32_t twi0 : 1;
  uint32_t twi1 : 1;
  uint32_t spi : 1;
  uint32_t ssc : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t adc : 1;
  uint32_t dacc : 1;
  uint32_t pwm : 1;
};

#define PMC_PCDR0	MMIO_REG(0x400e0414, uint32_t)
#define PMC_PCDR0_SUPC	(1 << 0)
#define PMC_PCDR0_RSTC	(1 << 1)
#define PMC_PCDR0_RTC	(1 << 2)
#define PMC_PCDR0_RTT	(1 << 3)
#define PMC_PCDR0_WDT	(1 << 4)
#define PMC_PCDR0_PMC	(1 << 5)
#define PMC_PCDR0_EEFC0	(1 << 6)
#define PMC_PCDR0_EEFC1	(1 << 7)
#define PMC_PCDR0_UART0	(1 << 8)
#define PMC_PCDR0_UART1	(1 << 9)
#define PMC_PCDR0_SMC	(1 << 10)
#define PMC_PCDR0_PIOA	(1 << 11)
#define PMC_PCDR0_PIOB	(1 << 12)
#define PMC_PCDR0_PIOC	(1 << 13)
#define PMC_PCDR0_USART0	(1 << 14)
#define PMC_PCDR0_USART1	(1 << 15)
#define PMC_PCDR0_HSMCI	(1 << 18)
#define PMC_PCDR0_TWI0	(1 << 19)
#define PMC_PCDR0_TWI1	(1 << 20)
#define PMC_PCDR0_SPI	(1 << 21)
#define PMC_PCDR0_SSC	(1 << 22)
#define PMC_PCDR0_TC0	(1 << 23)
#define PMC_PCDR0_TC1	(1 << 24)
#define PMC_PCDR0_TC2	(1 << 25)
#define PMC_PCDR0_TC3	(1 << 26)
#define PMC_PCDR0_TC4	(1 << 27)
#define PMC_PCDR0_TC5	(1 << 28)
#define PMC_PCDR0_ADC	(1 << 29)
#define PMC_PCDR0_DACC	(1 << 30)
#define PMC_PCDR0_PWM	(1 << 31)

#define PMC_PCDR0_s	MMIO_REG(0x400e0414, struct __struct_PMC_PCDR0)
struct __struct_PMC_PCDR0
{
  uint32_t supc : 1;
  uint32_t rstc : 1;
  uint32_t rtc : 1;
  uint32_t rtt : 1;
  uint32_t wdt : 1;
  uint32_t pmc : 1;
  uint32_t eefc0 : 1;
  uint32_t eefc1 : 1;
  uint32_t uart0 : 1;
  uint32_t uart1 : 1;
  uint32_t smc : 1;
  uint32_t pioa : 1;
  uint32_t piob : 1;
  uint32_t pioc : 1;
  uint32_t usart0 : 1;
  uint32_t usart1 : 1;
  uint32_t  : 2;
  uint32_t hsmci : 1;
  uint32_t twi0 : 1;
  uint32_t twi1 : 1;
  uint32_t spi : 1;
  uint32_t ssc : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t adc : 1;
  uint32_t dacc : 1;
  uint32_t pwm : 1;
};

#define PMC_PCSR0	MMIO_REG(0x400e0418, uint32_t)
#define PMC_PCSR0_SUPC	(1 << 0)
#define PMC_PCSR0_RSTC	(1 << 1)
#define PMC_PCSR0_RTC	(1 << 2)
#define PMC_PCSR0_RTT	(1 << 3)
#define PMC_PCSR0_WDT	(1 << 4)
#define PMC_PCSR0_PMC	(1 << 5)
#define PMC_PCSR0_EEFC0	(1 << 6)
#define PMC_PCSR0_EEFC1	(1 << 7)
#define PMC_PCSR0_UART0	(1 << 8)
#define PMC_PCSR0_UART1	(1 << 9)
#define PMC_PCSR0_SMC	(1 << 10)
#define PMC_PCSR0_PIOA	(1 << 11)
#define PMC_PCSR0_PIOB	(1 << 12)
#define PMC_PCSR0_PIOC	(1 << 13)
#define PMC_PCSR0_USART0	(1 << 14)
#define PMC_PCSR0_USART1	(1 << 15)
#define PMC_PCSR0_HSMCI	(1 << 18)
#define PMC_PCSR0_TWI0	(1 << 19)
#define PMC_PCSR0_TWI1	(1 << 20)
#define PMC_PCSR0_SPI	(1 << 21)
#define PMC_PCSR0_SSC	(1 << 22)
#define PMC_PCSR0_TC0	(1 << 23)
#define PMC_PCSR0_TC1	(1 << 24)
#define PMC_PCSR0_TC2	(1 << 25)
#define PMC_PCSR0_TC3	(1 << 26)
#define PMC_PCSR0_TC4	(1 << 27)
#define PMC_PCSR0_TC5	(1 << 28)
#define PMC_PCSR0_ADC	(1 << 29)
#define PMC_PCSR0_DACC	(1 << 30)
#define PMC_PCSR0_PWM	(1 << 31)

#define PMC_PCSR0_s	MMIO_REG(0x400e0418, struct __struct_PMC_PCSR0)
struct __struct_PMC_PCSR0
{
  uint32_t supc : 1;
  uint32_t rstc : 1;
  uint32_t rtc : 1;
  uint32_t rtt : 1;
  uint32_t wdt : 1;
  uint32_t pmc : 1;
  uint32_t eefc0 : 1;
  uint32_t eefc1 : 1;
  uint32_t uart0 : 1;
  uint32_t uart1 : 1;
  uint32_t smc : 1;
  uint32_t pioa : 1;
  uint32_t piob : 1;
  uint32_t pioc : 1;
  uint32_t usart0 : 1;
  uint32_t usart1 : 1;
  uint32_t  : 2;
  uint32_t hsmci : 1;
  uint32_t twi0 : 1;
  uint32_t twi1 : 1;
  uint32_t spi : 1;
  uint32_t ssc : 1;
  uint32_t tc0 : 1;
  uint32_t tc1 : 1;
  uint32_t tc2 : 1;
  uint32_t tc3 : 1;
  uint32_t tc4 : 1;
  uint32_t tc5 : 1;
  uint32_t adc : 1;
  uint32_t dacc : 1;
  uint32_t pwm : 1;
};

#define PMC_CKGR_MOR	MMIO_REG(0x400e0420, uint32_t)
#define PMC_CKGR_MOR_MOSCXTEN	(1 << 0)
#define PMC_CKGR_MOR_MOSCXTBY	(1 << 1)
#define PMC_CKGR_MOR_WAITMODE	(1 << 2)
#define PMC_CKGR_MOR_MOSCRCEN	(1 << 3)
#define PMC_CKGR_MOR_MOSCRCF(x)	((x) << 4)
#define PMC_CKGR_MOR_MOSCRCF_MSK	0x00000070
#define PMC_CKGR_MOR_MOSCRCF_VAL(x)	(((x) >> 4) & 0x7)
#define PMC_CKGR_MOR_MOSCXTST(x)	((x) << 8)
#define PMC_CKGR_MOR_MOSCXTST_MSK	0x0000ff00
#define PMC_CKGR_MOR_MOSCXTST_VAL(x)	(((x) >> 8) & 0xff)
#define PMC_CKGR_MOR_KEY(x)	((x) << 16)
#define PMC_CKGR_MOR_KEY_MSK	0x00ff0000
#define PMC_CKGR_MOR_KEY_VAL(x)	(((x) >> 16) & 0xff)
#define PMC_CKGR_MOR_MOSCSEL	(1 << 24)
#define PMC_CKGR_MOR_CFDEN	(1 << 25)

#define PMC_CKGR_MOR_s	MMIO_REG(0x400e0420, struct __struct_PMC_CKGR_MOR)
struct __struct_PMC_CKGR_MOR
{
  uint32_t moscxten : 1;
  uint32_t moscxtby : 1;
  uint32_t waitmode : 1;
  uint32_t moscrcen : 1;
  uint32_t moscrcf : 3;
  uint32_t  : 1;
  uint32_t moscxtst : 8;
  uint32_t key : 8;
  uint32_t moscsel : 1;
  uint32_t cfden : 1;
  uint32_t  : 6;
};

#define PMC_CKGR_MCFR	MMIO_REG(0x400e0424, uint32_t)
#define PMC_CKGR_MCFR_MAINF(x)	((x) << 0)
#define PMC_CKGR_MCFR_MAINF_MSK	0x0000ffff
#define PMC_CKGR_MCFR_MAINF_VAL(x)	(((x) >> 0) & 0xffff)
#define PMC_CKGR_MCFR_MAINFRDY	(1 << 16)
#define PMC_CKGR_MCFR_RCMEAS	(1 << 20)

#define PMC_CKGR_MCFR_s	MMIO_REG(0x400e0424, struct __struct_PMC_CKGR_MCFR)
struct __struct_PMC_CKGR_MCFR
{
  uint32_t mainf : 16;
  uint32_t mainfrdy : 1;
  uint32_t  : 3;
  uint32_t rcmeas : 1;
  uint32_t  : 11;
};

#define PMC_CKGR_PLLAR	MMIO_REG(0x400e0428, uint32_t)
#define PMC_CKGR_PLLAR_DIVA(x)	((x) << 0)
#define PMC_CKGR_PLLAR_DIVA_MSK	0x000000ff
#define PMC_CKGR_PLLAR_DIVA_VAL(x)	(((x) >> 0) & 0xff)
#define PMC_CKGR_PLLAR_PLLACOUNT(x)	((x) << 8)
#define PMC_CKGR_PLLAR_PLLACOUNT_MSK	0x00003f00
#define PMC_CKGR_PLLAR_PLLACOUNT_VAL(x)	(((x) >> 8) & 0x3f)
#define PMC_CKGR_PLLAR_MULA(x)	((x) << 16)
#define PMC_CKGR_PLLAR_MULA_MSK	0x07ff0000
#define PMC_CKGR_PLLAR_MULA_VAL(x)	(((x) >> 16) & 0x7ff)
#define PMC_CKGR_PLLAR_ONE	(1 << 29)

#define PMC_CKGR_PLLAR_s	MMIO_REG(0x400e0428, struct __struct_PMC_CKGR_PLLAR)
struct __struct_PMC_CKGR_PLLAR
{
  uint32_t diva : 8;
  uint32_t pllacount : 6;
  uint32_t  : 2;
  uint32_t mula : 11;
  uint32_t  : 2;
  uint32_t one : 1;
  uint32_t  : 2;
};

#define PMC_CKGR_PLLBR	MMIO_REG(0x400e042c, uint32_t)
#define PMC_CKGR_PLLBR_DIVB(x)	((x) << 0)
#define PMC_CKGR_PLLBR_DIVB_MSK	0x000000ff
#define PMC_CKGR_PLLBR_DIVB_VAL(x)	(((x) >> 0) & 0xff)
#define PMC_CKGR_PLLBR_PLLBCOUNT(x)	((x) << 8)
#define PMC_CKGR_PLLBR_PLLBCOUNT_MSK	0x00003f00
#define PMC_CKGR_PLLBR_PLLBCOUNT_VAL(x)	(((x) >> 8) & 0x3f)
#define PMC_CKGR_PLLBR_MULB(x)	((x) << 16)
#define PMC_CKGR_PLLBR_MULB_MSK	0x07ff0000
#define PMC_CKGR_PLLBR_MULB_VAL(x)	(((x) >> 16) & 0x7ff)

#define PMC_CKGR_PLLBR_s	MMIO_REG(0x400e042c, struct __struct_PMC_CKGR_PLLBR)
struct __struct_PMC_CKGR_PLLBR
{
  uint32_t divb : 8;
  uint32_t pllbcount : 6;
  uint32_t  : 2;
  uint32_t mulb : 11;
  uint32_t  : 5;
};

#define PMC_MCKR	MMIO_REG(0x400e0430, uint32_t)
#define PMC_MCKR_CSS(x)	((x) << 0)
#define PMC_MCKR_CSS_MSK	0x00000003
#define PMC_MCKR_CSS_VAL(x)	(((x) >> 0) & 0x3)
#define PMC_MCKR_PRES(x)	((x) << 4)
#define PMC_MCKR_PRES_MSK	0x00000070
#define PMC_MCKR_PRES_VAL(x)	(((x) >> 4) & 0x7)
#define PMC_MCKR_PLLADIV2	(1 << 12)
#define PMC_MCKR_PLLBDIV2	(1 << 13)

#define PMC_MCKR_s	MMIO_REG(0x400e0430, struct __struct_PMC_MCKR)
struct __struct_PMC_MCKR
{
  uint32_t css : 2;
  uint32_t  : 2;
  uint32_t pres : 3;
  uint32_t  : 5;
  uint32_t plladiv2 : 1;
  uint32_t pllbdiv2 : 1;
  uint32_t  : 18;
};

#define PMC_USB	MMIO_REG(0x400e0438, uint32_t)
#define PMC_USB_USBS	(1 << 0)
#define PMC_USB_USBDIV(x)	((x) << 8)
#define PMC_USB_USBDIV_MSK	0x00000f00
#define PMC_USB_USBDIV_VAL(x)	(((x) >> 8) & 0xf)

#define PMC_USB_s	MMIO_REG(0x400e0438, struct __struct_PMC_USB)
struct __struct_PMC_USB
{
  uint32_t usbs : 1;
  uint32_t  : 7;
  uint32_t usbdiv : 4;
  uint32_t  : 20;
};

#define PMC_PCK0	MMIO_REG(0x400e0440, uint32_t)
#define PMC_PCK0_CSS(x)	((x) << 0)
#define PMC_PCK0_CSS_MSK	0x00000007
#define PMC_PCK0_CSS_VAL(x)	(((x) >> 0) & 0x7)
#define PMC_PCK0_PRES(x)	((x) << 4)
#define PMC_PCK0_PRES_MSK	0x00000070
#define PMC_PCK0_PRES_VAL(x)	(((x) >> 4) & 0x7)

#define PMC_PCK0_s	MMIO_REG(0x400e0440, struct __struct_PMC_PCK0)
struct __struct_PMC_PCK0
{
  uint32_t css : 3;
  uint32_t  : 1;
  uint32_t pres : 3;
  uint32_t  : 25;
};

#define PMC_PCK1	MMIO_REG(0x400e0444, uint32_t)
#define PMC_PCK1_CSS(x)	((x) << 0)
#define PMC_PCK1_CSS_MSK	0x00000007
#define PMC_PCK1_CSS_VAL(x)	(((x) >> 0) & 0x7)
#define PMC_PCK1_PRES(x)	((x) << 4)
#define PMC_PCK1_PRES_MSK	0x00000070
#define PMC_PCK1_PRES_VAL(x)	(((x) >> 4) & 0x7)

#define PMC_PCK1_s	MMIO_REG(0x400e0444, struct __struct_PMC_PCK1)
struct __struct_PMC_PCK1
{
  uint32_t css : 3;
  uint32_t  : 1;
  uint32_t pres : 3;
  uint32_t  : 25;
};

#define PMC_PCK2	MMIO_REG(0x400e0448, uint32_t)
#define PMC_PCK2_CSS(x)	((x) << 0)
#define PMC_PCK2_CSS_MSK	0x00000007
#define PMC_PCK2_CSS_VAL(x)	(((x) >> 0) & 0x7)
#define PMC_PCK2_PRES(x)	((x) << 4)
#define PMC_PCK2_PRES_MSK	0x00000070
#define PMC_PCK2_PRES_VAL(x)	(((x) >> 4) & 0x7)

#define PMC_PCK2_s	MMIO_REG(0x400e0448, struct __struct_PMC_PCK2)
struct __struct_PMC_PCK2
{
  uint32_t css : 3;
  uint32_t  : 1;
  uint32_t pres : 3;
  uint32_t  : 25;
};

#define PMC_IER	MMIO_REG(0x400e0460, uint32_t)
#define PMC_IER_MOSCXTS	(1 << 0)
#define PMC_IER_LOCKA	(1 << 1)
#define PMC_IER_LOCKB	(1 << 2)
#define PMC_IER_MCKRDY	(1 << 3)
#define PMC_IER_PCKRDY0	(1 << 8)
#define PMC_IER_PCKRDY1	(1 << 9)
#define PMC_IER_PCKRDY2	(1 << 10)
#define PMC_IER_MOSCSELS	(1 << 16)
#define PMC_IER_MOSCRCS	(1 << 17)
#define PMC_IER_CFDEV	(1 << 18)

#define PMC_IER_s	MMIO_REG(0x400e0460, struct __struct_PMC_IER)
struct __struct_PMC_IER
{
  uint32_t moscxts : 1;
  uint32_t locka : 1;
  uint32_t lockb : 1;
  uint32_t mckrdy : 1;
  uint32_t  : 4;
  uint32_t pckrdy0 : 1;
  uint32_t pckrdy1 : 1;
  uint32_t pckrdy2 : 1;
  uint32_t  : 5;
  uint32_t moscsels : 1;
  uint32_t moscrcs : 1;
  uint32_t cfdev : 1;
  uint32_t  : 13;
};

#define PMC_IDR	MMIO_REG(0x400e0464, uint32_t)
#define PMC_IDR_MOSCXTS	(1 << 0)
#define PMC_IDR_LOCKA	(1 << 1)
#define PMC_IDR_LOCKB	(1 << 2)
#define PMC_IDR_MCKRDY	(1 << 3)
#define PMC_IDR_PCKRDY0	(1 << 8)
#define PMC_IDR_PCKRDY1	(1 << 9)
#define PMC_IDR_PCKRDY2	(1 << 10)
#define PMC_IDR_MOSCSELS	(1 << 16)
#define PMC_IDR_MOSCRCS	(1 << 17)
#define PMC_IDR_CFDEV	(1 << 18)

#define PMC_IDR_s	MMIO_REG(0x400e0464, struct __struct_PMC_IDR)
struct __struct_PMC_IDR
{
  uint32_t moscxts : 1;
  uint32_t locka : 1;
  uint32_t lockb : 1;
  uint32_t mckrdy : 1;
  uint32_t  : 4;
  uint32_t pckrdy0 : 1;
  uint32_t pckrdy1 : 1;
  uint32_t pckrdy2 : 1;
  uint32_t  : 5;
  uint32_t moscsels : 1;
  uint32_t moscrcs : 1;
  uint32_t cfdev : 1;
  uint32_t  : 13;
};

#define PMC_SR	MMIO_REG(0x400e0468, uint32_t)
#define PMC_SR_MOSCXTS	(1 << 0)
#define PMC_SR_LOCKA	(1 << 1)
#define PMC_SR_LOCKB	(1 << 2)
#define PMC_SR_MCKRDY	(1 << 3)
#define PMC_SR_OSCSELS	(1 << 7)
#define PMC_SR_PCKRDY0	(1 << 8)
#define PMC_SR_PCKRDY1	(1 << 9)
#define PMC_SR_PCKRDY2	(1 << 10)
#define PMC_SR_MOSCSELS	(1 << 16)
#define PMC_SR_MOSCRCS	(1 << 17)
#define PMC_SR_CFDEV	(1 << 18)
#define PMC_SR_CFDS	(1 << 19)
#define PMC_SR_FOS	(1 << 20)

#define PMC_SR_s	MMIO_REG(0x400e0468, struct __struct_PMC_SR)
struct __struct_PMC_SR
{
  uint32_t moscxts : 1;
  uint32_t locka : 1;
  uint32_t lockb : 1;
  uint32_t mckrdy : 1;
  uint32_t  : 3;
  uint32_t oscsels : 1;
  uint32_t pckrdy0 : 1;
  uint32_t pckrdy1 : 1;
  uint32_t pckrdy2 : 1;
  uint32_t  : 5;
  uint32_t moscsels : 1;
  uint32_t moscrcs : 1;
  uint32_t cfdev : 1;
  uint32_t cfds : 1;
  uint32_t fos : 1;
  uint32_t  : 11;
};

#define PMC_IMR	MMIO_REG(0x400e046c, uint32_t)
#define PMC_IMR_MOSCXTS	(1 << 0)
#define PMC_IMR_LOCKA	(1 << 1)
#define PMC_IMR_LOCKB	(1 << 2)
#define PMC_IMR_MCKRDY	(1 << 3)
#define PMC_IMR_PCKRDY0	(1 << 8)
#define PMC_IMR_PCKRDY1	(1 << 9)
#define PMC_IMR_PCKRDY2	(1 << 10)
#define PMC_IMR_MOSCSELS	(1 << 16)
#define PMC_IMR_MOSCRCS	(1 << 17)
#define PMC_IMR_CFDEV	(1 << 18)

#define PMC_IMR_s	MMIO_REG(0x400e046c, struct __struct_PMC_IMR)
struct __struct_PMC_IMR
{
  uint32_t moscxts : 1;
  uint32_t locka : 1;
  uint32_t lockb : 1;
  uint32_t mckrdy : 1;
  uint32_t  : 4;
  uint32_t pckrdy0 : 1;
  uint32_t pckrdy1 : 1;
  uint32_t pckrdy2 : 1;
  uint32_t  : 5;
  uint32_t moscsels : 1;
  uint32_t moscrcs : 1;
  uint32_t cfdev : 1;
  uint32_t  : 13;
};

#define PMC_FSMR	MMIO_REG(0x400e0470, uint32_t)
#define PMC_FSMR_FSTT0	(1 << 0)
#define PMC_FSMR_FSTT1	(1 << 1)
#define PMC_FSMR_FSTT2	(1 << 2)
#define PMC_FSMR_FSTT3	(1 << 3)
#define PMC_FSMR_FSTT4	(1 << 4)
#define PMC_FSMR_FSTT5	(1 << 5)
#define PMC_FSMR_FSTT6	(1 << 6)
#define PMC_FSMR_FSTT7	(1 << 7)
#define PMC_FSMR_FSTT8	(1 << 8)
#define PMC_FSMR_FSTT9	(1 << 9)
#define PMC_FSMR_FSTT10	(1 << 10)
#define PMC_FSMR_FSTT11	(1 << 11)
#define PMC_FSMR_FSTT12	(1 << 12)
#define PMC_FSMR_FSTT13	(1 << 13)
#define PMC_FSMR_FSTT14	(1 << 14)
#define PMC_FSMR_FSTT15	(1 << 15)
#define PMC_FSMR_RTTAL	(1 << 16)
#define PMC_FSMR_RTCAL	(1 << 17)
#define PMC_FSMR_USBAL	(1 << 18)
#define PMC_FSMR_FLPM(x)	((x) << 21)
#define PMC_FSMR_FLPM_MSK	0x00600000
#define PMC_FSMR_FLPM_VAL(x)	(((x) >> 21) & 0x3)

#define PMC_FSMR_s	MMIO_REG(0x400e0470, struct __struct_PMC_FSMR)
struct __struct_PMC_FSMR
{
  uint32_t fstt0 : 1;
  uint32_t fstt1 : 1;
  uint32_t fstt2 : 1;
  uint32_t fstt3 : 1;
  uint32_t fstt4 : 1;
  uint32_t fstt5 : 1;
  uint32_t fstt6 : 1;
  uint32_t fstt7 : 1;
  uint32_t fstt8 : 1;
  uint32_t fstt9 : 1;
  uint32_t fstt10 : 1;
  uint32_t fstt11 : 1;
  uint32_t fstt12 : 1;
  uint32_t fstt13 : 1;
  uint32_t fstt14 : 1;
  uint32_t fstt15 : 1;
  uint32_t rttal : 1;
  uint32_t rtcal : 1;
  uint32_t usbal : 1;
  uint32_t  : 2;
  uint32_t flpm : 2;
  uint32_t  : 9;
};

#define PMC_FSPR	MMIO_REG(0x400e0474, uint32_t)
#define PMC_FSPR_FSTP0	(1 << 0)
#define PMC_FSPR_FSTP1	(1 << 1)
#define PMC_FSPR_FSTP2	(1 << 2)
#define PMC_FSPR_FSTP3	(1 << 3)
#define PMC_FSPR_FSTP4	(1 << 4)
#define PMC_FSPR_FSTP5	(1 << 5)
#define PMC_FSPR_FSTP6	(1 << 6)
#define PMC_FSPR_FSTP7	(1 << 7)
#define PMC_FSPR_FSTP8	(1 << 8)
#define PMC_FSPR_FSTP9	(1 << 9)
#define PMC_FSPR_FSTP10	(1 << 10)
#define PMC_FSPR_FSTP11	(1 << 11)
#define PMC_FSPR_FSTP12	(1 << 12)
#define PMC_FSPR_FSTP13	(1 << 13)
#define PMC_FSPR_FSTP14	(1 << 14)
#define PMC_FSPR_FSTP15	(1 << 15)

#define PMC_FSPR_s	MMIO_REG(0x400e0474, struct __struct_PMC_FSPR)
struct __struct_PMC_FSPR
{
  uint32_t fstp0 : 1;
  uint32_t fstp1 : 1;
  uint32_t fstp2 : 1;
  uint32_t fstp3 : 1;
  uint32_t fstp4 : 1;
  uint32_t fstp5 : 1;
  uint32_t fstp6 : 1;
  uint32_t fstp7 : 1;
  uint32_t fstp8 : 1;
  uint32_t fstp9 : 1;
  uint32_t fstp10 : 1;
  uint32_t fstp11 : 1;
  uint32_t fstp12 : 1;
  uint32_t fstp13 : 1;
  uint32_t fstp14 : 1;
  uint32_t fstp15 : 1;
  uint32_t  : 16;
};

#define PMC_FOCR	MMIO_REG(0x400e0478, uint32_t)
#define PMC_FOCR_FOCLR	(1 << 0)

#define PMC_FOCR_s	MMIO_REG(0x400e0478, struct __struct_PMC_FOCR)
struct __struct_PMC_FOCR
{
  uint32_t foclr : 1;
  uint32_t  : 31;
};

#define PMC_WPMR	MMIO_REG(0x400e04e4, uint32_t)
#define PMC_WPMR_WPEN	(1 << 0)
#define PMC_WPMR_WPKEY(x)	((x) << 8)
#define PMC_WPMR_WPKEY_MSK	0xffffff00
#define PMC_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define PMC_WPMR_s	MMIO_REG(0x400e04e4, struct __struct_PMC_WPMR)
struct __struct_PMC_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define PMC_WPSR	MMIO_REG(0x400e04e8, uint32_t)
#define PMC_WPSR_WPVS	(1 << 0)
#define PMC_WPSR_WPVSRC(x)	((x) << 8)
#define PMC_WPSR_WPVSRC_MSK	0x00ffff00
#define PMC_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define PMC_WPSR_s	MMIO_REG(0x400e04e8, struct __struct_PMC_WPSR)
struct __struct_PMC_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

#define PMC_PCER1	MMIO_REG(0x400e0500, uint32_t)
#define PMC_PCER1_CRCCU	(1 << 0)
#define PMC_PCER1_ACC	(1 << 1)
#define PMC_PCER1_UDP	(1 << 2)

#define PMC_PCER1_s	MMIO_REG(0x400e0500, struct __struct_PMC_PCER1)
struct __struct_PMC_PCER1
{
  uint32_t crccu : 1;
  uint32_t acc : 1;
  uint32_t udp : 1;
  uint32_t  : 29;
};

#define PMC_PCDR1	MMIO_REG(0x400e0504, uint32_t)
#define PMC_PCDR1_CRCCU	(1 << 0)
#define PMC_PCDR1_ACC	(1 << 1)
#define PMC_PCDR1_UDP	(1 << 2)

#define PMC_PCDR1_s	MMIO_REG(0x400e0504, struct __struct_PMC_PCDR1)
struct __struct_PMC_PCDR1
{
  uint32_t crccu : 1;
  uint32_t acc : 1;
  uint32_t udp : 1;
  uint32_t  : 29;
};

#define PMC_PCSR1	MMIO_REG(0x400e0508, uint32_t)
#define PMC_PCSR1_CRCCU	(1 << 0)
#define PMC_PCSR1_ACC	(1 << 1)
#define PMC_PCSR1_UDP	(1 << 2)

#define PMC_PCSR1_s	MMIO_REG(0x400e0508, struct __struct_PMC_PCSR1)
struct __struct_PMC_PCSR1
{
  uint32_t crccu : 1;
  uint32_t acc : 1;
  uint32_t udp : 1;
  uint32_t  : 29;
};

#define PMC_OCR	MMIO_REG(0x400e0510, uint32_t)
#define PMC_OCR_CAL4(x)	((x) << 0)
#define PMC_OCR_CAL4_MSK	0x0000007f
#define PMC_OCR_CAL4_VAL(x)	(((x) >> 0) & 0x7f)
#define PMC_OCR_SEL4	(1 << 7)
#define PMC_OCR_CAL8(x)	((x) << 8)
#define PMC_OCR_CAL8_MSK	0x00007f00
#define PMC_OCR_CAL8_VAL(x)	(((x) >> 8) & 0x7f)
#define PMC_OCR_SEL8	(1 << 15)
#define PMC_OCR_CAL12(x)	((x) << 16)
#define PMC_OCR_CAL12_MSK	0x007f0000
#define PMC_OCR_CAL12_VAL(x)	(((x) >> 16) & 0x7f)
#define PMC_OCR_SEL12	(1 << 23)

#define PMC_OCR_s	MMIO_REG(0x400e0510, struct __struct_PMC_OCR)
struct __struct_PMC_OCR
{
  uint32_t cal4 : 7;
  uint32_t sel4 : 1;
  uint32_t cal8 : 7;
  uint32_t sel8 : 1;
  uint32_t cal12 : 7;
  uint32_t sel12 : 1;
  uint32_t  : 8;
};

// 0x400e0600 UART0

#define UART0_CR	MMIO_REG(0x400e0600, uint32_t)
#define UART0_CR_RSTRX	(1 << 2)
#define UART0_CR_RSTTX	(1 << 3)
#define UART0_CR_RXEN	(1 << 4)
#define UART0_CR_RXDIS	(1 << 5)
#define UART0_CR_TXEN	(1 << 6)
#define UART0_CR_TXDIS	(1 << 7)
#define UART0_CR_RSTSTA	(1 << 8)

#define UART0_CR_s	MMIO_REG(0x400e0600, struct __struct_UART0_CR)
struct __struct_UART0_CR
{
  uint32_t  : 2;
  uint32_t rstrx : 1;
  uint32_t rsttx : 1;
  uint32_t rxen : 1;
  uint32_t rxdis : 1;
  uint32_t txen : 1;
  uint32_t txdis : 1;
  uint32_t rststa : 1;
  uint32_t  : 23;
};

#define UART0_MR	MMIO_REG(0x400e0604, uint32_t)
#define UART0_MR_PAR(x)	((x) << 9)
#define UART0_MR_PAR_MSK	0x00000e00
#define UART0_MR_PAR_VAL(x)	(((x) >> 9) & 0x7)
#define UART0_MR_CHMODE(x)	((x) << 14)
#define UART0_MR_CHMODE_MSK	0x0000c000
#define UART0_MR_CHMODE_VAL(x)	(((x) >> 14) & 0x3)

#define UART0_MR_s	MMIO_REG(0x400e0604, struct __struct_UART0_MR)
struct __struct_UART0_MR
{
  uint32_t  : 9;
  uint32_t par : 3;
  uint32_t  : 2;
  uint32_t chmode : 2;
  uint32_t  : 16;
};

#define UART0_IER	MMIO_REG(0x400e0608, uint32_t)
#define UART0_IER_RXRDY	(1 << 0)
#define UART0_IER_TXRDY	(1 << 1)
#define UART0_IER_ENDRX	(1 << 3)
#define UART0_IER_ENDTX	(1 << 4)
#define UART0_IER_OVRE	(1 << 5)
#define UART0_IER_FRAME	(1 << 6)
#define UART0_IER_PARE	(1 << 7)
#define UART0_IER_TXEMPTY	(1 << 9)
#define UART0_IER_TXBUFE	(1 << 11)
#define UART0_IER_RXBUFF	(1 << 12)

#define UART0_IER_s	MMIO_REG(0x400e0608, struct __struct_UART0_IER)
struct __struct_UART0_IER
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t  : 1;
  uint32_t txempty : 1;
  uint32_t  : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 19;
};

#define UART0_IDR	MMIO_REG(0x400e060c, uint32_t)
#define UART0_IDR_RXRDY	(1 << 0)
#define UART0_IDR_TXRDY	(1 << 1)
#define UART0_IDR_ENDRX	(1 << 3)
#define UART0_IDR_ENDTX	(1 << 4)
#define UART0_IDR_OVRE	(1 << 5)
#define UART0_IDR_FRAME	(1 << 6)
#define UART0_IDR_PARE	(1 << 7)
#define UART0_IDR_TXEMPTY	(1 << 9)
#define UART0_IDR_TXBUFE	(1 << 11)
#define UART0_IDR_RXBUFF	(1 << 12)

#define UART0_IDR_s	MMIO_REG(0x400e060c, struct __struct_UART0_IDR)
struct __struct_UART0_IDR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t  : 1;
  uint32_t txempty : 1;
  uint32_t  : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 19;
};

#define UART0_IMR	MMIO_REG(0x400e0610, uint32_t)
#define UART0_IMR_RXRDY	(1 << 0)
#define UART0_IMR_TXRDY	(1 << 1)
#define UART0_IMR_ENDRX	(1 << 3)
#define UART0_IMR_ENDTX	(1 << 4)
#define UART0_IMR_OVRE	(1 << 5)
#define UART0_IMR_FRAME	(1 << 6)
#define UART0_IMR_PARE	(1 << 7)
#define UART0_IMR_TXEMPTY	(1 << 9)
#define UART0_IMR_TXBUFE	(1 << 11)
#define UART0_IMR_RXBUFF	(1 << 12)

#define UART0_IMR_s	MMIO_REG(0x400e0610, struct __struct_UART0_IMR)
struct __struct_UART0_IMR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t  : 1;
  uint32_t txempty : 1;
  uint32_t  : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 19;
};

#define UART0_SR	MMIO_REG(0x400e0614, uint32_t)
#define UART0_SR_RXRDY	(1 << 0)
#define UART0_SR_TXRDY	(1 << 1)
#define UART0_SR_ENDRX	(1 << 3)
#define UART0_SR_ENDTX	(1 << 4)
#define UART0_SR_OVRE	(1 << 5)
#define UART0_SR_FRAME	(1 << 6)
#define UART0_SR_PARE	(1 << 7)
#define UART0_SR_TXEMPTY	(1 << 9)
#define UART0_SR_TXBUFE	(1 << 11)
#define UART0_SR_RXBUFF	(1 << 12)

#define UART0_SR_s	MMIO_REG(0x400e0614, struct __struct_UART0_SR)
struct __struct_UART0_SR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t  : 1;
  uint32_t txempty : 1;
  uint32_t  : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 19;
};

#define UART0_RHR	MMIO_REG(0x400e0618, uint32_t)
#define UART0_RHR_RXCHR(x)	((x) << 0)
#define UART0_RHR_RXCHR_MSK	0x000000ff
#define UART0_RHR_RXCHR_VAL(x)	(((x) >> 0) & 0xff)

#define UART0_RHR_s	MMIO_REG(0x400e0618, struct __struct_UART0_RHR)
struct __struct_UART0_RHR
{
  uint32_t rxchr : 8;
  uint32_t  : 24;
};

#define UART0_THR	MMIO_REG(0x400e061c, uint32_t)
#define UART0_THR_TXCHR(x)	((x) << 0)
#define UART0_THR_TXCHR_MSK	0x000000ff
#define UART0_THR_TXCHR_VAL(x)	(((x) >> 0) & 0xff)

#define UART0_THR_s	MMIO_REG(0x400e061c, struct __struct_UART0_THR)
struct __struct_UART0_THR
{
  uint32_t txchr : 8;
  uint32_t  : 24;
};

#define UART0_BRGR	MMIO_REG(0x400e0620, uint32_t)
#define UART0_BRGR_CD(x)	((x) << 0)
#define UART0_BRGR_CD_MSK	0x0000ffff
#define UART0_BRGR_CD_VAL(x)	(((x) >> 0) & 0xffff)

#define UART0_BRGR_s	MMIO_REG(0x400e0620, struct __struct_UART0_BRGR)
struct __struct_UART0_BRGR
{
  uint32_t cd : 16;
  uint32_t  : 16;
};

// 0x400e0700 UART0_PDC

#define UART0_PDC_RPR	MMIO_REG(0x400e0700, uint32_t)

#define UART0_PDC_RCR	MMIO_REG(0x400e0704, uint32_t)

#define UART0_PDC_TPR	MMIO_REG(0x400e0708, uint32_t)

#define UART0_PDC_TCR	MMIO_REG(0x400e070c, uint32_t)

#define UART0_PDC_RNPR	MMIO_REG(0x400e0710, uint32_t)

#define UART0_PDC_RNCR	MMIO_REG(0x400e0714, uint32_t)

#define UART0_PDC_TNPR	MMIO_REG(0x400e0718, uint32_t)

#define UART0_PDC_TNCR	MMIO_REG(0x400e071c, uint32_t)

#define UART0_PDC_PTCR	MMIO_REG(0x400e0720, uint32_t)
#define UART0_PDC_PTCR_RXTEN	(1 << 0)
#define UART0_PDC_PTCR_RXTDIS	(1 << 1)
#define UART0_PDC_PTCR_TXTEN	(1 << 8)
#define UART0_PDC_PTCR_TXTDIS	(1 << 9)

#define UART0_PDC_PTCR_s	MMIO_REG(0x400e0720, struct __struct_UART0_PDC_PTCR)
struct __struct_UART0_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define UART0_PDC_PTSR	MMIO_REG(0x400e0724, uint32_t)
#define UART0_PDC_PTSR_RXTEN	(1 << 0)
#define UART0_PDC_PTSR_TXTEN	(1 << 8)

#define UART0_PDC_PTSR_s	MMIO_REG(0x400e0724, struct __struct_UART0_PDC_PTSR)
struct __struct_UART0_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x400e0740 CHIPID

#define CHIPID_CIDR	MMIO_REG(0x400e0740, uint32_t)
#define CHIPID_CIDR_VERSION(x)	((x) << 0)
#define CHIPID_CIDR_VERSION_MSK	0x0000001f
#define CHIPID_CIDR_VERSION_VAL(x)	(((x) >> 0) & 0x1f)
#define CHIPID_CIDR_EPROC(x)	((x) << 5)
#define CHIPID_CIDR_EPROC_MSK	0x000000e0
#define CHIPID_CIDR_EPROC_VAL(x)	(((x) >> 5) & 0x7)
#define CHIPID_CIDR_NVPSIZ(x)	((x) << 8)
#define CHIPID_CIDR_NVPSIZ_MSK	0x00000f00
#define CHIPID_CIDR_NVPSIZ_VAL(x)	(((x) >> 8) & 0xf)
#define CHIPID_CIDR_NVPSIZ2(x)	((x) << 12)
#define CHIPID_CIDR_NVPSIZ2_MSK	0x0000f000
#define CHIPID_CIDR_NVPSIZ2_VAL(x)	(((x) >> 12) & 0xf)
#define CHIPID_CIDR_SRAMSIZ(x)	((x) << 16)
#define CHIPID_CIDR_SRAMSIZ_MSK	0x000f0000
#define CHIPID_CIDR_SRAMSIZ_VAL(x)	(((x) >> 16) & 0xf)
#define CHIPID_CIDR_ARCH(x)	((x) << 20)
#define CHIPID_CIDR_ARCH_MSK	0x0ff00000
#define CHIPID_CIDR_ARCH_VAL(x)	(((x) >> 20) & 0xff)
#define CHIPID_CIDR_NVPTYP(x)	((x) << 28)
#define CHIPID_CIDR_NVPTYP_MSK	0x70000000
#define CHIPID_CIDR_NVPTYP_VAL(x)	(((x) >> 28) & 0x7)
#define CHIPID_CIDR_EXT	(1 << 31)

#define CHIPID_CIDR_s	MMIO_REG(0x400e0740, struct __struct_CHIPID_CIDR)
struct __struct_CHIPID_CIDR
{
  uint32_t version : 5;
  uint32_t eproc : 3;
  uint32_t nvpsiz : 4;
  uint32_t nvpsiz2 : 4;
  uint32_t sramsiz : 4;
  uint32_t arch : 8;
  uint32_t nvptyp : 3;
  uint32_t ext : 1;
};

#define CHIPID_EXID	MMIO_REG(0x400e0744, uint32_t)

// 0x400e0800 UART1

#define UART1_CR	MMIO_REG(0x400e0800, uint32_t)
#define UART1_CR_RSTRX	(1 << 2)
#define UART1_CR_RSTTX	(1 << 3)
#define UART1_CR_RXEN	(1 << 4)
#define UART1_CR_RXDIS	(1 << 5)
#define UART1_CR_TXEN	(1 << 6)
#define UART1_CR_TXDIS	(1 << 7)
#define UART1_CR_RSTSTA	(1 << 8)

#define UART1_CR_s	MMIO_REG(0x400e0800, struct __struct_UART1_CR)
struct __struct_UART1_CR
{
  uint32_t  : 2;
  uint32_t rstrx : 1;
  uint32_t rsttx : 1;
  uint32_t rxen : 1;
  uint32_t rxdis : 1;
  uint32_t txen : 1;
  uint32_t txdis : 1;
  uint32_t rststa : 1;
  uint32_t  : 23;
};

#define UART1_MR	MMIO_REG(0x400e0804, uint32_t)
#define UART1_MR_PAR(x)	((x) << 9)
#define UART1_MR_PAR_MSK	0x00000e00
#define UART1_MR_PAR_VAL(x)	(((x) >> 9) & 0x7)
#define UART1_MR_CHMODE(x)	((x) << 14)
#define UART1_MR_CHMODE_MSK	0x0000c000
#define UART1_MR_CHMODE_VAL(x)	(((x) >> 14) & 0x3)

#define UART1_MR_s	MMIO_REG(0x400e0804, struct __struct_UART1_MR)
struct __struct_UART1_MR
{
  uint32_t  : 9;
  uint32_t par : 3;
  uint32_t  : 2;
  uint32_t chmode : 2;
  uint32_t  : 16;
};

#define UART1_IER	MMIO_REG(0x400e0808, uint32_t)
#define UART1_IER_RXRDY	(1 << 0)
#define UART1_IER_TXRDY	(1 << 1)
#define UART1_IER_ENDRX	(1 << 3)
#define UART1_IER_ENDTX	(1 << 4)
#define UART1_IER_OVRE	(1 << 5)
#define UART1_IER_FRAME	(1 << 6)
#define UART1_IER_PARE	(1 << 7)
#define UART1_IER_TXEMPTY	(1 << 9)
#define UART1_IER_TXBUFE	(1 << 11)
#define UART1_IER_RXBUFF	(1 << 12)

#define UART1_IER_s	MMIO_REG(0x400e0808, struct __struct_UART1_IER)
struct __struct_UART1_IER
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t  : 1;
  uint32_t txempty : 1;
  uint32_t  : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 19;
};

#define UART1_IDR	MMIO_REG(0x400e080c, uint32_t)
#define UART1_IDR_RXRDY	(1 << 0)
#define UART1_IDR_TXRDY	(1 << 1)
#define UART1_IDR_ENDRX	(1 << 3)
#define UART1_IDR_ENDTX	(1 << 4)
#define UART1_IDR_OVRE	(1 << 5)
#define UART1_IDR_FRAME	(1 << 6)
#define UART1_IDR_PARE	(1 << 7)
#define UART1_IDR_TXEMPTY	(1 << 9)
#define UART1_IDR_TXBUFE	(1 << 11)
#define UART1_IDR_RXBUFF	(1 << 12)

#define UART1_IDR_s	MMIO_REG(0x400e080c, struct __struct_UART1_IDR)
struct __struct_UART1_IDR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t  : 1;
  uint32_t txempty : 1;
  uint32_t  : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 19;
};

#define UART1_IMR	MMIO_REG(0x400e0810, uint32_t)
#define UART1_IMR_RXRDY	(1 << 0)
#define UART1_IMR_TXRDY	(1 << 1)
#define UART1_IMR_ENDRX	(1 << 3)
#define UART1_IMR_ENDTX	(1 << 4)
#define UART1_IMR_OVRE	(1 << 5)
#define UART1_IMR_FRAME	(1 << 6)
#define UART1_IMR_PARE	(1 << 7)
#define UART1_IMR_TXEMPTY	(1 << 9)
#define UART1_IMR_TXBUFE	(1 << 11)
#define UART1_IMR_RXBUFF	(1 << 12)

#define UART1_IMR_s	MMIO_REG(0x400e0810, struct __struct_UART1_IMR)
struct __struct_UART1_IMR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t  : 1;
  uint32_t txempty : 1;
  uint32_t  : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 19;
};

#define UART1_SR	MMIO_REG(0x400e0814, uint32_t)
#define UART1_SR_RXRDY	(1 << 0)
#define UART1_SR_TXRDY	(1 << 1)
#define UART1_SR_ENDRX	(1 << 3)
#define UART1_SR_ENDTX	(1 << 4)
#define UART1_SR_OVRE	(1 << 5)
#define UART1_SR_FRAME	(1 << 6)
#define UART1_SR_PARE	(1 << 7)
#define UART1_SR_TXEMPTY	(1 << 9)
#define UART1_SR_TXBUFE	(1 << 11)
#define UART1_SR_RXBUFF	(1 << 12)

#define UART1_SR_s	MMIO_REG(0x400e0814, struct __struct_UART1_SR)
struct __struct_UART1_SR
{
  uint32_t rxrdy : 1;
  uint32_t txrdy : 1;
  uint32_t  : 1;
  uint32_t endrx : 1;
  uint32_t endtx : 1;
  uint32_t ovre : 1;
  uint32_t frame : 1;
  uint32_t pare : 1;
  uint32_t  : 1;
  uint32_t txempty : 1;
  uint32_t  : 1;
  uint32_t txbufe : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 19;
};

#define UART1_RHR	MMIO_REG(0x400e0818, uint32_t)
#define UART1_RHR_RXCHR(x)	((x) << 0)
#define UART1_RHR_RXCHR_MSK	0x000000ff
#define UART1_RHR_RXCHR_VAL(x)	(((x) >> 0) & 0xff)

#define UART1_RHR_s	MMIO_REG(0x400e0818, struct __struct_UART1_RHR)
struct __struct_UART1_RHR
{
  uint32_t rxchr : 8;
  uint32_t  : 24;
};

#define UART1_THR	MMIO_REG(0x400e081c, uint32_t)
#define UART1_THR_TXCHR(x)	((x) << 0)
#define UART1_THR_TXCHR_MSK	0x000000ff
#define UART1_THR_TXCHR_VAL(x)	(((x) >> 0) & 0xff)

#define UART1_THR_s	MMIO_REG(0x400e081c, struct __struct_UART1_THR)
struct __struct_UART1_THR
{
  uint32_t txchr : 8;
  uint32_t  : 24;
};

#define UART1_BRGR	MMIO_REG(0x400e0820, uint32_t)
#define UART1_BRGR_CD(x)	((x) << 0)
#define UART1_BRGR_CD_MSK	0x0000ffff
#define UART1_BRGR_CD_VAL(x)	(((x) >> 0) & 0xffff)

#define UART1_BRGR_s	MMIO_REG(0x400e0820, struct __struct_UART1_BRGR)
struct __struct_UART1_BRGR
{
  uint32_t cd : 16;
  uint32_t  : 16;
};

// 0x400e0900 UART1_PDC

#define UART1_PDC_RPR	MMIO_REG(0x400e0900, uint32_t)

#define UART1_PDC_RCR	MMIO_REG(0x400e0904, uint32_t)

#define UART1_PDC_TPR	MMIO_REG(0x400e0908, uint32_t)

#define UART1_PDC_TCR	MMIO_REG(0x400e090c, uint32_t)

#define UART1_PDC_RNPR	MMIO_REG(0x400e0910, uint32_t)

#define UART1_PDC_RNCR	MMIO_REG(0x400e0914, uint32_t)

#define UART1_PDC_TNPR	MMIO_REG(0x400e0918, uint32_t)

#define UART1_PDC_TNCR	MMIO_REG(0x400e091c, uint32_t)

#define UART1_PDC_PTCR	MMIO_REG(0x400e0920, uint32_t)
#define UART1_PDC_PTCR_RXTEN	(1 << 0)
#define UART1_PDC_PTCR_RXTDIS	(1 << 1)
#define UART1_PDC_PTCR_TXTEN	(1 << 8)
#define UART1_PDC_PTCR_TXTDIS	(1 << 9)

#define UART1_PDC_PTCR_s	MMIO_REG(0x400e0920, struct __struct_UART1_PDC_PTCR)
struct __struct_UART1_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define UART1_PDC_PTSR	MMIO_REG(0x400e0924, uint32_t)
#define UART1_PDC_PTSR_RXTEN	(1 << 0)
#define UART1_PDC_PTSR_TXTEN	(1 << 8)

#define UART1_PDC_PTSR_s	MMIO_REG(0x400e0924, struct __struct_UART1_PDC_PTSR)
struct __struct_UART1_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x400e0a00 EEFC

#define EEFC_FMR	MMIO_REG(0x400e0a00, uint32_t)
#define EEFC_FMR_FRDY	(1 << 0)
#define EEFC_FMR_FWS(x)	((x) << 8)
#define EEFC_FMR_FWS_MSK	0x00000f00
#define EEFC_FMR_FWS_VAL(x)	(((x) >> 8) & 0xf)
#define EEFC_FMR_SCOD	(1 << 16)
#define EEFC_FMR_FAM	(1 << 24)
#define EEFC_FMR_CLOE	(1 << 26)

#define EEFC_FMR_s	MMIO_REG(0x400e0a00, struct __struct_EEFC_FMR)
struct __struct_EEFC_FMR
{
  uint32_t frdy : 1;
  uint32_t  : 7;
  uint32_t fws : 4;
  uint32_t  : 4;
  uint32_t scod : 1;
  uint32_t  : 7;
  uint32_t fam : 1;
  uint32_t  : 1;
  uint32_t cloe : 1;
  uint32_t  : 5;
};

#define EEFC_FCR	MMIO_REG(0x400e0a04, uint32_t)
#define EEFC_FCR_FCMD(x)	((x) << 0)
#define EEFC_FCR_FCMD_MSK	0x000000ff
#define EEFC_FCR_FCMD_VAL(x)	(((x) >> 0) & 0xff)
#define EEFC_FCR_FARG(x)	((x) << 8)
#define EEFC_FCR_FARG_MSK	0x00ffff00
#define EEFC_FCR_FARG_VAL(x)	(((x) >> 8) & 0xffff)
#define EEFC_FCR_FKEY(x)	((x) << 24)
#define EEFC_FCR_FKEY_MSK	0xff000000
#define EEFC_FCR_FKEY_VAL(x)	(((x) >> 24) & 0xff)

#define EEFC_FCR_s	MMIO_REG(0x400e0a04, struct __struct_EEFC_FCR)
struct __struct_EEFC_FCR
{
  uint32_t fcmd : 8;
  uint32_t farg : 16;
  uint32_t fkey : 8;
};

#define EEFC_FSR	MMIO_REG(0x400e0a08, uint32_t)
#define EEFC_FSR_FRDY	(1 << 0)
#define EEFC_FSR_FCMDE	(1 << 1)
#define EEFC_FSR_FLOCKE	(1 << 2)
#define EEFC_FSR_FLERR	(1 << 3)

#define EEFC_FSR_s	MMIO_REG(0x400e0a08, struct __struct_EEFC_FSR)
struct __struct_EEFC_FSR
{
  uint32_t frdy : 1;
  uint32_t fcmde : 1;
  uint32_t flocke : 1;
  uint32_t flerr : 1;
  uint32_t  : 28;
};

#define EEFC_FRR	MMIO_REG(0x400e0a0c, uint32_t)

// 0x400e0e00 PIOA

#define PIOA_PER	MMIO_REG(0x400e0e00, uint32_t)
#define PIOA_PER_P0	(1 << 0)
#define PIOA_PER_P1	(1 << 1)
#define PIOA_PER_P2	(1 << 2)
#define PIOA_PER_P3	(1 << 3)
#define PIOA_PER_P4	(1 << 4)
#define PIOA_PER_P5	(1 << 5)
#define PIOA_PER_P6	(1 << 6)
#define PIOA_PER_P7	(1 << 7)
#define PIOA_PER_P8	(1 << 8)
#define PIOA_PER_P9	(1 << 9)
#define PIOA_PER_P10	(1 << 10)
#define PIOA_PER_P11	(1 << 11)
#define PIOA_PER_P12	(1 << 12)
#define PIOA_PER_P13	(1 << 13)
#define PIOA_PER_P14	(1 << 14)
#define PIOA_PER_P15	(1 << 15)
#define PIOA_PER_P16	(1 << 16)
#define PIOA_PER_P17	(1 << 17)
#define PIOA_PER_P18	(1 << 18)
#define PIOA_PER_P19	(1 << 19)
#define PIOA_PER_P20	(1 << 20)
#define PIOA_PER_P21	(1 << 21)
#define PIOA_PER_P22	(1 << 22)
#define PIOA_PER_P23	(1 << 23)
#define PIOA_PER_P24	(1 << 24)
#define PIOA_PER_P25	(1 << 25)
#define PIOA_PER_P26	(1 << 26)
#define PIOA_PER_P27	(1 << 27)
#define PIOA_PER_P28	(1 << 28)
#define PIOA_PER_P29	(1 << 29)
#define PIOA_PER_P30	(1 << 30)
#define PIOA_PER_P31	(1 << 31)

#define PIOA_PER_s	MMIO_REG(0x400e0e00, struct __struct_PIOA_PER)
struct __struct_PIOA_PER
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

#define PIOA_PDR	MMIO_REG(0x400e0e04, uint32_t)
#define PIOA_PDR_P0	(1 << 0)
#define PIOA_PDR_P1	(1 << 1)
#define PIOA_PDR_P2	(1 << 2)
#define PIOA_PDR_P3	(1 << 3)
#define PIOA_PDR_P4	(1 << 4)
#define PIOA_PDR_P5	(1 << 5)
#define PIOA_PDR_P6	(1 << 6)
#define PIOA_PDR_P7	(1 << 7)
#define PIOA_PDR_P8	(1 << 8)
#define PIOA_PDR_P9	(1 << 9)
#define PIOA_PDR_P10	(1 << 10)
#define PIOA_PDR_P11	(1 << 11)
#define PIOA_PDR_P12	(1 << 12)
#define PIOA_PDR_P13	(1 << 13)
#define PIOA_PDR_P14	(1 << 14)
#define PIOA_PDR_P15	(1 << 15)
#define PIOA_PDR_P16	(1 << 16)
#define PIOA_PDR_P17	(1 << 17)
#define PIOA_PDR_P18	(1 << 18)
#define PIOA_PDR_P19	(1 << 19)
#define PIOA_PDR_P20	(1 << 20)
#define PIOA_PDR_P21	(1 << 21)
#define PIOA_PDR_P22	(1 << 22)
#define PIOA_PDR_P23	(1 << 23)
#define PIOA_PDR_P24	(1 << 24)
#define PIOA_PDR_P25	(1 << 25)
#define PIOA_PDR_P26	(1 << 26)
#define PIOA_PDR_P27	(1 << 27)
#define PIOA_PDR_P28	(1 << 28)
#define PIOA_PDR_P29	(1 << 29)
#define PIOA_PDR_P30	(1 << 30)
#define PIOA_PDR_P31	(1 << 31)

#define PIOA_PDR_s	MMIO_REG(0x400e0e04, struct __struct_PIOA_PDR)
struct __struct_PIOA_PDR
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

#define PIOA_PSR	MMIO_REG(0x400e0e08, uint32_t)
#define PIOA_PSR_P0	(1 << 0)
#define PIOA_PSR_P1	(1 << 1)
#define PIOA_PSR_P2	(1 << 2)
#define PIOA_PSR_P3	(1 << 3)
#define PIOA_PSR_P4	(1 << 4)
#define PIOA_PSR_P5	(1 << 5)
#define PIOA_PSR_P6	(1 << 6)
#define PIOA_PSR_P7	(1 << 7)
#define PIOA_PSR_P8	(1 << 8)
#define PIOA_PSR_P9	(1 << 9)
#define PIOA_PSR_P10	(1 << 10)
#define PIOA_PSR_P11	(1 << 11)
#define PIOA_PSR_P12	(1 << 12)
#define PIOA_PSR_P13	(1 << 13)
#define PIOA_PSR_P14	(1 << 14)
#define PIOA_PSR_P15	(1 << 15)
#define PIOA_PSR_P16	(1 << 16)
#define PIOA_PSR_P17	(1 << 17)
#define PIOA_PSR_P18	(1 << 18)
#define PIOA_PSR_P19	(1 << 19)
#define PIOA_PSR_P20	(1 << 20)
#define PIOA_PSR_P21	(1 << 21)
#define PIOA_PSR_P22	(1 << 22)
#define PIOA_PSR_P23	(1 << 23)
#define PIOA_PSR_P24	(1 << 24)
#define PIOA_PSR_P25	(1 << 25)
#define PIOA_PSR_P26	(1 << 26)
#define PIOA_PSR_P27	(1 << 27)
#define PIOA_PSR_P28	(1 << 28)
#define PIOA_PSR_P29	(1 << 29)
#define PIOA_PSR_P30	(1 << 30)
#define PIOA_PSR_P31	(1 << 31)

#define PIOA_PSR_s	MMIO_REG(0x400e0e08, struct __struct_PIOA_PSR)
struct __struct_PIOA_PSR
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

#define PIOA_OER	MMIO_REG(0x400e0e10, uint32_t)
#define PIOA_OER_P0	(1 << 0)
#define PIOA_OER_P1	(1 << 1)
#define PIOA_OER_P2	(1 << 2)
#define PIOA_OER_P3	(1 << 3)
#define PIOA_OER_P4	(1 << 4)
#define PIOA_OER_P5	(1 << 5)
#define PIOA_OER_P6	(1 << 6)
#define PIOA_OER_P7	(1 << 7)
#define PIOA_OER_P8	(1 << 8)
#define PIOA_OER_P9	(1 << 9)
#define PIOA_OER_P10	(1 << 10)
#define PIOA_OER_P11	(1 << 11)
#define PIOA_OER_P12	(1 << 12)
#define PIOA_OER_P13	(1 << 13)
#define PIOA_OER_P14	(1 << 14)
#define PIOA_OER_P15	(1 << 15)
#define PIOA_OER_P16	(1 << 16)
#define PIOA_OER_P17	(1 << 17)
#define PIOA_OER_P18	(1 << 18)
#define PIOA_OER_P19	(1 << 19)
#define PIOA_OER_P20	(1 << 20)
#define PIOA_OER_P21	(1 << 21)
#define PIOA_OER_P22	(1 << 22)
#define PIOA_OER_P23	(1 << 23)
#define PIOA_OER_P24	(1 << 24)
#define PIOA_OER_P25	(1 << 25)
#define PIOA_OER_P26	(1 << 26)
#define PIOA_OER_P27	(1 << 27)
#define PIOA_OER_P28	(1 << 28)
#define PIOA_OER_P29	(1 << 29)
#define PIOA_OER_P30	(1 << 30)
#define PIOA_OER_P31	(1 << 31)

#define PIOA_OER_s	MMIO_REG(0x400e0e10, struct __struct_PIOA_OER)
struct __struct_PIOA_OER
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

#define PIOA_ODR	MMIO_REG(0x400e0e14, uint32_t)
#define PIOA_ODR_P0	(1 << 0)
#define PIOA_ODR_P1	(1 << 1)
#define PIOA_ODR_P2	(1 << 2)
#define PIOA_ODR_P3	(1 << 3)
#define PIOA_ODR_P4	(1 << 4)
#define PIOA_ODR_P5	(1 << 5)
#define PIOA_ODR_P6	(1 << 6)
#define PIOA_ODR_P7	(1 << 7)
#define PIOA_ODR_P8	(1 << 8)
#define PIOA_ODR_P9	(1 << 9)
#define PIOA_ODR_P10	(1 << 10)
#define PIOA_ODR_P11	(1 << 11)
#define PIOA_ODR_P12	(1 << 12)
#define PIOA_ODR_P13	(1 << 13)
#define PIOA_ODR_P14	(1 << 14)
#define PIOA_ODR_P15	(1 << 15)
#define PIOA_ODR_P16	(1 << 16)
#define PIOA_ODR_P17	(1 << 17)
#define PIOA_ODR_P18	(1 << 18)
#define PIOA_ODR_P19	(1 << 19)
#define PIOA_ODR_P20	(1 << 20)
#define PIOA_ODR_P21	(1 << 21)
#define PIOA_ODR_P22	(1 << 22)
#define PIOA_ODR_P23	(1 << 23)
#define PIOA_ODR_P24	(1 << 24)
#define PIOA_ODR_P25	(1 << 25)
#define PIOA_ODR_P26	(1 << 26)
#define PIOA_ODR_P27	(1 << 27)
#define PIOA_ODR_P28	(1 << 28)
#define PIOA_ODR_P29	(1 << 29)
#define PIOA_ODR_P30	(1 << 30)
#define PIOA_ODR_P31	(1 << 31)

#define PIOA_ODR_s	MMIO_REG(0x400e0e14, struct __struct_PIOA_ODR)
struct __struct_PIOA_ODR
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

#define PIOA_OSR	MMIO_REG(0x400e0e18, uint32_t)
#define PIOA_OSR_P0	(1 << 0)
#define PIOA_OSR_P1	(1 << 1)
#define PIOA_OSR_P2	(1 << 2)
#define PIOA_OSR_P3	(1 << 3)
#define PIOA_OSR_P4	(1 << 4)
#define PIOA_OSR_P5	(1 << 5)
#define PIOA_OSR_P6	(1 << 6)
#define PIOA_OSR_P7	(1 << 7)
#define PIOA_OSR_P8	(1 << 8)
#define PIOA_OSR_P9	(1 << 9)
#define PIOA_OSR_P10	(1 << 10)
#define PIOA_OSR_P11	(1 << 11)
#define PIOA_OSR_P12	(1 << 12)
#define PIOA_OSR_P13	(1 << 13)
#define PIOA_OSR_P14	(1 << 14)
#define PIOA_OSR_P15	(1 << 15)
#define PIOA_OSR_P16	(1 << 16)
#define PIOA_OSR_P17	(1 << 17)
#define PIOA_OSR_P18	(1 << 18)
#define PIOA_OSR_P19	(1 << 19)
#define PIOA_OSR_P20	(1 << 20)
#define PIOA_OSR_P21	(1 << 21)
#define PIOA_OSR_P22	(1 << 22)
#define PIOA_OSR_P23	(1 << 23)
#define PIOA_OSR_P24	(1 << 24)
#define PIOA_OSR_P25	(1 << 25)
#define PIOA_OSR_P26	(1 << 26)
#define PIOA_OSR_P27	(1 << 27)
#define PIOA_OSR_P28	(1 << 28)
#define PIOA_OSR_P29	(1 << 29)
#define PIOA_OSR_P30	(1 << 30)
#define PIOA_OSR_P31	(1 << 31)

#define PIOA_OSR_s	MMIO_REG(0x400e0e18, struct __struct_PIOA_OSR)
struct __struct_PIOA_OSR
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

#define PIOA_IFER	MMIO_REG(0x400e0e20, uint32_t)
#define PIOA_IFER_P0	(1 << 0)
#define PIOA_IFER_P1	(1 << 1)
#define PIOA_IFER_P2	(1 << 2)
#define PIOA_IFER_P3	(1 << 3)
#define PIOA_IFER_P4	(1 << 4)
#define PIOA_IFER_P5	(1 << 5)
#define PIOA_IFER_P6	(1 << 6)
#define PIOA_IFER_P7	(1 << 7)
#define PIOA_IFER_P8	(1 << 8)
#define PIOA_IFER_P9	(1 << 9)
#define PIOA_IFER_P10	(1 << 10)
#define PIOA_IFER_P11	(1 << 11)
#define PIOA_IFER_P12	(1 << 12)
#define PIOA_IFER_P13	(1 << 13)
#define PIOA_IFER_P14	(1 << 14)
#define PIOA_IFER_P15	(1 << 15)
#define PIOA_IFER_P16	(1 << 16)
#define PIOA_IFER_P17	(1 << 17)
#define PIOA_IFER_P18	(1 << 18)
#define PIOA_IFER_P19	(1 << 19)
#define PIOA_IFER_P20	(1 << 20)
#define PIOA_IFER_P21	(1 << 21)
#define PIOA_IFER_P22	(1 << 22)
#define PIOA_IFER_P23	(1 << 23)
#define PIOA_IFER_P24	(1 << 24)
#define PIOA_IFER_P25	(1 << 25)
#define PIOA_IFER_P26	(1 << 26)
#define PIOA_IFER_P27	(1 << 27)
#define PIOA_IFER_P28	(1 << 28)
#define PIOA_IFER_P29	(1 << 29)
#define PIOA_IFER_P30	(1 << 30)
#define PIOA_IFER_P31	(1 << 31)

#define PIOA_IFER_s	MMIO_REG(0x400e0e20, struct __struct_PIOA_IFER)
struct __struct_PIOA_IFER
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

#define PIOA_IFDR	MMIO_REG(0x400e0e24, uint32_t)
#define PIOA_IFDR_P0	(1 << 0)
#define PIOA_IFDR_P1	(1 << 1)
#define PIOA_IFDR_P2	(1 << 2)
#define PIOA_IFDR_P3	(1 << 3)
#define PIOA_IFDR_P4	(1 << 4)
#define PIOA_IFDR_P5	(1 << 5)
#define PIOA_IFDR_P6	(1 << 6)
#define PIOA_IFDR_P7	(1 << 7)
#define PIOA_IFDR_P8	(1 << 8)
#define PIOA_IFDR_P9	(1 << 9)
#define PIOA_IFDR_P10	(1 << 10)
#define PIOA_IFDR_P11	(1 << 11)
#define PIOA_IFDR_P12	(1 << 12)
#define PIOA_IFDR_P13	(1 << 13)
#define PIOA_IFDR_P14	(1 << 14)
#define PIOA_IFDR_P15	(1 << 15)
#define PIOA_IFDR_P16	(1 << 16)
#define PIOA_IFDR_P17	(1 << 17)
#define PIOA_IFDR_P18	(1 << 18)
#define PIOA_IFDR_P19	(1 << 19)
#define PIOA_IFDR_P20	(1 << 20)
#define PIOA_IFDR_P21	(1 << 21)
#define PIOA_IFDR_P22	(1 << 22)
#define PIOA_IFDR_P23	(1 << 23)
#define PIOA_IFDR_P24	(1 << 24)
#define PIOA_IFDR_P25	(1 << 25)
#define PIOA_IFDR_P26	(1 << 26)
#define PIOA_IFDR_P27	(1 << 27)
#define PIOA_IFDR_P28	(1 << 28)
#define PIOA_IFDR_P29	(1 << 29)
#define PIOA_IFDR_P30	(1 << 30)
#define PIOA_IFDR_P31	(1 << 31)

#define PIOA_IFDR_s	MMIO_REG(0x400e0e24, struct __struct_PIOA_IFDR)
struct __struct_PIOA_IFDR
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

#define PIOA_IFSR	MMIO_REG(0x400e0e28, uint32_t)
#define PIOA_IFSR_P0	(1 << 0)
#define PIOA_IFSR_P1	(1 << 1)
#define PIOA_IFSR_P2	(1 << 2)
#define PIOA_IFSR_P3	(1 << 3)
#define PIOA_IFSR_P4	(1 << 4)
#define PIOA_IFSR_P5	(1 << 5)
#define PIOA_IFSR_P6	(1 << 6)
#define PIOA_IFSR_P7	(1 << 7)
#define PIOA_IFSR_P8	(1 << 8)
#define PIOA_IFSR_P9	(1 << 9)
#define PIOA_IFSR_P10	(1 << 10)
#define PIOA_IFSR_P11	(1 << 11)
#define PIOA_IFSR_P12	(1 << 12)
#define PIOA_IFSR_P13	(1 << 13)
#define PIOA_IFSR_P14	(1 << 14)
#define PIOA_IFSR_P15	(1 << 15)
#define PIOA_IFSR_P16	(1 << 16)
#define PIOA_IFSR_P17	(1 << 17)
#define PIOA_IFSR_P18	(1 << 18)
#define PIOA_IFSR_P19	(1 << 19)
#define PIOA_IFSR_P20	(1 << 20)
#define PIOA_IFSR_P21	(1 << 21)
#define PIOA_IFSR_P22	(1 << 22)
#define PIOA_IFSR_P23	(1 << 23)
#define PIOA_IFSR_P24	(1 << 24)
#define PIOA_IFSR_P25	(1 << 25)
#define PIOA_IFSR_P26	(1 << 26)
#define PIOA_IFSR_P27	(1 << 27)
#define PIOA_IFSR_P28	(1 << 28)
#define PIOA_IFSR_P29	(1 << 29)
#define PIOA_IFSR_P30	(1 << 30)
#define PIOA_IFSR_P31	(1 << 31)

#define PIOA_IFSR_s	MMIO_REG(0x400e0e28, struct __struct_PIOA_IFSR)
struct __struct_PIOA_IFSR
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

#define PIOA_SODR	MMIO_REG(0x400e0e30, uint32_t)
#define PIOA_SODR_P0	(1 << 0)
#define PIOA_SODR_P1	(1 << 1)
#define PIOA_SODR_P2	(1 << 2)
#define PIOA_SODR_P3	(1 << 3)
#define PIOA_SODR_P4	(1 << 4)
#define PIOA_SODR_P5	(1 << 5)
#define PIOA_SODR_P6	(1 << 6)
#define PIOA_SODR_P7	(1 << 7)
#define PIOA_SODR_P8	(1 << 8)
#define PIOA_SODR_P9	(1 << 9)
#define PIOA_SODR_P10	(1 << 10)
#define PIOA_SODR_P11	(1 << 11)
#define PIOA_SODR_P12	(1 << 12)
#define PIOA_SODR_P13	(1 << 13)
#define PIOA_SODR_P14	(1 << 14)
#define PIOA_SODR_P15	(1 << 15)
#define PIOA_SODR_P16	(1 << 16)
#define PIOA_SODR_P17	(1 << 17)
#define PIOA_SODR_P18	(1 << 18)
#define PIOA_SODR_P19	(1 << 19)
#define PIOA_SODR_P20	(1 << 20)
#define PIOA_SODR_P21	(1 << 21)
#define PIOA_SODR_P22	(1 << 22)
#define PIOA_SODR_P23	(1 << 23)
#define PIOA_SODR_P24	(1 << 24)
#define PIOA_SODR_P25	(1 << 25)
#define PIOA_SODR_P26	(1 << 26)
#define PIOA_SODR_P27	(1 << 27)
#define PIOA_SODR_P28	(1 << 28)
#define PIOA_SODR_P29	(1 << 29)
#define PIOA_SODR_P30	(1 << 30)
#define PIOA_SODR_P31	(1 << 31)

#define PIOA_SODR_s	MMIO_REG(0x400e0e30, struct __struct_PIOA_SODR)
struct __struct_PIOA_SODR
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

#define PIOA_CODR	MMIO_REG(0x400e0e34, uint32_t)
#define PIOA_CODR_P0	(1 << 0)
#define PIOA_CODR_P1	(1 << 1)
#define PIOA_CODR_P2	(1 << 2)
#define PIOA_CODR_P3	(1 << 3)
#define PIOA_CODR_P4	(1 << 4)
#define PIOA_CODR_P5	(1 << 5)
#define PIOA_CODR_P6	(1 << 6)
#define PIOA_CODR_P7	(1 << 7)
#define PIOA_CODR_P8	(1 << 8)
#define PIOA_CODR_P9	(1 << 9)
#define PIOA_CODR_P10	(1 << 10)
#define PIOA_CODR_P11	(1 << 11)
#define PIOA_CODR_P12	(1 << 12)
#define PIOA_CODR_P13	(1 << 13)
#define PIOA_CODR_P14	(1 << 14)
#define PIOA_CODR_P15	(1 << 15)
#define PIOA_CODR_P16	(1 << 16)
#define PIOA_CODR_P17	(1 << 17)
#define PIOA_CODR_P18	(1 << 18)
#define PIOA_CODR_P19	(1 << 19)
#define PIOA_CODR_P20	(1 << 20)
#define PIOA_CODR_P21	(1 << 21)
#define PIOA_CODR_P22	(1 << 22)
#define PIOA_CODR_P23	(1 << 23)
#define PIOA_CODR_P24	(1 << 24)
#define PIOA_CODR_P25	(1 << 25)
#define PIOA_CODR_P26	(1 << 26)
#define PIOA_CODR_P27	(1 << 27)
#define PIOA_CODR_P28	(1 << 28)
#define PIOA_CODR_P29	(1 << 29)
#define PIOA_CODR_P30	(1 << 30)
#define PIOA_CODR_P31	(1 << 31)

#define PIOA_CODR_s	MMIO_REG(0x400e0e34, struct __struct_PIOA_CODR)
struct __struct_PIOA_CODR
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

#define PIOA_ODSR	MMIO_REG(0x400e0e38, uint32_t)
#define PIOA_ODSR_P0	(1 << 0)
#define PIOA_ODSR_P1	(1 << 1)
#define PIOA_ODSR_P2	(1 << 2)
#define PIOA_ODSR_P3	(1 << 3)
#define PIOA_ODSR_P4	(1 << 4)
#define PIOA_ODSR_P5	(1 << 5)
#define PIOA_ODSR_P6	(1 << 6)
#define PIOA_ODSR_P7	(1 << 7)
#define PIOA_ODSR_P8	(1 << 8)
#define PIOA_ODSR_P9	(1 << 9)
#define PIOA_ODSR_P10	(1 << 10)
#define PIOA_ODSR_P11	(1 << 11)
#define PIOA_ODSR_P12	(1 << 12)
#define PIOA_ODSR_P13	(1 << 13)
#define PIOA_ODSR_P14	(1 << 14)
#define PIOA_ODSR_P15	(1 << 15)
#define PIOA_ODSR_P16	(1 << 16)
#define PIOA_ODSR_P17	(1 << 17)
#define PIOA_ODSR_P18	(1 << 18)
#define PIOA_ODSR_P19	(1 << 19)
#define PIOA_ODSR_P20	(1 << 20)
#define PIOA_ODSR_P21	(1 << 21)
#define PIOA_ODSR_P22	(1 << 22)
#define PIOA_ODSR_P23	(1 << 23)
#define PIOA_ODSR_P24	(1 << 24)
#define PIOA_ODSR_P25	(1 << 25)
#define PIOA_ODSR_P26	(1 << 26)
#define PIOA_ODSR_P27	(1 << 27)
#define PIOA_ODSR_P28	(1 << 28)
#define PIOA_ODSR_P29	(1 << 29)
#define PIOA_ODSR_P30	(1 << 30)
#define PIOA_ODSR_P31	(1 << 31)

#define PIOA_ODSR_s	MMIO_REG(0x400e0e38, struct __struct_PIOA_ODSR)
struct __struct_PIOA_ODSR
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

#define PIOA_PDSR	MMIO_REG(0x400e0e3c, uint32_t)
#define PIOA_PDSR_P0	(1 << 0)
#define PIOA_PDSR_P1	(1 << 1)
#define PIOA_PDSR_P2	(1 << 2)
#define PIOA_PDSR_P3	(1 << 3)
#define PIOA_PDSR_P4	(1 << 4)
#define PIOA_PDSR_P5	(1 << 5)
#define PIOA_PDSR_P6	(1 << 6)
#define PIOA_PDSR_P7	(1 << 7)
#define PIOA_PDSR_P8	(1 << 8)
#define PIOA_PDSR_P9	(1 << 9)
#define PIOA_PDSR_P10	(1 << 10)
#define PIOA_PDSR_P11	(1 << 11)
#define PIOA_PDSR_P12	(1 << 12)
#define PIOA_PDSR_P13	(1 << 13)
#define PIOA_PDSR_P14	(1 << 14)
#define PIOA_PDSR_P15	(1 << 15)
#define PIOA_PDSR_P16	(1 << 16)
#define PIOA_PDSR_P17	(1 << 17)
#define PIOA_PDSR_P18	(1 << 18)
#define PIOA_PDSR_P19	(1 << 19)
#define PIOA_PDSR_P20	(1 << 20)
#define PIOA_PDSR_P21	(1 << 21)
#define PIOA_PDSR_P22	(1 << 22)
#define PIOA_PDSR_P23	(1 << 23)
#define PIOA_PDSR_P24	(1 << 24)
#define PIOA_PDSR_P25	(1 << 25)
#define PIOA_PDSR_P26	(1 << 26)
#define PIOA_PDSR_P27	(1 << 27)
#define PIOA_PDSR_P28	(1 << 28)
#define PIOA_PDSR_P29	(1 << 29)
#define PIOA_PDSR_P30	(1 << 30)
#define PIOA_PDSR_P31	(1 << 31)

#define PIOA_PDSR_s	MMIO_REG(0x400e0e3c, struct __struct_PIOA_PDSR)
struct __struct_PIOA_PDSR
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

#define PIOA_IER	MMIO_REG(0x400e0e40, uint32_t)
#define PIOA_IER_P0	(1 << 0)
#define PIOA_IER_P1	(1 << 1)
#define PIOA_IER_P2	(1 << 2)
#define PIOA_IER_P3	(1 << 3)
#define PIOA_IER_P4	(1 << 4)
#define PIOA_IER_P5	(1 << 5)
#define PIOA_IER_P6	(1 << 6)
#define PIOA_IER_P7	(1 << 7)
#define PIOA_IER_P8	(1 << 8)
#define PIOA_IER_P9	(1 << 9)
#define PIOA_IER_P10	(1 << 10)
#define PIOA_IER_P11	(1 << 11)
#define PIOA_IER_P12	(1 << 12)
#define PIOA_IER_P13	(1 << 13)
#define PIOA_IER_P14	(1 << 14)
#define PIOA_IER_P15	(1 << 15)
#define PIOA_IER_P16	(1 << 16)
#define PIOA_IER_P17	(1 << 17)
#define PIOA_IER_P18	(1 << 18)
#define PIOA_IER_P19	(1 << 19)
#define PIOA_IER_P20	(1 << 20)
#define PIOA_IER_P21	(1 << 21)
#define PIOA_IER_P22	(1 << 22)
#define PIOA_IER_P23	(1 << 23)
#define PIOA_IER_P24	(1 << 24)
#define PIOA_IER_P25	(1 << 25)
#define PIOA_IER_P26	(1 << 26)
#define PIOA_IER_P27	(1 << 27)
#define PIOA_IER_P28	(1 << 28)
#define PIOA_IER_P29	(1 << 29)
#define PIOA_IER_P30	(1 << 30)
#define PIOA_IER_P31	(1 << 31)

#define PIOA_IER_s	MMIO_REG(0x400e0e40, struct __struct_PIOA_IER)
struct __struct_PIOA_IER
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

#define PIOA_IDR	MMIO_REG(0x400e0e44, uint32_t)
#define PIOA_IDR_P0	(1 << 0)
#define PIOA_IDR_P1	(1 << 1)
#define PIOA_IDR_P2	(1 << 2)
#define PIOA_IDR_P3	(1 << 3)
#define PIOA_IDR_P4	(1 << 4)
#define PIOA_IDR_P5	(1 << 5)
#define PIOA_IDR_P6	(1 << 6)
#define PIOA_IDR_P7	(1 << 7)
#define PIOA_IDR_P8	(1 << 8)
#define PIOA_IDR_P9	(1 << 9)
#define PIOA_IDR_P10	(1 << 10)
#define PIOA_IDR_P11	(1 << 11)
#define PIOA_IDR_P12	(1 << 12)
#define PIOA_IDR_P13	(1 << 13)
#define PIOA_IDR_P14	(1 << 14)
#define PIOA_IDR_P15	(1 << 15)
#define PIOA_IDR_P16	(1 << 16)
#define PIOA_IDR_P17	(1 << 17)
#define PIOA_IDR_P18	(1 << 18)
#define PIOA_IDR_P19	(1 << 19)
#define PIOA_IDR_P20	(1 << 20)
#define PIOA_IDR_P21	(1 << 21)
#define PIOA_IDR_P22	(1 << 22)
#define PIOA_IDR_P23	(1 << 23)
#define PIOA_IDR_P24	(1 << 24)
#define PIOA_IDR_P25	(1 << 25)
#define PIOA_IDR_P26	(1 << 26)
#define PIOA_IDR_P27	(1 << 27)
#define PIOA_IDR_P28	(1 << 28)
#define PIOA_IDR_P29	(1 << 29)
#define PIOA_IDR_P30	(1 << 30)
#define PIOA_IDR_P31	(1 << 31)

#define PIOA_IDR_s	MMIO_REG(0x400e0e44, struct __struct_PIOA_IDR)
struct __struct_PIOA_IDR
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

#define PIOA_IMR	MMIO_REG(0x400e0e48, uint32_t)
#define PIOA_IMR_P0	(1 << 0)
#define PIOA_IMR_P1	(1 << 1)
#define PIOA_IMR_P2	(1 << 2)
#define PIOA_IMR_P3	(1 << 3)
#define PIOA_IMR_P4	(1 << 4)
#define PIOA_IMR_P5	(1 << 5)
#define PIOA_IMR_P6	(1 << 6)
#define PIOA_IMR_P7	(1 << 7)
#define PIOA_IMR_P8	(1 << 8)
#define PIOA_IMR_P9	(1 << 9)
#define PIOA_IMR_P10	(1 << 10)
#define PIOA_IMR_P11	(1 << 11)
#define PIOA_IMR_P12	(1 << 12)
#define PIOA_IMR_P13	(1 << 13)
#define PIOA_IMR_P14	(1 << 14)
#define PIOA_IMR_P15	(1 << 15)
#define PIOA_IMR_P16	(1 << 16)
#define PIOA_IMR_P17	(1 << 17)
#define PIOA_IMR_P18	(1 << 18)
#define PIOA_IMR_P19	(1 << 19)
#define PIOA_IMR_P20	(1 << 20)
#define PIOA_IMR_P21	(1 << 21)
#define PIOA_IMR_P22	(1 << 22)
#define PIOA_IMR_P23	(1 << 23)
#define PIOA_IMR_P24	(1 << 24)
#define PIOA_IMR_P25	(1 << 25)
#define PIOA_IMR_P26	(1 << 26)
#define PIOA_IMR_P27	(1 << 27)
#define PIOA_IMR_P28	(1 << 28)
#define PIOA_IMR_P29	(1 << 29)
#define PIOA_IMR_P30	(1 << 30)
#define PIOA_IMR_P31	(1 << 31)

#define PIOA_IMR_s	MMIO_REG(0x400e0e48, struct __struct_PIOA_IMR)
struct __struct_PIOA_IMR
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

#define PIOA_ISR	MMIO_REG(0x400e0e4c, uint32_t)
#define PIOA_ISR_P0	(1 << 0)
#define PIOA_ISR_P1	(1 << 1)
#define PIOA_ISR_P2	(1 << 2)
#define PIOA_ISR_P3	(1 << 3)
#define PIOA_ISR_P4	(1 << 4)
#define PIOA_ISR_P5	(1 << 5)
#define PIOA_ISR_P6	(1 << 6)
#define PIOA_ISR_P7	(1 << 7)
#define PIOA_ISR_P8	(1 << 8)
#define PIOA_ISR_P9	(1 << 9)
#define PIOA_ISR_P10	(1 << 10)
#define PIOA_ISR_P11	(1 << 11)
#define PIOA_ISR_P12	(1 << 12)
#define PIOA_ISR_P13	(1 << 13)
#define PIOA_ISR_P14	(1 << 14)
#define PIOA_ISR_P15	(1 << 15)
#define PIOA_ISR_P16	(1 << 16)
#define PIOA_ISR_P17	(1 << 17)
#define PIOA_ISR_P18	(1 << 18)
#define PIOA_ISR_P19	(1 << 19)
#define PIOA_ISR_P20	(1 << 20)
#define PIOA_ISR_P21	(1 << 21)
#define PIOA_ISR_P22	(1 << 22)
#define PIOA_ISR_P23	(1 << 23)
#define PIOA_ISR_P24	(1 << 24)
#define PIOA_ISR_P25	(1 << 25)
#define PIOA_ISR_P26	(1 << 26)
#define PIOA_ISR_P27	(1 << 27)
#define PIOA_ISR_P28	(1 << 28)
#define PIOA_ISR_P29	(1 << 29)
#define PIOA_ISR_P30	(1 << 30)
#define PIOA_ISR_P31	(1 << 31)

#define PIOA_ISR_s	MMIO_REG(0x400e0e4c, struct __struct_PIOA_ISR)
struct __struct_PIOA_ISR
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

#define PIOA_MDER	MMIO_REG(0x400e0e50, uint32_t)
#define PIOA_MDER_P0	(1 << 0)
#define PIOA_MDER_P1	(1 << 1)
#define PIOA_MDER_P2	(1 << 2)
#define PIOA_MDER_P3	(1 << 3)
#define PIOA_MDER_P4	(1 << 4)
#define PIOA_MDER_P5	(1 << 5)
#define PIOA_MDER_P6	(1 << 6)
#define PIOA_MDER_P7	(1 << 7)
#define PIOA_MDER_P8	(1 << 8)
#define PIOA_MDER_P9	(1 << 9)
#define PIOA_MDER_P10	(1 << 10)
#define PIOA_MDER_P11	(1 << 11)
#define PIOA_MDER_P12	(1 << 12)
#define PIOA_MDER_P13	(1 << 13)
#define PIOA_MDER_P14	(1 << 14)
#define PIOA_MDER_P15	(1 << 15)
#define PIOA_MDER_P16	(1 << 16)
#define PIOA_MDER_P17	(1 << 17)
#define PIOA_MDER_P18	(1 << 18)
#define PIOA_MDER_P19	(1 << 19)
#define PIOA_MDER_P20	(1 << 20)
#define PIOA_MDER_P21	(1 << 21)
#define PIOA_MDER_P22	(1 << 22)
#define PIOA_MDER_P23	(1 << 23)
#define PIOA_MDER_P24	(1 << 24)
#define PIOA_MDER_P25	(1 << 25)
#define PIOA_MDER_P26	(1 << 26)
#define PIOA_MDER_P27	(1 << 27)
#define PIOA_MDER_P28	(1 << 28)
#define PIOA_MDER_P29	(1 << 29)
#define PIOA_MDER_P30	(1 << 30)
#define PIOA_MDER_P31	(1 << 31)

#define PIOA_MDER_s	MMIO_REG(0x400e0e50, struct __struct_PIOA_MDER)
struct __struct_PIOA_MDER
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

#define PIOA_MDDR	MMIO_REG(0x400e0e54, uint32_t)
#define PIOA_MDDR_P0	(1 << 0)
#define PIOA_MDDR_P1	(1 << 1)
#define PIOA_MDDR_P2	(1 << 2)
#define PIOA_MDDR_P3	(1 << 3)
#define PIOA_MDDR_P4	(1 << 4)
#define PIOA_MDDR_P5	(1 << 5)
#define PIOA_MDDR_P6	(1 << 6)
#define PIOA_MDDR_P7	(1 << 7)
#define PIOA_MDDR_P8	(1 << 8)
#define PIOA_MDDR_P9	(1 << 9)
#define PIOA_MDDR_P10	(1 << 10)
#define PIOA_MDDR_P11	(1 << 11)
#define PIOA_MDDR_P12	(1 << 12)
#define PIOA_MDDR_P13	(1 << 13)
#define PIOA_MDDR_P14	(1 << 14)
#define PIOA_MDDR_P15	(1 << 15)
#define PIOA_MDDR_P16	(1 << 16)
#define PIOA_MDDR_P17	(1 << 17)
#define PIOA_MDDR_P18	(1 << 18)
#define PIOA_MDDR_P19	(1 << 19)
#define PIOA_MDDR_P20	(1 << 20)
#define PIOA_MDDR_P21	(1 << 21)
#define PIOA_MDDR_P22	(1 << 22)
#define PIOA_MDDR_P23	(1 << 23)
#define PIOA_MDDR_P24	(1 << 24)
#define PIOA_MDDR_P25	(1 << 25)
#define PIOA_MDDR_P26	(1 << 26)
#define PIOA_MDDR_P27	(1 << 27)
#define PIOA_MDDR_P28	(1 << 28)
#define PIOA_MDDR_P29	(1 << 29)
#define PIOA_MDDR_P30	(1 << 30)
#define PIOA_MDDR_P31	(1 << 31)

#define PIOA_MDDR_s	MMIO_REG(0x400e0e54, struct __struct_PIOA_MDDR)
struct __struct_PIOA_MDDR
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

#define PIOA_MDSR	MMIO_REG(0x400e0e58, uint32_t)
#define PIOA_MDSR_P0	(1 << 0)
#define PIOA_MDSR_P1	(1 << 1)
#define PIOA_MDSR_P2	(1 << 2)
#define PIOA_MDSR_P3	(1 << 3)
#define PIOA_MDSR_P4	(1 << 4)
#define PIOA_MDSR_P5	(1 << 5)
#define PIOA_MDSR_P6	(1 << 6)
#define PIOA_MDSR_P7	(1 << 7)
#define PIOA_MDSR_P8	(1 << 8)
#define PIOA_MDSR_P9	(1 << 9)
#define PIOA_MDSR_P10	(1 << 10)
#define PIOA_MDSR_P11	(1 << 11)
#define PIOA_MDSR_P12	(1 << 12)
#define PIOA_MDSR_P13	(1 << 13)
#define PIOA_MDSR_P14	(1 << 14)
#define PIOA_MDSR_P15	(1 << 15)
#define PIOA_MDSR_P16	(1 << 16)
#define PIOA_MDSR_P17	(1 << 17)
#define PIOA_MDSR_P18	(1 << 18)
#define PIOA_MDSR_P19	(1 << 19)
#define PIOA_MDSR_P20	(1 << 20)
#define PIOA_MDSR_P21	(1 << 21)
#define PIOA_MDSR_P22	(1 << 22)
#define PIOA_MDSR_P23	(1 << 23)
#define PIOA_MDSR_P24	(1 << 24)
#define PIOA_MDSR_P25	(1 << 25)
#define PIOA_MDSR_P26	(1 << 26)
#define PIOA_MDSR_P27	(1 << 27)
#define PIOA_MDSR_P28	(1 << 28)
#define PIOA_MDSR_P29	(1 << 29)
#define PIOA_MDSR_P30	(1 << 30)
#define PIOA_MDSR_P31	(1 << 31)

#define PIOA_MDSR_s	MMIO_REG(0x400e0e58, struct __struct_PIOA_MDSR)
struct __struct_PIOA_MDSR
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

#define PIOA_PUDR	MMIO_REG(0x400e0e60, uint32_t)
#define PIOA_PUDR_P0	(1 << 0)
#define PIOA_PUDR_P1	(1 << 1)
#define PIOA_PUDR_P2	(1 << 2)
#define PIOA_PUDR_P3	(1 << 3)
#define PIOA_PUDR_P4	(1 << 4)
#define PIOA_PUDR_P5	(1 << 5)
#define PIOA_PUDR_P6	(1 << 6)
#define PIOA_PUDR_P7	(1 << 7)
#define PIOA_PUDR_P8	(1 << 8)
#define PIOA_PUDR_P9	(1 << 9)
#define PIOA_PUDR_P10	(1 << 10)
#define PIOA_PUDR_P11	(1 << 11)
#define PIOA_PUDR_P12	(1 << 12)
#define PIOA_PUDR_P13	(1 << 13)
#define PIOA_PUDR_P14	(1 << 14)
#define PIOA_PUDR_P15	(1 << 15)
#define PIOA_PUDR_P16	(1 << 16)
#define PIOA_PUDR_P17	(1 << 17)
#define PIOA_PUDR_P18	(1 << 18)
#define PIOA_PUDR_P19	(1 << 19)
#define PIOA_PUDR_P20	(1 << 20)
#define PIOA_PUDR_P21	(1 << 21)
#define PIOA_PUDR_P22	(1 << 22)
#define PIOA_PUDR_P23	(1 << 23)
#define PIOA_PUDR_P24	(1 << 24)
#define PIOA_PUDR_P25	(1 << 25)
#define PIOA_PUDR_P26	(1 << 26)
#define PIOA_PUDR_P27	(1 << 27)
#define PIOA_PUDR_P28	(1 << 28)
#define PIOA_PUDR_P29	(1 << 29)
#define PIOA_PUDR_P30	(1 << 30)
#define PIOA_PUDR_P31	(1 << 31)

#define PIOA_PUDR_s	MMIO_REG(0x400e0e60, struct __struct_PIOA_PUDR)
struct __struct_PIOA_PUDR
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

#define PIOA_PUER	MMIO_REG(0x400e0e64, uint32_t)
#define PIOA_PUER_P0	(1 << 0)
#define PIOA_PUER_P1	(1 << 1)
#define PIOA_PUER_P2	(1 << 2)
#define PIOA_PUER_P3	(1 << 3)
#define PIOA_PUER_P4	(1 << 4)
#define PIOA_PUER_P5	(1 << 5)
#define PIOA_PUER_P6	(1 << 6)
#define PIOA_PUER_P7	(1 << 7)
#define PIOA_PUER_P8	(1 << 8)
#define PIOA_PUER_P9	(1 << 9)
#define PIOA_PUER_P10	(1 << 10)
#define PIOA_PUER_P11	(1 << 11)
#define PIOA_PUER_P12	(1 << 12)
#define PIOA_PUER_P13	(1 << 13)
#define PIOA_PUER_P14	(1 << 14)
#define PIOA_PUER_P15	(1 << 15)
#define PIOA_PUER_P16	(1 << 16)
#define PIOA_PUER_P17	(1 << 17)
#define PIOA_PUER_P18	(1 << 18)
#define PIOA_PUER_P19	(1 << 19)
#define PIOA_PUER_P20	(1 << 20)
#define PIOA_PUER_P21	(1 << 21)
#define PIOA_PUER_P22	(1 << 22)
#define PIOA_PUER_P23	(1 << 23)
#define PIOA_PUER_P24	(1 << 24)
#define PIOA_PUER_P25	(1 << 25)
#define PIOA_PUER_P26	(1 << 26)
#define PIOA_PUER_P27	(1 << 27)
#define PIOA_PUER_P28	(1 << 28)
#define PIOA_PUER_P29	(1 << 29)
#define PIOA_PUER_P30	(1 << 30)
#define PIOA_PUER_P31	(1 << 31)

#define PIOA_PUER_s	MMIO_REG(0x400e0e64, struct __struct_PIOA_PUER)
struct __struct_PIOA_PUER
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

#define PIOA_PUSR	MMIO_REG(0x400e0e68, uint32_t)
#define PIOA_PUSR_P0	(1 << 0)
#define PIOA_PUSR_P1	(1 << 1)
#define PIOA_PUSR_P2	(1 << 2)
#define PIOA_PUSR_P3	(1 << 3)
#define PIOA_PUSR_P4	(1 << 4)
#define PIOA_PUSR_P5	(1 << 5)
#define PIOA_PUSR_P6	(1 << 6)
#define PIOA_PUSR_P7	(1 << 7)
#define PIOA_PUSR_P8	(1 << 8)
#define PIOA_PUSR_P9	(1 << 9)
#define PIOA_PUSR_P10	(1 << 10)
#define PIOA_PUSR_P11	(1 << 11)
#define PIOA_PUSR_P12	(1 << 12)
#define PIOA_PUSR_P13	(1 << 13)
#define PIOA_PUSR_P14	(1 << 14)
#define PIOA_PUSR_P15	(1 << 15)
#define PIOA_PUSR_P16	(1 << 16)
#define PIOA_PUSR_P17	(1 << 17)
#define PIOA_PUSR_P18	(1 << 18)
#define PIOA_PUSR_P19	(1 << 19)
#define PIOA_PUSR_P20	(1 << 20)
#define PIOA_PUSR_P21	(1 << 21)
#define PIOA_PUSR_P22	(1 << 22)
#define PIOA_PUSR_P23	(1 << 23)
#define PIOA_PUSR_P24	(1 << 24)
#define PIOA_PUSR_P25	(1 << 25)
#define PIOA_PUSR_P26	(1 << 26)
#define PIOA_PUSR_P27	(1 << 27)
#define PIOA_PUSR_P28	(1 << 28)
#define PIOA_PUSR_P29	(1 << 29)
#define PIOA_PUSR_P30	(1 << 30)
#define PIOA_PUSR_P31	(1 << 31)

#define PIOA_PUSR_s	MMIO_REG(0x400e0e68, struct __struct_PIOA_PUSR)
struct __struct_PIOA_PUSR
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

#define PIOA_ABCDSR1	MMIO_REG(0x400e0e70, uint32_t)
#define PIOA_ABCDSR1_P0	(1 << 0)
#define PIOA_ABCDSR1_P1	(1 << 1)
#define PIOA_ABCDSR1_P2	(1 << 2)
#define PIOA_ABCDSR1_P3	(1 << 3)
#define PIOA_ABCDSR1_P4	(1 << 4)
#define PIOA_ABCDSR1_P5	(1 << 5)
#define PIOA_ABCDSR1_P6	(1 << 6)
#define PIOA_ABCDSR1_P7	(1 << 7)
#define PIOA_ABCDSR1_P8	(1 << 8)
#define PIOA_ABCDSR1_P9	(1 << 9)
#define PIOA_ABCDSR1_P10	(1 << 10)
#define PIOA_ABCDSR1_P11	(1 << 11)
#define PIOA_ABCDSR1_P12	(1 << 12)
#define PIOA_ABCDSR1_P13	(1 << 13)
#define PIOA_ABCDSR1_P14	(1 << 14)
#define PIOA_ABCDSR1_P15	(1 << 15)
#define PIOA_ABCDSR1_P16	(1 << 16)
#define PIOA_ABCDSR1_P17	(1 << 17)
#define PIOA_ABCDSR1_P18	(1 << 18)
#define PIOA_ABCDSR1_P19	(1 << 19)
#define PIOA_ABCDSR1_P20	(1 << 20)
#define PIOA_ABCDSR1_P21	(1 << 21)
#define PIOA_ABCDSR1_P22	(1 << 22)
#define PIOA_ABCDSR1_P23	(1 << 23)
#define PIOA_ABCDSR1_P24	(1 << 24)
#define PIOA_ABCDSR1_P25	(1 << 25)
#define PIOA_ABCDSR1_P26	(1 << 26)
#define PIOA_ABCDSR1_P27	(1 << 27)
#define PIOA_ABCDSR1_P28	(1 << 28)
#define PIOA_ABCDSR1_P29	(1 << 29)
#define PIOA_ABCDSR1_P30	(1 << 30)
#define PIOA_ABCDSR1_P31	(1 << 31)

#define PIOA_ABCDSR1_s	MMIO_REG(0x400e0e70, struct __struct_PIOA_ABCDSR1)
struct __struct_PIOA_ABCDSR1
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

#define PIOA_ABCDSR2	MMIO_REG(0x400e0e74, uint32_t)
#define PIOA_ABCDSR2_P0	(1 << 0)
#define PIOA_ABCDSR2_P1	(1 << 1)
#define PIOA_ABCDSR2_P2	(1 << 2)
#define PIOA_ABCDSR2_P3	(1 << 3)
#define PIOA_ABCDSR2_P4	(1 << 4)
#define PIOA_ABCDSR2_P5	(1 << 5)
#define PIOA_ABCDSR2_P6	(1 << 6)
#define PIOA_ABCDSR2_P7	(1 << 7)
#define PIOA_ABCDSR2_P8	(1 << 8)
#define PIOA_ABCDSR2_P9	(1 << 9)
#define PIOA_ABCDSR2_P10	(1 << 10)
#define PIOA_ABCDSR2_P11	(1 << 11)
#define PIOA_ABCDSR2_P12	(1 << 12)
#define PIOA_ABCDSR2_P13	(1 << 13)
#define PIOA_ABCDSR2_P14	(1 << 14)
#define PIOA_ABCDSR2_P15	(1 << 15)
#define PIOA_ABCDSR2_P16	(1 << 16)
#define PIOA_ABCDSR2_P17	(1 << 17)
#define PIOA_ABCDSR2_P18	(1 << 18)
#define PIOA_ABCDSR2_P19	(1 << 19)
#define PIOA_ABCDSR2_P20	(1 << 20)
#define PIOA_ABCDSR2_P21	(1 << 21)
#define PIOA_ABCDSR2_P22	(1 << 22)
#define PIOA_ABCDSR2_P23	(1 << 23)
#define PIOA_ABCDSR2_P24	(1 << 24)
#define PIOA_ABCDSR2_P25	(1 << 25)
#define PIOA_ABCDSR2_P26	(1 << 26)
#define PIOA_ABCDSR2_P27	(1 << 27)
#define PIOA_ABCDSR2_P28	(1 << 28)
#define PIOA_ABCDSR2_P29	(1 << 29)
#define PIOA_ABCDSR2_P30	(1 << 30)
#define PIOA_ABCDSR2_P31	(1 << 31)

#define PIOA_ABCDSR2_s	MMIO_REG(0x400e0e74, struct __struct_PIOA_ABCDSR2)
struct __struct_PIOA_ABCDSR2
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

#define PIOA_IFSCDR	MMIO_REG(0x400e0e80, uint32_t)
#define PIOA_IFSCDR_P0	(1 << 0)
#define PIOA_IFSCDR_P1	(1 << 1)
#define PIOA_IFSCDR_P2	(1 << 2)
#define PIOA_IFSCDR_P3	(1 << 3)
#define PIOA_IFSCDR_P4	(1 << 4)
#define PIOA_IFSCDR_P5	(1 << 5)
#define PIOA_IFSCDR_P6	(1 << 6)
#define PIOA_IFSCDR_P7	(1 << 7)
#define PIOA_IFSCDR_P8	(1 << 8)
#define PIOA_IFSCDR_P9	(1 << 9)
#define PIOA_IFSCDR_P10	(1 << 10)
#define PIOA_IFSCDR_P11	(1 << 11)
#define PIOA_IFSCDR_P12	(1 << 12)
#define PIOA_IFSCDR_P13	(1 << 13)
#define PIOA_IFSCDR_P14	(1 << 14)
#define PIOA_IFSCDR_P15	(1 << 15)
#define PIOA_IFSCDR_P16	(1 << 16)
#define PIOA_IFSCDR_P17	(1 << 17)
#define PIOA_IFSCDR_P18	(1 << 18)
#define PIOA_IFSCDR_P19	(1 << 19)
#define PIOA_IFSCDR_P20	(1 << 20)
#define PIOA_IFSCDR_P21	(1 << 21)
#define PIOA_IFSCDR_P22	(1 << 22)
#define PIOA_IFSCDR_P23	(1 << 23)
#define PIOA_IFSCDR_P24	(1 << 24)
#define PIOA_IFSCDR_P25	(1 << 25)
#define PIOA_IFSCDR_P26	(1 << 26)
#define PIOA_IFSCDR_P27	(1 << 27)
#define PIOA_IFSCDR_P28	(1 << 28)
#define PIOA_IFSCDR_P29	(1 << 29)
#define PIOA_IFSCDR_P30	(1 << 30)
#define PIOA_IFSCDR_P31	(1 << 31)

#define PIOA_IFSCDR_s	MMIO_REG(0x400e0e80, struct __struct_PIOA_IFSCDR)
struct __struct_PIOA_IFSCDR
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

#define PIOA_IFSCER	MMIO_REG(0x400e0e84, uint32_t)
#define PIOA_IFSCER_P0	(1 << 0)
#define PIOA_IFSCER_P1	(1 << 1)
#define PIOA_IFSCER_P2	(1 << 2)
#define PIOA_IFSCER_P3	(1 << 3)
#define PIOA_IFSCER_P4	(1 << 4)
#define PIOA_IFSCER_P5	(1 << 5)
#define PIOA_IFSCER_P6	(1 << 6)
#define PIOA_IFSCER_P7	(1 << 7)
#define PIOA_IFSCER_P8	(1 << 8)
#define PIOA_IFSCER_P9	(1 << 9)
#define PIOA_IFSCER_P10	(1 << 10)
#define PIOA_IFSCER_P11	(1 << 11)
#define PIOA_IFSCER_P12	(1 << 12)
#define PIOA_IFSCER_P13	(1 << 13)
#define PIOA_IFSCER_P14	(1 << 14)
#define PIOA_IFSCER_P15	(1 << 15)
#define PIOA_IFSCER_P16	(1 << 16)
#define PIOA_IFSCER_P17	(1 << 17)
#define PIOA_IFSCER_P18	(1 << 18)
#define PIOA_IFSCER_P19	(1 << 19)
#define PIOA_IFSCER_P20	(1 << 20)
#define PIOA_IFSCER_P21	(1 << 21)
#define PIOA_IFSCER_P22	(1 << 22)
#define PIOA_IFSCER_P23	(1 << 23)
#define PIOA_IFSCER_P24	(1 << 24)
#define PIOA_IFSCER_P25	(1 << 25)
#define PIOA_IFSCER_P26	(1 << 26)
#define PIOA_IFSCER_P27	(1 << 27)
#define PIOA_IFSCER_P28	(1 << 28)
#define PIOA_IFSCER_P29	(1 << 29)
#define PIOA_IFSCER_P30	(1 << 30)
#define PIOA_IFSCER_P31	(1 << 31)

#define PIOA_IFSCER_s	MMIO_REG(0x400e0e84, struct __struct_PIOA_IFSCER)
struct __struct_PIOA_IFSCER
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

#define PIOA_IFSCSR	MMIO_REG(0x400e0e88, uint32_t)
#define PIOA_IFSCSR_P0	(1 << 0)
#define PIOA_IFSCSR_P1	(1 << 1)
#define PIOA_IFSCSR_P2	(1 << 2)
#define PIOA_IFSCSR_P3	(1 << 3)
#define PIOA_IFSCSR_P4	(1 << 4)
#define PIOA_IFSCSR_P5	(1 << 5)
#define PIOA_IFSCSR_P6	(1 << 6)
#define PIOA_IFSCSR_P7	(1 << 7)
#define PIOA_IFSCSR_P8	(1 << 8)
#define PIOA_IFSCSR_P9	(1 << 9)
#define PIOA_IFSCSR_P10	(1 << 10)
#define PIOA_IFSCSR_P11	(1 << 11)
#define PIOA_IFSCSR_P12	(1 << 12)
#define PIOA_IFSCSR_P13	(1 << 13)
#define PIOA_IFSCSR_P14	(1 << 14)
#define PIOA_IFSCSR_P15	(1 << 15)
#define PIOA_IFSCSR_P16	(1 << 16)
#define PIOA_IFSCSR_P17	(1 << 17)
#define PIOA_IFSCSR_P18	(1 << 18)
#define PIOA_IFSCSR_P19	(1 << 19)
#define PIOA_IFSCSR_P20	(1 << 20)
#define PIOA_IFSCSR_P21	(1 << 21)
#define PIOA_IFSCSR_P22	(1 << 22)
#define PIOA_IFSCSR_P23	(1 << 23)
#define PIOA_IFSCSR_P24	(1 << 24)
#define PIOA_IFSCSR_P25	(1 << 25)
#define PIOA_IFSCSR_P26	(1 << 26)
#define PIOA_IFSCSR_P27	(1 << 27)
#define PIOA_IFSCSR_P28	(1 << 28)
#define PIOA_IFSCSR_P29	(1 << 29)
#define PIOA_IFSCSR_P30	(1 << 30)
#define PIOA_IFSCSR_P31	(1 << 31)

#define PIOA_IFSCSR_s	MMIO_REG(0x400e0e88, struct __struct_PIOA_IFSCSR)
struct __struct_PIOA_IFSCSR
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

#define PIOA_SCDR	MMIO_REG(0x400e0e8c, uint32_t)
#define PIOA_SCDR_DIV(x)	((x) << 0)
#define PIOA_SCDR_DIV_MSK	0x00003fff
#define PIOA_SCDR_DIV_VAL(x)	(((x) >> 0) & 0x3fff)

#define PIOA_SCDR_s	MMIO_REG(0x400e0e8c, struct __struct_PIOA_SCDR)
struct __struct_PIOA_SCDR
{
  uint32_t div : 14;
  uint32_t  : 18;
};

#define PIOA_PPDDR	MMIO_REG(0x400e0e90, uint32_t)
#define PIOA_PPDDR_P0	(1 << 0)
#define PIOA_PPDDR_P1	(1 << 1)
#define PIOA_PPDDR_P2	(1 << 2)
#define PIOA_PPDDR_P3	(1 << 3)
#define PIOA_PPDDR_P4	(1 << 4)
#define PIOA_PPDDR_P5	(1 << 5)
#define PIOA_PPDDR_P6	(1 << 6)
#define PIOA_PPDDR_P7	(1 << 7)
#define PIOA_PPDDR_P8	(1 << 8)
#define PIOA_PPDDR_P9	(1 << 9)
#define PIOA_PPDDR_P10	(1 << 10)
#define PIOA_PPDDR_P11	(1 << 11)
#define PIOA_PPDDR_P12	(1 << 12)
#define PIOA_PPDDR_P13	(1 << 13)
#define PIOA_PPDDR_P14	(1 << 14)
#define PIOA_PPDDR_P15	(1 << 15)
#define PIOA_PPDDR_P16	(1 << 16)
#define PIOA_PPDDR_P17	(1 << 17)
#define PIOA_PPDDR_P18	(1 << 18)
#define PIOA_PPDDR_P19	(1 << 19)
#define PIOA_PPDDR_P20	(1 << 20)
#define PIOA_PPDDR_P21	(1 << 21)
#define PIOA_PPDDR_P22	(1 << 22)
#define PIOA_PPDDR_P23	(1 << 23)
#define PIOA_PPDDR_P24	(1 << 24)
#define PIOA_PPDDR_P25	(1 << 25)
#define PIOA_PPDDR_P26	(1 << 26)
#define PIOA_PPDDR_P27	(1 << 27)
#define PIOA_PPDDR_P28	(1 << 28)
#define PIOA_PPDDR_P29	(1 << 29)
#define PIOA_PPDDR_P30	(1 << 30)
#define PIOA_PPDDR_P31	(1 << 31)

#define PIOA_PPDDR_s	MMIO_REG(0x400e0e90, struct __struct_PIOA_PPDDR)
struct __struct_PIOA_PPDDR
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

#define PIOA_PPDER	MMIO_REG(0x400e0e94, uint32_t)
#define PIOA_PPDER_P0	(1 << 0)
#define PIOA_PPDER_P1	(1 << 1)
#define PIOA_PPDER_P2	(1 << 2)
#define PIOA_PPDER_P3	(1 << 3)
#define PIOA_PPDER_P4	(1 << 4)
#define PIOA_PPDER_P5	(1 << 5)
#define PIOA_PPDER_P6	(1 << 6)
#define PIOA_PPDER_P7	(1 << 7)
#define PIOA_PPDER_P8	(1 << 8)
#define PIOA_PPDER_P9	(1 << 9)
#define PIOA_PPDER_P10	(1 << 10)
#define PIOA_PPDER_P11	(1 << 11)
#define PIOA_PPDER_P12	(1 << 12)
#define PIOA_PPDER_P13	(1 << 13)
#define PIOA_PPDER_P14	(1 << 14)
#define PIOA_PPDER_P15	(1 << 15)
#define PIOA_PPDER_P16	(1 << 16)
#define PIOA_PPDER_P17	(1 << 17)
#define PIOA_PPDER_P18	(1 << 18)
#define PIOA_PPDER_P19	(1 << 19)
#define PIOA_PPDER_P20	(1 << 20)
#define PIOA_PPDER_P21	(1 << 21)
#define PIOA_PPDER_P22	(1 << 22)
#define PIOA_PPDER_P23	(1 << 23)
#define PIOA_PPDER_P24	(1 << 24)
#define PIOA_PPDER_P25	(1 << 25)
#define PIOA_PPDER_P26	(1 << 26)
#define PIOA_PPDER_P27	(1 << 27)
#define PIOA_PPDER_P28	(1 << 28)
#define PIOA_PPDER_P29	(1 << 29)
#define PIOA_PPDER_P30	(1 << 30)
#define PIOA_PPDER_P31	(1 << 31)

#define PIOA_PPDER_s	MMIO_REG(0x400e0e94, struct __struct_PIOA_PPDER)
struct __struct_PIOA_PPDER
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

#define PIOA_PPDSR	MMIO_REG(0x400e0e98, uint32_t)
#define PIOA_PPDSR_P0	(1 << 0)
#define PIOA_PPDSR_P1	(1 << 1)
#define PIOA_PPDSR_P2	(1 << 2)
#define PIOA_PPDSR_P3	(1 << 3)
#define PIOA_PPDSR_P4	(1 << 4)
#define PIOA_PPDSR_P5	(1 << 5)
#define PIOA_PPDSR_P6	(1 << 6)
#define PIOA_PPDSR_P7	(1 << 7)
#define PIOA_PPDSR_P8	(1 << 8)
#define PIOA_PPDSR_P9	(1 << 9)
#define PIOA_PPDSR_P10	(1 << 10)
#define PIOA_PPDSR_P11	(1 << 11)
#define PIOA_PPDSR_P12	(1 << 12)
#define PIOA_PPDSR_P13	(1 << 13)
#define PIOA_PPDSR_P14	(1 << 14)
#define PIOA_PPDSR_P15	(1 << 15)
#define PIOA_PPDSR_P16	(1 << 16)
#define PIOA_PPDSR_P17	(1 << 17)
#define PIOA_PPDSR_P18	(1 << 18)
#define PIOA_PPDSR_P19	(1 << 19)
#define PIOA_PPDSR_P20	(1 << 20)
#define PIOA_PPDSR_P21	(1 << 21)
#define PIOA_PPDSR_P22	(1 << 22)
#define PIOA_PPDSR_P23	(1 << 23)
#define PIOA_PPDSR_P24	(1 << 24)
#define PIOA_PPDSR_P25	(1 << 25)
#define PIOA_PPDSR_P26	(1 << 26)
#define PIOA_PPDSR_P27	(1 << 27)
#define PIOA_PPDSR_P28	(1 << 28)
#define PIOA_PPDSR_P29	(1 << 29)
#define PIOA_PPDSR_P30	(1 << 30)
#define PIOA_PPDSR_P31	(1 << 31)

#define PIOA_PPDSR_s	MMIO_REG(0x400e0e98, struct __struct_PIOA_PPDSR)
struct __struct_PIOA_PPDSR
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

#define PIOA_OWER	MMIO_REG(0x400e0ea0, uint32_t)
#define PIOA_OWER_P0	(1 << 0)
#define PIOA_OWER_P1	(1 << 1)
#define PIOA_OWER_P2	(1 << 2)
#define PIOA_OWER_P3	(1 << 3)
#define PIOA_OWER_P4	(1 << 4)
#define PIOA_OWER_P5	(1 << 5)
#define PIOA_OWER_P6	(1 << 6)
#define PIOA_OWER_P7	(1 << 7)
#define PIOA_OWER_P8	(1 << 8)
#define PIOA_OWER_P9	(1 << 9)
#define PIOA_OWER_P10	(1 << 10)
#define PIOA_OWER_P11	(1 << 11)
#define PIOA_OWER_P12	(1 << 12)
#define PIOA_OWER_P13	(1 << 13)
#define PIOA_OWER_P14	(1 << 14)
#define PIOA_OWER_P15	(1 << 15)
#define PIOA_OWER_P16	(1 << 16)
#define PIOA_OWER_P17	(1 << 17)
#define PIOA_OWER_P18	(1 << 18)
#define PIOA_OWER_P19	(1 << 19)
#define PIOA_OWER_P20	(1 << 20)
#define PIOA_OWER_P21	(1 << 21)
#define PIOA_OWER_P22	(1 << 22)
#define PIOA_OWER_P23	(1 << 23)
#define PIOA_OWER_P24	(1 << 24)
#define PIOA_OWER_P25	(1 << 25)
#define PIOA_OWER_P26	(1 << 26)
#define PIOA_OWER_P27	(1 << 27)
#define PIOA_OWER_P28	(1 << 28)
#define PIOA_OWER_P29	(1 << 29)
#define PIOA_OWER_P30	(1 << 30)
#define PIOA_OWER_P31	(1 << 31)

#define PIOA_OWER_s	MMIO_REG(0x400e0ea0, struct __struct_PIOA_OWER)
struct __struct_PIOA_OWER
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

#define PIOA_OWDR	MMIO_REG(0x400e0ea4, uint32_t)
#define PIOA_OWDR_P0	(1 << 0)
#define PIOA_OWDR_P1	(1 << 1)
#define PIOA_OWDR_P2	(1 << 2)
#define PIOA_OWDR_P3	(1 << 3)
#define PIOA_OWDR_P4	(1 << 4)
#define PIOA_OWDR_P5	(1 << 5)
#define PIOA_OWDR_P6	(1 << 6)
#define PIOA_OWDR_P7	(1 << 7)
#define PIOA_OWDR_P8	(1 << 8)
#define PIOA_OWDR_P9	(1 << 9)
#define PIOA_OWDR_P10	(1 << 10)
#define PIOA_OWDR_P11	(1 << 11)
#define PIOA_OWDR_P12	(1 << 12)
#define PIOA_OWDR_P13	(1 << 13)
#define PIOA_OWDR_P14	(1 << 14)
#define PIOA_OWDR_P15	(1 << 15)
#define PIOA_OWDR_P16	(1 << 16)
#define PIOA_OWDR_P17	(1 << 17)
#define PIOA_OWDR_P18	(1 << 18)
#define PIOA_OWDR_P19	(1 << 19)
#define PIOA_OWDR_P20	(1 << 20)
#define PIOA_OWDR_P21	(1 << 21)
#define PIOA_OWDR_P22	(1 << 22)
#define PIOA_OWDR_P23	(1 << 23)
#define PIOA_OWDR_P24	(1 << 24)
#define PIOA_OWDR_P25	(1 << 25)
#define PIOA_OWDR_P26	(1 << 26)
#define PIOA_OWDR_P27	(1 << 27)
#define PIOA_OWDR_P28	(1 << 28)
#define PIOA_OWDR_P29	(1 << 29)
#define PIOA_OWDR_P30	(1 << 30)
#define PIOA_OWDR_P31	(1 << 31)

#define PIOA_OWDR_s	MMIO_REG(0x400e0ea4, struct __struct_PIOA_OWDR)
struct __struct_PIOA_OWDR
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

#define PIOA_OWSR	MMIO_REG(0x400e0ea8, uint32_t)
#define PIOA_OWSR_P0	(1 << 0)
#define PIOA_OWSR_P1	(1 << 1)
#define PIOA_OWSR_P2	(1 << 2)
#define PIOA_OWSR_P3	(1 << 3)
#define PIOA_OWSR_P4	(1 << 4)
#define PIOA_OWSR_P5	(1 << 5)
#define PIOA_OWSR_P6	(1 << 6)
#define PIOA_OWSR_P7	(1 << 7)
#define PIOA_OWSR_P8	(1 << 8)
#define PIOA_OWSR_P9	(1 << 9)
#define PIOA_OWSR_P10	(1 << 10)
#define PIOA_OWSR_P11	(1 << 11)
#define PIOA_OWSR_P12	(1 << 12)
#define PIOA_OWSR_P13	(1 << 13)
#define PIOA_OWSR_P14	(1 << 14)
#define PIOA_OWSR_P15	(1 << 15)
#define PIOA_OWSR_P16	(1 << 16)
#define PIOA_OWSR_P17	(1 << 17)
#define PIOA_OWSR_P18	(1 << 18)
#define PIOA_OWSR_P19	(1 << 19)
#define PIOA_OWSR_P20	(1 << 20)
#define PIOA_OWSR_P21	(1 << 21)
#define PIOA_OWSR_P22	(1 << 22)
#define PIOA_OWSR_P23	(1 << 23)
#define PIOA_OWSR_P24	(1 << 24)
#define PIOA_OWSR_P25	(1 << 25)
#define PIOA_OWSR_P26	(1 << 26)
#define PIOA_OWSR_P27	(1 << 27)
#define PIOA_OWSR_P28	(1 << 28)
#define PIOA_OWSR_P29	(1 << 29)
#define PIOA_OWSR_P30	(1 << 30)
#define PIOA_OWSR_P31	(1 << 31)

#define PIOA_OWSR_s	MMIO_REG(0x400e0ea8, struct __struct_PIOA_OWSR)
struct __struct_PIOA_OWSR
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

#define PIOA_AIMER	MMIO_REG(0x400e0eb0, uint32_t)
#define PIOA_AIMER_P0	(1 << 0)
#define PIOA_AIMER_P1	(1 << 1)
#define PIOA_AIMER_P2	(1 << 2)
#define PIOA_AIMER_P3	(1 << 3)
#define PIOA_AIMER_P4	(1 << 4)
#define PIOA_AIMER_P5	(1 << 5)
#define PIOA_AIMER_P6	(1 << 6)
#define PIOA_AIMER_P7	(1 << 7)
#define PIOA_AIMER_P8	(1 << 8)
#define PIOA_AIMER_P9	(1 << 9)
#define PIOA_AIMER_P10	(1 << 10)
#define PIOA_AIMER_P11	(1 << 11)
#define PIOA_AIMER_P12	(1 << 12)
#define PIOA_AIMER_P13	(1 << 13)
#define PIOA_AIMER_P14	(1 << 14)
#define PIOA_AIMER_P15	(1 << 15)
#define PIOA_AIMER_P16	(1 << 16)
#define PIOA_AIMER_P17	(1 << 17)
#define PIOA_AIMER_P18	(1 << 18)
#define PIOA_AIMER_P19	(1 << 19)
#define PIOA_AIMER_P20	(1 << 20)
#define PIOA_AIMER_P21	(1 << 21)
#define PIOA_AIMER_P22	(1 << 22)
#define PIOA_AIMER_P23	(1 << 23)
#define PIOA_AIMER_P24	(1 << 24)
#define PIOA_AIMER_P25	(1 << 25)
#define PIOA_AIMER_P26	(1 << 26)
#define PIOA_AIMER_P27	(1 << 27)
#define PIOA_AIMER_P28	(1 << 28)
#define PIOA_AIMER_P29	(1 << 29)
#define PIOA_AIMER_P30	(1 << 30)
#define PIOA_AIMER_P31	(1 << 31)

#define PIOA_AIMER_s	MMIO_REG(0x400e0eb0, struct __struct_PIOA_AIMER)
struct __struct_PIOA_AIMER
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

#define PIOA_AIMDR	MMIO_REG(0x400e0eb4, uint32_t)
#define PIOA_AIMDR_P0	(1 << 0)
#define PIOA_AIMDR_P1	(1 << 1)
#define PIOA_AIMDR_P2	(1 << 2)
#define PIOA_AIMDR_P3	(1 << 3)
#define PIOA_AIMDR_P4	(1 << 4)
#define PIOA_AIMDR_P5	(1 << 5)
#define PIOA_AIMDR_P6	(1 << 6)
#define PIOA_AIMDR_P7	(1 << 7)
#define PIOA_AIMDR_P8	(1 << 8)
#define PIOA_AIMDR_P9	(1 << 9)
#define PIOA_AIMDR_P10	(1 << 10)
#define PIOA_AIMDR_P11	(1 << 11)
#define PIOA_AIMDR_P12	(1 << 12)
#define PIOA_AIMDR_P13	(1 << 13)
#define PIOA_AIMDR_P14	(1 << 14)
#define PIOA_AIMDR_P15	(1 << 15)
#define PIOA_AIMDR_P16	(1 << 16)
#define PIOA_AIMDR_P17	(1 << 17)
#define PIOA_AIMDR_P18	(1 << 18)
#define PIOA_AIMDR_P19	(1 << 19)
#define PIOA_AIMDR_P20	(1 << 20)
#define PIOA_AIMDR_P21	(1 << 21)
#define PIOA_AIMDR_P22	(1 << 22)
#define PIOA_AIMDR_P23	(1 << 23)
#define PIOA_AIMDR_P24	(1 << 24)
#define PIOA_AIMDR_P25	(1 << 25)
#define PIOA_AIMDR_P26	(1 << 26)
#define PIOA_AIMDR_P27	(1 << 27)
#define PIOA_AIMDR_P28	(1 << 28)
#define PIOA_AIMDR_P29	(1 << 29)
#define PIOA_AIMDR_P30	(1 << 30)
#define PIOA_AIMDR_P31	(1 << 31)

#define PIOA_AIMDR_s	MMIO_REG(0x400e0eb4, struct __struct_PIOA_AIMDR)
struct __struct_PIOA_AIMDR
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

#define PIOA_AIMMR	MMIO_REG(0x400e0eb8, uint32_t)
#define PIOA_AIMMR_P0	(1 << 0)
#define PIOA_AIMMR_P1	(1 << 1)
#define PIOA_AIMMR_P2	(1 << 2)
#define PIOA_AIMMR_P3	(1 << 3)
#define PIOA_AIMMR_P4	(1 << 4)
#define PIOA_AIMMR_P5	(1 << 5)
#define PIOA_AIMMR_P6	(1 << 6)
#define PIOA_AIMMR_P7	(1 << 7)
#define PIOA_AIMMR_P8	(1 << 8)
#define PIOA_AIMMR_P9	(1 << 9)
#define PIOA_AIMMR_P10	(1 << 10)
#define PIOA_AIMMR_P11	(1 << 11)
#define PIOA_AIMMR_P12	(1 << 12)
#define PIOA_AIMMR_P13	(1 << 13)
#define PIOA_AIMMR_P14	(1 << 14)
#define PIOA_AIMMR_P15	(1 << 15)
#define PIOA_AIMMR_P16	(1 << 16)
#define PIOA_AIMMR_P17	(1 << 17)
#define PIOA_AIMMR_P18	(1 << 18)
#define PIOA_AIMMR_P19	(1 << 19)
#define PIOA_AIMMR_P20	(1 << 20)
#define PIOA_AIMMR_P21	(1 << 21)
#define PIOA_AIMMR_P22	(1 << 22)
#define PIOA_AIMMR_P23	(1 << 23)
#define PIOA_AIMMR_P24	(1 << 24)
#define PIOA_AIMMR_P25	(1 << 25)
#define PIOA_AIMMR_P26	(1 << 26)
#define PIOA_AIMMR_P27	(1 << 27)
#define PIOA_AIMMR_P28	(1 << 28)
#define PIOA_AIMMR_P29	(1 << 29)
#define PIOA_AIMMR_P30	(1 << 30)
#define PIOA_AIMMR_P31	(1 << 31)

#define PIOA_AIMMR_s	MMIO_REG(0x400e0eb8, struct __struct_PIOA_AIMMR)
struct __struct_PIOA_AIMMR
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

#define PIOA_ESR	MMIO_REG(0x400e0ec0, uint32_t)
#define PIOA_ESR_P0	(1 << 0)
#define PIOA_ESR_P1	(1 << 1)
#define PIOA_ESR_P2	(1 << 2)
#define PIOA_ESR_P3	(1 << 3)
#define PIOA_ESR_P4	(1 << 4)
#define PIOA_ESR_P5	(1 << 5)
#define PIOA_ESR_P6	(1 << 6)
#define PIOA_ESR_P7	(1 << 7)
#define PIOA_ESR_P8	(1 << 8)
#define PIOA_ESR_P9	(1 << 9)
#define PIOA_ESR_P10	(1 << 10)
#define PIOA_ESR_P11	(1 << 11)
#define PIOA_ESR_P12	(1 << 12)
#define PIOA_ESR_P13	(1 << 13)
#define PIOA_ESR_P14	(1 << 14)
#define PIOA_ESR_P15	(1 << 15)
#define PIOA_ESR_P16	(1 << 16)
#define PIOA_ESR_P17	(1 << 17)
#define PIOA_ESR_P18	(1 << 18)
#define PIOA_ESR_P19	(1 << 19)
#define PIOA_ESR_P20	(1 << 20)
#define PIOA_ESR_P21	(1 << 21)
#define PIOA_ESR_P22	(1 << 22)
#define PIOA_ESR_P23	(1 << 23)
#define PIOA_ESR_P24	(1 << 24)
#define PIOA_ESR_P25	(1 << 25)
#define PIOA_ESR_P26	(1 << 26)
#define PIOA_ESR_P27	(1 << 27)
#define PIOA_ESR_P28	(1 << 28)
#define PIOA_ESR_P29	(1 << 29)
#define PIOA_ESR_P30	(1 << 30)
#define PIOA_ESR_P31	(1 << 31)

#define PIOA_ESR_s	MMIO_REG(0x400e0ec0, struct __struct_PIOA_ESR)
struct __struct_PIOA_ESR
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

#define PIOA_LSR	MMIO_REG(0x400e0ec4, uint32_t)
#define PIOA_LSR_P0	(1 << 0)
#define PIOA_LSR_P1	(1 << 1)
#define PIOA_LSR_P2	(1 << 2)
#define PIOA_LSR_P3	(1 << 3)
#define PIOA_LSR_P4	(1 << 4)
#define PIOA_LSR_P5	(1 << 5)
#define PIOA_LSR_P6	(1 << 6)
#define PIOA_LSR_P7	(1 << 7)
#define PIOA_LSR_P8	(1 << 8)
#define PIOA_LSR_P9	(1 << 9)
#define PIOA_LSR_P10	(1 << 10)
#define PIOA_LSR_P11	(1 << 11)
#define PIOA_LSR_P12	(1 << 12)
#define PIOA_LSR_P13	(1 << 13)
#define PIOA_LSR_P14	(1 << 14)
#define PIOA_LSR_P15	(1 << 15)
#define PIOA_LSR_P16	(1 << 16)
#define PIOA_LSR_P17	(1 << 17)
#define PIOA_LSR_P18	(1 << 18)
#define PIOA_LSR_P19	(1 << 19)
#define PIOA_LSR_P20	(1 << 20)
#define PIOA_LSR_P21	(1 << 21)
#define PIOA_LSR_P22	(1 << 22)
#define PIOA_LSR_P23	(1 << 23)
#define PIOA_LSR_P24	(1 << 24)
#define PIOA_LSR_P25	(1 << 25)
#define PIOA_LSR_P26	(1 << 26)
#define PIOA_LSR_P27	(1 << 27)
#define PIOA_LSR_P28	(1 << 28)
#define PIOA_LSR_P29	(1 << 29)
#define PIOA_LSR_P30	(1 << 30)
#define PIOA_LSR_P31	(1 << 31)

#define PIOA_LSR_s	MMIO_REG(0x400e0ec4, struct __struct_PIOA_LSR)
struct __struct_PIOA_LSR
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

#define PIOA_ELSR	MMIO_REG(0x400e0ec8, uint32_t)
#define PIOA_ELSR_P0	(1 << 0)
#define PIOA_ELSR_P1	(1 << 1)
#define PIOA_ELSR_P2	(1 << 2)
#define PIOA_ELSR_P3	(1 << 3)
#define PIOA_ELSR_P4	(1 << 4)
#define PIOA_ELSR_P5	(1 << 5)
#define PIOA_ELSR_P6	(1 << 6)
#define PIOA_ELSR_P7	(1 << 7)
#define PIOA_ELSR_P8	(1 << 8)
#define PIOA_ELSR_P9	(1 << 9)
#define PIOA_ELSR_P10	(1 << 10)
#define PIOA_ELSR_P11	(1 << 11)
#define PIOA_ELSR_P12	(1 << 12)
#define PIOA_ELSR_P13	(1 << 13)
#define PIOA_ELSR_P14	(1 << 14)
#define PIOA_ELSR_P15	(1 << 15)
#define PIOA_ELSR_P16	(1 << 16)
#define PIOA_ELSR_P17	(1 << 17)
#define PIOA_ELSR_P18	(1 << 18)
#define PIOA_ELSR_P19	(1 << 19)
#define PIOA_ELSR_P20	(1 << 20)
#define PIOA_ELSR_P21	(1 << 21)
#define PIOA_ELSR_P22	(1 << 22)
#define PIOA_ELSR_P23	(1 << 23)
#define PIOA_ELSR_P24	(1 << 24)
#define PIOA_ELSR_P25	(1 << 25)
#define PIOA_ELSR_P26	(1 << 26)
#define PIOA_ELSR_P27	(1 << 27)
#define PIOA_ELSR_P28	(1 << 28)
#define PIOA_ELSR_P29	(1 << 29)
#define PIOA_ELSR_P30	(1 << 30)
#define PIOA_ELSR_P31	(1 << 31)

#define PIOA_ELSR_s	MMIO_REG(0x400e0ec8, struct __struct_PIOA_ELSR)
struct __struct_PIOA_ELSR
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

#define PIOA_FELLSR	MMIO_REG(0x400e0ed0, uint32_t)
#define PIOA_FELLSR_P0	(1 << 0)
#define PIOA_FELLSR_P1	(1 << 1)
#define PIOA_FELLSR_P2	(1 << 2)
#define PIOA_FELLSR_P3	(1 << 3)
#define PIOA_FELLSR_P4	(1 << 4)
#define PIOA_FELLSR_P5	(1 << 5)
#define PIOA_FELLSR_P6	(1 << 6)
#define PIOA_FELLSR_P7	(1 << 7)
#define PIOA_FELLSR_P8	(1 << 8)
#define PIOA_FELLSR_P9	(1 << 9)
#define PIOA_FELLSR_P10	(1 << 10)
#define PIOA_FELLSR_P11	(1 << 11)
#define PIOA_FELLSR_P12	(1 << 12)
#define PIOA_FELLSR_P13	(1 << 13)
#define PIOA_FELLSR_P14	(1 << 14)
#define PIOA_FELLSR_P15	(1 << 15)
#define PIOA_FELLSR_P16	(1 << 16)
#define PIOA_FELLSR_P17	(1 << 17)
#define PIOA_FELLSR_P18	(1 << 18)
#define PIOA_FELLSR_P19	(1 << 19)
#define PIOA_FELLSR_P20	(1 << 20)
#define PIOA_FELLSR_P21	(1 << 21)
#define PIOA_FELLSR_P22	(1 << 22)
#define PIOA_FELLSR_P23	(1 << 23)
#define PIOA_FELLSR_P24	(1 << 24)
#define PIOA_FELLSR_P25	(1 << 25)
#define PIOA_FELLSR_P26	(1 << 26)
#define PIOA_FELLSR_P27	(1 << 27)
#define PIOA_FELLSR_P28	(1 << 28)
#define PIOA_FELLSR_P29	(1 << 29)
#define PIOA_FELLSR_P30	(1 << 30)
#define PIOA_FELLSR_P31	(1 << 31)

#define PIOA_FELLSR_s	MMIO_REG(0x400e0ed0, struct __struct_PIOA_FELLSR)
struct __struct_PIOA_FELLSR
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

#define PIOA_REHLSR	MMIO_REG(0x400e0ed4, uint32_t)
#define PIOA_REHLSR_P0	(1 << 0)
#define PIOA_REHLSR_P1	(1 << 1)
#define PIOA_REHLSR_P2	(1 << 2)
#define PIOA_REHLSR_P3	(1 << 3)
#define PIOA_REHLSR_P4	(1 << 4)
#define PIOA_REHLSR_P5	(1 << 5)
#define PIOA_REHLSR_P6	(1 << 6)
#define PIOA_REHLSR_P7	(1 << 7)
#define PIOA_REHLSR_P8	(1 << 8)
#define PIOA_REHLSR_P9	(1 << 9)
#define PIOA_REHLSR_P10	(1 << 10)
#define PIOA_REHLSR_P11	(1 << 11)
#define PIOA_REHLSR_P12	(1 << 12)
#define PIOA_REHLSR_P13	(1 << 13)
#define PIOA_REHLSR_P14	(1 << 14)
#define PIOA_REHLSR_P15	(1 << 15)
#define PIOA_REHLSR_P16	(1 << 16)
#define PIOA_REHLSR_P17	(1 << 17)
#define PIOA_REHLSR_P18	(1 << 18)
#define PIOA_REHLSR_P19	(1 << 19)
#define PIOA_REHLSR_P20	(1 << 20)
#define PIOA_REHLSR_P21	(1 << 21)
#define PIOA_REHLSR_P22	(1 << 22)
#define PIOA_REHLSR_P23	(1 << 23)
#define PIOA_REHLSR_P24	(1 << 24)
#define PIOA_REHLSR_P25	(1 << 25)
#define PIOA_REHLSR_P26	(1 << 26)
#define PIOA_REHLSR_P27	(1 << 27)
#define PIOA_REHLSR_P28	(1 << 28)
#define PIOA_REHLSR_P29	(1 << 29)
#define PIOA_REHLSR_P30	(1 << 30)
#define PIOA_REHLSR_P31	(1 << 31)

#define PIOA_REHLSR_s	MMIO_REG(0x400e0ed4, struct __struct_PIOA_REHLSR)
struct __struct_PIOA_REHLSR
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

#define PIOA_FRLHSR	MMIO_REG(0x400e0ed8, uint32_t)
#define PIOA_FRLHSR_P0	(1 << 0)
#define PIOA_FRLHSR_P1	(1 << 1)
#define PIOA_FRLHSR_P2	(1 << 2)
#define PIOA_FRLHSR_P3	(1 << 3)
#define PIOA_FRLHSR_P4	(1 << 4)
#define PIOA_FRLHSR_P5	(1 << 5)
#define PIOA_FRLHSR_P6	(1 << 6)
#define PIOA_FRLHSR_P7	(1 << 7)
#define PIOA_FRLHSR_P8	(1 << 8)
#define PIOA_FRLHSR_P9	(1 << 9)
#define PIOA_FRLHSR_P10	(1 << 10)
#define PIOA_FRLHSR_P11	(1 << 11)
#define PIOA_FRLHSR_P12	(1 << 12)
#define PIOA_FRLHSR_P13	(1 << 13)
#define PIOA_FRLHSR_P14	(1 << 14)
#define PIOA_FRLHSR_P15	(1 << 15)
#define PIOA_FRLHSR_P16	(1 << 16)
#define PIOA_FRLHSR_P17	(1 << 17)
#define PIOA_FRLHSR_P18	(1 << 18)
#define PIOA_FRLHSR_P19	(1 << 19)
#define PIOA_FRLHSR_P20	(1 << 20)
#define PIOA_FRLHSR_P21	(1 << 21)
#define PIOA_FRLHSR_P22	(1 << 22)
#define PIOA_FRLHSR_P23	(1 << 23)
#define PIOA_FRLHSR_P24	(1 << 24)
#define PIOA_FRLHSR_P25	(1 << 25)
#define PIOA_FRLHSR_P26	(1 << 26)
#define PIOA_FRLHSR_P27	(1 << 27)
#define PIOA_FRLHSR_P28	(1 << 28)
#define PIOA_FRLHSR_P29	(1 << 29)
#define PIOA_FRLHSR_P30	(1 << 30)
#define PIOA_FRLHSR_P31	(1 << 31)

#define PIOA_FRLHSR_s	MMIO_REG(0x400e0ed8, struct __struct_PIOA_FRLHSR)
struct __struct_PIOA_FRLHSR
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

#define PIOA_LOCKSR	MMIO_REG(0x400e0ee0, uint32_t)
#define PIOA_LOCKSR_P0	(1 << 0)
#define PIOA_LOCKSR_P1	(1 << 1)
#define PIOA_LOCKSR_P2	(1 << 2)
#define PIOA_LOCKSR_P3	(1 << 3)
#define PIOA_LOCKSR_P4	(1 << 4)
#define PIOA_LOCKSR_P5	(1 << 5)
#define PIOA_LOCKSR_P6	(1 << 6)
#define PIOA_LOCKSR_P7	(1 << 7)
#define PIOA_LOCKSR_P8	(1 << 8)
#define PIOA_LOCKSR_P9	(1 << 9)
#define PIOA_LOCKSR_P10	(1 << 10)
#define PIOA_LOCKSR_P11	(1 << 11)
#define PIOA_LOCKSR_P12	(1 << 12)
#define PIOA_LOCKSR_P13	(1 << 13)
#define PIOA_LOCKSR_P14	(1 << 14)
#define PIOA_LOCKSR_P15	(1 << 15)
#define PIOA_LOCKSR_P16	(1 << 16)
#define PIOA_LOCKSR_P17	(1 << 17)
#define PIOA_LOCKSR_P18	(1 << 18)
#define PIOA_LOCKSR_P19	(1 << 19)
#define PIOA_LOCKSR_P20	(1 << 20)
#define PIOA_LOCKSR_P21	(1 << 21)
#define PIOA_LOCKSR_P22	(1 << 22)
#define PIOA_LOCKSR_P23	(1 << 23)
#define PIOA_LOCKSR_P24	(1 << 24)
#define PIOA_LOCKSR_P25	(1 << 25)
#define PIOA_LOCKSR_P26	(1 << 26)
#define PIOA_LOCKSR_P27	(1 << 27)
#define PIOA_LOCKSR_P28	(1 << 28)
#define PIOA_LOCKSR_P29	(1 << 29)
#define PIOA_LOCKSR_P30	(1 << 30)
#define PIOA_LOCKSR_P31	(1 << 31)

#define PIOA_LOCKSR_s	MMIO_REG(0x400e0ee0, struct __struct_PIOA_LOCKSR)
struct __struct_PIOA_LOCKSR
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

#define PIOA_WPMR	MMIO_REG(0x400e0ee4, uint32_t)
#define PIOA_WPMR_WPEN	(1 << 0)
#define PIOA_WPMR_WPKEY(x)	((x) << 8)
#define PIOA_WPMR_WPKEY_MSK	0xffffff00
#define PIOA_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define PIOA_WPMR_s	MMIO_REG(0x400e0ee4, struct __struct_PIOA_WPMR)
struct __struct_PIOA_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define PIOA_WPSR	MMIO_REG(0x400e0ee8, uint32_t)
#define PIOA_WPSR_WPVS	(1 << 0)
#define PIOA_WPSR_WPVSRC(x)	((x) << 8)
#define PIOA_WPSR_WPVSRC_MSK	0x00ffff00
#define PIOA_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define PIOA_WPSR_s	MMIO_REG(0x400e0ee8, struct __struct_PIOA_WPSR)
struct __struct_PIOA_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

#define PIOA_SCHMITT	MMIO_REG(0x400e0f00, uint32_t)
#define PIOA_SCHMITT_P0	(1 << 0)
#define PIOA_SCHMITT_P1	(1 << 1)
#define PIOA_SCHMITT_P2	(1 << 2)
#define PIOA_SCHMITT_P3	(1 << 3)
#define PIOA_SCHMITT_P4	(1 << 4)
#define PIOA_SCHMITT_P5	(1 << 5)
#define PIOA_SCHMITT_P6	(1 << 6)
#define PIOA_SCHMITT_P7	(1 << 7)
#define PIOA_SCHMITT_P8	(1 << 8)
#define PIOA_SCHMITT_P9	(1 << 9)
#define PIOA_SCHMITT_P10	(1 << 10)
#define PIOA_SCHMITT_P11	(1 << 11)
#define PIOA_SCHMITT_P12	(1 << 12)
#define PIOA_SCHMITT_P13	(1 << 13)
#define PIOA_SCHMITT_P14	(1 << 14)
#define PIOA_SCHMITT_P15	(1 << 15)
#define PIOA_SCHMITT_P16	(1 << 16)
#define PIOA_SCHMITT_P17	(1 << 17)
#define PIOA_SCHMITT_P18	(1 << 18)
#define PIOA_SCHMITT_P19	(1 << 19)
#define PIOA_SCHMITT_P20	(1 << 20)
#define PIOA_SCHMITT_P21	(1 << 21)
#define PIOA_SCHMITT_P22	(1 << 22)
#define PIOA_SCHMITT_P23	(1 << 23)
#define PIOA_SCHMITT_P24	(1 << 24)
#define PIOA_SCHMITT_P25	(1 << 25)
#define PIOA_SCHMITT_P26	(1 << 26)
#define PIOA_SCHMITT_P27	(1 << 27)
#define PIOA_SCHMITT_P28	(1 << 28)
#define PIOA_SCHMITT_P29	(1 << 29)
#define PIOA_SCHMITT_P30	(1 << 30)
#define PIOA_SCHMITT_P31	(1 << 31)

#define PIOA_SCHMITT_s	MMIO_REG(0x400e0f00, struct __struct_PIOA_SCHMITT)
struct __struct_PIOA_SCHMITT
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

#define PIOA_PCMR	MMIO_REG(0x400e0f50, uint32_t)
#define PIOA_PCMR_PCEN	(1 << 0)
#define PIOA_PCMR_DSIZE(x)	((x) << 4)
#define PIOA_PCMR_DSIZE_MSK	0x00000030
#define PIOA_PCMR_DSIZE_VAL(x)	(((x) >> 4) & 0x3)
#define PIOA_PCMR_ALWYS	(1 << 9)
#define PIOA_PCMR_HALFS	(1 << 10)
#define PIOA_PCMR_FRSTS	(1 << 11)

#define PIOA_PCMR_s	MMIO_REG(0x400e0f50, struct __struct_PIOA_PCMR)
struct __struct_PIOA_PCMR
{
  uint32_t pcen : 1;
  uint32_t  : 3;
  uint32_t dsize : 2;
  uint32_t  : 3;
  uint32_t alwys : 1;
  uint32_t halfs : 1;
  uint32_t frsts : 1;
  uint32_t  : 20;
};

#define PIOA_PCIER	MMIO_REG(0x400e0f54, uint32_t)
#define PIOA_PCIER_DRDY	(1 << 0)
#define PIOA_PCIER_OVRE	(1 << 1)
#define PIOA_PCIER_ENDRX	(1 << 2)
#define PIOA_PCIER_RXBUFF	(1 << 3)

#define PIOA_PCIER_s	MMIO_REG(0x400e0f54, struct __struct_PIOA_PCIER)
struct __struct_PIOA_PCIER
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOA_PCIDR	MMIO_REG(0x400e0f58, uint32_t)
#define PIOA_PCIDR_DRDY	(1 << 0)
#define PIOA_PCIDR_OVRE	(1 << 1)
#define PIOA_PCIDR_ENDRX	(1 << 2)
#define PIOA_PCIDR_RXBUFF	(1 << 3)

#define PIOA_PCIDR_s	MMIO_REG(0x400e0f58, struct __struct_PIOA_PCIDR)
struct __struct_PIOA_PCIDR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOA_PCIMR	MMIO_REG(0x400e0f5c, uint32_t)
#define PIOA_PCIMR_DRDY	(1 << 0)
#define PIOA_PCIMR_OVRE	(1 << 1)
#define PIOA_PCIMR_ENDRX	(1 << 2)
#define PIOA_PCIMR_RXBUFF	(1 << 3)

#define PIOA_PCIMR_s	MMIO_REG(0x400e0f5c, struct __struct_PIOA_PCIMR)
struct __struct_PIOA_PCIMR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOA_PCISR	MMIO_REG(0x400e0f60, uint32_t)
#define PIOA_PCISR_DRDY	(1 << 0)
#define PIOA_PCISR_OVRE	(1 << 1)
#define PIOA_PCISR_ENDRX	(1 << 2)
#define PIOA_PCISR_RXBUFF	(1 << 3)

#define PIOA_PCISR_s	MMIO_REG(0x400e0f60, struct __struct_PIOA_PCISR)
struct __struct_PIOA_PCISR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOA_PCRHR	MMIO_REG(0x400e0f64, uint32_t)

// 0x400e0f68 PIOA_PDC

#define PIOA_PDC_RPR	MMIO_REG(0x400e0f68, uint32_t)

#define PIOA_PDC_RCR	MMIO_REG(0x400e0f6c, uint32_t)

#define PIOA_PDC_TPR	MMIO_REG(0x400e0f70, uint32_t)

#define PIOA_PDC_TCR	MMIO_REG(0x400e0f74, uint32_t)

#define PIOA_PDC_RNPR	MMIO_REG(0x400e0f78, uint32_t)

#define PIOA_PDC_RNCR	MMIO_REG(0x400e0f7c, uint32_t)

#define PIOA_PDC_TNPR	MMIO_REG(0x400e0f80, uint32_t)

#define PIOA_PDC_TNCR	MMIO_REG(0x400e0f84, uint32_t)

#define PIOA_PDC_PTCR	MMIO_REG(0x400e0f88, uint32_t)
#define PIOA_PDC_PTCR_RXTEN	(1 << 0)
#define PIOA_PDC_PTCR_RXTDIS	(1 << 1)
#define PIOA_PDC_PTCR_TXTEN	(1 << 8)
#define PIOA_PDC_PTCR_TXTDIS	(1 << 9)

#define PIOA_PDC_PTCR_s	MMIO_REG(0x400e0f88, struct __struct_PIOA_PDC_PTCR)
struct __struct_PIOA_PDC_PTCR
{
  uint32_t rxten : 1;
  uint32_t rxtdis : 1;
  uint32_t  : 6;
  uint32_t txten : 1;
  uint32_t txtdis : 1;
  uint32_t  : 22;
};

#define PIOA_PDC_PTSR	MMIO_REG(0x400e0f8c, uint32_t)
#define PIOA_PDC_PTSR_RXTEN	(1 << 0)
#define PIOA_PDC_PTSR_TXTEN	(1 << 8)

#define PIOA_PDC_PTSR_s	MMIO_REG(0x400e0f8c, struct __struct_PIOA_PDC_PTSR)
struct __struct_PIOA_PDC_PTSR
{
  uint32_t rxten : 1;
  uint32_t  : 7;
  uint32_t txten : 1;
  uint32_t  : 23;
};

// 0x400e1000 PIOB

#define PIOB_PER	MMIO_REG(0x400e1000, uint32_t)
#define PIOB_PER_P0	(1 << 0)
#define PIOB_PER_P1	(1 << 1)
#define PIOB_PER_P2	(1 << 2)
#define PIOB_PER_P3	(1 << 3)
#define PIOB_PER_P4	(1 << 4)
#define PIOB_PER_P5	(1 << 5)
#define PIOB_PER_P6	(1 << 6)
#define PIOB_PER_P7	(1 << 7)
#define PIOB_PER_P8	(1 << 8)
#define PIOB_PER_P9	(1 << 9)
#define PIOB_PER_P10	(1 << 10)
#define PIOB_PER_P11	(1 << 11)
#define PIOB_PER_P12	(1 << 12)
#define PIOB_PER_P13	(1 << 13)
#define PIOB_PER_P14	(1 << 14)
#define PIOB_PER_P15	(1 << 15)
#define PIOB_PER_P16	(1 << 16)
#define PIOB_PER_P17	(1 << 17)
#define PIOB_PER_P18	(1 << 18)
#define PIOB_PER_P19	(1 << 19)
#define PIOB_PER_P20	(1 << 20)
#define PIOB_PER_P21	(1 << 21)
#define PIOB_PER_P22	(1 << 22)
#define PIOB_PER_P23	(1 << 23)
#define PIOB_PER_P24	(1 << 24)
#define PIOB_PER_P25	(1 << 25)
#define PIOB_PER_P26	(1 << 26)
#define PIOB_PER_P27	(1 << 27)
#define PIOB_PER_P28	(1 << 28)
#define PIOB_PER_P29	(1 << 29)
#define PIOB_PER_P30	(1 << 30)
#define PIOB_PER_P31	(1 << 31)

#define PIOB_PER_s	MMIO_REG(0x400e1000, struct __struct_PIOB_PER)
struct __struct_PIOB_PER
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

#define PIOB_PDR	MMIO_REG(0x400e1004, uint32_t)
#define PIOB_PDR_P0	(1 << 0)
#define PIOB_PDR_P1	(1 << 1)
#define PIOB_PDR_P2	(1 << 2)
#define PIOB_PDR_P3	(1 << 3)
#define PIOB_PDR_P4	(1 << 4)
#define PIOB_PDR_P5	(1 << 5)
#define PIOB_PDR_P6	(1 << 6)
#define PIOB_PDR_P7	(1 << 7)
#define PIOB_PDR_P8	(1 << 8)
#define PIOB_PDR_P9	(1 << 9)
#define PIOB_PDR_P10	(1 << 10)
#define PIOB_PDR_P11	(1 << 11)
#define PIOB_PDR_P12	(1 << 12)
#define PIOB_PDR_P13	(1 << 13)
#define PIOB_PDR_P14	(1 << 14)
#define PIOB_PDR_P15	(1 << 15)
#define PIOB_PDR_P16	(1 << 16)
#define PIOB_PDR_P17	(1 << 17)
#define PIOB_PDR_P18	(1 << 18)
#define PIOB_PDR_P19	(1 << 19)
#define PIOB_PDR_P20	(1 << 20)
#define PIOB_PDR_P21	(1 << 21)
#define PIOB_PDR_P22	(1 << 22)
#define PIOB_PDR_P23	(1 << 23)
#define PIOB_PDR_P24	(1 << 24)
#define PIOB_PDR_P25	(1 << 25)
#define PIOB_PDR_P26	(1 << 26)
#define PIOB_PDR_P27	(1 << 27)
#define PIOB_PDR_P28	(1 << 28)
#define PIOB_PDR_P29	(1 << 29)
#define PIOB_PDR_P30	(1 << 30)
#define PIOB_PDR_P31	(1 << 31)

#define PIOB_PDR_s	MMIO_REG(0x400e1004, struct __struct_PIOB_PDR)
struct __struct_PIOB_PDR
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

#define PIOB_PSR	MMIO_REG(0x400e1008, uint32_t)
#define PIOB_PSR_P0	(1 << 0)
#define PIOB_PSR_P1	(1 << 1)
#define PIOB_PSR_P2	(1 << 2)
#define PIOB_PSR_P3	(1 << 3)
#define PIOB_PSR_P4	(1 << 4)
#define PIOB_PSR_P5	(1 << 5)
#define PIOB_PSR_P6	(1 << 6)
#define PIOB_PSR_P7	(1 << 7)
#define PIOB_PSR_P8	(1 << 8)
#define PIOB_PSR_P9	(1 << 9)
#define PIOB_PSR_P10	(1 << 10)
#define PIOB_PSR_P11	(1 << 11)
#define PIOB_PSR_P12	(1 << 12)
#define PIOB_PSR_P13	(1 << 13)
#define PIOB_PSR_P14	(1 << 14)
#define PIOB_PSR_P15	(1 << 15)
#define PIOB_PSR_P16	(1 << 16)
#define PIOB_PSR_P17	(1 << 17)
#define PIOB_PSR_P18	(1 << 18)
#define PIOB_PSR_P19	(1 << 19)
#define PIOB_PSR_P20	(1 << 20)
#define PIOB_PSR_P21	(1 << 21)
#define PIOB_PSR_P22	(1 << 22)
#define PIOB_PSR_P23	(1 << 23)
#define PIOB_PSR_P24	(1 << 24)
#define PIOB_PSR_P25	(1 << 25)
#define PIOB_PSR_P26	(1 << 26)
#define PIOB_PSR_P27	(1 << 27)
#define PIOB_PSR_P28	(1 << 28)
#define PIOB_PSR_P29	(1 << 29)
#define PIOB_PSR_P30	(1 << 30)
#define PIOB_PSR_P31	(1 << 31)

#define PIOB_PSR_s	MMIO_REG(0x400e1008, struct __struct_PIOB_PSR)
struct __struct_PIOB_PSR
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

#define PIOB_OER	MMIO_REG(0x400e1010, uint32_t)
#define PIOB_OER_P0	(1 << 0)
#define PIOB_OER_P1	(1 << 1)
#define PIOB_OER_P2	(1 << 2)
#define PIOB_OER_P3	(1 << 3)
#define PIOB_OER_P4	(1 << 4)
#define PIOB_OER_P5	(1 << 5)
#define PIOB_OER_P6	(1 << 6)
#define PIOB_OER_P7	(1 << 7)
#define PIOB_OER_P8	(1 << 8)
#define PIOB_OER_P9	(1 << 9)
#define PIOB_OER_P10	(1 << 10)
#define PIOB_OER_P11	(1 << 11)
#define PIOB_OER_P12	(1 << 12)
#define PIOB_OER_P13	(1 << 13)
#define PIOB_OER_P14	(1 << 14)
#define PIOB_OER_P15	(1 << 15)
#define PIOB_OER_P16	(1 << 16)
#define PIOB_OER_P17	(1 << 17)
#define PIOB_OER_P18	(1 << 18)
#define PIOB_OER_P19	(1 << 19)
#define PIOB_OER_P20	(1 << 20)
#define PIOB_OER_P21	(1 << 21)
#define PIOB_OER_P22	(1 << 22)
#define PIOB_OER_P23	(1 << 23)
#define PIOB_OER_P24	(1 << 24)
#define PIOB_OER_P25	(1 << 25)
#define PIOB_OER_P26	(1 << 26)
#define PIOB_OER_P27	(1 << 27)
#define PIOB_OER_P28	(1 << 28)
#define PIOB_OER_P29	(1 << 29)
#define PIOB_OER_P30	(1 << 30)
#define PIOB_OER_P31	(1 << 31)

#define PIOB_OER_s	MMIO_REG(0x400e1010, struct __struct_PIOB_OER)
struct __struct_PIOB_OER
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

#define PIOB_ODR	MMIO_REG(0x400e1014, uint32_t)
#define PIOB_ODR_P0	(1 << 0)
#define PIOB_ODR_P1	(1 << 1)
#define PIOB_ODR_P2	(1 << 2)
#define PIOB_ODR_P3	(1 << 3)
#define PIOB_ODR_P4	(1 << 4)
#define PIOB_ODR_P5	(1 << 5)
#define PIOB_ODR_P6	(1 << 6)
#define PIOB_ODR_P7	(1 << 7)
#define PIOB_ODR_P8	(1 << 8)
#define PIOB_ODR_P9	(1 << 9)
#define PIOB_ODR_P10	(1 << 10)
#define PIOB_ODR_P11	(1 << 11)
#define PIOB_ODR_P12	(1 << 12)
#define PIOB_ODR_P13	(1 << 13)
#define PIOB_ODR_P14	(1 << 14)
#define PIOB_ODR_P15	(1 << 15)
#define PIOB_ODR_P16	(1 << 16)
#define PIOB_ODR_P17	(1 << 17)
#define PIOB_ODR_P18	(1 << 18)
#define PIOB_ODR_P19	(1 << 19)
#define PIOB_ODR_P20	(1 << 20)
#define PIOB_ODR_P21	(1 << 21)
#define PIOB_ODR_P22	(1 << 22)
#define PIOB_ODR_P23	(1 << 23)
#define PIOB_ODR_P24	(1 << 24)
#define PIOB_ODR_P25	(1 << 25)
#define PIOB_ODR_P26	(1 << 26)
#define PIOB_ODR_P27	(1 << 27)
#define PIOB_ODR_P28	(1 << 28)
#define PIOB_ODR_P29	(1 << 29)
#define PIOB_ODR_P30	(1 << 30)
#define PIOB_ODR_P31	(1 << 31)

#define PIOB_ODR_s	MMIO_REG(0x400e1014, struct __struct_PIOB_ODR)
struct __struct_PIOB_ODR
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

#define PIOB_OSR	MMIO_REG(0x400e1018, uint32_t)
#define PIOB_OSR_P0	(1 << 0)
#define PIOB_OSR_P1	(1 << 1)
#define PIOB_OSR_P2	(1 << 2)
#define PIOB_OSR_P3	(1 << 3)
#define PIOB_OSR_P4	(1 << 4)
#define PIOB_OSR_P5	(1 << 5)
#define PIOB_OSR_P6	(1 << 6)
#define PIOB_OSR_P7	(1 << 7)
#define PIOB_OSR_P8	(1 << 8)
#define PIOB_OSR_P9	(1 << 9)
#define PIOB_OSR_P10	(1 << 10)
#define PIOB_OSR_P11	(1 << 11)
#define PIOB_OSR_P12	(1 << 12)
#define PIOB_OSR_P13	(1 << 13)
#define PIOB_OSR_P14	(1 << 14)
#define PIOB_OSR_P15	(1 << 15)
#define PIOB_OSR_P16	(1 << 16)
#define PIOB_OSR_P17	(1 << 17)
#define PIOB_OSR_P18	(1 << 18)
#define PIOB_OSR_P19	(1 << 19)
#define PIOB_OSR_P20	(1 << 20)
#define PIOB_OSR_P21	(1 << 21)
#define PIOB_OSR_P22	(1 << 22)
#define PIOB_OSR_P23	(1 << 23)
#define PIOB_OSR_P24	(1 << 24)
#define PIOB_OSR_P25	(1 << 25)
#define PIOB_OSR_P26	(1 << 26)
#define PIOB_OSR_P27	(1 << 27)
#define PIOB_OSR_P28	(1 << 28)
#define PIOB_OSR_P29	(1 << 29)
#define PIOB_OSR_P30	(1 << 30)
#define PIOB_OSR_P31	(1 << 31)

#define PIOB_OSR_s	MMIO_REG(0x400e1018, struct __struct_PIOB_OSR)
struct __struct_PIOB_OSR
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

#define PIOB_IFER	MMIO_REG(0x400e1020, uint32_t)
#define PIOB_IFER_P0	(1 << 0)
#define PIOB_IFER_P1	(1 << 1)
#define PIOB_IFER_P2	(1 << 2)
#define PIOB_IFER_P3	(1 << 3)
#define PIOB_IFER_P4	(1 << 4)
#define PIOB_IFER_P5	(1 << 5)
#define PIOB_IFER_P6	(1 << 6)
#define PIOB_IFER_P7	(1 << 7)
#define PIOB_IFER_P8	(1 << 8)
#define PIOB_IFER_P9	(1 << 9)
#define PIOB_IFER_P10	(1 << 10)
#define PIOB_IFER_P11	(1 << 11)
#define PIOB_IFER_P12	(1 << 12)
#define PIOB_IFER_P13	(1 << 13)
#define PIOB_IFER_P14	(1 << 14)
#define PIOB_IFER_P15	(1 << 15)
#define PIOB_IFER_P16	(1 << 16)
#define PIOB_IFER_P17	(1 << 17)
#define PIOB_IFER_P18	(1 << 18)
#define PIOB_IFER_P19	(1 << 19)
#define PIOB_IFER_P20	(1 << 20)
#define PIOB_IFER_P21	(1 << 21)
#define PIOB_IFER_P22	(1 << 22)
#define PIOB_IFER_P23	(1 << 23)
#define PIOB_IFER_P24	(1 << 24)
#define PIOB_IFER_P25	(1 << 25)
#define PIOB_IFER_P26	(1 << 26)
#define PIOB_IFER_P27	(1 << 27)
#define PIOB_IFER_P28	(1 << 28)
#define PIOB_IFER_P29	(1 << 29)
#define PIOB_IFER_P30	(1 << 30)
#define PIOB_IFER_P31	(1 << 31)

#define PIOB_IFER_s	MMIO_REG(0x400e1020, struct __struct_PIOB_IFER)
struct __struct_PIOB_IFER
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

#define PIOB_IFDR	MMIO_REG(0x400e1024, uint32_t)
#define PIOB_IFDR_P0	(1 << 0)
#define PIOB_IFDR_P1	(1 << 1)
#define PIOB_IFDR_P2	(1 << 2)
#define PIOB_IFDR_P3	(1 << 3)
#define PIOB_IFDR_P4	(1 << 4)
#define PIOB_IFDR_P5	(1 << 5)
#define PIOB_IFDR_P6	(1 << 6)
#define PIOB_IFDR_P7	(1 << 7)
#define PIOB_IFDR_P8	(1 << 8)
#define PIOB_IFDR_P9	(1 << 9)
#define PIOB_IFDR_P10	(1 << 10)
#define PIOB_IFDR_P11	(1 << 11)
#define PIOB_IFDR_P12	(1 << 12)
#define PIOB_IFDR_P13	(1 << 13)
#define PIOB_IFDR_P14	(1 << 14)
#define PIOB_IFDR_P15	(1 << 15)
#define PIOB_IFDR_P16	(1 << 16)
#define PIOB_IFDR_P17	(1 << 17)
#define PIOB_IFDR_P18	(1 << 18)
#define PIOB_IFDR_P19	(1 << 19)
#define PIOB_IFDR_P20	(1 << 20)
#define PIOB_IFDR_P21	(1 << 21)
#define PIOB_IFDR_P22	(1 << 22)
#define PIOB_IFDR_P23	(1 << 23)
#define PIOB_IFDR_P24	(1 << 24)
#define PIOB_IFDR_P25	(1 << 25)
#define PIOB_IFDR_P26	(1 << 26)
#define PIOB_IFDR_P27	(1 << 27)
#define PIOB_IFDR_P28	(1 << 28)
#define PIOB_IFDR_P29	(1 << 29)
#define PIOB_IFDR_P30	(1 << 30)
#define PIOB_IFDR_P31	(1 << 31)

#define PIOB_IFDR_s	MMIO_REG(0x400e1024, struct __struct_PIOB_IFDR)
struct __struct_PIOB_IFDR
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

#define PIOB_IFSR	MMIO_REG(0x400e1028, uint32_t)
#define PIOB_IFSR_P0	(1 << 0)
#define PIOB_IFSR_P1	(1 << 1)
#define PIOB_IFSR_P2	(1 << 2)
#define PIOB_IFSR_P3	(1 << 3)
#define PIOB_IFSR_P4	(1 << 4)
#define PIOB_IFSR_P5	(1 << 5)
#define PIOB_IFSR_P6	(1 << 6)
#define PIOB_IFSR_P7	(1 << 7)
#define PIOB_IFSR_P8	(1 << 8)
#define PIOB_IFSR_P9	(1 << 9)
#define PIOB_IFSR_P10	(1 << 10)
#define PIOB_IFSR_P11	(1 << 11)
#define PIOB_IFSR_P12	(1 << 12)
#define PIOB_IFSR_P13	(1 << 13)
#define PIOB_IFSR_P14	(1 << 14)
#define PIOB_IFSR_P15	(1 << 15)
#define PIOB_IFSR_P16	(1 << 16)
#define PIOB_IFSR_P17	(1 << 17)
#define PIOB_IFSR_P18	(1 << 18)
#define PIOB_IFSR_P19	(1 << 19)
#define PIOB_IFSR_P20	(1 << 20)
#define PIOB_IFSR_P21	(1 << 21)
#define PIOB_IFSR_P22	(1 << 22)
#define PIOB_IFSR_P23	(1 << 23)
#define PIOB_IFSR_P24	(1 << 24)
#define PIOB_IFSR_P25	(1 << 25)
#define PIOB_IFSR_P26	(1 << 26)
#define PIOB_IFSR_P27	(1 << 27)
#define PIOB_IFSR_P28	(1 << 28)
#define PIOB_IFSR_P29	(1 << 29)
#define PIOB_IFSR_P30	(1 << 30)
#define PIOB_IFSR_P31	(1 << 31)

#define PIOB_IFSR_s	MMIO_REG(0x400e1028, struct __struct_PIOB_IFSR)
struct __struct_PIOB_IFSR
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

#define PIOB_SODR	MMIO_REG(0x400e1030, uint32_t)
#define PIOB_SODR_P0	(1 << 0)
#define PIOB_SODR_P1	(1 << 1)
#define PIOB_SODR_P2	(1 << 2)
#define PIOB_SODR_P3	(1 << 3)
#define PIOB_SODR_P4	(1 << 4)
#define PIOB_SODR_P5	(1 << 5)
#define PIOB_SODR_P6	(1 << 6)
#define PIOB_SODR_P7	(1 << 7)
#define PIOB_SODR_P8	(1 << 8)
#define PIOB_SODR_P9	(1 << 9)
#define PIOB_SODR_P10	(1 << 10)
#define PIOB_SODR_P11	(1 << 11)
#define PIOB_SODR_P12	(1 << 12)
#define PIOB_SODR_P13	(1 << 13)
#define PIOB_SODR_P14	(1 << 14)
#define PIOB_SODR_P15	(1 << 15)
#define PIOB_SODR_P16	(1 << 16)
#define PIOB_SODR_P17	(1 << 17)
#define PIOB_SODR_P18	(1 << 18)
#define PIOB_SODR_P19	(1 << 19)
#define PIOB_SODR_P20	(1 << 20)
#define PIOB_SODR_P21	(1 << 21)
#define PIOB_SODR_P22	(1 << 22)
#define PIOB_SODR_P23	(1 << 23)
#define PIOB_SODR_P24	(1 << 24)
#define PIOB_SODR_P25	(1 << 25)
#define PIOB_SODR_P26	(1 << 26)
#define PIOB_SODR_P27	(1 << 27)
#define PIOB_SODR_P28	(1 << 28)
#define PIOB_SODR_P29	(1 << 29)
#define PIOB_SODR_P30	(1 << 30)
#define PIOB_SODR_P31	(1 << 31)

#define PIOB_SODR_s	MMIO_REG(0x400e1030, struct __struct_PIOB_SODR)
struct __struct_PIOB_SODR
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

#define PIOB_CODR	MMIO_REG(0x400e1034, uint32_t)
#define PIOB_CODR_P0	(1 << 0)
#define PIOB_CODR_P1	(1 << 1)
#define PIOB_CODR_P2	(1 << 2)
#define PIOB_CODR_P3	(1 << 3)
#define PIOB_CODR_P4	(1 << 4)
#define PIOB_CODR_P5	(1 << 5)
#define PIOB_CODR_P6	(1 << 6)
#define PIOB_CODR_P7	(1 << 7)
#define PIOB_CODR_P8	(1 << 8)
#define PIOB_CODR_P9	(1 << 9)
#define PIOB_CODR_P10	(1 << 10)
#define PIOB_CODR_P11	(1 << 11)
#define PIOB_CODR_P12	(1 << 12)
#define PIOB_CODR_P13	(1 << 13)
#define PIOB_CODR_P14	(1 << 14)
#define PIOB_CODR_P15	(1 << 15)
#define PIOB_CODR_P16	(1 << 16)
#define PIOB_CODR_P17	(1 << 17)
#define PIOB_CODR_P18	(1 << 18)
#define PIOB_CODR_P19	(1 << 19)
#define PIOB_CODR_P20	(1 << 20)
#define PIOB_CODR_P21	(1 << 21)
#define PIOB_CODR_P22	(1 << 22)
#define PIOB_CODR_P23	(1 << 23)
#define PIOB_CODR_P24	(1 << 24)
#define PIOB_CODR_P25	(1 << 25)
#define PIOB_CODR_P26	(1 << 26)
#define PIOB_CODR_P27	(1 << 27)
#define PIOB_CODR_P28	(1 << 28)
#define PIOB_CODR_P29	(1 << 29)
#define PIOB_CODR_P30	(1 << 30)
#define PIOB_CODR_P31	(1 << 31)

#define PIOB_CODR_s	MMIO_REG(0x400e1034, struct __struct_PIOB_CODR)
struct __struct_PIOB_CODR
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

#define PIOB_ODSR	MMIO_REG(0x400e1038, uint32_t)
#define PIOB_ODSR_P0	(1 << 0)
#define PIOB_ODSR_P1	(1 << 1)
#define PIOB_ODSR_P2	(1 << 2)
#define PIOB_ODSR_P3	(1 << 3)
#define PIOB_ODSR_P4	(1 << 4)
#define PIOB_ODSR_P5	(1 << 5)
#define PIOB_ODSR_P6	(1 << 6)
#define PIOB_ODSR_P7	(1 << 7)
#define PIOB_ODSR_P8	(1 << 8)
#define PIOB_ODSR_P9	(1 << 9)
#define PIOB_ODSR_P10	(1 << 10)
#define PIOB_ODSR_P11	(1 << 11)
#define PIOB_ODSR_P12	(1 << 12)
#define PIOB_ODSR_P13	(1 << 13)
#define PIOB_ODSR_P14	(1 << 14)
#define PIOB_ODSR_P15	(1 << 15)
#define PIOB_ODSR_P16	(1 << 16)
#define PIOB_ODSR_P17	(1 << 17)
#define PIOB_ODSR_P18	(1 << 18)
#define PIOB_ODSR_P19	(1 << 19)
#define PIOB_ODSR_P20	(1 << 20)
#define PIOB_ODSR_P21	(1 << 21)
#define PIOB_ODSR_P22	(1 << 22)
#define PIOB_ODSR_P23	(1 << 23)
#define PIOB_ODSR_P24	(1 << 24)
#define PIOB_ODSR_P25	(1 << 25)
#define PIOB_ODSR_P26	(1 << 26)
#define PIOB_ODSR_P27	(1 << 27)
#define PIOB_ODSR_P28	(1 << 28)
#define PIOB_ODSR_P29	(1 << 29)
#define PIOB_ODSR_P30	(1 << 30)
#define PIOB_ODSR_P31	(1 << 31)

#define PIOB_ODSR_s	MMIO_REG(0x400e1038, struct __struct_PIOB_ODSR)
struct __struct_PIOB_ODSR
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

#define PIOB_PDSR	MMIO_REG(0x400e103c, uint32_t)
#define PIOB_PDSR_P0	(1 << 0)
#define PIOB_PDSR_P1	(1 << 1)
#define PIOB_PDSR_P2	(1 << 2)
#define PIOB_PDSR_P3	(1 << 3)
#define PIOB_PDSR_P4	(1 << 4)
#define PIOB_PDSR_P5	(1 << 5)
#define PIOB_PDSR_P6	(1 << 6)
#define PIOB_PDSR_P7	(1 << 7)
#define PIOB_PDSR_P8	(1 << 8)
#define PIOB_PDSR_P9	(1 << 9)
#define PIOB_PDSR_P10	(1 << 10)
#define PIOB_PDSR_P11	(1 << 11)
#define PIOB_PDSR_P12	(1 << 12)
#define PIOB_PDSR_P13	(1 << 13)
#define PIOB_PDSR_P14	(1 << 14)
#define PIOB_PDSR_P15	(1 << 15)
#define PIOB_PDSR_P16	(1 << 16)
#define PIOB_PDSR_P17	(1 << 17)
#define PIOB_PDSR_P18	(1 << 18)
#define PIOB_PDSR_P19	(1 << 19)
#define PIOB_PDSR_P20	(1 << 20)
#define PIOB_PDSR_P21	(1 << 21)
#define PIOB_PDSR_P22	(1 << 22)
#define PIOB_PDSR_P23	(1 << 23)
#define PIOB_PDSR_P24	(1 << 24)
#define PIOB_PDSR_P25	(1 << 25)
#define PIOB_PDSR_P26	(1 << 26)
#define PIOB_PDSR_P27	(1 << 27)
#define PIOB_PDSR_P28	(1 << 28)
#define PIOB_PDSR_P29	(1 << 29)
#define PIOB_PDSR_P30	(1 << 30)
#define PIOB_PDSR_P31	(1 << 31)

#define PIOB_PDSR_s	MMIO_REG(0x400e103c, struct __struct_PIOB_PDSR)
struct __struct_PIOB_PDSR
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

#define PIOB_IER	MMIO_REG(0x400e1040, uint32_t)
#define PIOB_IER_P0	(1 << 0)
#define PIOB_IER_P1	(1 << 1)
#define PIOB_IER_P2	(1 << 2)
#define PIOB_IER_P3	(1 << 3)
#define PIOB_IER_P4	(1 << 4)
#define PIOB_IER_P5	(1 << 5)
#define PIOB_IER_P6	(1 << 6)
#define PIOB_IER_P7	(1 << 7)
#define PIOB_IER_P8	(1 << 8)
#define PIOB_IER_P9	(1 << 9)
#define PIOB_IER_P10	(1 << 10)
#define PIOB_IER_P11	(1 << 11)
#define PIOB_IER_P12	(1 << 12)
#define PIOB_IER_P13	(1 << 13)
#define PIOB_IER_P14	(1 << 14)
#define PIOB_IER_P15	(1 << 15)
#define PIOB_IER_P16	(1 << 16)
#define PIOB_IER_P17	(1 << 17)
#define PIOB_IER_P18	(1 << 18)
#define PIOB_IER_P19	(1 << 19)
#define PIOB_IER_P20	(1 << 20)
#define PIOB_IER_P21	(1 << 21)
#define PIOB_IER_P22	(1 << 22)
#define PIOB_IER_P23	(1 << 23)
#define PIOB_IER_P24	(1 << 24)
#define PIOB_IER_P25	(1 << 25)
#define PIOB_IER_P26	(1 << 26)
#define PIOB_IER_P27	(1 << 27)
#define PIOB_IER_P28	(1 << 28)
#define PIOB_IER_P29	(1 << 29)
#define PIOB_IER_P30	(1 << 30)
#define PIOB_IER_P31	(1 << 31)

#define PIOB_IER_s	MMIO_REG(0x400e1040, struct __struct_PIOB_IER)
struct __struct_PIOB_IER
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

#define PIOB_IDR	MMIO_REG(0x400e1044, uint32_t)
#define PIOB_IDR_P0	(1 << 0)
#define PIOB_IDR_P1	(1 << 1)
#define PIOB_IDR_P2	(1 << 2)
#define PIOB_IDR_P3	(1 << 3)
#define PIOB_IDR_P4	(1 << 4)
#define PIOB_IDR_P5	(1 << 5)
#define PIOB_IDR_P6	(1 << 6)
#define PIOB_IDR_P7	(1 << 7)
#define PIOB_IDR_P8	(1 << 8)
#define PIOB_IDR_P9	(1 << 9)
#define PIOB_IDR_P10	(1 << 10)
#define PIOB_IDR_P11	(1 << 11)
#define PIOB_IDR_P12	(1 << 12)
#define PIOB_IDR_P13	(1 << 13)
#define PIOB_IDR_P14	(1 << 14)
#define PIOB_IDR_P15	(1 << 15)
#define PIOB_IDR_P16	(1 << 16)
#define PIOB_IDR_P17	(1 << 17)
#define PIOB_IDR_P18	(1 << 18)
#define PIOB_IDR_P19	(1 << 19)
#define PIOB_IDR_P20	(1 << 20)
#define PIOB_IDR_P21	(1 << 21)
#define PIOB_IDR_P22	(1 << 22)
#define PIOB_IDR_P23	(1 << 23)
#define PIOB_IDR_P24	(1 << 24)
#define PIOB_IDR_P25	(1 << 25)
#define PIOB_IDR_P26	(1 << 26)
#define PIOB_IDR_P27	(1 << 27)
#define PIOB_IDR_P28	(1 << 28)
#define PIOB_IDR_P29	(1 << 29)
#define PIOB_IDR_P30	(1 << 30)
#define PIOB_IDR_P31	(1 << 31)

#define PIOB_IDR_s	MMIO_REG(0x400e1044, struct __struct_PIOB_IDR)
struct __struct_PIOB_IDR
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

#define PIOB_IMR	MMIO_REG(0x400e1048, uint32_t)
#define PIOB_IMR_P0	(1 << 0)
#define PIOB_IMR_P1	(1 << 1)
#define PIOB_IMR_P2	(1 << 2)
#define PIOB_IMR_P3	(1 << 3)
#define PIOB_IMR_P4	(1 << 4)
#define PIOB_IMR_P5	(1 << 5)
#define PIOB_IMR_P6	(1 << 6)
#define PIOB_IMR_P7	(1 << 7)
#define PIOB_IMR_P8	(1 << 8)
#define PIOB_IMR_P9	(1 << 9)
#define PIOB_IMR_P10	(1 << 10)
#define PIOB_IMR_P11	(1 << 11)
#define PIOB_IMR_P12	(1 << 12)
#define PIOB_IMR_P13	(1 << 13)
#define PIOB_IMR_P14	(1 << 14)
#define PIOB_IMR_P15	(1 << 15)
#define PIOB_IMR_P16	(1 << 16)
#define PIOB_IMR_P17	(1 << 17)
#define PIOB_IMR_P18	(1 << 18)
#define PIOB_IMR_P19	(1 << 19)
#define PIOB_IMR_P20	(1 << 20)
#define PIOB_IMR_P21	(1 << 21)
#define PIOB_IMR_P22	(1 << 22)
#define PIOB_IMR_P23	(1 << 23)
#define PIOB_IMR_P24	(1 << 24)
#define PIOB_IMR_P25	(1 << 25)
#define PIOB_IMR_P26	(1 << 26)
#define PIOB_IMR_P27	(1 << 27)
#define PIOB_IMR_P28	(1 << 28)
#define PIOB_IMR_P29	(1 << 29)
#define PIOB_IMR_P30	(1 << 30)
#define PIOB_IMR_P31	(1 << 31)

#define PIOB_IMR_s	MMIO_REG(0x400e1048, struct __struct_PIOB_IMR)
struct __struct_PIOB_IMR
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

#define PIOB_ISR	MMIO_REG(0x400e104c, uint32_t)
#define PIOB_ISR_P0	(1 << 0)
#define PIOB_ISR_P1	(1 << 1)
#define PIOB_ISR_P2	(1 << 2)
#define PIOB_ISR_P3	(1 << 3)
#define PIOB_ISR_P4	(1 << 4)
#define PIOB_ISR_P5	(1 << 5)
#define PIOB_ISR_P6	(1 << 6)
#define PIOB_ISR_P7	(1 << 7)
#define PIOB_ISR_P8	(1 << 8)
#define PIOB_ISR_P9	(1 << 9)
#define PIOB_ISR_P10	(1 << 10)
#define PIOB_ISR_P11	(1 << 11)
#define PIOB_ISR_P12	(1 << 12)
#define PIOB_ISR_P13	(1 << 13)
#define PIOB_ISR_P14	(1 << 14)
#define PIOB_ISR_P15	(1 << 15)
#define PIOB_ISR_P16	(1 << 16)
#define PIOB_ISR_P17	(1 << 17)
#define PIOB_ISR_P18	(1 << 18)
#define PIOB_ISR_P19	(1 << 19)
#define PIOB_ISR_P20	(1 << 20)
#define PIOB_ISR_P21	(1 << 21)
#define PIOB_ISR_P22	(1 << 22)
#define PIOB_ISR_P23	(1 << 23)
#define PIOB_ISR_P24	(1 << 24)
#define PIOB_ISR_P25	(1 << 25)
#define PIOB_ISR_P26	(1 << 26)
#define PIOB_ISR_P27	(1 << 27)
#define PIOB_ISR_P28	(1 << 28)
#define PIOB_ISR_P29	(1 << 29)
#define PIOB_ISR_P30	(1 << 30)
#define PIOB_ISR_P31	(1 << 31)

#define PIOB_ISR_s	MMIO_REG(0x400e104c, struct __struct_PIOB_ISR)
struct __struct_PIOB_ISR
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

#define PIOB_MDER	MMIO_REG(0x400e1050, uint32_t)
#define PIOB_MDER_P0	(1 << 0)
#define PIOB_MDER_P1	(1 << 1)
#define PIOB_MDER_P2	(1 << 2)
#define PIOB_MDER_P3	(1 << 3)
#define PIOB_MDER_P4	(1 << 4)
#define PIOB_MDER_P5	(1 << 5)
#define PIOB_MDER_P6	(1 << 6)
#define PIOB_MDER_P7	(1 << 7)
#define PIOB_MDER_P8	(1 << 8)
#define PIOB_MDER_P9	(1 << 9)
#define PIOB_MDER_P10	(1 << 10)
#define PIOB_MDER_P11	(1 << 11)
#define PIOB_MDER_P12	(1 << 12)
#define PIOB_MDER_P13	(1 << 13)
#define PIOB_MDER_P14	(1 << 14)
#define PIOB_MDER_P15	(1 << 15)
#define PIOB_MDER_P16	(1 << 16)
#define PIOB_MDER_P17	(1 << 17)
#define PIOB_MDER_P18	(1 << 18)
#define PIOB_MDER_P19	(1 << 19)
#define PIOB_MDER_P20	(1 << 20)
#define PIOB_MDER_P21	(1 << 21)
#define PIOB_MDER_P22	(1 << 22)
#define PIOB_MDER_P23	(1 << 23)
#define PIOB_MDER_P24	(1 << 24)
#define PIOB_MDER_P25	(1 << 25)
#define PIOB_MDER_P26	(1 << 26)
#define PIOB_MDER_P27	(1 << 27)
#define PIOB_MDER_P28	(1 << 28)
#define PIOB_MDER_P29	(1 << 29)
#define PIOB_MDER_P30	(1 << 30)
#define PIOB_MDER_P31	(1 << 31)

#define PIOB_MDER_s	MMIO_REG(0x400e1050, struct __struct_PIOB_MDER)
struct __struct_PIOB_MDER
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

#define PIOB_MDDR	MMIO_REG(0x400e1054, uint32_t)
#define PIOB_MDDR_P0	(1 << 0)
#define PIOB_MDDR_P1	(1 << 1)
#define PIOB_MDDR_P2	(1 << 2)
#define PIOB_MDDR_P3	(1 << 3)
#define PIOB_MDDR_P4	(1 << 4)
#define PIOB_MDDR_P5	(1 << 5)
#define PIOB_MDDR_P6	(1 << 6)
#define PIOB_MDDR_P7	(1 << 7)
#define PIOB_MDDR_P8	(1 << 8)
#define PIOB_MDDR_P9	(1 << 9)
#define PIOB_MDDR_P10	(1 << 10)
#define PIOB_MDDR_P11	(1 << 11)
#define PIOB_MDDR_P12	(1 << 12)
#define PIOB_MDDR_P13	(1 << 13)
#define PIOB_MDDR_P14	(1 << 14)
#define PIOB_MDDR_P15	(1 << 15)
#define PIOB_MDDR_P16	(1 << 16)
#define PIOB_MDDR_P17	(1 << 17)
#define PIOB_MDDR_P18	(1 << 18)
#define PIOB_MDDR_P19	(1 << 19)
#define PIOB_MDDR_P20	(1 << 20)
#define PIOB_MDDR_P21	(1 << 21)
#define PIOB_MDDR_P22	(1 << 22)
#define PIOB_MDDR_P23	(1 << 23)
#define PIOB_MDDR_P24	(1 << 24)
#define PIOB_MDDR_P25	(1 << 25)
#define PIOB_MDDR_P26	(1 << 26)
#define PIOB_MDDR_P27	(1 << 27)
#define PIOB_MDDR_P28	(1 << 28)
#define PIOB_MDDR_P29	(1 << 29)
#define PIOB_MDDR_P30	(1 << 30)
#define PIOB_MDDR_P31	(1 << 31)

#define PIOB_MDDR_s	MMIO_REG(0x400e1054, struct __struct_PIOB_MDDR)
struct __struct_PIOB_MDDR
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

#define PIOB_MDSR	MMIO_REG(0x400e1058, uint32_t)
#define PIOB_MDSR_P0	(1 << 0)
#define PIOB_MDSR_P1	(1 << 1)
#define PIOB_MDSR_P2	(1 << 2)
#define PIOB_MDSR_P3	(1 << 3)
#define PIOB_MDSR_P4	(1 << 4)
#define PIOB_MDSR_P5	(1 << 5)
#define PIOB_MDSR_P6	(1 << 6)
#define PIOB_MDSR_P7	(1 << 7)
#define PIOB_MDSR_P8	(1 << 8)
#define PIOB_MDSR_P9	(1 << 9)
#define PIOB_MDSR_P10	(1 << 10)
#define PIOB_MDSR_P11	(1 << 11)
#define PIOB_MDSR_P12	(1 << 12)
#define PIOB_MDSR_P13	(1 << 13)
#define PIOB_MDSR_P14	(1 << 14)
#define PIOB_MDSR_P15	(1 << 15)
#define PIOB_MDSR_P16	(1 << 16)
#define PIOB_MDSR_P17	(1 << 17)
#define PIOB_MDSR_P18	(1 << 18)
#define PIOB_MDSR_P19	(1 << 19)
#define PIOB_MDSR_P20	(1 << 20)
#define PIOB_MDSR_P21	(1 << 21)
#define PIOB_MDSR_P22	(1 << 22)
#define PIOB_MDSR_P23	(1 << 23)
#define PIOB_MDSR_P24	(1 << 24)
#define PIOB_MDSR_P25	(1 << 25)
#define PIOB_MDSR_P26	(1 << 26)
#define PIOB_MDSR_P27	(1 << 27)
#define PIOB_MDSR_P28	(1 << 28)
#define PIOB_MDSR_P29	(1 << 29)
#define PIOB_MDSR_P30	(1 << 30)
#define PIOB_MDSR_P31	(1 << 31)

#define PIOB_MDSR_s	MMIO_REG(0x400e1058, struct __struct_PIOB_MDSR)
struct __struct_PIOB_MDSR
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

#define PIOB_PUDR	MMIO_REG(0x400e1060, uint32_t)
#define PIOB_PUDR_P0	(1 << 0)
#define PIOB_PUDR_P1	(1 << 1)
#define PIOB_PUDR_P2	(1 << 2)
#define PIOB_PUDR_P3	(1 << 3)
#define PIOB_PUDR_P4	(1 << 4)
#define PIOB_PUDR_P5	(1 << 5)
#define PIOB_PUDR_P6	(1 << 6)
#define PIOB_PUDR_P7	(1 << 7)
#define PIOB_PUDR_P8	(1 << 8)
#define PIOB_PUDR_P9	(1 << 9)
#define PIOB_PUDR_P10	(1 << 10)
#define PIOB_PUDR_P11	(1 << 11)
#define PIOB_PUDR_P12	(1 << 12)
#define PIOB_PUDR_P13	(1 << 13)
#define PIOB_PUDR_P14	(1 << 14)
#define PIOB_PUDR_P15	(1 << 15)
#define PIOB_PUDR_P16	(1 << 16)
#define PIOB_PUDR_P17	(1 << 17)
#define PIOB_PUDR_P18	(1 << 18)
#define PIOB_PUDR_P19	(1 << 19)
#define PIOB_PUDR_P20	(1 << 20)
#define PIOB_PUDR_P21	(1 << 21)
#define PIOB_PUDR_P22	(1 << 22)
#define PIOB_PUDR_P23	(1 << 23)
#define PIOB_PUDR_P24	(1 << 24)
#define PIOB_PUDR_P25	(1 << 25)
#define PIOB_PUDR_P26	(1 << 26)
#define PIOB_PUDR_P27	(1 << 27)
#define PIOB_PUDR_P28	(1 << 28)
#define PIOB_PUDR_P29	(1 << 29)
#define PIOB_PUDR_P30	(1 << 30)
#define PIOB_PUDR_P31	(1 << 31)

#define PIOB_PUDR_s	MMIO_REG(0x400e1060, struct __struct_PIOB_PUDR)
struct __struct_PIOB_PUDR
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

#define PIOB_PUER	MMIO_REG(0x400e1064, uint32_t)
#define PIOB_PUER_P0	(1 << 0)
#define PIOB_PUER_P1	(1 << 1)
#define PIOB_PUER_P2	(1 << 2)
#define PIOB_PUER_P3	(1 << 3)
#define PIOB_PUER_P4	(1 << 4)
#define PIOB_PUER_P5	(1 << 5)
#define PIOB_PUER_P6	(1 << 6)
#define PIOB_PUER_P7	(1 << 7)
#define PIOB_PUER_P8	(1 << 8)
#define PIOB_PUER_P9	(1 << 9)
#define PIOB_PUER_P10	(1 << 10)
#define PIOB_PUER_P11	(1 << 11)
#define PIOB_PUER_P12	(1 << 12)
#define PIOB_PUER_P13	(1 << 13)
#define PIOB_PUER_P14	(1 << 14)
#define PIOB_PUER_P15	(1 << 15)
#define PIOB_PUER_P16	(1 << 16)
#define PIOB_PUER_P17	(1 << 17)
#define PIOB_PUER_P18	(1 << 18)
#define PIOB_PUER_P19	(1 << 19)
#define PIOB_PUER_P20	(1 << 20)
#define PIOB_PUER_P21	(1 << 21)
#define PIOB_PUER_P22	(1 << 22)
#define PIOB_PUER_P23	(1 << 23)
#define PIOB_PUER_P24	(1 << 24)
#define PIOB_PUER_P25	(1 << 25)
#define PIOB_PUER_P26	(1 << 26)
#define PIOB_PUER_P27	(1 << 27)
#define PIOB_PUER_P28	(1 << 28)
#define PIOB_PUER_P29	(1 << 29)
#define PIOB_PUER_P30	(1 << 30)
#define PIOB_PUER_P31	(1 << 31)

#define PIOB_PUER_s	MMIO_REG(0x400e1064, struct __struct_PIOB_PUER)
struct __struct_PIOB_PUER
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

#define PIOB_PUSR	MMIO_REG(0x400e1068, uint32_t)
#define PIOB_PUSR_P0	(1 << 0)
#define PIOB_PUSR_P1	(1 << 1)
#define PIOB_PUSR_P2	(1 << 2)
#define PIOB_PUSR_P3	(1 << 3)
#define PIOB_PUSR_P4	(1 << 4)
#define PIOB_PUSR_P5	(1 << 5)
#define PIOB_PUSR_P6	(1 << 6)
#define PIOB_PUSR_P7	(1 << 7)
#define PIOB_PUSR_P8	(1 << 8)
#define PIOB_PUSR_P9	(1 << 9)
#define PIOB_PUSR_P10	(1 << 10)
#define PIOB_PUSR_P11	(1 << 11)
#define PIOB_PUSR_P12	(1 << 12)
#define PIOB_PUSR_P13	(1 << 13)
#define PIOB_PUSR_P14	(1 << 14)
#define PIOB_PUSR_P15	(1 << 15)
#define PIOB_PUSR_P16	(1 << 16)
#define PIOB_PUSR_P17	(1 << 17)
#define PIOB_PUSR_P18	(1 << 18)
#define PIOB_PUSR_P19	(1 << 19)
#define PIOB_PUSR_P20	(1 << 20)
#define PIOB_PUSR_P21	(1 << 21)
#define PIOB_PUSR_P22	(1 << 22)
#define PIOB_PUSR_P23	(1 << 23)
#define PIOB_PUSR_P24	(1 << 24)
#define PIOB_PUSR_P25	(1 << 25)
#define PIOB_PUSR_P26	(1 << 26)
#define PIOB_PUSR_P27	(1 << 27)
#define PIOB_PUSR_P28	(1 << 28)
#define PIOB_PUSR_P29	(1 << 29)
#define PIOB_PUSR_P30	(1 << 30)
#define PIOB_PUSR_P31	(1 << 31)

#define PIOB_PUSR_s	MMIO_REG(0x400e1068, struct __struct_PIOB_PUSR)
struct __struct_PIOB_PUSR
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

#define PIOB_ABCDSR1	MMIO_REG(0x400e1070, uint32_t)
#define PIOB_ABCDSR1_P0	(1 << 0)
#define PIOB_ABCDSR1_P1	(1 << 1)
#define PIOB_ABCDSR1_P2	(1 << 2)
#define PIOB_ABCDSR1_P3	(1 << 3)
#define PIOB_ABCDSR1_P4	(1 << 4)
#define PIOB_ABCDSR1_P5	(1 << 5)
#define PIOB_ABCDSR1_P6	(1 << 6)
#define PIOB_ABCDSR1_P7	(1 << 7)
#define PIOB_ABCDSR1_P8	(1 << 8)
#define PIOB_ABCDSR1_P9	(1 << 9)
#define PIOB_ABCDSR1_P10	(1 << 10)
#define PIOB_ABCDSR1_P11	(1 << 11)
#define PIOB_ABCDSR1_P12	(1 << 12)
#define PIOB_ABCDSR1_P13	(1 << 13)
#define PIOB_ABCDSR1_P14	(1 << 14)
#define PIOB_ABCDSR1_P15	(1 << 15)
#define PIOB_ABCDSR1_P16	(1 << 16)
#define PIOB_ABCDSR1_P17	(1 << 17)
#define PIOB_ABCDSR1_P18	(1 << 18)
#define PIOB_ABCDSR1_P19	(1 << 19)
#define PIOB_ABCDSR1_P20	(1 << 20)
#define PIOB_ABCDSR1_P21	(1 << 21)
#define PIOB_ABCDSR1_P22	(1 << 22)
#define PIOB_ABCDSR1_P23	(1 << 23)
#define PIOB_ABCDSR1_P24	(1 << 24)
#define PIOB_ABCDSR1_P25	(1 << 25)
#define PIOB_ABCDSR1_P26	(1 << 26)
#define PIOB_ABCDSR1_P27	(1 << 27)
#define PIOB_ABCDSR1_P28	(1 << 28)
#define PIOB_ABCDSR1_P29	(1 << 29)
#define PIOB_ABCDSR1_P30	(1 << 30)
#define PIOB_ABCDSR1_P31	(1 << 31)

#define PIOB_ABCDSR1_s	MMIO_REG(0x400e1070, struct __struct_PIOB_ABCDSR1)
struct __struct_PIOB_ABCDSR1
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

#define PIOB_ABCDSR2	MMIO_REG(0x400e1074, uint32_t)
#define PIOB_ABCDSR2_P0	(1 << 0)
#define PIOB_ABCDSR2_P1	(1 << 1)
#define PIOB_ABCDSR2_P2	(1 << 2)
#define PIOB_ABCDSR2_P3	(1 << 3)
#define PIOB_ABCDSR2_P4	(1 << 4)
#define PIOB_ABCDSR2_P5	(1 << 5)
#define PIOB_ABCDSR2_P6	(1 << 6)
#define PIOB_ABCDSR2_P7	(1 << 7)
#define PIOB_ABCDSR2_P8	(1 << 8)
#define PIOB_ABCDSR2_P9	(1 << 9)
#define PIOB_ABCDSR2_P10	(1 << 10)
#define PIOB_ABCDSR2_P11	(1 << 11)
#define PIOB_ABCDSR2_P12	(1 << 12)
#define PIOB_ABCDSR2_P13	(1 << 13)
#define PIOB_ABCDSR2_P14	(1 << 14)
#define PIOB_ABCDSR2_P15	(1 << 15)
#define PIOB_ABCDSR2_P16	(1 << 16)
#define PIOB_ABCDSR2_P17	(1 << 17)
#define PIOB_ABCDSR2_P18	(1 << 18)
#define PIOB_ABCDSR2_P19	(1 << 19)
#define PIOB_ABCDSR2_P20	(1 << 20)
#define PIOB_ABCDSR2_P21	(1 << 21)
#define PIOB_ABCDSR2_P22	(1 << 22)
#define PIOB_ABCDSR2_P23	(1 << 23)
#define PIOB_ABCDSR2_P24	(1 << 24)
#define PIOB_ABCDSR2_P25	(1 << 25)
#define PIOB_ABCDSR2_P26	(1 << 26)
#define PIOB_ABCDSR2_P27	(1 << 27)
#define PIOB_ABCDSR2_P28	(1 << 28)
#define PIOB_ABCDSR2_P29	(1 << 29)
#define PIOB_ABCDSR2_P30	(1 << 30)
#define PIOB_ABCDSR2_P31	(1 << 31)

#define PIOB_ABCDSR2_s	MMIO_REG(0x400e1074, struct __struct_PIOB_ABCDSR2)
struct __struct_PIOB_ABCDSR2
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

#define PIOB_IFSCDR	MMIO_REG(0x400e1080, uint32_t)
#define PIOB_IFSCDR_P0	(1 << 0)
#define PIOB_IFSCDR_P1	(1 << 1)
#define PIOB_IFSCDR_P2	(1 << 2)
#define PIOB_IFSCDR_P3	(1 << 3)
#define PIOB_IFSCDR_P4	(1 << 4)
#define PIOB_IFSCDR_P5	(1 << 5)
#define PIOB_IFSCDR_P6	(1 << 6)
#define PIOB_IFSCDR_P7	(1 << 7)
#define PIOB_IFSCDR_P8	(1 << 8)
#define PIOB_IFSCDR_P9	(1 << 9)
#define PIOB_IFSCDR_P10	(1 << 10)
#define PIOB_IFSCDR_P11	(1 << 11)
#define PIOB_IFSCDR_P12	(1 << 12)
#define PIOB_IFSCDR_P13	(1 << 13)
#define PIOB_IFSCDR_P14	(1 << 14)
#define PIOB_IFSCDR_P15	(1 << 15)
#define PIOB_IFSCDR_P16	(1 << 16)
#define PIOB_IFSCDR_P17	(1 << 17)
#define PIOB_IFSCDR_P18	(1 << 18)
#define PIOB_IFSCDR_P19	(1 << 19)
#define PIOB_IFSCDR_P20	(1 << 20)
#define PIOB_IFSCDR_P21	(1 << 21)
#define PIOB_IFSCDR_P22	(1 << 22)
#define PIOB_IFSCDR_P23	(1 << 23)
#define PIOB_IFSCDR_P24	(1 << 24)
#define PIOB_IFSCDR_P25	(1 << 25)
#define PIOB_IFSCDR_P26	(1 << 26)
#define PIOB_IFSCDR_P27	(1 << 27)
#define PIOB_IFSCDR_P28	(1 << 28)
#define PIOB_IFSCDR_P29	(1 << 29)
#define PIOB_IFSCDR_P30	(1 << 30)
#define PIOB_IFSCDR_P31	(1 << 31)

#define PIOB_IFSCDR_s	MMIO_REG(0x400e1080, struct __struct_PIOB_IFSCDR)
struct __struct_PIOB_IFSCDR
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

#define PIOB_IFSCER	MMIO_REG(0x400e1084, uint32_t)
#define PIOB_IFSCER_P0	(1 << 0)
#define PIOB_IFSCER_P1	(1 << 1)
#define PIOB_IFSCER_P2	(1 << 2)
#define PIOB_IFSCER_P3	(1 << 3)
#define PIOB_IFSCER_P4	(1 << 4)
#define PIOB_IFSCER_P5	(1 << 5)
#define PIOB_IFSCER_P6	(1 << 6)
#define PIOB_IFSCER_P7	(1 << 7)
#define PIOB_IFSCER_P8	(1 << 8)
#define PIOB_IFSCER_P9	(1 << 9)
#define PIOB_IFSCER_P10	(1 << 10)
#define PIOB_IFSCER_P11	(1 << 11)
#define PIOB_IFSCER_P12	(1 << 12)
#define PIOB_IFSCER_P13	(1 << 13)
#define PIOB_IFSCER_P14	(1 << 14)
#define PIOB_IFSCER_P15	(1 << 15)
#define PIOB_IFSCER_P16	(1 << 16)
#define PIOB_IFSCER_P17	(1 << 17)
#define PIOB_IFSCER_P18	(1 << 18)
#define PIOB_IFSCER_P19	(1 << 19)
#define PIOB_IFSCER_P20	(1 << 20)
#define PIOB_IFSCER_P21	(1 << 21)
#define PIOB_IFSCER_P22	(1 << 22)
#define PIOB_IFSCER_P23	(1 << 23)
#define PIOB_IFSCER_P24	(1 << 24)
#define PIOB_IFSCER_P25	(1 << 25)
#define PIOB_IFSCER_P26	(1 << 26)
#define PIOB_IFSCER_P27	(1 << 27)
#define PIOB_IFSCER_P28	(1 << 28)
#define PIOB_IFSCER_P29	(1 << 29)
#define PIOB_IFSCER_P30	(1 << 30)
#define PIOB_IFSCER_P31	(1 << 31)

#define PIOB_IFSCER_s	MMIO_REG(0x400e1084, struct __struct_PIOB_IFSCER)
struct __struct_PIOB_IFSCER
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

#define PIOB_IFSCSR	MMIO_REG(0x400e1088, uint32_t)
#define PIOB_IFSCSR_P0	(1 << 0)
#define PIOB_IFSCSR_P1	(1 << 1)
#define PIOB_IFSCSR_P2	(1 << 2)
#define PIOB_IFSCSR_P3	(1 << 3)
#define PIOB_IFSCSR_P4	(1 << 4)
#define PIOB_IFSCSR_P5	(1 << 5)
#define PIOB_IFSCSR_P6	(1 << 6)
#define PIOB_IFSCSR_P7	(1 << 7)
#define PIOB_IFSCSR_P8	(1 << 8)
#define PIOB_IFSCSR_P9	(1 << 9)
#define PIOB_IFSCSR_P10	(1 << 10)
#define PIOB_IFSCSR_P11	(1 << 11)
#define PIOB_IFSCSR_P12	(1 << 12)
#define PIOB_IFSCSR_P13	(1 << 13)
#define PIOB_IFSCSR_P14	(1 << 14)
#define PIOB_IFSCSR_P15	(1 << 15)
#define PIOB_IFSCSR_P16	(1 << 16)
#define PIOB_IFSCSR_P17	(1 << 17)
#define PIOB_IFSCSR_P18	(1 << 18)
#define PIOB_IFSCSR_P19	(1 << 19)
#define PIOB_IFSCSR_P20	(1 << 20)
#define PIOB_IFSCSR_P21	(1 << 21)
#define PIOB_IFSCSR_P22	(1 << 22)
#define PIOB_IFSCSR_P23	(1 << 23)
#define PIOB_IFSCSR_P24	(1 << 24)
#define PIOB_IFSCSR_P25	(1 << 25)
#define PIOB_IFSCSR_P26	(1 << 26)
#define PIOB_IFSCSR_P27	(1 << 27)
#define PIOB_IFSCSR_P28	(1 << 28)
#define PIOB_IFSCSR_P29	(1 << 29)
#define PIOB_IFSCSR_P30	(1 << 30)
#define PIOB_IFSCSR_P31	(1 << 31)

#define PIOB_IFSCSR_s	MMIO_REG(0x400e1088, struct __struct_PIOB_IFSCSR)
struct __struct_PIOB_IFSCSR
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

#define PIOB_SCDR	MMIO_REG(0x400e108c, uint32_t)
#define PIOB_SCDR_DIV(x)	((x) << 0)
#define PIOB_SCDR_DIV_MSK	0x00003fff
#define PIOB_SCDR_DIV_VAL(x)	(((x) >> 0) & 0x3fff)

#define PIOB_SCDR_s	MMIO_REG(0x400e108c, struct __struct_PIOB_SCDR)
struct __struct_PIOB_SCDR
{
  uint32_t div : 14;
  uint32_t  : 18;
};

#define PIOB_PPDDR	MMIO_REG(0x400e1090, uint32_t)
#define PIOB_PPDDR_P0	(1 << 0)
#define PIOB_PPDDR_P1	(1 << 1)
#define PIOB_PPDDR_P2	(1 << 2)
#define PIOB_PPDDR_P3	(1 << 3)
#define PIOB_PPDDR_P4	(1 << 4)
#define PIOB_PPDDR_P5	(1 << 5)
#define PIOB_PPDDR_P6	(1 << 6)
#define PIOB_PPDDR_P7	(1 << 7)
#define PIOB_PPDDR_P8	(1 << 8)
#define PIOB_PPDDR_P9	(1 << 9)
#define PIOB_PPDDR_P10	(1 << 10)
#define PIOB_PPDDR_P11	(1 << 11)
#define PIOB_PPDDR_P12	(1 << 12)
#define PIOB_PPDDR_P13	(1 << 13)
#define PIOB_PPDDR_P14	(1 << 14)
#define PIOB_PPDDR_P15	(1 << 15)
#define PIOB_PPDDR_P16	(1 << 16)
#define PIOB_PPDDR_P17	(1 << 17)
#define PIOB_PPDDR_P18	(1 << 18)
#define PIOB_PPDDR_P19	(1 << 19)
#define PIOB_PPDDR_P20	(1 << 20)
#define PIOB_PPDDR_P21	(1 << 21)
#define PIOB_PPDDR_P22	(1 << 22)
#define PIOB_PPDDR_P23	(1 << 23)
#define PIOB_PPDDR_P24	(1 << 24)
#define PIOB_PPDDR_P25	(1 << 25)
#define PIOB_PPDDR_P26	(1 << 26)
#define PIOB_PPDDR_P27	(1 << 27)
#define PIOB_PPDDR_P28	(1 << 28)
#define PIOB_PPDDR_P29	(1 << 29)
#define PIOB_PPDDR_P30	(1 << 30)
#define PIOB_PPDDR_P31	(1 << 31)

#define PIOB_PPDDR_s	MMIO_REG(0x400e1090, struct __struct_PIOB_PPDDR)
struct __struct_PIOB_PPDDR
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

#define PIOB_PPDER	MMIO_REG(0x400e1094, uint32_t)
#define PIOB_PPDER_P0	(1 << 0)
#define PIOB_PPDER_P1	(1 << 1)
#define PIOB_PPDER_P2	(1 << 2)
#define PIOB_PPDER_P3	(1 << 3)
#define PIOB_PPDER_P4	(1 << 4)
#define PIOB_PPDER_P5	(1 << 5)
#define PIOB_PPDER_P6	(1 << 6)
#define PIOB_PPDER_P7	(1 << 7)
#define PIOB_PPDER_P8	(1 << 8)
#define PIOB_PPDER_P9	(1 << 9)
#define PIOB_PPDER_P10	(1 << 10)
#define PIOB_PPDER_P11	(1 << 11)
#define PIOB_PPDER_P12	(1 << 12)
#define PIOB_PPDER_P13	(1 << 13)
#define PIOB_PPDER_P14	(1 << 14)
#define PIOB_PPDER_P15	(1 << 15)
#define PIOB_PPDER_P16	(1 << 16)
#define PIOB_PPDER_P17	(1 << 17)
#define PIOB_PPDER_P18	(1 << 18)
#define PIOB_PPDER_P19	(1 << 19)
#define PIOB_PPDER_P20	(1 << 20)
#define PIOB_PPDER_P21	(1 << 21)
#define PIOB_PPDER_P22	(1 << 22)
#define PIOB_PPDER_P23	(1 << 23)
#define PIOB_PPDER_P24	(1 << 24)
#define PIOB_PPDER_P25	(1 << 25)
#define PIOB_PPDER_P26	(1 << 26)
#define PIOB_PPDER_P27	(1 << 27)
#define PIOB_PPDER_P28	(1 << 28)
#define PIOB_PPDER_P29	(1 << 29)
#define PIOB_PPDER_P30	(1 << 30)
#define PIOB_PPDER_P31	(1 << 31)

#define PIOB_PPDER_s	MMIO_REG(0x400e1094, struct __struct_PIOB_PPDER)
struct __struct_PIOB_PPDER
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

#define PIOB_PPDSR	MMIO_REG(0x400e1098, uint32_t)
#define PIOB_PPDSR_P0	(1 << 0)
#define PIOB_PPDSR_P1	(1 << 1)
#define PIOB_PPDSR_P2	(1 << 2)
#define PIOB_PPDSR_P3	(1 << 3)
#define PIOB_PPDSR_P4	(1 << 4)
#define PIOB_PPDSR_P5	(1 << 5)
#define PIOB_PPDSR_P6	(1 << 6)
#define PIOB_PPDSR_P7	(1 << 7)
#define PIOB_PPDSR_P8	(1 << 8)
#define PIOB_PPDSR_P9	(1 << 9)
#define PIOB_PPDSR_P10	(1 << 10)
#define PIOB_PPDSR_P11	(1 << 11)
#define PIOB_PPDSR_P12	(1 << 12)
#define PIOB_PPDSR_P13	(1 << 13)
#define PIOB_PPDSR_P14	(1 << 14)
#define PIOB_PPDSR_P15	(1 << 15)
#define PIOB_PPDSR_P16	(1 << 16)
#define PIOB_PPDSR_P17	(1 << 17)
#define PIOB_PPDSR_P18	(1 << 18)
#define PIOB_PPDSR_P19	(1 << 19)
#define PIOB_PPDSR_P20	(1 << 20)
#define PIOB_PPDSR_P21	(1 << 21)
#define PIOB_PPDSR_P22	(1 << 22)
#define PIOB_PPDSR_P23	(1 << 23)
#define PIOB_PPDSR_P24	(1 << 24)
#define PIOB_PPDSR_P25	(1 << 25)
#define PIOB_PPDSR_P26	(1 << 26)
#define PIOB_PPDSR_P27	(1 << 27)
#define PIOB_PPDSR_P28	(1 << 28)
#define PIOB_PPDSR_P29	(1 << 29)
#define PIOB_PPDSR_P30	(1 << 30)
#define PIOB_PPDSR_P31	(1 << 31)

#define PIOB_PPDSR_s	MMIO_REG(0x400e1098, struct __struct_PIOB_PPDSR)
struct __struct_PIOB_PPDSR
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

#define PIOB_OWER	MMIO_REG(0x400e10a0, uint32_t)
#define PIOB_OWER_P0	(1 << 0)
#define PIOB_OWER_P1	(1 << 1)
#define PIOB_OWER_P2	(1 << 2)
#define PIOB_OWER_P3	(1 << 3)
#define PIOB_OWER_P4	(1 << 4)
#define PIOB_OWER_P5	(1 << 5)
#define PIOB_OWER_P6	(1 << 6)
#define PIOB_OWER_P7	(1 << 7)
#define PIOB_OWER_P8	(1 << 8)
#define PIOB_OWER_P9	(1 << 9)
#define PIOB_OWER_P10	(1 << 10)
#define PIOB_OWER_P11	(1 << 11)
#define PIOB_OWER_P12	(1 << 12)
#define PIOB_OWER_P13	(1 << 13)
#define PIOB_OWER_P14	(1 << 14)
#define PIOB_OWER_P15	(1 << 15)
#define PIOB_OWER_P16	(1 << 16)
#define PIOB_OWER_P17	(1 << 17)
#define PIOB_OWER_P18	(1 << 18)
#define PIOB_OWER_P19	(1 << 19)
#define PIOB_OWER_P20	(1 << 20)
#define PIOB_OWER_P21	(1 << 21)
#define PIOB_OWER_P22	(1 << 22)
#define PIOB_OWER_P23	(1 << 23)
#define PIOB_OWER_P24	(1 << 24)
#define PIOB_OWER_P25	(1 << 25)
#define PIOB_OWER_P26	(1 << 26)
#define PIOB_OWER_P27	(1 << 27)
#define PIOB_OWER_P28	(1 << 28)
#define PIOB_OWER_P29	(1 << 29)
#define PIOB_OWER_P30	(1 << 30)
#define PIOB_OWER_P31	(1 << 31)

#define PIOB_OWER_s	MMIO_REG(0x400e10a0, struct __struct_PIOB_OWER)
struct __struct_PIOB_OWER
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

#define PIOB_OWDR	MMIO_REG(0x400e10a4, uint32_t)
#define PIOB_OWDR_P0	(1 << 0)
#define PIOB_OWDR_P1	(1 << 1)
#define PIOB_OWDR_P2	(1 << 2)
#define PIOB_OWDR_P3	(1 << 3)
#define PIOB_OWDR_P4	(1 << 4)
#define PIOB_OWDR_P5	(1 << 5)
#define PIOB_OWDR_P6	(1 << 6)
#define PIOB_OWDR_P7	(1 << 7)
#define PIOB_OWDR_P8	(1 << 8)
#define PIOB_OWDR_P9	(1 << 9)
#define PIOB_OWDR_P10	(1 << 10)
#define PIOB_OWDR_P11	(1 << 11)
#define PIOB_OWDR_P12	(1 << 12)
#define PIOB_OWDR_P13	(1 << 13)
#define PIOB_OWDR_P14	(1 << 14)
#define PIOB_OWDR_P15	(1 << 15)
#define PIOB_OWDR_P16	(1 << 16)
#define PIOB_OWDR_P17	(1 << 17)
#define PIOB_OWDR_P18	(1 << 18)
#define PIOB_OWDR_P19	(1 << 19)
#define PIOB_OWDR_P20	(1 << 20)
#define PIOB_OWDR_P21	(1 << 21)
#define PIOB_OWDR_P22	(1 << 22)
#define PIOB_OWDR_P23	(1 << 23)
#define PIOB_OWDR_P24	(1 << 24)
#define PIOB_OWDR_P25	(1 << 25)
#define PIOB_OWDR_P26	(1 << 26)
#define PIOB_OWDR_P27	(1 << 27)
#define PIOB_OWDR_P28	(1 << 28)
#define PIOB_OWDR_P29	(1 << 29)
#define PIOB_OWDR_P30	(1 << 30)
#define PIOB_OWDR_P31	(1 << 31)

#define PIOB_OWDR_s	MMIO_REG(0x400e10a4, struct __struct_PIOB_OWDR)
struct __struct_PIOB_OWDR
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

#define PIOB_OWSR	MMIO_REG(0x400e10a8, uint32_t)
#define PIOB_OWSR_P0	(1 << 0)
#define PIOB_OWSR_P1	(1 << 1)
#define PIOB_OWSR_P2	(1 << 2)
#define PIOB_OWSR_P3	(1 << 3)
#define PIOB_OWSR_P4	(1 << 4)
#define PIOB_OWSR_P5	(1 << 5)
#define PIOB_OWSR_P6	(1 << 6)
#define PIOB_OWSR_P7	(1 << 7)
#define PIOB_OWSR_P8	(1 << 8)
#define PIOB_OWSR_P9	(1 << 9)
#define PIOB_OWSR_P10	(1 << 10)
#define PIOB_OWSR_P11	(1 << 11)
#define PIOB_OWSR_P12	(1 << 12)
#define PIOB_OWSR_P13	(1 << 13)
#define PIOB_OWSR_P14	(1 << 14)
#define PIOB_OWSR_P15	(1 << 15)
#define PIOB_OWSR_P16	(1 << 16)
#define PIOB_OWSR_P17	(1 << 17)
#define PIOB_OWSR_P18	(1 << 18)
#define PIOB_OWSR_P19	(1 << 19)
#define PIOB_OWSR_P20	(1 << 20)
#define PIOB_OWSR_P21	(1 << 21)
#define PIOB_OWSR_P22	(1 << 22)
#define PIOB_OWSR_P23	(1 << 23)
#define PIOB_OWSR_P24	(1 << 24)
#define PIOB_OWSR_P25	(1 << 25)
#define PIOB_OWSR_P26	(1 << 26)
#define PIOB_OWSR_P27	(1 << 27)
#define PIOB_OWSR_P28	(1 << 28)
#define PIOB_OWSR_P29	(1 << 29)
#define PIOB_OWSR_P30	(1 << 30)
#define PIOB_OWSR_P31	(1 << 31)

#define PIOB_OWSR_s	MMIO_REG(0x400e10a8, struct __struct_PIOB_OWSR)
struct __struct_PIOB_OWSR
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

#define PIOB_AIMER	MMIO_REG(0x400e10b0, uint32_t)
#define PIOB_AIMER_P0	(1 << 0)
#define PIOB_AIMER_P1	(1 << 1)
#define PIOB_AIMER_P2	(1 << 2)
#define PIOB_AIMER_P3	(1 << 3)
#define PIOB_AIMER_P4	(1 << 4)
#define PIOB_AIMER_P5	(1 << 5)
#define PIOB_AIMER_P6	(1 << 6)
#define PIOB_AIMER_P7	(1 << 7)
#define PIOB_AIMER_P8	(1 << 8)
#define PIOB_AIMER_P9	(1 << 9)
#define PIOB_AIMER_P10	(1 << 10)
#define PIOB_AIMER_P11	(1 << 11)
#define PIOB_AIMER_P12	(1 << 12)
#define PIOB_AIMER_P13	(1 << 13)
#define PIOB_AIMER_P14	(1 << 14)
#define PIOB_AIMER_P15	(1 << 15)
#define PIOB_AIMER_P16	(1 << 16)
#define PIOB_AIMER_P17	(1 << 17)
#define PIOB_AIMER_P18	(1 << 18)
#define PIOB_AIMER_P19	(1 << 19)
#define PIOB_AIMER_P20	(1 << 20)
#define PIOB_AIMER_P21	(1 << 21)
#define PIOB_AIMER_P22	(1 << 22)
#define PIOB_AIMER_P23	(1 << 23)
#define PIOB_AIMER_P24	(1 << 24)
#define PIOB_AIMER_P25	(1 << 25)
#define PIOB_AIMER_P26	(1 << 26)
#define PIOB_AIMER_P27	(1 << 27)
#define PIOB_AIMER_P28	(1 << 28)
#define PIOB_AIMER_P29	(1 << 29)
#define PIOB_AIMER_P30	(1 << 30)
#define PIOB_AIMER_P31	(1 << 31)

#define PIOB_AIMER_s	MMIO_REG(0x400e10b0, struct __struct_PIOB_AIMER)
struct __struct_PIOB_AIMER
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

#define PIOB_AIMDR	MMIO_REG(0x400e10b4, uint32_t)
#define PIOB_AIMDR_P0	(1 << 0)
#define PIOB_AIMDR_P1	(1 << 1)
#define PIOB_AIMDR_P2	(1 << 2)
#define PIOB_AIMDR_P3	(1 << 3)
#define PIOB_AIMDR_P4	(1 << 4)
#define PIOB_AIMDR_P5	(1 << 5)
#define PIOB_AIMDR_P6	(1 << 6)
#define PIOB_AIMDR_P7	(1 << 7)
#define PIOB_AIMDR_P8	(1 << 8)
#define PIOB_AIMDR_P9	(1 << 9)
#define PIOB_AIMDR_P10	(1 << 10)
#define PIOB_AIMDR_P11	(1 << 11)
#define PIOB_AIMDR_P12	(1 << 12)
#define PIOB_AIMDR_P13	(1 << 13)
#define PIOB_AIMDR_P14	(1 << 14)
#define PIOB_AIMDR_P15	(1 << 15)
#define PIOB_AIMDR_P16	(1 << 16)
#define PIOB_AIMDR_P17	(1 << 17)
#define PIOB_AIMDR_P18	(1 << 18)
#define PIOB_AIMDR_P19	(1 << 19)
#define PIOB_AIMDR_P20	(1 << 20)
#define PIOB_AIMDR_P21	(1 << 21)
#define PIOB_AIMDR_P22	(1 << 22)
#define PIOB_AIMDR_P23	(1 << 23)
#define PIOB_AIMDR_P24	(1 << 24)
#define PIOB_AIMDR_P25	(1 << 25)
#define PIOB_AIMDR_P26	(1 << 26)
#define PIOB_AIMDR_P27	(1 << 27)
#define PIOB_AIMDR_P28	(1 << 28)
#define PIOB_AIMDR_P29	(1 << 29)
#define PIOB_AIMDR_P30	(1 << 30)
#define PIOB_AIMDR_P31	(1 << 31)

#define PIOB_AIMDR_s	MMIO_REG(0x400e10b4, struct __struct_PIOB_AIMDR)
struct __struct_PIOB_AIMDR
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

#define PIOB_AIMMR	MMIO_REG(0x400e10b8, uint32_t)
#define PIOB_AIMMR_P0	(1 << 0)
#define PIOB_AIMMR_P1	(1 << 1)
#define PIOB_AIMMR_P2	(1 << 2)
#define PIOB_AIMMR_P3	(1 << 3)
#define PIOB_AIMMR_P4	(1 << 4)
#define PIOB_AIMMR_P5	(1 << 5)
#define PIOB_AIMMR_P6	(1 << 6)
#define PIOB_AIMMR_P7	(1 << 7)
#define PIOB_AIMMR_P8	(1 << 8)
#define PIOB_AIMMR_P9	(1 << 9)
#define PIOB_AIMMR_P10	(1 << 10)
#define PIOB_AIMMR_P11	(1 << 11)
#define PIOB_AIMMR_P12	(1 << 12)
#define PIOB_AIMMR_P13	(1 << 13)
#define PIOB_AIMMR_P14	(1 << 14)
#define PIOB_AIMMR_P15	(1 << 15)
#define PIOB_AIMMR_P16	(1 << 16)
#define PIOB_AIMMR_P17	(1 << 17)
#define PIOB_AIMMR_P18	(1 << 18)
#define PIOB_AIMMR_P19	(1 << 19)
#define PIOB_AIMMR_P20	(1 << 20)
#define PIOB_AIMMR_P21	(1 << 21)
#define PIOB_AIMMR_P22	(1 << 22)
#define PIOB_AIMMR_P23	(1 << 23)
#define PIOB_AIMMR_P24	(1 << 24)
#define PIOB_AIMMR_P25	(1 << 25)
#define PIOB_AIMMR_P26	(1 << 26)
#define PIOB_AIMMR_P27	(1 << 27)
#define PIOB_AIMMR_P28	(1 << 28)
#define PIOB_AIMMR_P29	(1 << 29)
#define PIOB_AIMMR_P30	(1 << 30)
#define PIOB_AIMMR_P31	(1 << 31)

#define PIOB_AIMMR_s	MMIO_REG(0x400e10b8, struct __struct_PIOB_AIMMR)
struct __struct_PIOB_AIMMR
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

#define PIOB_ESR	MMIO_REG(0x400e10c0, uint32_t)
#define PIOB_ESR_P0	(1 << 0)
#define PIOB_ESR_P1	(1 << 1)
#define PIOB_ESR_P2	(1 << 2)
#define PIOB_ESR_P3	(1 << 3)
#define PIOB_ESR_P4	(1 << 4)
#define PIOB_ESR_P5	(1 << 5)
#define PIOB_ESR_P6	(1 << 6)
#define PIOB_ESR_P7	(1 << 7)
#define PIOB_ESR_P8	(1 << 8)
#define PIOB_ESR_P9	(1 << 9)
#define PIOB_ESR_P10	(1 << 10)
#define PIOB_ESR_P11	(1 << 11)
#define PIOB_ESR_P12	(1 << 12)
#define PIOB_ESR_P13	(1 << 13)
#define PIOB_ESR_P14	(1 << 14)
#define PIOB_ESR_P15	(1 << 15)
#define PIOB_ESR_P16	(1 << 16)
#define PIOB_ESR_P17	(1 << 17)
#define PIOB_ESR_P18	(1 << 18)
#define PIOB_ESR_P19	(1 << 19)
#define PIOB_ESR_P20	(1 << 20)
#define PIOB_ESR_P21	(1 << 21)
#define PIOB_ESR_P22	(1 << 22)
#define PIOB_ESR_P23	(1 << 23)
#define PIOB_ESR_P24	(1 << 24)
#define PIOB_ESR_P25	(1 << 25)
#define PIOB_ESR_P26	(1 << 26)
#define PIOB_ESR_P27	(1 << 27)
#define PIOB_ESR_P28	(1 << 28)
#define PIOB_ESR_P29	(1 << 29)
#define PIOB_ESR_P30	(1 << 30)
#define PIOB_ESR_P31	(1 << 31)

#define PIOB_ESR_s	MMIO_REG(0x400e10c0, struct __struct_PIOB_ESR)
struct __struct_PIOB_ESR
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

#define PIOB_LSR	MMIO_REG(0x400e10c4, uint32_t)
#define PIOB_LSR_P0	(1 << 0)
#define PIOB_LSR_P1	(1 << 1)
#define PIOB_LSR_P2	(1 << 2)
#define PIOB_LSR_P3	(1 << 3)
#define PIOB_LSR_P4	(1 << 4)
#define PIOB_LSR_P5	(1 << 5)
#define PIOB_LSR_P6	(1 << 6)
#define PIOB_LSR_P7	(1 << 7)
#define PIOB_LSR_P8	(1 << 8)
#define PIOB_LSR_P9	(1 << 9)
#define PIOB_LSR_P10	(1 << 10)
#define PIOB_LSR_P11	(1 << 11)
#define PIOB_LSR_P12	(1 << 12)
#define PIOB_LSR_P13	(1 << 13)
#define PIOB_LSR_P14	(1 << 14)
#define PIOB_LSR_P15	(1 << 15)
#define PIOB_LSR_P16	(1 << 16)
#define PIOB_LSR_P17	(1 << 17)
#define PIOB_LSR_P18	(1 << 18)
#define PIOB_LSR_P19	(1 << 19)
#define PIOB_LSR_P20	(1 << 20)
#define PIOB_LSR_P21	(1 << 21)
#define PIOB_LSR_P22	(1 << 22)
#define PIOB_LSR_P23	(1 << 23)
#define PIOB_LSR_P24	(1 << 24)
#define PIOB_LSR_P25	(1 << 25)
#define PIOB_LSR_P26	(1 << 26)
#define PIOB_LSR_P27	(1 << 27)
#define PIOB_LSR_P28	(1 << 28)
#define PIOB_LSR_P29	(1 << 29)
#define PIOB_LSR_P30	(1 << 30)
#define PIOB_LSR_P31	(1 << 31)

#define PIOB_LSR_s	MMIO_REG(0x400e10c4, struct __struct_PIOB_LSR)
struct __struct_PIOB_LSR
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

#define PIOB_ELSR	MMIO_REG(0x400e10c8, uint32_t)
#define PIOB_ELSR_P0	(1 << 0)
#define PIOB_ELSR_P1	(1 << 1)
#define PIOB_ELSR_P2	(1 << 2)
#define PIOB_ELSR_P3	(1 << 3)
#define PIOB_ELSR_P4	(1 << 4)
#define PIOB_ELSR_P5	(1 << 5)
#define PIOB_ELSR_P6	(1 << 6)
#define PIOB_ELSR_P7	(1 << 7)
#define PIOB_ELSR_P8	(1 << 8)
#define PIOB_ELSR_P9	(1 << 9)
#define PIOB_ELSR_P10	(1 << 10)
#define PIOB_ELSR_P11	(1 << 11)
#define PIOB_ELSR_P12	(1 << 12)
#define PIOB_ELSR_P13	(1 << 13)
#define PIOB_ELSR_P14	(1 << 14)
#define PIOB_ELSR_P15	(1 << 15)
#define PIOB_ELSR_P16	(1 << 16)
#define PIOB_ELSR_P17	(1 << 17)
#define PIOB_ELSR_P18	(1 << 18)
#define PIOB_ELSR_P19	(1 << 19)
#define PIOB_ELSR_P20	(1 << 20)
#define PIOB_ELSR_P21	(1 << 21)
#define PIOB_ELSR_P22	(1 << 22)
#define PIOB_ELSR_P23	(1 << 23)
#define PIOB_ELSR_P24	(1 << 24)
#define PIOB_ELSR_P25	(1 << 25)
#define PIOB_ELSR_P26	(1 << 26)
#define PIOB_ELSR_P27	(1 << 27)
#define PIOB_ELSR_P28	(1 << 28)
#define PIOB_ELSR_P29	(1 << 29)
#define PIOB_ELSR_P30	(1 << 30)
#define PIOB_ELSR_P31	(1 << 31)

#define PIOB_ELSR_s	MMIO_REG(0x400e10c8, struct __struct_PIOB_ELSR)
struct __struct_PIOB_ELSR
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

#define PIOB_FELLSR	MMIO_REG(0x400e10d0, uint32_t)
#define PIOB_FELLSR_P0	(1 << 0)
#define PIOB_FELLSR_P1	(1 << 1)
#define PIOB_FELLSR_P2	(1 << 2)
#define PIOB_FELLSR_P3	(1 << 3)
#define PIOB_FELLSR_P4	(1 << 4)
#define PIOB_FELLSR_P5	(1 << 5)
#define PIOB_FELLSR_P6	(1 << 6)
#define PIOB_FELLSR_P7	(1 << 7)
#define PIOB_FELLSR_P8	(1 << 8)
#define PIOB_FELLSR_P9	(1 << 9)
#define PIOB_FELLSR_P10	(1 << 10)
#define PIOB_FELLSR_P11	(1 << 11)
#define PIOB_FELLSR_P12	(1 << 12)
#define PIOB_FELLSR_P13	(1 << 13)
#define PIOB_FELLSR_P14	(1 << 14)
#define PIOB_FELLSR_P15	(1 << 15)
#define PIOB_FELLSR_P16	(1 << 16)
#define PIOB_FELLSR_P17	(1 << 17)
#define PIOB_FELLSR_P18	(1 << 18)
#define PIOB_FELLSR_P19	(1 << 19)
#define PIOB_FELLSR_P20	(1 << 20)
#define PIOB_FELLSR_P21	(1 << 21)
#define PIOB_FELLSR_P22	(1 << 22)
#define PIOB_FELLSR_P23	(1 << 23)
#define PIOB_FELLSR_P24	(1 << 24)
#define PIOB_FELLSR_P25	(1 << 25)
#define PIOB_FELLSR_P26	(1 << 26)
#define PIOB_FELLSR_P27	(1 << 27)
#define PIOB_FELLSR_P28	(1 << 28)
#define PIOB_FELLSR_P29	(1 << 29)
#define PIOB_FELLSR_P30	(1 << 30)
#define PIOB_FELLSR_P31	(1 << 31)

#define PIOB_FELLSR_s	MMIO_REG(0x400e10d0, struct __struct_PIOB_FELLSR)
struct __struct_PIOB_FELLSR
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

#define PIOB_REHLSR	MMIO_REG(0x400e10d4, uint32_t)
#define PIOB_REHLSR_P0	(1 << 0)
#define PIOB_REHLSR_P1	(1 << 1)
#define PIOB_REHLSR_P2	(1 << 2)
#define PIOB_REHLSR_P3	(1 << 3)
#define PIOB_REHLSR_P4	(1 << 4)
#define PIOB_REHLSR_P5	(1 << 5)
#define PIOB_REHLSR_P6	(1 << 6)
#define PIOB_REHLSR_P7	(1 << 7)
#define PIOB_REHLSR_P8	(1 << 8)
#define PIOB_REHLSR_P9	(1 << 9)
#define PIOB_REHLSR_P10	(1 << 10)
#define PIOB_REHLSR_P11	(1 << 11)
#define PIOB_REHLSR_P12	(1 << 12)
#define PIOB_REHLSR_P13	(1 << 13)
#define PIOB_REHLSR_P14	(1 << 14)
#define PIOB_REHLSR_P15	(1 << 15)
#define PIOB_REHLSR_P16	(1 << 16)
#define PIOB_REHLSR_P17	(1 << 17)
#define PIOB_REHLSR_P18	(1 << 18)
#define PIOB_REHLSR_P19	(1 << 19)
#define PIOB_REHLSR_P20	(1 << 20)
#define PIOB_REHLSR_P21	(1 << 21)
#define PIOB_REHLSR_P22	(1 << 22)
#define PIOB_REHLSR_P23	(1 << 23)
#define PIOB_REHLSR_P24	(1 << 24)
#define PIOB_REHLSR_P25	(1 << 25)
#define PIOB_REHLSR_P26	(1 << 26)
#define PIOB_REHLSR_P27	(1 << 27)
#define PIOB_REHLSR_P28	(1 << 28)
#define PIOB_REHLSR_P29	(1 << 29)
#define PIOB_REHLSR_P30	(1 << 30)
#define PIOB_REHLSR_P31	(1 << 31)

#define PIOB_REHLSR_s	MMIO_REG(0x400e10d4, struct __struct_PIOB_REHLSR)
struct __struct_PIOB_REHLSR
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

#define PIOB_FRLHSR	MMIO_REG(0x400e10d8, uint32_t)
#define PIOB_FRLHSR_P0	(1 << 0)
#define PIOB_FRLHSR_P1	(1 << 1)
#define PIOB_FRLHSR_P2	(1 << 2)
#define PIOB_FRLHSR_P3	(1 << 3)
#define PIOB_FRLHSR_P4	(1 << 4)
#define PIOB_FRLHSR_P5	(1 << 5)
#define PIOB_FRLHSR_P6	(1 << 6)
#define PIOB_FRLHSR_P7	(1 << 7)
#define PIOB_FRLHSR_P8	(1 << 8)
#define PIOB_FRLHSR_P9	(1 << 9)
#define PIOB_FRLHSR_P10	(1 << 10)
#define PIOB_FRLHSR_P11	(1 << 11)
#define PIOB_FRLHSR_P12	(1 << 12)
#define PIOB_FRLHSR_P13	(1 << 13)
#define PIOB_FRLHSR_P14	(1 << 14)
#define PIOB_FRLHSR_P15	(1 << 15)
#define PIOB_FRLHSR_P16	(1 << 16)
#define PIOB_FRLHSR_P17	(1 << 17)
#define PIOB_FRLHSR_P18	(1 << 18)
#define PIOB_FRLHSR_P19	(1 << 19)
#define PIOB_FRLHSR_P20	(1 << 20)
#define PIOB_FRLHSR_P21	(1 << 21)
#define PIOB_FRLHSR_P22	(1 << 22)
#define PIOB_FRLHSR_P23	(1 << 23)
#define PIOB_FRLHSR_P24	(1 << 24)
#define PIOB_FRLHSR_P25	(1 << 25)
#define PIOB_FRLHSR_P26	(1 << 26)
#define PIOB_FRLHSR_P27	(1 << 27)
#define PIOB_FRLHSR_P28	(1 << 28)
#define PIOB_FRLHSR_P29	(1 << 29)
#define PIOB_FRLHSR_P30	(1 << 30)
#define PIOB_FRLHSR_P31	(1 << 31)

#define PIOB_FRLHSR_s	MMIO_REG(0x400e10d8, struct __struct_PIOB_FRLHSR)
struct __struct_PIOB_FRLHSR
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

#define PIOB_LOCKSR	MMIO_REG(0x400e10e0, uint32_t)
#define PIOB_LOCKSR_P0	(1 << 0)
#define PIOB_LOCKSR_P1	(1 << 1)
#define PIOB_LOCKSR_P2	(1 << 2)
#define PIOB_LOCKSR_P3	(1 << 3)
#define PIOB_LOCKSR_P4	(1 << 4)
#define PIOB_LOCKSR_P5	(1 << 5)
#define PIOB_LOCKSR_P6	(1 << 6)
#define PIOB_LOCKSR_P7	(1 << 7)
#define PIOB_LOCKSR_P8	(1 << 8)
#define PIOB_LOCKSR_P9	(1 << 9)
#define PIOB_LOCKSR_P10	(1 << 10)
#define PIOB_LOCKSR_P11	(1 << 11)
#define PIOB_LOCKSR_P12	(1 << 12)
#define PIOB_LOCKSR_P13	(1 << 13)
#define PIOB_LOCKSR_P14	(1 << 14)
#define PIOB_LOCKSR_P15	(1 << 15)
#define PIOB_LOCKSR_P16	(1 << 16)
#define PIOB_LOCKSR_P17	(1 << 17)
#define PIOB_LOCKSR_P18	(1 << 18)
#define PIOB_LOCKSR_P19	(1 << 19)
#define PIOB_LOCKSR_P20	(1 << 20)
#define PIOB_LOCKSR_P21	(1 << 21)
#define PIOB_LOCKSR_P22	(1 << 22)
#define PIOB_LOCKSR_P23	(1 << 23)
#define PIOB_LOCKSR_P24	(1 << 24)
#define PIOB_LOCKSR_P25	(1 << 25)
#define PIOB_LOCKSR_P26	(1 << 26)
#define PIOB_LOCKSR_P27	(1 << 27)
#define PIOB_LOCKSR_P28	(1 << 28)
#define PIOB_LOCKSR_P29	(1 << 29)
#define PIOB_LOCKSR_P30	(1 << 30)
#define PIOB_LOCKSR_P31	(1 << 31)

#define PIOB_LOCKSR_s	MMIO_REG(0x400e10e0, struct __struct_PIOB_LOCKSR)
struct __struct_PIOB_LOCKSR
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

#define PIOB_WPMR	MMIO_REG(0x400e10e4, uint32_t)
#define PIOB_WPMR_WPEN	(1 << 0)
#define PIOB_WPMR_WPKEY(x)	((x) << 8)
#define PIOB_WPMR_WPKEY_MSK	0xffffff00
#define PIOB_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define PIOB_WPMR_s	MMIO_REG(0x400e10e4, struct __struct_PIOB_WPMR)
struct __struct_PIOB_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define PIOB_WPSR	MMIO_REG(0x400e10e8, uint32_t)
#define PIOB_WPSR_WPVS	(1 << 0)
#define PIOB_WPSR_WPVSRC(x)	((x) << 8)
#define PIOB_WPSR_WPVSRC_MSK	0x00ffff00
#define PIOB_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define PIOB_WPSR_s	MMIO_REG(0x400e10e8, struct __struct_PIOB_WPSR)
struct __struct_PIOB_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

#define PIOB_SCHMITT	MMIO_REG(0x400e1100, uint32_t)
#define PIOB_SCHMITT_P0	(1 << 0)
#define PIOB_SCHMITT_P1	(1 << 1)
#define PIOB_SCHMITT_P2	(1 << 2)
#define PIOB_SCHMITT_P3	(1 << 3)
#define PIOB_SCHMITT_P4	(1 << 4)
#define PIOB_SCHMITT_P5	(1 << 5)
#define PIOB_SCHMITT_P6	(1 << 6)
#define PIOB_SCHMITT_P7	(1 << 7)
#define PIOB_SCHMITT_P8	(1 << 8)
#define PIOB_SCHMITT_P9	(1 << 9)
#define PIOB_SCHMITT_P10	(1 << 10)
#define PIOB_SCHMITT_P11	(1 << 11)
#define PIOB_SCHMITT_P12	(1 << 12)
#define PIOB_SCHMITT_P13	(1 << 13)
#define PIOB_SCHMITT_P14	(1 << 14)
#define PIOB_SCHMITT_P15	(1 << 15)
#define PIOB_SCHMITT_P16	(1 << 16)
#define PIOB_SCHMITT_P17	(1 << 17)
#define PIOB_SCHMITT_P18	(1 << 18)
#define PIOB_SCHMITT_P19	(1 << 19)
#define PIOB_SCHMITT_P20	(1 << 20)
#define PIOB_SCHMITT_P21	(1 << 21)
#define PIOB_SCHMITT_P22	(1 << 22)
#define PIOB_SCHMITT_P23	(1 << 23)
#define PIOB_SCHMITT_P24	(1 << 24)
#define PIOB_SCHMITT_P25	(1 << 25)
#define PIOB_SCHMITT_P26	(1 << 26)
#define PIOB_SCHMITT_P27	(1 << 27)
#define PIOB_SCHMITT_P28	(1 << 28)
#define PIOB_SCHMITT_P29	(1 << 29)
#define PIOB_SCHMITT_P30	(1 << 30)
#define PIOB_SCHMITT_P31	(1 << 31)

#define PIOB_SCHMITT_s	MMIO_REG(0x400e1100, struct __struct_PIOB_SCHMITT)
struct __struct_PIOB_SCHMITT
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

#define PIOB_PCMR	MMIO_REG(0x400e1150, uint32_t)
#define PIOB_PCMR_PCEN	(1 << 0)
#define PIOB_PCMR_DSIZE(x)	((x) << 4)
#define PIOB_PCMR_DSIZE_MSK	0x00000030
#define PIOB_PCMR_DSIZE_VAL(x)	(((x) >> 4) & 0x3)
#define PIOB_PCMR_ALWYS	(1 << 9)
#define PIOB_PCMR_HALFS	(1 << 10)
#define PIOB_PCMR_FRSTS	(1 << 11)

#define PIOB_PCMR_s	MMIO_REG(0x400e1150, struct __struct_PIOB_PCMR)
struct __struct_PIOB_PCMR
{
  uint32_t pcen : 1;
  uint32_t  : 3;
  uint32_t dsize : 2;
  uint32_t  : 3;
  uint32_t alwys : 1;
  uint32_t halfs : 1;
  uint32_t frsts : 1;
  uint32_t  : 20;
};

#define PIOB_PCIER	MMIO_REG(0x400e1154, uint32_t)
#define PIOB_PCIER_DRDY	(1 << 0)
#define PIOB_PCIER_OVRE	(1 << 1)
#define PIOB_PCIER_ENDRX	(1 << 2)
#define PIOB_PCIER_RXBUFF	(1 << 3)

#define PIOB_PCIER_s	MMIO_REG(0x400e1154, struct __struct_PIOB_PCIER)
struct __struct_PIOB_PCIER
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOB_PCIDR	MMIO_REG(0x400e1158, uint32_t)
#define PIOB_PCIDR_DRDY	(1 << 0)
#define PIOB_PCIDR_OVRE	(1 << 1)
#define PIOB_PCIDR_ENDRX	(1 << 2)
#define PIOB_PCIDR_RXBUFF	(1 << 3)

#define PIOB_PCIDR_s	MMIO_REG(0x400e1158, struct __struct_PIOB_PCIDR)
struct __struct_PIOB_PCIDR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOB_PCIMR	MMIO_REG(0x400e115c, uint32_t)
#define PIOB_PCIMR_DRDY	(1 << 0)
#define PIOB_PCIMR_OVRE	(1 << 1)
#define PIOB_PCIMR_ENDRX	(1 << 2)
#define PIOB_PCIMR_RXBUFF	(1 << 3)

#define PIOB_PCIMR_s	MMIO_REG(0x400e115c, struct __struct_PIOB_PCIMR)
struct __struct_PIOB_PCIMR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOB_PCISR	MMIO_REG(0x400e1160, uint32_t)
#define PIOB_PCISR_DRDY	(1 << 0)
#define PIOB_PCISR_OVRE	(1 << 1)
#define PIOB_PCISR_ENDRX	(1 << 2)
#define PIOB_PCISR_RXBUFF	(1 << 3)

#define PIOB_PCISR_s	MMIO_REG(0x400e1160, struct __struct_PIOB_PCISR)
struct __struct_PIOB_PCISR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOB_PCRHR	MMIO_REG(0x400e1164, uint32_t)

// 0x400e1200 PIOC

#define PIOC_PER	MMIO_REG(0x400e1200, uint32_t)
#define PIOC_PER_P0	(1 << 0)
#define PIOC_PER_P1	(1 << 1)
#define PIOC_PER_P2	(1 << 2)
#define PIOC_PER_P3	(1 << 3)
#define PIOC_PER_P4	(1 << 4)
#define PIOC_PER_P5	(1 << 5)
#define PIOC_PER_P6	(1 << 6)
#define PIOC_PER_P7	(1 << 7)
#define PIOC_PER_P8	(1 << 8)
#define PIOC_PER_P9	(1 << 9)
#define PIOC_PER_P10	(1 << 10)
#define PIOC_PER_P11	(1 << 11)
#define PIOC_PER_P12	(1 << 12)
#define PIOC_PER_P13	(1 << 13)
#define PIOC_PER_P14	(1 << 14)
#define PIOC_PER_P15	(1 << 15)
#define PIOC_PER_P16	(1 << 16)
#define PIOC_PER_P17	(1 << 17)
#define PIOC_PER_P18	(1 << 18)
#define PIOC_PER_P19	(1 << 19)
#define PIOC_PER_P20	(1 << 20)
#define PIOC_PER_P21	(1 << 21)
#define PIOC_PER_P22	(1 << 22)
#define PIOC_PER_P23	(1 << 23)
#define PIOC_PER_P24	(1 << 24)
#define PIOC_PER_P25	(1 << 25)
#define PIOC_PER_P26	(1 << 26)
#define PIOC_PER_P27	(1 << 27)
#define PIOC_PER_P28	(1 << 28)
#define PIOC_PER_P29	(1 << 29)
#define PIOC_PER_P30	(1 << 30)
#define PIOC_PER_P31	(1 << 31)

#define PIOC_PER_s	MMIO_REG(0x400e1200, struct __struct_PIOC_PER)
struct __struct_PIOC_PER
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

#define PIOC_PDR	MMIO_REG(0x400e1204, uint32_t)
#define PIOC_PDR_P0	(1 << 0)
#define PIOC_PDR_P1	(1 << 1)
#define PIOC_PDR_P2	(1 << 2)
#define PIOC_PDR_P3	(1 << 3)
#define PIOC_PDR_P4	(1 << 4)
#define PIOC_PDR_P5	(1 << 5)
#define PIOC_PDR_P6	(1 << 6)
#define PIOC_PDR_P7	(1 << 7)
#define PIOC_PDR_P8	(1 << 8)
#define PIOC_PDR_P9	(1 << 9)
#define PIOC_PDR_P10	(1 << 10)
#define PIOC_PDR_P11	(1 << 11)
#define PIOC_PDR_P12	(1 << 12)
#define PIOC_PDR_P13	(1 << 13)
#define PIOC_PDR_P14	(1 << 14)
#define PIOC_PDR_P15	(1 << 15)
#define PIOC_PDR_P16	(1 << 16)
#define PIOC_PDR_P17	(1 << 17)
#define PIOC_PDR_P18	(1 << 18)
#define PIOC_PDR_P19	(1 << 19)
#define PIOC_PDR_P20	(1 << 20)
#define PIOC_PDR_P21	(1 << 21)
#define PIOC_PDR_P22	(1 << 22)
#define PIOC_PDR_P23	(1 << 23)
#define PIOC_PDR_P24	(1 << 24)
#define PIOC_PDR_P25	(1 << 25)
#define PIOC_PDR_P26	(1 << 26)
#define PIOC_PDR_P27	(1 << 27)
#define PIOC_PDR_P28	(1 << 28)
#define PIOC_PDR_P29	(1 << 29)
#define PIOC_PDR_P30	(1 << 30)
#define PIOC_PDR_P31	(1 << 31)

#define PIOC_PDR_s	MMIO_REG(0x400e1204, struct __struct_PIOC_PDR)
struct __struct_PIOC_PDR
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

#define PIOC_PSR	MMIO_REG(0x400e1208, uint32_t)
#define PIOC_PSR_P0	(1 << 0)
#define PIOC_PSR_P1	(1 << 1)
#define PIOC_PSR_P2	(1 << 2)
#define PIOC_PSR_P3	(1 << 3)
#define PIOC_PSR_P4	(1 << 4)
#define PIOC_PSR_P5	(1 << 5)
#define PIOC_PSR_P6	(1 << 6)
#define PIOC_PSR_P7	(1 << 7)
#define PIOC_PSR_P8	(1 << 8)
#define PIOC_PSR_P9	(1 << 9)
#define PIOC_PSR_P10	(1 << 10)
#define PIOC_PSR_P11	(1 << 11)
#define PIOC_PSR_P12	(1 << 12)
#define PIOC_PSR_P13	(1 << 13)
#define PIOC_PSR_P14	(1 << 14)
#define PIOC_PSR_P15	(1 << 15)
#define PIOC_PSR_P16	(1 << 16)
#define PIOC_PSR_P17	(1 << 17)
#define PIOC_PSR_P18	(1 << 18)
#define PIOC_PSR_P19	(1 << 19)
#define PIOC_PSR_P20	(1 << 20)
#define PIOC_PSR_P21	(1 << 21)
#define PIOC_PSR_P22	(1 << 22)
#define PIOC_PSR_P23	(1 << 23)
#define PIOC_PSR_P24	(1 << 24)
#define PIOC_PSR_P25	(1 << 25)
#define PIOC_PSR_P26	(1 << 26)
#define PIOC_PSR_P27	(1 << 27)
#define PIOC_PSR_P28	(1 << 28)
#define PIOC_PSR_P29	(1 << 29)
#define PIOC_PSR_P30	(1 << 30)
#define PIOC_PSR_P31	(1 << 31)

#define PIOC_PSR_s	MMIO_REG(0x400e1208, struct __struct_PIOC_PSR)
struct __struct_PIOC_PSR
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

#define PIOC_OER	MMIO_REG(0x400e1210, uint32_t)
#define PIOC_OER_P0	(1 << 0)
#define PIOC_OER_P1	(1 << 1)
#define PIOC_OER_P2	(1 << 2)
#define PIOC_OER_P3	(1 << 3)
#define PIOC_OER_P4	(1 << 4)
#define PIOC_OER_P5	(1 << 5)
#define PIOC_OER_P6	(1 << 6)
#define PIOC_OER_P7	(1 << 7)
#define PIOC_OER_P8	(1 << 8)
#define PIOC_OER_P9	(1 << 9)
#define PIOC_OER_P10	(1 << 10)
#define PIOC_OER_P11	(1 << 11)
#define PIOC_OER_P12	(1 << 12)
#define PIOC_OER_P13	(1 << 13)
#define PIOC_OER_P14	(1 << 14)
#define PIOC_OER_P15	(1 << 15)
#define PIOC_OER_P16	(1 << 16)
#define PIOC_OER_P17	(1 << 17)
#define PIOC_OER_P18	(1 << 18)
#define PIOC_OER_P19	(1 << 19)
#define PIOC_OER_P20	(1 << 20)
#define PIOC_OER_P21	(1 << 21)
#define PIOC_OER_P22	(1 << 22)
#define PIOC_OER_P23	(1 << 23)
#define PIOC_OER_P24	(1 << 24)
#define PIOC_OER_P25	(1 << 25)
#define PIOC_OER_P26	(1 << 26)
#define PIOC_OER_P27	(1 << 27)
#define PIOC_OER_P28	(1 << 28)
#define PIOC_OER_P29	(1 << 29)
#define PIOC_OER_P30	(1 << 30)
#define PIOC_OER_P31	(1 << 31)

#define PIOC_OER_s	MMIO_REG(0x400e1210, struct __struct_PIOC_OER)
struct __struct_PIOC_OER
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

#define PIOC_ODR	MMIO_REG(0x400e1214, uint32_t)
#define PIOC_ODR_P0	(1 << 0)
#define PIOC_ODR_P1	(1 << 1)
#define PIOC_ODR_P2	(1 << 2)
#define PIOC_ODR_P3	(1 << 3)
#define PIOC_ODR_P4	(1 << 4)
#define PIOC_ODR_P5	(1 << 5)
#define PIOC_ODR_P6	(1 << 6)
#define PIOC_ODR_P7	(1 << 7)
#define PIOC_ODR_P8	(1 << 8)
#define PIOC_ODR_P9	(1 << 9)
#define PIOC_ODR_P10	(1 << 10)
#define PIOC_ODR_P11	(1 << 11)
#define PIOC_ODR_P12	(1 << 12)
#define PIOC_ODR_P13	(1 << 13)
#define PIOC_ODR_P14	(1 << 14)
#define PIOC_ODR_P15	(1 << 15)
#define PIOC_ODR_P16	(1 << 16)
#define PIOC_ODR_P17	(1 << 17)
#define PIOC_ODR_P18	(1 << 18)
#define PIOC_ODR_P19	(1 << 19)
#define PIOC_ODR_P20	(1 << 20)
#define PIOC_ODR_P21	(1 << 21)
#define PIOC_ODR_P22	(1 << 22)
#define PIOC_ODR_P23	(1 << 23)
#define PIOC_ODR_P24	(1 << 24)
#define PIOC_ODR_P25	(1 << 25)
#define PIOC_ODR_P26	(1 << 26)
#define PIOC_ODR_P27	(1 << 27)
#define PIOC_ODR_P28	(1 << 28)
#define PIOC_ODR_P29	(1 << 29)
#define PIOC_ODR_P30	(1 << 30)
#define PIOC_ODR_P31	(1 << 31)

#define PIOC_ODR_s	MMIO_REG(0x400e1214, struct __struct_PIOC_ODR)
struct __struct_PIOC_ODR
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

#define PIOC_OSR	MMIO_REG(0x400e1218, uint32_t)
#define PIOC_OSR_P0	(1 << 0)
#define PIOC_OSR_P1	(1 << 1)
#define PIOC_OSR_P2	(1 << 2)
#define PIOC_OSR_P3	(1 << 3)
#define PIOC_OSR_P4	(1 << 4)
#define PIOC_OSR_P5	(1 << 5)
#define PIOC_OSR_P6	(1 << 6)
#define PIOC_OSR_P7	(1 << 7)
#define PIOC_OSR_P8	(1 << 8)
#define PIOC_OSR_P9	(1 << 9)
#define PIOC_OSR_P10	(1 << 10)
#define PIOC_OSR_P11	(1 << 11)
#define PIOC_OSR_P12	(1 << 12)
#define PIOC_OSR_P13	(1 << 13)
#define PIOC_OSR_P14	(1 << 14)
#define PIOC_OSR_P15	(1 << 15)
#define PIOC_OSR_P16	(1 << 16)
#define PIOC_OSR_P17	(1 << 17)
#define PIOC_OSR_P18	(1 << 18)
#define PIOC_OSR_P19	(1 << 19)
#define PIOC_OSR_P20	(1 << 20)
#define PIOC_OSR_P21	(1 << 21)
#define PIOC_OSR_P22	(1 << 22)
#define PIOC_OSR_P23	(1 << 23)
#define PIOC_OSR_P24	(1 << 24)
#define PIOC_OSR_P25	(1 << 25)
#define PIOC_OSR_P26	(1 << 26)
#define PIOC_OSR_P27	(1 << 27)
#define PIOC_OSR_P28	(1 << 28)
#define PIOC_OSR_P29	(1 << 29)
#define PIOC_OSR_P30	(1 << 30)
#define PIOC_OSR_P31	(1 << 31)

#define PIOC_OSR_s	MMIO_REG(0x400e1218, struct __struct_PIOC_OSR)
struct __struct_PIOC_OSR
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

#define PIOC_IFER	MMIO_REG(0x400e1220, uint32_t)
#define PIOC_IFER_P0	(1 << 0)
#define PIOC_IFER_P1	(1 << 1)
#define PIOC_IFER_P2	(1 << 2)
#define PIOC_IFER_P3	(1 << 3)
#define PIOC_IFER_P4	(1 << 4)
#define PIOC_IFER_P5	(1 << 5)
#define PIOC_IFER_P6	(1 << 6)
#define PIOC_IFER_P7	(1 << 7)
#define PIOC_IFER_P8	(1 << 8)
#define PIOC_IFER_P9	(1 << 9)
#define PIOC_IFER_P10	(1 << 10)
#define PIOC_IFER_P11	(1 << 11)
#define PIOC_IFER_P12	(1 << 12)
#define PIOC_IFER_P13	(1 << 13)
#define PIOC_IFER_P14	(1 << 14)
#define PIOC_IFER_P15	(1 << 15)
#define PIOC_IFER_P16	(1 << 16)
#define PIOC_IFER_P17	(1 << 17)
#define PIOC_IFER_P18	(1 << 18)
#define PIOC_IFER_P19	(1 << 19)
#define PIOC_IFER_P20	(1 << 20)
#define PIOC_IFER_P21	(1 << 21)
#define PIOC_IFER_P22	(1 << 22)
#define PIOC_IFER_P23	(1 << 23)
#define PIOC_IFER_P24	(1 << 24)
#define PIOC_IFER_P25	(1 << 25)
#define PIOC_IFER_P26	(1 << 26)
#define PIOC_IFER_P27	(1 << 27)
#define PIOC_IFER_P28	(1 << 28)
#define PIOC_IFER_P29	(1 << 29)
#define PIOC_IFER_P30	(1 << 30)
#define PIOC_IFER_P31	(1 << 31)

#define PIOC_IFER_s	MMIO_REG(0x400e1220, struct __struct_PIOC_IFER)
struct __struct_PIOC_IFER
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

#define PIOC_IFDR	MMIO_REG(0x400e1224, uint32_t)
#define PIOC_IFDR_P0	(1 << 0)
#define PIOC_IFDR_P1	(1 << 1)
#define PIOC_IFDR_P2	(1 << 2)
#define PIOC_IFDR_P3	(1 << 3)
#define PIOC_IFDR_P4	(1 << 4)
#define PIOC_IFDR_P5	(1 << 5)
#define PIOC_IFDR_P6	(1 << 6)
#define PIOC_IFDR_P7	(1 << 7)
#define PIOC_IFDR_P8	(1 << 8)
#define PIOC_IFDR_P9	(1 << 9)
#define PIOC_IFDR_P10	(1 << 10)
#define PIOC_IFDR_P11	(1 << 11)
#define PIOC_IFDR_P12	(1 << 12)
#define PIOC_IFDR_P13	(1 << 13)
#define PIOC_IFDR_P14	(1 << 14)
#define PIOC_IFDR_P15	(1 << 15)
#define PIOC_IFDR_P16	(1 << 16)
#define PIOC_IFDR_P17	(1 << 17)
#define PIOC_IFDR_P18	(1 << 18)
#define PIOC_IFDR_P19	(1 << 19)
#define PIOC_IFDR_P20	(1 << 20)
#define PIOC_IFDR_P21	(1 << 21)
#define PIOC_IFDR_P22	(1 << 22)
#define PIOC_IFDR_P23	(1 << 23)
#define PIOC_IFDR_P24	(1 << 24)
#define PIOC_IFDR_P25	(1 << 25)
#define PIOC_IFDR_P26	(1 << 26)
#define PIOC_IFDR_P27	(1 << 27)
#define PIOC_IFDR_P28	(1 << 28)
#define PIOC_IFDR_P29	(1 << 29)
#define PIOC_IFDR_P30	(1 << 30)
#define PIOC_IFDR_P31	(1 << 31)

#define PIOC_IFDR_s	MMIO_REG(0x400e1224, struct __struct_PIOC_IFDR)
struct __struct_PIOC_IFDR
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

#define PIOC_IFSR	MMIO_REG(0x400e1228, uint32_t)
#define PIOC_IFSR_P0	(1 << 0)
#define PIOC_IFSR_P1	(1 << 1)
#define PIOC_IFSR_P2	(1 << 2)
#define PIOC_IFSR_P3	(1 << 3)
#define PIOC_IFSR_P4	(1 << 4)
#define PIOC_IFSR_P5	(1 << 5)
#define PIOC_IFSR_P6	(1 << 6)
#define PIOC_IFSR_P7	(1 << 7)
#define PIOC_IFSR_P8	(1 << 8)
#define PIOC_IFSR_P9	(1 << 9)
#define PIOC_IFSR_P10	(1 << 10)
#define PIOC_IFSR_P11	(1 << 11)
#define PIOC_IFSR_P12	(1 << 12)
#define PIOC_IFSR_P13	(1 << 13)
#define PIOC_IFSR_P14	(1 << 14)
#define PIOC_IFSR_P15	(1 << 15)
#define PIOC_IFSR_P16	(1 << 16)
#define PIOC_IFSR_P17	(1 << 17)
#define PIOC_IFSR_P18	(1 << 18)
#define PIOC_IFSR_P19	(1 << 19)
#define PIOC_IFSR_P20	(1 << 20)
#define PIOC_IFSR_P21	(1 << 21)
#define PIOC_IFSR_P22	(1 << 22)
#define PIOC_IFSR_P23	(1 << 23)
#define PIOC_IFSR_P24	(1 << 24)
#define PIOC_IFSR_P25	(1 << 25)
#define PIOC_IFSR_P26	(1 << 26)
#define PIOC_IFSR_P27	(1 << 27)
#define PIOC_IFSR_P28	(1 << 28)
#define PIOC_IFSR_P29	(1 << 29)
#define PIOC_IFSR_P30	(1 << 30)
#define PIOC_IFSR_P31	(1 << 31)

#define PIOC_IFSR_s	MMIO_REG(0x400e1228, struct __struct_PIOC_IFSR)
struct __struct_PIOC_IFSR
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

#define PIOC_SODR	MMIO_REG(0x400e1230, uint32_t)
#define PIOC_SODR_P0	(1 << 0)
#define PIOC_SODR_P1	(1 << 1)
#define PIOC_SODR_P2	(1 << 2)
#define PIOC_SODR_P3	(1 << 3)
#define PIOC_SODR_P4	(1 << 4)
#define PIOC_SODR_P5	(1 << 5)
#define PIOC_SODR_P6	(1 << 6)
#define PIOC_SODR_P7	(1 << 7)
#define PIOC_SODR_P8	(1 << 8)
#define PIOC_SODR_P9	(1 << 9)
#define PIOC_SODR_P10	(1 << 10)
#define PIOC_SODR_P11	(1 << 11)
#define PIOC_SODR_P12	(1 << 12)
#define PIOC_SODR_P13	(1 << 13)
#define PIOC_SODR_P14	(1 << 14)
#define PIOC_SODR_P15	(1 << 15)
#define PIOC_SODR_P16	(1 << 16)
#define PIOC_SODR_P17	(1 << 17)
#define PIOC_SODR_P18	(1 << 18)
#define PIOC_SODR_P19	(1 << 19)
#define PIOC_SODR_P20	(1 << 20)
#define PIOC_SODR_P21	(1 << 21)
#define PIOC_SODR_P22	(1 << 22)
#define PIOC_SODR_P23	(1 << 23)
#define PIOC_SODR_P24	(1 << 24)
#define PIOC_SODR_P25	(1 << 25)
#define PIOC_SODR_P26	(1 << 26)
#define PIOC_SODR_P27	(1 << 27)
#define PIOC_SODR_P28	(1 << 28)
#define PIOC_SODR_P29	(1 << 29)
#define PIOC_SODR_P30	(1 << 30)
#define PIOC_SODR_P31	(1 << 31)

#define PIOC_SODR_s	MMIO_REG(0x400e1230, struct __struct_PIOC_SODR)
struct __struct_PIOC_SODR
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

#define PIOC_CODR	MMIO_REG(0x400e1234, uint32_t)
#define PIOC_CODR_P0	(1 << 0)
#define PIOC_CODR_P1	(1 << 1)
#define PIOC_CODR_P2	(1 << 2)
#define PIOC_CODR_P3	(1 << 3)
#define PIOC_CODR_P4	(1 << 4)
#define PIOC_CODR_P5	(1 << 5)
#define PIOC_CODR_P6	(1 << 6)
#define PIOC_CODR_P7	(1 << 7)
#define PIOC_CODR_P8	(1 << 8)
#define PIOC_CODR_P9	(1 << 9)
#define PIOC_CODR_P10	(1 << 10)
#define PIOC_CODR_P11	(1 << 11)
#define PIOC_CODR_P12	(1 << 12)
#define PIOC_CODR_P13	(1 << 13)
#define PIOC_CODR_P14	(1 << 14)
#define PIOC_CODR_P15	(1 << 15)
#define PIOC_CODR_P16	(1 << 16)
#define PIOC_CODR_P17	(1 << 17)
#define PIOC_CODR_P18	(1 << 18)
#define PIOC_CODR_P19	(1 << 19)
#define PIOC_CODR_P20	(1 << 20)
#define PIOC_CODR_P21	(1 << 21)
#define PIOC_CODR_P22	(1 << 22)
#define PIOC_CODR_P23	(1 << 23)
#define PIOC_CODR_P24	(1 << 24)
#define PIOC_CODR_P25	(1 << 25)
#define PIOC_CODR_P26	(1 << 26)
#define PIOC_CODR_P27	(1 << 27)
#define PIOC_CODR_P28	(1 << 28)
#define PIOC_CODR_P29	(1 << 29)
#define PIOC_CODR_P30	(1 << 30)
#define PIOC_CODR_P31	(1 << 31)

#define PIOC_CODR_s	MMIO_REG(0x400e1234, struct __struct_PIOC_CODR)
struct __struct_PIOC_CODR
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

#define PIOC_ODSR	MMIO_REG(0x400e1238, uint32_t)
#define PIOC_ODSR_P0	(1 << 0)
#define PIOC_ODSR_P1	(1 << 1)
#define PIOC_ODSR_P2	(1 << 2)
#define PIOC_ODSR_P3	(1 << 3)
#define PIOC_ODSR_P4	(1 << 4)
#define PIOC_ODSR_P5	(1 << 5)
#define PIOC_ODSR_P6	(1 << 6)
#define PIOC_ODSR_P7	(1 << 7)
#define PIOC_ODSR_P8	(1 << 8)
#define PIOC_ODSR_P9	(1 << 9)
#define PIOC_ODSR_P10	(1 << 10)
#define PIOC_ODSR_P11	(1 << 11)
#define PIOC_ODSR_P12	(1 << 12)
#define PIOC_ODSR_P13	(1 << 13)
#define PIOC_ODSR_P14	(1 << 14)
#define PIOC_ODSR_P15	(1 << 15)
#define PIOC_ODSR_P16	(1 << 16)
#define PIOC_ODSR_P17	(1 << 17)
#define PIOC_ODSR_P18	(1 << 18)
#define PIOC_ODSR_P19	(1 << 19)
#define PIOC_ODSR_P20	(1 << 20)
#define PIOC_ODSR_P21	(1 << 21)
#define PIOC_ODSR_P22	(1 << 22)
#define PIOC_ODSR_P23	(1 << 23)
#define PIOC_ODSR_P24	(1 << 24)
#define PIOC_ODSR_P25	(1 << 25)
#define PIOC_ODSR_P26	(1 << 26)
#define PIOC_ODSR_P27	(1 << 27)
#define PIOC_ODSR_P28	(1 << 28)
#define PIOC_ODSR_P29	(1 << 29)
#define PIOC_ODSR_P30	(1 << 30)
#define PIOC_ODSR_P31	(1 << 31)

#define PIOC_ODSR_s	MMIO_REG(0x400e1238, struct __struct_PIOC_ODSR)
struct __struct_PIOC_ODSR
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

#define PIOC_PDSR	MMIO_REG(0x400e123c, uint32_t)
#define PIOC_PDSR_P0	(1 << 0)
#define PIOC_PDSR_P1	(1 << 1)
#define PIOC_PDSR_P2	(1 << 2)
#define PIOC_PDSR_P3	(1 << 3)
#define PIOC_PDSR_P4	(1 << 4)
#define PIOC_PDSR_P5	(1 << 5)
#define PIOC_PDSR_P6	(1 << 6)
#define PIOC_PDSR_P7	(1 << 7)
#define PIOC_PDSR_P8	(1 << 8)
#define PIOC_PDSR_P9	(1 << 9)
#define PIOC_PDSR_P10	(1 << 10)
#define PIOC_PDSR_P11	(1 << 11)
#define PIOC_PDSR_P12	(1 << 12)
#define PIOC_PDSR_P13	(1 << 13)
#define PIOC_PDSR_P14	(1 << 14)
#define PIOC_PDSR_P15	(1 << 15)
#define PIOC_PDSR_P16	(1 << 16)
#define PIOC_PDSR_P17	(1 << 17)
#define PIOC_PDSR_P18	(1 << 18)
#define PIOC_PDSR_P19	(1 << 19)
#define PIOC_PDSR_P20	(1 << 20)
#define PIOC_PDSR_P21	(1 << 21)
#define PIOC_PDSR_P22	(1 << 22)
#define PIOC_PDSR_P23	(1 << 23)
#define PIOC_PDSR_P24	(1 << 24)
#define PIOC_PDSR_P25	(1 << 25)
#define PIOC_PDSR_P26	(1 << 26)
#define PIOC_PDSR_P27	(1 << 27)
#define PIOC_PDSR_P28	(1 << 28)
#define PIOC_PDSR_P29	(1 << 29)
#define PIOC_PDSR_P30	(1 << 30)
#define PIOC_PDSR_P31	(1 << 31)

#define PIOC_PDSR_s	MMIO_REG(0x400e123c, struct __struct_PIOC_PDSR)
struct __struct_PIOC_PDSR
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

#define PIOC_IER	MMIO_REG(0x400e1240, uint32_t)
#define PIOC_IER_P0	(1 << 0)
#define PIOC_IER_P1	(1 << 1)
#define PIOC_IER_P2	(1 << 2)
#define PIOC_IER_P3	(1 << 3)
#define PIOC_IER_P4	(1 << 4)
#define PIOC_IER_P5	(1 << 5)
#define PIOC_IER_P6	(1 << 6)
#define PIOC_IER_P7	(1 << 7)
#define PIOC_IER_P8	(1 << 8)
#define PIOC_IER_P9	(1 << 9)
#define PIOC_IER_P10	(1 << 10)
#define PIOC_IER_P11	(1 << 11)
#define PIOC_IER_P12	(1 << 12)
#define PIOC_IER_P13	(1 << 13)
#define PIOC_IER_P14	(1 << 14)
#define PIOC_IER_P15	(1 << 15)
#define PIOC_IER_P16	(1 << 16)
#define PIOC_IER_P17	(1 << 17)
#define PIOC_IER_P18	(1 << 18)
#define PIOC_IER_P19	(1 << 19)
#define PIOC_IER_P20	(1 << 20)
#define PIOC_IER_P21	(1 << 21)
#define PIOC_IER_P22	(1 << 22)
#define PIOC_IER_P23	(1 << 23)
#define PIOC_IER_P24	(1 << 24)
#define PIOC_IER_P25	(1 << 25)
#define PIOC_IER_P26	(1 << 26)
#define PIOC_IER_P27	(1 << 27)
#define PIOC_IER_P28	(1 << 28)
#define PIOC_IER_P29	(1 << 29)
#define PIOC_IER_P30	(1 << 30)
#define PIOC_IER_P31	(1 << 31)

#define PIOC_IER_s	MMIO_REG(0x400e1240, struct __struct_PIOC_IER)
struct __struct_PIOC_IER
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

#define PIOC_IDR	MMIO_REG(0x400e1244, uint32_t)
#define PIOC_IDR_P0	(1 << 0)
#define PIOC_IDR_P1	(1 << 1)
#define PIOC_IDR_P2	(1 << 2)
#define PIOC_IDR_P3	(1 << 3)
#define PIOC_IDR_P4	(1 << 4)
#define PIOC_IDR_P5	(1 << 5)
#define PIOC_IDR_P6	(1 << 6)
#define PIOC_IDR_P7	(1 << 7)
#define PIOC_IDR_P8	(1 << 8)
#define PIOC_IDR_P9	(1 << 9)
#define PIOC_IDR_P10	(1 << 10)
#define PIOC_IDR_P11	(1 << 11)
#define PIOC_IDR_P12	(1 << 12)
#define PIOC_IDR_P13	(1 << 13)
#define PIOC_IDR_P14	(1 << 14)
#define PIOC_IDR_P15	(1 << 15)
#define PIOC_IDR_P16	(1 << 16)
#define PIOC_IDR_P17	(1 << 17)
#define PIOC_IDR_P18	(1 << 18)
#define PIOC_IDR_P19	(1 << 19)
#define PIOC_IDR_P20	(1 << 20)
#define PIOC_IDR_P21	(1 << 21)
#define PIOC_IDR_P22	(1 << 22)
#define PIOC_IDR_P23	(1 << 23)
#define PIOC_IDR_P24	(1 << 24)
#define PIOC_IDR_P25	(1 << 25)
#define PIOC_IDR_P26	(1 << 26)
#define PIOC_IDR_P27	(1 << 27)
#define PIOC_IDR_P28	(1 << 28)
#define PIOC_IDR_P29	(1 << 29)
#define PIOC_IDR_P30	(1 << 30)
#define PIOC_IDR_P31	(1 << 31)

#define PIOC_IDR_s	MMIO_REG(0x400e1244, struct __struct_PIOC_IDR)
struct __struct_PIOC_IDR
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

#define PIOC_IMR	MMIO_REG(0x400e1248, uint32_t)
#define PIOC_IMR_P0	(1 << 0)
#define PIOC_IMR_P1	(1 << 1)
#define PIOC_IMR_P2	(1 << 2)
#define PIOC_IMR_P3	(1 << 3)
#define PIOC_IMR_P4	(1 << 4)
#define PIOC_IMR_P5	(1 << 5)
#define PIOC_IMR_P6	(1 << 6)
#define PIOC_IMR_P7	(1 << 7)
#define PIOC_IMR_P8	(1 << 8)
#define PIOC_IMR_P9	(1 << 9)
#define PIOC_IMR_P10	(1 << 10)
#define PIOC_IMR_P11	(1 << 11)
#define PIOC_IMR_P12	(1 << 12)
#define PIOC_IMR_P13	(1 << 13)
#define PIOC_IMR_P14	(1 << 14)
#define PIOC_IMR_P15	(1 << 15)
#define PIOC_IMR_P16	(1 << 16)
#define PIOC_IMR_P17	(1 << 17)
#define PIOC_IMR_P18	(1 << 18)
#define PIOC_IMR_P19	(1 << 19)
#define PIOC_IMR_P20	(1 << 20)
#define PIOC_IMR_P21	(1 << 21)
#define PIOC_IMR_P22	(1 << 22)
#define PIOC_IMR_P23	(1 << 23)
#define PIOC_IMR_P24	(1 << 24)
#define PIOC_IMR_P25	(1 << 25)
#define PIOC_IMR_P26	(1 << 26)
#define PIOC_IMR_P27	(1 << 27)
#define PIOC_IMR_P28	(1 << 28)
#define PIOC_IMR_P29	(1 << 29)
#define PIOC_IMR_P30	(1 << 30)
#define PIOC_IMR_P31	(1 << 31)

#define PIOC_IMR_s	MMIO_REG(0x400e1248, struct __struct_PIOC_IMR)
struct __struct_PIOC_IMR
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

#define PIOC_ISR	MMIO_REG(0x400e124c, uint32_t)
#define PIOC_ISR_P0	(1 << 0)
#define PIOC_ISR_P1	(1 << 1)
#define PIOC_ISR_P2	(1 << 2)
#define PIOC_ISR_P3	(1 << 3)
#define PIOC_ISR_P4	(1 << 4)
#define PIOC_ISR_P5	(1 << 5)
#define PIOC_ISR_P6	(1 << 6)
#define PIOC_ISR_P7	(1 << 7)
#define PIOC_ISR_P8	(1 << 8)
#define PIOC_ISR_P9	(1 << 9)
#define PIOC_ISR_P10	(1 << 10)
#define PIOC_ISR_P11	(1 << 11)
#define PIOC_ISR_P12	(1 << 12)
#define PIOC_ISR_P13	(1 << 13)
#define PIOC_ISR_P14	(1 << 14)
#define PIOC_ISR_P15	(1 << 15)
#define PIOC_ISR_P16	(1 << 16)
#define PIOC_ISR_P17	(1 << 17)
#define PIOC_ISR_P18	(1 << 18)
#define PIOC_ISR_P19	(1 << 19)
#define PIOC_ISR_P20	(1 << 20)
#define PIOC_ISR_P21	(1 << 21)
#define PIOC_ISR_P22	(1 << 22)
#define PIOC_ISR_P23	(1 << 23)
#define PIOC_ISR_P24	(1 << 24)
#define PIOC_ISR_P25	(1 << 25)
#define PIOC_ISR_P26	(1 << 26)
#define PIOC_ISR_P27	(1 << 27)
#define PIOC_ISR_P28	(1 << 28)
#define PIOC_ISR_P29	(1 << 29)
#define PIOC_ISR_P30	(1 << 30)
#define PIOC_ISR_P31	(1 << 31)

#define PIOC_ISR_s	MMIO_REG(0x400e124c, struct __struct_PIOC_ISR)
struct __struct_PIOC_ISR
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

#define PIOC_MDER	MMIO_REG(0x400e1250, uint32_t)
#define PIOC_MDER_P0	(1 << 0)
#define PIOC_MDER_P1	(1 << 1)
#define PIOC_MDER_P2	(1 << 2)
#define PIOC_MDER_P3	(1 << 3)
#define PIOC_MDER_P4	(1 << 4)
#define PIOC_MDER_P5	(1 << 5)
#define PIOC_MDER_P6	(1 << 6)
#define PIOC_MDER_P7	(1 << 7)
#define PIOC_MDER_P8	(1 << 8)
#define PIOC_MDER_P9	(1 << 9)
#define PIOC_MDER_P10	(1 << 10)
#define PIOC_MDER_P11	(1 << 11)
#define PIOC_MDER_P12	(1 << 12)
#define PIOC_MDER_P13	(1 << 13)
#define PIOC_MDER_P14	(1 << 14)
#define PIOC_MDER_P15	(1 << 15)
#define PIOC_MDER_P16	(1 << 16)
#define PIOC_MDER_P17	(1 << 17)
#define PIOC_MDER_P18	(1 << 18)
#define PIOC_MDER_P19	(1 << 19)
#define PIOC_MDER_P20	(1 << 20)
#define PIOC_MDER_P21	(1 << 21)
#define PIOC_MDER_P22	(1 << 22)
#define PIOC_MDER_P23	(1 << 23)
#define PIOC_MDER_P24	(1 << 24)
#define PIOC_MDER_P25	(1 << 25)
#define PIOC_MDER_P26	(1 << 26)
#define PIOC_MDER_P27	(1 << 27)
#define PIOC_MDER_P28	(1 << 28)
#define PIOC_MDER_P29	(1 << 29)
#define PIOC_MDER_P30	(1 << 30)
#define PIOC_MDER_P31	(1 << 31)

#define PIOC_MDER_s	MMIO_REG(0x400e1250, struct __struct_PIOC_MDER)
struct __struct_PIOC_MDER
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

#define PIOC_MDDR	MMIO_REG(0x400e1254, uint32_t)
#define PIOC_MDDR_P0	(1 << 0)
#define PIOC_MDDR_P1	(1 << 1)
#define PIOC_MDDR_P2	(1 << 2)
#define PIOC_MDDR_P3	(1 << 3)
#define PIOC_MDDR_P4	(1 << 4)
#define PIOC_MDDR_P5	(1 << 5)
#define PIOC_MDDR_P6	(1 << 6)
#define PIOC_MDDR_P7	(1 << 7)
#define PIOC_MDDR_P8	(1 << 8)
#define PIOC_MDDR_P9	(1 << 9)
#define PIOC_MDDR_P10	(1 << 10)
#define PIOC_MDDR_P11	(1 << 11)
#define PIOC_MDDR_P12	(1 << 12)
#define PIOC_MDDR_P13	(1 << 13)
#define PIOC_MDDR_P14	(1 << 14)
#define PIOC_MDDR_P15	(1 << 15)
#define PIOC_MDDR_P16	(1 << 16)
#define PIOC_MDDR_P17	(1 << 17)
#define PIOC_MDDR_P18	(1 << 18)
#define PIOC_MDDR_P19	(1 << 19)
#define PIOC_MDDR_P20	(1 << 20)
#define PIOC_MDDR_P21	(1 << 21)
#define PIOC_MDDR_P22	(1 << 22)
#define PIOC_MDDR_P23	(1 << 23)
#define PIOC_MDDR_P24	(1 << 24)
#define PIOC_MDDR_P25	(1 << 25)
#define PIOC_MDDR_P26	(1 << 26)
#define PIOC_MDDR_P27	(1 << 27)
#define PIOC_MDDR_P28	(1 << 28)
#define PIOC_MDDR_P29	(1 << 29)
#define PIOC_MDDR_P30	(1 << 30)
#define PIOC_MDDR_P31	(1 << 31)

#define PIOC_MDDR_s	MMIO_REG(0x400e1254, struct __struct_PIOC_MDDR)
struct __struct_PIOC_MDDR
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

#define PIOC_MDSR	MMIO_REG(0x400e1258, uint32_t)
#define PIOC_MDSR_P0	(1 << 0)
#define PIOC_MDSR_P1	(1 << 1)
#define PIOC_MDSR_P2	(1 << 2)
#define PIOC_MDSR_P3	(1 << 3)
#define PIOC_MDSR_P4	(1 << 4)
#define PIOC_MDSR_P5	(1 << 5)
#define PIOC_MDSR_P6	(1 << 6)
#define PIOC_MDSR_P7	(1 << 7)
#define PIOC_MDSR_P8	(1 << 8)
#define PIOC_MDSR_P9	(1 << 9)
#define PIOC_MDSR_P10	(1 << 10)
#define PIOC_MDSR_P11	(1 << 11)
#define PIOC_MDSR_P12	(1 << 12)
#define PIOC_MDSR_P13	(1 << 13)
#define PIOC_MDSR_P14	(1 << 14)
#define PIOC_MDSR_P15	(1 << 15)
#define PIOC_MDSR_P16	(1 << 16)
#define PIOC_MDSR_P17	(1 << 17)
#define PIOC_MDSR_P18	(1 << 18)
#define PIOC_MDSR_P19	(1 << 19)
#define PIOC_MDSR_P20	(1 << 20)
#define PIOC_MDSR_P21	(1 << 21)
#define PIOC_MDSR_P22	(1 << 22)
#define PIOC_MDSR_P23	(1 << 23)
#define PIOC_MDSR_P24	(1 << 24)
#define PIOC_MDSR_P25	(1 << 25)
#define PIOC_MDSR_P26	(1 << 26)
#define PIOC_MDSR_P27	(1 << 27)
#define PIOC_MDSR_P28	(1 << 28)
#define PIOC_MDSR_P29	(1 << 29)
#define PIOC_MDSR_P30	(1 << 30)
#define PIOC_MDSR_P31	(1 << 31)

#define PIOC_MDSR_s	MMIO_REG(0x400e1258, struct __struct_PIOC_MDSR)
struct __struct_PIOC_MDSR
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

#define PIOC_PUDR	MMIO_REG(0x400e1260, uint32_t)
#define PIOC_PUDR_P0	(1 << 0)
#define PIOC_PUDR_P1	(1 << 1)
#define PIOC_PUDR_P2	(1 << 2)
#define PIOC_PUDR_P3	(1 << 3)
#define PIOC_PUDR_P4	(1 << 4)
#define PIOC_PUDR_P5	(1 << 5)
#define PIOC_PUDR_P6	(1 << 6)
#define PIOC_PUDR_P7	(1 << 7)
#define PIOC_PUDR_P8	(1 << 8)
#define PIOC_PUDR_P9	(1 << 9)
#define PIOC_PUDR_P10	(1 << 10)
#define PIOC_PUDR_P11	(1 << 11)
#define PIOC_PUDR_P12	(1 << 12)
#define PIOC_PUDR_P13	(1 << 13)
#define PIOC_PUDR_P14	(1 << 14)
#define PIOC_PUDR_P15	(1 << 15)
#define PIOC_PUDR_P16	(1 << 16)
#define PIOC_PUDR_P17	(1 << 17)
#define PIOC_PUDR_P18	(1 << 18)
#define PIOC_PUDR_P19	(1 << 19)
#define PIOC_PUDR_P20	(1 << 20)
#define PIOC_PUDR_P21	(1 << 21)
#define PIOC_PUDR_P22	(1 << 22)
#define PIOC_PUDR_P23	(1 << 23)
#define PIOC_PUDR_P24	(1 << 24)
#define PIOC_PUDR_P25	(1 << 25)
#define PIOC_PUDR_P26	(1 << 26)
#define PIOC_PUDR_P27	(1 << 27)
#define PIOC_PUDR_P28	(1 << 28)
#define PIOC_PUDR_P29	(1 << 29)
#define PIOC_PUDR_P30	(1 << 30)
#define PIOC_PUDR_P31	(1 << 31)

#define PIOC_PUDR_s	MMIO_REG(0x400e1260, struct __struct_PIOC_PUDR)
struct __struct_PIOC_PUDR
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

#define PIOC_PUER	MMIO_REG(0x400e1264, uint32_t)
#define PIOC_PUER_P0	(1 << 0)
#define PIOC_PUER_P1	(1 << 1)
#define PIOC_PUER_P2	(1 << 2)
#define PIOC_PUER_P3	(1 << 3)
#define PIOC_PUER_P4	(1 << 4)
#define PIOC_PUER_P5	(1 << 5)
#define PIOC_PUER_P6	(1 << 6)
#define PIOC_PUER_P7	(1 << 7)
#define PIOC_PUER_P8	(1 << 8)
#define PIOC_PUER_P9	(1 << 9)
#define PIOC_PUER_P10	(1 << 10)
#define PIOC_PUER_P11	(1 << 11)
#define PIOC_PUER_P12	(1 << 12)
#define PIOC_PUER_P13	(1 << 13)
#define PIOC_PUER_P14	(1 << 14)
#define PIOC_PUER_P15	(1 << 15)
#define PIOC_PUER_P16	(1 << 16)
#define PIOC_PUER_P17	(1 << 17)
#define PIOC_PUER_P18	(1 << 18)
#define PIOC_PUER_P19	(1 << 19)
#define PIOC_PUER_P20	(1 << 20)
#define PIOC_PUER_P21	(1 << 21)
#define PIOC_PUER_P22	(1 << 22)
#define PIOC_PUER_P23	(1 << 23)
#define PIOC_PUER_P24	(1 << 24)
#define PIOC_PUER_P25	(1 << 25)
#define PIOC_PUER_P26	(1 << 26)
#define PIOC_PUER_P27	(1 << 27)
#define PIOC_PUER_P28	(1 << 28)
#define PIOC_PUER_P29	(1 << 29)
#define PIOC_PUER_P30	(1 << 30)
#define PIOC_PUER_P31	(1 << 31)

#define PIOC_PUER_s	MMIO_REG(0x400e1264, struct __struct_PIOC_PUER)
struct __struct_PIOC_PUER
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

#define PIOC_PUSR	MMIO_REG(0x400e1268, uint32_t)
#define PIOC_PUSR_P0	(1 << 0)
#define PIOC_PUSR_P1	(1 << 1)
#define PIOC_PUSR_P2	(1 << 2)
#define PIOC_PUSR_P3	(1 << 3)
#define PIOC_PUSR_P4	(1 << 4)
#define PIOC_PUSR_P5	(1 << 5)
#define PIOC_PUSR_P6	(1 << 6)
#define PIOC_PUSR_P7	(1 << 7)
#define PIOC_PUSR_P8	(1 << 8)
#define PIOC_PUSR_P9	(1 << 9)
#define PIOC_PUSR_P10	(1 << 10)
#define PIOC_PUSR_P11	(1 << 11)
#define PIOC_PUSR_P12	(1 << 12)
#define PIOC_PUSR_P13	(1 << 13)
#define PIOC_PUSR_P14	(1 << 14)
#define PIOC_PUSR_P15	(1 << 15)
#define PIOC_PUSR_P16	(1 << 16)
#define PIOC_PUSR_P17	(1 << 17)
#define PIOC_PUSR_P18	(1 << 18)
#define PIOC_PUSR_P19	(1 << 19)
#define PIOC_PUSR_P20	(1 << 20)
#define PIOC_PUSR_P21	(1 << 21)
#define PIOC_PUSR_P22	(1 << 22)
#define PIOC_PUSR_P23	(1 << 23)
#define PIOC_PUSR_P24	(1 << 24)
#define PIOC_PUSR_P25	(1 << 25)
#define PIOC_PUSR_P26	(1 << 26)
#define PIOC_PUSR_P27	(1 << 27)
#define PIOC_PUSR_P28	(1 << 28)
#define PIOC_PUSR_P29	(1 << 29)
#define PIOC_PUSR_P30	(1 << 30)
#define PIOC_PUSR_P31	(1 << 31)

#define PIOC_PUSR_s	MMIO_REG(0x400e1268, struct __struct_PIOC_PUSR)
struct __struct_PIOC_PUSR
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

#define PIOC_ABCDSR1	MMIO_REG(0x400e1270, uint32_t)
#define PIOC_ABCDSR1_P0	(1 << 0)
#define PIOC_ABCDSR1_P1	(1 << 1)
#define PIOC_ABCDSR1_P2	(1 << 2)
#define PIOC_ABCDSR1_P3	(1 << 3)
#define PIOC_ABCDSR1_P4	(1 << 4)
#define PIOC_ABCDSR1_P5	(1 << 5)
#define PIOC_ABCDSR1_P6	(1 << 6)
#define PIOC_ABCDSR1_P7	(1 << 7)
#define PIOC_ABCDSR1_P8	(1 << 8)
#define PIOC_ABCDSR1_P9	(1 << 9)
#define PIOC_ABCDSR1_P10	(1 << 10)
#define PIOC_ABCDSR1_P11	(1 << 11)
#define PIOC_ABCDSR1_P12	(1 << 12)
#define PIOC_ABCDSR1_P13	(1 << 13)
#define PIOC_ABCDSR1_P14	(1 << 14)
#define PIOC_ABCDSR1_P15	(1 << 15)
#define PIOC_ABCDSR1_P16	(1 << 16)
#define PIOC_ABCDSR1_P17	(1 << 17)
#define PIOC_ABCDSR1_P18	(1 << 18)
#define PIOC_ABCDSR1_P19	(1 << 19)
#define PIOC_ABCDSR1_P20	(1 << 20)
#define PIOC_ABCDSR1_P21	(1 << 21)
#define PIOC_ABCDSR1_P22	(1 << 22)
#define PIOC_ABCDSR1_P23	(1 << 23)
#define PIOC_ABCDSR1_P24	(1 << 24)
#define PIOC_ABCDSR1_P25	(1 << 25)
#define PIOC_ABCDSR1_P26	(1 << 26)
#define PIOC_ABCDSR1_P27	(1 << 27)
#define PIOC_ABCDSR1_P28	(1 << 28)
#define PIOC_ABCDSR1_P29	(1 << 29)
#define PIOC_ABCDSR1_P30	(1 << 30)
#define PIOC_ABCDSR1_P31	(1 << 31)

#define PIOC_ABCDSR1_s	MMIO_REG(0x400e1270, struct __struct_PIOC_ABCDSR1)
struct __struct_PIOC_ABCDSR1
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

#define PIOC_ABCDSR2	MMIO_REG(0x400e1274, uint32_t)
#define PIOC_ABCDSR2_P0	(1 << 0)
#define PIOC_ABCDSR2_P1	(1 << 1)
#define PIOC_ABCDSR2_P2	(1 << 2)
#define PIOC_ABCDSR2_P3	(1 << 3)
#define PIOC_ABCDSR2_P4	(1 << 4)
#define PIOC_ABCDSR2_P5	(1 << 5)
#define PIOC_ABCDSR2_P6	(1 << 6)
#define PIOC_ABCDSR2_P7	(1 << 7)
#define PIOC_ABCDSR2_P8	(1 << 8)
#define PIOC_ABCDSR2_P9	(1 << 9)
#define PIOC_ABCDSR2_P10	(1 << 10)
#define PIOC_ABCDSR2_P11	(1 << 11)
#define PIOC_ABCDSR2_P12	(1 << 12)
#define PIOC_ABCDSR2_P13	(1 << 13)
#define PIOC_ABCDSR2_P14	(1 << 14)
#define PIOC_ABCDSR2_P15	(1 << 15)
#define PIOC_ABCDSR2_P16	(1 << 16)
#define PIOC_ABCDSR2_P17	(1 << 17)
#define PIOC_ABCDSR2_P18	(1 << 18)
#define PIOC_ABCDSR2_P19	(1 << 19)
#define PIOC_ABCDSR2_P20	(1 << 20)
#define PIOC_ABCDSR2_P21	(1 << 21)
#define PIOC_ABCDSR2_P22	(1 << 22)
#define PIOC_ABCDSR2_P23	(1 << 23)
#define PIOC_ABCDSR2_P24	(1 << 24)
#define PIOC_ABCDSR2_P25	(1 << 25)
#define PIOC_ABCDSR2_P26	(1 << 26)
#define PIOC_ABCDSR2_P27	(1 << 27)
#define PIOC_ABCDSR2_P28	(1 << 28)
#define PIOC_ABCDSR2_P29	(1 << 29)
#define PIOC_ABCDSR2_P30	(1 << 30)
#define PIOC_ABCDSR2_P31	(1 << 31)

#define PIOC_ABCDSR2_s	MMIO_REG(0x400e1274, struct __struct_PIOC_ABCDSR2)
struct __struct_PIOC_ABCDSR2
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

#define PIOC_IFSCDR	MMIO_REG(0x400e1280, uint32_t)
#define PIOC_IFSCDR_P0	(1 << 0)
#define PIOC_IFSCDR_P1	(1 << 1)
#define PIOC_IFSCDR_P2	(1 << 2)
#define PIOC_IFSCDR_P3	(1 << 3)
#define PIOC_IFSCDR_P4	(1 << 4)
#define PIOC_IFSCDR_P5	(1 << 5)
#define PIOC_IFSCDR_P6	(1 << 6)
#define PIOC_IFSCDR_P7	(1 << 7)
#define PIOC_IFSCDR_P8	(1 << 8)
#define PIOC_IFSCDR_P9	(1 << 9)
#define PIOC_IFSCDR_P10	(1 << 10)
#define PIOC_IFSCDR_P11	(1 << 11)
#define PIOC_IFSCDR_P12	(1 << 12)
#define PIOC_IFSCDR_P13	(1 << 13)
#define PIOC_IFSCDR_P14	(1 << 14)
#define PIOC_IFSCDR_P15	(1 << 15)
#define PIOC_IFSCDR_P16	(1 << 16)
#define PIOC_IFSCDR_P17	(1 << 17)
#define PIOC_IFSCDR_P18	(1 << 18)
#define PIOC_IFSCDR_P19	(1 << 19)
#define PIOC_IFSCDR_P20	(1 << 20)
#define PIOC_IFSCDR_P21	(1 << 21)
#define PIOC_IFSCDR_P22	(1 << 22)
#define PIOC_IFSCDR_P23	(1 << 23)
#define PIOC_IFSCDR_P24	(1 << 24)
#define PIOC_IFSCDR_P25	(1 << 25)
#define PIOC_IFSCDR_P26	(1 << 26)
#define PIOC_IFSCDR_P27	(1 << 27)
#define PIOC_IFSCDR_P28	(1 << 28)
#define PIOC_IFSCDR_P29	(1 << 29)
#define PIOC_IFSCDR_P30	(1 << 30)
#define PIOC_IFSCDR_P31	(1 << 31)

#define PIOC_IFSCDR_s	MMIO_REG(0x400e1280, struct __struct_PIOC_IFSCDR)
struct __struct_PIOC_IFSCDR
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

#define PIOC_IFSCER	MMIO_REG(0x400e1284, uint32_t)
#define PIOC_IFSCER_P0	(1 << 0)
#define PIOC_IFSCER_P1	(1 << 1)
#define PIOC_IFSCER_P2	(1 << 2)
#define PIOC_IFSCER_P3	(1 << 3)
#define PIOC_IFSCER_P4	(1 << 4)
#define PIOC_IFSCER_P5	(1 << 5)
#define PIOC_IFSCER_P6	(1 << 6)
#define PIOC_IFSCER_P7	(1 << 7)
#define PIOC_IFSCER_P8	(1 << 8)
#define PIOC_IFSCER_P9	(1 << 9)
#define PIOC_IFSCER_P10	(1 << 10)
#define PIOC_IFSCER_P11	(1 << 11)
#define PIOC_IFSCER_P12	(1 << 12)
#define PIOC_IFSCER_P13	(1 << 13)
#define PIOC_IFSCER_P14	(1 << 14)
#define PIOC_IFSCER_P15	(1 << 15)
#define PIOC_IFSCER_P16	(1 << 16)
#define PIOC_IFSCER_P17	(1 << 17)
#define PIOC_IFSCER_P18	(1 << 18)
#define PIOC_IFSCER_P19	(1 << 19)
#define PIOC_IFSCER_P20	(1 << 20)
#define PIOC_IFSCER_P21	(1 << 21)
#define PIOC_IFSCER_P22	(1 << 22)
#define PIOC_IFSCER_P23	(1 << 23)
#define PIOC_IFSCER_P24	(1 << 24)
#define PIOC_IFSCER_P25	(1 << 25)
#define PIOC_IFSCER_P26	(1 << 26)
#define PIOC_IFSCER_P27	(1 << 27)
#define PIOC_IFSCER_P28	(1 << 28)
#define PIOC_IFSCER_P29	(1 << 29)
#define PIOC_IFSCER_P30	(1 << 30)
#define PIOC_IFSCER_P31	(1 << 31)

#define PIOC_IFSCER_s	MMIO_REG(0x400e1284, struct __struct_PIOC_IFSCER)
struct __struct_PIOC_IFSCER
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

#define PIOC_IFSCSR	MMIO_REG(0x400e1288, uint32_t)
#define PIOC_IFSCSR_P0	(1 << 0)
#define PIOC_IFSCSR_P1	(1 << 1)
#define PIOC_IFSCSR_P2	(1 << 2)
#define PIOC_IFSCSR_P3	(1 << 3)
#define PIOC_IFSCSR_P4	(1 << 4)
#define PIOC_IFSCSR_P5	(1 << 5)
#define PIOC_IFSCSR_P6	(1 << 6)
#define PIOC_IFSCSR_P7	(1 << 7)
#define PIOC_IFSCSR_P8	(1 << 8)
#define PIOC_IFSCSR_P9	(1 << 9)
#define PIOC_IFSCSR_P10	(1 << 10)
#define PIOC_IFSCSR_P11	(1 << 11)
#define PIOC_IFSCSR_P12	(1 << 12)
#define PIOC_IFSCSR_P13	(1 << 13)
#define PIOC_IFSCSR_P14	(1 << 14)
#define PIOC_IFSCSR_P15	(1 << 15)
#define PIOC_IFSCSR_P16	(1 << 16)
#define PIOC_IFSCSR_P17	(1 << 17)
#define PIOC_IFSCSR_P18	(1 << 18)
#define PIOC_IFSCSR_P19	(1 << 19)
#define PIOC_IFSCSR_P20	(1 << 20)
#define PIOC_IFSCSR_P21	(1 << 21)
#define PIOC_IFSCSR_P22	(1 << 22)
#define PIOC_IFSCSR_P23	(1 << 23)
#define PIOC_IFSCSR_P24	(1 << 24)
#define PIOC_IFSCSR_P25	(1 << 25)
#define PIOC_IFSCSR_P26	(1 << 26)
#define PIOC_IFSCSR_P27	(1 << 27)
#define PIOC_IFSCSR_P28	(1 << 28)
#define PIOC_IFSCSR_P29	(1 << 29)
#define PIOC_IFSCSR_P30	(1 << 30)
#define PIOC_IFSCSR_P31	(1 << 31)

#define PIOC_IFSCSR_s	MMIO_REG(0x400e1288, struct __struct_PIOC_IFSCSR)
struct __struct_PIOC_IFSCSR
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

#define PIOC_SCDR	MMIO_REG(0x400e128c, uint32_t)
#define PIOC_SCDR_DIV(x)	((x) << 0)
#define PIOC_SCDR_DIV_MSK	0x00003fff
#define PIOC_SCDR_DIV_VAL(x)	(((x) >> 0) & 0x3fff)

#define PIOC_SCDR_s	MMIO_REG(0x400e128c, struct __struct_PIOC_SCDR)
struct __struct_PIOC_SCDR
{
  uint32_t div : 14;
  uint32_t  : 18;
};

#define PIOC_PPDDR	MMIO_REG(0x400e1290, uint32_t)
#define PIOC_PPDDR_P0	(1 << 0)
#define PIOC_PPDDR_P1	(1 << 1)
#define PIOC_PPDDR_P2	(1 << 2)
#define PIOC_PPDDR_P3	(1 << 3)
#define PIOC_PPDDR_P4	(1 << 4)
#define PIOC_PPDDR_P5	(1 << 5)
#define PIOC_PPDDR_P6	(1 << 6)
#define PIOC_PPDDR_P7	(1 << 7)
#define PIOC_PPDDR_P8	(1 << 8)
#define PIOC_PPDDR_P9	(1 << 9)
#define PIOC_PPDDR_P10	(1 << 10)
#define PIOC_PPDDR_P11	(1 << 11)
#define PIOC_PPDDR_P12	(1 << 12)
#define PIOC_PPDDR_P13	(1 << 13)
#define PIOC_PPDDR_P14	(1 << 14)
#define PIOC_PPDDR_P15	(1 << 15)
#define PIOC_PPDDR_P16	(1 << 16)
#define PIOC_PPDDR_P17	(1 << 17)
#define PIOC_PPDDR_P18	(1 << 18)
#define PIOC_PPDDR_P19	(1 << 19)
#define PIOC_PPDDR_P20	(1 << 20)
#define PIOC_PPDDR_P21	(1 << 21)
#define PIOC_PPDDR_P22	(1 << 22)
#define PIOC_PPDDR_P23	(1 << 23)
#define PIOC_PPDDR_P24	(1 << 24)
#define PIOC_PPDDR_P25	(1 << 25)
#define PIOC_PPDDR_P26	(1 << 26)
#define PIOC_PPDDR_P27	(1 << 27)
#define PIOC_PPDDR_P28	(1 << 28)
#define PIOC_PPDDR_P29	(1 << 29)
#define PIOC_PPDDR_P30	(1 << 30)
#define PIOC_PPDDR_P31	(1 << 31)

#define PIOC_PPDDR_s	MMIO_REG(0x400e1290, struct __struct_PIOC_PPDDR)
struct __struct_PIOC_PPDDR
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

#define PIOC_PPDER	MMIO_REG(0x400e1294, uint32_t)
#define PIOC_PPDER_P0	(1 << 0)
#define PIOC_PPDER_P1	(1 << 1)
#define PIOC_PPDER_P2	(1 << 2)
#define PIOC_PPDER_P3	(1 << 3)
#define PIOC_PPDER_P4	(1 << 4)
#define PIOC_PPDER_P5	(1 << 5)
#define PIOC_PPDER_P6	(1 << 6)
#define PIOC_PPDER_P7	(1 << 7)
#define PIOC_PPDER_P8	(1 << 8)
#define PIOC_PPDER_P9	(1 << 9)
#define PIOC_PPDER_P10	(1 << 10)
#define PIOC_PPDER_P11	(1 << 11)
#define PIOC_PPDER_P12	(1 << 12)
#define PIOC_PPDER_P13	(1 << 13)
#define PIOC_PPDER_P14	(1 << 14)
#define PIOC_PPDER_P15	(1 << 15)
#define PIOC_PPDER_P16	(1 << 16)
#define PIOC_PPDER_P17	(1 << 17)
#define PIOC_PPDER_P18	(1 << 18)
#define PIOC_PPDER_P19	(1 << 19)
#define PIOC_PPDER_P20	(1 << 20)
#define PIOC_PPDER_P21	(1 << 21)
#define PIOC_PPDER_P22	(1 << 22)
#define PIOC_PPDER_P23	(1 << 23)
#define PIOC_PPDER_P24	(1 << 24)
#define PIOC_PPDER_P25	(1 << 25)
#define PIOC_PPDER_P26	(1 << 26)
#define PIOC_PPDER_P27	(1 << 27)
#define PIOC_PPDER_P28	(1 << 28)
#define PIOC_PPDER_P29	(1 << 29)
#define PIOC_PPDER_P30	(1 << 30)
#define PIOC_PPDER_P31	(1 << 31)

#define PIOC_PPDER_s	MMIO_REG(0x400e1294, struct __struct_PIOC_PPDER)
struct __struct_PIOC_PPDER
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

#define PIOC_PPDSR	MMIO_REG(0x400e1298, uint32_t)
#define PIOC_PPDSR_P0	(1 << 0)
#define PIOC_PPDSR_P1	(1 << 1)
#define PIOC_PPDSR_P2	(1 << 2)
#define PIOC_PPDSR_P3	(1 << 3)
#define PIOC_PPDSR_P4	(1 << 4)
#define PIOC_PPDSR_P5	(1 << 5)
#define PIOC_PPDSR_P6	(1 << 6)
#define PIOC_PPDSR_P7	(1 << 7)
#define PIOC_PPDSR_P8	(1 << 8)
#define PIOC_PPDSR_P9	(1 << 9)
#define PIOC_PPDSR_P10	(1 << 10)
#define PIOC_PPDSR_P11	(1 << 11)
#define PIOC_PPDSR_P12	(1 << 12)
#define PIOC_PPDSR_P13	(1 << 13)
#define PIOC_PPDSR_P14	(1 << 14)
#define PIOC_PPDSR_P15	(1 << 15)
#define PIOC_PPDSR_P16	(1 << 16)
#define PIOC_PPDSR_P17	(1 << 17)
#define PIOC_PPDSR_P18	(1 << 18)
#define PIOC_PPDSR_P19	(1 << 19)
#define PIOC_PPDSR_P20	(1 << 20)
#define PIOC_PPDSR_P21	(1 << 21)
#define PIOC_PPDSR_P22	(1 << 22)
#define PIOC_PPDSR_P23	(1 << 23)
#define PIOC_PPDSR_P24	(1 << 24)
#define PIOC_PPDSR_P25	(1 << 25)
#define PIOC_PPDSR_P26	(1 << 26)
#define PIOC_PPDSR_P27	(1 << 27)
#define PIOC_PPDSR_P28	(1 << 28)
#define PIOC_PPDSR_P29	(1 << 29)
#define PIOC_PPDSR_P30	(1 << 30)
#define PIOC_PPDSR_P31	(1 << 31)

#define PIOC_PPDSR_s	MMIO_REG(0x400e1298, struct __struct_PIOC_PPDSR)
struct __struct_PIOC_PPDSR
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

#define PIOC_OWER	MMIO_REG(0x400e12a0, uint32_t)
#define PIOC_OWER_P0	(1 << 0)
#define PIOC_OWER_P1	(1 << 1)
#define PIOC_OWER_P2	(1 << 2)
#define PIOC_OWER_P3	(1 << 3)
#define PIOC_OWER_P4	(1 << 4)
#define PIOC_OWER_P5	(1 << 5)
#define PIOC_OWER_P6	(1 << 6)
#define PIOC_OWER_P7	(1 << 7)
#define PIOC_OWER_P8	(1 << 8)
#define PIOC_OWER_P9	(1 << 9)
#define PIOC_OWER_P10	(1 << 10)
#define PIOC_OWER_P11	(1 << 11)
#define PIOC_OWER_P12	(1 << 12)
#define PIOC_OWER_P13	(1 << 13)
#define PIOC_OWER_P14	(1 << 14)
#define PIOC_OWER_P15	(1 << 15)
#define PIOC_OWER_P16	(1 << 16)
#define PIOC_OWER_P17	(1 << 17)
#define PIOC_OWER_P18	(1 << 18)
#define PIOC_OWER_P19	(1 << 19)
#define PIOC_OWER_P20	(1 << 20)
#define PIOC_OWER_P21	(1 << 21)
#define PIOC_OWER_P22	(1 << 22)
#define PIOC_OWER_P23	(1 << 23)
#define PIOC_OWER_P24	(1 << 24)
#define PIOC_OWER_P25	(1 << 25)
#define PIOC_OWER_P26	(1 << 26)
#define PIOC_OWER_P27	(1 << 27)
#define PIOC_OWER_P28	(1 << 28)
#define PIOC_OWER_P29	(1 << 29)
#define PIOC_OWER_P30	(1 << 30)
#define PIOC_OWER_P31	(1 << 31)

#define PIOC_OWER_s	MMIO_REG(0x400e12a0, struct __struct_PIOC_OWER)
struct __struct_PIOC_OWER
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

#define PIOC_OWDR	MMIO_REG(0x400e12a4, uint32_t)
#define PIOC_OWDR_P0	(1 << 0)
#define PIOC_OWDR_P1	(1 << 1)
#define PIOC_OWDR_P2	(1 << 2)
#define PIOC_OWDR_P3	(1 << 3)
#define PIOC_OWDR_P4	(1 << 4)
#define PIOC_OWDR_P5	(1 << 5)
#define PIOC_OWDR_P6	(1 << 6)
#define PIOC_OWDR_P7	(1 << 7)
#define PIOC_OWDR_P8	(1 << 8)
#define PIOC_OWDR_P9	(1 << 9)
#define PIOC_OWDR_P10	(1 << 10)
#define PIOC_OWDR_P11	(1 << 11)
#define PIOC_OWDR_P12	(1 << 12)
#define PIOC_OWDR_P13	(1 << 13)
#define PIOC_OWDR_P14	(1 << 14)
#define PIOC_OWDR_P15	(1 << 15)
#define PIOC_OWDR_P16	(1 << 16)
#define PIOC_OWDR_P17	(1 << 17)
#define PIOC_OWDR_P18	(1 << 18)
#define PIOC_OWDR_P19	(1 << 19)
#define PIOC_OWDR_P20	(1 << 20)
#define PIOC_OWDR_P21	(1 << 21)
#define PIOC_OWDR_P22	(1 << 22)
#define PIOC_OWDR_P23	(1 << 23)
#define PIOC_OWDR_P24	(1 << 24)
#define PIOC_OWDR_P25	(1 << 25)
#define PIOC_OWDR_P26	(1 << 26)
#define PIOC_OWDR_P27	(1 << 27)
#define PIOC_OWDR_P28	(1 << 28)
#define PIOC_OWDR_P29	(1 << 29)
#define PIOC_OWDR_P30	(1 << 30)
#define PIOC_OWDR_P31	(1 << 31)

#define PIOC_OWDR_s	MMIO_REG(0x400e12a4, struct __struct_PIOC_OWDR)
struct __struct_PIOC_OWDR
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

#define PIOC_OWSR	MMIO_REG(0x400e12a8, uint32_t)
#define PIOC_OWSR_P0	(1 << 0)
#define PIOC_OWSR_P1	(1 << 1)
#define PIOC_OWSR_P2	(1 << 2)
#define PIOC_OWSR_P3	(1 << 3)
#define PIOC_OWSR_P4	(1 << 4)
#define PIOC_OWSR_P5	(1 << 5)
#define PIOC_OWSR_P6	(1 << 6)
#define PIOC_OWSR_P7	(1 << 7)
#define PIOC_OWSR_P8	(1 << 8)
#define PIOC_OWSR_P9	(1 << 9)
#define PIOC_OWSR_P10	(1 << 10)
#define PIOC_OWSR_P11	(1 << 11)
#define PIOC_OWSR_P12	(1 << 12)
#define PIOC_OWSR_P13	(1 << 13)
#define PIOC_OWSR_P14	(1 << 14)
#define PIOC_OWSR_P15	(1 << 15)
#define PIOC_OWSR_P16	(1 << 16)
#define PIOC_OWSR_P17	(1 << 17)
#define PIOC_OWSR_P18	(1 << 18)
#define PIOC_OWSR_P19	(1 << 19)
#define PIOC_OWSR_P20	(1 << 20)
#define PIOC_OWSR_P21	(1 << 21)
#define PIOC_OWSR_P22	(1 << 22)
#define PIOC_OWSR_P23	(1 << 23)
#define PIOC_OWSR_P24	(1 << 24)
#define PIOC_OWSR_P25	(1 << 25)
#define PIOC_OWSR_P26	(1 << 26)
#define PIOC_OWSR_P27	(1 << 27)
#define PIOC_OWSR_P28	(1 << 28)
#define PIOC_OWSR_P29	(1 << 29)
#define PIOC_OWSR_P30	(1 << 30)
#define PIOC_OWSR_P31	(1 << 31)

#define PIOC_OWSR_s	MMIO_REG(0x400e12a8, struct __struct_PIOC_OWSR)
struct __struct_PIOC_OWSR
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

#define PIOC_AIMER	MMIO_REG(0x400e12b0, uint32_t)
#define PIOC_AIMER_P0	(1 << 0)
#define PIOC_AIMER_P1	(1 << 1)
#define PIOC_AIMER_P2	(1 << 2)
#define PIOC_AIMER_P3	(1 << 3)
#define PIOC_AIMER_P4	(1 << 4)
#define PIOC_AIMER_P5	(1 << 5)
#define PIOC_AIMER_P6	(1 << 6)
#define PIOC_AIMER_P7	(1 << 7)
#define PIOC_AIMER_P8	(1 << 8)
#define PIOC_AIMER_P9	(1 << 9)
#define PIOC_AIMER_P10	(1 << 10)
#define PIOC_AIMER_P11	(1 << 11)
#define PIOC_AIMER_P12	(1 << 12)
#define PIOC_AIMER_P13	(1 << 13)
#define PIOC_AIMER_P14	(1 << 14)
#define PIOC_AIMER_P15	(1 << 15)
#define PIOC_AIMER_P16	(1 << 16)
#define PIOC_AIMER_P17	(1 << 17)
#define PIOC_AIMER_P18	(1 << 18)
#define PIOC_AIMER_P19	(1 << 19)
#define PIOC_AIMER_P20	(1 << 20)
#define PIOC_AIMER_P21	(1 << 21)
#define PIOC_AIMER_P22	(1 << 22)
#define PIOC_AIMER_P23	(1 << 23)
#define PIOC_AIMER_P24	(1 << 24)
#define PIOC_AIMER_P25	(1 << 25)
#define PIOC_AIMER_P26	(1 << 26)
#define PIOC_AIMER_P27	(1 << 27)
#define PIOC_AIMER_P28	(1 << 28)
#define PIOC_AIMER_P29	(1 << 29)
#define PIOC_AIMER_P30	(1 << 30)
#define PIOC_AIMER_P31	(1 << 31)

#define PIOC_AIMER_s	MMIO_REG(0x400e12b0, struct __struct_PIOC_AIMER)
struct __struct_PIOC_AIMER
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

#define PIOC_AIMDR	MMIO_REG(0x400e12b4, uint32_t)
#define PIOC_AIMDR_P0	(1 << 0)
#define PIOC_AIMDR_P1	(1 << 1)
#define PIOC_AIMDR_P2	(1 << 2)
#define PIOC_AIMDR_P3	(1 << 3)
#define PIOC_AIMDR_P4	(1 << 4)
#define PIOC_AIMDR_P5	(1 << 5)
#define PIOC_AIMDR_P6	(1 << 6)
#define PIOC_AIMDR_P7	(1 << 7)
#define PIOC_AIMDR_P8	(1 << 8)
#define PIOC_AIMDR_P9	(1 << 9)
#define PIOC_AIMDR_P10	(1 << 10)
#define PIOC_AIMDR_P11	(1 << 11)
#define PIOC_AIMDR_P12	(1 << 12)
#define PIOC_AIMDR_P13	(1 << 13)
#define PIOC_AIMDR_P14	(1 << 14)
#define PIOC_AIMDR_P15	(1 << 15)
#define PIOC_AIMDR_P16	(1 << 16)
#define PIOC_AIMDR_P17	(1 << 17)
#define PIOC_AIMDR_P18	(1 << 18)
#define PIOC_AIMDR_P19	(1 << 19)
#define PIOC_AIMDR_P20	(1 << 20)
#define PIOC_AIMDR_P21	(1 << 21)
#define PIOC_AIMDR_P22	(1 << 22)
#define PIOC_AIMDR_P23	(1 << 23)
#define PIOC_AIMDR_P24	(1 << 24)
#define PIOC_AIMDR_P25	(1 << 25)
#define PIOC_AIMDR_P26	(1 << 26)
#define PIOC_AIMDR_P27	(1 << 27)
#define PIOC_AIMDR_P28	(1 << 28)
#define PIOC_AIMDR_P29	(1 << 29)
#define PIOC_AIMDR_P30	(1 << 30)
#define PIOC_AIMDR_P31	(1 << 31)

#define PIOC_AIMDR_s	MMIO_REG(0x400e12b4, struct __struct_PIOC_AIMDR)
struct __struct_PIOC_AIMDR
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

#define PIOC_AIMMR	MMIO_REG(0x400e12b8, uint32_t)
#define PIOC_AIMMR_P0	(1 << 0)
#define PIOC_AIMMR_P1	(1 << 1)
#define PIOC_AIMMR_P2	(1 << 2)
#define PIOC_AIMMR_P3	(1 << 3)
#define PIOC_AIMMR_P4	(1 << 4)
#define PIOC_AIMMR_P5	(1 << 5)
#define PIOC_AIMMR_P6	(1 << 6)
#define PIOC_AIMMR_P7	(1 << 7)
#define PIOC_AIMMR_P8	(1 << 8)
#define PIOC_AIMMR_P9	(1 << 9)
#define PIOC_AIMMR_P10	(1 << 10)
#define PIOC_AIMMR_P11	(1 << 11)
#define PIOC_AIMMR_P12	(1 << 12)
#define PIOC_AIMMR_P13	(1 << 13)
#define PIOC_AIMMR_P14	(1 << 14)
#define PIOC_AIMMR_P15	(1 << 15)
#define PIOC_AIMMR_P16	(1 << 16)
#define PIOC_AIMMR_P17	(1 << 17)
#define PIOC_AIMMR_P18	(1 << 18)
#define PIOC_AIMMR_P19	(1 << 19)
#define PIOC_AIMMR_P20	(1 << 20)
#define PIOC_AIMMR_P21	(1 << 21)
#define PIOC_AIMMR_P22	(1 << 22)
#define PIOC_AIMMR_P23	(1 << 23)
#define PIOC_AIMMR_P24	(1 << 24)
#define PIOC_AIMMR_P25	(1 << 25)
#define PIOC_AIMMR_P26	(1 << 26)
#define PIOC_AIMMR_P27	(1 << 27)
#define PIOC_AIMMR_P28	(1 << 28)
#define PIOC_AIMMR_P29	(1 << 29)
#define PIOC_AIMMR_P30	(1 << 30)
#define PIOC_AIMMR_P31	(1 << 31)

#define PIOC_AIMMR_s	MMIO_REG(0x400e12b8, struct __struct_PIOC_AIMMR)
struct __struct_PIOC_AIMMR
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

#define PIOC_ESR	MMIO_REG(0x400e12c0, uint32_t)
#define PIOC_ESR_P0	(1 << 0)
#define PIOC_ESR_P1	(1 << 1)
#define PIOC_ESR_P2	(1 << 2)
#define PIOC_ESR_P3	(1 << 3)
#define PIOC_ESR_P4	(1 << 4)
#define PIOC_ESR_P5	(1 << 5)
#define PIOC_ESR_P6	(1 << 6)
#define PIOC_ESR_P7	(1 << 7)
#define PIOC_ESR_P8	(1 << 8)
#define PIOC_ESR_P9	(1 << 9)
#define PIOC_ESR_P10	(1 << 10)
#define PIOC_ESR_P11	(1 << 11)
#define PIOC_ESR_P12	(1 << 12)
#define PIOC_ESR_P13	(1 << 13)
#define PIOC_ESR_P14	(1 << 14)
#define PIOC_ESR_P15	(1 << 15)
#define PIOC_ESR_P16	(1 << 16)
#define PIOC_ESR_P17	(1 << 17)
#define PIOC_ESR_P18	(1 << 18)
#define PIOC_ESR_P19	(1 << 19)
#define PIOC_ESR_P20	(1 << 20)
#define PIOC_ESR_P21	(1 << 21)
#define PIOC_ESR_P22	(1 << 22)
#define PIOC_ESR_P23	(1 << 23)
#define PIOC_ESR_P24	(1 << 24)
#define PIOC_ESR_P25	(1 << 25)
#define PIOC_ESR_P26	(1 << 26)
#define PIOC_ESR_P27	(1 << 27)
#define PIOC_ESR_P28	(1 << 28)
#define PIOC_ESR_P29	(1 << 29)
#define PIOC_ESR_P30	(1 << 30)
#define PIOC_ESR_P31	(1 << 31)

#define PIOC_ESR_s	MMIO_REG(0x400e12c0, struct __struct_PIOC_ESR)
struct __struct_PIOC_ESR
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

#define PIOC_LSR	MMIO_REG(0x400e12c4, uint32_t)
#define PIOC_LSR_P0	(1 << 0)
#define PIOC_LSR_P1	(1 << 1)
#define PIOC_LSR_P2	(1 << 2)
#define PIOC_LSR_P3	(1 << 3)
#define PIOC_LSR_P4	(1 << 4)
#define PIOC_LSR_P5	(1 << 5)
#define PIOC_LSR_P6	(1 << 6)
#define PIOC_LSR_P7	(1 << 7)
#define PIOC_LSR_P8	(1 << 8)
#define PIOC_LSR_P9	(1 << 9)
#define PIOC_LSR_P10	(1 << 10)
#define PIOC_LSR_P11	(1 << 11)
#define PIOC_LSR_P12	(1 << 12)
#define PIOC_LSR_P13	(1 << 13)
#define PIOC_LSR_P14	(1 << 14)
#define PIOC_LSR_P15	(1 << 15)
#define PIOC_LSR_P16	(1 << 16)
#define PIOC_LSR_P17	(1 << 17)
#define PIOC_LSR_P18	(1 << 18)
#define PIOC_LSR_P19	(1 << 19)
#define PIOC_LSR_P20	(1 << 20)
#define PIOC_LSR_P21	(1 << 21)
#define PIOC_LSR_P22	(1 << 22)
#define PIOC_LSR_P23	(1 << 23)
#define PIOC_LSR_P24	(1 << 24)
#define PIOC_LSR_P25	(1 << 25)
#define PIOC_LSR_P26	(1 << 26)
#define PIOC_LSR_P27	(1 << 27)
#define PIOC_LSR_P28	(1 << 28)
#define PIOC_LSR_P29	(1 << 29)
#define PIOC_LSR_P30	(1 << 30)
#define PIOC_LSR_P31	(1 << 31)

#define PIOC_LSR_s	MMIO_REG(0x400e12c4, struct __struct_PIOC_LSR)
struct __struct_PIOC_LSR
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

#define PIOC_ELSR	MMIO_REG(0x400e12c8, uint32_t)
#define PIOC_ELSR_P0	(1 << 0)
#define PIOC_ELSR_P1	(1 << 1)
#define PIOC_ELSR_P2	(1 << 2)
#define PIOC_ELSR_P3	(1 << 3)
#define PIOC_ELSR_P4	(1 << 4)
#define PIOC_ELSR_P5	(1 << 5)
#define PIOC_ELSR_P6	(1 << 6)
#define PIOC_ELSR_P7	(1 << 7)
#define PIOC_ELSR_P8	(1 << 8)
#define PIOC_ELSR_P9	(1 << 9)
#define PIOC_ELSR_P10	(1 << 10)
#define PIOC_ELSR_P11	(1 << 11)
#define PIOC_ELSR_P12	(1 << 12)
#define PIOC_ELSR_P13	(1 << 13)
#define PIOC_ELSR_P14	(1 << 14)
#define PIOC_ELSR_P15	(1 << 15)
#define PIOC_ELSR_P16	(1 << 16)
#define PIOC_ELSR_P17	(1 << 17)
#define PIOC_ELSR_P18	(1 << 18)
#define PIOC_ELSR_P19	(1 << 19)
#define PIOC_ELSR_P20	(1 << 20)
#define PIOC_ELSR_P21	(1 << 21)
#define PIOC_ELSR_P22	(1 << 22)
#define PIOC_ELSR_P23	(1 << 23)
#define PIOC_ELSR_P24	(1 << 24)
#define PIOC_ELSR_P25	(1 << 25)
#define PIOC_ELSR_P26	(1 << 26)
#define PIOC_ELSR_P27	(1 << 27)
#define PIOC_ELSR_P28	(1 << 28)
#define PIOC_ELSR_P29	(1 << 29)
#define PIOC_ELSR_P30	(1 << 30)
#define PIOC_ELSR_P31	(1 << 31)

#define PIOC_ELSR_s	MMIO_REG(0x400e12c8, struct __struct_PIOC_ELSR)
struct __struct_PIOC_ELSR
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

#define PIOC_FELLSR	MMIO_REG(0x400e12d0, uint32_t)
#define PIOC_FELLSR_P0	(1 << 0)
#define PIOC_FELLSR_P1	(1 << 1)
#define PIOC_FELLSR_P2	(1 << 2)
#define PIOC_FELLSR_P3	(1 << 3)
#define PIOC_FELLSR_P4	(1 << 4)
#define PIOC_FELLSR_P5	(1 << 5)
#define PIOC_FELLSR_P6	(1 << 6)
#define PIOC_FELLSR_P7	(1 << 7)
#define PIOC_FELLSR_P8	(1 << 8)
#define PIOC_FELLSR_P9	(1 << 9)
#define PIOC_FELLSR_P10	(1 << 10)
#define PIOC_FELLSR_P11	(1 << 11)
#define PIOC_FELLSR_P12	(1 << 12)
#define PIOC_FELLSR_P13	(1 << 13)
#define PIOC_FELLSR_P14	(1 << 14)
#define PIOC_FELLSR_P15	(1 << 15)
#define PIOC_FELLSR_P16	(1 << 16)
#define PIOC_FELLSR_P17	(1 << 17)
#define PIOC_FELLSR_P18	(1 << 18)
#define PIOC_FELLSR_P19	(1 << 19)
#define PIOC_FELLSR_P20	(1 << 20)
#define PIOC_FELLSR_P21	(1 << 21)
#define PIOC_FELLSR_P22	(1 << 22)
#define PIOC_FELLSR_P23	(1 << 23)
#define PIOC_FELLSR_P24	(1 << 24)
#define PIOC_FELLSR_P25	(1 << 25)
#define PIOC_FELLSR_P26	(1 << 26)
#define PIOC_FELLSR_P27	(1 << 27)
#define PIOC_FELLSR_P28	(1 << 28)
#define PIOC_FELLSR_P29	(1 << 29)
#define PIOC_FELLSR_P30	(1 << 30)
#define PIOC_FELLSR_P31	(1 << 31)

#define PIOC_FELLSR_s	MMIO_REG(0x400e12d0, struct __struct_PIOC_FELLSR)
struct __struct_PIOC_FELLSR
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

#define PIOC_REHLSR	MMIO_REG(0x400e12d4, uint32_t)
#define PIOC_REHLSR_P0	(1 << 0)
#define PIOC_REHLSR_P1	(1 << 1)
#define PIOC_REHLSR_P2	(1 << 2)
#define PIOC_REHLSR_P3	(1 << 3)
#define PIOC_REHLSR_P4	(1 << 4)
#define PIOC_REHLSR_P5	(1 << 5)
#define PIOC_REHLSR_P6	(1 << 6)
#define PIOC_REHLSR_P7	(1 << 7)
#define PIOC_REHLSR_P8	(1 << 8)
#define PIOC_REHLSR_P9	(1 << 9)
#define PIOC_REHLSR_P10	(1 << 10)
#define PIOC_REHLSR_P11	(1 << 11)
#define PIOC_REHLSR_P12	(1 << 12)
#define PIOC_REHLSR_P13	(1 << 13)
#define PIOC_REHLSR_P14	(1 << 14)
#define PIOC_REHLSR_P15	(1 << 15)
#define PIOC_REHLSR_P16	(1 << 16)
#define PIOC_REHLSR_P17	(1 << 17)
#define PIOC_REHLSR_P18	(1 << 18)
#define PIOC_REHLSR_P19	(1 << 19)
#define PIOC_REHLSR_P20	(1 << 20)
#define PIOC_REHLSR_P21	(1 << 21)
#define PIOC_REHLSR_P22	(1 << 22)
#define PIOC_REHLSR_P23	(1 << 23)
#define PIOC_REHLSR_P24	(1 << 24)
#define PIOC_REHLSR_P25	(1 << 25)
#define PIOC_REHLSR_P26	(1 << 26)
#define PIOC_REHLSR_P27	(1 << 27)
#define PIOC_REHLSR_P28	(1 << 28)
#define PIOC_REHLSR_P29	(1 << 29)
#define PIOC_REHLSR_P30	(1 << 30)
#define PIOC_REHLSR_P31	(1 << 31)

#define PIOC_REHLSR_s	MMIO_REG(0x400e12d4, struct __struct_PIOC_REHLSR)
struct __struct_PIOC_REHLSR
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

#define PIOC_FRLHSR	MMIO_REG(0x400e12d8, uint32_t)
#define PIOC_FRLHSR_P0	(1 << 0)
#define PIOC_FRLHSR_P1	(1 << 1)
#define PIOC_FRLHSR_P2	(1 << 2)
#define PIOC_FRLHSR_P3	(1 << 3)
#define PIOC_FRLHSR_P4	(1 << 4)
#define PIOC_FRLHSR_P5	(1 << 5)
#define PIOC_FRLHSR_P6	(1 << 6)
#define PIOC_FRLHSR_P7	(1 << 7)
#define PIOC_FRLHSR_P8	(1 << 8)
#define PIOC_FRLHSR_P9	(1 << 9)
#define PIOC_FRLHSR_P10	(1 << 10)
#define PIOC_FRLHSR_P11	(1 << 11)
#define PIOC_FRLHSR_P12	(1 << 12)
#define PIOC_FRLHSR_P13	(1 << 13)
#define PIOC_FRLHSR_P14	(1 << 14)
#define PIOC_FRLHSR_P15	(1 << 15)
#define PIOC_FRLHSR_P16	(1 << 16)
#define PIOC_FRLHSR_P17	(1 << 17)
#define PIOC_FRLHSR_P18	(1 << 18)
#define PIOC_FRLHSR_P19	(1 << 19)
#define PIOC_FRLHSR_P20	(1 << 20)
#define PIOC_FRLHSR_P21	(1 << 21)
#define PIOC_FRLHSR_P22	(1 << 22)
#define PIOC_FRLHSR_P23	(1 << 23)
#define PIOC_FRLHSR_P24	(1 << 24)
#define PIOC_FRLHSR_P25	(1 << 25)
#define PIOC_FRLHSR_P26	(1 << 26)
#define PIOC_FRLHSR_P27	(1 << 27)
#define PIOC_FRLHSR_P28	(1 << 28)
#define PIOC_FRLHSR_P29	(1 << 29)
#define PIOC_FRLHSR_P30	(1 << 30)
#define PIOC_FRLHSR_P31	(1 << 31)

#define PIOC_FRLHSR_s	MMIO_REG(0x400e12d8, struct __struct_PIOC_FRLHSR)
struct __struct_PIOC_FRLHSR
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

#define PIOC_LOCKSR	MMIO_REG(0x400e12e0, uint32_t)
#define PIOC_LOCKSR_P0	(1 << 0)
#define PIOC_LOCKSR_P1	(1 << 1)
#define PIOC_LOCKSR_P2	(1 << 2)
#define PIOC_LOCKSR_P3	(1 << 3)
#define PIOC_LOCKSR_P4	(1 << 4)
#define PIOC_LOCKSR_P5	(1 << 5)
#define PIOC_LOCKSR_P6	(1 << 6)
#define PIOC_LOCKSR_P7	(1 << 7)
#define PIOC_LOCKSR_P8	(1 << 8)
#define PIOC_LOCKSR_P9	(1 << 9)
#define PIOC_LOCKSR_P10	(1 << 10)
#define PIOC_LOCKSR_P11	(1 << 11)
#define PIOC_LOCKSR_P12	(1 << 12)
#define PIOC_LOCKSR_P13	(1 << 13)
#define PIOC_LOCKSR_P14	(1 << 14)
#define PIOC_LOCKSR_P15	(1 << 15)
#define PIOC_LOCKSR_P16	(1 << 16)
#define PIOC_LOCKSR_P17	(1 << 17)
#define PIOC_LOCKSR_P18	(1 << 18)
#define PIOC_LOCKSR_P19	(1 << 19)
#define PIOC_LOCKSR_P20	(1 << 20)
#define PIOC_LOCKSR_P21	(1 << 21)
#define PIOC_LOCKSR_P22	(1 << 22)
#define PIOC_LOCKSR_P23	(1 << 23)
#define PIOC_LOCKSR_P24	(1 << 24)
#define PIOC_LOCKSR_P25	(1 << 25)
#define PIOC_LOCKSR_P26	(1 << 26)
#define PIOC_LOCKSR_P27	(1 << 27)
#define PIOC_LOCKSR_P28	(1 << 28)
#define PIOC_LOCKSR_P29	(1 << 29)
#define PIOC_LOCKSR_P30	(1 << 30)
#define PIOC_LOCKSR_P31	(1 << 31)

#define PIOC_LOCKSR_s	MMIO_REG(0x400e12e0, struct __struct_PIOC_LOCKSR)
struct __struct_PIOC_LOCKSR
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

#define PIOC_WPMR	MMIO_REG(0x400e12e4, uint32_t)
#define PIOC_WPMR_WPEN	(1 << 0)
#define PIOC_WPMR_WPKEY(x)	((x) << 8)
#define PIOC_WPMR_WPKEY_MSK	0xffffff00
#define PIOC_WPMR_WPKEY_VAL(x)	(((x) >> 8) & 0xffffff)

#define PIOC_WPMR_s	MMIO_REG(0x400e12e4, struct __struct_PIOC_WPMR)
struct __struct_PIOC_WPMR
{
  uint32_t wpen : 1;
  uint32_t  : 7;
  uint32_t wpkey : 24;
};

#define PIOC_WPSR	MMIO_REG(0x400e12e8, uint32_t)
#define PIOC_WPSR_WPVS	(1 << 0)
#define PIOC_WPSR_WPVSRC(x)	((x) << 8)
#define PIOC_WPSR_WPVSRC_MSK	0x00ffff00
#define PIOC_WPSR_WPVSRC_VAL(x)	(((x) >> 8) & 0xffff)

#define PIOC_WPSR_s	MMIO_REG(0x400e12e8, struct __struct_PIOC_WPSR)
struct __struct_PIOC_WPSR
{
  uint32_t wpvs : 1;
  uint32_t  : 7;
  uint32_t wpvsrc : 16;
  uint32_t  : 8;
};

#define PIOC_SCHMITT	MMIO_REG(0x400e1300, uint32_t)
#define PIOC_SCHMITT_P0	(1 << 0)
#define PIOC_SCHMITT_P1	(1 << 1)
#define PIOC_SCHMITT_P2	(1 << 2)
#define PIOC_SCHMITT_P3	(1 << 3)
#define PIOC_SCHMITT_P4	(1 << 4)
#define PIOC_SCHMITT_P5	(1 << 5)
#define PIOC_SCHMITT_P6	(1 << 6)
#define PIOC_SCHMITT_P7	(1 << 7)
#define PIOC_SCHMITT_P8	(1 << 8)
#define PIOC_SCHMITT_P9	(1 << 9)
#define PIOC_SCHMITT_P10	(1 << 10)
#define PIOC_SCHMITT_P11	(1 << 11)
#define PIOC_SCHMITT_P12	(1 << 12)
#define PIOC_SCHMITT_P13	(1 << 13)
#define PIOC_SCHMITT_P14	(1 << 14)
#define PIOC_SCHMITT_P15	(1 << 15)
#define PIOC_SCHMITT_P16	(1 << 16)
#define PIOC_SCHMITT_P17	(1 << 17)
#define PIOC_SCHMITT_P18	(1 << 18)
#define PIOC_SCHMITT_P19	(1 << 19)
#define PIOC_SCHMITT_P20	(1 << 20)
#define PIOC_SCHMITT_P21	(1 << 21)
#define PIOC_SCHMITT_P22	(1 << 22)
#define PIOC_SCHMITT_P23	(1 << 23)
#define PIOC_SCHMITT_P24	(1 << 24)
#define PIOC_SCHMITT_P25	(1 << 25)
#define PIOC_SCHMITT_P26	(1 << 26)
#define PIOC_SCHMITT_P27	(1 << 27)
#define PIOC_SCHMITT_P28	(1 << 28)
#define PIOC_SCHMITT_P29	(1 << 29)
#define PIOC_SCHMITT_P30	(1 << 30)
#define PIOC_SCHMITT_P31	(1 << 31)

#define PIOC_SCHMITT_s	MMIO_REG(0x400e1300, struct __struct_PIOC_SCHMITT)
struct __struct_PIOC_SCHMITT
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

#define PIOC_PCMR	MMIO_REG(0x400e1350, uint32_t)
#define PIOC_PCMR_PCEN	(1 << 0)
#define PIOC_PCMR_DSIZE(x)	((x) << 4)
#define PIOC_PCMR_DSIZE_MSK	0x00000030
#define PIOC_PCMR_DSIZE_VAL(x)	(((x) >> 4) & 0x3)
#define PIOC_PCMR_ALWYS	(1 << 9)
#define PIOC_PCMR_HALFS	(1 << 10)
#define PIOC_PCMR_FRSTS	(1 << 11)

#define PIOC_PCMR_s	MMIO_REG(0x400e1350, struct __struct_PIOC_PCMR)
struct __struct_PIOC_PCMR
{
  uint32_t pcen : 1;
  uint32_t  : 3;
  uint32_t dsize : 2;
  uint32_t  : 3;
  uint32_t alwys : 1;
  uint32_t halfs : 1;
  uint32_t frsts : 1;
  uint32_t  : 20;
};

#define PIOC_PCIER	MMIO_REG(0x400e1354, uint32_t)
#define PIOC_PCIER_DRDY	(1 << 0)
#define PIOC_PCIER_OVRE	(1 << 1)
#define PIOC_PCIER_ENDRX	(1 << 2)
#define PIOC_PCIER_RXBUFF	(1 << 3)

#define PIOC_PCIER_s	MMIO_REG(0x400e1354, struct __struct_PIOC_PCIER)
struct __struct_PIOC_PCIER
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOC_PCIDR	MMIO_REG(0x400e1358, uint32_t)
#define PIOC_PCIDR_DRDY	(1 << 0)
#define PIOC_PCIDR_OVRE	(1 << 1)
#define PIOC_PCIDR_ENDRX	(1 << 2)
#define PIOC_PCIDR_RXBUFF	(1 << 3)

#define PIOC_PCIDR_s	MMIO_REG(0x400e1358, struct __struct_PIOC_PCIDR)
struct __struct_PIOC_PCIDR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOC_PCIMR	MMIO_REG(0x400e135c, uint32_t)
#define PIOC_PCIMR_DRDY	(1 << 0)
#define PIOC_PCIMR_OVRE	(1 << 1)
#define PIOC_PCIMR_ENDRX	(1 << 2)
#define PIOC_PCIMR_RXBUFF	(1 << 3)

#define PIOC_PCIMR_s	MMIO_REG(0x400e135c, struct __struct_PIOC_PCIMR)
struct __struct_PIOC_PCIMR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOC_PCISR	MMIO_REG(0x400e1360, uint32_t)
#define PIOC_PCISR_DRDY	(1 << 0)
#define PIOC_PCISR_OVRE	(1 << 1)
#define PIOC_PCISR_ENDRX	(1 << 2)
#define PIOC_PCISR_RXBUFF	(1 << 3)

#define PIOC_PCISR_s	MMIO_REG(0x400e1360, struct __struct_PIOC_PCISR)
struct __struct_PIOC_PCISR
{
  uint32_t drdy : 1;
  uint32_t ovre : 1;
  uint32_t endrx : 1;
  uint32_t rxbuff : 1;
  uint32_t  : 28;
};

#define PIOC_PCRHR	MMIO_REG(0x400e1364, uint32_t)

// 0x400e1400 RSTC

#define RSTC_CR	MMIO_REG(0x400e1400, uint32_t)
#define RSTC_CR_PROCRST	(1 << 0)
#define RSTC_CR_PERRST	(1 << 2)
#define RSTC_CR_EXTRST	(1 << 3)
#define RSTC_CR_KEY(x)	((x) << 24)
#define RSTC_CR_KEY_MSK	0xff000000
#define RSTC_CR_KEY_VAL(x)	(((x) >> 24) & 0xff)

#define RSTC_CR_s	MMIO_REG(0x400e1400, struct __struct_RSTC_CR)
struct __struct_RSTC_CR
{
  uint32_t procrst : 1;
  uint32_t  : 1;
  uint32_t perrst : 1;
  uint32_t extrst : 1;
  uint32_t  : 20;
  uint32_t key : 8;
};

#define RSTC_SR	MMIO_REG(0x400e1404, uint32_t)
#define RSTC_SR_URSTS	(1 << 0)
#define RSTC_SR_RSTTYP(x)	((x) << 8)
#define RSTC_SR_RSTTYP_MSK	0x00000700
#define RSTC_SR_RSTTYP_VAL(x)	(((x) >> 8) & 0x7)
#define RSTC_SR_NRSTL	(1 << 16)
#define RSTC_SR_SRCMP	(1 << 17)

#define RSTC_SR_s	MMIO_REG(0x400e1404, struct __struct_RSTC_SR)
struct __struct_RSTC_SR
{
  uint32_t ursts : 1;
  uint32_t  : 7;
  uint32_t rsttyp : 3;
  uint32_t  : 5;
  uint32_t nrstl : 1;
  uint32_t srcmp : 1;
  uint32_t  : 14;
};

#define RSTC_MR	MMIO_REG(0x400e1408, uint32_t)
#define RSTC_MR_URSTEN	(1 << 0)
#define RSTC_MR_URSTIEN	(1 << 4)
#define RSTC_MR_ERSTL(x)	((x) << 8)
#define RSTC_MR_ERSTL_MSK	0x00000f00
#define RSTC_MR_ERSTL_VAL(x)	(((x) >> 8) & 0xf)
#define RSTC_MR_KEY(x)	((x) << 24)
#define RSTC_MR_KEY_MSK	0xff000000
#define RSTC_MR_KEY_VAL(x)	(((x) >> 24) & 0xff)

#define RSTC_MR_s	MMIO_REG(0x400e1408, struct __struct_RSTC_MR)
struct __struct_RSTC_MR
{
  uint32_t ursten : 1;
  uint32_t  : 3;
  uint32_t urstien : 1;
  uint32_t  : 3;
  uint32_t erstl : 4;
  uint32_t  : 12;
  uint32_t key : 8;
};

// 0x400e1410 SUPC

#define SUPC_CR	MMIO_REG(0x400e1410, uint32_t)
#define SUPC_CR_VROFF	(1 << 2)
#define SUPC_CR_XTALSEL	(1 << 3)
#define SUPC_CR_KEY(x)	((x) << 24)
#define SUPC_CR_KEY_MSK	0xff000000
#define SUPC_CR_KEY_VAL(x)	(((x) >> 24) & 0xff)

#define SUPC_CR_s	MMIO_REG(0x400e1410, struct __struct_SUPC_CR)
struct __struct_SUPC_CR
{
  uint32_t  : 2;
  uint32_t vroff : 1;
  uint32_t xtalsel : 1;
  uint32_t  : 20;
  uint32_t key : 8;
};

#define SUPC_SMMR	MMIO_REG(0x400e1414, uint32_t)
#define SUPC_SMMR_SMTH(x)	((x) << 0)
#define SUPC_SMMR_SMTH_MSK	0x0000000f
#define SUPC_SMMR_SMTH_VAL(x)	(((x) >> 0) & 0xf)
#define SUPC_SMMR_SMSMPL(x)	((x) << 8)
#define SUPC_SMMR_SMSMPL_MSK	0x00000700
#define SUPC_SMMR_SMSMPL_VAL(x)	(((x) >> 8) & 0x7)
#define SUPC_SMMR_SMRSTEN	(1 << 12)
#define SUPC_SMMR_SMIEN	(1 << 13)

#define SUPC_SMMR_s	MMIO_REG(0x400e1414, struct __struct_SUPC_SMMR)
struct __struct_SUPC_SMMR
{
  uint32_t smth : 4;
  uint32_t  : 4;
  uint32_t smsmpl : 3;
  uint32_t  : 1;
  uint32_t smrsten : 1;
  uint32_t smien : 1;
  uint32_t  : 18;
};

#define SUPC_MR	MMIO_REG(0x400e1418, uint32_t)
#define SUPC_MR_BODRSTEN	(1 << 12)
#define SUPC_MR_BODDIS	(1 << 13)
#define SUPC_MR_ONREG	(1 << 14)
#define SUPC_MR_OSCBYPASS	(1 << 20)
#define SUPC_MR_KEY(x)	((x) << 24)
#define SUPC_MR_KEY_MSK	0xff000000
#define SUPC_MR_KEY_VAL(x)	(((x) >> 24) & 0xff)

#define SUPC_MR_s	MMIO_REG(0x400e1418, struct __struct_SUPC_MR)
struct __struct_SUPC_MR
{
  uint32_t  : 12;
  uint32_t bodrsten : 1;
  uint32_t boddis : 1;
  uint32_t onreg : 1;
  uint32_t  : 5;
  uint32_t oscbypass : 1;
  uint32_t  : 3;
  uint32_t key : 8;
};

#define SUPC_WUMR	MMIO_REG(0x400e141c, uint32_t)
#define SUPC_WUMR_SMEN	(1 << 1)
#define SUPC_WUMR_RTTEN	(1 << 2)
#define SUPC_WUMR_RTCEN	(1 << 3)
#define SUPC_WUMR_LPDBCEN0	(1 << 5)
#define SUPC_WUMR_LPDBCEN1	(1 << 6)
#define SUPC_WUMR_LPDBCCLR	(1 << 7)
#define SUPC_WUMR_WKUPDBC(x)	((x) << 12)
#define SUPC_WUMR_WKUPDBC_MSK	0x00007000
#define SUPC_WUMR_WKUPDBC_VAL(x)	(((x) >> 12) & 0x7)
#define SUPC_WUMR_LPDBC(x)	((x) << 16)
#define SUPC_WUMR_LPDBC_MSK	0x00070000
#define SUPC_WUMR_LPDBC_VAL(x)	(((x) >> 16) & 0x7)

#define SUPC_WUMR_s	MMIO_REG(0x400e141c, struct __struct_SUPC_WUMR)
struct __struct_SUPC_WUMR
{
  uint32_t  : 1;
  uint32_t smen : 1;
  uint32_t rtten : 1;
  uint32_t rtcen : 1;
  uint32_t  : 1;
  uint32_t lpdbcen0 : 1;
  uint32_t lpdbcen1 : 1;
  uint32_t lpdbcclr : 1;
  uint32_t  : 4;
  uint32_t wkupdbc : 3;
  uint32_t  : 1;
  uint32_t lpdbc : 3;
  uint32_t  : 13;
};

#define SUPC_WUIR	MMIO_REG(0x400e1420, uint32_t)
#define SUPC_WUIR_WKUPEN0	(1 << 0)
#define SUPC_WUIR_WKUPEN1	(1 << 1)
#define SUPC_WUIR_WKUPEN2	(1 << 2)
#define SUPC_WUIR_WKUPEN3	(1 << 3)
#define SUPC_WUIR_WKUPEN4	(1 << 4)
#define SUPC_WUIR_WKUPEN5	(1 << 5)
#define SUPC_WUIR_WKUPEN6	(1 << 6)
#define SUPC_WUIR_WKUPEN7	(1 << 7)
#define SUPC_WUIR_WKUPEN8	(1 << 8)
#define SUPC_WUIR_WKUPEN9	(1 << 9)
#define SUPC_WUIR_WKUPEN10	(1 << 10)
#define SUPC_WUIR_WKUPEN11	(1 << 11)
#define SUPC_WUIR_WKUPEN12	(1 << 12)
#define SUPC_WUIR_WKUPEN13	(1 << 13)
#define SUPC_WUIR_WKUPEN14	(1 << 14)
#define SUPC_WUIR_WKUPEN15	(1 << 15)
#define SUPC_WUIR_WKUPT0	(1 << 16)
#define SUPC_WUIR_WKUPT1	(1 << 17)
#define SUPC_WUIR_WKUPT2	(1 << 18)
#define SUPC_WUIR_WKUPT3	(1 << 19)
#define SUPC_WUIR_WKUPT4	(1 << 20)
#define SUPC_WUIR_WKUPT5	(1 << 21)
#define SUPC_WUIR_WKUPT6	(1 << 22)
#define SUPC_WUIR_WKUPT7	(1 << 23)
#define SUPC_WUIR_WKUPT8	(1 << 24)
#define SUPC_WUIR_WKUPT9	(1 << 25)
#define SUPC_WUIR_WKUPT10	(1 << 26)
#define SUPC_WUIR_WKUPT11	(1 << 27)
#define SUPC_WUIR_WKUPT12	(1 << 28)
#define SUPC_WUIR_WKUPT13	(1 << 29)
#define SUPC_WUIR_WKUPT14	(1 << 30)
#define SUPC_WUIR_WKUPT15	(1 << 31)

#define SUPC_WUIR_s	MMIO_REG(0x400e1420, struct __struct_SUPC_WUIR)
struct __struct_SUPC_WUIR
{
  uint32_t wkupen0 : 1;
  uint32_t wkupen1 : 1;
  uint32_t wkupen2 : 1;
  uint32_t wkupen3 : 1;
  uint32_t wkupen4 : 1;
  uint32_t wkupen5 : 1;
  uint32_t wkupen6 : 1;
  uint32_t wkupen7 : 1;
  uint32_t wkupen8 : 1;
  uint32_t wkupen9 : 1;
  uint32_t wkupen10 : 1;
  uint32_t wkupen11 : 1;
  uint32_t wkupen12 : 1;
  uint32_t wkupen13 : 1;
  uint32_t wkupen14 : 1;
  uint32_t wkupen15 : 1;
  uint32_t wkupt0 : 1;
  uint32_t wkupt1 : 1;
  uint32_t wkupt2 : 1;
  uint32_t wkupt3 : 1;
  uint32_t wkupt4 : 1;
  uint32_t wkupt5 : 1;
  uint32_t wkupt6 : 1;
  uint32_t wkupt7 : 1;
  uint32_t wkupt8 : 1;
  uint32_t wkupt9 : 1;
  uint32_t wkupt10 : 1;
  uint32_t wkupt11 : 1;
  uint32_t wkupt12 : 1;
  uint32_t wkupt13 : 1;
  uint32_t wkupt14 : 1;
  uint32_t wkupt15 : 1;
};

#define SUPC_SR	MMIO_REG(0x400e1424, uint32_t)
#define SUPC_SR_WKUPS	(1 << 1)
#define SUPC_SR_SMWS	(1 << 2)
#define SUPC_SR_BODRSTS	(1 << 3)
#define SUPC_SR_SMRSTS	(1 << 4)
#define SUPC_SR_SMS	(1 << 5)
#define SUPC_SR_SMOS	(1 << 6)
#define SUPC_SR_OSCSEL	(1 << 7)
#define SUPC_SR_LPDBCS0	(1 << 13)
#define SUPC_SR_LPDBCS1	(1 << 14)
#define SUPC_SR_WKUPIS0	(1 << 16)
#define SUPC_SR_WKUPIS1	(1 << 17)
#define SUPC_SR_WKUPIS2	(1 << 18)
#define SUPC_SR_WKUPIS3	(1 << 19)
#define SUPC_SR_WKUPIS4	(1 << 20)
#define SUPC_SR_WKUPIS5	(1 << 21)
#define SUPC_SR_WKUPIS6	(1 << 22)
#define SUPC_SR_WKUPIS7	(1 << 23)
#define SUPC_SR_WKUPIS8	(1 << 24)
#define SUPC_SR_WKUPIS9	(1 << 25)
#define SUPC_SR_WKUPIS10	(1 << 26)
#define SUPC_SR_WKUPIS11	(1 << 27)
#define SUPC_SR_WKUPIS12	(1 << 28)
#define SUPC_SR_WKUPIS13	(1 << 29)
#define SUPC_SR_WKUPIS14	(1 << 30)
#define SUPC_SR_WKUPIS15	(1 << 31)

#define SUPC_SR_s	MMIO_REG(0x400e1424, struct __struct_SUPC_SR)
struct __struct_SUPC_SR
{
  uint32_t  : 1;
  uint32_t wkups : 1;
  uint32_t smws : 1;
  uint32_t bodrsts : 1;
  uint32_t smrsts : 1;
  uint32_t sms : 1;
  uint32_t smos : 1;
  uint32_t oscsel : 1;
  uint32_t  : 5;
  uint32_t lpdbcs0 : 1;
  uint32_t lpdbcs1 : 1;
  uint32_t  : 1;
  uint32_t wkupis0 : 1;
  uint32_t wkupis1 : 1;
  uint32_t wkupis2 : 1;
  uint32_t wkupis3 : 1;
  uint32_t wkupis4 : 1;
  uint32_t wkupis5 : 1;
  uint32_t wkupis6 : 1;
  uint32_t wkupis7 : 1;
  uint32_t wkupis8 : 1;
  uint32_t wkupis9 : 1;
  uint32_t wkupis10 : 1;
  uint32_t wkupis11 : 1;
  uint32_t wkupis12 : 1;
  uint32_t wkupis13 : 1;
  uint32_t wkupis14 : 1;
  uint32_t wkupis15 : 1;
};

// 0x400e1430 RTT

#define RTT_MR	MMIO_REG(0x400e1430, uint32_t)
#define RTT_MR_RTPRES(x)	((x) << 0)
#define RTT_MR_RTPRES_MSK	0x0000ffff
#define RTT_MR_RTPRES_VAL(x)	(((x) >> 0) & 0xffff)
#define RTT_MR_ALMIEN	(1 << 16)
#define RTT_MR_RTTINCIEN	(1 << 17)
#define RTT_MR_RTTRST	(1 << 18)

#define RTT_MR_s	MMIO_REG(0x400e1430, struct __struct_RTT_MR)
struct __struct_RTT_MR
{
  uint32_t rtpres : 16;
  uint32_t almien : 1;
  uint32_t rttincien : 1;
  uint32_t rttrst : 1;
  uint32_t  : 13;
};

#define RTT_AR	MMIO_REG(0x400e1434, uint32_t)

#define RTT_VR	MMIO_REG(0x400e1438, uint32_t)

#define RTT_SR	MMIO_REG(0x400e143c, uint32_t)
#define RTT_SR_ALMS	(1 << 0)
#define RTT_SR_RTTINC	(1 << 1)

#define RTT_SR_s	MMIO_REG(0x400e143c, struct __struct_RTT_SR)
struct __struct_RTT_SR
{
  uint32_t alms : 1;
  uint32_t rttinc : 1;
  uint32_t  : 30;
};

// 0x400e1450 WDT

#define WDT_CR	MMIO_REG(0x400e1450, uint32_t)
#define WDT_CR_WDRSTT	(1 << 0)
#define WDT_CR_KEY(x)	((x) << 24)
#define WDT_CR_KEY_MSK	0xff000000
#define WDT_CR_KEY_VAL(x)	(((x) >> 24) & 0xff)

#define WDT_CR_s	MMIO_REG(0x400e1450, struct __struct_WDT_CR)
struct __struct_WDT_CR
{
  uint32_t wdrstt : 1;
  uint32_t  : 23;
  uint32_t key : 8;
};

#define WDT_MR	MMIO_REG(0x400e1454, uint32_t)
#define WDT_MR_WDV(x)	((x) << 0)
#define WDT_MR_WDV_MSK	0x00000fff
#define WDT_MR_WDV_VAL(x)	(((x) >> 0) & 0xfff)
#define WDT_MR_WDFIEN	(1 << 12)
#define WDT_MR_WDRSTEN	(1 << 13)
#define WDT_MR_WDRPROC	(1 << 14)
#define WDT_MR_WDDIS	(1 << 15)
#define WDT_MR_WDD(x)	((x) << 16)
#define WDT_MR_WDD_MSK	0x0fff0000
#define WDT_MR_WDD_VAL(x)	(((x) >> 16) & 0xfff)
#define WDT_MR_WDDBGHLT	(1 << 28)
#define WDT_MR_WDIDLEHLT	(1 << 29)

#define WDT_MR_s	MMIO_REG(0x400e1454, struct __struct_WDT_MR)
struct __struct_WDT_MR
{
  uint32_t wdv : 12;
  uint32_t wdfien : 1;
  uint32_t wdrsten : 1;
  uint32_t wdrproc : 1;
  uint32_t wddis : 1;
  uint32_t wdd : 12;
  uint32_t wddbghlt : 1;
  uint32_t wdidlehlt : 1;
  uint32_t  : 2;
};

#define WDT_SR	MMIO_REG(0x400e1458, uint32_t)
#define WDT_SR_WDUNF	(1 << 0)
#define WDT_SR_WDERR	(1 << 1)

#define WDT_SR_s	MMIO_REG(0x400e1458, struct __struct_WDT_SR)
struct __struct_WDT_SR
{
  uint32_t wdunf : 1;
  uint32_t wderr : 1;
  uint32_t  : 30;
};

// 0x400e1460 RTC

#define RTC_CR	MMIO_REG(0x400e1460, uint32_t)
#define RTC_CR_UPDTIM	(1 << 0)
#define RTC_CR_UPDCAL	(1 << 1)
#define RTC_CR_TIMEVSEL(x)	((x) << 8)
#define RTC_CR_TIMEVSEL_MSK	0x00000300
#define RTC_CR_TIMEVSEL_VAL(x)	(((x) >> 8) & 0x3)
#define RTC_CR_CALEVSEL(x)	((x) << 16)
#define RTC_CR_CALEVSEL_MSK	0x00030000
#define RTC_CR_CALEVSEL_VAL(x)	(((x) >> 16) & 0x3)

#define RTC_CR_s	MMIO_REG(0x400e1460, struct __struct_RTC_CR)
struct __struct_RTC_CR
{
  uint32_t updtim : 1;
  uint32_t updcal : 1;
  uint32_t  : 6;
  uint32_t timevsel : 2;
  uint32_t  : 6;
  uint32_t calevsel : 2;
  uint32_t  : 14;
};

#define RTC_MR	MMIO_REG(0x400e1464, uint32_t)
#define RTC_MR_HRMOD	(1 << 0)
#define RTC_MR_PERSIAN	(1 << 1)
#define RTC_MR_NEGPPM	(1 << 4)
#define RTC_MR_CORRECTION(x)	((x) << 8)
#define RTC_MR_CORRECTION_MSK	0x00007f00
#define RTC_MR_CORRECTION_VAL(x)	(((x) >> 8) & 0x7f)
#define RTC_MR_HIGHPPM	(1 << 15)
#define RTC_MR_OUT0(x)	((x) << 16)
#define RTC_MR_OUT0_MSK	0x00070000
#define RTC_MR_OUT0_VAL(x)	(((x) >> 16) & 0x7)
#define RTC_MR_OUT1(x)	((x) << 20)
#define RTC_MR_OUT1_MSK	0x00700000
#define RTC_MR_OUT1_VAL(x)	(((x) >> 20) & 0x7)
#define RTC_MR_THIGH(x)	((x) << 24)
#define RTC_MR_THIGH_MSK	0x07000000
#define RTC_MR_THIGH_VAL(x)	(((x) >> 24) & 0x7)
#define RTC_MR_TPERIOD(x)	((x) << 28)
#define RTC_MR_TPERIOD_MSK	0x30000000
#define RTC_MR_TPERIOD_VAL(x)	(((x) >> 28) & 0x3)

#define RTC_MR_s	MMIO_REG(0x400e1464, struct __struct_RTC_MR)
struct __struct_RTC_MR
{
  uint32_t hrmod : 1;
  uint32_t persian : 1;
  uint32_t  : 2;
  uint32_t negppm : 1;
  uint32_t  : 3;
  uint32_t correction : 7;
  uint32_t highppm : 1;
  uint32_t out0 : 3;
  uint32_t  : 1;
  uint32_t out1 : 3;
  uint32_t  : 1;
  uint32_t thigh : 3;
  uint32_t  : 1;
  uint32_t tperiod : 2;
  uint32_t  : 2;
};

#define RTC_TIMR	MMIO_REG(0x400e1468, uint32_t)
#define RTC_TIMR_SEC(x)	((x) << 0)
#define RTC_TIMR_SEC_MSK	0x0000007f
#define RTC_TIMR_SEC_VAL(x)	(((x) >> 0) & 0x7f)
#define RTC_TIMR_MIN(x)	((x) << 8)
#define RTC_TIMR_MIN_MSK	0x00007f00
#define RTC_TIMR_MIN_VAL(x)	(((x) >> 8) & 0x7f)
#define RTC_TIMR_HOUR(x)	((x) << 16)
#define RTC_TIMR_HOUR_MSK	0x003f0000
#define RTC_TIMR_HOUR_VAL(x)	(((x) >> 16) & 0x3f)
#define RTC_TIMR_AMPM	(1 << 22)

#define RTC_TIMR_s	MMIO_REG(0x400e1468, struct __struct_RTC_TIMR)
struct __struct_RTC_TIMR
{
  uint32_t sec : 7;
  uint32_t  : 1;
  uint32_t min : 7;
  uint32_t  : 1;
  uint32_t hour : 6;
  uint32_t ampm : 1;
  uint32_t  : 9;
};

#define RTC_CALR	MMIO_REG(0x400e146c, uint32_t)
#define RTC_CALR_CENT(x)	((x) << 0)
#define RTC_CALR_CENT_MSK	0x0000007f
#define RTC_CALR_CENT_VAL(x)	(((x) >> 0) & 0x7f)
#define RTC_CALR_YEAR(x)	((x) << 8)
#define RTC_CALR_YEAR_MSK	0x0000ff00
#define RTC_CALR_YEAR_VAL(x)	(((x) >> 8) & 0xff)
#define RTC_CALR_MONTH(x)	((x) << 16)
#define RTC_CALR_MONTH_MSK	0x001f0000
#define RTC_CALR_MONTH_VAL(x)	(((x) >> 16) & 0x1f)
#define RTC_CALR_DAY(x)	((x) << 21)
#define RTC_CALR_DAY_MSK	0x00e00000
#define RTC_CALR_DAY_VAL(x)	(((x) >> 21) & 0x7)
#define RTC_CALR_DATE(x)	((x) << 24)
#define RTC_CALR_DATE_MSK	0x3f000000
#define RTC_CALR_DATE_VAL(x)	(((x) >> 24) & 0x3f)

#define RTC_CALR_s	MMIO_REG(0x400e146c, struct __struct_RTC_CALR)
struct __struct_RTC_CALR
{
  uint32_t cent : 7;
  uint32_t  : 1;
  uint32_t year : 8;
  uint32_t month : 5;
  uint32_t day : 3;
  uint32_t date : 6;
  uint32_t  : 2;
};

#define RTC_TIMALR	MMIO_REG(0x400e1470, uint32_t)
#define RTC_TIMALR_SEC(x)	((x) << 0)
#define RTC_TIMALR_SEC_MSK	0x0000007f
#define RTC_TIMALR_SEC_VAL(x)	(((x) >> 0) & 0x7f)
#define RTC_TIMALR_SECEN	(1 << 7)
#define RTC_TIMALR_MIN(x)	((x) << 8)
#define RTC_TIMALR_MIN_MSK	0x00007f00
#define RTC_TIMALR_MIN_VAL(x)	(((x) >> 8) & 0x7f)
#define RTC_TIMALR_MINEN	(1 << 15)
#define RTC_TIMALR_HOUR(x)	((x) << 16)
#define RTC_TIMALR_HOUR_MSK	0x003f0000
#define RTC_TIMALR_HOUR_VAL(x)	(((x) >> 16) & 0x3f)
#define RTC_TIMALR_AMPM	(1 << 22)
#define RTC_TIMALR_HOUREN	(1 << 23)

#define RTC_TIMALR_s	MMIO_REG(0x400e1470, struct __struct_RTC_TIMALR)
struct __struct_RTC_TIMALR
{
  uint32_t sec : 7;
  uint32_t secen : 1;
  uint32_t min : 7;
  uint32_t minen : 1;
  uint32_t hour : 6;
  uint32_t ampm : 1;
  uint32_t houren : 1;
  uint32_t  : 8;
};

#define RTC_CALALR	MMIO_REG(0x400e1474, uint32_t)
#define RTC_CALALR_MONTH(x)	((x) << 16)
#define RTC_CALALR_MONTH_MSK	0x001f0000
#define RTC_CALALR_MONTH_VAL(x)	(((x) >> 16) & 0x1f)
#define RTC_CALALR_MTHEN	(1 << 23)
#define RTC_CALALR_DATE(x)	((x) << 24)
#define RTC_CALALR_DATE_MSK	0x3f000000
#define RTC_CALALR_DATE_VAL(x)	(((x) >> 24) & 0x3f)
#define RTC_CALALR_DATEEN	(1 << 31)

#define RTC_CALALR_s	MMIO_REG(0x400e1474, struct __struct_RTC_CALALR)
struct __struct_RTC_CALALR
{
  uint32_t  : 16;
  uint32_t month : 5;
  uint32_t  : 2;
  uint32_t mthen : 1;
  uint32_t date : 6;
  uint32_t  : 1;
  uint32_t dateen : 1;
};

#define RTC_SR	MMIO_REG(0x400e1478, uint32_t)
#define RTC_SR_ACKUPD	(1 << 0)
#define RTC_SR_ALARM	(1 << 1)
#define RTC_SR_SEC	(1 << 2)
#define RTC_SR_TIMEV	(1 << 3)
#define RTC_SR_CALEV	(1 << 4)
#define RTC_SR_TDERR	(1 << 5)

#define RTC_SR_s	MMIO_REG(0x400e1478, struct __struct_RTC_SR)
struct __struct_RTC_SR
{
  uint32_t ackupd : 1;
  uint32_t alarm : 1;
  uint32_t sec : 1;
  uint32_t timev : 1;
  uint32_t calev : 1;
  uint32_t tderr : 1;
  uint32_t  : 26;
};

#define RTC_SCCR	MMIO_REG(0x400e147c, uint32_t)
#define RTC_SCCR_ACKCLR	(1 << 0)
#define RTC_SCCR_ALRCLR	(1 << 1)
#define RTC_SCCR_SECCLR	(1 << 2)
#define RTC_SCCR_TIMCLR	(1 << 3)
#define RTC_SCCR_CALCLR	(1 << 4)
#define RTC_SCCR_TDERRCLR	(1 << 5)

#define RTC_SCCR_s	MMIO_REG(0x400e147c, struct __struct_RTC_SCCR)
struct __struct_RTC_SCCR
{
  uint32_t ackclr : 1;
  uint32_t alrclr : 1;
  uint32_t secclr : 1;
  uint32_t timclr : 1;
  uint32_t calclr : 1;
  uint32_t tderrclr : 1;
  uint32_t  : 26;
};

#define RTC_IER	MMIO_REG(0x400e1480, uint32_t)
#define RTC_IER_ACKEN	(1 << 0)
#define RTC_IER_ALREN	(1 << 1)
#define RTC_IER_SECEN	(1 << 2)
#define RTC_IER_TIMEN	(1 << 3)
#define RTC_IER_CALEN	(1 << 4)
#define RTC_IER_TDERREN	(1 << 5)

#define RTC_IER_s	MMIO_REG(0x400e1480, struct __struct_RTC_IER)
struct __struct_RTC_IER
{
  uint32_t acken : 1;
  uint32_t alren : 1;
  uint32_t secen : 1;
  uint32_t timen : 1;
  uint32_t calen : 1;
  uint32_t tderren : 1;
  uint32_t  : 26;
};

#define RTC_IDR	MMIO_REG(0x400e1484, uint32_t)
#define RTC_IDR_ACKDIS	(1 << 0)
#define RTC_IDR_ALRDIS	(1 << 1)
#define RTC_IDR_SECDIS	(1 << 2)
#define RTC_IDR_TIMDIS	(1 << 3)
#define RTC_IDR_CALDIS	(1 << 4)
#define RTC_IDR_TDERRDIS	(1 << 5)

#define RTC_IDR_s	MMIO_REG(0x400e1484, struct __struct_RTC_IDR)
struct __struct_RTC_IDR
{
  uint32_t ackdis : 1;
  uint32_t alrdis : 1;
  uint32_t secdis : 1;
  uint32_t timdis : 1;
  uint32_t caldis : 1;
  uint32_t tderrdis : 1;
  uint32_t  : 26;
};

#define RTC_IMR	MMIO_REG(0x400e1488, uint32_t)
#define RTC_IMR_ACK	(1 << 0)
#define RTC_IMR_ALR	(1 << 1)
#define RTC_IMR_SEC	(1 << 2)
#define RTC_IMR_TIM	(1 << 3)
#define RTC_IMR_CAL	(1 << 4)

#define RTC_IMR_s	MMIO_REG(0x400e1488, struct __struct_RTC_IMR)
struct __struct_RTC_IMR
{
  uint32_t ack : 1;
  uint32_t alr : 1;
  uint32_t sec : 1;
  uint32_t tim : 1;
  uint32_t cal : 1;
  uint32_t  : 27;
};

#define RTC_VER	MMIO_REG(0x400e148c, uint32_t)
#define RTC_VER_NVTIM	(1 << 0)
#define RTC_VER_NVCAL	(1 << 1)
#define RTC_VER_NVTIMALR	(1 << 2)
#define RTC_VER_NVCALALR	(1 << 3)

#define RTC_VER_s	MMIO_REG(0x400e148c, struct __struct_RTC_VER)
struct __struct_RTC_VER
{
  uint32_t nvtim : 1;
  uint32_t nvcal : 1;
  uint32_t nvtimalr : 1;
  uint32_t nvcalalr : 1;
  uint32_t  : 28;
};

// 0x400e1490 GPBR

#define GPBR_0	MMIO_REG(0x400e1490, uint32_t)

#define GPBR_1	MMIO_REG(0x400e1494, uint32_t)

#define GPBR_2	MMIO_REG(0x400e1498, uint32_t)

#define GPBR_3	MMIO_REG(0x400e149c, uint32_t)

#define GPBR_4	MMIO_REG(0x400e14a0, uint32_t)

#define GPBR_5	MMIO_REG(0x400e14a4, uint32_t)

#define GPBR_6	MMIO_REG(0x400e14a8, uint32_t)

#define GPBR_7	MMIO_REG(0x400e14ac, uint32_t)

#endif // _SAM4S_H_
