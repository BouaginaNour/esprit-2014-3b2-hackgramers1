#include<stdio.h>
#include "medicament.h"
int main()
{
int c,t;
  medicament m;
  char codebarre[10]  ;
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un medicament \n "
                        "\n 2. Recherche medicament \n "
                        "\n 3. Supprimer medicament \n"
                         "\n 4. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%d",&c);

        switch(c)

        {

        case 1 :
        enregistrer_medicament("fmedicament",&m );
        break;

        case 2 :
        printf ("\ndonner le code barre a chercher : ");
        scanf("%s",codebarre);

        t=rechercher_medicament("fmedicament",codebarre);

        if (t==1)
        printf("la medicament existe\n ");

        else printf("la medicament n'existe pas\n");
        break;

        case 3 :
        printf("entrer le code barre de medicament a supprimer \n");
        scanf("%s",codebarre);
        supprimer_medicament("fmedicament",codebarre);
        break;

        case 4 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(c!=5);

        return (0);
}
