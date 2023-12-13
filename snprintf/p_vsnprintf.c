//-----------------------------------------------------------------------------
//
// Simple portable vsnprintf() implementation.
//
// Copyright (c) 2013, Alex Taradov <taradov@gmail.com>
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//   1. Redistributions of source code must retain the above copyright notice,
//      this list of conditions and the following disclaimer.
//   2. Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Limitations:
//   1. Some rarely used specifiers ('#', 'n', 'p', etc) are not implemented
//   3. Floating point is not supported
//
// Prototypes of implemented functions:
//   int p_vsnprintf(char *buf, size_t size, const char *fmt, va_list ap);
//   int p_snprintf(char *str, size_t size, const char *fmt, ...);
//
//-----------------------------------------------------------------------------
#include <stdarg.h>
#include <stdlib.h>

//-----------------------------------------------------------------------------
//#define ENABLE_TESTS
//#define ENABLE_FLOAT

#define PUT_CHR(c) \
  do { \
    char __c = c; \
    if (buf < end) \
      *buf++ = __c; \
    nch++; \
  } while (0)

//-----------------------------------------------------------------------------
enum
{
  FL_ZERO_PAD     = 1 << 0,
  FL_LEFT_JUST    = 1 << 1,
  FL_BLANK_SIGN   = 1 << 2,
  FL_ALWAYS_SIGN  = 1 << 3,
  FL_UPPERCASE    = 1 << 4,
  FL_UNSIGNED     = 1 << 5,
  FL_INT          = 1 << 6,
  FL_DOUBLE       = 1 << 7,
  FL_STRING       = 1 << 8,
  FL_CHAR         = 1 << 9,
  FL_SHORT        = 1 << 10,
  FL_LONG         = 1 << 11,
  FL_LONG_LONG    = 1 << 12,
  FL_OCT          = 1 << 13,
  FL_HEX          = 1 << 14,
  FL_EXP          = 1 << 15,
};

//-----------------------------------------------------------------------------
static int put_int(char *buf, char *end, int flags, int width, int prec, long long val)
{
  unsigned long long uval = val;
  int fwidth, len = 0, nch = 0;
  char tmp[64];
  char *hex = (flags & FL_UPPERCASE) ? "0123456789ABCDEF" : "0123456789abcdef";
  int base = (flags & FL_OCT) ? 8 : (flags & FL_HEX) ? 16 : 10;
  int zero = flags & FL_ZERO_PAD ? 1 : 0;
  int ljust = flags & FL_LEFT_JUST ? 1 : 0;
  char sign = 0;

  if (0 == (flags & FL_UNSIGNED))
  {
    if (val < 0)
    {
      uval = -val;
      sign = '-';
    }
    else if (flags & FL_ALWAYS_SIGN)
      sign = '+';
    else if (flags & FL_BLANK_SIGN)
      sign = ' ';
  }

  do
  {
    tmp[len++] = hex[uval % base];
    uval /= base;
  } while (uval);

  while (len < prec)
    tmp[len++] = '0';

  fwidth = len + (sign ? 1 : 0);
  if (fwidth < width)
    fwidth = width;

  while (!zero && !ljust && (fwidth > (len + (sign ? 1 : 0))))
  {
    PUT_CHR(' ');
    fwidth--;
  }

  if (sign)
  {
    PUT_CHR(sign);
    fwidth--;
  }

  while (zero & !ljust && fwidth > len)
  {
    PUT_CHR('0');
    fwidth--;
  }

  while (len)
  {
    PUT_CHR(tmp[--len]);
    fwidth--;
  }

  while (ljust && fwidth)
  {
    PUT_CHR(' ');
    fwidth--;
  }

  return nch;
}

//-----------------------------------------------------------------------------
#ifdef ENABLE_FLOAT
static int put_double(char *buf, char *end, int flags, int width, int prec, double val)
{
  // Not implemented
  return 0;
}
#endif

//-----------------------------------------------------------------------------
static int put_string(char *buf, char *end, int flags, int width, char *val)
{
  int i, fwidth, len = 0, nch = 0;
  int ljust = flags & FL_LEFT_JUST ? 1 : 0;

  if (!val)
    val = "(null)";

  while (val[len])
    len++;

  fwidth = len;
  if (fwidth < width)
    fwidth = width;

  while (!ljust && (fwidth > len))
  {
    PUT_CHR(' ');
    fwidth--;
  }

  for (i = 0; i < len; i++)
  {
    PUT_CHR(val[i]);
    fwidth--;
  }

  while (ljust && fwidth)
  {
    PUT_CHR(' ');
    fwidth--;
  }

  return nch;
}

//-----------------------------------------------------------------------------
int p_vsnprintf(char *buf, size_t size, const char *fmt, va_list ap)
{
  int nr, flags, width, prec, nch = 0;
  char *end = buf + size;
  char c;

  while (*fmt)
  {
    c = *fmt++;

    if (c != '%')
    {
      PUT_CHR(c);
      continue;
    }

    c = *fmt++;
    flags = width = 0;
    prec = 0;

    while (1)
    {
      if (c == '0')
        flags |= FL_ZERO_PAD;
      else if (c == '-')
        flags |= FL_LEFT_JUST;
      else if (c == ' ')
        flags |= FL_BLANK_SIGN;
      else if (c == '+')
        flags |= FL_ALWAYS_SIGN;
      else if (c == '*')
      {
        width = va_arg(ap, int);
        if (width < 0)
        {
          width = -width;
          flags |= FL_LEFT_JUST;
        }
      }
      else
        break;

      c = *fmt++;
    }

    for (; '0' <= c && c <= '9'; c = *fmt++)
      width = width * 10 + (c - '0');

    if (c == '.')
    {
      c = *fmt++;

      if (c == '*')
      {
        prec = va_arg(ap, int);
        c = *fmt++;
      }
      else if ('0' <= c && c <= '9')
      {
        for (; '0' <= c && c <= '9'; c = *fmt++)
          prec = prec * 10 + (c - '0');
      }
      else
        prec = 6;
    }

    while (1)
    {
      if (c == 'h')
        flags |= (flags & FL_SHORT) ? FL_CHAR : FL_SHORT;
      else if (c == 'l')
        flags |= (flags & FL_LONG) ? FL_LONG_LONG : FL_LONG;
      else
        break;

      c = *fmt++;
    }

    if (c == 'd' || c == 'i')
      flags |= FL_INT;
    else if (c == 'o')
      flags |= FL_INT | FL_UNSIGNED | FL_OCT;
    else if (c == 'u')
      flags |= FL_INT | FL_UNSIGNED;
    else if (c == 'x')
      flags |= FL_INT | FL_UNSIGNED | FL_HEX;
    else if (c == 'X')
      flags |= FL_INT | FL_UNSIGNED | FL_HEX | FL_UPPERCASE;
    else if (c == 'f')
      flags |= FL_DOUBLE;
    else if (c == 'F')
      flags |= FL_DOUBLE | FL_UPPERCASE;
    else if (c == 'e')
      flags |= FL_DOUBLE | FL_EXP;
    else if (c == 'E')
      flags |= FL_DOUBLE | FL_EXP | FL_UPPERCASE;
    else if (c == 'c')
      flags |= FL_CHAR;
    else if (c == 's')
      flags |= FL_STRING;
    else
      PUT_CHR(c);

    if (flags & FL_INT)
    {
      long long val;

      if (flags & FL_LONG_LONG)
        val = va_arg(ap, long long);
      else if (flags & FL_LONG)
        val = va_arg(ap, long);
      else
        val = va_arg(ap, int);

      if (flags & FL_UNSIGNED)
      {
        if (flags & FL_LONG_LONG)
          val = (unsigned long long)val;
        else if (flags & FL_LONG)
          val = (unsigned long)val;
        else if (flags & FL_CHAR)
          val = (unsigned char)val;
        else if (flags & FL_SHORT)
          val = (unsigned short)val;
        else
          val = (unsigned int)val;
      }

      nr = put_int(buf, end, flags, width, prec, val);
      buf += nr;
      nch += nr;
    }
    else if (flags & FL_CHAR)
    {
      char val[2];

      val[0] = (char)va_arg(ap, int);
      val[1] = 0;

      nr = put_string(buf, end, flags, width, val);
      buf += nr;
      nch += nr;
    }
    else if (flags & FL_DOUBLE)
    {
#ifdef ENABLE_FLOAT
      double val;

      val = va_arg(ap, double);

      nr = put_double(buf, end, flags, width, prec, val);
      buf += nr;
      nch += nr;
#endif
    }
    else if (flags & FL_STRING)
    {
      char *val = va_arg(ap, char *);

      nr = put_string(buf, end, flags, width, val);
      buf += nr;
      nch += nr;
    }
  }

  if (buf > end)
    end[-1] = 0;
  else
    buf[0] = 0;

  return nch;
}

//-----------------------------------------------------------------------------
int p_snprintf(char *str, size_t size, const char *fmt, ...)
{
  va_list arg;
  int res;

  va_start(arg, fmt);
  res = p_vsnprintf(str, size, fmt, arg);
  va_end(arg);

  return res;
}

//-----------------------------------------------------------------------------
#ifdef ENABLE_TESTS

#include <stdio.h>
#include <string.h>

#define MAX_SIZE        32
#define PRINT_ALL       0
#define ARRAY_SIZE(a)   (int)(sizeof(a) / sizeof(a[0]))

#define RUN_TESTS(title) \
  printf(title "\r\n"); \
  for (i = 0; i < ARRAY_SIZE(fmt); i++) \
  { \
    for (j = 0; j < ARRAY_SIZE(val); j++) \
    { \
      rm = p_snprintf(m, sizeof(m), fmt[i], val[j]); \
      rs = snprintf(s, sizeof(s), fmt[i], val[j]); \
      if (strcmp(m, s) || rm != rs || PRINT_ALL) \
        printf("fmt = '%s', m[%d] = '%s', s[%d] = '%s'\r\n", fmt[i], rm, m, rs, s); \
    } \
  }

//-----------------------------------------------------------------------------
int main(void)
{
  char m[MAX_SIZE];
  char s[MAX_SIZE];
  int i, j, rm, rs;

  { // char
    char *fmt[] = { "%hhd", "%hho", "%hhu", "%hhx", "%hhX", "%-50hhx", "%+50hhx", "% 50hhx",
                    "%1hhd", "%2hhd", "%5hhd", "%8hhd", "%08hhd", "%+hhd", "%+1hhd", "%+5hhd", "%+8hhd", "%+08hhd",
                    "%-hhd", "%-1hhd", "%-5hhd", "%-8hhd","%-08hhd", "% hhd", "% 1hhd", "% 5hhd", "% 8hhd", "% 08hhd" };
    char val[] = { -123, -12, -1, 0, 1, 12, 123 };

    RUN_TESTS("char");
  }

  { // short
    char *fmt[] = { "%hd", "%ho", "%hu", "%hx", "%hX", "%-50hx", "%+50hx", "% 50hx",
                    "%1hd", "%2hd", "%5hd", "%8hd", "%08hd", "%+hd", "%+1hd", "%+5hd", "%+8hd", "%+08hd",
                    "%-hd", "%-1hd", "%-5hd", "%-8hd","%-08hd", "% hd", "% 1hd", "% 5hd", "% 8hd", "% 08hd" };
    short val[] = { -1234, -123, -12, -1, 0, 1, 12, 123, 1234 };

    RUN_TESTS("short");
  }

  { // int
    char *fmt[] = { "%d", "%o", "%u", "%x", "%X", "%-50x", "%+50x", "% 50x",
                    "%1d", "%2d", "%5d", "%8d", "%08d", "%+d", "%+1d", "%+5d", "%+8d", "%+08d",
                    "%-d", "%-1d", "%-5d", "%-8d","%-08d", "% d", "% 1d", "% 5d", "% 8d", "% 08d" };
    int val[] = { -1234, -123, -12, -1, 0, 1, 12, 123, 1234, 555555555 };

    RUN_TESTS("int");
  }

  { // long
    char *fmt[] = { "%ld", "%lo", "%lu", "%lx", "%lX", "%-50lx", "%+50lx", "% 50lx",
                    "%1ld", "%2ld", "%5ld", "%8ld", "%08ld", "%+ld", "%+1ld", "%+5ld", "%+8ld", "%+08ld",
                    "%-ld", "%-1ld", "%-5ld", "%-8ld","%-08ld", "% ld", "% 1ld", "% 5ld", "% 8ld", "% 08ld" };
    long val[] = { -1234, -123, -12, -1, 0, 1, 12, 123, 1234, 555555555l };

    RUN_TESTS("long");
  }

  { // long long
    char *fmt[] = { "%lld", "%llo", "%llu", "%llx", "%llX", "%-50llx", "%+50llx", "% 50llx",
                    "%1lld", "%2lld", "%5lld", "%8lld", "%08lld", "%+lld", "%+1lld", "%+5lld", "%+8lld", "%+08lld",
                    "%-lld", "%-1lld", "%-5lld", "%-8lld","%-08lld", "% lld", "% 1lld", "% 5lld", "% 8lld", "% 08lld" };
    long long val[] = { -1234, -123, -12, -1, 0, 1, 12, 123, 1234, 555555555555555555ll };

    RUN_TESTS("long long");
  }

#ifdef ENABLE_FLOAT
  { // float
    char *fmt[] = { "%f", "%F", "%8.5f", "%8.3f", "%-8.5f", "%-8.3f", "%0.1f", "%.5f", "%.3f", "%10f", "%-10f",
                    "%e", "%E", "%8.5e", "%8.3e", "%-8.5e", "%-8.3e", "%0.1e", "%.5e", "%.3e", "%10e", "%-10e" };
    float val[] = { -1234.5678, -123.456, -12.34, -1.2, 0.0, 1.2, 12.34, 123.456, 1234.5678, -123e9, 123e9, -5e-9, 5e-9 };

    RUN_TESTS("float");
  }

  { // double
    char *fmt[] = { "%f", "%F", "%8.5f", "%8.3f", "%-8.5f", "%-11.3f", "%+0.1f", "% .5f", "%.3f", "%10f", "%-10f",
                    "%e", "%E", "%8.5e", "%8.3e", "%-8.5e", "%-11.3e", "%+0.1e", "% .5e", "%.3e", "%10e", "%-10e" };
    double val[] = { -1234.5678, -123.456, -12.34, -1.2, 0.0, 1.2, 12.34, 123.456, 1234.5678, -123e9, 123e9, -5e-9, 5e-9 };

    RUN_TESTS("double");
  }
#endif

  { // strings
    char *fmt[] = { "%s", "%1s", "%2s", "%5s", "%-1s", "%-2s", "%-5s" };
    char *val[] = { "", "1", "12", "123", "1234", "123456789", NULL };

    RUN_TESTS("strings");
  }

  { // characters
    char *fmt[] = { "%c", "%1c", "%2c", "%5c", "%-1c", "%-2c", "%-5c" };
    char val[] = { '1' };

    RUN_TESTS("characters");
  }

  { // extra formats
    char *fmt[] = { "%5.5d", "%5.3d", "%3.5d", "%-5.5d", "%-5.3d", "%-3.5d", "%0.5d", "%0.3d", "%0.5d", "%%" };
    int val[] = { -1234, -123, -12, -1, 0, 1, 12, 123, 1234, 555555555 };

    RUN_TESTS("extra");
  }

  return 0;
}

#endif // ENABLE_TESTS

