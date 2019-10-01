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
    int ret=1;
    char c;
    int cpt = 0;
    while (ret ==1)//ajauter
    {
        ret = fscanf(G, "%c",&c);
        if(ret == 1)//ajauter
        cpt++;
        
    }

    fclose(G);
    printf("cpt = %d\n",cpt);
    exit(0);
}