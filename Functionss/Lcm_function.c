#include <stdio.h>
int lcm(int a, int b);
int main()
{
    lcm(4, 6);
    return 0;
}
int lcm(int a, int b)
{
    int i;
    for (i = a > b ? a : b; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
            break;
    }
    printf("lcm is %d", i);
    return 0;
}