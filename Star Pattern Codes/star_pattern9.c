#include <stdio.h>

int main()
{
    int i, j, chr;
    for (i = 1; i <= 4; i++)
    {
        chr = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%c", chr);
                j < 4 ? chr++ : chr--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}