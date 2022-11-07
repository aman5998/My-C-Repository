#include <stdio.h>
int hcf(int a, int b);
int main()
{
    hcf(4, 8);
    return 0;
}
int hcf(int a, int b)
{
    int i;
    for (i = a < b ? a : b; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            break;
    }
    printf("%d", i);
    return 0;
} 