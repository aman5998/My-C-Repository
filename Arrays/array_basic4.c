#include <stdio.h>

int main()
{
    int a[3] = {34, 76, 87};
    printf("The value of a[0] is %d \n", a[0]);
    printf("The value of a[1] is %d \n", a[1]);
    printf("The value of a[2] is %d \n", a[2]);

    float b[] = {34.5, 76.7,}; // last variable automatic stores 0
    printf("The value of b[0] is %f \n", b[0]);
    printf("The value of b[1] is %f \n", b[1]);
    printf("The value of b[2] is %f \n", b[2]);

    char c[3]= {'3','g','F'};
    printf("The value of c[0] is %c \n",c[0]);
    printf("The value of c[1] is %c \n",c[1]);
    printf("The value of c[2] is %c \n",c[2]);
    return 0;
}