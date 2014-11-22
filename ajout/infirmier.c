#include "infirmier.h"
#include <stdio.h>
#include <string.h>
#define MAX 50

void saisir_infirmier(infirmier *p)
{

printf("veillez saisir le nom du personnel : ");
scanf("%s",p->nom);
printf("veillez saisir le prenom de la personne : ");
scanf("%s",p->prenom);
printf("veillez saisir l'age du personnel : ");
scanf("%d",&p->age);
printf("veillez saisir le numero de passeport : ");
scanf("%s",p->passeport);
printf("veillez saisir le mot de passe : ");
scanf("%s",p->mdp);
printf("veillez saisir la nationalite : ");
scanf("%s",p->nationalite);
printf("veillez saisir le salaire en dollar : ");
scanf("%ld",&p->salaire);
printf("veillez saisir l'etat civil : ");
scanf("%s",p->etat_civil);
printf("veillez saisir l'adresse : ");
scanf("%s",p->adresse);
printf("veillez saisir le numero de telephone : ");
scanf("%ld",&p->telephone);
}

void enregistrer_infirmier (char finf[], infirmier *p)
{ FILE *f;
saisir_infirmier(p);
f=fopen(finf,"ab");
if(f!=NULL)
{
fwrite(p,sizeof(infirmier),1,f);
}
else
printf("erreur d'ouverture");
fclose(f);
}



void liste_infirmier(char finf[])
{
FILE *f;
int i=1;
infirmier p;
infirmier H;
H.id=50000;
f=fopen(finf,"rb");
if(f!=NULL)
 {

    while((fread(&p,sizeof(infirmier),1,f)!=0))
{
   
     H.id++;
    printf("\n");
    printf("l'infirmier numéro %d :\n",i);
    printf(" idenfiant: %ld",H.id);
    printf("\n nom :%s \n prenom :%s \n age :%d \n passeport :%s   \n nationalite :%s \n salaire :%ld \n etat_civil :%s \n adresse :%s \n telephone :%ld \n",p.nom,p.prenom,p.age,p.passeport,p.nationalite,p.salaire,p.etat_civil,p.adresse,p.telephone);

    i++;
}
  
}
else 
printf("\nImpossible d'ouvrir le fichier du personnel");
fclose(f);
}

int rechercher_infirmier(char finfirmier[],char nom_infirmier[])
{
FILE *f;
int test=0;
infirmier p;
f=fopen(finfirmier,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(&p,sizeof(infirmier),1,f);
       if(strcmp(p.nom,nom_infirmier)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}
