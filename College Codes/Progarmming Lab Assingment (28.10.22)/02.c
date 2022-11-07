/* Write a C program to perform Fahrenheit
 to Celsius Temperature Conversion. */

#include <stdio.h>

int main()
{
    float fahr, cel;
    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%f", &fahr);
    cel = (fahr - 32) * 5 /9 ;
    printf("%.1f Fahrenheit = %.1f Celsius", fahr, cel);
    return 0;
}