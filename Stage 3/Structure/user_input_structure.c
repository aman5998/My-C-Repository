#include <stdio.h>
struct date
{
    int d, m, y;
} d1, d2;

int main()
{
    d1.d = 11;
    d1.m = 4;
    d1.y = 2022;
    printf("Enter Date: ");
    scanf("%d/%d/%d", &d2.d, &d2.m, &d2.y);
    printf("%d-%d-%d\n", d1.d, d1.m, d1.y);
    printf("%d-%d-%d\n", d2.d, d2.m, d2.y);
    return 0;
}