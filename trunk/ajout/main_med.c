#include<stdio.h>
#include "medecin.h"
int main()
{
int c,t;
  medecin p;
  char cin_medecin[20] ;
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un medecin \n "
                       "\n 2.Liste des médecins \n "
                        "\n 3. Recherche médecins \n "
                        "\n 4. Supprimer médecins \n"
                         "\n 5. Quittez \n "
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
        printf ("\ndonner le cin/num passeport a chercher : ");
        scanf("%s",cin_medecin);

        t=rechercher_medecin("fmed",cin_medecin);

        if (t==1)
        printf("le personnel existe\n ");

        else printf("le personnel n'existe pas\n");
        break;

        case 4 :
        printf("entrer le cin/num passport de la personne a supprimer \n");
        scanf("%s",cin_medecin);
        supprimer_medecin("fmed",cin_medecin);
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
