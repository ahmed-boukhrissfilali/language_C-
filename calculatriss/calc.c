#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float X ,Y ,S , Dv , D , P ;
    printf("veuillez entre les deux nombre :");
    scanf("%f %f ",&X,&Y);
    S = X +Y; /* la Somme */
    D = X -Y; /* Differonts */
    Dv = X /Y ; /*Divison */
    P = X *Y; /*Produits*/
    printf("la somme : %.2f \n la deffirents : %.2f \n  Divison : %.2f \n Produits : %.2f ",S ,D,Dv,P); 
    
    return 0;
}