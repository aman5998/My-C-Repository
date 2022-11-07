#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    float radius;
    float p = 3.14159, area;
    int length, width, area2;
    float num1, num2, num3, avg;

    while (1)
    {
        printf("\n1. Area of circle\n");
        printf("2. Area of rectangle\n");
        printf("3. Average of three numbers\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter the radius of circle: ");
            scanf("%f", &radius);
            area = p * radius * radius;
            printf("The Area of circle is %.2f", area);
            break;
        case 2:
            printf("Enter the length of the Rectangle: ");
            scanf("%d", &length);
            printf("Enter the width of the Rectangle: ");
            scanf("%d", &width);
            area2 = length * width;
            printf("Area of Rectangle is %d", area);
            break;
        case 3:
            printf("Enter the number 1: ");
            scanf("%f", &num1);
            printf("Enter the number 2: ");
            scanf("%f", &num2);
            printf("Enter the number 3: ");
            scanf("%f", &num3);
            avg = (num1 + num2 + num3) / 3;
            printf("Average of three number is %.2f", avg);
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice");
            break;
        } // end of switch
    }     // end of while
    return 0;
}