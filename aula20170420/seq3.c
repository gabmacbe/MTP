#include <stdio.h>


int main(){
    float A , B , C , D , E, media;

    printf("Digite as notas A:");
    scanf("%f", &A);
    printf("Digite as notas B:");
    scanf("%f", &B);
    printf("Digite as notas C:");
    scanf("%f", &C);
    printf("Digite as notas D:");
    scanf("%f", &D);
    printf("Digite as notas E:");
    scanf("%f", &E);
    media = (2*A + 2*B + 2*C + 3*D + 5*D)/14;
    if ((A || B || C || D || E) > 10 || (A || B || C || D || E) < 0)
    printf ("As notas vão de 0 a 10!");
    else
    printf ("A media ponderada e igua a: %f" , media);


return 0;
}
