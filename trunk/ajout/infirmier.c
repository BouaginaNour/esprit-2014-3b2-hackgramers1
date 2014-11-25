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

void enregistrer_infirmier (char finfirmier[], infirmier *p)
{ FILE *f;
saisir_infirmier(p);
f=fopen(finfirmier,"ab");
if(f!=NULL)
{
fwrite(p,sizeof(infirmier),1,f);
}
else
printf("erreur d'ouverture");
fclose(f);
}

void liste_infirmier(char finfirmier[])
{
FILE *f;
int i=1;
infirmier p;
infirmier inf;
inf.id=60000;
f=fopen(finfirmier,"rb");
if(f!=NULL)
 {

    while((fread(&p,sizeof(infirmier),1,f)!=0))
    {
     inf.id++;
     printf("\n");
     printf("  L'infirmier numéro %d :",i);
     printf("\nIdentifiant :%ld",inf.id);
     printf("\nNom: %s\nPrenom: %s\nAge: %d\nC.I.N/Passeport: %s\nNationalite: %s\nSalaire: %ld\nEtat civil: %s\nAdresse: %s\nTelephone: %ld",p.nom,p.prenom,p.age,p.passeport,p.nationalite,p.salaire,p.etat_civil,p.adresse,p.telephone);
    i++;
}
}
else
printf("\nImpossible d'ouvrir le fichier du personnel");
fclose(f);
}

int rechercher_infirmier(char finfirmier[],char cin_infirmier[])
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
       if(strcmp(p.passeport,cin_infirmier)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_infirmier(char finfirmier[],char cin_infirmier[])
{
infirmier m ;
FILE *f;
FILE *f2;
char temp[]="temp";
if(rechercher_infirmier(finfirmier,cin_infirmier)==-1)

printf("l'infirmier n existe pas \n");

else
{
f=fopen(finfirmier,"rb");
f2=fopen(temp,"ab");
while(fread(&m,sizeof(infirmier),1,f)!=0)
{
if(strcmp(m.passeport,cin_infirmier)!=0)
fwrite(&m,sizeof(infirmier),1,f2);
}
fclose(f);
fclose(f2);
remove(finfirmier);
rename(temp,finfirmier);
}}
