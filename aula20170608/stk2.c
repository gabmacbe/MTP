#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 5

void preenche(float vet[]){
int i;
for (i = 0 ; i < N ; i ++) {
    printf("\nElemento %d:", i);
    scanf("%f" , &vet[i]);
    printf("\n");
    }
}
float media(float vet[]){
int i;
float cont = 0;
for (i = 0 ; i < N ; i ++){
    cont = cont + vet [i];
}
    return cont / N;

}

float calcula_o_desvio (float vet []){
int i;
float somatorio = 0;
float m = media(vet);
for (i = 0 ; i < N ; i ++){
    somatorio = somatorio + pow((vet [i] - m) , 2);
    //printf("%f\n" , somatorio);
}
    somatorio = somatorio / (N-1);
    return sqrt (somatorio);

    }

int main (){
  float vet [N] , m , desvio;
  printf ("Entre com 5 numeros:");
  preenche(vet);
  m = media(vet);
  desvio = calcula_o_desvio (vet);
  printf("Media: %f , Desvio Padrao: %f" , m , desvio);

return 0;
}
