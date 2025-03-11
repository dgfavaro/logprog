#include <stdio.h>
int main(){

float nota1, nota2, media, mediatotal;
int aluno, ciclo;

mediatotal=0;
aluno=0;
ciclo=1;

while(ciclo==1){
    aluno=aluno+1;
    printf("Escreva a primeira nota: ");
    scanf("%f", &nota1);
    printf("Escreva a segunda nota: ");
    scanf("%f", &nota2);
    media=(nota1+nota2)/2;
    printf("Media Aluno %i: %.1f\n", aluno, media);
    mediatotal=mediatotal+media;
    printf("Deseja continuar? 1-sim 0-nao: ");
    scanf("%i", &ciclo);
    printf("\n");
}

return 0;
}
