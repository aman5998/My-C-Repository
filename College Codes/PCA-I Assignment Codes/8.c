// 8. Write a program to find the sum of even and odd place digit of a number separately.

#include <stdio.h>

int main()
{
    int num, rem, i, rev = 0, even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }

    num = rev;

    for (i = 1; num != 0; i++)
    {
        rem = num % 10;

        if (i % 2 == 0)
            even += rem;
        else
            odd += rem;

        num = num / 10;
    }

    printf("Sum of Even Placed Digits = %d\n", even);
    printf("Sum of Odd Placed Digits = %d\n", odd);

    return 0;
}