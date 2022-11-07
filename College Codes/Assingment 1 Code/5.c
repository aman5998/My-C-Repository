#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("This is leap year");
        else
            printf("This is not leap year");
    }
    else
    {
        if (year % 4 == 0)
            printf("This is leap year");
        else
            printf("This is not leap year");
    }
    return 0;
}