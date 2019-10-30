argument = test


run: compile
	wc ${argument}
	./mywc ${argument}

compile: wc.c
	gcc -Wall -o mywc wc.c

clean: 
	rm -f mywc