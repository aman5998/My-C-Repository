#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = calloc(5 , sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d elements: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d elements is %d \n", i + 1, ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d elements: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d elements is %d \n", i + 1, ptr[i]);
    }

    return 0;
}