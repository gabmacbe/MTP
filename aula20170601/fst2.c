#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct fracao{
int numerador;
int denominador;
};

void somar (struct fracao a , struct fracao b ){
int n = (a.numerador*b.denominador + b.numerador*a.denominador);
int d = a.denominador*b.denominador;
printf ("%d/%d", n , d);
}

int main (){
    struct fracao a , b , c;
    printf("Entre com o numerador da funcao 1:\n");
    scanf("%d" , &(a.numerador));
    printf("Entre com o denominador da funcao 1:\n ");
    scanf ("%d" , &(a.denominador));
    printf("Entre com o numerador da funcao 2:\n ");
    scanf("%d" , &(b.numerador));
    printf("Entre com o denominador da funcao 2:\n ");
    scanf("%d" , &(b.denominador));
    somar(a , b);


return 0;
}
