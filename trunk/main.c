#include <stdio.h>
#include "gestion_garage.h" 
#include "voiture.h" 
#include "menu.h"
#define MAX 100 
int main() 
{
      voiture garage[MAX];
      int n = 0;
int choix;
switch (choix) {
case 1: ajouter_voiture( garage[], n);
break;
case 2: supprimer_voiture( garage[],  immatriculation[], n) ;
break;
case 3: afficher_garage(garage[],n) ;
break;
case 4: init_garage(garage[],n);
break;
case 0: printf("\nVous quitter l'application"); break;
default: printf("\nmauvais choix");
}
return (0); }
