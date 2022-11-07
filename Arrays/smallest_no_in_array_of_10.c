#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (smallest > arr[i])
            smallest = arr[i];
    }
    printf("Smallest among ten numbers is %d", smallest);

    return 0;
}