#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int A, B,ech , S ,P;
    printf("veuillez entre les deux donne numerique :");
    scanf("%d%d",&A,&B);
    if (A*B>0) {
        A = A +B; 
        B = A-B;
        A = A-B;

        printf("echange de contenus de deux nombres est : A = %d \n B = %d", A, B);
    }
    else {
            S=A+B;
            P=A*B;
            printf("la somme est  \n A+B =%d \n le produits est \n A*B = %d",S,P);
        }
    return 0 ;
}