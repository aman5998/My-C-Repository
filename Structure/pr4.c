/* Write a program to illustrate the use of arrow operator -> in C. */

#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[30];
    int roll;
    float marks;
} student;

int main()
{
    student s1, s2;
    student *ptr1, *ptr2;

    ptr1 = &s1;
    ptr2 = &s2;

    strcpy((*ptr1).name, "Aman");
    (*ptr1).roll = 34;
    (*ptr1).marks = 565.9;

    strcpy(ptr2->name, "Aniket");
    ptr2->roll = 56;
    ptr2->marks = 324.1;

    printf("Student 1---------->\n");
    printf("Name = %s\n", (*ptr1).name);
    printf("Roll = %d\n", (*ptr1).roll);
    printf("Marks = %.1f\n", (*ptr1).marks);

    printf("Student 2---------->\n");
    printf("Name = %s\n", ptr2->name);
    printf("Roll = %d\n", ptr2->roll);
    printf("Marks = %.1f\n", ptr2->marks);

    return 0;
}