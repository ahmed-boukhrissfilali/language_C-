#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main() {
    float Xa , Xb, Ya,  Yb ,d ;
    printf("veuillez entre la valeur de X:");
    scanf("%f",&Xa);
    printf("veuillez entre la valeur de Xa:");
    scanf("%f",&Xb);
    printf("veuillez entre la valeur de Ya:");
    scanf("%f", &Ya);
    printf("veuillez entre la valeur de Yb:");
    scanf("%f ",&Yb);
    d=sqrt(pow((Xb -Xa),2) + pow((Yb -Ya),2));
    printf("la distance entre deux point est %f",d);
    return 0 ;
 }