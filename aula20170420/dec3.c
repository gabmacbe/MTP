#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
int dado1 , dado2 , dado3, soma;
srand(time(0));
dado1 = rand()%7;
dado2 = rand()%7;
dado3 = rand()%7;
soma = dado1 + dado2 + dado3;
    if (soma == 7 || soma == 11)
     printf ("Voce ganhou!\n Dado1 : %d\n Dado2 : %d\n Dado 3 : %d\n Soma : %d" , dado1, dado2, dado3, soma);
     else
      printf ("Voce perdeu!\n Dado1 : %d\n Dado2 : %d\n Dado 3 : %d\n Soma : %d" , dado1, dado2, dado3, soma);

return 0;
}
