#ifndef nouriture_H_
#define nouriture_H_
typedef struct date
{
char jour[3];
char mois[3];
char annee[5];
}date;        
typedef struct nouriture 
{
struct date d;
char quantite[20];
}nouriture;

        
        void saisir_nouriture(nouriture *n,date *d);
        void enregistrer_nouriture(char fnouriture[],nouriture *n,date *d);
        void liste_nouriture(char fnouriture[]);



#endif /* nouriture_H_ */

