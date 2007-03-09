-include  ../../IncludeMake

CFLAGS          = 
CXXFLAGS        = -fPIC 
LDLIBS          = 

COMMON_OBJ      =  WeatherStation.o \
                   WeatherData.o \
                   CurrentConditionsDisplay.o \
                   ForecastDisplay.o \
                   StatisticsDisplay.o \
                   Subject.o \
                   Observer.o \
                   DisplayElement.o

PROGRAM         = run

test::$(COMMON_OBJ) exe

all::

exe:
	$(CXX) -o $(PROGRAM) $(CXXFLAGS) $(CPPFLAGS) $(COMMON_OBJ) $(LDLIBS) $(LDFLAGS)
clean::
	rm -f *.o $(PROGRAM)

install::

uninstall::

