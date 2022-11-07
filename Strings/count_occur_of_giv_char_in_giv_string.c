/* Write a program to count the occurrence
of a given character in a given string */

#include <stdio.h>

int main()
{
    int count = 0;
    char str[30];
    printf("Enter the string: ");
    fgets(str, 30, stdin);

    char chr;
    printf("Enter a character to be searched: ");
    scanf("%c", &chr);

    for (int i = 0; str[i]; i++)
    {
        if (chr == str[i])
        {
            count++;
        }
    }
    printf("character '%c' occurs %d times", chr, count);
    return 0;
}