#include <stdio.h>
#include <stdlib.h>

struct liste{
    int val;
    struct liste *suiv;
    struct liste *pred;
};

struct ma_liste{
    int nb;
    struct liste *deb;
    struct liste *fin;
};

struct ma_liste creer(){
    struct ma_liste ml;
    ml.nb = 0;
    ml.deb = ml.fin = NULL;
    return ml;
}

void affiche(struct ma_liste ml)
{

    
    /*
    struct liste *l = ml.deb;
    while(l){
        printf("%d",l->val);
        l = l->suiv;
    }
    printf("\n");
    */
}

struct ma_liste inser_deb(struct ma_liste ml, int val){
    struct liste *e = malloc(sizeof(struct liste));
    if(:e){
        e->val = val; //1
        if(ml.nb ==0) {
            e->suiv = pred =NULL;
            ml.nb = l;
            ml.deb = ml.fin = e;
        }
        else{

            // if(!e) exit(1);
            e->val = val; //1
            e->suiv = ml.deb; //2
            e->pred = NULL; //3
            ml.deb->pred = e; //4
            ml.deb = e; //5
        }
        ml.nb ++;
        return ml;
    
}

// implementation d'une pile d'entier avec une liste
struct pile
{
    ont val;
    struct pile *suiv;
};
struct mapile
{
    int nb;
    struct pile *p;
};

// impression d'une pile avec un tableau
struct piletab{
    int nb;
    int MAX; // taille du tableau
    int *T; // tableau des elements de la pile T[0] : fond de pile 
            // et T[nb-1] le somme de pile
};

struct piletab creer_piletab(int MAX)
{
    struct piletab pt;
    pt.nb =0;
    pt.MAX = MAX;
    pt.T = malloc(MAX*sizeof(int));
    if(!pt.T) exit(1);
    return pt;
}

struct piletab inser_piletab(struct piletab pt, int val){
    if(pt.nb<pt.MAX){
        pt.T[pt.nb] = val;
        (pt.nb)++;
    }
    return pt;
}

// implementation d'une file
struct mafile{
    int nb;
    struct file *f;
    struct file *fin;
};

//implementatin d'une file avec un tableau

struct piletab{
    int nb; // nombre d'element dans la file
    int MAX; // taille du tableau
    int deb;
    int fin;
    int *T; // tableau des elements de la file T[0] : fond de file 
            // et T[nb-1] le somme de file
};

struct filetab creer_filetab(int MAX)
{
    struct filetab ft;
    ft.nb =0;
    ft.MAX = MAX;
    ft.deb =0;
    ft.fin =0;
    ft.T = malloc(MAX*sizeof(int));
    if(!ft.T) exit(1);
    return ft;
}

struct filetab enfiler_filetab(struct filetab ft, int val){
    if(ft.nb<ft.MAX){
        ft.T[ft.fin] = val;
        (ft.nb)++;
        ft.fin = (ft.fin +1) %
    }
}
struct filetab inser_filetab(struct filetab ft, int val){
    if(ft.nb<ft.MAX){
        ft.T[ft.nb] = val;
        (ft.nb)++;
    }
    return ft;
}

int main(){
    struct ma_liste ml = creer();
    affiche(ml);
    ml = inser_debml(ml,12);
    affiche(ml);
    
    ml = inser_debml(ml,3);
    affiche(ml);

    exit(0);
}