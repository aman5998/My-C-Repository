#include <stdio.h>

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d elements is %d\n", i + 1, arr[i]);
    }
    return 0;
}