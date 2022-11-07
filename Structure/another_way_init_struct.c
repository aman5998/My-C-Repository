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
    struct employee aman = {"Amankumar", 34243, 3434.98};

    printf("Name is : %s \n", aman.name);
    printf("Code is : %d \n", aman.code);
    printf("Salary is : %.2f \n", aman.salary);

    printf("Address of Name is : %u \n", &aman.name);
    printf("Address of Code is : %u \n", &aman.code);
    printf("Address of Salary is : %u \n", &aman.salary);

    struct employee aniket = {0}; // When you want set all elements to 0

    printf("Name is : %s \n", aniket.name);
    printf("Code is : %d \n", aniket.code);
    printf("Salary is : %.2f \n", aniket.salary);

    return 0;
}