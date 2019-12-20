#include "tabint.h"
#include "stat.h"
#include "tri_bulle.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 22.a.
void tri_fusion_tabint(TABINT A, int deb, int fin){
	if((fin - deb) > 1){
		tri_fusion_tabint(A,deb,(fin + deb)/2);
		tri_fusion_tabint(A,(fin + deb)/2,fin);
		fusionner(A,deb,(fin + deb)/2, fin);
	}
}

struct stat stat_moy(int N, int R){
	TABINT A;
	comp = 0;
	ech = 0;
	for(int i = 0; i < R; i++){
		A = gen_alea_tabint(N,N);		
		tri_fusion_tabint(A,0,A.N);
		sup_tabint(A);
	}
	struct stat s;
	s.nb_moy_comp = (float)comp/R;
	s.nb_moy_ech = (float)ech/R;
	return s;
}

void genere_stat(){
	struct stat s;
	FILE * F = fopen("test_tri_fusion.data","w");
	for(int i = 10; i < 1000; i*=1.2){
		s = stat_moy(i,1000);
		fprintf(F,"%d %f %f\n",i,s.nb_moy_comp,s.nb_moy_ech);
	}
	fclose(F);
}

int main() {
	/*
	ech = 0;
	comp = 0;
	srand(time(NULL));
	TABINT A = gen_alea_tabint(20,100);
	aff_tabint(A);
	tri_fusion_tabint(A,0,A.N);
	printf("Nombre de comparaison %d\n Nombre d'echanges %d\n",comp,ech);	
	aff_tabint(A);
	sup_tabint(A);
	*/

	/*
	struct stat s = stat_moy(1000,1000);
	printf("Nombre moyen de comparaisons %f, nombre moyen d'échanges %f \n", s.nb_moy_comp,s.nb_moy_ech);
	*/

	genere_stat();

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

	exit(0);
}
