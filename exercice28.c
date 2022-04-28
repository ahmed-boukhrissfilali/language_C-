#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int x,i,s;
    char y;
    debut :
    printf("veuillez entre un le factoriel : ");
    scanf("%d",&x);
    s=1;
    if (x>0){
        for(i=1;i<=x;i++){
            s=s*i;
        }
        printf("le factoruel de ce nombre %d ! est : %d ",x,s);
    }
    else if(x<0)
        goto debut;
    
    else 
        printf("le factoruel de ce nombre %d ! est : 0",x);

}