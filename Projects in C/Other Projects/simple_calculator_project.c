// Simple Calculator C Project
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float num1, num2, answer;
    char operators;

    printf("Enter calculation: ");
    scanf("%f %c %f", &num1, &operators, &num2);

    switch (operators)
    {
    case '/':
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;

    case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;

    case '-':
        printf("%.2f- %.2f = %.2f", num1, num2, num1 - num2);
        break;

    case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;

    case '^':
        printf("%.2f ^ %.2f = %.2f", num1, num2, pow(num1, num2));
        break;
        
    default:
        printf("Invalid Operator\n");
    }
    return 0;
}