#include<stdio.h>
#include "infirmier.h"
main()
{ int t,n;
  char nom_infirmier[20];
  infirmier H;

do
{
        
printf("taper 1 pour enregistrer infirmier \n");
printf("taper 2 pour afficher liste des infirmiers \n");
printf("taper 3 pour chercher infirmier \n");
printf("taper 4 pour quitter \n");


printf("\ndonner un choix :");
scanf("%d",&n);  
 
 switch(n)
{
case 1 :
 enregistrer_infirmier("finf",&H );
 break;
case 2 :
liste_infirmier("finf");
break;
case 3 :
 printf ("\ndonner un nom a chercher : ");
        scanf("%s",nom_infirmier);
        t=rechercher_infirmier("finf",nom_infirmier);
        if (t==1) 
        printf("le personnel existe\n ");
        else printf("le personnel n'existe pas\n");
        break;

case 4 :printf("vous quittez la page :");
        break;
default : printf("Mauvais choix !");
}
}
while(n!=4);
}
