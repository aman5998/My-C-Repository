// Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

int main()
{
    int len, temp;
    char str[45];
    printf("Enter a string: ");
    fgets(str, 45, stdin);
    len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    printf("Reverse is %s",str);
    return 0;
}