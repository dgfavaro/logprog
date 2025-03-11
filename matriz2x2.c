#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>

//Mostrar numeros de 1 a 100 em uma tabela 10x10
int main(){

for(int x=1;x<=100;x++){
    printf("%d ",x);
    if (x<10)
        printf(" ");
    if (x%10==0)
        printf("\n");
}

return 0;
}
