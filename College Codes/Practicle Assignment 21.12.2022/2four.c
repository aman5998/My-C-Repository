// 2. Write a program to evaluate the following series: 1/1!+2/2!+3/3!+.....upto nth term

#include <stdio.h>
int main()
{
    int num = 1, limit, count;
    float sum = 0.0, fact;

    printf("Enter the number of terms: ");
    scanf("%d", &limit);

    while (num <= limit)
    {
        fact = 1;
        for (count = 1; count <= num; count++)
        {
            fact = fact * count;
        }
        sum = sum + (num / fact);
        num++;
    }
    printf("The sum of the series up to %d terms is %.2f", limit, sum);

    return 0;
}