#define TAILLE_MAX 100



// implementation de la file par un tableau
typedef struct{

   elem *contenu; //tableau des éléments
    int debut; // case de l'élément le plus anciennement enfilé
    int taille; //nombre de cases utilises par des élément de  la fin
}File;

File creer_file();
int est_vide(File f);
File enfile(File f, int x); // echoue si la file est pliene
int defile(File *f);//echoue si il n'ya pas d'élément
void affiche_file(File f);