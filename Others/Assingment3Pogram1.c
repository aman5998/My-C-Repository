/*Write a c program to perform the modular division,
finding the quotient and actual division.*/
// Modular Division Symbol is --> %

#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Remainder = %d\n", remainder);
    printf("Quotient = %d", quotient);
    
    return 0;
}