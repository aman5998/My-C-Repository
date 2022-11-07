/* Write a C program to Calculate Simple Interest
| Principle, Rate of interest & Time */

#include <stdio.h>

int main()
{
    float principle, interest, time, si;
    printf("Enter Principle Amount: ");
    scanf("%f", &principle);
    printf("Enter Rate of Interest: ");
    scanf("%f", &interest);
    printf("Enter Time in Years: ");
    scanf("%f", &time);
    si = (principle * interest * time) / 100;
    printf("Simple Interest = %.2f", si);
    return 0;
}