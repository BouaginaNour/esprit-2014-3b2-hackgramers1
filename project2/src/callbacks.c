#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>


#include "callbacks.h"
#include "interface.h"
#include "support.h"


#include "medecin.h" //pour le volet métier de l'application 
#include "nouriture.h"  //pour le volet nouriture window 6 
#include "medicament.h"
void
on_button1_clicked(GtkWidget *objet_graphique, gpointer user_data)
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

        GtkWidget *window7;
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


enregistrer_medecin ("fmed", &m);
window7 = create_window7();
	gtk_widget_show(window7);
}


void on_button2_clicked (GtkWidget *objet_graphique, gpointer user_data)
{

}


void on_button3_clicked (GtkWidget *objet_graphique, gpointer user_data)
{

}


void on_button4_clicked (GtkWidget *objet_graphique, gpointer user_data)
{

}


void on_button5_clicked  (GtkWidget *objet_graphique, gpointer user_data)
{
medicament m;
char fmedicament[]="fmedicament";
	GtkWidget *entry46;
	GtkWidget *entry47;
        GtkWidget *window10;
        entry46 = lookup_widget(objet_graphique, "entry46");
	entry47 = lookup_widget(objet_graphique, "entry47");
        strcpy(m.nom, gtk_entry_get_text(GTK_ENTRY(entry46)));
        n.codebarre = atoi(gtk_entry_get_text(GTK_ENTRY(entry47)));
        enregistrer_medicament("fmedicament",&m);
        window10 = create_window10();
	gtk_widget_show(window10);
}



void on_button7_clicked  (GtkWidget *objet_graphique, gpointer user_data)
{
date dd;
nouriture n ;
char fnouriture[]="fnouri";
	GtkWidget *entry48;
	GtkWidget *entry49;
        GtkWidget *window9;
       
           	entry48 = lookup_widget(objet_graphique, "entry48");
		entry49 = lookup_widget(objet_graphique, "entry49");

strcpy(n->dd.jour, gtk_entry_get_text(GTK_ENTRY(entry48)));
;//strcpy(n->dd.mois, gtk_entry_get_text(GTK_ENTRY(entry2)));
;//strcpy(n->dd.annee, gtk_entry_get_text(GTK_ENTRY(entry3)));
strcpy(n->quantite, gtk_entry_get_text(GTK_ENTRY(entry49)));
//n.quantite = atoi(gtk_entry_get_text(GTK_ENTRY(entry49))); since quantite is a number ?!which one is right strcpy or atoi

 enregistrer_nouriture("fnouriture",&n,&dd);
window9 = create_window9();
	gtk_widget_show(window9);
}
void on_button8_clicked(GtkWidget *objet_graphique, gpointer user_data)
{
        medecin m;
	

	char Buf[1000];
	char Buf0[50] = "NOM: ";
	char Buf1[50] = "PRENOM: ";
	char Buf2[50] = "AGE: ";
        char Buf3[50] = "passeport: ";
	char Buf4[50] = "mdp: ";
	char Buf5[50] = "nationalité: ";
        char Buf6[50] = "salaire: ";
	char Buf7[50] = "etat_civil: ";
	char Buf8[50] = "adresse: ";
        char Buf9[50] = "telephone: ";
        


	GtkWidget * label56;
label56= lookup_widget(objet_graphique, "label56");
liste_medecin("fmed");
sprintf(Buf, "%s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n %s %s \n\n", Buf0, m.nom, Buf1,	m.prenom,Buf2,m.age,Buf3,m.passeport,Buf4,m.mdp,Buf5,m.nationalite,Buf6,m.salaire,Buf7,m.etat_civil,Buf8,m.adresse,Buf9,m.telephone);
gtk_label_set_text(GTK_LABEL(label56), Buf);
}
void on_window1_destroy (GtkObject *object, gpointer user_data)
{
	 gtk_main_quit();
}
void on_button10_clicked  (GtkWidget *objet_graphique, gpointer user_data)
{
date dd;
nouriture n ;
char Buf[100];
	char Buf0[50] = "date: ";
	char Buf1[50] = "quantite: ";
GtkWidget * label60;
label60= lookup_widget(objet_graphique, "label60");
liste_nourriture("fnouriture");
sprintf(Buf, "%s %s \n\n %s %s \n\n %s \n\n", Buf0,n->date.j n->date.mois n->date.annee, Buf1,	n.quantite);// à verifier 
gtk_label_set_text(GTK_LABEL(label60), Buf);
}
void on_window1_destroy (GtkObject *object, gpointer user_data)
{
	 gtk_main_quit();
}
void on_button11_clicked  (GtkWidget *objet_graphique, gpointer user_data)
{

medicament m ;
char Buf[100];
	char Buf0[50] = "nom: ";
	char Buf1[50] = "codebarre: ";
GtkWidget * label61;
label60= lookup_widget(objet_graphique, "label61");
liste_medicament("fmedicament");
sprintf(Buf, "%s  \n\n %s \n\n ", Buf0,n.nom, Buf1,	n.codebarre);// à verifier 
gtk_label_set_text(GTK_LABEL(label61), Buf);
}
void on_window1_destroy (GtkObject *object, gpointer user_data)
{
	 gtk_main_quit();
}

