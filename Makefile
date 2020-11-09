CC=gcc
AR=ar
OBJECTS_MAINS=main.o libmyMath.a
OBJECTS_MAIND=main.o libmyMath.so
OBJECTS_LIB=basicMath.o power.o
FLAGS= -Wall -g

.PHONY= all mymaths clean mymathd

all: libmyMath.a libmyMath.so mains maind
mymaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
mymathd: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
mains: $(OBJECTS_MAINS) 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAINS)
maind: $(OBJECTS_MAIND)
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
make maind:
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c myMath.h
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c myMath.h
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c myMath.h
clean: 
	rm -f *.o *.a *.so maind mains
