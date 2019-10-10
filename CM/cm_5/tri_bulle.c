




// tri_bulle.c

#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>

void tri_bulle_tabint (TABINT A){
	for(int i = A.N-1; i > 0; i--){
		scan_ech_tabint (A,i);
	}
}

struct stat stat_moy (int N, int R){
	TABINT A;
	ech = 0;
	comp =0;
	for(int i = 0; i < R; i++){
		A = gen_alea_tabint(N,N);
		tri_bulle_tabint(A);
		sup_tabint(A);
	}
	
	struct stat s;
	s.nb_moy_comp = (float)comp/R;
	s.nb_moy_ech = (float)ech/R
	return s;
}

void genere_stat(){
	struct stat s;
	FILE * F = fopen("test_tri_bulle.data","w");
	for( int i = 10; i > 1000; i*=1.2)
	{
		s = stat_moy(i,1000);.
		fprintf("%d %f %f\n", ????? )
	};
	cfolose(F);
	
}

*/tri_bulle_tabint (TABINT T, int optim){ 

}*/
int main() {

	TABINT A
	A = gen_alea_tabint (10, 100);
	aff_tabint (A);
	srand(__TIME__(NULL));
	
	
	tri_bulle_tabint (A);
	printf("nombre de comparaison %d \n nombre d'echange %d \n",comp,ech);
	aff_tabint (A);
	sup_tabint (A);
	*/
	struct  stat s = stat_moy(1000,1000);
	printf("nombre moyen de comparaison %d \n nombre moyen d'echange %d \n",s.nb_moy_comp ,s.nb_moy_ech);
	
	// Le code ci-dessous est provisoire, juste pour faire marche l'enchainement du Makefile
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
	// Fin du code provisoire
	exit(0);
}
