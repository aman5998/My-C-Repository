#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    int a = 23;
    char b = 'e';
    float x = 49.3;
    // employee e1;
    // e1.salary = 4356.442;-->won't work without employee structure

    struct employee e1;
    e1.code = 12129; // .(dot) is member access operator
    e1.salary = 230.56;
    // e1.name = "Aniket"; --> This won't work
    strcpy(e1.name, "Aniket");

    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s\n",e1.name);
    
    return 0;
}