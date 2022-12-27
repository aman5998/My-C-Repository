// 6. Write a program to implement bubble sort in C.

#include <stdio.h>

int main()
{
    int a[] = {12, 45, 23, 51, 19, 8}, i, j, temp;

    printf("\nBefore Sort--> ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < 6 - 1; i++)
    {
        for (j = 0; j < 6 - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nAfter  Sort--> ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}