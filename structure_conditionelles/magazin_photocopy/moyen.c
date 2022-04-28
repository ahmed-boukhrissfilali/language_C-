#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float x , y ,z , m;
    printf("veuillez les 3 notes : ");
    scanf("%f%f%f",&x,&y,&z);
    m = (x+y+z)/3;
    if (m < 10)
        printf("insuffisant");
    else if (m >=10 && m<12)
        printf("passable");
    else if (m >= 12 && m<14)
        printf("assez bien ");
    else if (m >= 14 && m<16)
        printf("bien");
    else 
        printf("tres bien ");
    return 0 ;


}