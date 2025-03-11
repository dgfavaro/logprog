#include <stdio.h>
int main(){

int idade, dias, cidades;
float valorbruto, distancia, porcentagem=0;

printf("Insira sua idade: ");
scanf("%i", &idade);
if (idade<60){
    printf("\nQual a distancia a ser percorrida?: ");
    scanf("%f", &distancia);
    printf("\nQuantos dias de viagem?: ");
    scanf("%i", &dias);
    printf("\nPor quantas cidades ira percorrer?: ");
    scanf("%i",&cidades);

    if(dias>7){
        porcentagem=porcentagem+0.1;
    }
    if(cidades>5){
        porcentagem=porcentagem-0.1;
    }
    if (distancia>100){
        porcentagem=porcentagem+0.1;
    }
    printf("%f", porcentagem);

}
else {
 printf("Passagem Gratuita");
}
return 0;
}
