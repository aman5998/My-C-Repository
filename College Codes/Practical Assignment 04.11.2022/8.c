// 8. Write a program in C to print the range of an input.

#include <stdio.h>

int main()
{
    int n, lower, upper;

    printf("Enter a number: ");
    scanf("%d", &n);

    lower = (n / 10) * 10;
    upper = lower + 10;

    printf("Range is %d - %d", lower, upper);

    return 0;
}