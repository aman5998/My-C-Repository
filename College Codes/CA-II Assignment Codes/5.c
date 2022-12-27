/*Write a C program that can check whether an input
is an alphabet, digit, whitespace, or special character.*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
        printf("'%c' is an alphabet", ch);
    else if (ch >= 48 && ch <= 57)
        printf("'%c' is a digit", ch);
    else if (ch == 32)
        printf("'%c' is a whitespace", ch);
    else
        printf("'%c' is a  special character", ch);

    return 0;
}