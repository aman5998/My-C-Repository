// 14. Write a C program to input basic salary of an
// employee and calculate its Gross salary according to
// following:

// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <stdio.h>

int main()
{
    float BasicSalary, GrossSalary, hra, da;

    printf("Enter basic salary of an employee: ");
    scanf("%f", &BasicSalary);

    if (BasicSalary <= 10000)
    {
        hra = BasicSalary * 0.2;
        da = BasicSalary * 0.8;
    }
    else if (BasicSalary > 20000)
    {
        hra = BasicSalary * 0.3;
        da = BasicSalary * 0.95;
    }
    else
    {
        hra = BasicSalary * 0.25;
        da = BasicSalary * 0.9;
    }

    GrossSalary = BasicSalary + hra + da;
    
    printf("GROSS SALARY OF EMPLOYEE = %.2f", GrossSalary);

    return 0;
}