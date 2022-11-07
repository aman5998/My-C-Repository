// 10. Write a C program to input angles of a
// triangle and check whether triangle is valid or not.

#include <stdio.h>

int main()
{
    int a1, a2, a3, sum;

    printf("Enter three angles of triangle: ");
    scanf("%d%d%d", &a1, &a2, &a3);

    sum = a1 + a2 + a3;

    if (sum == 180 && a1 > 0 && a2 > 0 && a3 > 0)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}