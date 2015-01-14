#ifndef PATIENT_H_
#define PATIENT_H_
typedef struct {
char nom [50];
char prenom [50];
char age[50];
char nationalite [50];
char passeport [50];
char mdp[50] ;
char adresse [100];
char conturg[50] ;
char poids[50] ;
char taille[50] ;
char sexe [10] ;
char sang [10] ;
char allergie [100] ;
char etat[50] ;
char dateent [20];
char datesor [20];
char localisation[20];
} patient;
        void enregistrer_patient(char fpatient[],patient p);
	void lister_patient(char fpatient[], patient *p);
        int rechercher_patient(char fpatient[],char cin_patient[],patient *p);
        void supprimer_patient(char fpatient[],char cin_patient[],patient *p);
        
#endif /* PATIENT_H_ */
