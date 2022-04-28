#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int age , annes , acourant ;
    printf("veuillez entre   l\'annes courants : ");
    scanf("%d",&acourant);
    printf("veuillez entre  l \'annes de naissane :");
    scanf("%d",&annes);
    age = acourant-annes;
    printf("votre age est %.2d ans ",age);
    return 0 ;
}