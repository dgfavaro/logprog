#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

//Sortear 10 numeros aleatorios e dizer qual deles são pares ou impares em formato de tabela

int main(){

int i,qp,qi;
int numero[9],par[qp],impar[qi]; //qp = quantidade de pares
qp=0;
qi=0;

srand(time(NULL));

for(i=0;i<=9;i++){
    numero[i]=rand()%100;
    printf("%i ",numero[i]);

}
printf("\n\n");
for(i=0;i<=9;i++){
    if(numero[i]%2==0){
        par[qp]=numero[i];
        printf("%i\n",par[qp]);
        qp++;
    }
    if (numero[i]%2!=0){
        impar[qi]=numero[i];
        printf("\t%i\n",impar[qi]);
        qi++;
    }
}
printf("\n");
return 0;
}
