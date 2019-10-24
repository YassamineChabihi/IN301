run: compile
	./testarg 6a84 blbllcc 0.34.2
	./testarg 0.345 234
	./testarg 023. 345
	./testarg -0.32 234
	./testarg -0.32.34 234

compile: testarg.c	
	gcc -Wall -o testarg testarg.c

clean: 
	rm testarg
	ls -l