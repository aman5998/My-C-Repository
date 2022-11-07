// Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)

#include<stdio.h>

int main(){
    int s, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    s=num/10*10;
    printf("%d",s);
    return 0;
}