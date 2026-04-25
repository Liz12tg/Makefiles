CC = gcc
CFLAGS = -Wall
LIBS = -lm
TARGET = simulacion

all: $(TARGET)

$(TARGET): ondas.c
	$(CC) $(CFLAGS) ondas.c -o $(TARGET) $(LIBS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) Ondas.ppm
