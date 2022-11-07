#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the celsius degree = ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f degree celsius = %.2f degree fahrenheit", celsius, fahrenheit);
    return 0;
}