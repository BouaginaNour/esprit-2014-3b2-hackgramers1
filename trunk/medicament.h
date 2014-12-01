#ifndef medicament_H_
#define medicament_H_
typedef struct medicament 
{
char nom[20];
char codebarre[10];
}medicament;
        void saisir_medicament(medicament *m);
        void enregistrer_medicament(char fmedicament[],medicament *m);
        void supprimer_medicament(char fmedicament[],char codebarre[]);
        int rechercher_medicament(char fmedicament[],char codebarre[]);




#endif /* medicament_H_ */

