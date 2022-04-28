#include <stdio.h>
#include <stdlib.h>

int main () {
    int x ;
    printf("veuillez entre un nombre entre 10 et 20 :");
    scanf("%d",&x);
    while (x<10 || x>20 ){
        if(x<10)
            printf("ce nombre et petite");
        else 
            printf("ce nombre et plus grand "); 
        printf("veuillez entre un nombre entre 10 et 20 :");
        scanf("%d",&x);
    }
    printf("bravoo ce nombre et entre 10  et 20");
    return 0 ;
}