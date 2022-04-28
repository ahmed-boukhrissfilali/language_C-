#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float X  ,Y , R ;
    printf("veuillez entre les  deux nombres :");
    scanf("%f%f",&X,&Y);
    R= pow(X , Y);
    printf("le resultats de deux nombre %.0f et %.0f est %.22f :", X,Y, R);
    return 0;

}
