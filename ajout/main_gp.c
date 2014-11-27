#include<stdio.h>
#include "medecin.h"
#include "infirmier.h"
#include "agent.h"
#include "patient.h"
int main()
{
int c,q,w,s,x,d,e,f,v;
   medecin m;
   infirmier i;
   agent a;
   patient p;
  char jj[100];char kk[100];char ll[100];char mm[100];char hh[100];
  char cin_medecin[20] ;
  char cin_infirmier[20] ;
  char cin_agent[20] ;
  char cin_patient[20] ;
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
        scanf("%s",kk);
        c=atoi(kk);
        switch(c)

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
        scanf("%s",jj);
        q=atoi(jj);
        switch(q)

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

        w=rechercher_medecin("fmed",cin_medecin);

        if (w==1)
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

   }while(q!=5||strcmp(jj,"5")!=0);

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
        scanf("%s",hh);
        s=atoi(hh);
        switch(s)

        {

        case 1 :
        enregistrer_infirmier("finf",&i );
        break;

        case 2 :
        liste_infirmier("finf");
        break;

        case 3 :
        printf ("\ndonner le cin/num passeport a chercher : ");
        scanf("%s",cin_infirmier);

        x=rechercher_infirmier("finf",cin_infirmier);

        if (x==1)
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

   }while(s!=5||strcmp(hh,"5")!=0);
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
        scanf("%s",ll);
        d=atoi(ll);
        switch(d)

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

        e=rechercher_agent("fagent",cin_agent);

        if (e==1)
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

   }while(d!=5||strcmp(ll,"5")!=0);
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
  scanf("%s",mm);
  f=atoi(mm);
  switch(f)
  { case 1:     enregister_patient("fpatient",&p);
                break;
    case 2:     liste_patient("fpatient");
                break;                
    case 3:     
                printf ("\ndonner le cin/num passeport du patient a chercher : ");
                scanf("%s",cin_patient);
                v=rechercher_patient("fpatient",cin_patient);
                if (v==1) 
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
}while(f!=5||strcmp(mm,"5")!=0);
        break;

        case 5 :
        printf("\n sorite du menu \n");
        break;

        default:
        printf("\n Mauvais Choix :) ATTENTION :D \n");
    }

   }while(c!=5||strcmp(kk,"5")!=0);

        return (0);
}
