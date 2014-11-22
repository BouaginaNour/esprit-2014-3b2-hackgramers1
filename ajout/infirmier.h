#define MAX 50

typedef struct infirmier 
{
char nom[MAX];
char prenom[MAX];
int age;
char passeport[MAX];
char mdp[MAX];
long int id ;
char nationalite[MAX];
long int salaire;
char etat_civil[MAX];
char adresse[MAX];
long int telephone;
}infirmier;

void saisir_infirmier(infirmier *p);
void enregistrer_infirmier(char finf[],infirmier *p);
void liste_infirmier(char finf[]);
int recherche_infirmier(char finf[],char nom_infirmier[]);

