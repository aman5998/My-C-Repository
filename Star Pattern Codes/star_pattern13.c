#include <stdio.h>

int main()
{
    int i, j, k = 0, x;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        i <= (x + 1) / 2 ? (k = i) : (k = x + 1 - i);
        for (j = 1; j <= x; j++)
        {
            if (j >= (x + 1) / 2 + 1 - k && j <= (x + 1) / 2 - 1 + k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}