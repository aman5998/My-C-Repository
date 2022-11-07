#include <stdio.h>

int main()
{
    int length, width;

    printf("Enter the length of the Rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the Rectangle: ");
    scanf("%d", &width);

    int area = length * width;
    printf("Area of Rectangle is %d", area);
    return 0;
}