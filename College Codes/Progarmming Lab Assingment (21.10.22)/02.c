/*Write a C program to find the Area of a
Rectangle by Entering Length and Breadth.*/

#include <stdio.h>

int main()
{
    int length, breadth, area;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area of the rectangle is %d", area);
    return 0;
}
