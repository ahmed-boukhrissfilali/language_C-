#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Nb,x,i,B;
    const int max=30 , min=1;
    srand(time(NULL));
    Nb = (rand() % ((max - min + 1) + min));
    B=0;
    i=0;
    debut:
    do{
        printf("veuillez entre un nombre entre 1 et 30 vous avez %d atentative  :",i);
        scanf("%d",&x);
        if(x == Nb){
            B=1;
            break;
        }
        else 
            if(x <=Nb){
                B=0;
                break;
            }
            else{
                B=0;
                break;
            }   
        if (i>5){
            printf("vous aves depasse 5 essai le nombre aleratoire est %d",Nb);
            break;
        }
        i++;
    }while(i<=5);
    
    if ( B == 1 && x==Nb){
        printf("bravo vous avez trouve le nombre %d en essai %d",Nb,i);
        goto debut;
    }  
    else 
        if(B == 0 && x>=Nb){
            printf("le nombre plus grand ! \n");
            goto debut;
        }      
        else (B == 0 && x<=Nb);
            printf("le nombre plus petite !\n");
            goto debut; 
        

        

   
    return 0 ;

}