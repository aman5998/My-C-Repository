// 5. Write a program to find the sum of all prime numbers from 1 to n.

#include <stdio.h>

int main()
{
    int num, i, j, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of prime numbers between 1 to %d are: ", num);

    for (j = 2; j <= num; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
                break;
        }
        if (i == j)
            sum += i;
    }

    printf("%d", sum);
    
    return 0;
}