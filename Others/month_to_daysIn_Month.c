/*Write a program which takes the month number as an
input and display number of days in that month.*/

#include <stdio.h>

int main()
{
    int Month;
    printf("Enter month number (1-12): ");
    scanf("%d", &Month);
    if (Month == 1)
        printf("It contains 31 days");
    else if (Month == 2)
        printf("It contains 28 days");
    else if (Month == 3)
        printf("It contains 31 days");
    else if (Month == 4)
        printf("It contains 30 days");
    else if (Month == 5)
        printf("It contains 31 days");
    else if (Month == 6)
        printf("It contains 30 days");
    else if (Month == 7)
        printf("It contains 31 days");
    else if (Month == 8)
        printf("It contains 31 days");
    else if (Month == 9)
        printf("It contains 30 days");
    else if (Month == 10)
        printf("It contains 31 days");
    else if (Month == 11)
        printf("It contains 30 days");
    else if (Month == 12)
        printf("It contains 31 days");
    else
        printf("Invalid input! Please enter month number between (1-12).");
    return 0;
}