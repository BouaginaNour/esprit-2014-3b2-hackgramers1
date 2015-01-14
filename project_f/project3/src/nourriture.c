#include "nourriture.h"
#include <stdio.h>
#include <string.h>
#define MAX 50


void enregistrer_nourriture(char fnourriture[], nourriture p)
{
	 FILE *f;
	f=fopen(fnourriture,"ab");
	if(f!=NULL)
	{
		fwrite(&p,sizeof(nourriture),1,f);
	}
	else
		printf("erreur d'ouverture");
		fclose(f);
	}

void lister_nourriture(char fnourriture[], nourriture *p)
{
	FILE *f;
	f=fopen(fnourriture,"rb");
		
	if(f!=NULL)
	{

	    while((fread(p,sizeof(nourriture),1,f)!=0));
	}
	else
	printf("\nImpossible d'ouvrir le fichier de nourriture");
	fclose(f);
}
