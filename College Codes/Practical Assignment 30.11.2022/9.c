// 9. Write a program in C to display elements from 1 to 100 using array.

#include <stdio.h>

int main()
{
    int a[10], j = 1, i;

    printf("Enter 10 numbers for display: "); // This code is for display 10 numbers
    for (i = 0; i < 10; i++)
    {
        // a[i] = j;
        // j++;
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}