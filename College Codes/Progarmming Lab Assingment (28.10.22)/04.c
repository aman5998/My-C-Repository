/* Write a C program to convert Centimeter
into Meter and Kilometer */

#include <stdio.h>

int main()
{
    float cm, meter, km;
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);
    meter = cm / 100;
    km = cm / 100000;
    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km", km);
    return 0;
}