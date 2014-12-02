#ifndef AGENT_H_
#define AGENT_H_


struct agent

{
        char nom[50];
        char prenom[50];
        char passeport[50];
        int age ;
        long int id;
        char mdp[50];
        char nationalite[50];
        long int salaire;
        char etat_civil[50];
        char adresse[50];
        long int telephone;
};

typedef struct agent agent ;
        void saisir_agent(agent *p);
        void enregistrer_agent(char fagent[],agent *p);
        void liste_agent(char fagent[]);
        void supprimer_agent(char fagent[],char cin_agent[]);
        int rechercher_agent(char fagent[],char cin_agent[]);




#endif /* AGENT_H_ */
