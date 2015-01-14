#ifndef PARCOURS_H_
#define PARCOURS_H_

struct personnel
{
char ID[50];
char capteur[3];
};
struct events
{
char ID[50];
int E01;
int C01;
int S01;
int L01;
int C02;
int I01;
int L02;
int V01;
int D01;
int B01;
int M01;
int SOU;
int POU;
int EBO;
};

typedef struct personnel Personnel;
typedef struct events Events; 

#endif /* PARCOURS_H_ */
