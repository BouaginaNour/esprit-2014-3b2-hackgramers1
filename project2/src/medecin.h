#ifndef MEDECIN_H_
#define MEDECIN_H_


struct medecin

{
        char nom[50];
        char prenom[50];
        char passeport[50];
        char age ;
        int id;
        char mdp[50];
        char nationalite[50];
        char salaire;
        char etat_civil[50];
        char adresse[50];
        char telephone;
};

typedef struct medecin medecin ;
        
        void enregistrer_medecin(char fmedecin[],medecin *p);
        void liste_medecin(char fmedecin[]);
        void supprimer_medecin(char fmedecin[],char cin_medecin[]);
        int rechercher_medecin(char fmedecin[],char cin_medecin[]);




#endif /* MEDECIN_H_ */
