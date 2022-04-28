#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A, h , m1, m ,s;
     /* valeur donne par utilisateur en seconds */
    
    /*  h=> heurs
        M => minutes 
        S => seconds 
    */
    printf("veuillez entre la valeur au seconds :");
    scanf("%d",&A);
    h = A / 3600;
    m = A % 3600;
    m1 = m / 60;
    s = m1 % 60 ;
    printf("la coversion de cette valeurs %d est %d herus et %d minuts et %.0d seconds " ,A ,h ,m1,s);
    return 0 ;
}