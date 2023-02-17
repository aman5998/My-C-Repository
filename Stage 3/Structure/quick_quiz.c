#include <stdio.h>

struct employee
{
    int id;
    char name[25];
    float salary;
};

int main()
{
    struct employee e1, e2, e3;
    
    printf("Enter your id--> employee 1: ");
    scanf("%d",&e1.id);
    printf("Enter your name--> employee 1: ");
    scanf("%s",e1.name);
    printf("Enter your salary--> employee 1: ");
    scanf("%f",&e1.salary);

    printf("Enter your id--> employee 2: ");
    scanf("%d",&e2.id);
    printf("Enter your name--> employee 2: ");
    scanf("%s",e2.name);
    printf("Enter your salary--> employee 2: ");
    scanf("%f",&e2.salary);

    printf("Enter your id--> employee 3: ");
    scanf("%d",&e3.id);
    printf("Enter your name--> employee 3: ");
    scanf("%s",e3.name);
    printf("Enter your salary--> employee 3: ");
    scanf("%f",&e3.salary);

    return 0;
}