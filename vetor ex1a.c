#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(){
int vendas[10];
int i;
srand(time(NULL));
for(i=1;i<=10;i++){
    vendas[i]=rand()%100;
    printf("%i ",vendas[i]);
}
return 0;
}
