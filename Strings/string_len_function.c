// Write a function to calculate length of the string.

#include <stdio.h>
int my_strlen(char str[]);
int main()
{
    char st[] = "I am really sorry baby";
    printf("Length of your string is %d", my_strlen(st));
    return 0;
}
int my_strlen(char str[])
{
    int i;
    for (i = 0; str[i]; i++);
    return i;
}