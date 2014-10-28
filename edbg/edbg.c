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
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
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
#include "target.h"
#include "edbg.h"
#include "dap.h"

/*- Definitions -------------------------------------------------------------*/
#define DEBUGGER_VID      "03eb"
#define DEBUGGER_PID      "2111"
#define MAX_DEBUGGERS     20
#define HID_BUFFER_SIZE   513 // Atmel EDBG expects 512 bytes + 1 byte for report ID
#define DAP_FREQ          8000000 // Hz

/*- Types -------------------------------------------------------------------*/
typedef struct
{
  char     *name;
  char     *serial;
  char     *manufacturer;
  char     *product;
} debugger_t;

/*- Variables ---------------------------------------------------------------*/
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
static target_t *target;
static uint8_t hid_buffer[HID_BUFFER_SIZE];

/*- Implementations ---------------------------------------------------------*/

//-----------------------------------------------------------------------------
void verbose(char *fmt, ...)
{
  va_list args;

  if (g_verbose)
  {
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);

    fflush(stdout);
  }
}

//-----------------------------------------------------------------------------
void check(bool cond, char *fmt, ...)
{
  if (!cond)
  {
    va_list args;

    if (-1 != debugger_fd)
      close(debugger_fd);

    va_start(args, fmt);
    fprintf(stderr, "Error: ");
    vfprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
    va_end(args);

    exit(1);
  }
}

//-----------------------------------------------------------------------------
void error_exit(char *fmt, ...)
{
  va_list args;

  if (-1 != debugger_fd)
    close(debugger_fd);

  va_start(args, fmt);
  fprintf(stderr, "Error: ");
  vfprintf(stderr, fmt, args);
  fprintf(stderr, "\n");
  va_end(args);

  exit(1);
}

//-----------------------------------------------------------------------------
void perror_exit(char *text)
{
  if (-1 != debugger_fd)
    close(debugger_fd);

  perror(text);

  exit(1);
}

//-----------------------------------------------------------------------------
void *buf_alloc(int size)
{
  void *buf;

  if (NULL == (buf = malloc(size)))
    error_exit("out of memory");

  return buf;
}

//-----------------------------------------------------------------------------
void buf_free(void *buf)
{
  free(buf);
}

//-----------------------------------------------------------------------------
int load_file(char *name, uint8_t *data, int size)
{
  struct stat stat;
  int fd, rsize;

  check(NULL != name, "input file name is not specified");

  fd = open(name, O_RDONLY);

  if (fd < 0)
    perror_exit("open()");

  fstat(fd, &stat);

  check(stat.st_size <= size, "image is too big for the selected chip");

  rsize = read(fd, data, stat.st_size);

  if (rsize < 0)
    perror_exit("read()");
  
  check(rsize == stat.st_size, "cannot fully read file");

  close(fd);

  return rsize;
}

//-----------------------------------------------------------------------------
void save_file(char *name, uint8_t *data, int size)
{
  int fd, rsize;

  check(NULL != name, "output file name is not specified");

  fd = open(name, O_WRONLY | O_TRUNC | O_CREAT, 0644);

  if (fd < 0)
    perror_exit("open()");

  rsize = write(fd, data, size);

  if (rsize < 0)
    perror_exit("write()");

  check(rsize == size, "error writing the file");

  close(fd);
}

//-----------------------------------------------------------------------------
int dap_cmd(uint8_t *data, int size, int rsize)
{
  char cmd = data[0];
  int res;

  memset(hid_buffer, 0xff, HID_BUFFER_SIZE);

  hid_buffer[0] = 0x00; // Report ID
  memcpy(&hid_buffer[1], data, rsize);

  res = write(debugger_fd, hid_buffer, HID_BUFFER_SIZE/*rsize+1*/); // Atmel EDBG expects 512 bytes
  if (res < 0)
    perror_exit("debugger write()");

  res = read(debugger_fd, hid_buffer, sizeof(hid_buffer));
  if (res < 0)
    perror_exit("debugger read()");

  check(res, "empty response received");

  check(hid_buffer[0] == cmd, "invalid response received");

  res--;
  memcpy(data, &hid_buffer[1], (size < res) ? size : res);

  return res;
}

//-----------------------------------------------------------------------------
static void enumerate_debuggers(void)
{
  struct udev *udev;
  struct udev_enumerate *enumerate;
  struct udev_list_entry *devices, *dev_list_entry;
  struct udev_device *dev, *parent;

  udev = udev_new();
  check(udev, "unable to create udev object");

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
    check(parent, "unable to find parent usb device");

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
  printf("Atmel EDBG programmer v0.5, built " __DATE__ " " __TIME__ " \n");
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

  check(optind >= argc, "malformed command line, use -h for more information");
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
  dap_connect();
  dap_swj_clock(DAP_FREQ);
  dap_transfer_configure(0, 100, 0);
  dap_swd_configure(0);
  dap_led(0, 1);
  dap_reset_target();
  dap_reset_link();
  target = target_identify();
  dap_target_prepare();

  target->ops->select();

  if (g_erase)
    target->ops->erase();

  if (g_program)
    target->ops->program(g_file);

  if (g_verify)
    target->ops->verify(g_file);

  if (g_lock)
    target->ops->lock();

  if (g_read)
    target->ops->read(g_file);

  dap_reset_target_hw();
  dap_disconnect();
  dap_led(0, 0);

  close(debugger_fd);

  return 0;
}

