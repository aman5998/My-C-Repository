// 1. Write program in C to implement an array to display elements from 1 to 20.

#include <stdio.h>

int main()
{
    int a[20], i, j = 1;

    printf("\nInput 20 elements in the array :");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in array are: ");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}