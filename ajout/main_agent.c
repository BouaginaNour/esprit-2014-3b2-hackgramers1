#include<stdio.h>
#include "agent.h"
int main()
{
int c,t;
  agent p;
  char cin_agent[20] ;
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un agent \n "
                       "\n 2.Liste des agents \n "
                        "\n 3. Recherche agents \n "
                        "\n 4. Supprimer agents \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%d",&c);

        switch(c)

        {

        case 1 :
        enregistrer_agent("fagent",&p );
        break;

        case 2 :
        liste_agent("fagent");
        break;

        case 3 :
        printf ("\ndonner le cin/num passeport a chercher : ");
        scanf("%s",cin_agent);

        t=rechercher_agent("fagent",cin_agent);

        if (t==1)
        printf("le personnel existe\n ");

        else printf("le personnel n'existe pas\n");
        break;

        case 4 :
        printf("entrer le cin/num passport de la personne a supprimer \n");
        scanf("%s",cin_agent);
        supprimer_agent("fagent",cin_agent);
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
