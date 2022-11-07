#include <stdio.h>
int tenTimes(int *a);

int main()
{
    int i = 4;
    printf("%d\n", tenTimes(&i));
    printf("%d", i);
    return 0;
}

int tenTimes(int *a)
{
    return *a *= 10;
}