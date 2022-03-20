CC=g++

CFLAGS=-c 

all: main
# make exe file 
main: main.o insert/insertNode.o print/printData.o delete/deleteNode.o delete/freeMemory.o
	$(CC) main.o insertNode.o printData.o deleteNode.o freeMemory.o -o main
	
main.o: main.c
	$(CC) $(CFLAGS) main.c

insert/insertNode.o: insert/insertNode.o
	$(CC) $(CFLAGS) insert/insertNode.c

print/printData.o: print/printData.c
	$(CC) $(CFLAGS) print/printData.c

delete/deleteNode.o: delete/deleteNode.c
	$(CC) $(CFLAGS) delete/deleteNode.c

delete/freeMemory.o: delete/freeMemory.c
	$(CC) $(CFLAGS) delete/freeMemory.c
