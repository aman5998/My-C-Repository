#include <stdio.h>

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    printf("The value of variable i is %d", **ptr2);
    return 0;
}