




//tabint.c
#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>


// #####
// 1. Génération, suppression et affichage de tableaux
// #####
//void tri_bulle

TABINT gen_alea_tabint (int N, int K) {
	TABINT A;
	A.N = N;
	A.T = malloc(sizeof(int)*N);
	for(int i = 0; i < N; i++){
		A.T[i] = rand()%(K+1);
	}
	return A;
}

void sup_tabint (TABINT A) {
	free(A.T);
}

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

// Echange la case i et la case i+1 si la case i est > à la case i+1
void ech_tabint (TABINT A, int i) {
	comp++;
	if (i >= A.N - 1) {printf("position d'échange trop grande"); exit(1);}
	if (A.T[i] > A.T[i+1]) {
		ech++;
		int temp = A.T[i];
		A.T[i] = A.T[i+1];
		A.T[i+1] = temp;
	}
	
}

//
void scan_ech_tabint (TABINT A, int fin)  {
	for(int i = 0; i < fin; i++){
		ech_tabint (A,i);
	}
}
void fusionner(TABINT A,int deb,int mil,int fin){
	int *temp = malloc(sizeof(int)*(fin - deb));
	int i = deb;
	int j = mil;
	int K = 0;
	while(K < fin - deb){
		if( i == mil){
			for(; j < fin; j++)
			{
				temp[K]	= A.T[j];
				K++;
			}
			break;
		}
		if( i == fin){
			for(; i < mil; i++)
			{
				temp[K]	= A.T[i];
				K++;
			}
			break;
		}
		if(A.T[i] < A.T[j]){
			comp++;
			temp[K] = A.T[i];
			i++;
			
		}
		else
		{
			temp[K] = A.T[j];
			j++;

		}
		K++;
	}
	for(i = 0; i < fin -deb; i++)
	{
		A.T[i + deb] = temp[i];
	}
	free(temp);
	
}