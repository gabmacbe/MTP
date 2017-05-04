#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(0));
    int maximo, N = 1000, vet [N] , i ;
    printf ("Entre com um numero inteiro entre 0 e 1000");
    scanf ("%d" , &N);
    for(i = 0 ; i < N ; i++)
        vet [i] = rand()%10;
    for (i = 0 ; i < N; i ++)
    {if (vet[i+1] >> vet[i])
    maximo = vet[i+1];}
    printf ("max = %d" , vet [i+1]);





return 0;
}
