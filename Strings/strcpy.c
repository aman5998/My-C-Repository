#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "Aman"; // source
    char str2[45];  // target
    strcpy(str2, str);
    printf("Now the value of str2 is %s", str2);
    return 0;
}