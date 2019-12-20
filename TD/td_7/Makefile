run: compile
	gdb ./main

compile: main.o file.o
	gcc -Wall -g main.o file.o -o test

main.o: main.c file.h
	gcc -g -c main.c -Wall

file.o : file.c file.h  	
	gcc -g -c file.c -Wall

clean:
	rm -f *.o
	rm -f test