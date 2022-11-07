#include <stdio.h>

int main()
{
    float pi = 3.141592653589793238;
    int radius;
    printf("Enter the radius of the cylinder: ");
    scanf("%d",&radius);
    int height = 4;
    printf("Enter the height of the cylinder: ");
    scanf("%d",&height);
    printf("The volume of your cylinder is %.2f\n", pi * radius * radius * height);
    return 0;
}