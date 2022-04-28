#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    float A , B ;
    printf("veuillez entre le premier nombre :");
    scanf("%f",&A);
    printf("veuillez entre le deuxieme nombre :");
    scanf("%f",&B);
    if (A*B>0)
        printf("c\'est nombre et possitive :");
    else 
        printf("c\'est nombre et negative ");
    
    return 0;
}