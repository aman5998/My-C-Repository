#include <stdio.h>
int check(int a);

int main()
{
    printf("%d", check(5));
    return 0;
}
int check(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}