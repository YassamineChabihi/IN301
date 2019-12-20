#ifndef _TABINT_H
#define _TABINT_H

// 20.a. Expliquez cette définition ?
struct tabint {
    int N;  // Taille du tableau
    int *T; // Pointeur vers le tableau
};
typedef struct tabint TABINT;

/* 20.b. une fonction qui créé et remplit un tableau de N cases avec 
les valeurs aléatoires comprises dans l’intervalle 0..K */
TABINT gen_alea_tabint (int N, int K);

// 20.c. une fonction qui désalloue un tableau
void sup_tabint (TABINT T);

// 20.d. une fonction qui affiche un tableau
void aff_tabint (TABINT T);

/* 20.e. une fonction qui teste le contenu d’une case i du tableau avec 
le contenu de la case suivante i+1. 
Si le contenu de la case i est supérieure au contenu de la case i+1, 
les contenus sont échangés
Utiliser ech_tabint avec i < à T.N-1 */
void ech_tabint (TABINT T, int i);

/* 20.f. une fonction qui parcourt le tableau du début jusqu’à l’indice fin et 
effectue l’échange de la fonction précédente pour toute les cases de 0 à fin-1 */
void scan_ech_tabint(TABINT A, int fin);

// 22.a.
// les deux sous-tableaux sont triés
void fusionner (TABINT T, int deb, int mil, int fin);

int verif_si_tableau_croissant (TABINT T); 

#endif
