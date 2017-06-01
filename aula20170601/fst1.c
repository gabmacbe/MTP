#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Divisao{
 int quociente , resto;
};
struct Divisao Dividir (int a, int b){
  struct Divisao resposta;
  resposta.quociente = a/b;
  resposta.resto = a%b;
  return resposta;

};
int main (){
 int dividendo , divisor , resposta;
 printf ("Entre com o dividendo: \n");
 scanf("%d" , &dividendo);
 printf("Entre com o divisor: ");
 scanf("%d" , &divisor);
 resposta = dividir(dividendo , divisor);
 printf("Resposta : %d com resto %d\n" , resposta.quociente , resposta.resto);


return 0;
}
