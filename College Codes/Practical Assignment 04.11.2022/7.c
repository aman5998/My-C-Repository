// 7. Write a program in C to perform the addition of time.

#include <stdio.h>

int main()
{
    int hr1, hr2, hr3, min1, min2, min3;
    printf("Enter First Time: ");
    scanf("%d:%d", &hr1, &min1);
    printf("Enter Second Time: ");
    scanf("%d:%d", &hr2, &min2);
    hr3 = hr1 + hr2;
    min3 = min1 + min2;
    if (min3 > 59)
    {
        hr3++;
        min3 = min3 - 60;
    }
    printf("Result = %d:%d", hr3, min3);
    return 0;
}