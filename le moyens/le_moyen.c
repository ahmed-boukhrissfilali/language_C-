#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a,b,c,d,e,f,M,s ;
    printf("veuillez entre les 5 nombre : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    s=a +b +c +d +e;
    M = s /5;
    printf("la somme  de c\'est 5 nombres est : %f \n" ,s);
    printf("le moiyen de c\' est 5 nombre est %.2f",M);
    return 0;
}