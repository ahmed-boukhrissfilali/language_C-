#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int x ,y ,o;
    printf("veuillez entre un nomber :");
    scanf("%d",&x);
    y=0;
    o =x;

    
    do{ 
        y=  y*10 + fmod(x,10);
        x=x/10;
        
    }while( x != 0);
    if(y == o)
        printf("ce nombre et palindrome "); 
    
    else
        printf("ce nombre et n\'est pas un palindrome");
    return 0 ;

}