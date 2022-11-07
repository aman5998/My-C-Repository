// Write a program to convert a given string into uppercase.

#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, 50, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
    return 0;
}
