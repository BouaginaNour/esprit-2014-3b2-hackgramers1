#include "patient.h"
#include <stdio.h>
#include <string.h>
#define MAX 50

void saisir_patient(patient *p)
{

printf("veillez saisir le nom du patient : ");
scanf("%s",p->nom);
printf("veillez saisir le prenom du patient : ");
scanf("%s",p->prenom);
printf("veillez saisir l'age du patient : ");
scanf("%d",&p->age);
printf("veillez saisir la nationalite : ");
scanf("%s",p->nationalite);
printf("veillez saisir le numero du C.I.N/Passeport : ");
scanf("%s",p->passeport);
printf("veillez saisir l'adresse: ");
scanf("%s",p->adresse);
printf("veillez saisir le contact d'urgence : ");
scanf("%ld",&p->conturg);
printf("veillez saisir le poids : ");
scanf("%f",&p->poids);
printf("veillez saisir la taille en cm : ");
scanf("%d",&p->taille);
printf("veillez saisir le sexe : ");
scanf("%s",p->sexe);
printf("veillez saisir le type du sang : ");
scanf("%s",p->sang);
printf("veillez saisir les allergies : ");
scanf("%s",p->allergie);
printf("veillez saisir l'etat : ");
scanf("%s",p->etat);
printf("veillez saisir la date d'entrée : ");
scanf("%s",p->dateent);
printf("veillez saisir la date de sortie : ");
scanf("%s",p->datesor);
printf("veillez saisir la localisation du patient : ");
scanf("%s",p->localisation);
}

void enregister_patient(char fpatient[], patient *p)
{ FILE *f;
saisir_patient(p);
f=fopen(fpatient,"ab");
if(f!=NULL)
{
fwrite(p,sizeof(patient),1,f);
}
else
printf("erreur d'ouverture");
fclose(f);
}

void liste_patient(char fpatient[])
{
FILE *f;
int i=1;
patient p;
patient p1;
p1.id=80001;
f=fopen(fpatient,"rb");
if(f!=NULL)
 {
        while((fread(&p,sizeof(patient),1,f)!=0))
{   
    printf("\n   Patient n°%d :",i);
    printf("\nIdentifiant: %ld",p1.id);
     printf("\nNom: %s \nPrenom: %s \nAge: %d \nNationalite: %s \nPasseport: %s \nIdentifiant: %ld \nAdresse: %s \nContact d'urgence: %ld \nPoids: %f \nTaille: %d \nSexe: %s \nSang: %s \nAllergies: %s \nEtat: %s \nDate d'entree %s \nDate de sorite: %s\nLocalisation: %s",p.nom,p.prenom,p.age,p.nationalite,p.passeport,p1.id,p.adresse,p.conturg,p.poids,p.taille,p.sexe,p.sang,p.allergie,p.etat,p.dateent,p.datesor,p.localisation);
    p1.id++;
    i++;
 } 
}
else
printf("\nImpossible d'ouvrir le fichier du personnel");
fclose(f);
}
int rechercher_patient(char fpatient[], char cin_patient[])
{
FILE *f;
int t=0;
patient p;
f=fopen(fpatient,"rb");
if (f!=NULL)
{
   while(!feof(f)&&t==0)
   {
     fread(&p,sizeof(patient),1,f);
       if(strcmp(p.passeport,cin_patient)==0)
           t=1;
   }
}
else
t=-1;
return t;
fclose(f);
}

void supprimer_patient(char fpatient[],char cin_patient[])
{
patient p ;
FILE *f;
FILE *f2;
char temp[]="temp";
if(rechercher_patient(fpatient,cin_patient)==-1)

printf("le patient n existe pas \n");

else
{
f=fopen(fpatient,"rb");
f2=fopen(temp,"ab");
while(fread(&p,sizeof(patient),1,f)!=0)
{
if(strcmp(p.passeport,cin_patient)!=0)
fwrite(&p,sizeof(patient),1,f2);
}
fclose(f);
fclose(f2);
remove(fpatient);
rename(temp,fpatient);
}}
