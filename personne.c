#include<stdio.h>
#include<string.h>
#include"personne.h"

void saisir_personne (personne *p)
{ 
printf("Entrer le nom");
fflush(stdin);
scanf("%s",p->nom);
printf("Entrer le prenom");
fflush(stdin);
scanf("%s",p->prenom);
printf("Entrer CIN");
scanf("%ld",&(*p).cin);
printf("Entrer l'age");
scanf("%d",&(*p).age);
}

void afficher_personne(personne p)
{
printf("Nom    :%s\n",p.nom);
printf("PreNom :%s\n",p.prenom);
printf("CIN    : %ld\n",p.cin);
printf("Age    :%d\n",p.age);
}
