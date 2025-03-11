#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
int main(){
setlocale(LC_ALL,"");
int tam;
char meuNome [18];
char escolha [3];
int resultado;
strcpy(meuNome, "Eduardo Vicentini");
printf("Meu nome é = %s \n \n", meuNome);
getch();

char nomeCurso[70]="Análise e Desenvolvimento de Sistemas";

printf("O nome do curso é = %s \n \n", nomeCurso);

char parteNomeCurso[7];

strncpy(parteNomeCurso, nomeCurso, 7);

parteNomeCurso[5]='\0';

printf("5 primeiras letras do nome do curso = %s \n \n", parteNomeCurso);

strcat(nomeCurso, " da FATEC Americana \n");

printf("O nome do curso é = %s \n \n", nomeCurso);

strncat(nomeCurso, meuNome, 7);

printf("O nome do curso é = %s \n \n", nomeCurso);

tam = strlen(meuNome);

printf("Meu nome tem %i caracteres\n", tam);

return 0;
}
