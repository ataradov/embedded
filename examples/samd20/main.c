/*
 * Copyright (c) 2013, Alex Taradov <taradov@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

//-----------------------------------------------------------------------------
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "samd20.h"

//-----------------------------------------------------------------------------
#define LED_PIN         PORT_OUT_P14
#define BUTTON_PIN      PORT_IN_P15

#define PERIOD_FAST     100
#define PERIOD_SLOW     500

//-----------------------------------------------------------------------------
void _exit(int status)
{
  (void)status;
  while (1);
}

//-----------------------------------------------------------------------------
static inline void timer_sync(void)
{
  while (TC0_16_STATUS & TC_16_STATUS_SYNCBUSY);
}

//-----------------------------------------------------------------------------
static void timer_set_period(uint16_t i)
{
  timer_sync();
  TC0_16_CC(0) = (F_CPU / 1000ul / 256) * i;

  timer_sync();
  TC0_16_COUNT = 0;
}

//-----------------------------------------------------------------------------
void irq_handler_tc0(void)
{
  PORTA_OUTTGL = LED_PIN;
  TC0_16_INTFLAG = TC_16_INTENSET_MC0;
}

//-----------------------------------------------------------------------------
static void timer_init(void)
{
  PM_APBCMASK |= PM_APBCMASK_TC0;

  GCLK_CLKCTRL = GCLK_CLKCTRL_CLKEN | GCLK_CLKCTRL_ID(GCLK_CLKCTRL_ID_TC0_TC1) |
      GCLK_CLKCTRL_GEN(0);

  timer_sync();
  TC0_16_CTRLA = TC_16_CTRLA_MODE(TC_16_CTRLA_MODE_COUNT16) |
      TC_16_CTRLA_WAVEGEN(TC_16_CTRLA_WAVEGEN_MFRQ) |
      TC_16_CTRLA_PRESCALER(TC_16_CTRLA_PRESCALER_256) |
      TC_16_CTRLA_PRESCSYNC(TC_16_CTRLA_PRESCSYNC_PRESC);

  TC0_16_INTENSET = TC_16_INTENSET_MC0;
  NVIC_ISER = NVIC_ISER_TC0;

  timer_sync();
  TC0_16_COUNT = 0;

  timer_set_period(PERIOD_SLOW);

  timer_sync();
  TC0_16_CTRLA |= TC_16_CTRLA_ENABLE;
}

//-----------------------------------------------------------------------------
static void uart_sync(void)
{
  while (SC3_USART_STATUS & SC_USART_STATUS_SYNCBUSY);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  uint64_t br = (uint64_t)65536 * (F_CPU - 16 * baud) / F_CPU;

  PORTA_DIRSET = PORT_OUT_P24;
  PORTA_OUTSET = PORT_OUT_P24;
  PORTA_PINCFG(24) |= PORT_PINCFG_PMUXEN;
  PORTA_PMUX(12) = PORT_PMUX_PMUXE(2/*C*/);

  PM_APBCMASK |= PM_APBCMASK_SERCOM3;

  GCLK_CLKCTRL = GCLK_CLKCTRL_CLKEN | GCLK_CLKCTRL_ID(GCLK_CLKCTRL_ID_SERCOM3_CORE) |
                 GCLK_CLKCTRL_GEN(0);

  uart_sync();
  SC3_USART_CTRLA = SC_USART_CTRLA_MODE(SC_USART_CTRLA_MODE_USART_INT_CLK) |
      SC_USART_CTRLA_RXPO(3/*PAD3*/) | SC_USART_CTRLA_TXPO/*PAD2*/ |
      SC_USART_CTRLA_DORD(SC_USART_CTRLA_DORD_LSB_FIRST);

  uart_sync();
  SC3_USART_CTRLB = SC_USART_CTRLB_TXEN | SC_USART_CTRLB_CHSIZE(SC_USART_CTRLB_CHSIZE_8_BITS);

  uart_sync();
  SC3_USART_BAUD = (uint16_t)br;

  uart_sync();
  SC3_USART_CTRLA |= SC_USART_CTRLA_ENABLE;
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (!(SC3_USART_INTFLAG & SC_USART_INTFLAG_DRE));
  SC3_USART_DATA = c;
}

//-----------------------------------------------------------------------------
static void uart_puts(char *s)
{
  while (*s)
    uart_putc(*s++);
}

//-----------------------------------------------------------------------------
static void sys_init(void)
{
  // Enable interrupts
  asm volatile ("cpsie i");

  // Switch to 8MHz clock (disable prescaler)
  SYSCTRL_OSC8M = (SYSCTRL_OSC8M & ~SYSCTRL_OSC8M_PRESC_m) | SYSCTRL_OSC8M_PRESC(0);
}

//-----------------------------------------------------------------------------
int main(void)
{
  uint32_t cnt = 0;
  bool fast = false;

  sys_init();
  timer_init();
  uart_init(115200);

  uart_puts("Hello, world!\r\n");

  PORTA_DIRSET = LED_PIN;

  PORTA_DIRCLR = BUTTON_PIN;
  PORTA_OUTSET = BUTTON_PIN;
  PORTA_PINCFG(15) |= PORT_PINCFG_INEN | PORT_PINCFG_PULLEN;

  while (1)
  {
    if (PORTA_IN & BUTTON_PIN)
      cnt = 0;
    else if (cnt < 5001)
      cnt++;

    if (5000 == cnt)
    {
      fast = !fast;
      timer_set_period(fast ? PERIOD_FAST : PERIOD_SLOW);
      uart_putc('.');
    }
  }

  return 0;
}

