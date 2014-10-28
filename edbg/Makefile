BIN = edbg

SRCS = \
  dap.c \
  edbg.c \
  target.c \
  target_cm0p.c \
  target_cm4.c

HDRS = \
  dap.h \
  edbg.h \
  target.h

CFLAGS += -W -Wall -O2 -std=gnu99

LIBS += -ludev

all: $(SRCS) $(HDRS)
	gcc $(CFLAGS) $(SRCS) $(LIBS) -o $(BIN)

clean:
	-rm $(BIN)

