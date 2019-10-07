
#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>

void tri_bulle_tabint (TABINT A){
	for(int i = A.N-1; i > 0; i--){
		scan_ech_tabint (A,i);
	}
}
int main() {
	TABINT A = gen_alea_tabint (20, 100);
	aff_tabint (A);
	tri_bulle_tabint (A);
	aff_tabint (A);
	sup_tabint (A);
	
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
