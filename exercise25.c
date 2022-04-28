#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,i;
    printf("veuilles entre le nombre :");
    scanf("%d",&x);
    i=0;
    do{
        printf("%d\n",i);
        i++;
    }while( i<x+10);
    return 0 ;
}
