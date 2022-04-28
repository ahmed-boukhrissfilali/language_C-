#include <stdio.h>
#include <stdlib.h>

int main(){
    int x ,i;
    printf("veuillez entre un nombre :");
    scanf("%d",&x);
    do {
        printf("veuillez entre le nombre ");
        scanf("%d",&x);
    }while(x < 0 ||  x<10 );
    
    for (i = 0; i < 10 ; i++){
        printf(" %d X %d = %d \n ", x ,i ,i*x);
        
    }
    return 0 ;
    
}