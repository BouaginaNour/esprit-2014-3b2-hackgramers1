#include<stdio.h>
#include<string.h>
#include"nouriture.h"
#define MAX 100
void saisir_nouriture(nouriture *n)
{
printf("donner le nom de nouriture:");fflush(stdin);
scanf("%s",n->nom);
printf("donner le codebarre de nouriture:");fflush(stdin);
scanf("%s",n->codebarre);
}
void enregistre_nouriture (char fnouriture[], nouriture *n)
{ FILE *f;
saisir_nouriture(n);
f=fopen(fnouriture,"ab");
if(f!=NULL)
{
fwrite(n,sizeof(nouriture),1,f);
}
else
printf("erreur d'ouverture");
fclose(f);
}
int rechercher_nouriture(char fnouriture[],char codebarre[])
{
FILE *f;
int test=0;
nouriture n;
f=fopen(fnouriture,"rb");
if (f!=NULL)
{
   while(!feof(f)&&test==0)
   {
     fread(&n,sizeof(nouriture),1,f);
       if(strcmp(n.codebarre,codebarre)==0)
           test=1;
   }
}
else
test=-1;
return test;
fclose(f);
}

void supprimer_nouriture(char fnouriture[],char codebarre )
{
nouriture a ;
FILE *f;
FILE *f2;
char temp[]="temp";
if(rechercher_nouriture(fnouriture,codebarre)==-1)

printf("la medicament n existe pas \n");

else
{
f=fopen(fmedicament,"rb");
f2=fopen(temp,"ab");
while(fread(&a,sizeof(nouriture),1,f)!=0)
{
if(strcmp(a.codebarre,codebarre)!=0)
fwrite(&a,sizeof(nouriture),1,f2);
}
fclose(f);
fclose(f2);
remove(fnouriture);
rename(temp,fnouriture);
}}

