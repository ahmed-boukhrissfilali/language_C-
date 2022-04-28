#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
    int N,S,nb,S1,S2;
    float T;
    char c;

    /* la Somme 
    S = Somme 
    S1 = nombre 1
    S2 = nombre 2 
    */ 
    nb=0;
    debut :
    printf("--------------------------------------------------------------- \n");
    printf("                             Calculatruss                        \n");
    printf("--------------------------------------------------------------- \n");
    printf("  bonjour ! veuillez entre le nombre de numero de operation     \n");
    printf
    ("1 : Addition \n 2 : soustraction  \n 3 : multiplication  \n 4 : division  \n 5 : rest de la divison \n 6 : puissance \n");
    scanf("%d",&N);
   switch (N) {
        case 1 : printf("vous avez choisir la somme ");
                printf("veuillez entre les 1 nombre :");
                scanf("%d", &S1);
                 printf("veuillez entre les 2 nombre :");
                 scanf("%d",&S2 );
                 S = S1 + S2;
                printf("la addition  de %d + %d = %d  \n",S1,S2,S);
                 printf("vous pouver surment  continuer avec un autre operation click sur O ou quitte N  ");
                scanf("%c",&c);
                if(c == 'O')
                    goto debut;
                break;
        case 2 : 
                printf("veuillez entre les premier  nombre :");
                scanf("%d",&S1);
                printf("veuillez entre les deux nombre :");
                scanf("%d",&S2 );
                S=S1-S2;
                printf("la soustraction  de deux nombre est  %d  - %d = %d  \n",S1 ,S2 , S);
                printf("vous pouver surment  continuer avec un autre operation click sur O ou quitte N  ");
                scanf("%c",&c);
                if(c == 'O')
                    goto debut;
                break;
        case 3 : 
                printf("veuillez entre le premier  nombre :");
                scanf("%d",&S1);
                printf("veuillez entre les deux nombre :");
                scanf("%d",&S2 );
                S=S1*S2;
                printf("la multiplication  de deux nombre est  %d * %d = %d  \n",S1 ,S2 , S);
                printf("vous pouver surment  continuer avec un autre operation click sur O ou quitte N  ");
                scanf(" %C",&c);
                if(c = 'O')
                    goto debut;
                break;
         case 4 : 
                printf("veuillez entre le premier  nombre :");
                scanf("%d",&S1);
                printf("veuillez entre les deux nombre :");
                scanf("%d",&S2 );
                S=S1/S2;
                printf("la divsion   de deux nombre est  %d / %d = %d  \n",S1 ,S2 , S);
                printf("vous pouver surment  continuer avec un autre operation click sur O ou quitte N  ");
                scanf(" %C",&c);
                if(c = 'O')
                    goto debut;
                break;
        case 5 : 
                printf("veuillez entre le premier  nombre :");
                scanf("%d",&S1);
                printf("veuillez entre les deux nombre :");
                scanf("%d",&S2 );
                T=S1%S2;
                printf("la rest de la division    de deux nombre est  %d  /%d = %.2f  \n",S1 ,S2 , T);
                 printf("vous pouver surment  continuer avec un autre operation click sur O ou quitte N  ");
                scanf(" %C",&c);
                if(c !='O')
                    break;
                goto debut;
                
        case 6 : 
                printf("veuillez entre le premier  nombre :");
                scanf("%d",&S1);
                printf("veuillez entre les deux nombre :");
                scanf("%d",&S2 );
                S=pow(S1,S2);
                printf("la puisance     de deux nombre est  %d^%d = %d  \n",S1 ,S2 , S);
                printf("vous pouver surment  continuer avec un autre operation click sur O ou quitte N  ");
                scanf(" %C",&c);
                if(c='O')
                    goto debut;
                break;
            default : printf("le nomber que tu a saissir est uncorecte veuillez essayer \n ");
                goto debut;
            
   }

   
   
}