#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a, b;
    printf("veuillez entre le a valeurs :");
    scanf("%d",&a);
    printf("veuillez entre la b valeurs :");
    scanf("%d",&b);
    a = a+b;
    b= a- b;
    a = a-b;
    printf("la valeur de a est :%d \nla valeur de b est : %d",a,b);
    return 0 ;
}