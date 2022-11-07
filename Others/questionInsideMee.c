/*Write a program to input a number from the user and also input a digit.
Append a digit in the number and print the resulting number.
(Example - number=234 and digit=9 then the resulting number is 2349)*/
//😊 Very easy 😉
#include<stdio.h>

int main(){
    int num, digit;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter a digit to append: ");
    scanf("%d", &digit);
    printf("number=%d and digit=%d then the resulting number is %d%d",num,digit,num,digit);
    return 0;
}