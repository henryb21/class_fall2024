CC = gcc
CFLAGS = -Wall

OBJ = main.o team.o
TARGET = lab11

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

team.o: team.c team.h
	$(CC) $(CFLAGS) -c team.c

main.o: main.c team.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f $(OBJ) $(TARGET)

