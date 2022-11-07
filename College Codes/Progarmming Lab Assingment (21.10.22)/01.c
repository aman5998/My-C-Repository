/*Write a C program to find the Perimeter of a
Rectangle by Entering Length and Breadth.*/

#include <stdio.h>

int main()
{
    int length, breadth, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    perimeter = 2 * (length + breadth);
    printf("The Perimeter of rectangle is %d", perimeter);
    return 0;
}
