#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 20.h. A-t-on besoin de retourner le tableau pour qu’il soit modifié ?
void tri_bulle_tabint(TABINT A){
	for(int i = A.N-1; i>0; i--){
		scan_ech_tabint(A,i); // change le contenus de A.T
	}
}


/* 21.b. une fonction qui prend en argument la taille du tableau N et 
un nombre de répétitions A et qui :
— génère et tri A fois un tableau de taille N
— renvoie le nombre moyen de comparaisons effectuées */
struct stat stat_moy(int N, int R){
	TABINT A;
	comp = 0; 
	ech = 0;
	// R : un nombre de répétitions A 
	for(int i = 0; i < R; i++){
		A = gen_alea_tabint(N,N);		
		tri_bulle_tabint(A);
		sup_tabint(A);
	}
	struct stat s;
	s.nb_moy_comp = (float)comp/R;
	s.nb_moy_ech = (float)ech/R;
	return s;
}

/* 21.c. Écrire un programme qui fait varier N entre 10 et 1000 
en le multipliant par 1.2, avec A fixé à 10000 et 
qui calcule la moyenne du nombre de comparaisons et d’échanges.
Ce programme doit écrire les résultats dans un fichier test_tri_bulle.data
en mettant sur chaque ligne, 
la valeur de N et la moyenne du nombre de comparaisons puis du nombre d’échanges. */
void genere_stat(){
	struct stat s;
	FILE * F = fopen("test_tri_bulle.data","w");
	for(int i = 10; i < 1000; i*=1.2){
		s = stat_moy(i,10000);
		fprintf(F,"%d %f %f\n",i,s.nb_moy_comp,s.nb_moy_ech);
	}
	fclose(F);
}

int main() {
	/* 20.i. Instrumentez le code pour compter le nombre de comparaisons entre cases 
	et le nombre d’échanges de contenus de cases qui sont faits. 
	Vous pourrez utiliser des variables globales. */
	/*
	ech = 0;
	comp = 0;
	srand(time(NULL));
	TABINT A = gen_alea_tabint(20,100);
	aff_tabint(A);
	tri_bulle_tabint(A);
	printf("Nombre de comparaison %d\n Nombre d'echanges %d\n",comp,ech);	
	aff_tabint(A);
	sup_tabint(A);
	*/

	// 21.c.
	/*
	struct stat s = stat_moy(1000,1000);
	printf("Nombre moyen de comparaisons %f, nombre moyen d'échanges %f \n", s.nb_moy_comp,s.nb_moy_ech);
	*/

	genere_stat();

	// Le code ci-dessous est provisoire, juste pour faire marche l'enchainement du Makefile
	/*
	FILE *F;
	F = fopen("test_tri_bulle.data","w");
	fprintf(F,"   10           45.00           21.97\n");
 	fprintf(F,"   12           66.00           33.08\n");
 	fprintf(F,"   14           91.00           46.35\n");
 	fprintf(F,"   16          120.00           61.08\n");
 	fprintf(F,"   19          171.00           85.71\n");
 	fprintf(F,"   22          231.00          115.62\n");
 	fprintf(F,"   26          325.00          162.21\n");
	fclose(F);
	*/
	// Fin du code provisoire
	exit(0);
}
