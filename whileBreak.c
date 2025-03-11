#include<stdio.h>
int main(){
int numero;
numero=1;

while( numero<=5){
    printf("%i\n", numero);
    if (numero==3){
        break;
        //continue;
        //return 0;
        //system ("pause");
        //system ("cls");
    }
    numero= numero+1;
    printf("Obrigado\n");
}
return 0;
}
