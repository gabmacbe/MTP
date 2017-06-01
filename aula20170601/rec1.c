#include <stdio.h>
#include <stdlib.h>
#define N 256

void imprime_invertido(char * frase){
if (*frase != '\0')
    imprime_invertido(frase + 1);
    printf ("%c" , *frase);

}

int main (){
    char frase [N];
    printf("Entre com uma frase: ");
    fgets (frase,N,stdin);
    imprime_invertido (frase);
return 0;
}
