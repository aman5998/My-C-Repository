#include<stdio.h>

int main(){
    float num1,num2,num3;
    printf("Enter the number 1: ");
    scanf("%f", &num1);
    printf("Enter the number 2: ");
    scanf("%f", &num2);
    printf("Enter the number 3: ");
    scanf("%f", &num3);

    float avg = (num1+num2+num3)/3;
    printf("Average of three number is %.2f", avg);
    return 0;
}