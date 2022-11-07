#include <stdio.h>

int main()
{
    int a, b, sum, difference;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    difference = a - b;

    printf("Sum is %d\n", sum);
    printf("Difference is %d\n", difference);
    return 0;
}