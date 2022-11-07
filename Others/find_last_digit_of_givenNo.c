#include <stdio.h>

int main(){
    int num, lastDigit;
    printf("Enter the Number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    printf("The Last Digit of a Given Number %d =  %d", num, lastDigit);
    return 0;
}