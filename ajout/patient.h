#ifndef PATIENT_H_
#define PATIENT_H_
typedef struct {
char nom [50];
char prenom [50];
int age;
char nationalite [50];
char passeport [50];
long int  id ;
char adresse [100];
long int conturg ;
float poids ;
int taille ;
char sexe [10] ;
char sang [10] ;
char allergie [100] ;
char etat[50] ;
char dateent [20];
char datesor [20];
} patient;
void saisie_patient(patient *p);
void enregister_patient(char fpatient[], patient *p);
void liste_patient(char fpatient[]);
void supprimer_patient(char fpatient[],char cin_patient[]);
int rechercher_patient(char fpatient[], char cin_patient[]);
#endif /* PATIENT_H_ */

