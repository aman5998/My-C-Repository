#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int code;
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101; 
    ptr->code = 101; // same as line no. 17 
    printf("%d",e1.code);

    return 0;
}