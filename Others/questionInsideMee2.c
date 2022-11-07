/*Write a program to take a three digit
number from the user and rotate its
digits by one position towards the right.*/

#include <stdio.h>

int main()
{
    int num, r;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    r = num % 10 * 100 + num / 10;
    printf("%d", r);
    return 0;
}