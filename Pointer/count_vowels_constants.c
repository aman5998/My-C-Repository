/* Write a program to count the number of vowels and
consonants in a string using a pointer */

#include <stdio.h>

int main()
{
    char str[100];
    int Vcount = 0, Ccount = 0;
    printf("Enter any string: ");
    fgets(str, 100, stdin);

    char *ptr = str; // assign base address of char array to pointer

    for (; *ptr != '\0'; ptr++)
    {
        if ((*ptr >= 65 && *ptr <= 90) || (*ptr >= 97 && *ptr <= 122))
        {
            if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' 
            || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
                Vcount++;
            else
                Ccount++;
        }
    }
    printf("Total vowels in this string is %d\n", Vcount);
    printf("Total constants in this string is %d", Ccount);
    return 0;
}