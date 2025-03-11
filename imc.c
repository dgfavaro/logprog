#include <stdio.h>
int main(){
float altura, peso, imc, obs;
obs=0;
printf("Insira a altura em metros: ");
scanf("%f",&altura);
printf("\nInsira o peso em quilogramas: ");
scanf("%f",&peso);
imc=peso/(altura*altura);
printf("\nIMC igual a: %.2f", imc);
if (imc>=25 && imc<=29.9){
    obs=1;
}
if (imc>=30 && imc<=39.9){
    obs=2;
}
if (imc>=40){
    obs=3;
}

printf("\nGrau de Obesidade: %.0f\n", obs);
return 0;
}
