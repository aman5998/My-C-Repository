// Write a program to calculate length of the string.

#include <stdio.h>

int main()
{
    char str[] = "Hey bro what's up";
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}