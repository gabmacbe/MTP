#include <stdio.h>
#include <stdlib.h>

int primo(int numero) {
int i , p = 1;
for (i = 2 ; i <= numero/2 ; i++)
    if (numero % i == 0){
        p = 0;
        break;
   }
if (numero < 2) p = 0;
return p;
}

int main(){
    int numero, i;
    printf ("Entre com um numero: ");
    scanf ("%d", &numero);
    for (i = 2 ; i < numero ; i++)
        if (primo (i) && primo(numero - i))
           printf ("%d = %d + %d\n" , numero , i , numero - i);
    return 0;
}
