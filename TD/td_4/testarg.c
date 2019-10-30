#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



// argv : est un tableau de chaînes de caractères
// argc : est la taille du tableau
// a.
/*
#include <stdio.h>
int main( int argc, char** argv){
printf("argc = %d\n", argc);
for(int i=0 ; i<argc ; i++)
printf("%s\n", argv[i]);
return 0;
}
*/
/* b. Pourquoi la variable argv est-elle de type char** ? */

/* c. En utilisant la fonction de conversion atof() (voir le manuel), modifier le programme pour qu’il affiche
la somme des nombres passés en arguments. Par exemple l’exécution doit afficher 0.2. */

/* d. Que se passe-t-il si les arguments ne sont pas des nombres flottants ? */

/* e. En utilisant la fonction isdigit() (voir le manuel), vérifier au préalable que les arguments passés sont
bien des nombres flottants éventuellement négatifs. */

int test_float(char * chaine){
    int i = 0;
    if(chaine[0] == '-') i++;

    for(; i< strlen(chaine); i++)
    {
        if(chaine[i] == '.'){i++; break;}
        if(! isdigit(chaine[i]))  return 0;
    }

    for(; i< strlen(chaine); i++){
        if(! isdigit(chaine[i])) return 0;
    }
    return 1;
}

int main( int argc, char** argv){
    
    //if(test_float(argv[1])) printf("c'est un nombre\n");
    
    double somme = 0;
    printf("argc = %d\n", argc);

    for(int i = 1; i<argc; i++)
    {
        if(test_float(argv[i])){
            somme += atof(argv[i]);
        }
    }
    /*
    for(int i = 1; i<argc; i++)
    {
            somme += atof(argv[i]);
    }
    */
    printf ("%2f\n", somme);
    /*
    double v1 = atof(argv[1]);
    double v2 = atof(argv[2]);
    double v3 = atof(argv[3]);
    printf("somme des valeurs en argument %f\n",v1 +v2 +v3);
    */
    
    return 0;   
}
