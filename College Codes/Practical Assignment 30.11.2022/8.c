/*8. Write a program to design a calculator using switch case that can
perform addition, subtraction, multiplication, division, remainder,
gcd, sin (theta), cos(theta), tan (theta), pow, sqrt, degree to radian,
radian to degree etc.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    printf("\n\n------Calculator------\n\n");
    printf(" 1. Addition\n");
    printf(" 2. Subtraction\n");
    printf(" 3. Multiplication\n");
    printf(" 4. Division\n");
    printf(" 5. Remainder\n");
    printf(" 6. GCD\n");
    printf(" 7. sin(theta)\n");
    printf(" 8. cos(theta)\n");
    printf(" 9. tan(theta)\n");
    printf("10. pow\n");
    printf("11. sqrt\n");
    printf("12. Degree to Radian\n");
    printf("13. Radian to Degree\n");

    printf("\nSelect any one: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
    {
        int a, b;
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("%d + %d = %d", a, b, a + b);
    }
    break;

    case 2:
    {
        int a, b;
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("%d - %d = %d", a, b, a - b);
    }
    break;

    case 3:
    {
        int a, b;
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("%d X %d = %d", a, b, a * b);
    }
    break;

    case 4:
    {
        int a, b;
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("%d / %d = %d", a, b, a / b);
    }
    break;

    case 5:
    {
        int a, b;
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("%d %% %d = %d", a, b, a % b);
    }
    break;

    case 6:
    {
        int a, b, i;
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        for (i = a * b; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
                break;
        }
        printf("GCD of %d and %d = %d", a, b, i);
    }
    break;

    case 7:
    {
        float a, b;
        printf("\nEnter numbers: ");
        scanf("%f", &a);
        b = sin(a);
        printf("The Sine of %f is %f\n", a, b);
    }
    break;

    case 8:
    {
        float a, b;
        printf("\nEnter numbers: ");
        scanf("%f", &a);
        b = cos(a);
        printf("The Sine of %f is %f\n", a, b);
    }
    break;

    case 9:
    {
        float a, b;
        printf("\nEnter numbers: ");
        scanf("%f", &a);
        b = tan(a);
        printf("The Sine of %f is %f\n", a, b);
    }
    break;

    case 10:
    {
        int a, b, i, pow = 1;
        printf("\nEnter a base numbers: ");
        scanf("%d", &a);
        printf("Enter an exponent: ");
        scanf("%d", &b);
        for (i = 1; i <= b; ++i)
        {
            pow *= a;
        }
        printf("%d ^ %d = %d", a, b, pow);
    }
    break;

    case 11:
    {
        int a;
        printf("\nEnter two numbers: ");
        scanf("%d", &a);
        printf("Square Root of %d = %d", a, a * a);
    }
    break;

    case 12:
    {
        int a;
        printf("\nEnter Degree: ");
        scanf("%d", &a);
        printf("%d = %0.7f", a, a * 3.141592653 / 180);
    }
    break;

    case 13:
    {
        int a;
        printf("\nEnter Radian: ");
        scanf("%d", &a);
        printf("%d = %0.4f", a, a * 180 / 3.141592653);
    }
    break;

    default:
        printf("Invalid input detected!!");
        break;
    }

    return 0;
}