
CFLAGS=-c -Wall -g -O0 -DDEBUG
CC=gcc
LDFLAGS=-lpcap -lldns 


#SOURCES=dnspkt.c
SOURCES=main.c dnspkt.c dnsfile.c dnspcap.c

OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=dnslog
prefix=/usr/local/sbin


all: $(EXECUTABLE)
        
$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS)  $(LDFLAGS)

%.o: %.c *.h
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) 
	rm -f $(EXECUTABLE) 
	rm -f *.log
install:
	cp  $(EXECUTABLE) $(prefix)
