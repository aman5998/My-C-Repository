/* Write a C program to find the Third
Angle of a Triangle by Entering Two Angles */

#include <stdio.h>

int main()
{
    float ang1, ang2, ang3;
    printf("Enter the angle 1: ");
    scanf("%f", &ang1);
    printf("Enter the angle 2: ");
    scanf("%f", &ang2);
    ang3 = 180 - (ang1 + ang2);
    printf("Third angle of triangle is %.2f", ang3);
    return 0;
}

