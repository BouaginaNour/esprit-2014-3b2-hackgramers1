#include<stdio.h>
#include<string.h>
#include"nouriture.h"
#define MAX 100
void saisir_nouriture(nouriture *n, date *d)
{
printf("donner le jour : ");fflush(stdin);
scanf("%s",n->d.jour);
printf("donner le mois : ");fflush(stdin);
scanf("%s",n->d.mois);
printf("donner l'annee : ");fflush(stdin);
scanf("%s",n->d.annee);
printf("donner la quantité de nouriture :");fflush(stdin);
scanf("%s",n->quantite);

}
void enregistrer_nouriture (char fnouriture[], nouriture *n,date *d)
{ 
FILE *f;
saisir_nouriture(n,d);
f=fopen(fnouriture,"ab");
if(f!=NULL)
{
fwrite(n,sizeof(nouriture),1,f);
}
else
printf("erreur d'ouverture");
fclose(f);
}

void liste_nouriture(char fnouriture[])
{
FILE *f;
nouriture p;
date d;
f=fopen(fnouriture,"rb");
if(f!=NULL)
 {

    while((fread(&p,sizeof(nouriture),1,f)!=0))
    {
     
     printf("\nDate:%s/%s/%s\nQuantité: %s",p.d.jour,p.d.mois,p.d.annee,p.quantite);
}
}
else
printf("\nImpossible d'ouvrir le fichier du personnel");
fclose(f);
}

