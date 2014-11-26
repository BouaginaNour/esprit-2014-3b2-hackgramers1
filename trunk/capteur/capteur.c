#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
FILE *f=NULL;
FILE *a=NULL;
char cap[80];
char capteur[80];
char id[80];
char time[80];
char idx[80];
f=fopen("file_cap","r");
printf("donner l'identifiant : ");
scanf("%s",idx);
if (f !=NULL)
{ printf("le parcour du personnel est : ");
while (fscanf(f,"%s %s %s",time,id,capteur) !=EOF)
 if (strcmp(id,idx)==0)
        printf("%s",capteur); 
        fclose(f);
}
printf("\n");
a=fopen("fmain","r");
if (a!=NULL)
{ printf("le parcour a suivre est");
while (fscanf(a,"%s",cap) !=EOF)
 printf("%s",cap);
fclose(a);
}
if (strcmp(cap,capteur)==0)
 printf("\n         Ne pas declencher l'alarme\n");
 else printf("\n           ALARME\n");
}

