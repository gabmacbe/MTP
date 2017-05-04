#include <stdio.h>

int main (){
    int vet[10], i , j , aux[10] = {0 ,0 , 0 , 0 ,0 ,0 ,0 ,0 ,0 ,0};
    printf("Escreva uma sequencia de 10 números:\n");
    for (i = 0 ; i < 10 ; i++)
    scanf ("%d" , &vet[i]);
    for (i = 0 ; i < 10 ; i++)
      for (j = 9 ; j >= 0 ; j--)
         aux[j] = vet[i];
    for (i = 0 ; i < 10 ; i ++)
        printf ("%d" , aux[i]);


return 0;
}
