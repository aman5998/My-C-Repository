#include <stdio.h>

int main()
{
    char str[10] = {'P', 'I', 'N', 'K', 'A', 'L'};
    // for (int i = 0; str[i] != '\0'; i++)
    for (int i = 0; str[i]; i++)
        printf("%c", str[i]);
    return 0;
}