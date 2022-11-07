/* Create an array of 5 complex numbers created in
problem 5 and display then with the help of a display
function. The values must be taken as an input from the user */

#include <stdio.h>

typedef struct complex
{
    float real;
    float img;
} comp;

void display(comp cNo);

int main()
{
    comp cn[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter complex number %d-->\n", i + 1);
        printf("Enter the real and imaginary value: ");
        scanf("%f%f", &cn[i].real, &cn[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cn[i]);
    }

    return 0;
}

void display(comp cNo)
{
    printf("The value of real part is %.1f\n", cNo.real);
    printf("The value of imaginary part is %.1f\n", cNo.img);
}