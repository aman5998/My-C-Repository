#include <stdio.h>
int oddsum(int n);

int main()
{
    int s;
    s = oddsum(6);
    printf("%d", s);
    return 0;
}
int oddsum(int n)
{
    int k;
    if (n == 1)
        return 1;
    k = 2 * n - 1 + oddsum(n - 1);
    return (k);
}