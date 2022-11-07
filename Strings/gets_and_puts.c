#include <stdio.h>

int main()
{
    char st[50];
    printf("Enter your name: ");
    gets(st);
    puts(st);
    printf("Your name is %s", st);
    return 0;
}