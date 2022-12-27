// Write a program to find the sum of n natural numbers.
// e.g. = Input: n, Output: (1+2+3+4+...+n)

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("Sum of first %d number is %d", num, sum);
    
    return 0;
}