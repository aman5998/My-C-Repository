#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int code;
    float salary;
};

void show(struct employee emp)
{
    printf("The code of employee is %d:\n", emp.code);
    printf("The name of employee is %s:\n", emp.name);
    printf("The salary of employee is %f:\n", emp.salary);
}

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101;
    ptr->code = 101; // same as line no. 17
    ptr->salary = 4353.45;
    strcpy(ptr->name, "Aman");

    show(e1);
    
    return 0;
}