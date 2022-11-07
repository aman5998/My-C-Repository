// Write a program to calculate length of the string.

#include <stdio.h>

int main()
{
    char str[] = "Hey bro what's up";
    int i;
    for (i = 0; str[i]; i++);
    printf("Length is %d", i);
    return 0;
}