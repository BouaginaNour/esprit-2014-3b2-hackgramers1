#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"gestion-garage.h"
void ajouter_voiture(Voiture garage[], int *n, Voiture v);
{ 
if (*n<= capacite)
{garage[*n]=v;
*n=*n+1;}
else 
printf("le garage est plein");
void supprimer_voiture(Voiture garage[], char immatriculation[], int *n);
{ int i=0;
int pos=-1;
while (i<n)&& pos==-1;
(if strmp(garage [i],immartricule,immatriculation)==0)
pos=i;
            else i++;
        }
        if (pos==-1)
        printf("la voiture nexiste pas");
        else
        {
            for (i=pos;i<*n-1;i++)
            T[i]=T[i+1];
            *n--;
        }
        }
void afficher_garage(Voiture garage[], int n);

            int i;
            for (i=0; i<n;i++)
            afficher_voiture(garage[i]);
        }
void init_garage(Voiture garage[], int n);
{
 int i;
for (i=0;i<n;i++)
saisir_voiture(garage *v);
}}

