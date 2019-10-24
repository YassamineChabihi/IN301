#include <stdio.h>
#include <stdlib.h>
#include <math.h>

TABINT init_alea(int N, int k) 
{
	TABINT T;
	T.N = N;
	T.T = malloc(N*sizeof(int));
	if (T.T==NULL) exit(1);
	int i;
	for ( i=0 ; i<N ; i++) {
		T.T[i] = rand()%k;
	}
	return T;
}	
void tri_bulle (TABINT T) {
	int fin = T.N-1;
	int echange = 1;
	while ( (fin>0) && (echange)){
		echange = scan_ech_tabint(T,fin);
		fin--;
	}
}
struct stat stat_moy (int N, int A) {
	int i;
	TABINT T;
	unsigned long long int TOTCOMP = 0;
	unsigned long long int TOTECH  = 0;
	for (i=0 ; i<A ; i++) {
		T = init_alea(N,1000);
		NBCOMP = 0;
		NBECH  = 0;
		tri_bulle(T);
		TOTCOMP += NBCOMP;
		TOTECH  += NBECH;
#ifdef DEBUG1
printf("%3d: NBCOMP = %d, NBECH = %d\n",i,NBCOMP,NBECH);
#endif
		T = sup_tabint(T);
	}
	struct stat S;
	S.N = N;
	S.nb_moy_comp = (double)TOTCOMP/(double)A;
	S.nb_moy_ech  = (double)TOTECH /(double)A;
#ifdef DEBUG1
printf("N           = %d\n",S.N);
printf("nb_moy_comp = %.3lf\n",S.nb_moy_comp);
printf("nb_moy_ech  = %.3lf\n",S.nb_moy_ech);
#endif
	return S;
}

int main() {


}
