/* Write a function sumVector which returns
the sum of two vectors passed to it.
The vectors must be two dimensional */

#include <stdio.h>

struct vector
{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2);

int main()
{
    struct vector v1, v2, sum;

    v1.x = 43;
    v1.y = 56;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x = 33;
    v2.y = 87;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("Sum of two vectors v1 and v2 are X dim is %d and Y dim is %d\n", sum.x, sum.y);

    return 0;
}

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}