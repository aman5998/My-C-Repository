// 4. Write a program to print all even and odd numbers separately from 1 to n, n will be taken as user input.

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("All even and odd numbers separately from 1 to %d:", n);

    printf("\nEven: ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    printf("\nOdd: ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }

    return 0;
}