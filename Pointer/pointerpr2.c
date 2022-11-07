#include <stdio.h>
void address(int a);

int main()
{
    int i = 4;
    printf("The address of variable i is %u\n", &i);
    address(i);
    return 0;
}
void address(int a)
{
    printf("The address of variable a is %u\n", &a);
}