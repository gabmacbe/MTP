#include <stdio.h>



int main(){
    float lado, area;
    printf("Digite o lado do quadrado para o calculo da area: ");
    scanf("&f", &lado);
    area = lado * lado;
    printf ("A area do quadrado e : %f" , area);

    return 0;
}
