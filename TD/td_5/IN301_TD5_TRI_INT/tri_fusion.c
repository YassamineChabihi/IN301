




//tri_fusion.c
#include "tabint.h"
#include "stat.h"
//#include "tri_bulle.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void tri_fusion(TABINT A, int deb, int fin){
    if ((fin - deb) > 1)  {
        tri_fusion(A,deb,(fin+deb)/2);
        tri_fusion(A,(fin+deb)/2,fin);
        fusionner((A,deb,(fin+deb)/2,fin);
    }
    
}




struct stat stat_moy(int N , int R){
    TABINT A;
    //ech = 0;
    comp = 0;
    for(int i=0; i<R;i++){
        A = gen_alea_tabint(N,N);
        tri_fusion(A);
        sup_tabint(A);

    }

    struct stat s;
    s.nb_moy_comp = (float)comp/R;
    //s.nb_moy_ech = (float)ech/R;

    return s;
}

void genere_stat(){
	struct stat s;
	FILE * F = fopen("test_tri_fusion.data","w");
	for( int i = 10; i < 1000; i*=1.2)
	{
		s = stat_moy(i,1000);
		fprintf(F,"%d %f \n", i, s.nb_moy_comp/* , s.nb_moy_ech*/ );

	};
	fclose(F);
	
}
int main(){
    srand(time(NULL));


    /*
    TABINT A = gen_alea_tabint(20,20);
    aff_tabint(A);
    //fusionner(A,0,1,2);
    tri_fusion(A,0,1,2);
    aff_tabint(A);
    */
    genere_stat();
    exit(0);
}