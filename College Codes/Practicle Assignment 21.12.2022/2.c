// 2. Write a program to evaluate the following series: 1+3+5+7+....upto n

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    printf("Result: %d", sum);

    return 0;
}