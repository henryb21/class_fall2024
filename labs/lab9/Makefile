CC = gcc
CFLAGS = -c -Wall

all: lab9

lab9: lab9.o county.o sort.o utils.o
	$(CC) -o lab9 lab9.o county.o sort.o utils.o

lab9.o: lab9.c county.h sort.h utils.h
	$(CC) $(CFLAGS) lab9.c

county.o: county.c county.h
	$(CC) $(CFLAGS) county.c

sort.o: sort.c sort.h
	$(CC) $(CFLAGS) sort.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) utils.c

clean:
	rm -rf *.o
