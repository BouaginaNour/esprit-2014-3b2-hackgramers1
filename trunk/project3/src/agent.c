#include "agent.h"
#include <stdio.h>
#include <string.h>
#define MAX 50


void enregistrer_agent(char fagent[], agent p)
{
	 FILE *f;
	f=fopen(fagent,"ab");
	if(f!=NULL)
	{
		fwrite(&p,sizeof(agent),1,f);
	}
	else
		printf("erreur d'ouverture");
		fclose(f);
	}

void lister_agent(char fagent[], agent *p)
{
	FILE *f;
	f=fopen(fagent,"rb");
		
	if(f!=NULL)
	{

	    while((fread(p,sizeof(agent),1,f)!=0));
	}
	else
	printf("\nImpossible d'ouvrir le fichier du personnel");
	fclose(f);
}

void lister_agents(char fagent[], agent *p,int *n)
{
	FILE *f;
	f=fopen(fagent,"rb");
		*n=0;
	if(f!=NULL)
	{

	    while((fread(p+(*n),sizeof(agent),1,f)!=0))
                           (*n)++;
	}
	else
	printf("\nImpossible d'ouvrir le fichier du personnel");
	fclose(f);
}

int rechercher_agent(char fagent[],char cin_agent[],agent *p)
{
FILE *f;
int test=0;
f=fopen(fagent,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(p,sizeof(agent),1,f);
       if(strcmp((*p).passeport,cin_agent)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_agent(char fagent[],char cin_agent[],agent *p)
{
FILE *f;
FILE *f2;
char temp[]="temp";
f=fopen(fagent,"rb");
f2=fopen(temp,"ab");
while(fread(p,sizeof(agent),1,f)!=0)
{
if(strcmp((*p).passeport,cin_agent)!=0)
fwrite(p,sizeof(agent),1,f2);
}
fclose(f);
fclose(f2);
remove(fagent);
rename(temp,fagent);
}
