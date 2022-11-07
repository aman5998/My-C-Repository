#include <stdio.h>
void add(int a, int b);
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    add(x, y); // call by value // x and y is actual arguments/parameters
    add(3,5);
    return 0;
}
void add(int a, int b) // a and b is formal arguments/parameters
{
    int c;
    c = a + b;
    printf("Sum is %d", c);
}