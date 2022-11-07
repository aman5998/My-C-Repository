#include <stdio.h>
void Nreverse(int n);

int main()
{
    Nreverse(10);
    return 0;
}
void Nreverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        Nreverse(n - 1);
    }
}