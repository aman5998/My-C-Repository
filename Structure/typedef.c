#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[10];
    int code;
    float salary;
} emp;

void show(emp emp1)
{
    printf("The code of employee is %d:\n", emp1.code);
    printf("The name of employee is %s:\n", emp1.name);
    printf("The salary of employee is %f:\n", emp1.salary);
}

int main()
{
    // Declaring ptr and e1
    emp e1;
    emp *ptr;

    // Pointing e1 to ptr 
    ptr = &e1;

    // Set the member values for e1
    ptr->code = 101;
    ptr->salary = 4353.45;
    strcpy(ptr->name, "Aman");

    show(e1);

    return 0;
}