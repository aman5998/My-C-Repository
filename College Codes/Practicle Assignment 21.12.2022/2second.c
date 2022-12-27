// 2. Write a program to evaluate the following series: 1-3+5-7+......upto n

#include <stdio.h>
int main()
{
    int n, i, sum = 0, sign = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
    {
        sum = sum + (i * sign);
        sign = sign * -1;
    }
    printf("Result: %d", sum);
    return 0;
}