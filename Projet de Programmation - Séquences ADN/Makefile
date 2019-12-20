run: compile
	./main1 seq01.txt

compile: main1.o sequence.o distance.o famille.o alignement.o
	gcc -Wall -o main1 main1.o sequence.o distance.o famille.o alignement.o

main1.o: main1.c
	gcc  -c main1.c -Wall

sequence.o: sequence.c sequence.h
	gcc  -c sequence.c  -Wall

distance.o: distance.c distance.h
	gcc  -c distance.c  -Wall

famille.o: famille.c famille.h
	gcc  -c famille.c  -Wall

alignement.o: alignement.c alignement.h
	gcc  -c alignement.c  -Wall			

clean:
	rm -f *.o
	rm -f main1

LENOM=CHABIHI_GAIZI
zip:
	rm -rf ${LENOM}
	rm -rf ${LENOM}.zip
	mkdir ${LENOM}
	cp Makefile ${LENOM}
	cp *.h *.c ${LENOM}
	cp ./sequences_ADN/*.txt ${LENOM}
	zip -r ${LENOM}.zip ${LENOM}
	rm -rf ${LENOM}	