#include "sequence.h"
#include <stdio.h>
#include <stdlib.h>


SEQUENCE * lire_fichier(FILE * F){

    SEQUENCE * s = (SEQUENCE *)malloc(sizeof(SEQUENCE));

	char nom_fichier[5];
	sprintf(nom_fichier, "seq.%d.txt", s->numero_fichier);

	F = NULL;
	F = fopen(nom_fichier,"r");

    if(F == NULL)
	{
		printf("ce fichier n'existe pas./n");
	}
	else
	{	
		int N = 0;
		char c[22];
		fscanf(F, "%s", &c);
		int i = 0;
		while(c[i] != '\n')
		{
			N++;
			i++;
		}
	}

	s->N = N;
	s->T = malloc(sizeof(int)*N);

	s->T = c;
    
    fclose(F); 
			
	return s;
}