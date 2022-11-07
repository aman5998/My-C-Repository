// Write a program to count digits in a given number

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    printf("Total digits = %d", count);
    return 0;
}