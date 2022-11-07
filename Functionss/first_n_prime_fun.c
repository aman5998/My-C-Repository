#include <stdio.h>
void primeN(int n);
int main()
{
    primeN(8);
    return 0;
}
void primeN(int n) // Function definition
{
    int i, x = 2;
    while (n)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
                break;
        }
        if (x == i)
        {
            printf("%d ", x);
            n--;
        }
        x++;
    }
}