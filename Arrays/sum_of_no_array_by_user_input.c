#include <stdio.h>

int main()
{
    int arr[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter numbers %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of array with 10 variable is %d", sum);
    return 0;
}