#include <stdio.h>

int main()
{
    int i, j, lines, chr;
    printf("Enter number of lines: ");
    scanf("%d", &lines);
    for (i = 1; i <= lines; i++)
    {
        chr = 'A';
        for (j = 1; j <= lines; j++)
        {
            if (j <= lines + 1 - i)
                printf("%c  ", chr++);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}