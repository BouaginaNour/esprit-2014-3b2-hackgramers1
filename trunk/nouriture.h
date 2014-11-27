#ifndef nouriture.H
#define nouriture_H_
typedef struct nouriture 
{
char nom[20];
char type[10]
char codebarre[10];
}nouriture;
        void saisir_nouriture(nouriture *n);
        void enregistrer_nouriture(char fnouriture[],nouriture *n);
        void supprimer_nouriture(char fnouriture[],char codebarre[]);
        int rechercher_medicament(char fnouriture,char codebarre[]);




#endif /* nouriture_H_ */

