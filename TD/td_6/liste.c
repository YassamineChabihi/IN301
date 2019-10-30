#include "liste.h"
#include <stdio.h>
#include <stdlib.h>


void affiche_iter(struct liste *l){
    while(l != NULL)
    {
        printf("%d ", l->val);
        l = l->suiv;
    }
    printf("\n");
}

void affiche_rec(struct liste *l){
    if (l != NULL)
    {
        printf("%d ", l->val);
        affiche_rec(l->suiv);   
    }
    else
    {
        printf("\n");
    }
}

int nb_elem_iter(struct liste *l){
    int taille =0;
    if (l != NULL)
    {
        taille++;
        l = l->suiv;  
    }
    return taille;
}

int nb_elem_rec(struct liste *l){
    return (l) ? 1+ nb_elem_rec(l->suiv) : 0;

    /*
    if (l != NULL)
    {
        return 1 + nb_elem_rec(l->suiv);
    }
    else
    {
        return 0;
    }
    */
}

int est_present_iter(struct liste *l, int val){
    while(l){
        if (l->val == val)return 1;
        l = l->suiv;
    }
    return 0;
}

int est_present_rec(struct liste *l, int val){
    return (l) ? (l->val == val) 
    || est_present_rec(l->suiv,val): 0;
    /*
    if(l){
        if (l->val == val)return 1;
        return est_present_rec(l->suiv,val);
        
    }
    else
    {
        return 0;
    }
    */
}

struct liste *inserer_deb (struct liste *l, int val){
    struct liste *new = malloc(sizeof(struct liste));
    new->val = val;
    new->suiv = l;
    return new;
    
}
/*
void inserer_deb2 (???? l, int val){

}
*/
struct liste *supprimer_deb(struct liste *l){
    if(l == NULL){
    printf("suprission d'element dans une liste vide \n");
    exit(1);
    }
    else
    {
        struct liste *deb = l;
        l = l->suiv;
        free(deb);
        return l;
    }
    
}
/*

void supprimer_deb2 (???? l){
    
}
*/


struct liste *inserer_fin_iter (struct liste *l, int val){
    struct liste *new = malloc(sizeof(struct liste));
    new->val = val;
    new->suiv = NULL;
    if(!l){
        return new;
    }
    struct liste *temp = l;
    while(temp->suiv){temp = temp->suiv;}
    temp->suiv =new;
    return l;
    
}
struct liste *inserer_fin_rec (struct liste *l, int val){
    //return (!l) ? 
   
    if(!l){
        return (inserer_deb(l,val));
    }
    l->suiv = inserer_fin_rec(l->suiv,val);
    return l;
    
}

struct liste *supprimer_fin_iter (struct liste *l)
{
    if(!l){
        printf("on ne peut pas suprrimer un élément d'une liste vide.\n");
        exit(1);
    }
    if(!l->suiv){
        free(l);
        return NULL;
    }
    struct liste *temp = l;
    while(temp->suiv->suiv){ temp = temp->suiv;}
    free(temp->suiv);
    temp->suiv = NULL;
    return l;
}

struct liste *supprimer_fin_rec (struct liste *l){
    if(!l) return NULL;
    if(!l->suiv){
        free(l);
        return NULL;
    }
    l->suiv = supprimer_fin_rec (l->suiv);
    return l;
}

struct liste *supprimer_mil_iter (/*const*/ struct liste *l, int val){
    if(!l) return NULL;
    /*
    if(l->suiv){
        if(l->val == val){
            free(l);
            return NULL;
        }
        return l;
    }
    */
    if(l->val == val){
        struct liste *temp = l->suiv;
        free(l);
        return temp;
    }
    struct liste *temp = l;
    //il vas valuer "temp->suiv" apres "(temp->suiv)->val != val" il faut respecter l'ordre dans la langague c
    while(temp->suiv && (temp->suiv)->val != val){
        printf("pas trouve\n");
        temp = temp->suiv;
    }
    //s'arrete quand on point soit sur un element precedent un element de valeur val
    //soit sur le dernier element si il n'y a pas d'element de valeur val
    if(!temp->suiv){
        return l;
    }
    //free(temp->suiv);
    struct liste *add_sup =temp->suiv;
    temp->suiv = temp->suiv->suiv;
    free(add_sup);
    return l;
}
struct liste *supprimer_mil_rec (struct liste *l, int val){
    if(!l) return NULL;
    if(l->val == val) return supprimer_deb(l);
    l->suiv = supprimer_mil_rec(l->suiv,val);
    return l;
}
struct liste *inserer_trie_iter (struct liste *l, int val){
    if(!l || l->val >= val) return inserer_deb(l,val);
    struct liste *temp = l;
    while(temp->suiv && temp->val <= val){temp = temp->suiv;}  
    temp->suiv = inserer_deb(temp->suiv,val);  
    return l;
}
struct liste *inserer_trie_rec (struct liste *l, int val){
    /*
    if(!l) return inserer_deb(l,val);
    if(l->val >= val) return inserer_deb(l,val);
    */
    if(!l || l->val >= val) return inserer_deb(l,val);
    l->suiv = inserer_trie_rec (l->suiv,val);

    return l;
}


struct liste *retourner (struct liste *l){
    if(!l || l->suiv) return l;
    struct liste *temp = l->suiv;
    struct liste *res = retourner(l->suiv);
    temp->suiv = l;
    l->suiv = NULL;
    return res;
}
