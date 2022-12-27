// 2. Write a program in C to check whether a number is Prime or not.

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
            break;
    }

    if (num == i)
        printf("This is Prime Number");
    else
        printf("This is not Prime Number");

    return 0;
}
