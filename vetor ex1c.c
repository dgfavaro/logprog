#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main(){

int vendas[9];
int i;
float soma, media;
soma=0;

srand(time(NULL));

for(i=0;i<=9;i++){               //o i vale 0 porque o primeiro valor do vetor é no endereço 0, não começa do um
    vendas[i]=rand()%100;
    printf("%i ",vendas[i]);
    soma=soma+vendas[i];
}
printf("\nsoma = %.0f",soma);
media = (soma)/10;
printf("\nmedia = %.2f", media);

for(i=0;i<=9;i++){
        if(vendas[i]>= media){
                printf("\n%i ", vendas[i]);
        }
}
return 0;
}
