#include <stdio.h>

void count(char *addresse){
	FILE *F = fopen(addresse,"r");
	char c;
	int nombre_char = 0, nombre_mot = 0, nombre_ligne = 0;
	int lecture_espace = 1; //0 pour lecture d'un mot, 1 pour suite d'espace
	while((c = fgetc(F)) != EOF){
		nombre_char++; 
		if(c == '\n') nombre_ligne++;//le nombre de ligne est le nombre de retour a la ligne rencontre 
		if(c == ' ' || c == '	'|| c == '\n'){	
			if(!lecture_espace) lecture_espace = 1;
		}
		else{
			if(lecture_espace){
				lecture_espace = 0; //on trouve un nouveau mot quand on a caractère qui n'est pas un separateur
									//a la suite d'un caractère qui est un separateur (espace, tab, retour a la ligne)
				nombre_mot++;
			} 
		}
	}
	printf("Nombre de lignes: %d, nombre de mots: %d, caracteres: %d",nombre_ligne, nombre_mot,nombre_char);
}


int main(int argc, char **argv){
	if(argc > 2) {
		printf("Le programme s'utilise avec un seul argument, le nom de fichier dont on compte les mots");
		return 1;
	}
	count(argv[1]);
	return 0;

}