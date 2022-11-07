// 1. Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Number is Zero");
    else if (num >= 1)
        printf("%d is a Positive Number",num);
    else
        printf("%d is a Negative Number",num);

    return 0;
}