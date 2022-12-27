// 1. Write a program in C to check whether a number is Krishnamurti number.
// For example, 145 is a Krishnamurti number because the sum of factorial of
// all digits of the number is equal to 145.

#include <stdio.h>

int main()
{
    int num, rem, i, temp, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum += fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is Krishnamurthy Number", num);
    else
        printf("%d is not a Krishnamurthy Number", num);

    return 0;
}
