#ifndef INFIRMIER_H_
#define INFIRMIER_H_


struct infirmier

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

typedef struct infirmier infirmier ;
        void saisir_infirmier(infirmier *p);
        void enregistrer_infirmier(char finfirmier[],infirmier *p);
        void liste_infirmier(char finfirmier[]);
        void supprimer_infirmier(char finfirmier[],char cin_infirmier[]);
        int rechercher_infirmier(char finfirmier[],char cin_infirmier[]);




#endif /* INFIRMIER_H_ */
