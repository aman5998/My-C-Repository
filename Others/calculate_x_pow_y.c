#include <stdio.h>

int main()
{
    int x, y, sum=1, i;
    printf("Enter a value of x: ");
    scanf("%d", &x);
    printf("Enter a value of y: ");
    scanf("%d", &y);
    for (i = 1; i <= y; i++)
    {
        sum *= x;
    }
    printf("%d", sum);
    return 0;
}