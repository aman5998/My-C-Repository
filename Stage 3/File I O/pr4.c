#include <stdio.h>

int main()
{
    FILE *ptr;

    char name[25];
    int age;
    float salary;
    ptr = fopen("data.txt", "w");

    printf("Enter Your Name: ");
    gets(name);
    fprintf(ptr, "Name = %s\n", name);
    printf("Enter Your age: ");
    scanf("%d", &age);
    fprintf(ptr, "Age = %d\n", age);
    printf("Enter Your salary: ");
    scanf("%f", &salary);
    fprintf(ptr, "Salary = %.2f\n", salary);

    fclose(ptr);

    return 0;
}