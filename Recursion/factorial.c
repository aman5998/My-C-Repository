#include <stdio.h>
int fact(int n);
int main()
{
    int k;
    k = fact(10);
    printf("%d",k);
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    return (n * fact(n - 1));
}