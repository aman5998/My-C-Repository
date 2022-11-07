// Write a program to compute the sum of all elements in an array using pointers.

#include <stdio.h>

int main()
{
    int sum = 0;
    int arr[] = {3, 5, 7, 1, 6, 8};
    int *ptr = arr; // ptr store the base address of array arr
    for (int i = 0; i < 6; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("Sum of all elements in an array is = %d", sum);

    return 0;
}