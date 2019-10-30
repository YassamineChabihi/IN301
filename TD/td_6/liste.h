// Exercice 26
struct liste {
int val; // Valeur stockée
struct liste *suiv; // Pointeur vers le suivant
};

// e
void affiche_iter(struct liste *l);
void affiche_rec(struct liste *l);

// f
int nb_elem_iter(struct liste *l);
int nb_elem_rec(struct liste *l);

// g
int est_present_iter(struct liste *l, int val);
int est_present_rec(struct liste *l, int val);

// Exercice 27
// a
struct liste *inserer_deb (struct liste *l, int val);

// b
//void inserer_deb2 (???? l, int val);

// c
struct liste *supprimer_deb (struct liste *l);

// d
//void supprimer_deb2 (???? l);

// Exercice 28
// a
struct liste *inserer_fin_iter (struct liste *l, int val);
struct liste *inserer_fin_rec (struct liste *l, int val);

// b
struct liste *supprimer_fin_iter (struct liste *l);
struct liste *supprimer_fin_rec (struct liste *l);

// Exercice 29
// a
struct liste *supprimer_mil_iter (struct liste *l, int val);
struct liste *supprimer_mil_rec (struct liste *l, int val);

// b
struct liste *inserer_trie_iter (struct liste *l, int val);
struct liste *inserer_trie_rec (struct liste *l, int val);

// Exercice 30
// a
struct liste *retourner (struct liste *l);

// b
//struct liste *concat (struct liste *l1, struct liste *l2);

// c
//struct liste *fusion (struct liste *l1, struct liste *l2);

// d
//struct liste *uniq (struct liste *l);

// e
//struct liste *echange (struct liste *l);
//struct liste *tri_a_bulle (struct liste *l);