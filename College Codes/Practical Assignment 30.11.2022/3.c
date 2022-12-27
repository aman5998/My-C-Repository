// 3. Write a program to check whether a number is Armstrong number or not.

#include <stdio.h>

int main()
{
    int num, i, rem, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for (i = 1; num != 0; i++)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (temp == sum)
        printf("This is armstrong number");
    else
        printf("This is not armstrong number");

    return 0;
}