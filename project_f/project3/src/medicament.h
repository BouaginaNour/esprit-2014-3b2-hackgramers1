#ifndef medicament_H_
#define medicament_H_
typedef struct medicament 
{
char nom[20];
char codebarre[10];
}medicament;
       void enregistrer_medicament(char fmedicament[],medicament p);
	void lister_medicament(char fmedicament[], medicament *p);
        int rechercher_medicament(char fmedicament[],char cb_medicament[],medicament *p);
        void supprimer_medicament(char fmedicament[],char cb_medicament[],medicament *p);
        



#endif /* medicament_H_ */
