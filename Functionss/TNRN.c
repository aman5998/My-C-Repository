#include <stdio.h>
// Function declaration
void add();

int main()
{
    add(); // Function call
    return 0;
}
// Function definition
void add() // Empty Parenthesis means takes nothing
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum is %d", c);
    // No return keyword means returns nothing
}