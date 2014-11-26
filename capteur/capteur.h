#ifndef CAPTEUR_H_
#define CAPTEUR_H_
#define MAX 50

struct capteur{
char nom[MAX];
};
typedef struct capteur capteur;

void saisir_Capteur(capteur *c);
void afficher_Capteur(char fcapteur[] ,capteur c);
void comparer_capteur(char fcapteur[], char events[]);


#endif /*CAPTEUR_H_*/

