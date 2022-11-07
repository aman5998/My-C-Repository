// Write a program to calculate the product of two matrices each of order 3x3

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], sum;
    ;

    printf("Enter first matrix value: ");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix value: ");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
                sum = sum + a[i][k] * b[k][j];
            c[i][j] = sum;
        }
    printf("Product of two matrices are \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}