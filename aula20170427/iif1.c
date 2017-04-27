#include <stdio.h>
#include <time.h>

int main (){
    srand (time(0));
    int i , cont = 0;
    float n, prob;
    printf("Entre com a probabilidade: ");
    scanf ("%f" , &prob);
    for (i = 0 ; i < 100 ; i++){
        n = rand()/(float)RAND_MAX;
        if (n < prob)
        cont++;
    }
printf("Querido usuario, sao %d vezes." cont);

return 0;
}
