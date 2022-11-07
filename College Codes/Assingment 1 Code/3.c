#include <stdio.h>

int main()
{
    int a, b, quotient, remainder;

    printf("Enter a numbers: ");
    scanf("%d", &a);
    printf("Enter a numbers: ");
    scanf("%d", &b);

    quotient = a / b;
    remainder = a % b;

    printf("Actual result of integer division is quotient %d and remainder %d", quotient, remainder);
    return 0;
}