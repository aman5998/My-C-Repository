// 7. Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("'%c' is an uppercase alphabet.", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("'%c' is an lowercase alphabet.", ch);
    else
        printf("'%c' is not an alphabet.", ch);

    return 0;
}