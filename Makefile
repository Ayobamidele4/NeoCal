# Compiler configuration
CC = gcc
CFLAGS = -Wall -Wextra -O2

# Linker flags (required for the math.h library)
LDFLAGS = -lm

# Directories
SRC_DIR = src
BUILD_DIR = build

# Target executable name
TARGET = $(BUILD_DIR)/neocal

# Find source files
SRCS = $(SRC_DIR)/main.c

# Default rule: compile everything
all: $(TARGET)

# Rule to create the build directory and compile the executable
$(TARGET): $(SRCS)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET) $(LDFLAGS)

# Clean rule: removes the generated binary and build folder
clean:
	rm -rf $(BUILD_DIR)

# Phony targets to prevent conflicts with matching file names
.PHONY: all clean