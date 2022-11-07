// Write a program to compare two strings.

#include <stdio.h>
#include <string.h>

int main()
{
    int value;
    char str1[30];
    printf("Enter string 1: ");
    fgets(str1, 30, stdin);

    char str2[30];
    printf("Enter string 2: ");
    fgets(str2, 30, stdin);

    value = strcmp(str1, str2);

    if (value == 0)
        printf("Strings are same");
    else
        printf("Strings are not same");

    return 0;
}
