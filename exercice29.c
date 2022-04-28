#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(){
    int x,i,j,z;
    printf("veuilllez entre un nombre :");
    scanf("%d",&x);
    z=1;
    j=0;
    for(i=1;i<=x;++i){
        j=pow(z,2)+j;
        printf("%d-",z);
        z=z+2;

    }
    printf(" le resulatas %d",j);
    return 0 ;
    
}