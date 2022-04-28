#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,Ui,U,Ui1,i;
    printf("veuillez entre le nombre :");
    scanf("%d",&n);
    Ui=0;
    Ui1=1;
    printf("U 1 = %d \n",Ui1);
    for(i=2;i<=n;i++){
        U=Ui+Ui1;
        Ui=Ui1;
        Ui1=U;
        printf("U %d = %d \n",i,U);
    }
     return 0;
}