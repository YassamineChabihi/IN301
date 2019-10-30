#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main( int argc, char** argv){

    int T[7][3];
    // a
	printf ("val de T:           %p\n", T);
	printf ("adresse de T[0][0]: %p\n", &T[0][0]);
    // b
	printf ("adresse de T[0][1]: %p\n", &T[0][1]);
	printf ("adresse de T[0][2]: %p\n", &T[0][2]);
	printf ("adresse de T[1][0]: %p\n", &T[1][0]);
	printf ("adresse de T[1][1]: %p\n", &T[1][1]);
    // c
    // Calculez l’adresse de T[6][2] ?
  
    return 0;

}
