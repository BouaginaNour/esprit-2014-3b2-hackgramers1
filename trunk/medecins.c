#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Medecins
{
   char nom[20] ;
   char prenom[20];
   char age[3];
   char cin[10];

}Medecins;


int main()
{
FILE *f,*f1;
Medecins med[100];
int i=0;
f=fopen("medecins.txt","r");
f1=fopen("medecins1.txt","w");
char spec[20];
while(fscanf(f," %s %s %s %s ",med[i].nom,med[i].prenom,med[i].age,med[i].cin)!=EOF)
{
printf("\n entrer le specialité du medecin %s %s ",med[i].nom,med[i].prenom);
scanf("%s",spec);
fprintf(f1,"\n %s %s %s %s %s ",med[i].nom,med[i].prenom,med[i].age,med[i].cin,spec);
printf("\n %s %s %s %s %s ",med[i].nom,med[i].prenom,med[i].age,med[i].cin,spec);
i++;
}
fclose(f);
return 0;
}

