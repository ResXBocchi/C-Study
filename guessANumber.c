#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int randomNumber = rand() % 21;
    printf("%d\n",randomNumber);
    int guess;
    while(guess != randomNumber){
        printf("Insira um numero de 1 a 20\n");
        scanf("%d",&guess);
        if(0 < guess && 21 > guess){
        
            if (guess != randomNumber){
                printf("Tente novamente.\n");
            }
            else{
                printf("Parabens!\n");
            }
        }
        else{
            printf("Voce inseriu um numero fora do intervalo indicado\n");
        }
    }
}