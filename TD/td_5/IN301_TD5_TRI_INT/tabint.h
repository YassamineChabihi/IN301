#ifndef _TABINT_H
#define _TABINT_H


struct tabint {
    int N;  // Taille du tableau
    int *T; // Pointeur vers le tableau
};
typedef struct tabint TABINT;


TABINT gen_alea_tabint (int N, int K);
void sup_tabint (TABINT T);

void aff_tabint (TABINT T);

// Utilisation ech_tabint avec i < à T.N-1
void scan_ech_tabint (TABINT A, int fin);
void ech_tabint (TABINT T, int i);
void fusionner (TABINT T, int deb, int mil, int fin);

int verif_si_tableau_croissant (TABINT T); 


#endif
