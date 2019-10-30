run: compile
	# a.
	#./testarg 6 toto salut2016 ?!:;
	# c.
	#./testarg 6.2 -8 2.0
	# e.
	./testarg 6a84 blbllcc 0.34.2
	./testarg 0.345 234
	./testarg 023. 345
	./testarg -0.32 234
	./testarg -0.32.34 234
	

compile: testarg.c	
	gcc -Wall -g -o testarg testarg.c

clean: 
	rm testarg
	ls -l