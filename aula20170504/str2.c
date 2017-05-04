#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NCHAR 256
int main (){
    char frase [NCHAR], mensagem [NCHAR];
    int j , i;
    printf("Escreva uma frase");
    fgets (frase , NCHAR , stdin);
    for (j = 0 ; j != "\0" ; j++){
       for (i = 0 ; i != "\0" ; i ++){}
          if (frase [i] == " ")
    mensagem [j] = frase [i + 1];
    }
}
     printf("A mensagem oculta e:");
     for (i = 0 ; i != "\0" ; i ++)
        printf("%s " ,  mensagem );


return 0;
}
