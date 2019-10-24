#include <stdio.h>
#include <stdlib.h>

int strlen2(char s[]) {
  int i;
  i=0;
  while(s[i]!='\0')
    ++i;
  return i;
}
 
int main() {
	char lettre;
	printf("entrer les lettres:\n");
scanf ( "%c" ,lettre);.
 
  //Appel de la fonction et stockage du résultat
  int resultat = strlen2(lettre);
  //Affichage
  printf("%i\n", resultat);
  return 0;
}		

/*int longeur(char* s[] ) {
	int i=0;
	while(s[i]!='\0')
	i++;
	retourn i;
}
*/
/*int longeurR(char* s){
	if(s[0]=='\0')
	retourn 0;
	retourn 1+longeurR(s+1);
}
*/
//int main() {
//printf("taille de la chaine %s ,%d \n",argv[1],longeur(argv[1]));
/*  int resultat = longeur("lkhjuyguyg"));
  printf("%i\n", longeur);
  return 0;
  		
}	
*/
