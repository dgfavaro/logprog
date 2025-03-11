#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(){

int vendas[10];
float i, soma;
soma=0;

srand(time(NULL));
for(i=0;i<=9;i++){
    vendas[i]=rand()%100;
    printf("%i ",vendas[i]);
    soma=soma+vendas[i];
}
printf("\nsoma = %i",soma);
printf("\nmedia = %f",soma/10);
return 0;
}
