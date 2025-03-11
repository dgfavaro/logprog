#include <stdio.h>
int main(){

float vfixo;
float vvar;
float distancia;
int fdp;

vfixo=10;
vvar=2;     // 2$/km

printf("Insira a distancia a percorrer (km): ");
scanf("%f", &distancia);

printf("Esta corrida sera feita durante a festa do peao? 0 ou 1: ");
scanf("%i",&fdp);
 if (fdp==1){
    printf("Valor da Tarifa Alterado: R$%f", (distancia*vvar+vfixo)*1.2);
 }
 else{
    printf("Valor da Tarifa: R$%f", distancia*vvar+vfixo);
 }

return 0;
}
