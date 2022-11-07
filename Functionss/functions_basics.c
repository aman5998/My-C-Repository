#include <stdio.h>

int main()
{
    a();
    b();
    a();
    return 0;
}
a()
{
    printf("HEllo");
}
b()
{
    printf("Bye");
    a();
}