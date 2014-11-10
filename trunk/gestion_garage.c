#include <stdio.h>
#include <string.h>
#include "gestion_garage.h"

void ajouter_voiture(voiture garage[],int *n,voiture v)
{
saisir_voiture(&v);
(*n)=(*n)+1;
}

void supprimer_voiture(voiture garage[], char immatriculation[],int *n)
{
int i,j;
for(i=0;i<*n;i++)
{
	if((strcmp(garage[i].immatriculation,immatriculation)==0))
	{
	for(j=i;j<(*n)-1;j++)
		{
		garage[j]=garage[j+1];
		}

		(*n)=(*n)-1;

	}
}

}

void afficher_garage(voiture garage[], int n)
{
int i;
for(i=0;i<n;i++)
{
printf(" la voiture est %d :",i+1);
afficher_voiture(garage[i]);
}
}

void init_garage(voiture garage[], int n)
{
int i;
for(i=0;i<n;i++)
{
strcpy(garage[i].immatriculation,"");
strcpy(garage[i].marque,"");
strcpy(garage[i].couleur,"");
strcpy((garage[i]).P.nom,"");
strcpy(garage[i].P.prenom,"");
garage[i].P.cin=0;
garage[i].P.age=0;
strcpy(garage[i].panne,"");
}
}
