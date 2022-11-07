#include <stdio.h>
int prime(int n); // Function declaration
int main()
{
    prime(91); // Function call --> call by value
    return 0;
}
int prime(int n) // Function definition
{
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    if (n == i)
        printf("This is prime number");
    else
        printf("This not a prime number");
    return 0;
}