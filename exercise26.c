#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int x;
    float S,i;
    printf("veuillez entre un nombre :");
    scanf("%d",&x);
    S=0;
    i=1;
    while(i<=x){
        S=1/i+S;
        i++;
    }
    printf("la somme est %f",S);
    return 0;
    
}