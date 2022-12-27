// 6. Write a program to check whether a number is Armstrong or not.

#include <stdio.h>

int main()
{
    int num, rem, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (temp == sum)
        printf("This is Armstrong Number");
    else
        printf("This is not Armstrong Number");

    return 0;
}