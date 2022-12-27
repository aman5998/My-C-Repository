// Write a program to find the reverse of a number.
// e.g. = Input: 124, Output: 421

#include <stdio.h>

int main()
{
    int num, rem, rev = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Reverse = %d", rev);

    return 0;
}