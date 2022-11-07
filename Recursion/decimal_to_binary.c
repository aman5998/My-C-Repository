#include <stdio.h>
void converter(int n);
int main()
{
    converter(43);
    return 0;
}
void converter(int n)
{
    if (n == 1)
        printf("1");
    else
    {
        converter(n / 2);
        printf("%d", n % 2);
    }
}