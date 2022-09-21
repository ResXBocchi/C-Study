#include <stdio.h>
#include <stdlib.h>

int main(){

    float workedHours;
    float taxes;
    printf("Insert your working hours of this week.\n");
    scanf("%f",&workedHours);
    float basicHourlyPayRate = 12.00;
    float pay = basicHourlyPayRate * workedHours;
    if (workedHours > 40){
        pay = basicHourlyPayRate * 40;
        pay += (workedHours - 40) * (basicHourlyPayRate*1.5);
    }
    printf("Your total pay is %.2f\n",pay);
    printf("Now lets honor some taxes.\n");
    if (pay <= 300){
        pay -= pay*0.15;   
    }
    else if (pay > 300 && pay <= 450){
        taxes += 300*0.15;
        taxes += (pay-300)*0.2;
        pay -= taxes;
    }
    else {
        taxes += 300 * 0.15;
        taxes += 150 * 0.2;
        taxes += (pay-450)*0.25;
        pay -= taxes;       
    }
    printf("%.2f",pay);

    return 0;
}