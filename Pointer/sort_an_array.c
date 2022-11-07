// Write a function to sort an array of int type values.
// [ void sort(int *ptr,int size); ]

#include <stdio.h>
void sort(int *ptr, int size);

int main()
{
    int arr[] = {90, 50, 40, 80, 10, 20, 70, 30, 60, 100};
    sort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
void sort(int *ptr, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
}