




# Makefile
visu: stat.pdf
	evince stat.pdf &


stat.pdf: tri_bulle stat.gplt test_tri_bulle.data
	gnuplot stat.gplt
# E
test_tri_bulle.data: tri_bulle
	./tri_bulle


# Le tri à bulles
# Edition  de liens
tri_bulle: tri_bulle.o tabint.o
	gcc -Wall -o tri_bulle tri_bulle.o tabint.o

# compilation de tri_bulle.c
tri_bulle.o: tri_bulle.c tabint.h stat.h
	gcc -Wall -c tri_bulle.c


# La bibliothèque de manipulation de tableaux

# compilation de tabint.c
tabint.o: tabint.c tabint.h
	gcc -Wall -c tabint.c

clean:
	rm -f tabint.o
	rm -f tri_bulle.o tri_bulle
	rm -f stat.pdf
	rm -f test_tri_bulle.data
	ls -l

ZIPNAME=IN301_TD5_TRI_INT
zip:
	rm -rf ${ZIPNAME}
	mkdir ${ZIPNAME}
	cp *.c ${ZIPNAME}
	cp *.h ${ZIPNAME}
	cp Makefile ${ZIPNAME}
	cp *.gplt ${ZIPNAME}
	zip -r $(ZIPNAME).zip $(ZIPNAME)
##	rm -rf ${ZIPNAME}
	ls -l ${ZIPNAME}*














