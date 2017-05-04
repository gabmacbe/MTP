#include <stdio.h>

int main (){
    int vet[10], i , soma = 0 , produto = 1;
    printf("Escreva 10 números:\n");
    for (i = 0 ; i < 10 ; i++)
    scanf ("%d" , &vet[i]);
    for (i = 0 ; i < 0 ; i ++)
        soma = soma + vet [i];

    printf ("\nsomatorio = %d" , soma);

    for (i = 0 ; i < 10 ; i ++)
        produto = produto * vet [i];


     printf("\nprodutorio = %d" , produto);
return 0;
}
