#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x;
    printf("veuillez entre votre age :");
    scanf("%d",&x);
    if (x>=6 && x<=7)
         printf("poussin");
    else if (x >=8 && x <=9) 
        printf("pupile ");
    else if(x >=10 && x <=11) 
        printf("vous etre  mineurs");
    else 
        printf("vous etre catet");
     return 0 ;

    
}