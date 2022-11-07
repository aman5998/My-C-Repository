// Write a program to calculate avg of 100 numbers entered by user.

#include <stdio.h>

int main()
{
    int a[10], i, sum = 0;
    float avg;
    printf("Enter 10 numbers: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9; i++)
        sum = sum += a[i];
    avg = sum / 10.0;
    printf("Average of 10 numbers are %.2f", avg);
    return 0;
}
