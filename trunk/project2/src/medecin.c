#include "medecin.h"
#include <stdio.h>
#include <string.h>
#define MAX 50


void enregistrer_medecin (char fmedecin[], medecin *p)
{ FILE *f;
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
;
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
