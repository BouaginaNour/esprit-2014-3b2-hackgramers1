#include<stdio.h>
#include "patient.h"
main()
{ int t;
  int choix;
  char cin_patient[20];
  patient p;
  
  
   
 do
{ printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un patient \n "
                       "\n 2.Liste des patients \n "
                        "\n 3. Recherche patients \n "
                        "\n 4. Supprimer patients \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

  printf("donner un choix:" );
  scanf("%d",&choix);
  switch(choix)
  { case 1:     enregister_patient("fpatient",&p);
                break;
    case 2:     liste_patient("fpatient");
                break;                
    case 3:     
                printf ("\ndonner le cin/num passeport du patient a chercher : ");
                scanf("%s",cin_patient);
                t=rechercher_patient("fpatient",cin_patient);
                if (t==1) 
                printf("le patient existe\n ");
                else printf("le patient n'existe pas\n");
                break;

    case 4:     printf("entrer le cin/num passport du patient a supprimer \n");
        scanf("%s",cin_patient);
        supprimer_patient("fpatient",cin_patient);
        break;


    case 5:     printf("Vous quittez la page\n");
                break;
    default :   printf("Mauvais choix\n");
        
}
}while(choix!=5);
}
