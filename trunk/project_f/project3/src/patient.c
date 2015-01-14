#include "patient.h"
#include <stdio.h>
#include <string.h>
#define MAX 50


void enregistrer_patient(char fpatient[], patient p)
{
	 FILE *f;
	f=fopen(fpatient,"ab");
	if(f!=NULL)
	{
		fwrite(&p,sizeof(patient),1,f);
	}
	else
		printf("erreur d'ouverture");
		fclose(f);
	}

void lister_patient(char fpatient[], patient *p)
{
	FILE *f;
	f=fopen(fpatient,"rb");
		
	if(f!=NULL)
	{

	    while((fread(p,sizeof(patient),1,f)!=0));
	}
	else
	printf("\nImpossible d'ouvrir le fichier du personnel");
	fclose(f);
}


int rechercher_patient(char fpatient[],char cin_patient[],patient *p)
{
FILE *f;
int test=0;
f=fopen(fpatient,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(p,sizeof(patient),1,f);
       if(strcmp((*p).passeport,cin_patient)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_patient(char fpatient[],char cin_patient[],patient *p)
{
FILE *f;
FILE *f2;
char temp[]="temp";
f=fopen(fpatient,"rb");
f2=fopen(temp,"ab");
while(fread(p,sizeof(patient),1,f)!=0)
{
if(strcmp((*p).passeport,cin_patient)!=0)
fwrite(p,sizeof(patient),1,f2);
}
fclose(f);
fclose(f2);
remove(fpatient);
rename(temp,fpatient);
}
