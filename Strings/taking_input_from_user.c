#include <stdio.h>

int main()
{
    char str[15];
    printf("Enter your name: ");
    fgets(str,15,stdin);
    // gets(str);
    // scanf("%s", str); // No need to use & in scanf
    printf("Your name is %s", str);
    return 0;
}