#include <stdio.h>
int fibonacci(int n);

int main()
{
    int k;
    k = fibonacci(8);
    printf("%d", k);
    return 0;
}
int fibonacci(int n)
{
    int prevNum = 1, currNum = 1, prevPervNum, i;
    for (i = 1; i <= n; i++)
    {
        prevPervNum = prevNum;
        prevNum = currNum;
        currNum = prevNum + prevPervNum;
    }
    return currNum; // This is not recursive method.
}