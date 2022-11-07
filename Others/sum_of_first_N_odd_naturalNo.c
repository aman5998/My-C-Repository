// Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0, even;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i * 2 - 1;
    }
    printf("%d\n", sum);
    return 0;
}