#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <stdio.h>
#include <stdlib.h> //pour l'appel de la fonction atoi()
#include <string.h> //pour l'appel de la fonction strcpy

#include "medecin.h" //pour le volet métier de l'application
#include "agent.h"
#include "infirmier.h"
#include "patient.h"
#include "parcours.h"
#include "medicament.h"
#include "nourriture.h"

void on_button1_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
medecin m;

        GtkWidget *entry1;
	GtkWidget *entry2;
	GtkWidget *entry3;
        GtkWidget *entry4;
	GtkWidget *entry5;
	GtkWidget *entry6;
        GtkWidget *entry7;
	GtkWidget *entry8;
	GtkWidget *entry9;
        GtkWidget *entry10;

        GtkWidget *window2;
        entry1 = lookup_widget(objet_graphique, "entry1");
	entry2 = lookup_widget(objet_graphique, "entry2");
	entry3 = lookup_widget(objet_graphique, "entry3");
        entry4 = lookup_widget(objet_graphique, "entry4");
	entry5 = lookup_widget(objet_graphique, "entry5");
	entry6 = lookup_widget(objet_graphique, "entry6");
        entry7 = lookup_widget(objet_graphique, "entry7");
	entry8 = lookup_widget(objet_graphique, "entry8");
	entry9 = lookup_widget(objet_graphique, "entry9");
        entry10 = lookup_widget(objet_graphique, "entry10");

strcpy(m.nom, gtk_entry_get_text(GTK_ENTRY(entry1)));
strcpy(m.prenom, gtk_entry_get_text(GTK_ENTRY(entry2)));
strcpy(m.age, gtk_entry_get_text(GTK_ENTRY(entry3)));
strcpy(m.passeport, gtk_entry_get_text(GTK_ENTRY(entry4)));
strcpy(m.mdp, gtk_entry_get_text(GTK_ENTRY(entry5)));
strcpy(m.nationalite, gtk_entry_get_text(GTK_ENTRY(entry6)));
strcpy(m.salaire, gtk_entry_get_text(GTK_ENTRY(entry7)));
strcpy(m.etat_civil, gtk_entry_get_text(GTK_ENTRY(entry8)));
strcpy(m.adresse, gtk_entry_get_text(GTK_ENTRY(entry9)));
strcpy(m.telephone, gtk_entry_get_text(GTK_ENTRY(entry10)));


enregistrer_medecin ("fmed", m);
window2 = create_window2();
	gtk_widget_show(window2);
}


void on_button2_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
        medecin m;
	

	char buf[1000];
	char buf0[50] = "NOM: ";
	char buf1[50] = "PRENOM: ";
	char buf2[50] = "AGE: ";
        char buf3[50] = "passeport: ";
	char buf4[50] = "mdp: ";
	char buf5[50] = "nationalité: ";
        char buf6[50] = "salaire: ";
	char buf7[50] = "etat_civil: ";
	char buf8[50] = "adresse: ";
        char buf9[50] = "telephone: ";
        


	GtkWidget * label12;
label12= lookup_widget(objet_graphique, "label12");
lister_medecin("fmed",&m);
sprintf(buf,"%s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n",buf0,m.nom,buf1,m.prenom,buf2,m.age,buf3,m.passeport,buf4,m.mdp,buf5,m.nationalite,buf6,m.salaire,buf7,m.etat_civil,buf8,m.adresse,buf9,m.telephone);
gtk_label_set_text(GTK_LABEL(label12), buf);
}

void on_window1_destroy (GtkObject *object, gpointer user_data)
{
	 gtk_main_quit();
}

void on_button4_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
        GtkWidget *window4;
        window4 = create_window4();
	gtk_widget_show(window4);
}


void on_button5_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
        GtkWidget *window3;
        window3 = create_window3();
	gtk_widget_show(window3);
}


void on_button6_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
      medecin m;
      
      GtkWidget *entry11;
      entry11 = lookup_widget(objet_graphique, "entry11");
      
      GtkWidget * label14;
      label14= lookup_widget(objet_graphique, "label14");
      
      char cin_medecin[20];
      int t;
            
            strcpy(cin_medecin, gtk_entry_get_text(GTK_ENTRY(entry11)));
            t=rechercher_medecin("fmed",cin_medecin,&m);
            if (t==1) 
                gtk_label_set_text(GTK_LABEL(label14),"le medecin existe");
           else 
                gtk_label_set_text(GTK_LABEL(label14),"le medecin n'existe pas");
}


void on_button7_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
     medecin m;
        
        GtkWidget *entry12;
        entry12 = lookup_widget(objet_graphique, "entry12");
        
        GtkWidget * label16;
        label16= lookup_widget(objet_graphique, "label16");
     
     char cin_medecin1[20];
     int s;
     
     strcpy(cin_medecin1, gtk_entry_get_text(GTK_ENTRY(entry12)));
     s=rechercher_medecin("fmed",cin_medecin1,&m);
     if (s==1) 
     {
         supprimer_medecin("fmed",cin_medecin1,&m);
         gtk_label_set_text(GTK_LABEL(label16),"le medecin est supprimé");
     }
     else gtk_label_set_text(GTK_LABEL(label16),"le medecin n'existe pas"); 
}


void on_button8_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
agent m;

        GtkWidget *entry13;
	GtkWidget *entry14;
	GtkWidget *entry15;
        GtkWidget *entry16;
	GtkWidget *entry17;
	GtkWidget *entry18;
        GtkWidget *entry19;
	GtkWidget *entry20;
	GtkWidget *entry21;
        GtkWidget *entry22;

        GtkWidget *window6;
        entry13 = lookup_widget(objet_graphique, "entry13");
	entry14 = lookup_widget(objet_graphique, "entry14");
	entry15 = lookup_widget(objet_graphique, "entry15");
        entry16 = lookup_widget(objet_graphique, "entry16");
	entry17 = lookup_widget(objet_graphique, "entry17");
	entry18 = lookup_widget(objet_graphique, "entry18");
        entry19 = lookup_widget(objet_graphique, "entry19");
	entry20 = lookup_widget(objet_graphique, "entry20");
	entry21 = lookup_widget(objet_graphique, "entry21");
        entry22 = lookup_widget(objet_graphique, "entry22");

strcpy(m.nom, gtk_entry_get_text(GTK_ENTRY(entry13)));
strcpy(m.prenom, gtk_entry_get_text(GTK_ENTRY(entry14)));
strcpy(m.age, gtk_entry_get_text(GTK_ENTRY(entry15)));
strcpy(m.passeport, gtk_entry_get_text(GTK_ENTRY(entry16)));
strcpy(m.mdp, gtk_entry_get_text(GTK_ENTRY(entry22)));
strcpy(m.nationalite, gtk_entry_get_text(GTK_ENTRY(entry17)));
strcpy(m.salaire, gtk_entry_get_text(GTK_ENTRY(entry21)));
strcpy(m.etat_civil, gtk_entry_get_text(GTK_ENTRY(entry18)));
strcpy(m.adresse, gtk_entry_get_text(GTK_ENTRY(entry19)));
strcpy(m.telephone, gtk_entry_get_text(GTK_ENTRY(entry20)));


enregistrer_agent ("fagent", m);
window6 = create_window6();
	gtk_widget_show(window6);
}


void
on_button9_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
agent m;
	

	char buf[1000];
	char buf0[50] = "NOM: ";
	char buf1[50] = "PRENOM: ";
	char buf2[50] = "AGE: ";
        char buf3[50] = "passeport: ";
	char buf4[50] = "mdp: ";
	char buf5[50] = "nationalité: ";
        char buf6[50] = "salaire: ";
	char buf7[50] = "etat_civil: ";
	char buf8[50] = "adresse: ";
        char buf9[50] = "telephone: ";
        


	GtkWidget * label28;
label28= lookup_widget(objet_graphique, "label28");
lister_agent("fagent",&m);
sprintf(buf,"%s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n",buf0,m.nom,buf1,m.prenom,buf2,m.age,buf3,m.passeport,buf4,m.mdp,buf5,m.nationalite,buf6,m.salaire,buf7,m.etat_civil,buf8,m.adresse,buf9,m.telephone);
gtk_label_set_text(GTK_LABEL(label28), buf);

}


void
on_button10_clicked  (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window8;
window8 = create_window8();
	gtk_widget_show(window8);
}


void
on_button11_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window7;
window7 = create_window7();
	gtk_widget_show(window7);
}


void on_button12_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
agent m;

GtkWidget *entry23;
entry23 = lookup_widget(objet_graphique, "entry23");

GtkWidget * label29;
label29= lookup_widget(objet_graphique, "label29");

char cin_agent[20];
int t;

strcpy(cin_agent, gtk_entry_get_text(GTK_ENTRY(entry23)));
t=rechercher_agent("fagent",cin_agent,&m);
if (t==1) 
gtk_label_set_text(GTK_LABEL(label29),"le medecin existe");
else gtk_label_set_text(GTK_LABEL(label29),"le medecin n'existe pas");
}


void on_button13_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
agent m;

GtkWidget *entry24;
entry24 = lookup_widget(objet_graphique, "entry24");

GtkWidget * label31;
label31= lookup_widget(objet_graphique, "label31");

char cin_agent1[20];
int s;

strcpy(cin_agent1, gtk_entry_get_text(GTK_ENTRY(entry24)));
s=rechercher_agent("fagent",cin_agent1,&m);
if (s==1) 
   {
     supprimer_agent("fagent",cin_agent1,&m);
     gtk_label_set_text(GTK_LABEL(label31),"le medecin est supprimé");
   }
else gtk_label_set_text(GTK_LABEL(label31),"le medecin n'existe pas");
}


void on_button14_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window1;
window1 = create_window1();
	gtk_widget_show(window1);
}


void on_button15_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window5;
window5 = create_window5();
	gtk_widget_show(window5);
}


void
on_button18_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
infirmier m;
	

	char buf[1000];
	char buf0[50] = "NOM: ";
	char buf1[50] = "PRENOM: ";
	char buf2[50] = "AGE: ";
        char buf3[50] = "passeport: ";
	char buf4[50] = "mdp: ";
	char buf5[50] = "nationalité: ";
        char buf6[50] = "salaire: ";
	char buf7[50] = "etat_civil: ";
	char buf8[50] = "adresse: ";
        char buf9[50] = "telephone: ";
        


	GtkWidget * label33;
label33= lookup_widget(objet_graphique, "label33");
lister_infirmier("finfirmier",&m);
sprintf(buf,"%s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n",buf0,m.nom,buf1,m.prenom,buf2,m.age,buf3,m.passeport,buf4,m.mdp,buf5,m.nationalite,buf6,m.salaire,buf7,m.etat_civil,buf8,m.adresse,buf9,m.telephone);
gtk_label_set_text(GTK_LABEL(label33), buf);
}


void
on_button19_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window12;
        window12 = create_window12();
	gtk_widget_show(window12);
}


void
on_button20_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window11;
        window11 = create_window11();
	gtk_widget_show(window11);
}


void
on_button21_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
 infirmier m;
      
      GtkWidget *entry25;
      entry25 = lookup_widget(objet_graphique, "entry25");
      
      GtkWidget * label34;
      label34= lookup_widget(objet_graphique, "label34");
      
      char cin_infirmier[20];
      int t;
            
            strcpy(cin_infirmier, gtk_entry_get_text(GTK_ENTRY(entry25)));
            t=rechercher_infirmier("finfirmier",cin_infirmier,&m);
            if (t==1) 
                gtk_label_set_text(GTK_LABEL(label34),"l'infirmier existe");
           else 
                gtk_label_set_text(GTK_LABEL(label34),"l'infirmier n'existe pas");
}


void
on_button22_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
infirmier m;
        
        GtkWidget *entry26;
        entry26 = lookup_widget(objet_graphique, "entry26");
        
        GtkWidget * label37;
        label37= lookup_widget(objet_graphique, "label37");
     
     char cin_infirmier1[20];
     int s;
     
     strcpy(cin_infirmier1, gtk_entry_get_text(GTK_ENTRY(entry26)));
     s=rechercher_infirmier("finfirmier",cin_infirmier1,&m);
     if (s==1) 
     {
         supprimer_infirmier("finfirmier",cin_infirmier1,&m);
         gtk_label_set_text(GTK_LABEL(label37),"l'infirmier est supprimé");
     }
     else gtk_label_set_text(GTK_LABEL(label37),"l'infirmier n'existe pas"); 
}


void
on_button23_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
infirmier m;

        GtkWidget *entry27;
	GtkWidget *entry28;
	GtkWidget *entry29;
        GtkWidget *entry30;
	GtkWidget *entry31;
	GtkWidget *entry32;
        GtkWidget *entry33;
	GtkWidget *entry34;
	GtkWidget *entry35;
        GtkWidget *entry36;

        GtkWidget *window10;
        entry27 = lookup_widget(objet_graphique, "entry27");
	entry28 = lookup_widget(objet_graphique, "entry28");
	entry29 = lookup_widget(objet_graphique, "entry29");
        entry30 = lookup_widget(objet_graphique, "entry30");
	entry31 = lookup_widget(objet_graphique, "entry31");
	entry32 = lookup_widget(objet_graphique, "entry32");
        entry33 = lookup_widget(objet_graphique, "entry33");
	entry34 = lookup_widget(objet_graphique, "entry34");
	entry35 = lookup_widget(objet_graphique, "entry35");
        entry36 = lookup_widget(objet_graphique, "entry36");

strcpy(m.nom, gtk_entry_get_text(GTK_ENTRY(entry27)));
strcpy(m.prenom, gtk_entry_get_text(GTK_ENTRY(entry28)));
strcpy(m.age, gtk_entry_get_text(GTK_ENTRY(entry29)));
strcpy(m.passeport, gtk_entry_get_text(GTK_ENTRY(entry30)));
strcpy(m.mdp, gtk_entry_get_text(GTK_ENTRY(entry36)));
strcpy(m.nationalite, gtk_entry_get_text(GTK_ENTRY(entry31)));
strcpy(m.salaire, gtk_entry_get_text(GTK_ENTRY(entry35)));
strcpy(m.etat_civil, gtk_entry_get_text(GTK_ENTRY(entry32)));
strcpy(m.adresse, gtk_entry_get_text(GTK_ENTRY(entry33)));
strcpy(m.telephone, gtk_entry_get_text(GTK_ENTRY(entry34)));


enregistrer_infirmier ("finfirmier", m);
window10 = create_window10();
	gtk_widget_show(window10);
}


void
on_button24_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
patient m;

        GtkWidget *entry37;
	GtkWidget *entry38;
	GtkWidget *entry39;
        GtkWidget *entry40;
	GtkWidget *entry41;
	GtkWidget *entry42;
        GtkWidget *entry43;
	GtkWidget *entry44;
	
        GtkWidget *entry46;
GtkWidget *entry47;
GtkWidget *entry48;
GtkWidget *entry49;
GtkWidget *entry50;
GtkWidget *entry51;
GtkWidget *entry52;
GtkWidget *entry53;
GtkWidget *entry54;
GtkWidget *entry55;

        GtkWidget *window15;
        entry37 = lookup_widget(objet_graphique, "entry37");
	entry38 = lookup_widget(objet_graphique, "entry38");
	entry39 = lookup_widget(objet_graphique, "entry39");
        entry40 = lookup_widget(objet_graphique, "entry40");
	entry41 = lookup_widget(objet_graphique, "entry41");
	
        entry43 = lookup_widget(objet_graphique, "entry43");
	entry44 = lookup_widget(objet_graphique, "entry44");
	
        entry46 = lookup_widget(objet_graphique, "entry46");
entry47 = lookup_widget(objet_graphique, "entry47");
entry48 = lookup_widget(objet_graphique, "entry48");
entry49 = lookup_widget(objet_graphique, "entry49");
entry50 = lookup_widget(objet_graphique, "entry50");
entry51 = lookup_widget(objet_graphique, "entry51");
entry52 = lookup_widget(objet_graphique, "entry52");
entry53 = lookup_widget(objet_graphique, "entry53");
entry54 = lookup_widget(objet_graphique, "entry54");
entry55 = lookup_widget(objet_graphique, "entry55");

strcpy(m.nom, gtk_entry_get_text(GTK_ENTRY(entry37)));
strcpy(m.prenom, gtk_entry_get_text(GTK_ENTRY(entry38)));
strcpy(m.age, gtk_entry_get_text(GTK_ENTRY(entry39)));
strcpy(m.passeport, gtk_entry_get_text(GTK_ENTRY(entry40)));
strcpy(m.mdp, gtk_entry_get_text(GTK_ENTRY(entry46)));
strcpy(m.nationalite, gtk_entry_get_text(GTK_ENTRY(entry41)));

strcpy(m.adresse, gtk_entry_get_text(GTK_ENTRY(entry43)));
strcpy(m.conturg, gtk_entry_get_text(GTK_ENTRY(entry44)));
strcpy(m.poids, gtk_entry_get_text(GTK_ENTRY(entry47)));
strcpy(m.taille, gtk_entry_get_text(GTK_ENTRY(entry48)));
strcpy(m.sexe, gtk_entry_get_text(GTK_ENTRY(entry49)));
strcpy(m.sang, gtk_entry_get_text(GTK_ENTRY(entry50)));
strcpy(m.allergie, gtk_entry_get_text(GTK_ENTRY(entry51)));
strcpy(m.etat, gtk_entry_get_text(GTK_ENTRY(entry52)));
strcpy(m.dateent, gtk_entry_get_text(GTK_ENTRY(entry53)));
strcpy(m.datesor, gtk_entry_get_text(GTK_ENTRY(entry54)));
strcpy(m.localisation, gtk_entry_get_text(GTK_ENTRY(entry55)));


enregistrer_patient ("fpatient", m);
window15 = create_window15();
	gtk_widget_show(window15);
}


void
on_button25_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
patient m;
	

	char buf[1000];
	char buf0[50] = "NOM: ";
	char buf1[50] = "PRENOM: ";
	char buf2[50] = "AGE: ";
        char buf3[50] = "passeport: ";
	char buf4[50] = "mdp: ";
	char buf5[50] = "nationalité: ";
        char buf6[50] = "salaire: ";
	char buf7[50] = "etat_civil: ";
	char buf8[50] = "adresse: ";
        char buf9[50] = "contact_ur: ";
        char buf10[50] = "poids: ";
        char buf11[50] = "taille: ";
        char buf12[50] = "sexe: ";
        char buf13[50] = "sang: ";
        char buf14[50] = "allergie: ";
        char buf15[50] = "etat: ";
        char buf16[50] = "d.entrée: ";
        char buf17[50] = "d.sortie: ";
        char buf18[50] = "localisation: ";
        


	GtkWidget * label69;
label69= lookup_widget(objet_graphique, "label69");
lister_patient("fpatient",&m);
sprintf(buf,"%s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n ",buf0,m.nom,buf1,m.prenom,buf2,m.age,buf3,m.passeport,buf4,m.mdp,buf5,m.nationalite,buf8,m.adresse,buf9,m.conturg,buf10,m.poids,buf11,m.taille,buf12,m.sexe,buf13,m.sang,buf14,m.allergie,buf15,m.etat,buf16,m.dateent,buf17,m.datesor,buf18,m.localisation);
gtk_label_set_text(GTK_LABEL(label69), buf);
}


void
on_button26_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window16;
        window16 = create_window16();
	gtk_widget_show(window16);
}


void
on_button27_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window17;
        window17 = create_window17();
	gtk_widget_show(window17);
}


void
on_button28_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
patient m;
        
        GtkWidget *entry56;
        entry56 = lookup_widget(objet_graphique, "entry56");
        
        GtkWidget * label70;
        label70= lookup_widget(objet_graphique, "label70");
     
     char cin_patient1[20];
     int s;
     
     strcpy(cin_patient1, gtk_entry_get_text(GTK_ENTRY(entry56)));
     s=rechercher_patient("fpatient",cin_patient1,&m);
     if (s==1) 
     {
         supprimer_patient("fpatient",cin_patient1,&m);
         gtk_label_set_text(GTK_LABEL(label70),"l'infirmier est supprimé");
     }
     else gtk_label_set_text(GTK_LABEL(label70),"l'infirmier n'existe pas");
}


void
on_button29_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
patient m;
      
      GtkWidget *entry57;
      entry57 = lookup_widget(objet_graphique, "entry57");
      
      GtkWidget * label73;
      label73= lookup_widget(objet_graphique, "label73");
      
      char cin_patient[20];
      int t;
            
            strcpy(cin_patient, gtk_entry_get_text(GTK_ENTRY(entry57)));
            t=rechercher_patient("fpatient",cin_patient,&m);
            if (t==1) 
                gtk_label_set_text(GTK_LABEL(label73),"le patient existe");
           else 
                gtk_label_set_text(GTK_LABEL(label73),"le patient n'existe pas");
}


void
on_button16_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window13;
        window13 = create_window13();
	gtk_widget_show(window13);
}


void
on_button17_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window14;
        window14 = create_window14();
	gtk_widget_show(window14);
}


void
on_button30_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *entry58;
entry58 = lookup_widget(objet_graphique, "entry58");
GtkWidget * label79;
label79= lookup_widget(objet_graphique, "label79");
GtkWidget * label81;
label81= lookup_widget(objet_graphique, "label81");
GtkWidget * label82;
label82= lookup_widget(objet_graphique, "label82");

        char buf[1000];
	char buf0[50];
	char buf1[10000];
	char buf2[50] = "Infraction commise par: ";
        char buf3[1000];



FILE *fichier;
Personnel *tab,temp;
Events *str;
char ID_saisi[50],M[50];
char ID_temp[50], cap[3];
int i,j,nbre_lignes=0,nbre_personnel=1,compteur_personnel=0,compteur_events=0,ID_existe=0;
char c;

fichier= fopen("evenements.log", "r") ;


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
        strcpy(tab[i].ID,ID_temp);
        c=fgetc(fichier);
                for(j=0;j<3;j++)
                {
                tab[i].capteur[j]=fgetc(fichier);               
                }
        if(i<nbre_lignes-1){c=fgetc(fichier);}
        }



for (i=1;i<nbre_lignes;i++)
{
temp=tab[i]; j=i;
while( j>0 && (strcmp(tab[j-1].ID,temp.ID)>0))
{
tab[j]=tab[j-1];
j--;
}
tab[j]=temp;
}


for(i=1;i<nbre_lignes;i++)
{
if (strcmp(tab[i].ID,tab[i-1].ID)!=0) nbre_personnel++;
}

str = (Events *) malloc(sizeof(Events) * nbre_personnel) ;
//initialisation de la réponse des capteurs à zéro
for(i=0;i<nbre_personnel;i++)
{
str[i].E01=0;str[i].C01=0;str[i].S01=0;str[i].L01=0;str[i].C02=0;str[i].I01=0;str[i].L02=0;str[i].V01=0;str[i].D01=0;str[i].B01=0;str[i].M01=0;str[i].SOU=0;str[i].POU=0;str[i].EBO=0;
}

//remplissage de la structure Events en binaire
strcpy(M,tab[1].ID);
while(compteur_personnel<nbre_lignes)
{
while(strcmp(M,tab[compteur_personnel].ID)==0 && (compteur_personnel<nbre_lignes) )
{
for(j=0;j<3;j++)
{
cap[j]=tab[compteur_personnel].capteur[j];
}
cap[3]='\0';
strcpy(str[compteur_events].ID,tab[compteur_personnel].ID);
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
strcpy(M,tab[compteur_personnel].ID);
compteur_events++;
}






strcpy(ID_saisi, gtk_entry_get_text(GTK_ENTRY(entry58)));

for(i=0;i<nbre_personnel;i++)
{
if (strcmp(str[i].ID,ID_saisi)==0) 
{
ID_existe=1;
if ((str[i].E01 + str[i].C01 + str[i].S01 + str[i].L01 + str[i].C02 + str[i].I01 + str[i].L02 + str[i].V01 + str[i].D01 + str[i].B01 + str[i].M01 + str[i].SOU + str[i].POU + str[i].EBO) != 14 )
{sprintf(buf3,"\n\n %s \n\n",str[i].ID);}

}
}
gtk_label_set_text(GTK_LABEL(label82),buf3);

if (ID_existe=1) {gtk_label_set_text(GTK_LABEL(label81),"Cet ID n'existe pas");}

if(ID_existe==1)
{
if (str[i].E01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur E01 procédure non respecté Entrée à la zone d'isolation activé");}
if (str[i].C01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur C01 procédure non respecté Vêtements de protection + Chaussures habillé");}
if (str[i].S01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur S01 Sortie de la zone d'isolation activé");}
if (str[i].L01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur L01 Premier lavage des mains ");}
if (str[i].C02==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur C02 procédure non respecté Vêtements de protection + Chaussures déshabillé ");}
if (str[i].I01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur I01 procédure non respecté Incinération totale des vêtements et des chaussures");}
if (str[i].L02==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur L02 procédure non respecté Lavage des mains effectué durant 5 minutes activé ");}
if (str[i].V01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur V01 procédure non respecté passage via la cuve d'eau + Chlore effectué ");}
if (str[i].D01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur D01 procédure non respecté Douche moyennant une solution d'eau et du chlore effectué ");}
if (str[i].B01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur B01 Entrée à la zone des bureaux ");}
if (str[i].M01==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur M01 Entrée à la zone des magazins ");}
if (str[i].SOU==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur SOUT DANGER!!!!Sortie de la clinique ");}
if (str[i].POU==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur POUT !!!!! DANGER !!!!! Alarme de sortie à travers la barrière de la clinique !!!!! DANGER !!!!!\n");}
if (str[i].EBO==0) {sprintf(buf1,"\n\n %s \n\n","Erreur au niveau du capteur EBOLA !!!!!DANGER!!!! Personnel atteint par l'EBOLA !!!!! DANGER !!!!! ");}
}

gtk_label_set_text(GTK_LABEL(label81),buf1);
}


void
on_button31_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *entry58;
entry58 = lookup_widget(objet_graphique, "entry58");
GtkWidget * label79;
label79= lookup_widget(objet_graphique, "label79");
GtkWidget * label81;
label81= lookup_widget(objet_graphique, "label81");

        char buf [3] [1000];
	char buf0[50];
	char buf1[10000];
	char buf2[50] = "Infraction commise par: ";



FILE *fichier;
Personnel *tab,temp;
Events *str;
char ID_saisi[50],M[50];
char ID_temp[50], cap[3];
int i,j,nbre_lignes=0,nbre_personnel=1,compteur_personnel=0,compteur_events=0,ID_existe=0;
char c;

fichier= fopen("evenements.log", "r") ;


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
        strcpy(tab[i].ID,ID_temp);
        c=fgetc(fichier);
                for(j=0;j<3;j++)
                {
                tab[i].capteur[j]=fgetc(fichier);               
                }
        if(i<nbre_lignes-1){c=fgetc(fichier);}
        }



for (i=1;i<nbre_lignes;i++)
{
temp=tab[i]; j=i;
while( j>0 && (strcmp(tab[j-1].ID,temp.ID)>0))
{
tab[j]=tab[j-1];
j--;
}
tab[j]=temp;
}


for(i=1;i<nbre_lignes;i++)
{
if (strcmp(tab[i].ID,tab[i-1].ID)!=0) nbre_personnel++;
}

str = (Events *) malloc(sizeof(Events) * nbre_personnel) ;
//initialisation de la réponse des capteurs à zéro
for(i=0;i<nbre_personnel;i++)
{
str[i].E01=0;str[i].C01=0;str[i].S01=0;str[i].L01=0;str[i].C02=0;str[i].I01=0;str[i].L02=0;str[i].V01=0;str[i].D01=0;str[i].B01=0;str[i].M01=0;str[i].SOU=0;str[i].POU=0;str[i].EBO=0;
}

//remplissage de la structure Events en binaire
strcpy(M,tab[1].ID);
while(compteur_personnel<nbre_lignes)
{
while(strcmp(M,tab[compteur_personnel].ID)==0 && (compteur_personnel<nbre_lignes) )
{
for(j=0;j<3;j++)
{
cap[j]=tab[compteur_personnel].capteur[j];
}
cap[3]='\0';
strcpy(str[compteur_events].ID,tab[compteur_personnel].ID);
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
strcpy(M,tab[compteur_personnel].ID);
compteur_events++;
}




for(i=0;i<nbre_personnel;i++)
{
sprintf(buf[i],"\n %s \n",str[i].ID);
strcat(buf1,buf[i]);
}
gtk_label_set_text(GTK_LABEL(label79), buf1);
}


void
on_button32_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window9;
        window9 = create_window9();
	gtk_widget_show(window9);
}


void
on_button33_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window18;
        window18 = create_window18();
	gtk_widget_show(window18);
}


void
on_button44_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window20;
        window20 = create_window20();
	gtk_widget_show(window20);
}


void
on_button34_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window24;
        window24 = create_window24();
	gtk_widget_show(window24);
}


void
on_button35_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window25;
        window25 = create_window25();
	gtk_widget_show(window25);
}


void
on_button36_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
medicament m;
	

	char buf[1000];
	char buf0[50] = "NOM: ";
	char buf1[50] = "CODEBARRE: ";
	
        


	GtkWidget * label83;
label83= lookup_widget(objet_graphique, "label83");
lister_medicament("fmedicament",&m);
sprintf(buf,"%s %s \n\n %s %s \n\n",buf0,m.nom,buf1,m.codebarre);
gtk_label_set_text(GTK_LABEL(label83), buf);

}


void
on_button37_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window22;
        window22 = create_window22();
	gtk_widget_show(window22);
}


void
on_button38_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window23;
        window23 = create_window23();
	gtk_widget_show(window23);
}


void
on_button39_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
medicament m;

GtkWidget *entry59;
entry59 = lookup_widget(objet_graphique, "entry59");

GtkWidget * label85;
label85= lookup_widget(objet_graphique, "label85");

char cb_medicament[20];
int t;

strcpy(cb_medicament, gtk_entry_get_text(GTK_ENTRY(entry59)));
t=rechercher_medicament("fmedicament",cb_medicament,&m);
if (t==1) 
gtk_label_set_text(GTK_LABEL(label85),"le medicament existe");
else gtk_label_set_text(GTK_LABEL(label85),"le medicament n'existe pas");
}


void
on_button40_clicked   (GtkWidget *objet_graphique, gpointer user_data)
{
medicament m;

GtkWidget *entry60;
entry60 = lookup_widget(objet_graphique, "entry60");

GtkWidget * label87;
label87= lookup_widget(objet_graphique, "label87");

char cb_medicament1[20];
int s;

strcpy(cb_medicament1, gtk_entry_get_text(GTK_ENTRY(entry60)));
s=rechercher_medicament("fmedicament",cb_medicament1,&m);
if (s==1) 
   {
     supprimer_medicament("fmedicament",cb_medicament1,&m);
     gtk_label_set_text(GTK_LABEL(label87),"le medicament est supprimé");
   }
else gtk_label_set_text(GTK_LABEL(label87),"le medicament n'existe pas");
}


void
on_button41_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
medicament m;

        GtkWidget *entry61;
	GtkWidget *entry62;
	

        GtkWidget *window21;
        entry61 = lookup_widget(objet_graphique, "entry61");
	entry62 = lookup_widget(objet_graphique, "entry62");
	

strcpy(m.nom, gtk_entry_get_text(GTK_ENTRY(entry61)));
strcpy(m.codebarre, gtk_entry_get_text(GTK_ENTRY(entry62)));



enregistrer_medicament ("fmedicament", m);
window21 = create_window21();
	gtk_widget_show(window21);
}


void
on_button42_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
nourriture m;

        GtkWidget *entry63;
	GtkWidget *entry64;
	

        
        entry63 = lookup_widget(objet_graphique, "entry63");
	entry64 = lookup_widget(objet_graphique, "entry64");
	

strcpy(m.date, gtk_entry_get_text(GTK_ENTRY(entry63)));
strcpy(m.quantite, gtk_entry_get_text(GTK_ENTRY(entry64)));



enregistrer_nourriture ("fnourriture", m);
}


void
on_button43_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
nourriture m;
	

	char buf[1000];
	char buf0[50] = "DATE: ";
	char buf1[50] = "QUANTITE: ";
	
        


	GtkWidget * label94;
label94= lookup_widget(objet_graphique, "label94");
lister_nourriture("fnourriture",&m);
sprintf(buf,"%s %s \n\n %s %s \n\n",buf0,m.date,buf1,m.quantite);
gtk_label_set_text(GTK_LABEL(label94), buf);
}

