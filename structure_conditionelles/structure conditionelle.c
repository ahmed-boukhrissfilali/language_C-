#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float A,B ;
    printf("veuillez entre  les  deux valeurs  : ");
    scanf("%f %f",&A ,&B);

    if (B != 0) 
        printf("resultats est : %f", A/B);

    else 
        printf("la divison sur 0  est impossible :");
    
    return 0 ;
}