.PHONY: clean all
CPPFLAGS = -g -Wall -std=c++17
CC = g++

all: main

*.o: *.cpp
	$(CC) $(CPPFLAGS) -c $<

main: main.o

clean:
	rm *.o main
