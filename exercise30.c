#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int M,T,i,j;
    printf("veuillez entre  l\'age  :");
    scanf("%d",&M);
    j=0;
    for(i=1;i<=M;i++){
        j=(i*3)+j;
    }
    T=(M*500)+j;
    printf(" le totale est : %d  MAD ",T);
    return 0;
}