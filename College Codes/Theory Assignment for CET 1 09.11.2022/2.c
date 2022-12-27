// 2. Write a program to print all Fibonacci numbers upto nth term.

#include <stdio.h>

int main()
{
    int num, i;                  
    int a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d ", a);

    return 0;
}