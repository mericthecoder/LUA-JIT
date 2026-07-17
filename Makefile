CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = luajit_dev

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)
