#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = &a;
    printf("The value of ptr is before increment %d \n", ptr);
    ptr++;
    ptr = ptr + 1;
    printf("The value of ptr is after increment %d \n", ptr);

    // printf("The value of ptr is before increment %d \n", ptr);
    // ptr--;
    // ptr = ptr - 1;
    // printf("The value of ptr is after increment %d \n", ptr);
    return 0;
}