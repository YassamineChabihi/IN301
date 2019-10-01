#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int test_float(char * chaine){
    int i = 0;
    if(chaine[0] == '-') i++;
    for(; i< strlen(chaine); i++)
    {
        if(chaine[i] == '.'){i++; break;}
        if(! isdigit(chaine[i]))  return 0;
    }
    for(; i< strlen(chaine); i++){
        if(! isdigit(chaine[i])) return 0;
    }
    return 1;
}

int main( int argc, char** argv){
    
    //int i;
    //printf("argc = %d\n", argc);
    //for(i=0 ; i<argc ; i++)
    //{
    //    printf("%s\n", argv[i]);
    //}
    if(test_float(argv[1])) printf("c'est un nombre\n");
    double somme = 0;
    for(int i = 1; i<argc; i++)
    {
        somme += atof(argv[i]);
    }

    //double v1 = atof(argv[1]);
    //double v2 = atof(argv[2]);
    //double v3 = atof(argv[3]);
    //printf("somme des valeurs en argument %f\n",v1 +v2 +v3);

    
    return 0;   
}