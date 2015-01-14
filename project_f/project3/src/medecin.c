#include "medecin.h"
#include <stdio.h>
#include <string.h>
#define MAX 50


void enregistrer_medecin(char fmedecin[], medecin p)
{
	 FILE *f;
	f=fopen(fmedecin,"ab");
	if(f!=NULL)
	{
		fwrite(&p,sizeof(medecin),1,f);
	}
	else
		printf("erreur d'ouverture");
		fclose(f);
	}

void lister_medecin(char fmedecin[], medecin *p)
{
	FILE *f;
	f=fopen(fmedecin,"rb");
		
	if(f!=NULL)
	{

	    while((fread(p,sizeof(medecin),1,f)!=0));
	}
	else
	printf("\nImpossible d'ouvrir le fichier du personnel");
	fclose(f);
}

int rechercher_medecin(char fmed[],char cin_medecin[],medecin *p)
{
FILE *f;
int test=0;
f=fopen(fmed,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(p,sizeof(medecin),1,f);
       if(strcmp((*p).passeport,cin_medecin)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_medecin(char fmedecin[],char cin_medecin[],medecin*p)
{
FILE *f;
FILE *f2;
char temp[]="temp";
f=fopen(fmedecin,"rb");
f2=fopen(temp,"ab");
while(fread(p,sizeof(medecin),1,f)!=0)
{
if(strcmp((*p).passeport,cin_medecin)!=0)
fwrite(p,sizeof(medecin),1,f2);
}
fclose(f);
fclose(f2);
remove(fmedecin);
rename(temp,fmedecin);
}
