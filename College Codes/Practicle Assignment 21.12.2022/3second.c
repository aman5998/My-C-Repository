// 3. Write a program to print the following pattern:
// upto n number of rows.
// 1
// 01
// 101
// 0101
// 10101....

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", (i + j + 1) % 2);
        }
        printf("\n");
    }

    return 0;
}