// 3. Write a C program to check whether a year is leap year or not.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("%d is leap a year.", year);
        else
            printf("%d is not a leap year.", year);
    }
    else
    {
        if (year % 4 == 0)
            printf("%d is leap a year.", year);
        else
            printf("%d is not a leap year.", year);
    }

    return 0;
}