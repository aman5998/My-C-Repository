#include <stdio.h>
#include <string.h>

void srt_swap(char **st1[], char **st2[]);

int main()
{
    char str1[10] = "Aman";
    char str2[10] = "KrShaw";
    printf("Before Swap-->\nstr1 = %s\nstr2 = %s\n", str1, str2);
    srt_swap(&str1, &str2);
    printf("After Swap-->\nstr1 = %s\nstr2 = %s\n", str1, str2);
    return 0;
}
void srt_swap(char **st1[], char **st2[])
{
    char *temp[10];
    strcpy(temp, st1);
    strcpy(st1, st2);
    strcpy(st2, temp);
}