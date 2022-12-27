// 2. Write a program to evaluate the following series: 1/1!-3/3!+5/5!-....... upto nth term.

#include <stdio.h>
int main()
{
    int num = 1, limit, count, sign = 1;
    float sum = 0.0, fact;

    printf("Enter the number of terms: ");
    scanf("%d", &limit);

    while (num <= limit)
    {
        fact = 1;
        for (count = 1; count <= num; count += 2)
        {
            fact = fact * count;
        }

        sum = sum + (num / fact) + (count * sign);
        sign = sign * -1;
        num += 2;
    }
    printf("The sum of the series up to %d terms is %.2f", limit, sum);

    return 0;
}