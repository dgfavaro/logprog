//elaborar um programa em c utilizando o "for" para exibir numeros pares de 1 a 100 exibindo-os de 10 em 10
#include <stdio.h>
int main(){

int numero,par;
par=0;
for(numero=1;numero<=100;numero++){ //inicializa��o;condi��o;incremento
    if (numero%2==0){               //testar se numero � par
        par++;                          //se for par, incrementar +1 em "par"
        printf("%i\n",numero);          //mostrar numero par
        if(par%10==0){                  //testar se foram exibidos 10 numeros pares
           system("pause");                 //pausar programa depois de mostrar 10 pares
           system("cls");                   //limpar tela
        }
    }
}
return 0;
}
