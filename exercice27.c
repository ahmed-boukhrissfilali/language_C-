#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N,S,i;
    printf("veuillez entre le nombre :");
    scanf("%d",&N);
    S=0;
    for(i=0;i<=N;i++){
        S=pow(10,i);
    }
    printf("le resultas est %d",S);
    return 0;
}