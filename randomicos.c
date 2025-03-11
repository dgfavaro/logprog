#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main (){
int i;
srand(time(NULL));
for(i=1;i<=5;i++){
    printf("%i ", rand()%5);
}
getch ();
return 0;
}
