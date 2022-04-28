#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x , y;
    printf("veuillez entre une valeur :");
    scanf("%d",&x);
    for (int i = 0 ; i < 10 ; ++i)
    {
        printf(" %d X %i= %d \n",x , i,i*x);
    }
    return 0 ;
}

