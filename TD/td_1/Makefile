run: compile
	gdb ./debug 

compile: debug.c	
	gcc -Wall -save-temps -g -o debug debug.c 

clean: 
	rm debug
	ls -l