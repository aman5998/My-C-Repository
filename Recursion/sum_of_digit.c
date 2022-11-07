#include <stdio.h>
int digit(int n);
int main()
{
    int s;
    s = digit(7861);
    printf("%d", s);
    return 0;
}
int digit(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + digit(n / 10));
}