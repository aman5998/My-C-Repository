/* Write a program to print first N odd natural number is reverse order */

#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", (2 * n) + 1 - (2 * i));
        i++;
    }
    return 0;
}