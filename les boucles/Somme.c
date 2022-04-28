#include <stdio.h>
#include <stdlib.h>

int main (){
    int x , S ;
    S = 0;
   /* for ( int i = 1 ;i<=20;i++ ){
        printf("veuillez entre %d valeur : ",i);
        scanf("%d",&x);
        S = S + x ;
    }
    printf("la somme de c\' est nombre est : %d",S);
    return 0 ;*/
    printf("veuillez entre une valeur :");
    scanf("%d",&x);
    S =0;
    for (int i = 0; i<=x;i++){
        S = i +S;


    }

    printf("la somme est %d",S);
    return 0 ;

    
}