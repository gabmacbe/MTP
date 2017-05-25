#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado (){
int valor = rand()%6 + 1;
return valor;
}


int main(){
int i , v1 , v2 , v3 , v4 ,v5 , resultado;
srand (time(NULL));
int cont = 0;
while (cont < 3) {
v1 = dado();

v2 = dado();

v3 = dado();

v4 = dado();

v5 = dado();
resultado = v1 + v2 + v3 + v4 + v5;
if(resultado >= 18 && resultado <= 23)
    printf ("Voce Ganhou! Resultado = %d \n" , resultado);
else
    printf ("Voce perdeu! Resultado = %d \n" , resultado);
cont++;
}


    return 0;
}
