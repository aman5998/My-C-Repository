// Write a program to print the cubes of first 10 natural numbers

#include <stdio.h>

int main()
{
    int i = 1,cube;
    while (i <= 10)
    {
        cube = i*i*i;
        printf("Cube of %d is %d\n",i,cube );
        i++;
    }
    return 0;
}