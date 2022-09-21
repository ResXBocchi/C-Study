#include <stdio.h>

int main(){
    int primes[50];
    primes[0]=2;
    primes[1]=3;
    int outtercounter = 0;
    for(outtercounter = 5; outtercounter<100; outtercounter+=2){
        for(int counter = 0; counter <= sizeof(primes)/sizeof(int); ++counter){
            printf("what");
            if (outtercounter%primes[counter] == 0){
                continue;
            }else{
                printf("%d",outtercounter);
                if (counter == sizeof(primes)/sizeof(int) -1){
                    primes[sizeof(primes)/sizeof(int)]=outtercounter;
                }
            }
        }
    }
    for(int counter=0;counter <= sizeof(primes)/sizeof(int)-1;++counter){
        printf("%d ",primes[counter]);
        printf("whats");
    }

}