/*write a program to check whether a
given number is positive or non positive only. (with else)*/

#include <stdio.h>
int main()
{
    int num;
    printf("Input a number :");
    scanf("%d", &num);
    if (num > 0)
    printf("%d is a Positive number \n", num);
    else
    printf("%d is a non-Positive number \n", num);
    return 0;
}