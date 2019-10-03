#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void* malloc(size_t size)
//int *t = malloc(10*sizeof(int));
//free(t);



int * init_tab(){
    int *t = malloc(10*sizeof(int));

    for(int i=0; i<10; i++){
		t[i] = rand()%20;
	}

    return t;
}

void affiche(int *t, int taille){
    
    for(int i=0; i<taille; i++){

        printf("i : %d \n ",t[i]);
    }
}

int produit(int *t){
    long long int produit;
     for(int i=0; i<10; i++){
		produit = produit * t[i];
        
	}
    return produit;
    
}

int minimale(int *t){
    int min = t[10];
    for(int i=0; i<10; i++){
        if (t[i]< min)
    min =t[i];
        
	}
    return min;
}

void decalage(int *t, int taille){
    for(int i = taille-1; i >= 1; i--){
        t[i] = t[i-1];
    }
}

void alloue(int *t, int taille){
    for(int i = 1; i < taille; i++){
        t[i] = t[i-1] + rand()%10;
    }
}
int main( int argc, char** argv){

    srand(time(NULL));

    int * t = init_tab();
    affiche(t,10);
    printf("produit : %d \n ",produit(t));
    printf("minimale : %d \n ",minimale(t));
    free(t);


    

}
