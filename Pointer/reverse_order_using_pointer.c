// Write a program to print the elements of an array in reverse order

#include <stdio.h>
# define N 5
int main()
{
    int arr[N];
    printf("Enter the numbers: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int *ptr = &arr[N - 1];
    for (int i = 0; i < N; i++)
    {
        printf("%d ", *ptr);
        ptr--;
    }
    return 0;
}