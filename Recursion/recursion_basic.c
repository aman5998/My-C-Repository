#include <stdio.h>

int f1(int n); // This function is for sum of first N natural numbers
int main()
{
    int k;
    k = f1(10);
    printf("%d", k);
    return 0;
}
int f1(int n)
{
    int s;
    if (n == 1)
        return 1;
    s = n + f1(n - 1); // In this line function call itself that's why
    return (s);       //  its recursive function and this is called recursion.
} 