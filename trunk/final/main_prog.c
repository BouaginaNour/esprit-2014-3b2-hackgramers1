#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "medecin.h"
#include "infirmier.h"
#include "agent.h"
#include "patient.h"
#include "medicament.h"
#include "nouriture.h"
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
int SOU;
int POU;
int EBO;
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
int aa,z,e,r,t,y,u,o,q,f,g,h,s,k;
   nouriture n;
   date d;
   medecin m;
   infirmier inf;
   agent a;
   patient p;
   medicament mm;
  char codebarre[10];
  char aaa[100];char zz[100];char ee[100];char tt[100];char uu[100];char qq[100];char dd[100];char hh[100];char kk[100];char ss[100];
  char cin_medecin[20] ;
  char cin_infirmier[20] ;
  char cin_agent[20] ;
  char cin_patient[20] ;
      
         do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Gestion personnels \n "
                       "\n 2.Gestion stocks \n "
                        "\n 3. suivi personnels \n "
                         "\n 4. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%s",aaa);
        aa=atoi(aaa);
        switch(aa)

        {

        case 1 :
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Gestion medecins \n "
                       "\n 2.Gestion infirmiers \n "
                        "\n 3. Gestion agent \n "
                        "\n 4. Gestion patients \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%s",zz);
        z=atoi(zz);
        switch(z)

        {

        case 1 :
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un medecin \n "
                       "\n 2.Liste des médecins \n "
                        "\n 3. Recherche médecins \n "
                        "\n 4. Supprimer médecins \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%s",ee);
        e=atoi(ee);
        switch(e)

        {

        case 1 :
        enregistrer_medecin("fmed",&m );
        break;

        case 2 :
        liste_medecin("fmed");
        break;

        case 3 :
        printf ("\ndonner le cin/num passeport a chercher : ");
        scanf("%s",cin_medecin);

        r=rechercher_medecin("fmed",cin_medecin);

        if (r==1)
        printf("le personnel existe\n ");

        else printf("le personnel n'existe pas\n");
        break;

        case 4 :
        printf("entrer le cin/num passport de la personne a supprimer \n");
        scanf("%s",cin_medecin);
        supprimer_medecin("fmed",cin_medecin);
        break;

        case 5 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(e!=5||strcmp(ee,"5")!=0);

        break;

        case 2 :
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un infirmier \n "
                       "\n 2.Liste des infirmiers \n "
                        "\n 3. Recherche infirmiers \n "
                        "\n 4. Supprimer infirmiers \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%s",tt);
        t=atoi(tt);
        switch(t)

        {

        case 1 :
        enregistrer_infirmier("finf",&inf );
        break;

        case 2 :
        liste_infirmier("finf");
        break;

        case 3 :
        printf ("\ndonner le cin/num passeport a chercher : ");
        scanf("%s",cin_infirmier);

        y=rechercher_infirmier("finf",cin_infirmier);

        if (y==1)
        printf("le personnel existe\n ");

        else printf("le personnel n'existe pas\n");
        break;

        case 4 :
        printf("entrer le cin/num passport de la personne a supprimer \n");
        scanf("%s",cin_infirmier);
        supprimer_infirmier("finf",cin_infirmier);
        break;

        case 5 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(t!=5||strcmp(tt,"5")!=0);
        break;

        case 3 :
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un agent \n "
                       "\n 2.Liste des agents \n "
                        "\n 3. Recherche agents \n "
                        "\n 4. Supprimer agents \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");
        scanf("%s",uu);
        u=atoi(uu);
        switch(u)

        {

        case 1 :
        enregistrer_agent("fagent",&a );
        break;

        case 2 :
        liste_agent("fagent");
        break;

        case 3 :
        printf ("\ndonner le cin/num passeport a chercher : ");
        scanf("%s",cin_agent);

        o=rechercher_agent("fagent",cin_agent);

        if (o==1)
        printf("le personnel existe\n ");

        else printf("le personnel n'existe pas\n");
        break;

        case 4 :
        printf("entrer le cin/num passport de la personne a supprimer \n");
        scanf("%s",cin_agent);
        supprimer_agent("fagent",cin_agent);
        break;

        case 5 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(u!=5||strcmp(uu,"5")!=0);
        break;

        case 4 :
         do
{ printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un patient \n "
                       "\n 2.Liste des patients \n "
                        "\n 3. Recherche patients \n "
                        "\n 4. Supprimer patients \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

  printf("donner un choix:" );
  scanf("%s",qq);
  q=atoi(qq);
  switch(q)
  { case 1:     enregister_patient("fpatient",&p);
                break;
    case 2:     liste_patient("fpatient");
                break;                
    case 3:     
                printf ("\ndonner le cin/num passeport du patient a chercher : ");
                scanf("%s",cin_patient);
                s=rechercher_patient("fpatient",cin_patient);
                if (s==1) 
                printf("le patient existe\n ");
                else printf("le patient n'existe pas\n");
                break;

    case 4:     printf("entrer le cin/num passport du patient a supprimer \n");
        scanf("%s",cin_patient);
        supprimer_patient("fpatient",cin_patient);
        break;


    case 5:     printf("Vous quittez la page\n");
                break;
    default :   printf("Mauvais choix\n");
        
}
}while(q!=5||strcmp(qq,"5")!=0);
        break;

        case 5 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(z!=5||strcmp(zz,"5")!=0);
       break;
        case 2 :
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.gestion medicaments \n "
                        "\n 2. gestion nourriture \n "
                         "\n 3. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");fflush(stdin);
        scanf("%s",ss);
        s=atoi(ss);
        switch(s)

        {

        case 1 :
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Enregistrer un medicament \n "
                        "\n 2. Recherche medicament \n "
                        "\n 3. Supprimer medicament \n"
                        "\n 4. Afficher tout medicament \n"
                         "\n 5. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");fflush(stdin);
        scanf("%s",dd);
        f=atoi(dd); 
        switch(f)

        {

        case 1 :
        enregistrer_medicament("fmedicament",&mm );
        break;

        case 2 :
        printf ("\ndonner le code barre a chercher : ");
        scanf("%s",codebarre);

        g=rechercher_medicament("fmedicament",codebarre);

        if (g==1)
        printf("la medicament existe\n ");

        else printf("la medicament n'existe pas\n");
        break;

        case 3 :
        printf("entrer le code barre de medicament a supprimer \n");
        scanf("%s",codebarre);
        supprimer_medicament("fmedicament",codebarre);
        break;

        case 4 :
        liste_medic("fmedicament");
        break;

        case 5 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(f!=5);

  
        break;

        case 2 :
        do

        {

        printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.Ajouter la quantité de la nouriture du jour \n "
                        "\n 2. Afficher nouriture \n "
                         "\n 3. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;

        printf("\n Donnez votre Choix \n");fflush(stdin);
        scanf("%s",hh);
        h=atoi(hh);
        switch(h)

        {

        case 1 :
        enregistrer_nouriture("fnouriture",&n,&d );
  
        break;

        case 2 :
        liste_nouriture("fnouriture");
        break;

       
        case 3 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(h!=3);
        break;

       
        case 3 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(s!=3);
      break;
        case 3 :

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
str[i].E01=0;str[i].C01=0;str[i].S01=0;str[i].L01=0;str[i].C02=0;str[i].I01=0;str[i].L02=0;str[i].V01=0;str[i].D01=0;str[i].B01=0;str[i].M01=0;str[i].SOU=0;str[i].POU=0;str[i].EBO=0;
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
else if (strcmp(cap,"SOU") ==0) {str[compteur_events].SOU=1;}
else if (strcmp(cap,"POU") ==0) {str[compteur_events].POU=1;}
else if (strcmp(cap,"EBO") ==0) {str[compteur_events].EBO=1;}
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
printf("%d\n",str[compteur_events].SOU);
printf("%d\n",str[compteur_events].POU);
printf("%d\n",str[compteur_events].EBO);
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
if ((str[i].E01 + str[i].C01 + str[i].S01 + str[i].L01 + str[i].C02 + str[i].I01 + str[i].L02 + str[i].V01 + str[i].D01 + str[i].B01 + str[i].M01 + str[i].SOU + str[i].POU + str[i].EBO) != 14 )
{printf("ALERTE ! Le personnel ayant pour ID: %ld a commi une infraction\n",str[i].ID);}
break;}
if (i==(nbre_personnel-1)) {printf("Cet ID n'existe pas\n");}
}
if(ID_existe==1)
{
do
{
printf("\n -**-**-**-**-**-**-**-**-**-**- \n"
                "\n 1.afficher plus de details \n "
                         "\n 0. Quittez \n "
               "\n -**-**-**-**-**-**-**-**-**-**- \n ") ;
printf("donner votre choix");
scanf("%s",kk);
k=atoi(kk);
switch (k)
{
case 1 : 
//affiche la premiere erreur seulement, il faut qe toutes les erreurs soient affichees
printf("\n");
if (str[i].E01==0) {printf("Erreur au niveau du capteur E01\nprocédure non respecté Entrée à la zone d'isolation activé\n");}
if (str[i].C01==0) {printf("Erreur au niveau du capteur C01\nprocédure non respecté Vêtements de protection + Chaussures habillé\n");}
if (str[i].S01==0) {printf("Erreur au niveau du capteur S01\nSortie de la zone d'isolation activé\n");}
if (str[i].L01==0) {printf("Erreur au niveau du capteur L01\nPremier lavage des mains\n");}
if (str[i].C02==0) {printf("Erreur au niveau du capteur C02\nprocédure non respecté Vêtements de protection + Chaussures déshabillé\n");}
if (str[i].I01==0) {printf("Erreur au niveau du capteur I01\nprocédure non respecté Incinération totale des vêtements et des chaussures");}
if (str[i].L02==0) {printf("Erreur au niveau du capteur L02\nprocédure non respecté Lavage des mains effectué durant 5 minutes activé\n");}
if (str[i].V01==0) {printf("Erreur au niveau du capteur V01\nprocédure non respecté passage via la cuve d'eau + Chlore effectué\n");}
if (str[i].D01==0) {printf("Erreur au niveau du capteur D01\nprocédure non respecté Douche moyennant une solution d'eau et du chlore effectué\n");}
if (str[i].B01==0) {printf("Erreur au niveau du capteur B01\nEntrée à la zone des bureaux\n");}
if (str[i].M01==0) {printf("Erreur au niveau du capteur M01\nEntrée à la zone des magazins\n");}
if (str[i].SOU==0) {printf("Erreur au niveau du capteur SOUT\nDANGER!!!!Sortie de la clinique\n");}
if (str[i].POU==0) {printf("Erreur au niveau du capteur POUT\n!!!!! DANGER !!!!! Alarme de sortie à travers la barrière de la clinique !!!!! DANGER !!!!!\n");}
if (str[i].EBO==0) {printf("Erreur au niveau du capteur EBOLA\n!!!!!DANGER!!!! Personnel atteint par l'EBOLA !!!!! DANGER !!!!!\n");}
break;
case 0 :printf("sortie menu"); break;
default : printf("Mauvais choix\n"); break;
}
}
while(k!=0);
}

fclose(fichier);

        case 4 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(aa!=4||strcmp(aaa,"4")!=0);

        return (0);
}
