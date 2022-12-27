// 7. Write a program to implement selection sort in C.

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
        int min = i;
        for (j = i + 1; j < 6; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("\nAfter  Sort--> ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
