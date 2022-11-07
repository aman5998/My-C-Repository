// Write a program to print a string in reverse using a pointer.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    char *first, *last;
    first = str;
    last = str + (strlen(str) - 1);
    while (first != last)
    {
        char temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
    puts(str);
    return 0;
}