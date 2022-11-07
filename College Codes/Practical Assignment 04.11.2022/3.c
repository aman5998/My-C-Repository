// 3. Write a program in C to check whether
//  a triangle is equilateral, isosceles or scalene.

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