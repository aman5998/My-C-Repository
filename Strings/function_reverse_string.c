// Write a function to reverse a string.

#include <stdio.h>
#include <string.h>

void strrevv(char str[]);

int main()
{
    char st[] = "Aman";
    strrevv(st);
    return 0;
}
void strrevv(char str[])
{
    int len, temp,i;
    len = strlen(str);
        for (i = 0; i < len / 2; i++)
        {
            temp = str[i];
            str[i] = str[len-1-i];
            str[len-1-i] = temp;
        }
    printf("%s",str);
}