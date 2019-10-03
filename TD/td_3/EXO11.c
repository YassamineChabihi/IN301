#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main( int argc, char** argv){

    printf("char : %ld \n",sizeof(char) );
    printf("char : %ld \n",sizeof(int) );
    printf("char : %ld \n",sizeof(double) );
    printf("char : %ld \n",sizeof(char*) );
    printf("char : %ld \n",sizeof(void*) );
    printf("char : %ld \n",sizeof(int*) );
    printf("char : %ld \n",sizeof(double*) );
    printf("char : %ld \n",sizeof(int**) );
    printf("char : %ld \n",sizeof(int[10]) );
    printf("char : %ld \n",sizeof(char[7][3]) );
   // printf("char : %ld \n",sizeof(int[]) );

    float tab[10];

    printf("tab : %d \n",tab);
    printf("tab[0] : %d \n",tab[0]);
    printf("&tab[0] : %d \n",&tab[0]);
    printf("*&tab : %d \n",*&tab);
    printf("*&tab[0] : %d \n",*&tab[0]);



}
