#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char * chaine){
    int i;
    for(i=0; chaine[i] != '\0'; i++){}
    return i;
}

int rec_length(char * chaine){
    return (chaine[0] == '\0') ? 0 : 1 + rec_length(chaine +1);
    //if(chaine[0] == '\0')   return 0;
    //return 1 + rec_length(chaine +1);
}

int compare(char * chaine1, char * chaine2){
    for(int i = 0; i < strlen(chaine1) && strlen(chaine2) && chaine1[i] == chaine2[i]; i++){}
    if (chaine1[i] == chaine2[i])    return 0;
    if (chaine1[i] < chaine2[i]) {
        return -1;
    }
    else
    {
        return 1;
    }
    
    
}

int compar_rec(char * chaine1, char * chaine2){
    return (chaine1[0] == chaine2[0] && chaine1[0] == '\0'){
    if(chaine1[0] == chaine2[0]){
        if(chaine1[0] == '\0') ? 0 : compar_rec(chaine1 + 1, chaine2 + 1) return 0;
        return compar_rec(chaine1 + 1, chaine2 + 1);
    return  chaine1[0] - chaine2[0];
}



int main( int argc, char** argv){
    printf("TAaille du premier argument par methode iterative %d \n", length(argv[1]));
    printf("TAaille du premier argument par methode recursive %d \n", rec_length(argv[1]));
    printf("Comparaison des deux chaines par strcmp  %d, fonction itérative %d \n", strcmp(argv[1],argv[2]));
    
    return 0;   
}
