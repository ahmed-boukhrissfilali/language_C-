#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int X ;
    printf("veuillez entre le nombre :");
    scanf("%d" , &X);
    if ( X >0 ) {
        printf("se nombre et possitive ");

    }
    else {
        if( X < 0) {
        printf("se nombre et negative ");
    }
    else{
        printf("se nombre et neutre ");
    }
    }
    return 0 ;
}
