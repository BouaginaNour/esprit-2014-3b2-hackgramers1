

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"authentification.h"
int main(){
int *id;
char *password;
password=malloc(20*sizeof(char));
id=malloc(sizeof(int));
identification (id ,password);
verification-de-lidentification(id, password);
return(0);
}
