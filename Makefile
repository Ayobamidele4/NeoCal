# Compiler to use
CC = gcc

# Compiler flags (-Wall turns on all warnings, -g adds debugging info)
CFLAGS = -Wall -g

# The final executable name
TARGET = neocal

# The default rule that runs when you just type 'make'
all: $(TARGET)

# Rule to build the executable from the source file
$(TARGET): neocal.c
	$(CC) $(CFLAGS) -o $(TARGET) neocal.c

# Rule to clean up the compiled executable and object files
clean:
	rm -f $(TARGET)