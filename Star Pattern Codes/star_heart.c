#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 1; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= 2 && j <= 3 || j >= 7 && j <= 8)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 1; i <= 1; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= 1 && j <= 4 || j >= 6 && j <= 9)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= i && j <= 10 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}