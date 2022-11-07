#include <stdio.h>
void evenReverse(int n);
int main()
{
    evenReverse(11);
    return 0;
}
void evenReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2);
        evenReverse(n - 1);
    }
}