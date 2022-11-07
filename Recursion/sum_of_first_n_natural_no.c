#include <stdio.h>
int sum(int n);

int main()
{
    int k;
    k = sum(10);
    printf("%d", k);
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return 1;
    return (n + sum(n - 1));
}