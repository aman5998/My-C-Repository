#include <stdio.h>

int main()
{
    // char str[] = "Aman Shaw";
    char str[] = {'A', 'M', 'A', 'N', '\0'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
} // This is how we print strings in C language😉😉