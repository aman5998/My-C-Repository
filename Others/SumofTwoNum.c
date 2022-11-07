#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum of two numbers %d + %d is %d", num1, num2, sum);
    return 0;
}