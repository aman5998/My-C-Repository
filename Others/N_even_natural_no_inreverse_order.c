// Write a program to print the first N even natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        printf("%d\n", 2 * i);
        i--;
    }
    return 0;
}