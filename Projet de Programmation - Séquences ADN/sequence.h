char* SeqAleatoire(int n);

struct SEQUENCE{

    int N;  // Taille du tableau
    char *T; // Pointeur vers le tableau

    int numero_fichier; 
	

};
typedef struct SEQUENCE SEQUENCE;


SEQUENCE lire_fichier(FILE * F);