// 5. Write a program in C to implement binary search in an one dimensional array.

#include <stdio.h>

int main()
{
    int a[] = {11, 23, 34, 42, 59, 68, 73}, n;
    int low, mid, high;

    printf("Enter element to search: ");
    scanf("%d", &n);

    low = 0;
    high = 7 - 1;
    mid = (low + high) / 2;

    while (low <= high)
    {
        if (a[mid] < n)
            low = mid + 1;

        else if (a[mid] == n)
        {
            printf("Element found at index %d", mid);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }

    if (low > high)
        printf("Element not found");

    return 0;
}