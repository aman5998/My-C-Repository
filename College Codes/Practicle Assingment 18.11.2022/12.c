// 12. Write a C program to check whether the
// triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a == b) && (b == c))
        printf("Equilateral Triangle");
    else if (a == b || b == c || c == a)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}