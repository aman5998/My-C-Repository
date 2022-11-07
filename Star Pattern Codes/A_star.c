#include <stdio.h>

int main()
{
    int i, j;
    // for (i = 1; i <= 2; i++)
    // {
    //     for (j = 0; j <= 7; j++)
    //     {
    //         if (j>=4-i&&j<=4+i)
    //             printf(" * ");
    //         else 
    //             printf("   ");
    //     }
    //     printf("\n");
    // }
    // for (i = 1; i <= 1; i++)
    // {
    //     for (j = 0; j <= 7; j++)
    //     {
    //         if (j>=2&&j<=3||j>=5&&j<=6)
    //             printf(" * ");
    //         else
    //             printf("   ");
    //     }
    //     printf("\n");
    // }
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (j>=1&&j<=2||j>=6&&j<=7)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}