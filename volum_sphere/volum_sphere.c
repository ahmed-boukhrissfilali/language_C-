#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float R ,V ;
    const float Pi = 22/7;
    printf("veuillez entre le reyon du sphere :");
    scanf("%f" ,&R);
    V =(4 *Pi * pow(R,3)) /3;
    printf("le volum  de sphere est %.2f :" , V);
    return 0 ;
}