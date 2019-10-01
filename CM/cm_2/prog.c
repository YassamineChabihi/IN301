#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *F; //declaration de la variable f
    // de type FILE *

    F = fopen("toto","w");
    int i;
    for( i=32; i<128; i++)
    {
        //printf("%3d %3o %3x %c\n, i, i, i, i");
        fprintf(F,"%3d\n", i);
    }
    fclose(F);

    FILE *G;
    G = fopen ("toto","r");
    int ret;
    int j;
    for( j=0; j<110; j++)//200
    {
        ret = fscanf(G, "%d",&i);
        printf("i =  %d, ret = %d\n",i,ret);
    }
    fclose(G);
    exit(0);
}