// 5. Write a program to perform the addition two matrices.

#include <stdio.h>

int main()
{
    int m1[3][3], m2[3][3], sum[3][3], i, j;

    printf("Enter matrix 1\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter matrix 2\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("Addition of two matrices are: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}