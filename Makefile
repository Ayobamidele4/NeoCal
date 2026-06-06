# ====================================================================
# MASTER SCIENTIFIC CALCULATOR MAKEFILE
# ====================================================================

CC       = gcc
CFLAGS   = -Wall -Wextra -g -O3 -std=c99
LIBS     = -lm

# Directories
SRC_DIR   = src
BUILD_DIR = build
OBJ_DIR   = $(BUILD_DIR)/obj

# Target Executable
TARGET    = $(BUILD_DIR)/neocal

# Auto-detect all source files (.c) and generate corresponding object files (.o)
SRCS      = $(wildcard $(SRC_DIR)/*.c)
OBJS      = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Header Dependency Tracking 
# (Triggers a rebuild automatically if any header file like calculator.h changes)
HEADERS   = $(wildcard $(SRC_DIR)/*.h)

# Default target
all: $(TARGET)

# Rule to link the final executable
$(TARGET): $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to reset the workspace
clean:
	rm -rf $(BUILD_DIR)

# Run target to quickly build and execute
run: all
	./$(TARGET)

.PHONY: all clean run