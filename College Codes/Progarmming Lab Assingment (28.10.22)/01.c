/* Write a C program to perform Celsius
to Fahrenheit Temperature Conversion. */

#include <stdio.h>

int main()
{
    float cel, fahr;
    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &cel);
    fahr = (cel * 9 / 5) + 32;
    printf("%.1f Celsius = %.1f Fahrenheit", cel, fahr);
    return 0;
}