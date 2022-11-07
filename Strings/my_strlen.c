#include <stdio.h>
int my_strlen(char *a);

int main()
{
    char str[] = "AmanShaw";
    printf("The length of the string is %d", my_strlen(str));
    return 0;
}
// Here's my strlen function in c language
int my_strlen(char *a)

{
    int count = 0;
    while (*a != '\0')
    {
        count++;
        a++;
    }
    return count;
}