// print the Fibonacci series to n term.
// n will be provided as input by the user.

#include <stdio.h>

int main()
{
    int n, i = 1, a = 0, b = 1, c;

    printf("How much term do you want to print: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }

    return 0;
}