#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    double width, heigh, perimeter, area;
    char *trash;
    heigh = strtod(argv[1], &trash);
    width = strtod(argv[2], &trash);
    perimeter = (heigh + width) * 2;
    area = heigh * width;
    printf("For an heigh of %.2f and a width of %.2f we have:\n\
    - a perimeter of %.2f and a area of %.2f.",heigh,width,perimeter,area);
}