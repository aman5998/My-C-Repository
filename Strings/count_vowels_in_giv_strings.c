/* Write a program to count vowels in a given string */

#include <stdio.h>

int main()
{
    int count = 0;
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i]; i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;

    printf("There are %d vowels in the strings", count);
    return 0;
}