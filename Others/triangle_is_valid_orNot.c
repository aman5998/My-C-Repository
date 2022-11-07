/*Write a program which takes the length of the
sides of a triangle as an input. Display
whether the triangle is valid or not.*/

/* How do you prove a triangle is valid?
A triangle is a valid triangle, If and only If,
the sum of any two sides of a triangle is
greater than the third side
A + B > C, B + C > A and C + A > B.
if (a + b > c && b + c > a && c + a > b)
        printf("This is valid triangle");
    else
        printf("This is not valid triangle");*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c)
    {
        if (b + c > a)
        {
            if (c + a > b)
                printf("This is valid triangle");
            else
                printf("This is not valid triangle");
        }
        else
            printf("This is not valid triangle");
    }
    else
        printf("This is not valid triangle");
    return 0;
}