#include <stdio.h>
int nextPrime(int n);

int main()
{
    int n, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = nextPrime(n);
    printf("The next prime number is %d", x);
    return 0;
}
int nextPrime(int n)
{
    int i, j;
    for (i = n + 1;; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            return (j);
    }
}