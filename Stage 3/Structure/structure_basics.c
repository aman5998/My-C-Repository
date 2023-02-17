#include <stdio.h>

struct date
{
    int d, m, y;
} d3, d4; // You can declare variable here also

int main()
{
    struct date d1 = {29, 10, 2022}, d2; // and structure variable is declare like this
    d2.d = 4;
    d2.m = 11;
    d2.y = 2022;
    printf("%d", d1.m);
    printf("%d", d2);

    return 0;
}
