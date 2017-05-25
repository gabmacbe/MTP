#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteia(int a){
int num = rand()%10;
if (num == a)
    printf ("Parabens! O resultado do sorteio foi: %d \n" , num);
else
    printf ("Sinto muito, o resultado do sorteio foi: %d \n" , num);
}

int main(){
int n , i = 0;
srand (time (NULL));
printf ("Entre com um numero inteiro entre 1 e 10 \n");
scanf("%d" , &n);
for (i = 0 ; i < 10 ; i++)
sorteia(n);





return 0;
}
