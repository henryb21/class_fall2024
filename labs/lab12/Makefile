
CC = gcc
CFLAGS = -Wall
TARGET = lab12

SRCS = main.c team.c

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c team.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)
