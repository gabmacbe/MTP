#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NCHAR 256

int main (){
   int i;
   char frase [NCHAR];
   printf ("Entre com uma frase:");
   fgets (frase, NCHAR , stdin);
   frase[strlen (frase) - 1] = '\0';
   for (i = 0 ; i < NCHAR ; i++)
    frase[i]= toupper (frase [i]);
   printf("Tamanho da string: %u\n" , strlen(frase));
   if(strcmp(frase,"BOM DIA",7) == 0)
    printf("Bom dia para voce tambem!\n");
   else
    printf("Voce quer dizer: \"%s?\" \n" , frase);
   return 0 ;
}
