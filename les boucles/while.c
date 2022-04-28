#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y,i;
    printf("veuillez entre le premier valeur :");
    scanf("%d",&x);
    // *while ( x <0 || x <10)
    // {
    //     printf("veuillez entre le premier valeur :");
    // scanf("%d",&x);
        
    //* }
    i =0 ;
    while (  i < 10  && x>0 )
    {
        printf(" %d X %x = %d \n",i,x , i *x);
        i = i+ 1;

    }
    return 0 ;
    
}