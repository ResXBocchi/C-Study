#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int minutes = atoi(argv[1]);
    int minutesInYear = 365 * 24 * 60;
    double days,years;
    years = minutes/minutesInYear;
    days = (double)((minutes%minutesInYear)/24)/60;
    printf("%d minutos correspondem a %lf years and %lf days.",minutes,years,days);
    }