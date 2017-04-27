#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float X1 , Y1 , X2 , Y2, distancia ;
    printf("Entre com a coordenada x de P1 ");
    scanf ("%f" , &X1);
    printf("Entre com a coordenada y de P1 ");
    scanf ("%f" , &Y1);
    printf("Entre com a coordenada x de P2 ");
    scanf ("%f" , &X2);
    printf("Entre com a coordenada y de P2 ");
    scanf ("%f" , &Y2);
    distancia = sqrt(pow(X2-X1,2)+ pow(Y2-Y1,2));
    printf("a resposta eh %f" , distancia);

return EXIT_SUCCESS;
}
