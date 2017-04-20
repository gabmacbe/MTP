#include <stdio.h>

int main (){
    int base, potencia,  i;
    printf("Insira a base");
    scanf("%d" , &base);
    printf("Insira a potencia");
    scanf ("%d" , &potencia);
    for (i = 1; i < potencia; i++)
     base = base * base;
    printf ("%d" , base);



return 0;
}
