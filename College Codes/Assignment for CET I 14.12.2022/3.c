// 3. Write a program in C to implement an array to find the maximum and minimum element for n number of elements.

#include <stdio.h>

int main()
{
    int a[1000], n, i, max, min;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        else
            min = a[i];
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
