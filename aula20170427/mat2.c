#include <stdio.h>
#include <math.h>

int main(){
    float lado1 , lado2 , rad , resposta;
    printf("Entre com o valor do lado 1 ");
    scanf ("%f" , &lado1);
    printf("Entre com o valor do lado 2 ");
    scanf ("%f" , &lado2);
    printf("Entre com o valor do angulo (em radianos) ");
    scanf ("%f" , &rad);
    resposta = sqrt(pow(lado1,2)+ pow(lado2,2) - 2*lado1*lado2*cos(rad));
    printf("a resposta é %f" , resposta);


return 0;
}
