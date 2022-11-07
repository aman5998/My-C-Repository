// Write a program to calculate sum of first N even natural numbers

#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i*2;
    }
    printf("%d\n", sum);
    return 0;
}