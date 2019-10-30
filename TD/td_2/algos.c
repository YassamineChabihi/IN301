#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#include "constantes.h"

int T[N];

void lecture (){
    FILE *F = NULL;
	F = fopen (NOMFIC, "r");

	for (int i=0; i<N; i++){
			fscanf (F, "%d", &T[i]);
	}

		fclose(F);
}

void ecrire (){
    FILE *F = NULL;
	F = fopen ("nombres-verif.data", "w");

	for (int i= 0; i<N; i++){
		fprintf (F, "%6d\n", T[i]);
	}

		fclose (F);
}

int recherche (int x){
	int	cmp = 0;

	for(int i=0; i<N; i++)
	{
		cmp++;
		if( T[i] == x)
		{
			printf("nb de comparaisons: %d\n", cmp);
			return 1;
		}
	}
	printf("nb de comparaisons: %d\n", cmp);
	return 0;

}

int stat_recherche(int x){
	int	cmp = 0;

	for(int i=0; i<N; i++)
	{
		cmp++;
		if( T[i] == x)
		{
			return cmp;
		}
	}
	return cmp;

}

int main(){

	lecture();
	ecrire();
	/*
	for(int i=0; i<N; i++)
    {
		printf("%d\n", T[i]);
    }
    */
	printf("recherche : %d\n", recherche(339153));

	srand(getpid());

	int moyenne = stat_recherche(rand()%(5*MAX));

	for(int i=0; i<10000 - 1; i++)
	{
		moyenne = (moyenne + stat_recherche(rand()%(5*MAX)) ) / 2;
	}

	printf("moyenne de cmp: %d\n", moyenne);

	return 0;
}