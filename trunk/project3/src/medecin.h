#ifndef MEDECIN_H_
#define MEDECIN_H_


struct medecin

{
        char nom[50];
        char prenom[50];
        char passeport[50];
        char age[50] ;
        char mdp[50];
        char nationalite[50];
        char salaire[50];
        char etat_civil[50];
        char adresse[50];
        char telephone[50];
};

typedef struct medecin medecin ;
        
        void enregistrer_medecin(char fmedecin[],medecin p);
	void lister_medecin(char fmedecin[], medecin *p);
        int rechercher_medecin(char fmedecin[],char cin_medecin[],medecin *p);
        void supprimer_medecin(char fmedecin[],char cin_medecin[],medecin *p);
#endif /* MEDECIN_H_ */
