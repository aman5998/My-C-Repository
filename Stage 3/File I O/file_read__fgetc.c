#include <stdio.h>

int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("fgetcdemo.txt", "r");
    ch = fgetc(ptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(ptr);
    }
    return 0;
}