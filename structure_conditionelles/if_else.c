#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float X ;
    printf("veuillez entre la temperature de l\'eau pour affichier etat :");
    scanf("%f",&X);
    if (X<0) {
        printf("la temperature est Glace");
    }
    else {
        if (X >=100) {
            printf("la temperature est  vapeur ");
        }
        else {
            printf("la temperature et liquide ");
        }
    }
     return 0 ;
}
