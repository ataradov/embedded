/*
 * Copyright (c) 2013-2014, Alex Taradov <alex@taradov.com>
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

/*- Includes ----------------------------------------------------------------*/
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "target.h"
#include "edbg.h"
#include "dap.h"

/*- Definitions -------------------------------------------------------------*/
#define CHIPID_CIDR            0x400e0740

/*- Types -------------------------------------------------------------------*/
typedef struct
{
  uint32_t  chip_id;
  char      *name;
  uint32_t  flash_start;
  uint32_t  flash_size;
  uint32_t  page_size;
  uint32_t  n_pages;
  uint32_t  row_size;

//.nsectors   =  64,
//.sector_size = 8192,
//.page_size   = 512,
} device_t;


/*- Variables ---------------------------------------------------------------*/
static device_t devices[] =
{
  { 0x247e0ae0, "SAM G53G19 Rev A",	0,	512*1024,	0,	0,	0 },
  { 0x247e0ae8, "SAM G53N19 Rev A",	0,	512*1024,	0,	0,	0 },
  { 0x247e0ae1, "SAM G53G19 Rev B",	0,	512*1024,	0,	0,	0 },
  { 0x247e0ae9, "SAM G53N19 Rev B",	0,	512*1024,	0,	0,	0 },
  { 0, "", 0, 0, 0, 0, 0 },
};

static device_t *device;

/*- Implementations ---------------------------------------------------------*/

//-----------------------------------------------------------------------------
static void target_cm4_select(void)
{
  uint32_t chip_id;

  chip_id = dap_read_word(CHIPID_CIDR);

  for (device = devices; device->chip_id > 0; device++)
  {
    if (device->chip_id == chip_id)
    {
      verbose("Target: %s\n", device->name);
      return;
    }
  }

  error_exit("unknown target device (CHIP_ID = 0x%08x)", chip_id);
}

//-----------------------------------------------------------------------------
static void target_cm4_erase(void)
{
  verbose("CM4 erase\n");
//0x400e0a00 - EFC
}

//-----------------------------------------------------------------------------
static void target_cm4_lock(void)
{
  verbose("CM4 lock\n");
}

//-----------------------------------------------------------------------------
static void target_cm4_program(char *name)
{
  verbose("CM4 program %s\n", name);
  (void)name;
}

//-----------------------------------------------------------------------------
static void target_cm4_verify(char *name)
{
  verbose("CM4 verify %s\n", name);
  (void)name;
}

//-----------------------------------------------------------------------------
static void target_cm4_read(char *name)
{
  verbose("CM4 read %s\n", name);
  (void)name;
}

//-----------------------------------------------------------------------------
target_ops_t target_cm4_ops = 
{
  .select  = target_cm4_select,
  .erase   = target_cm4_erase,
  .lock    = target_cm4_lock,
  .program = target_cm4_program,
  .verify  = target_cm4_verify,
  .read    = target_cm4_read,
};

