-include ../../IncludeMake

CFLAGS          =
PROGRAM         = run
CXXFLAGS        = -D_DEBUG -fPIC
CPPFLAGS        = -I$(DIRINCLUDE)
LDLIBS          = -L$(DIRLIB)
LDFLAGS         = 
COMMON_OBJ      =  Duck.o \
                   FlyWithWings.o \
                   MallardDuck.o \
                   Quack.o \
                   MiniDucksSimnulator.o \
                   QuackBehavior.o \
                   FlyBehavior.o \
                   FlyNoWay.o \
                   MuteQuack.o

PROGRAM         = run

test::$(COMMON_OBJ) exe

all::

exe:
	$(CXX) -o $(PROGRAM) $(CXXFLAGS) $(CPPFLAGS) $(COMMON_OBJ) $(LDLIBS) $(LDFLAGS)
clean::
	rm -f *.o $(PROGRAM)
install::

uninstall::

