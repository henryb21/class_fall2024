CC = gcc

CFLAGS = -c -Wall

all: a.out

a.out: main.o planet.o
	$(CC) main.o planet.o -o a.out

main.o: main.c
	$(CC) $(CFLAGS) main.c

planet.o: planet.c
	$(CC) $(CFLAGS) planet.c

clean:
	rm -rf *.o a.out


