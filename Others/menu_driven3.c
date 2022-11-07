#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        int x;
        printf("1. Isosceles triangle or not\n");
        printf("2. Right angled triangle or not\n");
        printf("3. Equilateral triangle or not\n");
        printf("4. Exit\n");
        printf("Choose any of them--> ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
        {
            int a, b, c;
            printf("Enter all three sides of triangle: \n");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b || b == c || c == a)
                printf("This Triangle is a isosceles triangle\n");
            else
                printf("This is not a isosceles triangle\n");
        }
        break;
        case 2:
        {
            int x, y, z;
            printf("Input the three sides of a triangle:\n");
            scanf("%d %d %d", &x, &y, &z);
            if ((x * x) + (y * y) == (z * z) || (x * x) + (z * z) == (y * y) || (y * y) + (z * z) == (x * x))
                printf("It is a right angle triangle!\n");
            else
                printf("It is not a right angle triangle!\n");
        }
        break;
        case 3:
        {
            int a, b, c;
            printf("Enter all three sides of triangle: \n");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b && b == c)
                printf("This Triangle is a equilateral triangle\n");
            else
                printf("This is not a equilateral triangle\n");
        }
        break;
        case 4:
            exit(0);
        default:
            printf("Enter a valid number!!\n");
            break;
        }
    }
    return 0;
}