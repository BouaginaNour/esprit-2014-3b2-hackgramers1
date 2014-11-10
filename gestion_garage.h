#ifndef GESTION_GARAGE_H_
#define GESTION_GARAGE_H_
#include "voiture.h"
#define capacite = 100
void ajouter_voiture(voiture garage[], int *n, voiture v);
void supprimer_voiture(voiture garage[], char immatriculation[], int *n);
void afficher_garage(voiture garage[], int n);
void init_garage(voiture garage[], int n);
#endif /* GESTION_GARAGE_H_ */
