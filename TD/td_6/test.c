#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    struct liste *l = NULL;

    struct liste *l1 = malloc(sizeof(struct liste));
    l1->val = 17;
    l1->suiv = NULL;
    l = l1; // la liste qu'on modifie au fur et a mesure est l

    struct liste *l2 = malloc(sizeof(struct liste));
    l2->val = 23;    
    l2->suiv = l1;
    l = l2;

    struct liste *l3 = malloc(sizeof(struct liste));
    l2->val = 42; 
    l3->suiv = l1;   
    l2->suiv = l3;


    affiche_iter(l);
    affiche_rec(l);

    printf("Nombre d'element iterative %d et recursive %d \n", nb_elem_iter (l), nb_elem_rec (l));
    
    printf("17 present dans la liste %d, 56 present dans la liste %d \n", est_present_iter(l,17), est_present_rec(l,56));

    l = inserer_deb (l,7);
    affiche_iter(l);

    l = supprimer_deb(l);
    affiche_iter(l);

    l = inserer_fin_iter (l,8);
    affiche_iter(l);

    l = inserer_fin_rec (l,9);
    affiche_iter(l);

    l = supprimer_fin_iter (l);
    affiche_iter(l);
    
    l = supprimer_fin_rec (l);
    affiche_iter(l);

    l = supprimer_mil_iter (l,0);
    affiche_iter(l);
    
    l = supprimer_mil_rec (l,42);
    affiche_iter(l);

    
    l = inserer_trie_iter (l,0);
    affiche_iter(l);
    
    l = inserer_trie_rec (l,0);
    affiche_iter(l);
    /*
    l = retourner (l);
    affiche_iter(l);
    */
    return 0;
   
}


