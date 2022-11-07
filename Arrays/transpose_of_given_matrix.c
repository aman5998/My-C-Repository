#include <stdio.h>

int main()
{
    int mt[2][2], trans[2][2];
    printf("Enter matrix elements: ");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &mt[i][j]);

    printf("Matrix elements: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", mt[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            trans[j][i] = mt[i][j];

    printf("Transpose elements: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}