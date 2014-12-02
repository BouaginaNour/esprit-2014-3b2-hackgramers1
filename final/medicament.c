#include<stdio.h>
#include<string.h>
#include"medicament.h"
#define MAX 100
void saisir_medicament(medicament *m)
{
printf("donner le nom de medicament:");fflush(stdin);
scanf("%s",m->nom);
printf("donner le codebarre de medicament:");fflush(stdin);
scanf("%s",m->codebarre);
}
void enregistrer_medicament (char fmedicament[], medicament *m)
{ FILE *f;
saisir_medicament(m);
f=fopen(fmedicament,"ab");
if(f!=NULL)
{
fwrite(m,sizeof(medicament),1,f);
}
else
printf("erreur d'ouverture");
fclose(f);
}
int rechercher_medicament(char fmedicament[],char codebarre[])
{
FILE *f;
int test=0;
medicament m;
f=fopen(fmedicament,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(&m,sizeof(medicament),1,f);
       if(strcmp(m.codebarre,codebarre)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_medicament(char fmedicament[],char codebarre[] )
{
medicament a ;
FILE *f;
FILE *f2;
char temp[]="temp";
if(rechercher_medicament(fmedicament,codebarre)==-1)

printf("la medicament n existe pas \n");

else
{
f=fopen(fmedicament,"rb");
f2=fopen(temp,"ab");
while(fread(&a,sizeof(medicament),1,f)!=0)
{
if(strcmp(a.codebarre,codebarre)!=0)
fwrite(&a,sizeof(medicament),1,f2);
}
fclose(f);
fclose(f2);
remove(fmedicament);
rename(temp,fmedicament);
}}

void liste_medic(char fmedicament[])
{
FILE *f;
medicament p;

f=fopen(fmedicament,"rb");
if(f!=NULL)
 {

    while((fread(&p,sizeof(medicament),1,f)!=0))
    {
     
     printf("\nNom: %s\ncodebarre: %s",p.nom,p.codebarre);
}
}
else
printf("\nImpossible d'ouvrir le fichier du personnel");
fclose(f);
}

