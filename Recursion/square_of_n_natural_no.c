#include <stdio.h>
void square();
int main()
{
    square(8);
    return 0;
}
void square(int n)
{
    if (n > 0)
    {
        square(n - 1);
        printf("%d ", n * n);
    }
}