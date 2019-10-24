#include <stdio.h>
#include <stdlib.h>
#include "constantes.h"
void ecrire(){FILE * f;
	int i,a;
		f=fopen(NOMFIC,"W");
		for(i=0;i<N;i++){
			a=rand()%MAX;
			fprintf(f,"%6d ",a);
		}
		fclose(f);
}		
