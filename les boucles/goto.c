#include <stdio.h>
#include <stdlib.h>

int main() {
    int x ;
    debut : 
        printf("veuillez entre un nombre entre 1 et 5 :");
        scanf("%d",&x);
    if (x  < 1 || x > 5) {
        goto debut ;
    }
    printf("bravoo ce nombre et entre  1 et 5");
    return 0;
}