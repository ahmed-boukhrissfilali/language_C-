#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A,B ,C ;
    printf("veuillez entre le premier nombre : ");
    scanf("%d",&A);
    printf("veuillez entre le deuxiem nombre : ");
    scanf("%d",&B);
    C = A;
    A = B;
    B = C;1
    printf("le variable A = %d  \n B = %d" , A, B);
    return 0;
}
