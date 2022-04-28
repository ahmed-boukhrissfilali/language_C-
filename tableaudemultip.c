#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x, y, i,z;
    printf("x*y | ");

    for(i=1;i<=10;i++){
        if(i>=10)
            printf(" %d ",i);
        else
            printf(" 0%d ",i);

        
    }
    printf("\n");
    for(i=1;i<=18;i++){
        printf("--");
    }
    printf("\n");
    for(i=1;i<=10;i++){
         if(i>=10)
            printf(" %d ",i);
        else
            printf(" 0%d |",i);
        
        for(y=1;y<=10;y++){
            z=i*y;
            if(z<10)
            printf(" 0%d  ",z);
        else
            printf(" %d",z);
        
        }
        printf("\n"); 
    }
    
    printf("\n");
    



   

}