/* Write a C program to find the Area of
the Triangle by Entering Height, and Base */

#include <stdio.h>

int main()
{
    float height, base, area;
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    area = (height * base) / 2;
    printf("Area of Triangle is %.1f", area);
    return 0;
}
