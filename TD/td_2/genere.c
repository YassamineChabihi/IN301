#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#include "constantes.h"

void	ecrire()
{
    int nombres;
	FILE *F = NULL;

	F = fopen(NOMFIC, "w");

	srand(getpid());

	for(int i=0; i<N; i++)
	{
		nombres = rand()%MAX;
        if (F != NULL){
		fprintf(F, "%6d\n", nombres);
        }
	}

	fclose(F);
}

int		main()
{
	ecrire();
    
	return 0;
}
