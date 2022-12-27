// 4. Write a program in C to implement an one dimensional array to implement linear search.

#include <stdio.h>

int main()
{
    int a[10] = {21, 56, 85, 32, 54, 76, 11, 91, 7, 20};
    int n, i;

    printf("Enter element to search: ");
    scanf("%d", &n);

    for (i = 0; i < 10; ++i)
    {
        if (a[i] == n)
            break;
    }

    if (n == a[i])
        printf("Element found at index %d", i);
    else
        printf("Element not found");

    return 0;
}