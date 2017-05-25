#include <stdio.h>
#include <math.h>

int DELTA(int a , int b , int c){
   int valor = pow (b , 2) - 4*a*c;
   return valor;
}

void RAIZ (a , b , delta) {
if (delta == 0){
    int raiz1 = -b / 2 * a;
    printf("A unica raiz e %d" , raiz1);
}
if (delta > 0) {
    int raiz1 = (-b + sqrt(delta))/2.0 * a;
    int raiz2 = (-b - sqrt(delta))/2.0 * a;
    printf ("As duas raizes sao %d e %d" , raiz1 , raiz2);
}
if (delta < 0)
    printf ("A equacao nao tem raiz real");

}



int main(){
int a , b , c , delta;
printf("Entre com o valor a da equacao: ");
scanf ("%d" , &a);
printf("Entre com o valor a da equacao: ");
scanf ("%d" , &b);
printf("Entre com o valor a da equacao: ");
scanf ("%d" , &c);
delta = DELTA (a, b, c);
RAIZ (a , b , delta);
return 0;
}
