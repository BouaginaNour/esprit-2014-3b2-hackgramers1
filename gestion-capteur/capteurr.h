#ifndef CAPTEUR_H_INCLUDED
#define CAPTEUR_H_INCLUDED
struct capteur
{
char nom[40];
char emplacement[40];};
void afficher(char chemin[],capteur c);
void menu (capteur *c ,char chemin[]);
void ajouter_capteur (capteur *c);
void creer_fichier (capteur *c);
void enregistrer_capteur (char chemin[],capteur *c);
void supprimer_capteur(char chemin[], capteur *c);
#endif //CAPTEUR_H_INCLUDE


