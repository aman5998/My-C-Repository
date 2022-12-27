// Write a program to find the sum of even and odd digits of a number separately.

#include <stdio.h>

int main()
{
    int num, rem, even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;

        if (rem % 2 == 0)
            even += rem;
        else
            odd += rem;

        num = num / 10;
    }

    printf("Even Digit Sum: %d\n", even);
    printf("Odd Digit Sum: %d\n", odd);

    return 0;
}
