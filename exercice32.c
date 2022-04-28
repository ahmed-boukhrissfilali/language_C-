#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,i,Ui,U;
    printf("veuillez entre le nombre :");
    scanf("%d",&n);
    Ui=6;
    for(i=0;i<n;i++){
        U=Ui*4 + 10;
        Ui=U;
    }
    printf("U %d = %d",n,U);
    return 0 ;

}