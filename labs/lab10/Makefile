
CC = gcc
CFLAGS = -Wall -lm

TARGET = lab10

OBJS = main.o character.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

main.o: main.c character.h
	$(CC) -c $(CFLAGS) main.c

character.o: character.c character.h
	$(CC) -c $(CFLAGS) character.c

clean:
	rm -f $(TARGET) $(OBJS)

