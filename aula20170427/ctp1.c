#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define NCHAR 256


int main(){
    int i;
    char frase[NCHAR];
    printf("Digite uma frase");
    fgets(frase,NCHAR,stdin);
    for (i=0 ; frase [i] != '\0' ; i ++)
    frase[i] = tolower(frase [i]);
    printf("A frase em minúsculas: \n%s", frase);

return 0;
}
