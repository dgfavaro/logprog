#include <stdio.h>
int main(){
float numero1, numero2;
float divisao;
printf("Digite o primeiro numero\n");
scanf("%i", &numero1);
printf("Digite o segundo numero\n");
scanf("%i", &numero2);
divisao=numero1/numero2;
printf("\nNumero 1: %f", numero1);
printf("\nNumero 2: %f", numero2);
printf("\nSoma: %f", numero1+numero2);
printf("\nSubtracao: %f", numero1-numero2);
printf("\nMultiplicacao: %f", numero1*numero2);
printf("\nDivisao: %f", divisao); //??
return 0;
}
