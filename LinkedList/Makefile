OBJECTS = main.o node.o
CC = g++
CFLAGS = --std=c++11 -O2 -Wall
all: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o main
	
main.o: node.o
	$(CC) $(CFLAGS) main.cpp -c
	
node.o: Node.h
	$(CC) $(CFLAGS) Node.cpp -c
	
clean:
	rm *.o ./main