#include <stdio.h>
int fibo(int n);
int main()
{
    int n=25, i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
