#include <stdio.h>
#include <string.h>
#include "capteurr.h"
int main()
{
char chemin[]="capteurr.txt";
int choix;
capteur c1;
printf("1:afficher ");
printf("\n2:enregistrer_capteur");
printf("\n3:supprimer_capteur");
printf("\ntaper autre bouton pour quitter menu");
printf ("\ndonner votre choix");
scanf("%d",&choix);
switch (choix)
{
case 1: afficher (chemin,c1);

break;
case 2: enregistrer_capteur (chemin,&c1) ;

break;
case 3: supprimer_capteur (chemin,&c1);

break;
default :break;}}
void afficher(char chemin[],capteur c)
{FILE *f;
f=fopen(chemin ,"r");
  if (f==NULL)
   printf ("erreur");
  else{
  while(fscanf(f,"%s %s",c.nom,c.emplacement) !=EOF)
  {
printf(" \n%s\t%s\n",c.nom,c.emplacement);
}}}
void ajouter_capteur(capteur *c)
{
printf(" donner le nom du capteur");
scanf("%s",(*c).nom);
printf("donner l'emplacement du capteur");
scanf("%s",c->emplacement);
}
void enregistrer_capteur(char chemin[],capteur *c)
{
FILE *f;
f=fopen(chemin,"a");
if(f==NULL){
printf("\n Impossible d\'ouvrir le fichier ");
}else{
ajouter_capteur(c);
fprintf(f,"\n%s %s",c->nom,c->emplacement);
}
fclose(f);
}
void supprimer_capteur (char chemin[] ,capteur *c)
{
char nom_capteur[20];
FILE *f1,*f2;
char temp[]="capteur1.txt";
f1=fopen(chemin,"r");
f2=fopen(temp,"w");
if(f1==NULL||f2==NULL){
printf("\n Impossible d\'ouvrir leS fichier ");
}else
{
printf("\ndonner le nom du capteur a supprimer\n");
scanf("%s",nom_capteur);
while (fscanf(f1,"%s %s",(*c).nom,(*c).emplacement)!=EOF){

    if (strcmp(c->nom, nom_capteur) != 0)
   fprintf(f2,"%s %s\n",(*c).nom,(*c).emplacement);}
fclose(f1);
fclose(f2);
remove(chemin);
printf("\ncapteur supprimé\n");
}
}
