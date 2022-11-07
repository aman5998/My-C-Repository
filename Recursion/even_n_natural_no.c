#include <stdio.h>
void even(int n);
int main()
{
    even(11);
    return 0;
}
void even(int n)
{
    if (n > 0)
    {
        even(n - 1);
        printf("%d ", n*2);
    }
}