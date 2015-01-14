#ifndef INFIRMIER_H_
#define INFIRMIER_H_


struct infirmier

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

typedef struct  infirmier infirmier ;
        
        void enregistrer_infirmier(char finfirmier[],infirmier p);
	void lister_infirmier(char finfirmier[], infirmier *p);
        int rechercher_infirmier(char finfirmier[],char cin_infirmier[],infirmier *p);
        void supprimer_infirmier(char finfirmier[],char cin_infirmier[],infirmier *p);
        
#endif /* INFIRMIER_H_ */
