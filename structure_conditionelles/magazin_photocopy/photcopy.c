#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int Nb ;
    float T ;

    printf("veuillez entre  le totale :");
    scanf("%d",&Nb);

   if (Nb <= 10) 
       T = Nb*0.30;
   else if (Nb<=30) 
       T=(10*0.30)+((Nb-10)*0.25);
   else 
       T=(10*0.30)+(20*0.25)+((Nb-30)*0.2);
   printf("le totale est %.2f",T);
   return 0 ;
}

