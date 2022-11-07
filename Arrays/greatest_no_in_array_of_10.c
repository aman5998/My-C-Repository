#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int high = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (high < arr[i])
            high = arr[i];
    }
    printf("Highest among ten numbers is %d", high);
    return 0;
}