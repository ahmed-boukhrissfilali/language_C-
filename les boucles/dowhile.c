#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,i,g ;
    do {
        printf("veuillez entre un nombre superieur a 1 :");
        scanf("%d",&x);

    }while (x<1);
    i = 0;
    g=0;
    while(i<=x){
        g=i+g;
        i++;
    }
    printf("la somme est %d",g);
}