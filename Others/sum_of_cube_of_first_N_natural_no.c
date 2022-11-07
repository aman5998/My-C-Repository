// Write a program to calculate sum of cube of first N natural numbers

#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0, even;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i * i * i);
        sum += i * i * i;
    }
    printf("The sum of squares N natural no. is %d\n", sum);
    return 0;
}