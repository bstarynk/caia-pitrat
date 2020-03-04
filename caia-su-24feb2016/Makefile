# file caia-su-24feb2016/Makefile contributed by Basile Starynkevitch
.PHONY: all clean objects

CC=gcc
CFLAGS= -g -O2 -std=c99
RM= rm -vf

CSOURCES:= $(sort $(wildcard *.c))
OBJECTS:= $(patsubst %.c, %.o, $(CSOURCES))
all: caia 
	ln -svf caia a.out

caia: $(OBJECTS) _data_.c
	if [ -f caia ] ; then mv -v --backup caia caia~ ; fi
	$(LINK.c) $(OBJECTS) -rdynamic -ldl -o $@

objects: $(OBJECTS)

%.o: %.c dx.h
	$(COMPILE.c) $< -c -o $@

clean:
	$(RM) *.o
