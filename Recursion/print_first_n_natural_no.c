#include <stdio.h>
void Nprint(int n);

int main()
{
    Nprint(10);
    return 0;
}
void Nprint(int n)
{
    if (n > 0)
    {
        Nprint(n - 1);
        printf("%d ", n);
    }
}