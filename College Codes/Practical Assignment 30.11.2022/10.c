// 10. Write a program in C to find the sum of elements from 1 to 20 using array.

#include <stdio.h>

int main()
{
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int sum = 0;

    for (int i = 0; i < 20; i++)
    {
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
}