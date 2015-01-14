#ifndef AGENT_H_
#define AGENT_H_


struct agent

{
        char nom[50];
        char prenom[50];
        char passeport[50];
        char age[50] ;
        char mdp[50];
        char nationalite[50];
        char salaire[50];
        char etat_civil[50];
        char adresse[50];
        char telephone[50];
};

typedef struct agent agent ;
        
        void enregistrer_agent(char fagent[],agent p);
	void lister_agent(char fagent[], agent *p);
        int rechercher_agent(char fagent[],char cin_agent[],agent *p);
        void supprimer_agent(char fagent[],char cin_agent[],agent *p);
        void lister_agents(char fagent[], agent *p,int *n);
#endif /* AGENT_H_ */
