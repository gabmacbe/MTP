#include<stdio.h>
#include<complex.h>

int main(){
    double complex A, B ,Z;
    double rA, rB, iA, iB;
    printf("Entre com a parte real de A ");
    scanf("%lf" , &rA);
    printf("Entre com a parte imaginaria de A ");
    scanf("%lf" , &iA);
    printf("Entre com a parte real de B ");
    scanf("%lf" , &rB);
    printf("Entre com a parte imaginaria de B ");
    scanf("%lf" , &iB);
    A = rA + I*iA;
    B = rB + I*iB;
    Z = A + B;
    printf("A soma e %lf + I*%lf\n" , creal(Z) , cimag (Z));
    printf("ou igual a %lf <%lf rad\n" , cabs (Z) , carg (Z));
    return 0;

}
