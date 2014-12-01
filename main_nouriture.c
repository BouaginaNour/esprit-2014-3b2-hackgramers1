#include<stdio.h>
#include "nouriture.h"
int main()
{
int c,t;
  nouriture n;
  date d;
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Ajouter la quantité de la nouriture du jour \n "
                        "\n 2. Afficher nouriture \n "
                         "\n 3. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%d",&c);

        switch(c)

        {

        case 1 :
        enregistrer_nouriture("fnouriture",&n,&d );
  
        break;

        case 2 :
        liste_nouriture("fnouriture");
        break;

       
        case 3 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(c!=3);

        return (0);
}
