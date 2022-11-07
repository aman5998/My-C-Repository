//  Write a program to calculate sum of first N natural numbers

#include <stdio.h>

int main()
{
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}