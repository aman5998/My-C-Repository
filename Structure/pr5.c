/* Write a C program with a structure
representing a complex number. */

#include <stdio.h>

typedef struct complex_no
{
    float real;
    float img;
} complexNo;

complexNo add(complexNo n1, complexNo n2);

int main()
{
    complexNo c1, c2, sum;

    printf("Enter first complex number-->\n");
    printf("Enter the real and imaginary numbers: ");
    scanf("%f%f", &c1.real, &c1.img);

    printf("Enter second complex number-->\n");
    printf("Enter the real and imaginary numbers: ");
    scanf("%f%f", &c2.real, &c2.img);

    sum = add(c1, c2);
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.img);

    return 0;
}

complexNo add(complexNo n1, complexNo n2)
{
    complexNo result;
    result.real = n1.real + n2.real;
    result.img = n1.img + n2.img;
    return result;
}