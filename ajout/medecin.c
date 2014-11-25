#include "medecin.h"
#include <stdio.h>
#include <string.h>
#define MAX 50

void saisir_medecin(medecin *p)
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

void enregistrer_medecin (char fmedecin[], medecin *p)
{ FILE *f;
saisir_medecin(p);
f=fopen(fmedecin,"ab");
if(f!=NULL)
{
fwrite(p,sizeof(medecin),1,f);
}
else
printf("erreur d'ouverture");
fclose(f);
}

void liste_medecin(char fmedecin[])
{
FILE *f;
int i=1;
medecin p;
medecin med;
med.id=70000;
f=fopen(fmedecin,"rb");
if(f!=NULL)
 {

    while((fread(&p,sizeof(medecin),1,f)!=0))
    {
     med.id++;
     printf("\n");
     printf("  Le medecin numéro %d :",i);
     printf("\nIdentifiant :%ld",med.id);
     printf("\nNom: %s\nPrenom: %s\nAge: %d\nC.I.N/Passeport: %s\nNationalite: %s\nSalaire: %ld\nEtat civil: %s\nAdresse: %s\nTelephone: %ld",p.nom,p.prenom,p.age,p.passeport,p.nationalite,p.salaire,p.etat_civil,p.adresse,p.telephone);
    i++;
}
}
else
printf("\nImpossible d'ouvrir le fichier du personnel");
fclose(f);
}

int rechercher_medecin(char fmed[],char cin_medecin[])
{
FILE *f;
int test=0;
medecin p;
f=fopen(fmed,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(&p,sizeof(medecin),1,f);
       if(strcmp(p.passeport,cin_medecin)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_medecin(char fmedecin[],char cin_medecin[])
{
medecin m ;
FILE *f;
FILE *f2;
char temp[]="temp";
if(rechercher_medecin(fmedecin,cin_medecin)==-1)

printf("le medecin n existe pas \n");

else
{
f=fopen(fmedecin,"rb");
f2=fopen(temp,"ab");
while(fread(&m,sizeof(medecin),1,f)!=0)
{
if(strcmp(m.passeport,cin_medecin)!=0)
fwrite(&m,sizeof(medecin),1,f2);
}
fclose(f);
fclose(f2);
remove(fmedecin);
rename(temp,fmedecin);
}}
