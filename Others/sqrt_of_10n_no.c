// Write a program to print the squares of first 10 natural numbers.

#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("Square of %d is %d\n",i, i*i);
        i++;
    }
    return 0;
}