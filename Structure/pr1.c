// Create a two dimensional vector using structure in C.

#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;

    v1.x = 43;
    v1.y = 56;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x = 33;
    v2.y = 87;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

    return 0;
}