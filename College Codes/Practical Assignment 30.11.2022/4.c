// 4. Write a program to find all prime numbers from 1 to n.

#include <stdio.h>

int main()
{
    int num, i, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("All prime numbers between 1 to %d are: \n", num);

    for (j = 2; j <= num; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }

    return 0;
}