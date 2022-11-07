#include <stdio.h>
// Function declaration
float area_of_circle(float a);
int main()
{
    // Function Call
    printf("Area of circle is %.2f", area_of_circle(6.4));
    return 0;
}
// Function definition
float area_of_circle(float a)
{
    float r = 3.14159 * a * a;
    return r;
}