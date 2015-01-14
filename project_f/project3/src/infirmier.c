#include "infirmier.h"
#include <stdio.h>
#include <string.h>
#define MAX 50


void enregistrer_infirmier(char finfirmier[], infirmier p)
{
	 FILE *f;
	f=fopen(finfirmier,"ab");
	if(f!=NULL)
	{
		fwrite(&p,sizeof(infirmier),1,f);
	}
	else
		printf("erreur d'ouverture");
		fclose(f);
	}

void lister_infirmier(char finfirmier[], infirmier *p)
{
	FILE *f;
	f=fopen(finfirmier,"rb");
		
	if(f!=NULL)
	{

	    while((fread(p,sizeof(infirmier),1,f)!=0));
	}
	else
	printf("\nImpossible d'ouvrir le fichier du personnel");
	fclose(f);
}


int rechercher_infirmier(char finfirmier[],char cin_infirmier[],infirmier *p)
{
FILE *f;
int test=0;
f=fopen(finfirmier,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(p,sizeof(infirmier),1,f);
       if(strcmp((*p).passeport,cin_infirmier)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_infirmier(char finfirmier[],char cin_infirmier[],infirmier *p)
{
FILE *f;
FILE *f2;
char temp[]="temp";
f=fopen(finfirmier,"rb");
f2=fopen(temp,"ab");
while(fread(p,sizeof(infirmier),1,f)!=0)
{
if(strcmp((*p).passeport,cin_infirmier)!=0)
fwrite(p,sizeof(infirmier),1,f2);
}
fclose(f);
fclose(f2);
remove(finfirmier);
rename(temp,finfirmier);
}
