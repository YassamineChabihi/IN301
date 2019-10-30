#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main( int argc, char** argv){
    // a
    printf("char : %ld octets \n",sizeof(char) );
    printf("int : %ld octets \n",sizeof(int) );
    printf("double : %ld octets \n",sizeof(double) );
    printf("char* : %ld octets \n",sizeof(char*) );
    printf("void* : %ld octets \n",sizeof(void*) );
    printf("int* : %ld octets \n",sizeof(int*) );
    printf("double* : %ld octets \n",sizeof(double*) );
    printf("int** : %ld octets \n",sizeof(int**) );
    printf("int[10] : %ld octets \n",sizeof(int[10]) );
    printf("char[7][3] : %ld octets \n",sizeof(char[7][3]) );
    // printf("char : %ld \n",sizeof(int[]) ); ici ça marche pas

    printf("\n");
    // b
	float tab[10];
	printf ("contenu de tab : %p\n", tab);
	printf ("taille de tab : %ld\n", sizeof(tab));
	printf ("contenu de tab[0] : %f\n", tab[0]);
	printf ("contenu de &tab : %p\n", &tab[0]);
	printf ("taille de &tab[0] : %ld\n", sizeof (&tab[0]));
	
	
	return 0;



}
