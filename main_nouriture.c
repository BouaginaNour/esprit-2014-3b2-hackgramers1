#include<stdio.h>
#include "nouriture.h"
int main()
{
int c,t;
  nouriture n;
  char codebarre[10]  ;
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un nouriture \n "
                        "\n 2. Recherche nouriture \n "
                        "\n 3. Supprimer nouriture \n"
                         "\n 4. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%d",&c);

        switch(c)

        {

        case 1 :
        enregistrer_nouriture("fnouriture",&n );
  
        break;

        case 2 :
        printf ("\ndonner le code barre a chercher : ");
        scanf("%ld",codebarre);

        t=rechercher_nouriture("fnouriture",codebarre);

        if (t==1)
        printf("la nouriture existe\n ");

        else printf("la nouriture n'existe pas\n");
        break;

        case 3 :
        printf("entrer le code barre de medicament a supprimer \n");
        scanf("%s",codebarre);
        supprimer_nouriture("fnouriture",codebarre);
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
