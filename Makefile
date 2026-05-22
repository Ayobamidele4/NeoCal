# NeoCal Makefile
CC       := gcc
CFLAGS   := -Wall -Wextra -Wpedantic -std=c11 -g
INCLUDES := -I./include

SRC_DIR  := src
BUILD_DIR:= build
TARGET   := neocal

SOURCES  := $(wildcard $(SRC_DIR)/*.c)
OBJECTS  := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SOURCES))

all: directories $(TARGET)

directories:
	@mkdir -p $(BUILD_DIR)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

run: all
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean run directories