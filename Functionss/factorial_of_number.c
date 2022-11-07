#include <stdio.h>
int factorial(int n);
int main()
{
    factorial(5);
    return 0;
}
int factorial(int n)
{
    int i, s = 1;
    for (i = 1; i <= n; i++)
    {
        s *= i;
    }
    printf("%d", s);
    return 0;
}