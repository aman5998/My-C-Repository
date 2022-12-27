// 1. Write a program to print Fibonacci numbers from 1 to n.

#include <stdio.h>

int main()
{
    int num, i;
    int a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d,", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}