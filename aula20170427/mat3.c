#include <stdio.h>
#include <math.h>

int main (){
float n , b ,logaritmo;
printf("Entre com um número para o calculo do logaritmo: ");
scanf ("%f" , &n);
printf("\nAgora, entre com a base para o calculo: ");
scanf ("%f" , &b);
logaritmo = (log10(n))/(log10(b));
printf ("\nO logaritmo de %f na base %f tem o valor igual a: %f " , n , b , logaritmo);

return 0;
}
