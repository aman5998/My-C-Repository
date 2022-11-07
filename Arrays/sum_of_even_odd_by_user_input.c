#include <stdio.h>

int main()
{
    int arr[10], even = 0, odd = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the numbers 10 times: ");
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }
    printf("even=%d\nodd=%d", even, odd);
    return 0;
}