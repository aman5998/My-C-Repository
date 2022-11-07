#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter the fahrenheit degree = ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32)*5/9;
    printf("%.2f degree fahrenheit = %.2f degree celsius",fahrenheit,celsius);
    return 0;
}