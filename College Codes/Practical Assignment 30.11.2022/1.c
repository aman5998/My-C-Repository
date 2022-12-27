// 1. Write a program to convert a decimal number to binary.

#include <stdio.h>

int main()
{
    int num, rem, bin = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 2;
        bin = bin + rem * base;
        num = num / 2;
        base = base * 10;
    }

    printf("Binary Equivalent is %d", bin);
    
    return 0;
}