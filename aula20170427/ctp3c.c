#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256
int main(){
    int i, cont = 0;
    char frase[NCHAR], letra;
    printf("Digite uma frase\n");
    fgets(frase,NCHAR,stdin);
    for (i=0 ; frase [i] != '\0' ; i ++)
         letra = isalpha(frase [i]);

    if (frase [i] == letra)
   {for (i=0 ; frase [i] != '\0' ; i ++)
         cont++;

}
printf("A frase tem %d letras", cont);
return EXIT_SUCCESS;
}
