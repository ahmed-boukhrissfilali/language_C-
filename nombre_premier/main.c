#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int N , i , Premier;
    printf("veuillez entre un nombre :");
    scanf("%d",&N);
    Premier=1;
    for(i=2;i<=N/2;i++){
        if(N%i==0){
            Premier=0;
            break;
        }
    }
    if(Premier ==1)
        printf("ce nombre et premier ");
    else
        printf("ce nombre et  non  poremier");
    return 0 ;

}
