#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void* malloc(size_t size)
//int *t = malloc(10*sizeof(int));
//free(t);


// a
int * init_tab(){
    int *t = malloc(10*sizeof(int));

    for(int i=0; i<10; i++){
		t[i] = rand()%20;
	}

    return t;
}
// b
void affiche(int *t, int taille){
    
    for(int i=0; i<taille; i++){

        printf("t[%d] : %d \n ",i,t[i]);
    }
}
// c
int produit(int *t){
    long long int produit;
     for(int i=0; i<10; i++){
		produit = produit * t[i];
        // produit*= t[i];
        
	}
    return produit;
    
}
// d
int minimale(int *t){
    int min = t[0];
    for(int i=0; i<10; i++){
        if (t[i] > t[i+1])
    min = t[i+1];
        
	}
    return min;
}
// e
void decalage(int *t, int taille){
    t[0] = NULL;
    for(int i = taille-1; i >= 1; i--){
        t[i] = t[i-1];
    }
}
/*f. Écrire une fonction qui alloue un tableau de 10 entiers et le remplit avec 10 entiers en ordre croissant, le
premier étant entre 0 et 10, le deuxième entre le premier et le premier plus dix, le troisième entre le deuxième
le deuxième plus 10 et ainsi de suite.*/

void alloue(int *t, int taille){
    t[0] =rand() %10;
    for(int i = 1; i < taille; i++){
        t[i] = t[i-1] + rand()%10;
    }
}

int * init_croissant (){
	int *t = malloc (10*sizeof (int));
	t[0] =rand() %10;
	for (int i=0; i<10; i++){
		 t[i]= t[i-1]+ rand ()%10;
	}
	return t; 
}

/*g. Écrire une fonction qui insère une valeur dans un tableau trié. Après l’insertion, le tableau est toujours
trié. La valeur la plus à droite est perdue.*/

/*h. Écrire une fonction qui inverse les éléments d’un tableau. Cette inversion s’effectue sur le tableau
lui-même sans utiliser de tableau intermédiaire.*/

/*i. Écrire une fonction qui supprime un élément choisi au hasard dans le tableau, le supprime et décale les
valeurs vers la gauche. La valeur de la case la plus à droite reste inchangée.*/

/*j. Écrire une fonction qui désalloue la mémoire réservée pour le tableau.*/


int main( int argc, char** argv){

    srand(time(NULL));

    int * t = init_tab();
    affiche(t,10);
    printf("produit : %d \n ",produit(t));
    printf("minimale : %d \n ",minimale(t));
    decalage(t,10);
	affiche(t,10);
    free(t);



	int *tt= init_croissant();
	printf ("initialisation croissante\n");
	affiche(tt,10);

    return 0;

}
