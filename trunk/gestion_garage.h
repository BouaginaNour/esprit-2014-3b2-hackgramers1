#ifndef GESTION_GARAGE_H_
#define GESTION_GARAGE_H_
#include "voiture.h"
#define capacite = 100
void ajouter_voiture(Voiture garage[], int *n, Voiture v);
void supprimer_voiture(Voiture garage[], char immatriculation[], int *n);
void afficher_garage(Voiture garage[], int n);
void init_garage(Voiture garage[], int n);
#endif /* GESTION_GARAGE_H_ */
