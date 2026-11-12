CC := clang
CFLAGS := -O2 -Wall
CBUILD_FLAGS := -shared -fPIC

FILES := src/main.c
TARGET := feudc.a
BUILD := build

TEST_TARGET := checking
TEST_FILES := test/checking.c

.PHONY := build clean

build:
	mkdir -p $(BUILD)
	$(CC) $(CBUILD_FLAGS) -o $(BUILD)/$(TARGET) $(FILES)

test:
	$(CC) $(CFLAGS) -o $(BUILD)/$(TEST_TARGET) $(TEST_FILES)
