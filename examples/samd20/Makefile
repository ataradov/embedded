##############################################################################
CONFIG = Debug
#CONFIG = Release

##############################################################################
.PHONY: all clean size

CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy
SIZE = arm-none-eabi-size

CFLAGS += -W -Wall --std=gnu99 -O3
CFLAGS += -ffunction-sections -fdata-sections
CFLAGS += -mcpu=cortex-m0plus -mthumb

LDFLAGS += -Wl,--gc-sections
LDFLAGS += -mcpu=cortex-m0plus -mthumb
LDFLAGS += -Wl,--script=samd20j18.ld

ifeq ($(CONFIG), Debug)
  CFLAGS += -g
endif

DEFINES = \
  -DF_CPU=8000000

INCLUDES += \
  -I .

CFLAGS += $(INCLUDES) $(DEFINES)

SRCS = \
  startup.c \
  main.c

OBJS = $(addprefix $(CONFIG)/, $(notdir %/$(subst .c,.o, $(SRCS))))

all: directory $(CONFIG)/demo.elf $(CONFIG)/demo.bin size

$(CONFIG)/demo.elf: $(OBJS)
	@echo LD $@
	@$(CC) $(LDFLAGS) $(OBJS) $(LIBS) -o $@

$(CONFIG)/demo.bin: $(CONFIG)/demo.elf
	@echo OBJCOPY $@
	@$(OBJCOPY) -O binary $^ $@

%.o:
	@echo CC $@
	@$(CC) $(CFLAGS) $(filter %$(subst .o,.c,$(notdir $@)), $(SRCS)) -c -o $@

directory:
	@gmkdir -p $(CONFIG)

size: $(CONFIG)/demo.elf
	@echo
	@$(SIZE) -t $^

clean:
	@echo clean
	@-rm -rf $(CONFIG)

