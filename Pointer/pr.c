#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    char *p = str;
    char *q = str + (strlen(str) - 1);

    while (p != q)
    {
        char temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
    puts(str);
    return 0;
}