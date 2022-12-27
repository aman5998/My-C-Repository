// 2. Write a program in C to implement an array to find the sum of elements from 1 to n.

#include <stdio.h>

int main()
{
    int a[1000], sum = 0, n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum of elements from 1 to %d = %d", n, sum);

    return 0;
}
