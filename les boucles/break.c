#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,i,S ;
    S = 0;
     for ( i = 0; i < 8; i++)
    {
        printf("veuillez entre %d valeur :",i);
        scanf("%d",&x);
        if (x < 0)
            continue;;
        S = x + S; 
    }
    printf("la sommes de c\' nombre est  : %d",S);
    return 0 ;

    
}