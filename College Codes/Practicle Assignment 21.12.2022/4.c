// 4. Write a program in C to find the sum of even and
// odd place digits separately from an array of numbers.

#include <stdio.h>

int main()
{
    int a[1000], n, i, even = 0, odd = 0;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    printf("Enter the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even += a[i];
        else
            odd += a[i];
    }
    printf("Sum of even placed digit is = %d\n", even);
    printf("Sum of odd placed digit is = %d\n", odd);

    return 0;
}