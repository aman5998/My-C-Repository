// 10. Write a program to print the following pattern:
//                            1
//                            2      3
//                            4      5      6
//                            7      8      9       10

#include <stdio.h>

int main()
{
    int i, j, k = 1;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j >= 1 && j <= i)
                printf(" %d ", k++);
            else
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}