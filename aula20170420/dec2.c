#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

 int numero, x, resultado;
 srand(time(0));
 printf("Digite um número");
 scanf ("%d" , &numero);
 x = rand()%10;
 resultado = x + numero;
    if (resultado%2 == 0)
    printf("numero do usuario: %d, número sorteado: %d, resultado da soma par." numero, x );
    else
    printf("numero do usuario: %d, número sorteado: %d, resultado da soma impar." numero, x );

 return 0;
}
