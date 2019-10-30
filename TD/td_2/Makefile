all:fclean run

run: genere algos
	./genere
	./algos

genere: genere.c constantes.h
	gcc -Wall -g -o genere genere.c

algos: algos.c constantes.h
	gcc -Wall -g -o algos algos.c

clean:
	rm -f genere
	rm -f algos

fclean: clean
	rm -f nombres