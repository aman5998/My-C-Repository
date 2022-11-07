#include <stdio.h>

int main()
{
    int i, j, chr;
    for (i = 1; i <= 4; i++)
    {
        chr = 'A';
        for (j = 1; j <= 4; j++)
        {
            if (j <= 5 - i)
            {
                printf("%c  ", chr++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}