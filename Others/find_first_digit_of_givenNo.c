#include <stdio.h>
#include <math.h>

int main()
{
    int n, firstDigit, digits;

    /* Input a number from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    /* Total number of digits - 1 */
    digits = log10(n); 
    //printf("%d\n",digits);
    /* Find first digit */
    firstDigit = (n / pow(10, digits)); 

    printf("First digit = %d\n", firstDigit);

    return 0;
}