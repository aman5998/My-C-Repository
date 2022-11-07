// Write a function to find the smallest number from the given
// array of any size.(TSRS)

#include <stdio.h>
int smallArray(int a[], int n);

int main()
{
    int arr[10] = {8, 76, 34, 75, 45, 67, 53, 2, 59, 58};
    int d = smallArray(arr, 10);
    printf("%d is smallest", d);
    return 0;
}
int smallArray(int a[], int n)
{
    int small = a[0];
    for (int i = 1; i < n; i++)
    {
        if (small > a[i])
            small = a[i];
    }
    return small;
}