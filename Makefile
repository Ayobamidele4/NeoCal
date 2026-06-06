# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Directories (relative to the root where Makefile lives)
SRC_DIR = src
BUILD_DIR = build

# The final executable path
TARGET = $(BUILD_DIR)/neocal

# Default rule
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SRC_DIR)/neocal.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC_DIR)/neocal.c

# Rule to clean up the build folder
clean:
	rm -rf $(BUILD_DIR)