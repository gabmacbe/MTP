#include <stdio.h>
#include <stdlib.h>




void iguais(A , B){
    int i , j;
    for (i = 0 ; i <= sizeof(A)/sizeof(int) ; i++);
     { for (j = 0 ; j <= sizeof(B)/sizeof(int) ; i ++);
        {     if (A[i] = B[j])
                printf("%d " , A[i]); } }


}
int main (){
int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
int n = sizeof(A)/sizeof(int);
int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
int m = sizeof(B)/sizeof(int));
iguais (A , B);


return 0;
}
