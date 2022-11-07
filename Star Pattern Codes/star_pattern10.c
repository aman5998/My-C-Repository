#include <stdio.h>

int main()
{
    int j, i,k;
    for (i = 1; i <= 4; i++)
    {
        k;
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
                {
                    printf("%d",k);
                    j < 4 ? k==0 : k==1;
                }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
