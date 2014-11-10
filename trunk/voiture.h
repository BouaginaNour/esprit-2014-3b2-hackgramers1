#ifndef VOITURE_H_
#define VOITURE_H_
#include "personne.h"
struct Voiture {
char immatriculation[30];
char marque[20];
char couleur[20];
personne P;
char panne[100];
};
typedef struct Voiture voiture;
void saisir_voiture(voiture *v);
void afficher_voiture(voiture v);
#endif /* VOITURE_H_ */

