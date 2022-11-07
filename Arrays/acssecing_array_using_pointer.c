#include <stdio.h>

int main()
{
    int marks[5], i;
    // int *ptr = &marks[0];
    int *ptr = marks; // Same as line no 6
    for (i = 0; i < 5; i++)
    {
        printf("Enter the marks of %dth student: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (i = 0; i < 5; i++)
        printf("The marks of student %d is %d\n", i + 1, marks[i]);
    return 0;
}