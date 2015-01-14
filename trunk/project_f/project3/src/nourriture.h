#ifndef nourriture_H_
#define nourriture_H_
typedef struct nourriture 
{
char date[20];
char quantite[10];
}nourriture;
       void enregistrer_nourriture(char fnourriture[],nourriture p);
	void lister_nourriture(char fnourriture[], nourriture *p);
        
        



#endif /* nourriture_H_ */
