#include<stdio.h>
#include<string.h>
#include"voiture.h"

void saisir_voiture(voiture *v)
{
    printf("entrer l'immatriculation de la voiture");fflush(stdin);
    scanf("%s",(*v).immatriculation);
    printf("donner la marque de la voiture");fflush(stdin);
    scanf("%s",(*v).marque);
    printf("donner la couleur de la voiture");fflush(stdin);
    scanf("%s",(*v).couleur);
    printf("donner des informations a propos la personne");
    printf("donner le nom");fflush(stdin);
    scanf("%s",(*v).P.nom);
    printf("donner le prenom");fflush(stdin);
    scanf("%s",(*v).P.prenom); 
    printf("donner la panne");fflush(stdin);
    scanf("%s",(*v).panne);

}

void afficher_voiture(voiture v)
{
    printf("immatriculation : %s\n",v.immatriculation);
    printf("marque : %s\n",v.marque);
    printf("couleur : %s\n",v.couleur);
    printf("nom : %s\n",v.P.nom);
    printf("prenom: %s\n",v.P.prenom);
    printf("panne : %s\n",v.panne);
}

