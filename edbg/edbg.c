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
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <linux/types.h>
#include <linux/input.h>
#include <linux/hidraw.h>
#include <libudev.h>

//-----------------------------------------------------------------------------
#define DEBUGGER_VID      "03eb"
#define DEBUGGER_PID      "2111"
#define MAX_DEBUGGERS     20
#define HID_BUFFER_SIZE   513 // Atmel EDBG expects 512 bytes + 1 byte for report ID
#define DAP_FREQ          1000000 // Hz

//-----------------------------------------------------------------------------
enum
{
  ID_DAP_INFO               = 0x00,
  ID_DAP_LED                = 0x01,
  ID_DAP_CONNECT            = 0x02,
  ID_DAP_DISCONNECT         = 0x03,
  ID_DAP_TRANSFER_CONFIGURE = 0x04,
  ID_DAP_TRANSFER           = 0x05,
  ID_DAP_TRANSFER_BLOCK     = 0x06,
  ID_DAP_TRANSFER_ABORT     = 0x07,
  ID_DAP_WRITE_ABORT        = 0x08,
  ID_DAP_DELAY              = 0x09,
  ID_DAP_RESET_TARGET       = 0x0a,
  ID_DAP_SWJ_PINS           = 0x10,
  ID_DAP_SWJ_CLOCK          = 0x11,
  ID_DAP_SWJ_SEQUENCE       = 0x12,
  ID_DAP_SWD_CONFIGURE      = 0x13,
  ID_DAP_JTAG_SEQUENCE      = 0x14,
  ID_DAP_JTAG_CONFIGURE     = 0x15,
  ID_DAP_JTAG_IDCODE        = 0x16,
};

enum
{
  DAP_INFO_VENDOR           = 0x01,
  DAP_INFO_PRODUCT          = 0x02,
  DAP_INFO_SER_NUM          = 0x03,
  DAP_INFO_FW_VER           = 0x04,
  DAP_INFO_DEVICE_VENDOR    = 0x05,
  DAP_INFO_DEVICE_NAME      = 0x06,
  DAP_INFO_CAPABILITIES     = 0xf0,
  DAP_INFO_PACKET_COUNT     = 0xfe,
  DAP_INFO_PACKET_SIZE      = 0xff,
};

enum
{
  DAP_TRANSFER_APnDP        = 1 << 0,
  DAP_TRANSFER_RnW          = 1 << 1,
  DAP_TRANSFER_A2           = 1 << 2,
  DAP_TRANSFER_A3           = 1 << 3,
  DAP_TRANSFER_MATCH_VALUE  = 1 << 4,
  DAP_TRANSFER_MATCH_MASK   = 1 << 5,
};

enum
{
  DAP_PORT_SWD   = 1 << 0,
  DAP_PORT_JTAG  = 1 << 1,
};

enum
{
  DAP_OK    = 0x00,
  DAP_ERROR = 0xff,
};

enum
{
  SWD_DP_R_IDCODE    = 0x00,
  SWD_DP_W_ABORT     = 0x00,
  SWD_DP_R_CTRL_STAT = 0x04,
  SWD_DP_W_WCR       = 0x04,
  SWD_DP_R_RESEND    = 0x08,
  SWD_DP_W_SELECT    = 0x08,
  SWD_DP_R_RDBUFF    = 0x0c,
};

enum
{
  SWD_AP_CSW  = 0x00 | DAP_TRANSFER_APnDP,
  SWD_AP_TAR  = 0x04 | DAP_TRANSFER_APnDP,
  SWD_AP_DRW  = 0x0c | DAP_TRANSFER_APnDP,

  SWD_AP_DB0  = 0x00 | DAP_TRANSFER_APnDP, // 0x10
  SWD_AP_DB1  = 0x04 | DAP_TRANSFER_APnDP, // 0x14
  SWD_AP_DB2  = 0x08 | DAP_TRANSFER_APnDP, // 0x18
  SWD_AP_DB3  = 0x0c | DAP_TRANSFER_APnDP, // 0x1c

  SWD_AP_CFG  = 0x04 | DAP_TRANSFER_APnDP, // 0xf4
  SWD_AP_BASE = 0x08 | DAP_TRANSFER_APnDP, // 0xf8
  SWD_AP_IDR  = 0x0c | DAP_TRANSFER_APnDP, // 0xfc
};

typedef struct
{
  uint32_t  idcode;
  char      *name;
  uint32_t  flash_start;
  uint32_t  flash_size;
  uint32_t  page_size;
  uint32_t  n_pages;
  uint32_t  row_size;
} target_t;

typedef struct
{
  char *name;
  char *serial;
  char *manufacturer;
  char *product;
} debugger_t;

//-----------------------------------------------------------------------------
// TODO: This is actually wrong. 0x0bc11477 is a common ID for all Cortex devices
// The real ID must be read from the device I/O-space.
static target_t targets[] =
{
  { 0x0bc11477, "SAMD20J18", 0, 131072, 64, 4096, 256 },
  { 0, "", 0, 0, 0, 0, 0 },
};

static const struct option long_options[] =
{
  { "help",      no_argument,        0, 'h' },
  { "erase",     no_argument,        0, 'e' },
  { "program",   no_argument,        0, 'p' },
  { "verify",    no_argument,        0, 'v' },
  { "lock",      no_argument,        0, 'k' },
  { "read",      no_argument,        0, 'r' },
  { "file",      required_argument,  0, 'f' },
  { "list",      no_argument,        0, 'l' },
  { "serial",    required_argument,  0, 's' },
  { "verbose",   no_argument,        0, 'b' },
  { 0, 0, 0, 0 }
};

static const char *short_options = "hepvkrf:ls:b";

static bool g_erase = false;
static bool g_program = false;
static bool g_verify = false;
static bool g_lock = false;
static bool g_read = false;
static char *g_file = NULL;
static char *g_serial = NULL;
static bool g_list = false;
static bool g_verbose = false;

static debugger_t debuggers[MAX_DEBUGGERS];
static int n_debuggers = 0;
static int debugger = -1;
static int debugger_fd = -1;
static int file_fd = -1;
static target_t *target;
static uint8_t hid_buffer[HID_BUFFER_SIZE];

//-----------------------------------------------------------------------------
static void error_exit(char *text)
{
  if (-1 != debugger_fd)
    close(debugger_fd);

  if (-1 != file_fd)
    close(file_fd);

  fprintf(stderr, "Error: %s\n", text);
  exit(1);
}

//-----------------------------------------------------------------------------
static void perror_exit(char *text)
{
  if (-1 != debugger_fd)
    close(debugger_fd);

  if (-1 != file_fd)
    close(file_fd);

  perror(text);
  exit(1);
}

//-----------------------------------------------------------------------------
static int dap_cmd(uint8_t *data, int size, int rsize)
{
  char cmd = data[0];
  int res;

  memset(hid_buffer, 0xff, HID_BUFFER_SIZE);

  hid_buffer[0] = 0x00; // Report ID
  memcpy(&hid_buffer[1], data, rsize);

  res = write(debugger_fd, hid_buffer, HID_BUFFER_SIZE/*rsize+1*/); // Atmel EDBG expects 512 bytes
  if (res < 0)
    perror_exit("write()");

  res = read(debugger_fd, hid_buffer, sizeof(hid_buffer));
  if (res < 0)
    perror_exit("read()");

  if (res == 0)
    error_exit("empty response received");

  if (hid_buffer[0] != cmd)
    error_exit("invalid response received");

  res--;
  memcpy(data, &hid_buffer[1], (size < res) ? size : res);

  return res;
}

//-----------------------------------------------------------------------------
static void dap_led(int index, int state)
{
  uint8_t buf[3];

  buf[0] = ID_DAP_LED;
  buf[1] = index;
  buf[2] = state;
  dap_cmd(buf, sizeof(buf), 3);

  if (buf[0] != DAP_OK)
    error_exit("DAP_LED failed");
}

//-----------------------------------------------------------------------------
static void dap_connect(int port)
{
  uint8_t buf[2];

  buf[0] = ID_DAP_CONNECT;
  buf[1] = port;
  dap_cmd(buf, sizeof(buf), 2);

  if (buf[0] != port)
    error_exit("Failed to connect on a requested port");
}

//-----------------------------------------------------------------------------
static void dap_disconnect(void)
{
  uint8_t buf[1];

  buf[0] = ID_DAP_DISCONNECT;
  dap_cmd(buf, sizeof(buf), 1);
}

//-----------------------------------------------------------------------------
static void dap_swj_clock(uint32_t clock)
{
  uint8_t buf[5];

  buf[0] = ID_DAP_SWJ_CLOCK;
  buf[1] = clock & 0xff;
  buf[2] = (clock >> 8) & 0xff;
  buf[3] = (clock >> 16) & 0xff;
  buf[4] = (clock >> 24) & 0xff;
  dap_cmd(buf, sizeof(buf), 5);

  if (buf[0] != DAP_OK)
    error_exit("SWJ_CLOCK failed");
}

//-----------------------------------------------------------------------------
static void dap_transfer_configure(uint8_t idle, uint16_t count, uint16_t retry)
{
  uint8_t buf[6];

  buf[0] = ID_DAP_TRANSFER_CONFIGURE;
  buf[1] = idle;
  buf[2] = count & 0xff;
  buf[3] = (count >> 8) & 0xff;
  buf[4] = retry & 0xff;
  buf[5] = (retry >> 8) & 0xff;
  dap_cmd(buf, sizeof(buf), 6);

  if (buf[0] != DAP_OK)
    error_exit("TRANSFER_CONFIGURE failed");
}

//-----------------------------------------------------------------------------
static void dap_swd_configure(uint8_t cfg)
{
  uint8_t buf[2];

  buf[0] = ID_DAP_SWD_CONFIGURE;
  buf[1] = cfg;
  dap_cmd(buf, sizeof(buf), 2);

  if (buf[0] != DAP_OK)
    error_exit("SWD_CONFIGURE failed");
}

//-----------------------------------------------------------------------------
static void get_debugger_info(void)
{
  uint8_t buf[100];
  char str[500];
  char *ptr = str;

  buf[0] = ID_DAP_INFO;
  buf[1] = DAP_INFO_VENDOR;
  dap_cmd(buf, sizeof(buf), 2);
  memcpy(ptr, &buf[1], buf[0]-1); // -1 fixes a bug in Atmel EDBG
  ptr += buf[0]-1;
  *ptr++ = ' ';

  buf[0] = ID_DAP_INFO;
  buf[1] = DAP_INFO_PRODUCT;
  dap_cmd(buf, sizeof(buf), 2);
  memcpy(ptr, &buf[1], buf[0]-1);
  ptr += buf[0]-1;
  *ptr++ = ' ';

  buf[0] = ID_DAP_INFO;
  buf[1] = DAP_INFO_SER_NUM;
  dap_cmd(buf, sizeof(buf), 2);
  memcpy(ptr, &buf[1], buf[0]-1);
  ptr += buf[0]-1;
  *ptr++ = ' ';

  buf[0] = ID_DAP_INFO;
  buf[1] = DAP_INFO_FW_VER;
  dap_cmd(buf, sizeof(buf), 2);
  memcpy(ptr, &buf[1], buf[0]-1);
  ptr += buf[0]-1;
  *ptr++ = ' ';

  buf[0] = ID_DAP_INFO;
  buf[1] = DAP_INFO_CAPABILITIES;
  dap_cmd(buf, sizeof(buf), 2);

  *ptr++ = '(';
  if (buf[1] & DAP_PORT_SWD)
    *ptr++ = 'S';
  if (buf[1] & DAP_PORT_JTAG)
    *ptr++ = 'J';
  *ptr++ = ')';
  *ptr = 0;

  if (g_verbose)
    printf("Debugger: %s\n", str);

  if (!(buf[1] & DAP_PORT_SWD))
    error_exit("SWD support required");
}

//-----------------------------------------------------------------------------
static void dap_reset_target(void)
{
  uint8_t buf[2];

  buf[0] = ID_DAP_RESET_TARGET;
  buf[1] = 0; // DAP index
  dap_cmd(buf, sizeof(buf), 2);
}

//-----------------------------------------------------------------------------
static uint32_t dap_read_reg(uint8_t reg)
{
  uint8_t buf[8];

  buf[0] = ID_DAP_TRANSFER;
  buf[1] = 0x00; // DAP index
  buf[2] = 0x01; // Request size
  buf[3] = reg | DAP_TRANSFER_RnW;
  dap_cmd(buf, sizeof(buf), 4);
  // TODO: check SWD_DP_R_CTRL_STAT

  return ((uint32_t)buf[5] << 24) | ((uint32_t)buf[4] << 16) |
         ((uint32_t)buf[3] << 8) | (uint32_t)buf[2];
}

//-----------------------------------------------------------------------------
static void dap_write_reg(uint8_t reg, uint32_t data)
{
  uint8_t buf[8];

  buf[0] = ID_DAP_TRANSFER;
  buf[1] = 0x00; // DAP index
  buf[2] = 0x01; // Request size
  buf[3] = reg;
  buf[4] = data & 0xff;
  buf[5] = (data >> 8) & 0xff;
  buf[6] = (data >> 16) & 0xff;
  buf[7] = (data >> 24) & 0xff;
  dap_cmd(buf, sizeof(buf), 8);
  // TODO: check SWD_DP_R_CTRL_STAT (0xF0000040)
}

//-----------------------------------------------------------------------------
static uint32_t dap_read_word(uint32_t addr)
{
  dap_write_reg(SWD_AP_TAR, addr);
  return dap_read_reg(SWD_AP_DRW);
}

//-----------------------------------------------------------------------------
static void dap_write_word(uint32_t addr, uint32_t data)
{
  dap_write_reg(SWD_AP_TAR, addr);
  dap_write_reg(SWD_AP_DRW, data);
}

//-----------------------------------------------------------------------------
static void dap_read_block(uint32_t addr, uint8_t *data, int size)
{
  uint8_t buf[512];

  dap_write_reg(SWD_AP_TAR, addr);

  buf[0] = ID_DAP_TRANSFER_BLOCK;
  buf[1] = 0x00; // DAP index
  buf[2] = (size / 4) & 0xff;
  buf[3] = ((size / 4) >> 8) & 0xff;
  buf[4] = SWD_AP_DRW | DAP_TRANSFER_RnW | DAP_TRANSFER_APnDP;
  dap_cmd(buf, sizeof(buf), 5);
  // TODO: check SWD_DP_R_CTRL_STAT (0xF0000040)

  memcpy(data, &buf[3], size);
}

//-----------------------------------------------------------------------------
static void dap_write_block(uint32_t addr, uint8_t *data, int size)
{
  uint8_t buf[512];

  dap_write_reg(SWD_AP_TAR, addr);

  buf[0] = ID_DAP_TRANSFER_BLOCK;
  buf[1] = 0x00; // DAP index
  buf[2] = (size / 4) & 0xff;
  buf[3] = ((size / 4) >> 8) & 0xff;
  buf[4] = SWD_AP_DRW | DAP_TRANSFER_APnDP;
  memcpy(&buf[5], data, size);
  dap_cmd(buf, sizeof(buf), 5 + size);
  // TODO: check SWD_DP_R_CTRL_STAT (0xF0000040)
}

//-----------------------------------------------------------------------------
static void target_reset_link(void)
{
  uint8_t buf[9];

  //-------------
  buf[0] = ID_DAP_SWJ_SEQUENCE;
  buf[1] = 7 * 8;
  memset(&buf[2], 0xff, 7);
  dap_cmd(buf, sizeof(buf), 9);

  if (buf[0] != DAP_OK)
    error_exit("SWJ_SEQUENCE failed");

  //-------------
  buf[0] = ID_DAP_SWJ_SEQUENCE;
  buf[1] = 2 * 8;
  buf[2] = 0x9e;
  buf[3] = 0xe7;
  dap_cmd(buf, sizeof(buf), 4);

  if (buf[0] != DAP_OK)
    error_exit("SWJ_SEQUENCE failed");

  //-------------
  buf[0] = ID_DAP_SWJ_SEQUENCE;
  buf[1] = 7 * 8;
  memset(&buf[2], 0xff, 7);
  dap_cmd(buf, sizeof(buf), 9);

  if (buf[0] != DAP_OK)
    error_exit("SWJ_SEQUENCE failed");

  //-------------
  buf[0] = ID_DAP_SWJ_SEQUENCE;
  buf[1] = 8;
  buf[2] = 0x00;
  dap_cmd(buf, sizeof(buf), 3);

  if (buf[0] != DAP_OK)
    error_exit("SWJ_SEQUENCE failed");
}

//-----------------------------------------------------------------------------
static void target_read_idcode(void)
{
  uint32_t idcode;

  idcode = dap_read_reg(SWD_DP_R_IDCODE);

  for (target = targets; target->idcode > 0; target++)
  {
    if (target->idcode == idcode)
    {
      if (g_verbose)
        printf("Target: %s (0x%08x)\r\n", target->name, idcode);
      return;
    }
  }

  printf("IDCODE = 0x%08x\r\n", idcode);
  error_exit("unknown target device");
}

//-----------------------------------------------------------------------------
static void target_prepare(void)
{
  dap_write_reg(SWD_DP_W_SELECT, 0x00000000);
  dap_write_reg(SWD_DP_W_WCR, 0x50000f00);
  dap_write_reg(SWD_AP_CSW, 0x23000052);
}

//-----------------------------------------------------------------------------
static void target_erase()
{
  if (g_verbose)
    printf("Erasing... ");

  dap_write_word(0x41002100, 0x00001f00); // clear flags
  dap_write_word(0x41002100, 0x00000010); // chip erase
  while (0 == (dap_read_word(0x41002100) & 0x00000100));

  if (g_verbose)
    printf("done.\n");
}

//-----------------------------------------------------------------------------
static void target_program(void)
{
  uint32_t flash_size = target->flash_size;
  uint32_t row_size = target->row_size;
  uint32_t addr = target->flash_start;
  int size = row_size;
  struct stat stat;
  uint8_t *buf;

  if (dap_read_word(0x41002100) & 0x00010000)
    error_exit("devices is locked, perform a chip erase before programming");

  if (NULL == g_file)
    error_exit("please specify the file to program");

  file_fd = open(g_file, O_RDONLY);

  if (file_fd < 0)
    perror_exit("open()");

  fstat(file_fd, &stat);

  if (stat.st_size > flash_size)
    error_exit("image is too big too fit into selected chip");

  if (NULL == (buf = malloc(row_size)))
    error_exit("out of memory");

  if (g_verbose)
    printf("Programming...");

  while (1)
  {
    memset(buf, 0xff, row_size);

    size = read(file_fd, buf, size);

    if (size < 0)
      perror_exit("read()");
    else if (0 == size)
      break;

    dap_write_word(0x4100401c, addr >> 1);

    dap_write_word(0x41004000, 0x0000a541); // Unlock Region
    while (0 == (dap_read_word(0x41004014) & 1));

    dap_write_word(0x41004000, 0x0000a502); // Erase Row
    while (0 == (dap_read_word(0x41004014) & 1));

    dap_write_block(addr, buf, row_size);

    if (g_verbose)
    {
      printf(".");
      fflush(stdout);
    }

    addr += row_size;
  }

  if (g_verbose)
    printf(" done.\n");

  free(buf);
  close(file_fd);
  file_fd = -1;
}

//-----------------------------------------------------------------------------
static void target_verify(void)
{
  uint32_t flash_size = target->flash_size;
  uint32_t row_size = target->row_size;
  uint32_t addr = target->flash_start;
  int size = row_size;
  struct stat stat;
  uint8_t *bufa, *bufb;

  if (dap_read_word(0x41002100) & 0x00010000)
    error_exit("devices is locked, unable to verify");

  if (NULL == g_file)
    error_exit("please specify the file to verify");

  file_fd = open(g_file, O_RDONLY);

  if (file_fd < 0)
    perror_exit("open()");

  fstat(file_fd, &stat);

  if (stat.st_size > flash_size)
    error_exit("image is bigger than the chip size");

  if (NULL == (bufa = malloc(row_size)))
    error_exit("out of memory");

  if (NULL == (bufb = malloc(row_size)))
    error_exit("out of memory");

  if (g_verbose)
    printf("Verification...");

  while (1)
  {
    size = read(file_fd, bufa, size);

    if (size < 0)
      perror_exit("read()");
    else if (0 == size)
      break;

    dap_read_block(addr, bufb, row_size);

    if (g_verbose)
    {
      printf(".");
      fflush(stdout);
    }

    for (int i = 0; i < (int)size; i++)
    {
      if (bufa[i] != bufb[i])
      {
        printf("\nat address 0x%x expected 0x%02x, read 0x%02x\n", addr + i, bufa[i], bufb[i]);
        free(bufa);
        free(bufb);
        error_exit("verification failed");
      }
    }

    addr += row_size;
  }

  if (g_verbose)
    printf(" done.\n");

  free(bufa);
  free(bufb);
  close(file_fd);
  file_fd = -1;
}

//-----------------------------------------------------------------------------
static void read_device(void)
{
  uint32_t flash_size = target->flash_size;
  uint32_t row_size = target->row_size;
  uint32_t addr = target->flash_start;
  int size = row_size;
  uint8_t *buf;

  if (dap_read_word(0x41002100) & 0x00010000)
    error_exit("devices is locked, unable to read");

  if (NULL == g_file)
    error_exit("please specify the output file");

  file_fd = open(g_file, O_WRONLY | O_TRUNC | O_CREAT, 0644);

  if (file_fd < 0)
    perror_exit("open()");

  if (NULL == (buf = malloc(row_size)))
    error_exit("out of memory");

  if (g_verbose)
    printf("Reading...");

  while (flash_size)
  {
    dap_read_block(addr, buf, row_size);

    size = write(file_fd, buf, row_size);

    if (size < 0)
      perror_exit("write()");
    else if ((int)row_size != size)
      perror_exit("error writing the file");

    if (g_verbose)
    {
      printf(".");
      fflush(stdout);
    }

    addr += row_size;
    flash_size -= row_size;
  }

  if (g_verbose)
    printf(" done.\n");

  free(buf);
  close(file_fd);
  file_fd = -1;
}

//-----------------------------------------------------------------------------
static void target_lock(void)
{
  if (g_verbose)
    printf("Locking... ");

  dap_write_word(0x41004000, 0x0000a545); // Set Security Bit

  if (g_verbose)
    printf("done.\n");
}

//-----------------------------------------------------------------------------
static void enumerate_debuggers(void)
{
  struct udev *udev;
  struct udev_enumerate *enumerate;
  struct udev_list_entry *devices, *dev_list_entry;
  struct udev_device *dev, *parent;

  udev = udev_new();
  if (!udev)
    error_exit("unable to create udev object");

  enumerate = udev_enumerate_new(udev);
  udev_enumerate_add_match_subsystem(enumerate, "hidraw");
  udev_enumerate_scan_devices(enumerate);
  devices = udev_enumerate_get_list_entry(enumerate);

  udev_list_entry_foreach(dev_list_entry, devices)
  {
    const char *path;

    path = udev_list_entry_get_name(dev_list_entry);
    dev = udev_device_new_from_syspath(udev, path);

    parent = udev_device_get_parent_with_subsystem_devtype(dev, "usb", "usb_device");
    if (!parent)
      error_exit("unable to find parent usb device");

    if (0 == strcmp(udev_device_get_sysattr_value(parent, "idVendor"), DEBUGGER_VID) &&
        0 == strcmp(udev_device_get_sysattr_value(parent, "idProduct"), DEBUGGER_PID) &&
        n_debuggers < MAX_DEBUGGERS)
    {
      const char *serial = udev_device_get_sysattr_value(parent, "serial");
      const char *manufacturer = udev_device_get_sysattr_value(parent, "manufacturer");
      const char *product = udev_device_get_sysattr_value(parent, "product");

      debuggers[n_debuggers].name = strdup(udev_device_get_devnode(dev));
      debuggers[n_debuggers].serial = serial ? strdup(serial) : "<unknown>";
      debuggers[n_debuggers].manufacturer = manufacturer ? strdup(manufacturer) : "<unknown>";
      debuggers[n_debuggers].product = product ? strdup(product) : "<unknown>";

      n_debuggers++;
    }

    udev_device_unref(parent);
  }

  udev_enumerate_unref(enumerate);
  udev_unref(udev);
}

//-----------------------------------------------------------------------------
static void print_help(char *name)
{
  printf("Usage: %s [options]\n", name);
  printf("Options:\n");
  printf("  -h, --help                 print this help message and exit\n");
  printf("  -e, --erase                perform a chip erase before programming\n");
  printf("  -p, --program              program the chip\n");
  printf("  -v, --verify               verify memory\n");
  printf("  -k, --lock                 lock the chip (set security bit)\n");
  printf("  -r, --read                 read the contents of the chip\n");
  printf("  -f, --file <file>          binary file to be programmed or verified\n");
  printf("  -l, --list                 list all available debuggers\n");
  printf("  -s, --serial <number>      use a debugger with a specified serial number\n");
  printf("  -b, --verbose              print verbose messages\n");
  exit(0);
}

//-----------------------------------------------------------------------------
static void parse_command_line(int argc, char **argv)
{
  int option_index = 0;
  int c;

  while ((c = getopt_long(argc, argv, short_options, long_options, &option_index)) != -1)
  {
    switch (c)
    {
      case 'h': print_help(argv[0]); break;
      case 'e': g_erase = true; break;
      case 'p': g_program = true; break;
      case 'v': g_verify = true; break;
      case 'k': g_lock = true; break;
      case 'r': g_read = true; break;
      case 'f': g_file = optarg; break;
      case 'l': g_list = true; break;
      case 's': g_serial = optarg; break;
      case 'b': g_verbose = true; break;
      default: exit(1); break;
    }
  }

  if (optind < argc)
    error_exit("malformed command line, use -h for more information");
}

//-----------------------------------------------------------------------------
int main(int argc, char **argv)
{
  parse_command_line(argc, argv);

  if (!(g_erase || g_program || g_verify || g_lock || g_read || g_list))
    error_exit("no actions specified");

  if (g_read && (g_erase || g_program || g_verify || g_lock))
    error_exit("mutually exclusive actions specified");

  enumerate_debuggers();

  if (g_list)
  {
    printf("Attached debuggers:\n");
    for (int i = 0; i < n_debuggers; i++)
      printf("  %s - %s %s\n", debuggers[i].serial, debuggers[i].manufacturer, debuggers[i].product);
    return 0;
  }

  if (g_serial)
  {
    for (int i = 0; i < n_debuggers; i++)
      if (0 == strcmp(debuggers[i].serial, g_serial))
        debugger = i;

    if (-1 == debugger)
      error_exit("unable to find a debugger with specified serial number");
  }

  if (0 == n_debuggers)
    error_exit("no debuggers found");
  else if (1 == n_debuggers)
    debugger = 0;
  else if (n_debuggers > 1 && -1 == debugger)
    error_exit("more than one debugger found, please specify a serial number");

  debugger_fd = open(debuggers[debugger].name, O_RDWR);

  if (debugger_fd < 0)
    perror_exit("unable to open device");

  get_debugger_info();
  dap_connect(DAP_PORT_SWD);
  dap_swj_clock(DAP_FREQ);
  dap_transfer_configure(0, 100, 0);
  dap_swd_configure(0);
  dap_led(0, 1);
  dap_reset_target();
  target_reset_link();
  target_read_idcode();
  target_prepare();

  if (g_erase)
    target_erase();

  if (g_program)
    target_program();

  if (g_verify)
    target_verify();

  if (g_lock)
    target_lock();

  if (g_read)
    read_device();

  dap_disconnect();
  dap_reset_target();
  dap_led(0, 0);

  close(debugger_fd);

  return 0;
}

