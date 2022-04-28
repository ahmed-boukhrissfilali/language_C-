#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
   long N , X;
   printf("veuillez entre le nombre :");
   scanf("%ld",&X);
   N=0;
    do {
        N= (N*10) + fmod(X,10);
        X=X/10;
    }while(X != 0 );
    printf("l\'inverse de se nombre est %d",N);
   return 0;

}