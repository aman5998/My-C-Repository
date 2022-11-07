#include <stdio.h>

int factorial(int n);

int main()
{
    int k;
    k = factorial(5);
    printf("%d", k);
    return 0;
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return (n * factorial(n - 1));
}