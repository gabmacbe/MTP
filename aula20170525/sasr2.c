#include <stdio.h>
int i;
void pares(int a){
for (i = 0 ; i < a; i++){
if (i%2 == 0)
    printf("%d " , i);
  }
}
void impares(int a){
for (i = 0 ; i < a; i++){
if (i%2 != 0)
    printf("%d " , i);
  }
}


int main (){
int num;
printf("Entre comum numero maximo");
scanf("%d" , &num);
pares(num);
printf("\n");
impares(num);
return 0;
}
