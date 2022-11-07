/* Write a C program to find the Diameter,
Circumference and Area of a Circle. */

#include <stdio.h>

int main()
{
    float radius, dia, circ, area;
    float pi = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    dia = 2 * radius;
    circ = 2 * pi * radius;
    area = pi * radius * radius;
    printf("The Diameter of the circle is %.2f\n", dia);
    printf("The Circumference of the circle is %.2f\n", circ);
    printf("The Area of the circle is %.2f\n", area);
    return 0;
}
