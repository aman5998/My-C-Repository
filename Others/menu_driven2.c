#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int x;
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Choose any of them--> \n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
        {
            int a, b, sum;
            printf("Enter number one: ");
            scanf("%d", &a);
            printf("Enter number two: ");
            scanf("%d", &b);
            sum = a + b;
            printf("Addition of %d and %d is %d\n", a, b, sum);
        }
        break;
        case 2:
        {
            int a, b, subs;
            printf("Enter number one: ");
            scanf("%d", &a);
            printf("Enter number two: ");
            scanf("%d", &b);
            subs = a - b;
            printf("Subtraction of %d and %d is %d\n", a, b, subs);
        }
        break;
        case 3:
        {
            int a, b, multi;
            printf("Enter number one: ");
            scanf("%d", &a);
            printf("Enter number two: ");
            scanf("%d", &b);
            multi = a * b;
            printf("Multiplication of %d and %d is %d\n", a, b, multi);
        }
        break;
        case 4:
        {
            int a, b, div;
            printf("Enter number one: ");
            scanf("%d", &a);
            printf("Enter number two: ");
            scanf("%d", &b);
            div = a / b;
            printf("Subtraction of %d and %d is %d\n", a, b, div);
        }
        break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice");
            break;
        }
    }
    return 0;
}