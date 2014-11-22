#include<stdio.h>
#include "medecin.h"
int main()
{
int c,t;
  char nom_medecin[20];
  medecin p;

        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un medecin \n "
                       "\n 2.Liste des médecins \n "
                        "\n 3. Recherche médecins \n "
                         "\n 4. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%d",&c);

        switch(c)

        {

        case 1 :
        enregistrer_medecin("fmed",&p );
        break;

        case 2 :
        liste_medecin("fmed");
        break;

        case 3 :
        printf ("\ndonner un nom a chercher : ");
        scanf("%s",nom_medecin);

        t=rechercher_medecin("fmed",nom_medecin);

        if (t==1)
        printf("le personnel existe\n ");

        else printf("le personnel n'existe pas\n");
        break;

        case 4 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(c!=4);

        return (0);
}
