#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter all three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b || b == c || c == a)
        printf("This Triangle is a isosceles triangle");
    else
        printf("This is not a isosceles triangle");
    return 0;
}