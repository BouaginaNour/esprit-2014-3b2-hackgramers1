#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <stdlib.h> //pour l'appel de la fonction atoi()
#include <string.h> //pour l'appel de la fonction strcpy

#include "medecin.h" //pour le volet métier de l'application
#include "agent.h"

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

void
on_button4_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window4;
window4 = create_window4();
	gtk_widget_show(window4);
}


void
on_button5_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
GtkWidget *window3;
window3 = create_window3();
	gtk_widget_show(window3);
}


void
on_button6_clicked (GtkWidget *objet_graphique, gpointer user_data)
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
else gtk_label_set_text(GTK_LABEL(label14),"le medecin n'existe pas");
}


void
on_button7_clicked (GtkWidget *objet_graphique, gpointer user_data)
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


void
on_button8_clicked (GtkWidget *objet_graphique, gpointer user_data)
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


void
on_button12_clicked (GtkWidget *objet_graphique, gpointer user_data)
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


void
on_button13_clicked (GtkWidget *objet_graphique, gpointer user_data)
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

