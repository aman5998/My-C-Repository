// Write a program in C to find the area and perimeter of a rectangle.

#include <stdio.h>

int main(){
    int length, width, area, perimeter;
    printf("Enter the Length of Rectangle: ");
    scanf("%d", &length);
    printf("Enter the Width of Rectangle: ");
    scanf("%d", &width);
    area = width * length;
    perimeter = 2 * (length + width);
    printf("Area of Rectangle is %d\n", area);
    printf("Perimeter of Rectangle is %d", perimeter);
    return 0;
}