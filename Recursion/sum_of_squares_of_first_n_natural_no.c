#include <stdio.h>
int squareSum(int n);
int main()
{
    int s;
    s = squareSum(5);
    printf("%d", s);
    return 0;
}
int squareSum(int n)
{
    int k;
    if (n == 1)
        return 1;
    k = n * n + squareSum(n - 1);
    return (k);
}