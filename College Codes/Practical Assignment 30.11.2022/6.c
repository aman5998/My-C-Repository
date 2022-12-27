// 6. Write a program to check whether a number is perfect number or not.

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    if (num == sum)
        printf("%d is a perfect number", num);
    else
        printf("%d is not a perfect number", num);

    return 0;
}