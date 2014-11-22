#define MAX 50

typedef struct agent 
{
char nom[MAX];
char prenom[MAX];
int age;
char passeport[MAX];
long int id;
char mdp[MAX];
char nationalite[MAX];
long int salaire;
char etat_civil[MAX];
char adresse[MAX];
long int telephone;
}agent;

void saisir_agent(agent *p);
void enregistrer_agent(char fagent[],agent *p);
void liste_agent(char fagent[]);
int recherche_agent(char fagent[],char nom_agent[]);

