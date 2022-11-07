#include <stdio.h>
void oddreverse(int n);
int main()
{
    oddreverse(8);
    return 0;
}
void oddreverse(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n - 1);
        oddreverse(n - 1);
    }
}