#ifndef PERSONNE_H_
#define PERSONNE_H_
struct Personne {
char nom[20];
char prenom[20];
long int cin;
int age;
};
typedef struct Personne personne;
void saisir_personne(personne *p);
void afficher_personne(personne p);
#endif /* PERSONNE_H_ */

