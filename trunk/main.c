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
voiture v ;
char immatriculation[30] ;
do
{
 afficher_menu() ;
choix= choix_menu();
switch (choix)
 {

 case 1: saisir_voiture(&v);
ajouter_voiture ( garage, &n, v);
 break;
 case 2:printf("donner l'immatriculation de la voiture a supprimer");
        scanf("%s",immatriculation); 
supprimer_voiture( garage,immatriculation, &n) ;
 break;
 case 3: afficher_garage(garage, n) ;
 break;
 case 4: init_garage( garage, n);
 break;
 case 0: printf("\nVous quitter l'application");
 break;
 default: printf("\nmauvais choix");
}
}
while (choix!=0) ;
return (0);
}

