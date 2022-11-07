#include <stdio.h>
int add();
int main()
{
    int s;
    s = add();
    printf("Sum is %d", s);
    return 0;
}
int add()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}