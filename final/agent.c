#include "agent.h"
#include <stdio.h>
#include <string.h>
#define MAX 50

void saisir_agent(agent *p)
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

void enregistrer_agent (char fagent[], agent *p)
{ FILE *f;
saisir_agent(p);
f=fopen(fagent,"ab");
if(f!=NULL)
{
fwrite(p,sizeof(agent),1,f);
}
else
printf("erreur d'ouverture");
fclose(f);
}

void liste_agent(char fagent[])
{
FILE *f;
int i=1;
agent p;
agent ag;
ag.id=50000;
f=fopen(fagent,"rb");
if(f!=NULL)
 {

    while((fread(&p,sizeof(agent),1,f)!=0))
    {
     ag.id++;
     printf("\n");
     printf("  L'agent numéro %d :",i);
     printf("\nIdentifiant :%ld",ag.id);
     printf("\nNom: %s\nPrenom: %s\nAge: %d\nC.I.N/Passeport: %s\nNationalite: %s\nSalaire: %ld\nEtat civil: %s\nAdresse: %s\nTelephone: %ld",p.nom,p.prenom,p.age,p.passeport,p.nationalite,p.salaire,p.etat_civil,p.adresse,p.telephone);
    i++;
}
}
else
printf("\nImpossible d'ouvrir le fichier du personnel");
fclose(f);
}

int rechercher_agent(char fagent[],char cin_agent[])
{
FILE *f;
int test=0;
agent p;
f=fopen(fagent,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(&p,sizeof(agent),1,f);
       if(strcmp(p.passeport,cin_agent)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_agent(char fagent[],char cin_agent[])
{
agent m ;
FILE *f;
FILE *f2;
char temp[]="temp";
if(rechercher_agent(fagent,cin_agent)==-1)

printf("l'agent n existe pas \n");

else
{
f=fopen(fagent,"rb");
f2=fopen(temp,"ab");
while(fread(&m,sizeof(agent),1,f)!=0)
{
if(strcmp(m.passeport,cin_agent)!=0)
fwrite(&m,sizeof(agent),1,f2);
}
fclose(f);
fclose(f2);
remove(fagent);
rename(temp,fagent);
}}
