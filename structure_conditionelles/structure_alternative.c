#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main() {
     float X ,Y ,Max , min;
     printf("veuillez entre les deux nombre a et b :");
     scanf("%f %f ",&X,&Y);
     if (X >= Y) {
         Max = X;
     };
     Max = Y;
     printf("le maximum de ce deux nombre et %.0f " , Max);
     return 0 ;
 }