
# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Target executable name
TARGET = lab13

# Source file
SRCS = lab13.c

# Build target
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

# Clean up build files
clean:
	rm -f $(TARGET)

