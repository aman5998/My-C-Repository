// 5. Write a program in C to check whether a number is Palindrome or not.

#include <stdio.h>

int main()
{
    int num, rem, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (temp == rev)
        printf("This is Palindrome Number");
    else
        printf("This is not Palindrome Number");

    return 0;
}