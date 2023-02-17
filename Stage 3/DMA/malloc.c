#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    // Sizeof operator in C
    // printf("The size of int on my pc is %d bytes\n", sizeof(int));
    // printf("The size of float on my pc is %d bytes\n", sizeof(float));
    // printf("The size of char on my pc is %d bytes\n", sizeof(char));
    // printf("The size of void on my pc is %d bytes\n", sizeof(void));
    // printf("The size of double on my pc is %d bytes\n", sizeof(double));

    ptr = (int *)malloc(8 * sizeof(int));

    for (int i = 0; i < 8; i++)
    {
        printf("Enter the value of %d element: ", i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("The value of %d element is %d\n", i+1, ptr[i]);
    }

    return 0;
}