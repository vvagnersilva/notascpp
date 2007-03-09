-include ../IncludeMake

CFLAGS          =
CXXFLAGS        = 
CPPFLAGS        =
LDFLAGS         =
LDLIBS          =

COMMON_OBJ 	= 

SUBDIRS         = observer

all:: exe

exe: 
	@for subdir in $(SUBDIRS); \
        do \
            echo "making $@ in $$subdir"; \
            ( cd $$subdir && $(MAKE) $@ ) || exit 1; \
	done

clean::
	@for subdir in $(SUBDIRS); \
        do \
            echo "making $@ in $$subdir"; \
            ( cd $$subdir && $(MAKE) $@ ) || exit 1; \
	done
	rm -f *.o

install::
	@for subdir in $(SUBDIRS); \
        do \
            echo "making $@ in $$subdir"; \
            ( cd $$subdir && $(MAKE) $@ ) || exit 1; \
        done

uninstall::
	@for subdir in $(SUBDIRS); \
        do \
            echo "making $@ in $$subdir"; \
            ( cd $$subdir && $(MAKE) $@ ) || exit 1; \
        done

