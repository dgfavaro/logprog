#include <stdio.h>
int main(){

int vfixo;
int vvar;
int distancia;

vfixo=10;
vvar=2;     // 2$/km

printf("Insira a distancia a percorrer (km): ");
scanf("%i", &distancia);
printf("Valor da Tarifa: R$%i", distancia*vvar+vfixo);

return 0;
}
