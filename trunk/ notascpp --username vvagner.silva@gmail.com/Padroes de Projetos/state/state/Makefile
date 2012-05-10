-include ../IncludeMake

CFLAGS          = 
CXXFLAGS        = -fPIC 
LDLIBS          = 

COMMON_OBJ      = main.o \
                  Context.o \
                  State.o \
                  StateActive.o \
                  StateWaiting.o \
                  StateLoader.o

PROGRAM         = run

test::$(COMMON_OBJ) exe

all::

exe:
	$(CXX) -o $(PROGRAM) $(CXXFLAGS) $(CPPFLAGS) $(COMMON_OBJ) $(LDLIBS) $(LDFLAGS)
clean::
	rm -f *.o $(PROGRAM)

install::

uninstall::

