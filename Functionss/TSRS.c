#include <stdio.h>

int add(int a, int b);
int main()
{
    int x, y, s;
    printf("Enter a number: ");
    scanf("%d%d", &x, &y);
    s = add(x, y);
    printf("Sum is %d", s);
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}