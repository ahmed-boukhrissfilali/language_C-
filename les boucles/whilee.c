#include <stdio.h>
#include <stdlib.h>

int main() {
    int  x ;
    printf("veuillez entre une valeur entre 10 et 20 :");
    scanf("%d",&x);
    while (x < 10 || x > 20)
    {
        if(x < 10)
            printf("le nombre et plus petite veuillez esayer : \n");
        else 
            printf("le nmbre et plus grand veuillez essyer : \n");
        
    }
    printf("bravoo ce nombre et entre 10 et 20" );
    return 0 ;
    
}