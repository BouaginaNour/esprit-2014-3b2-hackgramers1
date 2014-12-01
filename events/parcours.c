#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct personnel
{
long int ID;
char capteur[3];
};
struct events
{
long int ID;
int E01;
int C01;
int S01;
int L01;
int C02;
int I01;
int L02;
int V01;
int D01;
int B01;
int M01;
int SOUT;
int POUT;
int EBOLA;
};

typedef struct personnel Personnel;
typedef struct events Events;

int main()
{
FILE *fichier;
Personnel *tab,temp;
Events *str;
int c,i,j,M,nbre_lignes=0,nbre_personnel=1,compteur_personnel=0,compteur_events=0,ID_existe=0,sortie=0,choix;
long int ID_saisi;
char ID_temp[5], cap[3];
fichier= fopen("evenements.log", "r") ;
if(fichier==NULL)
{
printf("impossible d'ouvrir le fichier\n");
}
else
{
        while(c!=EOF)
        {
        c=fgetc(fichier);
        if (c=='\n') 
        {
        nbre_lignes++;
        }
        }
tab = (Personnel *) malloc(sizeof(Personnel) * nbre_lignes) ;
fseek ( fichier ,0, SEEK_SET );
        for(i=0;i<nbre_lignes;i++)
        {
        fseek ( fichier,9,SEEK_CUR);
                for(j=0;j<5;j++)
                {
                ID_temp[j]=fgetc(fichier);
                }
        tab[i].ID=atoi(ID_temp);
        c=fgetc(fichier);
                for(j=0;j<3;j++)
                {
                tab[i].capteur[j]=fgetc(fichier);               
                }
        if(i<nbre_lignes-1){c=fgetc(fichier);}
        }
}

//Affichage de la structure Personnel
/*for(i=0;i<nbre_lignes;i++)
{
printf("La case n° %d :\n\tID: %ld\n\tcapteur: %s\n",i+1,tab[i].ID,tab[i].capteur); 
}
*/
for (i=1;i<nbre_lignes;i++)
{
temp=tab[i]; j=i;
while( j>0 && (tab[j-1].ID)>temp.ID)
{
tab[j]=tab[j-1];
j--;
}
tab[j]=temp;
}

//Affichage de la structure Event
/*for(i=0;i<nbre_lignes;i++)
{
printf("La case n° %d :\n\tID: %ld\n\tcapteur: %s\n",i+1,tab[i].ID,tab[i].capteur); 
}
*/

//nombre de personnel
for(i=1;i<nbre_lignes;i++)
{
if (tab[i].ID != tab[i-1].ID) nbre_personnel++;
}

str = (Events *) malloc(sizeof(Events) * nbre_personnel) ;
//initialisation de la réponse des capteurs à zéro
for(i=0;i<nbre_personnel;i++)
{
str[i].E01=0;str[i].C01=0;str[i].S01=0;str[i].L01=0;str[i].C02=0;str[i].I01=0;str[i].L02=0;str[i].V01=0;str[i].D01=0;str[i].B01=0;str[i].M01=0;str[i].SOUT=0;str[i].POUT=0;str[i].EBOLA=0;
}

//remplissage de la structure Events en binaire
M=tab[1].ID;
while(compteur_personnel<nbre_lignes)
{
while((M==tab[compteur_personnel].ID) && (compteur_personnel<nbre_lignes) )
{
for(j=0;j<3;j++)
{
cap[j]=tab[compteur_personnel].capteur[j];
}
cap[3]='\0';
str[compteur_events].ID=tab[compteur_personnel].ID;
     if (strcmp(cap,"E01") ==0) {str[compteur_events].E01=1;}
else if (strcmp(cap,"C01") ==0) {str[compteur_events].C01=1;}
else if (strcmp(cap,"S01") ==0) {str[compteur_events].S01=1;}
else if (strcmp(cap,"L01") ==0) {str[compteur_events].L01=1;}
else if (strcmp(cap,"C02") ==0) {str[compteur_events].C02=1;}
else if (strcmp(cap,"I01") ==0) {str[compteur_events].I01=1;}
else if (strcmp(cap,"L02") ==0) {str[compteur_events].L02=1;}
else if (strcmp(cap,"V01") ==0) {str[compteur_events].V01=1;}
else if (strcmp(cap,"D01") ==0) {str[compteur_events].D01=1;}
else if (strcmp(cap,"B01") ==0) {str[compteur_events].B01=1;}
else if (strcmp(cap,"M01") ==0) {str[compteur_events].M01=1;}
else if (strcmp(cap,"SOUT") ==0) {str[compteur_events].SOUT=1;}
else if (strcmp(cap,"POUT") ==0) {str[compteur_events].POUT=1;}
else if (strcmp(cap,"EBOLA") ==0) {str[compteur_events].EBOLA=1;}
compteur_personnel++;
}
M=tab[compteur_personnel].ID;
compteur_events++;
}

//test d affichage
/*
for(compteur_events=0;compteur_events<nbre_personnel;compteur_events++)
{
printf("ID: %ld\n",str[compteur_events].ID);
printf("%d\n",str[compteur_events].E01);
printf("%d\n",str[compteur_events].C01);
printf("%d\n",str[compteur_events].S01);
printf("%d\n",str[compteur_events].L01);
printf("%d\n",str[compteur_events].C02);
printf("%d\n",str[compteur_events].I01);
printf("%d\n",str[compteur_events].L02);
printf("%d\n",str[compteur_events].V01);
printf("%d\n",str[compteur_events].D01);
printf("%d\n",str[compteur_events].B01);
printf("%d\n",str[compteur_events].M01);
printf("%d\n",str[compteur_events].SOUT);
printf("%d\n",str[compteur_events].POUT);
printf("%d\n",str[compteur_events].EBOLA);
}
*/

printf("\nListe du personnel ayant parcouru le circuit:\n");
printf("\n");
for(i=0;i<nbre_personnel;i++)
{printf("\t\t%ld\n",str[i].ID);}
printf("\nPour suivre le trajet parcouru par un personnel veuillez entrer son ID\n");
scanf("%ld",&ID_saisi);
for(i=0;i<nbre_personnel;i++)
{
if (str[i].ID == ID_saisi) 
{
ID_existe=1;
if ((str[i].E01 + str[i].C01 + str[i].S01 + str[i].L01 + str[i].C02 + str[i].I01 + str[i].L02 + str[i].V01 + str[i].D01 + str[i].B01 + str[i].M01 + str[i].SOUT + str[i].POUT + str[i].EBOLA) != 14 )
{printf("ALERTE ! Le personnel ayant pour ID: %ld a commi une infraction\n",str[i].ID);}
break;}
if (i==(nbre_personnel-1)) {printf("Cet ID n'existe pas\n");}
}
if(ID_existe==1)
{
do
{
printf("\n\t1- Plus de details\n\t2- Acceder à la base de donnee\n\t0- Retour\n");
scanf("%d",&choix);
switch (choix)
{
case 1 : 
//affiche la premiere erreur seulement, il faut qe toutes les erreurs soient affichees
printf("\n");
if (str[i].E01==0) {printf("Erreur au niveau du capteur E01\n");}
if (str[i].C01==0) {printf("Erreur au niveau du capteur C01\n");}
if (str[i].S01==0) {printf("Erreur au niveau du capteur S01\n");}
if (str[i].L01==0) {printf("Erreur au niveau du capteur L01\n");}
if (str[i].C02==0) {printf("Erreur au niveau du capteur C02\n");}
if (str[i].I01==0) {printf("Erreur au niveau du capteur I01\n");}
if (str[i].L02==0) {printf("Erreur au niveau du capteur L02\n");}
if (str[i].V01==0) {printf("Erreur au niveau du capteur V01\n");}
if (str[i].D01==0) {printf("Erreur au niveau du capteur D01\n");}
if (str[i].B01==0) {printf("Erreur au niveau du capteur B01\n");}
if (str[i].M01==0) {printf("Erreur au niveau du capteur M01\n");}
if (str[i].SOUT==0) {printf("Erreur au niveau du capteur SOUT\n");}
if (str[i].POUT==0) {printf("Erreur au niveau du capteur POUT\n");}
if (str[i].EBOLA==0) {printf("Erreur au niveau du capteur EBOLA\n");}
break;
case 2 : printf("\nEn attente de l integration de la gestion de la base de donnee, reessayez ulterieurement\n"); break;
case 0 : sortie=1; break;
default : printf("Mauvais choix\n"); break;
}
}
while(sortie!=1);
}

fclose(fichier);
return 0;
}


