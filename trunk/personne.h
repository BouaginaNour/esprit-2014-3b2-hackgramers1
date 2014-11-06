#ifndef PERSONNE_H_
#define PERSONNE_H_
struct Personne {
char nom[20];
char prenom[20];
long int cin;
int age;
};
typedef struct Personne Personne;
void saisir_personne(Personne *p);
void afficher_personne(Personne p);
#endif /* PERSONNE_H_ */
