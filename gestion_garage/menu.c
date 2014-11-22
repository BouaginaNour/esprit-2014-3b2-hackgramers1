#include <stdio.h>
#include "menu.h"

void afficher_menu(void)
{
printf("pour ajouter voiture:taper 1\npour supprimer voiture:taper 2\npour afficher garage:taper 3\npour intialiser garage:taper 4\npour quitter l'application:taper 0");
}

int choix_menu(void)
{int c;
scanf("%d",&c);
return(c);
}
