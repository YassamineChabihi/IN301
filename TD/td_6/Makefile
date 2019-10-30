run: compile
	gdb ./test

compile: test.o liste.o
	gcc -Wall -g -o test test.o liste.o

test.o: test.c
	gcc  -c test.c -Wall

liste.o: liste.c liste.h
	gcc  -c liste.c  -Wall

clean:
	rm -f *.o
	rm -f test