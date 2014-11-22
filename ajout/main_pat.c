#include<stdio.h>
#include "patient.h"
main()
{ int t;
  int choix;
  char nom_patient[20];
  patient p;
  
  
   
 do
{ printf("\ntaper 1 pour enregistrer patient \n");
  printf("taper 2 pour afficher la liste des patients \n");
  printf("taper 3 pour chercher un patient \n");
  printf("taper 4 pour quitter \n");
  printf("donner un choix:" );
  scanf("%d",&choix);
  switch(choix)
  { case 1:     enregister_patient("fpatient",&p);
                break;
    case 2:     liste_patient("fpatient");
                break;                
    case 3:     
                printf ("\ndonner un nom a chercher : ");
                scanf("%s",nom_patient);
                t=recherche_patient("fpatient",nom_patient);
                if (t==1) 
                printf("le patient existe\n ");
                else printf("le patient n'existe pas\n");
                break;

    case 4:     printf("Vous quittez la page\n");
                break;
    default :   printf("Mauvais choix\n");
        
}
}while(choix!=4);
}
