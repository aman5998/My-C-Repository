// 7. Write a program to print all ascii values using for loop.

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i <= 255; i++)
    {
        printf("Ascii value of character %c = %d\n", i, i);
    }

    return 0;
}