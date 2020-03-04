# file caia-su-24feb2016/Makefile contributed by Basile Starynkevitch
.PHONY: all clean objects _dx_was_improved_

CC=gcc
CXX=g++
CXXFLAGS= -g -O2 -Wall
CFLAGS= -g -O2 -std=c99
RM= rm -vf

CSOURCES:= $(sort $(wildcard *.c))
OBJECTS:= $(patsubst %.c, %.o, $(CSOURCES))
all: _dx_was_improved_ caia 
	ln -svf caia a.out

improve-generated-dx: ../improve-generated-dx.cc
	$(CXX) $(CXXFLAGS) $< -o $@

_dx_was_improved_: dx.h improve-generated-dx
	if grep -q CAIA_GLOBAL_VAR dx.h ; then \
	   echo dx.h is already improved ; \
        else \
	   mv -v --backup dx.h _old_dx_.h ; \
	   ./improve-generated-dx _old_dx_.h dx.h ; \
	   date +"dx improved on %c" > _dx_was_improved_ ; \
	fi

caia: $(OBJECTS) _data_.c
	if [ -f caia ] ; then mv -v --backup caia caia~ ; fi
	$(LINK.c) $(OBJECTS) -rdynamic -ldl -o $@

objects: $(OBJECTS)

%.o: %.c dx.h
	$(COMPILE.c) $< -c -o $@

clean:
	if [ -f _old_dx_.h ] ; then  mv --backup _old_dx_.h dx.h ; fi
	$(RM) *.o _dx_was_improved_ _data_.c  caia improve-generated-dx

_data_.c: dx.h
	date +"/*generated $@ on %c*/%n" > $@-tmp
	printf "#define CAIA_GLOBAL_VAR /*nothing*/\n" >> $@-tmp
	printf '#include "%s"\n' $^ >> $@-tmp
	mv $@-tmp $@
