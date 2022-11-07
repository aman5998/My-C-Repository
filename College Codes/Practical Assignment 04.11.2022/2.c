// 2. Write a program in C to find the
// greater number between two numbers.

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
        printf("%d is the greatest number", n1);
    else
        printf("%d is the greatest number", n2);

    return 0;
}