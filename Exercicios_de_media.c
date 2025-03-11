#include <stdio.h>
int main(){
float nota1;
float nota2;
float media;
float mediatotal;
int aluno;
aluno=1;
mediatotal=0;
while(aluno<=5){
    printf("Escreva a primeira nota: ");
    scanf("%f", &nota1);
    printf("Escreva a segunda nota: ");
    scanf("%f", &nota2);
    media=(nota1+nota2)/2;
    printf("Media Aluno %i: %.1f\n\n", aluno, media);
    mediatotal=mediatotal+media;
    aluno=aluno+1;
}
printf ("Media total dos alunos: %.1f\n", mediatotal/5);

return 0;
}
