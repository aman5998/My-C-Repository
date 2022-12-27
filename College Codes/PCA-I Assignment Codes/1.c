// 1. Write a program in C to check whether a number is Perfect or not.

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    if (num == sum)
        printf("%d is a Perfect Number", num);
    else
        printf("%d is not a Perfect Number", num);

    return 0;
}