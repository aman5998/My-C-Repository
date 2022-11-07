// Write a recursive function to find the nth term of Fibonacci series.
#include <stdio.h>
int fibo(int n);
int main()
{
    int k;
    k = fibo(2);
    printf("%d", k);
    return 0;
}
int fibo(int n)
{
    if (n <= 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}