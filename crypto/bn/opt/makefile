# The compilation flags.
CFLAGS = -O3
# The base object files.
BASEOBJS = add.o mod.o sqr.o comb3.o comb4.o comb5.o combx3.o combx4.o combx5.o kar3.o kar4.o kar5.o msb.o inv.o
# The object files.
OBJS = test.o \
	$(addprefix 32bit/f163/, $(BASEOBJS:.o=_163.o)) $(addprefix 64bit/f163/, $(BASEOBJS:.o=_163.o)) \
	$(addprefix 32bit/f233/, $(BASEOBJS:.o=_233.o)) $(addprefix 64bit/f233/, $(BASEOBJS:.o=_233.o)) \
	$(addprefix 32bit/f283/, $(BASEOBJS:.o=_283.o)) $(addprefix 64bit/f283/, $(BASEOBJS:.o=_283.o)) \
	$(addprefix 32bit/f409/, $(BASEOBJS:.o=_409.o)) $(addprefix 64bit/f409/, $(BASEOBJS:.o=_409.o)) \
	$(addprefix 32bit/f571/, $(BASEOBJS:.o=_571.o)) $(addprefix 64bit/f571/, $(BASEOBJS:.o=_571.o))

all: $(OBJS)
	gcc -O0 -Wall -Wextra -O0 -lrt -ldl -o test $(OBJS) ../../../libcrypto.a

clean:
	rm -f $(OBJS)

test.o: test.c test.h
	gcc -c -Wall -Wextra -O0 -I .. -I ../.. -I ../../.. -o $@ $<

%.o: %.c
	gcc -c -Wall -Wextra $(CFLAGS) -o $@ $<
