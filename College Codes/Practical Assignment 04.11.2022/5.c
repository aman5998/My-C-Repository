// Write a program in C to find the greatest
// number among three numbers using nested if else.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("%d is the greatest number", a);
        else
            printf("%d is the greatest number", c);
    }
    else
    {
        if (b > c)
            printf("%d is the greatest number", b);
        else
            printf("%d is the greatest number", c);
    }
    return 0;
}