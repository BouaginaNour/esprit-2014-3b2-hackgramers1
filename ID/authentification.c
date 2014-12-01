#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"authentification.h"


void identification (long int *id ,char password[])
{
printf ("\ndonner l'identifiant:");
scanf("%ld",id);
printf("\ndonner le mot de passe:");
scanf("%s",password);
}


int verification-de-lidentification(long int *id,char password[20])
{
FILE* f;
int trouve=0,i=0;
long int idx;
char pwd[20];

long int cin;




do{
        identification (id,password);
        f=fopen("personnel.txt","r");

        do{
                fscanf(f,"%ld %d",&iden,&cin);
                if(strcmp(password,pwd)==0 && *id==idx)
        trouve=1;
}while(trouve==0 && !feof(f));
        i++;
        if(trouve==0 && i < 4) printf("! identifiant/mot de passe incorrect");
        fclose(f);

}while (i < 4&& trouve==0);

return(trouve);
}


