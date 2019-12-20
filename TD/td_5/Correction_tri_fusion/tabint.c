#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>


// #####
// 1. Génération, suppression et affichage de tableaux
// #####

// 20.b.
TABINT gen_alea_tabint (int N, int K) {
	TABINT A;
	A.N = N;
	A.T = malloc(sizeof(int)*N);
	for(int i = 0; i < N; i++){
		A.T[i] = rand()%(K+1); // K+1 ?
	} 
	return A;
}

// 20.c.
void sup_tabint (TABINT A) {
	free(A.T); // supprime le contenus de A.T et (A.N reste

}

// 20.d.
void aff_tabint (TABINT A) {
	printf("Tableau de taille %d: \n",A.N);
	for(int i = 0; i < A.N; i++){
		printf("%d ",A.T[i]);
	}
	printf("\n");
}

// #####
// 2. Manipulation des valeurs du tableau
// #####

// 20.e. A-t-on besoin de retourner le tableau pour qu’il soit modifié ?
void ech_tabint (TABINT A, int i) {
	comp++;
	if(i >= A.N - 1) {printf("Position d'échange trop grande)"); exit(1);}
	if(A.T[i] > A.T[i+1]){
		ech++;//on effecue un échange
		int temp = A.T[i];
		A.T[i] = A.T[i+1];
		A.T[i+1] = temp;
	}
}

// 20.f. A-t-on besoin de retourner le tableau pour qu’il soit modifié ?
/* 20.g. Après un appel de cette fonction avec fin 
ayant comme valeur la taille du tableau, 
prouvez que la valeur maximum du tableau est à la fin du tableau */
void scan_ech_tabint (TABINT A, int fin)  {
	for(int i = 0; i < fin; i++){
		ech_tabint(A,i);
	}
}

// 22.a.
void fusionner (TABINT A, int deb, int mil, int fin){
	int *temp = malloc(sizeof(int)* (fin -deb));
	int i = deb;
	int j = mil;
	int k = 0;
	while(k < fin - deb){
		if(i == mil){
			for(;j<fin;j++){
				temp[k] = A.T[j];
				k++;	
			}
			break;
		}
		if(j == fin){
			for(;i<mil;i++){
				temp[k] = A.T[i];
				k++;	
			}
			break;
		}
		comp++;
		if(A.T[i] < A.T[j]){
			temp[k] = A.T[i];
			i++;
		}
		else{
			temp[k] = A.T[j];
			j++;	
		}
		k++;
	}
	for(i = 0; i < fin - deb; i++){//cette boucle devrait etre remplacé par un appel à memcpy
		A.T[i + deb] = temp[i];
	}
	free(temp);
}
