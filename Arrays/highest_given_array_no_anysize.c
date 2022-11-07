// Write a function to find the greatest number from the
// given array of any size.(TSRS)

#include <stdio.h>
int hiArray(int a[], int n);

int main()
{
    int arr[9];
    int c = hiArray(arr, 9);
    printf("%d is greatest among all numbers", c);
    return 0;
}
int hiArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d numbers: ", i + 1);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return (max);
}