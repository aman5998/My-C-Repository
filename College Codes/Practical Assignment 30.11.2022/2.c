// 2. Write a program to convert a binary number to decimal.

#include <stdio.h>

int main()
{
    int num, rem, dec = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        dec = dec + (rem * base);
        base = base * 2;
    }

    printf("Decimal Equivalent is %d", dec);

    return 0;
}