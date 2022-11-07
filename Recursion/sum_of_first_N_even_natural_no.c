#include <stdio.h>
int evensum(int n);
int main()
{
    int k;
    k = evensum(5);
    printf("%d", k);
    return 0;
}
int evensum(int n)
{
    if (n == 1)
        return 2;
    return (2 * n + evensum(n - 1));
}