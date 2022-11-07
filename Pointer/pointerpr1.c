#include <stdio.h>

int main()
{
    int i = 34;
    int *j;
    j = &i;
    printf("The address of variable i is %u\n", j);
    printf("The address of variable i is %u\n", &i);
    printf("The value of variable i is %d", *j);
    return 0;
}