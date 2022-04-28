#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int N , i , estPremier ;
    printf("veuillez entre un nombre :");
    scanf("%d",&N);
    estPremier=1;
    for(i=2;i<=N/2;i++){
        if(N%i==0){
            estPremier=0;
            break;
        }
    }
    if(estPremier==1)
        printf("ce nombre et premier");
    else
        printf("ce nombre et non premier");
    return 0 ;
}