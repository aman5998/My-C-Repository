#include <stdio.h>
void odd_numbers(int a);
int main()
{
    odd_numbers(8);
    return 0;
}
void odd_numbers(int a)
{
    int i;
    while (i <= a)
    {
        printf("%d ", 2 * i - 1);
        i++;
    }
}