#include <stdio.h>

int main()
{
    int arr[10], sum = 0;
    float avg;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d for the average of 10 numbers: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / 10.0;
    printf("The average of 10 numbers are %.1f", avg);
    return 0;
}