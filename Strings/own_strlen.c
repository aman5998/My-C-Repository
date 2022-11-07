/* Write a program to calculate the length
of the string. (without using builtin method) */

#include <stdio.h>
int main()
{   
    int i;
    char st[] = "I am really sorry baby";
    for (i = 0; st[i]; i++);
    printf("Length of your string is %d", i);
    return 0;
}
