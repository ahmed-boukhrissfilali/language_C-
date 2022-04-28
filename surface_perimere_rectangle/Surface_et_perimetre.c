#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float L , l , S , P ;
    printf("veuillez entre longeurs :");
    scanf("%f",&L);
    printf("veuillez entre Largeurs :");
    scanf("%f",&l);
    S = L *l;
    P = (l +L) *2;
    printf(" rectangle information  \n surface  est : %.2f m \n perimetre : %.2f m ", S , P );
    float getch();
    return 0 ;
}