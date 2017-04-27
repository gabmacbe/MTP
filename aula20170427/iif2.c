#include <stdio.h>
#include <math.h>

int main(){
int num, i;
float resultado_float = 0;
double resultado_double = 0;
printf ("Insira um numero: ");
scanf ("%d" , &num);

for (i = 0 ; i < 728 ; i ++){
    resultado_float = 1/num + resultado_float;
    resultado_double = 1/num + resultado_double;
}

printf("\nfloat = %f , double = %lf ", resultado_float , resultado_double);


return 0;
}
