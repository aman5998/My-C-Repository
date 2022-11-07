/* Write a program to find the nature
 of roots of a quadratic equation. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D;
    float x1, x2;
    printf("Enter the value of a, b & c: ");
    scanf("%f%f%f", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("X1 = %.2f, X2 = %.2f", x1, x2);
    }
    else if (D == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("X1 = X2 = %.2f", x1);
    }
    else
    {
        printf("Roots are Imaginary");
    }
    return 0;
}