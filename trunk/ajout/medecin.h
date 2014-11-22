#ifndef MEDECIN_H_
#define MEDECIN_H_
#include"patient.h"

struct medecin

{
        char nom[50];
        char prenom[50];
        char passeport[50];
        int age ;
        long int id;
        char mdp[50];
        char nationalite[50];
        long int salaire;
        char etat_civil[50];
        char adresse[50];
        long int telephone;
};

typedef struct medecin medecin ;
        void saisir_medecin(medecin *p);
        void enregistrer_medecin(char fmedecin[],medecin *p);
        void liste_medecin(char fmedecin[]);
        int recherche_medecin(char fmedecin[],char nom_medecin[]);




#endif /* MEDECIN_H_ */
