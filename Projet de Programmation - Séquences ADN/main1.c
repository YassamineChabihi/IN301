#include "sequence.h"
#include "distance.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char ** argv){
/*
char filename[5];
int filecount;
FILE * f = NULL;

    for(filecount = 1 ;filecount <= 20; filecount++){
        sprintf("fichier%d", filename, filecount);
        f = fopen("filename", "r" );

        if(f == NULL){
            printf("file opening error !\n");
            return 1;
        }

        fclose(f);
    }
*/    

FILE * fichier =NULL;
fichier = fopen(argv[1], "r");

        if(fichier == NULL){
            printf("file opening error !\n");
            return 1;
        }
fclose(fichier);        
    return 0;
   
}
