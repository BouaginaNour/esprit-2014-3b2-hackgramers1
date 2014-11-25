#include<stdio.h>
#include "infirmier.h"
int main()
{
int c,t;
  infirmier p;
  char cin_infirmier[20] ;
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un infirmier \n "
                       "\n 2.Liste des infirmiers \n "
                        "\n 3. Recherche infirmiers \n "
                        "\n 4. Supprimer infirmiers \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%d",&c);

        switch(c)

        {

        case 1 :
        enregistrer_infirmier("finf",&p );
        break;

        case 2 :
        liste_infirmier("finf");
        break;

        case 3 :
        printf ("\ndonner le cin/num passeport a chercher : ");
        scanf("%s",cin_infirmier);

        t=rechercher_infirmier("finf",cin_infirmier);

        if (t==1)
        printf("le personnel existe\n ");

        else printf("le personnel n'existe pas\n");
        break;

        case 4 :
        printf("entrer le cin/num passport de la personne a supprimer \n");
        scanf("%s",cin_infirmier);
        supprimer_infirmier("finf",cin_infirmier);
        break;

        case 5 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(c!=5);

        return (0);
}
