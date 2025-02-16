CC = clang++
CFLAGS = -Wall -Werror -Wextra -Wpedantic

all: life

life: universe.o life.o
	$(CC) -o life life.o universe.o

life.o: life.cpp universe.cpp
	$(CC) $(CFLAGS) -c life.cpp universe.cpp

universe.o:
	$(CC) $(CFLAGS) -c universe.cpp

format:
	clang-format -i -style=file *.cpp *.h

clean:
	rm -f life *.o
