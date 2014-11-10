#include <stdio.h>
#include "gestion_garage.h" 
#include "voiture.h" 
#include "menu.h"
#define MAX 100 int main() {
      Voiture garage[MAX];
      int n = 0;
int choix;
switch (choix) {
case 1: ajouter_voiture(Voiture garage[], int *n, Voiture v);
break;
case 2: supprimer_voiture(Voiture garage[], char immatriculation[], int *n) ;
break;
case 3: afficher_garage(Voiture garage[], int n) ;
break;
case 4: init_garage(Voiture garage[], int n);
break;
case 0: printf("\nVous quitter l'application"); break;
default: printf("\nmauvais choix");
}
return (0); }
