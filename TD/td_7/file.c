#include <stdio.h>
#include <stdlib.h>

#include "file.h"


File creer_file(){
    File f;
    f.debut = 0;
    f.taille = 0;
    f.contenu = malloc(sizeof(int)*TAILLE_MAX);
    return f;
}


int est_vide(File f){
    return !f.taille;
}
void affiche_file(File f){
    if(f.debut + f.taille < TAILLE_MAX){
        for(int i = 0; i < f.taille; i++){
            printf("%d, %d",f.contenu[f.debut].id,f.contenu[f.debut].prio);
        }
    }
    else
    {
        for(int i = f.debut; i < TAILLE_MAX; i++)
        {
            printf("%d, %d",f.contenu[f.debut].id,f.contenu[f.debut].prio);
        }
        for(int i = 0; i < f.taille; i++)
        {
            printf("%d, %d",f.contenu[f.debut].id,f.contenu[f.debut].prio);
        }
    }
     printf("\n");
}

File enfile(File f, int x){
    if(f.taille == TAILLE_MAX){
        printf("erreur file pleine \n"); exit(1);
    }
    f.contenu[(f.debut + f.taille)%TAILLE_max] = x;
    f.taille++;
    // f.fin = (f.fin == TAILLE_FILE - 1) ? 0 : f.fin +1;
    return f;
}

elem defile(File *f){
    if(est_vide(f)){
        printf("erreur file vide \n"); exit(1);
    }
    int res = f->contenu[f->debut];
    f->debut = (f->debut +1)%TAILLE_MAX;
    f->taille --;
    return res;
}
/*
int est_vide(File f){
    f.contenu[] = ;
    f.fin = ;
    return ;
}
*/