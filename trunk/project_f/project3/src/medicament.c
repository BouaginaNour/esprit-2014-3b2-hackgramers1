#include "medicament.h"
#include <stdio.h>
#include <string.h>
#define MAX 50


void enregistrer_medicament(char fmedicament[], medicament p)
{
	 FILE *f;
	f=fopen(fmedicament,"ab");
	if(f!=NULL)
	{
		fwrite(&p,sizeof(medicament),1,f);
	}
	else
		printf("erreur d'ouverture");
		fclose(f);
	}

void lister_medicament(char fmedicament[], medicament *p)
{
	FILE *f;
	f=fopen(fmedicament,"rb");
		
	if(f!=NULL)
	{

	    while((fread(p,sizeof(medicament),1,f)!=0));
	}
	else
	printf("\nImpossible d'ouvrir le fichier de medicament");
	fclose(f);
}



int rechercher_medicament(char fmedicament[],char cb_medicament[],medicament *p)
{
FILE *f;
int test=0;
f=fopen(fmedicament,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(p,sizeof(medicament),1,f);
       if(strcmp((*p).codebarre,cb_medicament)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_medicament(char fmedicament[],char cb_medicament[],medicament *p)
{
FILE *f;
FILE *f2;
char temp[]="temp";
f=fopen(fmedicament,"rb");
f2=fopen(temp,"ab");
while(fread(p,sizeof(medicament),1,f)!=0)
{
if(strcmp((*p).codebarre,cb_medicament)!=0)
fwrite(p,sizeof(medicament),1,f2);
}
fclose(f);
fclose(f2);
remove(fmedicament);
rename(temp,fmedicament);
}
