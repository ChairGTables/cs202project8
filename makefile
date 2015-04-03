CC=g++
CFLAGS=-c -Wall -g
all: maindriver
maindriver: maindriver.cpp classes.o
	$(CC) maindriver.cpp classes.o -o maindriver
classes.o: classes.cpp 
	$(CC) $(CFLAGS) classes.cpp  
clean: rm -rf  *.o  maindriver
