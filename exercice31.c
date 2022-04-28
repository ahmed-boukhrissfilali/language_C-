
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int nomb;
    float Pa,Pck;
    Pck = 1000000;
    Pa = 500000;
    nomb = 0;
    while(Pa<Pck){
        Pck += 50000;
        Pa += Pa*0.08;
        nomb++;
    }
    printf("agadir depasse marakech apres %d",nomb);
    return 0;

    
}