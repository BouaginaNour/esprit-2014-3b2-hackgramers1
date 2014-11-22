#include<stdio.h>
#include "agent.h"
main()
{ int t,n;
  char nom_agent[20];
  agent A;

do
{
        
printf("taper 1 pour enregistrer personnel agent \n");
printf("taper 2 pour afficher liste personnel agent \n");
printf("taper 3 pour chercher pesonnel agent \n");
printf("taper 4 pour quitter \n");


printf("donner un choix :");
scanf("%d",&n);  
 
 switch(n)
{
case 1 :
 enregistrer_agent("fagent",&A );
case 2 :
 liste_agent("fagent");
case 3 :
 printf ("\ndonner un nom a chercher : ");
        scanf("%s",nom_agent);
        t=rechercher_agent("fagent",nom_agent);
        if (t==1) 
        printf("le personnel existe\n ");
        else printf("le personnel n'existe pas\n");

case 4 :printf("vous quittez la page :");
default : printf("Mauvais choix !");
}
}
while(n!=4);
}
