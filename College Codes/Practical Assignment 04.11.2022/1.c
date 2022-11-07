// 1. Write a program in C to check whether
// a number is a 2 digit number or not.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 99)
        printf("%d is a 2 digit number", num);
    else
        printf("%d is a not 2 digit number", num);

    return 0;
}