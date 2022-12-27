// 2. Write a program to evaluate the following series: 1+(1+2)+(1+2+3)+......upto n term

#include <stdio.h>

int main()
{
    int n, i, sum = 0, sumTwo = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
        sumTwo += sum;
    }
    printf("Result: %d", sumTwo);
    return 0;
}