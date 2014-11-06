#include<stdio.h>
#include"personne.h"
void sasir_personne(Personne *p)
{
     printf("donner nom personne");
     scanf("%s", &*p.nom);
     printf("donner prenom personne");
     scanf("%s", &*p.prenom);
     printf("donner cin");
     scanf("%ld", &*p.cin);
     printf("donner age");
     scanf("%d", &*p.age);
}

void afficher_personne(Personne p)
{
     printf("\n nom:%s prenom:%s cin:%ld age:%d");
}

