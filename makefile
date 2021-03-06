CC=msp430-gcc
CFLAGS=
LDFLAGS=-mmcu=msp430g2553 -Wall -Os
SOURCES=main.c deviceinit.c roast.c uart.c flash.c roastcurve.c peripherals.c
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=mspcoffee

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -rf *o $(EXECUTABLE)

install:
	mspdebug rf2500 "prog $(EXECUTABLE)"
